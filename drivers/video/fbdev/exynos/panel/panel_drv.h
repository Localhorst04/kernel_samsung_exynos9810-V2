/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) Samsung Electronics Co., Ltd.
 * Author: Minwoo Kim <minwoo7945.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __PANEL_DRV_H__
#define __PANEL_DRV_H__

#include <linux/device.h>
#include <linux/fb.h>
#include <linux/notifier.h>
#include <linux/kernel.h>
#include <linux/regulator/consumer.h>
#include <linux/delay.h>
#include <linux/io.h>
#include <media/v4l2-subdev.h>
#include <linux/workqueue.h>
#include <linux/miscdevice.h>

#include "../dpu_everest/disp_err.h"
#include "../dpu_everest/dsim.h"
#include "../dpu_everest/decon.h"
#include "../dpu_everest/panels/decon_lcd.h"
#include "panel.h"
#include "mdnie.h"
#include "copr.h"
#ifdef CONFIG_SUPPORT_DDI_FLASH
#include "panel_poc.h"
#endif
#ifdef CONFIG_ACTIVE_CLOCK
#include "active_clock.h"
#endif
#ifdef CONFIG_EXTEND_LIVE_CLOCK
#include "./aod/aod_drv.h"
#endif
#if defined(CONFIG_TDMB_NOTIFIER)
#include <linux/tdmb_notifier.h>
#endif

extern int panel_log_level;

void clear_disp_det_pend(struct panel_device *panel);

#define panel_err(fmt, ...)							\
	do {									\
		if (panel_log_level >= 3) {					\
			pr_err(pr_fmt(fmt), ##__VA_ARGS__);			\
		}								\
	} while (0)

#define panel_warn(fmt, ...)							\
	do {									\
		if (panel_log_level >= 4) {					\
			pr_warn(pr_fmt(fmt), ##__VA_ARGS__);			\
		}								\
	} while (0)
#define panel_info(fmt, ...)							\
	do {									\
		if (panel_log_level >= 6)					\
			pr_info(pr_fmt(fmt), ##__VA_ARGS__);			\
	} while (0)
#define panel_dbg(fmt, ...)							\
	do {									\
		if (panel_log_level >= 6)					\
			pr_info(pr_fmt(fmt), ##__VA_ARGS__);			\
	} while (0)

#ifdef CONFIG_OLD_DISP_TIMING
enum {
	REGULATOR_1p8V = 0,
	REGULATOR_3p0V,
	REGULATOR_1p6V,
	REGULATOR_MAX
};
#define REGULATOR_1_NAME "regulator,1p8"
#define REGULATOR_2_NAME "regulator,3p0"
#define REGULATOR_3_NAME "regulator,1p6"
#else
enum {
	REGULATOR_3p0V = 0,
	REGULATOR_1p8V,
	REGULATOR_1p6V,
	REGULATOR_MAX
};
#define REGULATOR_1_NAME "regulator,3p0"
#define REGULATOR_2_NAME "regulator,1p8"
#define REGULATOR_3_NAME "regulator,1p6"

#endif
enum panel_gpio_lists {
	PANEL_GPIO_RESET = 0,
	PANEL_GPIO_DISP_DET,
	PANEL_GPIO_PCD,
	PANEL_GPIO_ERR_FG,
	PANEL_GPIO_MAX,
};

#define GPIO_NAME_RESET		"gpio,lcd-reset"
#define GPIO_NAME_DISP_DET	"gpio,disp-det"
#define GPIO_NAME_PCD		"gpio,pcd"
#define GPIO_NAME_ERR_FG	"gpio,err_fg"

struct panel_pad {
	int gpio_reset;
	int gpio_disp_det;
	int gpio_pcd;
	int gpio_err_fg;

	int irq_disp_det;
	int irq_pcd;
	int irq_err_fg;

	struct regulator *regulator[REGULATOR_MAX];

	void __iomem *pend_reg_disp_det;
	int pend_bit_disp_det;
};

struct mipi_drv_ops {
	int (*read)(u32 id, u8 addr, u8 ofs, u8 *buf, int size);
	int (*write)(u32 id, u8 cmd_id, const u8 *cmd, u8 ofs, int size);
	enum dsim_state(*get_state)(u32 id);
	void (*parse_dt)(struct device_node *node, struct decon_lcd *lcd_info);
};

#define PANEL_INIT_KERNEL		0
#define PANEL_INIT_BOOT			1

#define PANEL_DISCONNECT		0
#define PANEL_CONNECT			1

#define ALPM_MODE	0
#define HLPM_MODE	1

enum panel_active_state {
	PANEL_STATE_OFF = 0,
	PANEL_STATE_ON,
	PANEL_STATE_NORMAL,
	PANEL_STATE_ALPM,
};

enum panel_power {
	PANEL_POWER_OFF = 0,
	PANEL_POWER_ON
};

enum {
	PANEL_DISPLAY_OFF = 0,
	PANEL_DISPLAY_ON,
};

enum {
	PANEL_HMD_OFF = 0,
	PANEL_HMD_ON,
};

struct panel_state {
	int init_at;
	int connect_panel;
	int cur_state;
	int power;
	int disp_on;
#ifdef CONFIG_SUPPORT_HMD
	int hmd_on;
#endif
	int lpm_brightness;
};

struct copr_spi_gpios {
	int gpio_sck;
	int gpio_miso;
	int gpio_mosi;
	int gpio_cs;
};

struct host_cb {
	int (*cb)(void *data);
	void *data;
};

enum GAMMA_FLASH_RESULT {
	GAMMA_FLASH_ERROR_MTP_OFFSET = -4,
	GAMMA_FLASH_ERROR_CHECKSUM_MISMATCH = -3,
	GAMMA_FLASH_ERROR_NOT_EXIST = -2,
	GAMMA_FLASH_ERROR_READ_FAIL = -1,
	GAMMA_FLASH_PROGRESS = 0,
	GAMMA_FLASH_SUCCESS = 1,
};

struct dim_flash_result {
	u8 mtp_reg[34];
	u8 mtp_flash[34];
	bool exist;

	u32 dim_chksum_ok;
	u32 dim_chksum_by_calc;
	u32 dim_chksum_by_read;

	u32 mtp_chksum_ok;
	u32 mtp_chksum_by_calc;
	u32 mtp_chksum_by_read;
};

struct panel_work {
	struct mutex lock;
	struct workqueue_struct *wq;
	struct delayed_work dwork;
	struct dim_flash_result result;
	atomic_t running;
	int ret;
};

struct panel_device {
	int id;
	int dsi_id;

	struct spi_device *spi;
	struct copr_info copr;
	struct copr_spi_gpios spi_gpio;

	/* mutex lock for panel operations */
	struct mutex op_lock;
	/* mutex lock for panel's data */
	struct mutex data_lock;
	/* mutex lock for panel's ioctl */
	struct mutex io_lock;

	struct device *dev;
	struct mdnie_info mdnie;

	struct lcd_device *lcd;
	struct panel_bl_device panel_bl;

	unsigned char panel_id[3];

	struct v4l2_subdev sd;

	struct panel_pad pad;

	struct decon_lcd lcd_info;

	struct mipi_drv_ops mipi_drv;

	struct panel_state state;

	struct workqueue_struct *disp_det_workqueue;
	struct work_struct disp_det_work;
	struct notifier_block fb_notif;
#ifdef CONFIG_DISPLAY_USE_INFO
	struct notifier_block panel_dpui_notif;
#endif
	struct panel_info panel_data;

#ifdef CONFIG_ACTIVE_CLOCK
	struct act_clock_dev act_clk_dev;
#endif

#ifdef CONFIG_EXTEND_LIVE_CLOCK
	struct aod_dev_info aod;
#endif
#ifdef CONFIG_SUPPORT_DDI_FLASH
	struct panel_poc_device poc_dev;
#endif
#ifdef CONFIG_SUPPORT_TDMB_TUNE
	struct notifier_block tdmb_notif;
#endif
	struct disp_error_cb_info error_cb_info;

	ktime_t ktime_panel_on;
	ktime_t ktime_panel_off;

#ifdef CONFIG_SUPPORT_DIM_FLASH
	struct panel_work dim_flash_work;
#endif
};

#ifdef CONFIG_SUPPORT_DIM_FLASH
int panel_update_dim_type(struct panel_device *panel, u32 dim_type);
#endif

static inline bool IS_PANEL_PWR_ON_STATE(struct panel_device *panel)
{
	return (panel->state.cur_state == PANEL_STATE_ON ||
			panel->state.cur_state == PANEL_STATE_NORMAL ||
			panel->state.cur_state == PANEL_STATE_ALPM);
}

static inline bool IS_PANEL_PWR_OFF_STATE(struct panel_device *panel)
{
	return panel->state.cur_state == PANEL_STATE_OFF;
}

int panel_display_on(struct panel_device *panel);
int __set_panel_power(struct panel_device *panel, int power);

#ifdef CONFIG_EXTEND_LIVE_CLOCK
static inline int panel_aod_init_panel(struct panel_device *panel)
{
	return (panel->aod.ops && panel->aod.ops->init_panel) ?
		panel->aod.ops->init_panel(&panel->aod) : 0;
}

static inline int panel_aod_enter_to_lpm(struct panel_device *panel)
{
	return (panel->aod.ops && panel->aod.ops->enter_to_lpm) ?
		panel->aod.ops->enter_to_lpm(&panel->aod) : 0;
}

static inline int panel_aod_exit_from_lpm(struct panel_device *panel)
{
	return (panel->aod.ops && panel->aod.ops->exit_from_lpm) ?
		panel->aod.ops->exit_from_lpm(&panel->aod) : 0;
}

static inline int panel_aod_doze_suspend(struct panel_device *panel)
{
	return (panel->aod.ops && panel->aod.ops->doze_suspend) ?
		panel->aod.ops->doze_suspend(&panel->aod) : 0;
}

static inline int panel_aod_power_off(struct panel_device *panel)
{
	return (panel->aod.ops && panel->aod.ops->power_off) ?
		panel->aod.ops->power_off(&panel->aod) : 0;
}
#endif

#define PANEL_DRV_NAME "panel-drv"

#define PANEL_IOC_BASE	'P'

#define PANEL_IOC_DSIM_PROBE			_IOW(PANEL_IOC_BASE, 1, struct decon_lcd *)
#define PANEL_IOC_GET_PANEL_STATE		_IOW(PANEL_IOC_BASE, 3, struct panel_state *)
#define PANEL_IOC_DSIM_PUT_MIPI_OPS		_IOR(PANEL_IOC_BASE, 4, struct mipi_ops *)
#define PANEL_IOC_PANEL_PROBE			_IO(PANEL_IOC_BASE, 5)

#define PANEL_IOC_SET_POWER				_IO(PANEL_IOC_BASE, 6)

#define PANEL_IOC_SLEEP_IN				_IO(PANEL_IOC_BASE, 7)
#define PANEL_IOC_SLEEP_OUT				_IO(PANEL_IOC_BASE, 8)

#define PANEL_IOC_DISP_ON				_IO(PANEL_IOC_BASE, 9)

#define PANEL_IOC_PANEL_DUMP			_IO(PANEL_IOC_BASE, 10)

#define PANEL_IOC_EVT_FRAME_DONE		_IOW(PANEL_IOC_BASE, 11, struct timespec *)
#define PANEL_IOC_EVT_VSYNC				_IOW(PANEL_IOC_BASE, 12, struct timespec *)

#define PANEL_IOC_PANEL_RESET			_IO(PANEL_IOC_BASE, 13)

#define PANEL_IOC_DOZE					_IO(PANEL_IOC_BASE, 31)
#define PANEL_IOC_DOZE_SUSPEND			_IO(PANEL_IOC_BASE, 32)

#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
#define PANEL_IOC_SET_DSU				_IOW(PANEL_IOC_BASE, 41, struct dsu_info *)
#endif
#define PANEL_IOC_REG_RESET_CB			_IOR(PANEL_IOC_BASE, 51, struct host_cb *)
#ifdef CONFIG_SUPPORT_INDISPLAY
#define PANEL_IOC_SET_FINGER_SET		_IO(PANEL_IOC_BASE, 61)
#endif

#endif //__PANEL_DRV_H__
