/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3ha8/s6e3ha8_crown_a3_s0_panel.h
 *
 * Header file for S6E3HA8 Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HA8_CROWN_A3_S0_PANEL_H__
#define __S6E3HA8_CROWN_A3_S0_PANEL_H__
#include "../panel.h"
#include "s6e3ha8.h"
#include "s6e3ha8_dimming.h"
#ifdef CONFIG_EXYNOS_DECON_MDNIE_LITE
#include "s6e3ha8_crown_a3_s0_panel_mdnie.h"
#endif
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
#include "s6e3ha8_crown_a3_s0_panel_copr.h"
#endif
#ifdef CONFIG_SUPPORT_DDI_FLASH
#include "s6e3ha8_crown_panel_poc.h"
#endif
#include "s6e3ha8_crown_a3_s0_panel_dimming.h"
#include "s6e3ha8_crown_a3_s0_panel_hmd_dimming.h"
#ifdef CONFIG_SUPPORT_AOD_BL
#include "s6e3ha8_crown_a3_s0_panel_aod_dimming.h"
#endif

#ifdef CONFIG_ACTIVE_CLOCK
#include "../active_clk_img_white.h"
#endif

#ifdef CONFIG_EXTEND_LIVE_CLOCK
#include "s6e3ha8_crown_aod_panel.h"
#include "../aod/aod_drv.h"
#endif

#undef __pn_name__
#define __pn_name__	crown_a3_s0

#undef __PN_NAME__
#define __PN_NAME__	CROWN_A3_S0

static struct seqinfo crown_a3_s0_seqtbl[MAX_PANEL_SEQ];

/* ===================================================================================== */
/* ============================= [S6E3HA8 READ INFO TABLE] ============================= */
/* ===================================================================================== */
/* <READINFO TABLE> IS DEPENDENT ON LDI. IF YOU NEED, DEFINE PANEL's RESOURCE TABLE */


/* ===================================================================================== */
/* ============================= [S6E3HA8 RESOURCE TABLE] ============================== */
/* ===================================================================================== */
/* <RESOURCE TABLE> IS DEPENDENT ON LDI. IF YOU NEED, DEFINE PANEL's RESOURCE TABLE */


/* ===================================================================================== */
/* ============================== [S6E3HA8 MAPPING TABLE] ============================== */
/* ===================================================================================== */
#ifdef CONFIG_SUPPORT_HMD
static u8 crown_a3_s0_hmd_gamma_table[S6E3HA8_HMD_NR_LUMINANCE][S6E3HA8_GAMMA_CMD_CNT - 1];
static u8 crown_a3_s0_hmd_aor_table[S6E3HA8_HMD_NR_LUMINANCE][2] = {
	{ 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 },
	{ 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 },
	{ 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 }, { 0x02, 0x54 },
	{ 0x02, 0x54 }, { 0x03, 0x7F }, { 0x03, 0x7F }, { 0x03, 0x7F }, { 0x03, 0x7F }, { 0x03, 0x7F }, { 0x03, 0x7F },
};
static u8 crown_a3_s0_hmd_elvss_table[S6E3HA8_HMD_NR_LUMINANCE][1] = {
	{ 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 },
	{ 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 },
	{ 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 },
	{ 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 }, { 0x16 },
};
#endif /* CONFIG_SUPPORT_HMD */

static u8 crown_a3_s0_gamma_table[S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][S6E3HA8_GAMMA_CMD_CNT - 1];
static u8 crown_a3_s0_poc_comp_table[S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][2] = {
	{ 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 },
	{ 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x68 }, { 0x0C, 0x6A }, { 0x0C, 0x6C }, { 0x0C, 0x6E }, { 0x0C, 0x70 }, { 0x0C, 0x72 }, { 0x0C, 0x74 },
	{ 0x0C, 0x78 }, { 0x0C, 0x7A }, { 0x0C, 0x7E }, { 0x0C, 0x80 }, { 0x0C, 0x84 }, { 0x0C, 0x88 }, { 0x0C, 0x8C }, { 0x0C, 0x90 }, { 0x0C, 0x94 }, { 0x0C, 0x98 },
	{ 0x0C, 0x9E }, { 0x0C, 0xA4 }, { 0x0C, 0xAA }, { 0x0C, 0xB0 }, { 0x0C, 0xB6 }, { 0x0C, 0xBC }, { 0x0C, 0xC4 }, { 0x0C, 0xCC }, { 0x0C, 0xE0 }, { 0x0C, 0xF4 },
	{ 0x0D, 0x0C }, { 0x0D, 0x25 }, { 0x0D, 0x3E }, { 0x0D, 0x5B }, { 0x0D, 0x78 }, { 0x0D, 0x85 }, { 0x0D, 0x95 }, { 0x0D, 0xA4 }, { 0x0D, 0xB5 }, { 0x0D, 0xC6 },
	{ 0x0D, 0xDA }, { 0x0D, 0xED }, { 0x0E, 0x03 }, { 0x0E, 0x19 }, { 0x0E, 0x30 }, { 0x0E, 0x47 }, { 0x0E, 0x5F }, { 0x0E, 0x77 }, { 0x0E, 0x91 }, { 0x0E, 0xAF },
	{ 0x0E, 0xCC }, { 0x0E, 0xF5 }, { 0x0F, 0x18 }, { 0x0F, 0x3E }, { 0x0F, 0x64 }, { 0x0F, 0x74 }, { 0x0F, 0x84 }, { 0x0F, 0x94 }, { 0x0F, 0xA6 }, { 0x0F, 0xB6 },
	{ 0x0F, 0xC6 }, { 0x0F, 0xD8 }, { 0x0F, 0xEA }, { 0x0F, 0xFC },
	/* HBM */
	{ 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, { 0x0F, 0xFF }, 
	{ 0x0F, 0xFF }, { 0x0F, 0xFF }, 
};

static u8 crown_a3_s0_aor_table[S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][2] = {
	{ 0x0B, 0x74 }, { 0x0B, 0x5E }, { 0x0B, 0x40 }, { 0x0B, 0x2C }, { 0x0B, 0x0E }, { 0x0A, 0xF0 }, { 0x0A, 0xD2 }, { 0x0A, 0xB2 }, { 0x0A, 0x94 }, { 0x0A, 0x72 },
	{ 0x0A, 0x4E }, { 0x0A, 0x29 }, { 0x0A, 0x01 }, { 0x09, 0xD3 }, { 0x09, 0xB2 }, { 0x09, 0x94 }, { 0x09, 0x52 }, { 0x09, 0x34 }, { 0x09, 0x16 }, { 0x08, 0xF6 },
	{ 0x08, 0xB8 }, { 0x08, 0x9A }, { 0x08, 0x54 }, { 0x08, 0x16 }, { 0x07, 0xF8 }, { 0x07, 0xB2 }, { 0x07, 0x71 }, { 0x07, 0x0F }, { 0x06, 0xCC }, { 0x06, 0x84 },
	{ 0x06, 0x20 }, { 0x05, 0xBA }, { 0x05, 0x5C }, { 0x04, 0xEE }, { 0x04, 0x86 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 },
	{ 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 },
	{ 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x22 }, { 0x04, 0x20 }, { 0x03, 0x7E }, { 0x02, 0xF2 }, { 0x02, 0x44 }, { 0x01, 0x8C }, { 0x01, 0x46 }, { 0x01, 0x46 },
	{ 0x01, 0x46 }, { 0x01, 0x46 }, { 0x01, 0x46 }, { 0x01, 0x46 }, { 0x01, 0x46 }, { 0x01, 0x46 }, { 0x01, 0x44 }, { 0x00, 0xFD }, { 0x00, 0xC5 }, { 0x00, 0x7F },
	{ 0x00, 0x34 }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C },
	/* HBM */
	{ 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C }, { 0x00, 0x0C },
	{ 0x00, 0x0C }, { 0x00, 0x0C },
#ifdef CONFIG_LCD_EXTEND_HBM
	/* EXTEND_HBM */
	{ 0x00, 0x0C },
#endif
};

static u8 crown_a3_s0_mps_table[][1] = { { 0xCC }, { 0xDC } };
static u8 crown_a3_s0_elvss_table[][S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][1] = {
	{
		/* OVER_ZERO */
		{ 0x13 }, { 0x13 }, { 0x14 }, { 0x14 }, { 0x15 }, { 0x16 }, { 0x17 }, { 0x18 }, { 0x19 }, { 0x1B },
		{ 0x1D }, { 0x1F }, { 0x21 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x22 }, { 0x21 },
		{ 0x21 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1E }, { 0x1E }, { 0x1D }, { 0x1D }, { 0x1D }, { 0x1C },
		{ 0x1C }, { 0x1B }, { 0x1A }, { 0x1A }, { 0x19 }, { 0x18 }, { 0x18 }, { 0x18 }, { 0x17 }, { 0x17 },
		{ 0x17 }, { 0x17 }, { 0x16 }, { 0x16 },
		/* HBM */
		{ 0x23 }, { 0x22 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1D }, { 0x1C }, { 0x1B }, { 0x19 }, { 0x18 },
		{ 0x17 }, { 0x16 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x00 },
#endif
	},
	{
		/* UNDER_ZERO */
		{ 0x1C }, { 0x1C }, { 0x1C }, { 0x1C }, { 0x1C }, { 0x1C }, { 0x1C }, { 0x20 }, { 0x20 }, { 0x20 },
		{ 0x20 }, { 0x20 }, { 0x20 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x22 }, { 0x21 },
		{ 0x21 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1E }, { 0x1E }, { 0x1D }, { 0x1D }, { 0x1D }, { 0x1C },
		{ 0x1C }, { 0x1B }, { 0x1A }, { 0x1A }, { 0x19 }, { 0x18 }, { 0x18 }, { 0x18 }, { 0x17 }, { 0x17 },
		{ 0x17 }, { 0x17 }, { 0x16 }, { 0x16 },
		/* HBM */
		{ 0x23 }, { 0x22 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1D }, { 0x1C }, { 0x1B }, { 0x19 }, { 0x18 },
		{ 0x17 }, { 0x16 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x00 },
#endif
	},
	{
		/* UNDER_MINUS_FIFTEEN */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x22 }, { 0x21 },
		{ 0x21 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1E }, { 0x1E }, { 0x1D }, { 0x1D }, { 0x1D }, { 0x1C },
		{ 0x1C }, { 0x1B }, { 0x1A }, { 0x1A }, { 0x19 }, { 0x18 }, { 0x18 }, { 0x18 }, { 0x17 }, { 0x17 },
		{ 0x17 }, { 0x17 }, { 0x16 }, { 0x16 },
		/* HBM */
		{ 0x23 }, { 0x22 }, { 0x20 }, { 0x1F }, { 0x1E }, { 0x1D }, { 0x1C }, { 0x1B }, { 0x19 }, { 0x18 },
		{ 0x17 }, { 0x16 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x00 },
#endif
	},
};

static u8 crown_a3_s0_elvss_temp_table[][S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][1] = {
	{
		/* OVER_ZERO */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		/* HBM */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x0 },
#endif
	},
	{
		/* UNDER_ZERO */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		/* HBM */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x0 },
#endif
	},
	{
		/* UNDER_MINUS_FIFTEEN */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		/* HBM */
		{ 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 }, { 0x0 },
		{ 0x0 }, { 0x0 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x0 },
#endif
	},
};

#ifdef CONFIG_SUPPORT_XTALK_MODE
static u8 crown_a3_s0_vgh_table[][1] = {
	{ 0xEB }, /* VGH 7.0V */
	{ 0x6B }, /* VGH 6.2V */
};
#endif

static u8 crown_a3_s0_vint_table[][S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][1] = {
	{
		/* OVER_ZERO */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		/* HBM */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x24 }, { 0x25 },
		{ 0x25 }, { 0x26 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x26 },
#endif
	},
	{
		/* UNDER_ZERO */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		/* HBM */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x24 }, { 0x25 },
		{ 0x25 }, { 0x26 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x26 },
#endif
	},
	{
		/* UNDER_MINUS_FIFTEEN */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 },
		/* HBM */
		{ 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x23 }, { 0x24 }, { 0x25 },
		{ 0x25 }, { 0x26 },
#ifdef CONFIG_LCD_EXTEND_HBM
		/* EXTEND_HBM */
		{ 0x26 },
#endif
	},
};

static u8 crown_a3_s0_acl_onoff_table[][1] = {
	{ 0x00 }, /* acl off */
	{ 0x02 }, /* acl on */
};

static u8 crown_a3_s0_acl_frame_avg_table[][1] = {
	{ 0x44 }, /* 16 Frame Avg */
	{ 0x55 }, /* 32 Frame Avg */
};

static u8 crown_a3_s0_acl_start_point_table[][2] = {
	{ 0x40, 0xFF }, /* 50 Percent */
	{ 0x80, 0x65 }, /* 60 Percent */
};

static u8 crown_a3_s0_acl_opr_table[][1] = {
	{ 0x00 }, /* ACL OFF OPR */
	{ 0x0F }, /* ACL ON OPR_3 */
	{ 0x1E }, /* ACL ON OPR_6 */
	{ 0x26 }, /* ACL ON OPR_8 */
	{ 0x3D }, /* ACL ON OPR_12 */
	{ 0x48 }, /* ACL ON OPR_15 */
};

static u8 crown_a3_s0_irc_mode_table[][1] = {
	{ 0x69 },
	{ 0x29 },
};

static u8 crown_a3_s0_irc_table[S6E3HA8_CROWN_TOTAL_NR_LUMINANCE][S6E3HA8_IRC_VALUE_LEN] = {
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x04, 0x04, 0x04, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x04, 0x04, 0x04, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x05, 0x05, 0x05, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x05, 0x05, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x05, 0x05, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x06, 0x06, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x06, 0x06, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x07, 0x07, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x07, 0x07, 0x07, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x08, 0x08, 0x08, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x08, 0x08, 0x08, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x09, 0x09, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x09, 0x09, 0x09, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0A, 0x0A, 0x0A, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0B, 0x0B, 0x0B, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0B, 0x0B, 0x0B, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0C, 0x0C, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0D, 0x0D, 0x0D, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0E, 0x0E, 0x0E, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x0F, 0x0F, 0x0F, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x10, 0x10, 0x10, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x11, 0x11, 0x11, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x12, 0x12, 0x12, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x13, 0x13, 0x13, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x14, 0x14, 0x14, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x15, 0x15, 0x15, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x17, 0x17, 0x17, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x18, 0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x1A, 0x1A, 0x1A, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x1B, 0x1B, 0x1B, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x1D, 0x1D, 0x1D, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x09 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x1F, 0x1F, 0x1F, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x21, 0x21, 0x21, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x23, 0x23, 0x23, 0x0B, 0x0B, 0x0B, 0x0C, 0x0C, 0x0C },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x25, 0x25, 0x25, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x27, 0x27, 0x27, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x2A, 0x2A, 0x2A, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x2C, 0x2C, 0x2C, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x2F, 0x2F, 0x2F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x32, 0x32, 0x32, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x36, 0x36, 0x36, 0x11, 0x11, 0x11, 0x12, 0x12, 0x12 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x38, 0x38, 0x38, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x3B, 0x3B, 0x3B, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x3F, 0x3F, 0x3F, 0x14, 0x14, 0x14, 0x15, 0x15, 0x15 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x40, 0x40, 0x40, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x41, 0x41, 0x41, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x42, 0x42, 0x42, 0x17, 0x17, 0x17, 0x16, 0x16, 0x16 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x44, 0x44, 0x44, 0x16, 0x16, 0x16, 0x17, 0x17, 0x17 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x45, 0x45, 0x45, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x47, 0x47, 0x47, 0x17, 0x17, 0x17, 0x18, 0x18, 0x18 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x48, 0x48, 0x48, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x4A, 0x4A, 0x4A, 0x18, 0x18, 0x18, 0x19, 0x19, 0x19 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x4B, 0x4B, 0x4B, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19 },
	/* HBM */
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x4F, 0x4F, 0x4F, 0x1A, 0x1A, 0x1A, 0x1B, 0x1B, 0x1B },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x53, 0x53, 0x53, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x58, 0x58, 0x58, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x5C, 0x5C, 0x5C, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x60, 0x60, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x64, 0x64, 0x64, 0x21, 0x21, 0x21, 0x22, 0x22, 0x22 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x68, 0x68, 0x68, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x6C, 0x6C, 0x6C, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x71, 0x71, 0x71, 0x25, 0x25, 0x25, 0x26, 0x26, 0x26 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x75, 0x75, 0x75, 0x26, 0x26, 0x26, 0x27, 0x27, 0x27 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x79, 0x79, 0x79, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28 },
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x7D, 0x7D, 0x7D, 0x2A, 0x2A, 0x2A, 0x29, 0x29, 0x29 },
#ifdef CONFIG_LCD_EXTEND_HBM
	/* EXTEND_HBM */
	{ 0x25, 0x69, 0xD6, 0x62, 0x06, 0x57, 0x53, 0x89, 0x7D, 0x7D, 0x7D, 0x2A, 0x2A, 0x2A, 0x29, 0x29, 0x29 },
#endif
};

static u8 crown_a3_s0_dsc_table[][1] = {
	{ 0x00 },
	{ 0x01 },
};

static u8 crown_a3_s0_pps_table[][128] = {
	{
		// PPS For DSU MODE 1 : 1440x2960 (Original) Slice Info : 720x40
		0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x0B, 0x90,
		0x05, 0xA0, 0x00, 0x28, 0x02, 0xD0, 0x02, 0xD0,
		0x02, 0x00, 0x02, 0x68, 0x00, 0x20, 0x04, 0x6C,
		0x00, 0x0A, 0x00, 0x0C, 0x02, 0x77, 0x01, 0xE9,
		0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
		0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38,
		0x46, 0x54, 0x62, 0x69, 0x70, 0x77, 0x79, 0x7B,
		0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09, 0x40,
		0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8,
		0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
		0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	},
	{
		// PPS For DSU MODE 2 : 1080x2220 Slice Info : 540x30
		0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x08, 0xAC,
		0x04, 0x38, 0x00, 0x1E, 0x02, 0x1C, 0x02, 0x1C,
		0x02, 0x00, 0x02, 0x0E, 0x00, 0x20, 0x02, 0xE3,
		0x00, 0x07, 0x00, 0x0C, 0x03, 0x50, 0x03, 0x64,
		0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
		0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38,
		0x46, 0x54, 0x62, 0x69, 0x70, 0x77, 0x79, 0x7B,
		0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09, 0x40,
		0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8,
		0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
		0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	},
	{
		// PPS For DSU MODE 3 : 720x1048 	 Slice Info : 360x74
		0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x05, 0xC8,
		0x02, 0xD0, 0x00, 0x4A, 0x01, 0x68, 0x01, 0x68,
		0x02, 0x00, 0x01, 0xB4, 0x00, 0x20, 0x05, 0xBA,
		0x00, 0x05, 0x00, 0x0C, 0x01, 0x51, 0x02, 0x10,
		0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
		0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38,
		0x46, 0x54, 0x62, 0x69, 0x70, 0x77, 0x79, 0x7B,
		0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09, 0x40,
		0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8,
		0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
		0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	},
};

static u8 crown_a3_s0_scaler_table[][5] = {
	// scaler off, 1440x2960
	{0x01, 0x26, 0x08, 0x08, 0xF3},
	// 1.78x scaler on, 1080x2220
	{0x02, 0x26, 0x08, 0x08, 0xF3},
	// 4x scaler on, 720x1048
	{0x00, 0x26, 0x08, 0x08, 0xF3},
};

static u8 crown_a3_s0_caset_table[][4] = {
	// scaler off, 1440x2960
	{0x00, 0x00, 0x05, 0x9F},
	// 1.78x scaler on, 1080x2220
	{0x00, 0x00, 0x04, 0x37},
	// 4x scaler on, 720x1048
	{0x00, 0x00, 0x02, 0xCF},
};

static u8 crown_a3_s0_paset_table[][4] = {
	// scaler off, 1440x2960
	{0x00, 0x00, 0x0B, 0x8F},
	// 1.78x scaler on, 1080x2220
	{0x00, 0x00, 0x08, 0xAB},
	// 4x scaler on, 720x1048
	{0x00, 0x00, 0x05, 0xC7},
};

static u8 crown_a3_s0_lpm_nit_table[][4][6] = {
	[ALPM_MODE] = {
		{0x07, 0x0C, 0xBB, 0x4F, 0x4F, 0x84}, // ALPM_2NIT
		{0x07, 0x0C, 0x9B, 0xEE, 0x4F, 0x84}, // ALPM_10NIT
		{0x07, 0x0C, 0x6B, 0x3F, 0x4F, 0x84}, // ALPM_30NIT
		{0x07, 0x0C, 0x0B, 0x10, 0x4F, 0x04}, // ALPM_60NIT
	},
	[HLPM_MODE] = {
		{0x05, 0x0C, 0xBB, 0x4F, 0x4F, 0x84}, // HLPM_2NIT
		{0x05, 0x0C, 0x9B, 0xEE, 0x4F, 0x84}, // HLPM_10NIT
		{0x05, 0x0C, 0x6B, 0x3F, 0x4F, 0x84}, // HLPM_30NIT
		{0x05, 0x0C, 0x0B, 0x10, 0x4F, 0x04}, // HLPM_60NIT
	}
};

static u8 crown_a3_s0_lpm_mode_table[][4][1] = {
	[ALPM_MODE] = {
		{0x03}, // ALPM_2NIT
		{0x02}, // ALPM_10NIT
		{0x02}, // ALPM_30NIT
		{0x02}, // ALPM_60NIT
	},
	[HLPM_MODE] = {
		{0x03}, // HLPM_2NIT
		{0x02}, // HLPM_10NIT
		{0x02}, // HLPM_30NIT
		{0x02}, // HLPM_60NIT
	}
};

static u8 crown_a3_s0_lpm_off_table[][4][1] = {
	[ALPM_MODE] = {
		{0x03},
		{0x03},
		{0x03},
		{0x03},
	},
	[HLPM_MODE] = {
		{0x01},
		{0x01},
		{0x01},
		{0x01},
	}
};

static u8 crown_a3_s0_lpm_dyn_vlin_table[][1] = {
	{ 0x0E },	/* < OPR 2.5 % */
	{ 0x07 },	/* >= OPR 2.5 % */
};

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static u8 crown_a3_s0_vddm_table[][1] = {
	{0x00}, // VDDM ORIGINAL
	{0x0D}, // VDDM LOW VOLTAGE : 0.92V
	{0x2B}, // VDDM HIGH VOLTAGE : 1.08V
};
static u8 crown_a3_s0_gram_img_pattern_table[][1] = {
	{0x00}, // GCT_PATTERN_NONE
	{0x07}, // GCT_PATTERN_1
	{0x05}, // GCT_PATTERN_2
};
/* switch pattern_1 and pattern_2 */
static u8 crown_a3_s0_gram_inv_img_pattern_table[][1] = {
	{0x00}, // GCT_PATTERN_NONE
	{0x05}, // GCT_PATTERN_2
	{0x07}, // GCT_PATTERN_1
};
#endif

#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
static u8 CROWN_A3_S0_OMOK_2CH_LATCH1[] = {
	0xB0, 0x05
};

static u8 CROWN_A3_S0_OMOK_2CH_LATCH2[] = {
	0xFF, 0x01
};

static u8 CROWN_A3_S0_OMOK_ZERO_BLACK1[] = {
	0xB0, 0x07
};

static u8 CROWN_A3_S0_OMOK_ZERO_BLACK2[] = {
	0xF2, 0x3C, 0xD0
};

static DEFINE_STATIC_PACKET(crown_a3_s0_omok_2ch_latch1, DSI_PKT_TYPE_WR, CROWN_A3_S0_OMOK_2CH_LATCH1, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_omok_2ch_latch2, DSI_PKT_TYPE_WR, CROWN_A3_S0_OMOK_2CH_LATCH2, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_omok_zero_black1, DSI_PKT_TYPE_WR, CROWN_A3_S0_OMOK_ZERO_BLACK1, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_omok_zero_black2, DSI_PKT_TYPE_WR, CROWN_A3_S0_OMOK_ZERO_BLACK2, 0);
#endif

static struct maptbl crown_a3_s0_maptbl[MAX_MAPTBL] = {
	[GAMMA_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_gamma_table, init_gamma_table, getidx_dimming_maptbl, copy_gamma_maptbl),
	[AOR_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_aor_table, init_aor_table, getidx_dimming_maptbl, copy_aor_maptbl),
	[MPS_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_mps_table, init_common_table, getidx_mps_table, copy_common_maptbl),
	[TSET_MAPTBL] = DEFINE_0D_MAPTBL(crown_a3_s0_tset_table, init_common_table, NULL, copy_tset_maptbl),
	[ELVSS_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_elvss_table, init_elvss_table, getidx_elvss_temp_table, copy_common_maptbl),
	[ELVSS_TEMP_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_elvss_temp_table, init_elvss_temp_table, getidx_elvss_temp_table, copy_common_maptbl),
#ifdef CONFIG_SUPPORT_XTALK_MODE
	[VGH_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_vgh_table, init_common_table, getidx_vgh_table, copy_common_maptbl),
#endif
	[VINT_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_vint_table, init_vint_table, getidx_elvss_temp_table, copy_common_maptbl),
	[ACL_ONOFF_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_acl_onoff_table, init_common_table, getidx_acl_onoff_table, copy_common_maptbl),
	[ACL_FRAME_AVG_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_acl_frame_avg_table, init_common_table, getidx_acl_onoff_table, copy_common_maptbl),
	[ACL_START_POINT_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_acl_start_point_table, init_common_table, getidx_hbm_onoff_table, copy_common_maptbl),
	[ACL_OPR_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_acl_opr_table, init_common_table, getidx_acl_opr_table, copy_common_maptbl),
	[IRC_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_irc_table, init_irc_table, getidx_dimming_maptbl, copy_irc_maptbl),
	[IRC_MODE_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_irc_mode_table, init_common_table, getidx_irc_mode_table, copy_common_maptbl),
#ifdef CONFIG_SUPPORT_HMD
	[HMD_GAMMA_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_hmd_gamma_table, init_hmd_gamma_table, getidx_hmd_dimming_mtptbl, copy_common_maptbl),
	[HMD_AOR_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_hmd_aor_table, init_hmd_aor_table, getidx_hmd_dimming_mtptbl, copy_common_maptbl),
	[HMD_ELVSS_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_hmd_elvss_table, init_common_table, getidx_hmd_dimming_mtptbl, copy_common_maptbl),
#endif /* CONFIG_SUPPORT_HMD */
	[DSC_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_dsc_table, init_common_table, getidx_dsc_table, copy_common_maptbl),
	[PPS_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_pps_table, init_common_table, getidx_resolution_table, copy_common_maptbl),
	[SCALER_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_scaler_table, init_common_table, getidx_resolution_table, copy_common_maptbl),
	[CASET_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_caset_table, init_common_table, getidx_resolution_table, copy_common_maptbl),
	[PASET_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_paset_table, init_common_table, getidx_resolution_table, copy_common_maptbl),
	[LPM_NIT_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_lpm_nit_table, init_lpm_table, getidx_lpm_table, copy_common_maptbl),
	[LPM_MODE_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_lpm_mode_table, init_common_table, getidx_lpm_table, copy_common_maptbl),
	[LPM_DYN_VLIN_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_lpm_dyn_vlin_table, init_common_table, getidx_lpm_dyn_vlin_table, copy_common_maptbl),
	[LPM_OFF_MAPTBL] = DEFINE_3D_MAPTBL(crown_a3_s0_lpm_off_table, init_common_table, getidx_lpm_table, copy_common_maptbl),
#ifdef CONFIG_ACTIVE_CLOCK
	[ACTIVE_CLK_CTRL_MAPTBL] = DEFINE_0D_MAPTBL(crown_a3_s0_self_clk_ctrl_table, init_common_table, NULL, copy_self_clk_maptbl),
	[ACTIVE_CLK_SELF_DRAWER] = DEFINE_0D_MAPTBL(crown_a3_s0_self_drawer, init_common_table, NULL, copy_self_drawer),
	[ACTIVE_CLK_CTRL_UPDATE_MAPTBL] = DEFINE_0D_MAPTBL(crown_a3_s0_self_clk_update_table, init_common_table, NULL, copy_self_clk_update_maptbl),
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	[VDDM_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_vddm_table, init_common_table, s6e3ha8_getidx_vddm_table, copy_common_maptbl),
	[GRAM_IMG_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_gram_img_pattern_table, init_common_table, s6e3ha8_getidx_gram_img_pattern_table, copy_common_maptbl),
	[GRAM_INV_IMG_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_gram_inv_img_pattern_table, init_common_table, s6e3ha8_getidx_gram_img_pattern_table, copy_common_maptbl),
#endif
	[MCD_RESISTANCE_MAPTBL] = DEFINE_0D_MAPTBL(crown_a3_s0_mcd_resistance_table, init_common_table, NULL, copy_mcd_resistance_maptbl),
	[POC_COMP_MAPTBL] = DEFINE_2D_MAPTBL(crown_a3_s0_poc_comp_table, init_common_table, getidx_dimming_maptbl, copy_common_maptbl),
};

/* ===================================================================================== */
/* ============================== [S6E3HA8 COMMAND TABLE] ============================== */
/* ===================================================================================== */
static u8 CROWN_A3_S0_KEY1_ENABLE[] = { 0x9F, 0xA5, 0xA5 };
static u8 CROWN_A3_S0_KEY2_ENABLE[] = { 0xF0, 0x5A, 0x5A };
static u8 CROWN_A3_S0_KEY3_ENABLE[] = { 0xFC, 0x5A, 0x5A };
static u8 CROWN_A3_S0_KEY1_DISABLE[] = { 0x9F, 0x5A, 0x5A };
static u8 CROWN_A3_S0_KEY2_DISABLE[] = { 0xF0, 0xA5, 0xA5 };
static u8 CROWN_A3_S0_KEY3_DISABLE[] = { 0xFC, 0xA5, 0xA5 };
static u8 CROWN_A3_S0_SLEEP_OUT[] = { 0x11 };
static u8 CROWN_A3_S0_SLEEP_IN[] = { 0x10 };
static u8 CROWN_A3_S0_DISPLAY_OFF[] = { 0x28 };
static u8 CROWN_A3_S0_DISPLAY_ON[] = { 0x29 };

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static u8 CROWN_A3_S0_SW_RESET[] = { 0x01 };
static u8 CROWN_A3_S0_GCT_DSC[] = { 0x9D, 0x01 };
static u8 CROWN_A3_S0_GCT_PPS[] = { 0x9E,
	0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x0B, 0x90,
	0x05, 0xA0, 0x00, 0x28, 0x02, 0xD0, 0x02, 0xD0,
	0x02, 0x00, 0x02, 0xA4, 0x00, 0x20, 0x04, 0x0B,
	0x00, 0x0A, 0x00, 0x0E, 0x02, 0xE0, 0x01, 0xE9,
	0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
	0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38,
	0x46, 0x54, 0x62, 0x69, 0x70, 0x77, 0x79, 0x7B,
	0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09, 0x40,
	0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8,
	0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xB6,
	0x2A, 0xF4, 0x2A, 0xF4, 0x4B, 0x34, 0x63, 0x74,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif
static u8 CROWN_A3_S0_DSC[] = { 0x00 };
static u8 CROWN_A3_S0_PPS[] = {
	// QHD :2960x1440
	0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x08, 0xAC,
	0x04, 0x38, 0x00, 0x1E, 0x02, 0x1C, 0x02, 0x1C,
	0x02, 0x00, 0x02, 0x0E, 0x00, 0x20, 0x02, 0xE3,
	0x00, 0x07, 0x00, 0x0C, 0x03, 0x50, 0x03, 0x64,
	0x18, 0x00, 0x10, 0xF0, 0x03, 0x0C, 0x20, 0x00,
	0x06, 0x0B, 0x0B, 0x33, 0x0E, 0x1C, 0x2A, 0x38,
	0x46, 0x54, 0x62, 0x69, 0x70, 0x77, 0x79, 0x7B,
	0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00, 0x09, 0x40,
	0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19, 0xF8,
	0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
	0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static u8 CROWN_A3_S0_SET_AREA[] = {
	0x1A, 0x1F, 0x00, 0x00, 0x00, 0x00,
};

#ifdef CONFIG_ACTIVE_CLOCK
static u8 CROWN_A3_S0_ENABLE_ACTIVE_CLK[] = {
	0xE3,
	0x00, 0x00, 0x00, 0x08, 0x11, 0x00, 0x00, 0x00,
	0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0A,
	0x0B, 0x00, 0x00, 0x02, 0xD0, 0x02, 0xC3, 0x3C,
	0x13, 0x00, 0x3C, 0x13, 0x00, 0x3C, 0x13, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static u8 CROWN_A3_S0_UPDATE_ACTIVE_CLK[] = {
	0xE3,
	0x00, 0x00, 0x00, 0x08, 0x11, 0x00, 0x00, 0x00,
	0x03, 0x01,
};
static u8 CROWN_A3_S0_DISABLE_ACTIVE_CLK[] = {
	0xE3,
	0x00, 0x00
};
static u8 CROWN_A3_S0_SET_SELF_DRAWER[] = {
	0xE2,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0xCF, 0x02, 0x97, 0x05, 0xA0, 0x0B,
	0x90, 0x01, 0x07, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};

static u8 CROWN_A3_S0_DISABLE_SELF_DRAWER[] = {
	0xE2,
	0x00, 0x00
};
#endif

static u8 CROWN_A3_S0_TE_ON[] = { 0x35, 0x00 };
static u8 CROWN_A3_S0_TE_OFF[] = { 0x34 };
static u8 CROWN_A3_S0_ERR_FG[] = { 0xED, 0x4C };
static u8 CROWN_A3_S0_FFC[] = {
	0xC5,
	0x0D, 0x10, 0xB4, 0x3E, 0x01,
};

static u8 CROWN_A3_S0_TSP_HSYNC[] = {
	0xB9,
	0x01, 0xB0, 0x91, 0x09, 0x00, 0x00, 0x00, 0x11, 0x03
};

static u8 CROWN_A3_S0_GAMMA[S6E3HA8_GAMMA_CMD_CNT] = {
	0xCA,
	0x07, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x00, 0x00, 0x00,
};

static u8 CROWN_A3_S0_POC_COMP1[] = {
	0xB1,
	0x01, 0xAF, 0x54, 0x68, 0xCC, 0x78, 0x30, 0xCC, 0x64, 0xFF
};
static u8 CROWN_A3_S0_POC_COMP2[] = { 0xB8, 0x0F, 0xFF };

static u8 CROWN_A3_S0_AOR[] = { 0xB1, 0x00, 0x0C };
static u8 CROWN_A3_S0_TSET_MPS_ELVSS[] = {
	0xB5,
	0x19,	/* temperature 25 */
	0xDC,	/* MPS_CON : ACL OFF */
	0x0A,	/* ELVSS : MAX */
};
static u8 CROWN_A3_S0_ELVSS_TEMP[] = {
	0xB5,
	0x0C	/* ELVSS TEMP */
};
static u8 CROWN_A3_S0_VGH_VINT[] = {
	0xF4,
	0xEB,	/* VGH */
	0x23	/* VINT */
};

static u8 CROWN_A3_S0_IRC_VALUE[] = {
	0xB8,
	0x20, 0x69, 0xE7, 0x5A, 0x06, 0x57, 0x53, 0x88,
	0x94, 0x94, 0x94, 0x31, 0x31, 0x31, 0x32, 0x32,
	0x32
};
static u8 CROWN_A3_S0_IRC_ON[] = { 0xB8, 0x15 };
static u8 CROWN_A3_S0_IRC_OFF[] = { 0xB8, 0x11 };

static u8 CROWN_A3_S0_GAMMA_UPDATE_ENABLE[] = { 0xF7, 0x03 };
static u8 CROWN_A3_S0_ACL_ONOFF[] = { 0x55, 0x00 };
static u8 CROWN_A3_S0_ACL_CONTROL[] = { 0xB4, 0x00, 0x44, 0x80, 0x65, 0x26, 0x00 };
static u8 CROWN_A3_S0_ACL_DIM_FRM[] = { 0xB4, 0x20 };
#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
static u8 CROWN_A3_S0_SCALER[] = { 0xBA, 0x01, 0x26, 0x08, 0x08, 0xF3};
static u8 CROWN_A3_S0_CASET[] = { 0x2A, 0x00, 0x00, 0x05, 0x9F };
static u8 CROWN_A3_S0_PASET[] = { 0x2B, 0x00, 0x00, 0x09, 0xFF };
#endif
static u8 CROWN_A3_S0_LPM_AOR[] =  { 0xB1, 0x0B, 0x74 };
static u8 CROWN_A3_S0_LPM_NIT[] = {0xBB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
static u8 CROWN_A3_S0_LPM_VOLTAGE[] = {0xBB, 0x88, 0x80};
static u8 CROWN_A3_S0_LPM_MODE[] = { 0x53, 0x00 };
static u8 CROWN_A3_S0_LPM_OFF_NIT[] = {0xBB, 0x05};
static u8 CROWN_A3_S0_AVS_ON[] = { 0xFD, 0x03 };
static u8 CROWN_A3_S0_AVC2_ON[] = { 0xF4, 0xEB, 0x23, 0x0B, 0x17, 0xCA };
static u8 CROWN_A3_S0_AVC2_OFF[] = { 0xF4, 0xEB, 0x23, 0x0B, 0x17, 0x8A };
static u8 CROWN_A3_S0_LPM_DYN_VLIN[] = { 0xB5, 0x07 };
static u8 CROWN_A3_S0_LPM_OFF_DYN_VLIN[] = { 0xB5, 0x38 };

static u8 CROWN_A3_S0_EXIT_ALPM[] = {0x53, 0x00};

static u8 CROWN_A3_S0_ISC[] = { 0xF6, 0x43 };

static u8 CROWN_A3_S0_EDGE_DIMMING[] = { 0xC2, 0x09, 0x00, 0xD8, 0xD8, 0xF4, 0xF4 };

static u8 CROWN_A3_S0_MCD_ON_01[] = { 0xF4, 0xFB };
static u8 CROWN_A3_S0_MCD_ON_02[] = { 0xB1, 0x00, 0x16 };
static u8 CROWN_A3_S0_MCD_ON_03[] = {
	0xCB,
	0x44, 0x00, 0x01, 0x01, 0x09, 0x62, 0x83, 0x0A,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0F, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32,
	0x8B, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x9E, 0x00, 0x9B, 0x00, 0x00,
	0xDA, 0xDA, 0x1A, 0x1B, 0x16, 0x98, 0x06, 0xCF,
	0xC7, 0xC2, 0x1A, 0x1A, 0x1A, 0x1A, 0x9A, 0xDB,
	0xD6, 0xD8, 0xC6, 0x4F
};
static u8 CROWN_A3_S0_MCD_ON_04[] = { 0xF6, 0x00 };
static u8 CROWN_A3_S0_MCD_ON_05[] = { 0xCC, 0x8A };

static u8 CROWN_A3_S0_MCD_OFF_01[] = { 0xF4, 0xEB };
static u8 CROWN_A3_S0_MCD_OFF_03[] = {
	0xCB,
	0x44, 0x00, 0x01, 0x01, 0x09, 0x62, 0x83, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0B, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32,
	0x8B, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x9E, 0x00, 0x00, 0x00, 0x00,
	0xDA, 0xDA, 0x1A, 0x1A, 0x16, 0x98, 0x46, 0xCF,
	0xC7, 0xC2, 0x1A, 0x1A, 0x1A, 0x1A, 0x9A, 0xDA,
	0xD6, 0xD8, 0xC6, 0x0F
};
static u8 CROWN_A3_S0_MCD_OFF_04[] = { 0xF6, 0xC1 };
static u8 CROWN_A3_S0_MCD_OFF_05[] = { 0xCC, 0x89 };

/* MCD 3.0 */
static u8 CROWN_A3_S0_MCD_RS_ON_01[] = { 0xF3, 0x1F };
static u8 CROWN_A3_S0_MCD_RS_ON_02[] = { 0xFD, 0x30 };
static u8 CROWN_A3_S0_MCD_RS_ON_03[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_ON_04[] = { 0xF3, 0x5F };
static u8 CROWN_A3_S0_MCD_RS_ON_05[] = { 0xF3, 0x5E };
static u8 CROWN_A3_S0_MCD_RS_ON_06[] = { 0xF3, 0x5A };
static u8 CROWN_A3_S0_MCD_RS_ON_07[] = { 0xF3, 0x52 };
static u8 CROWN_A3_S0_MCD_RS_ON_08[] = { 0xCC, 0x88 };
static u8 CROWN_A3_S0_MCD_RS_ON_09[] = { 0xF4, 0x97 };

static u8 CROWN_A3_S0_MCD_RS_OFF_01[] = { 0xF4, 0x17 };
static u8 CROWN_A3_S0_MCD_RS_OFF_02[] = { 0xCC, 0x89 };
static u8 CROWN_A3_S0_MCD_RS_OFF_03[] = { 0xF3, 0x5A };
static u8 CROWN_A3_S0_MCD_RS_OFF_04[] = { 0xF3, 0x5E };
static u8 CROWN_A3_S0_MCD_RS_OFF_05[] = { 0xF3, 0x5F };
static u8 CROWN_A3_S0_MCD_RS_OFF_06[] = { 0xCC, 0x89 };
static u8 CROWN_A3_S0_MCD_RS_OFF_07[] = { 0xF3, 0x1F };

static u8 CROWN_A3_S0_MCD_RS_1_RIGHT_01[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_2_RIGHT_01[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_RIGHT_02[] = { 0xCC, 0x10 };
static u8 CROWN_A3_S0_MCD_RS_1_RIGHT_03[] = { 0xCC, 0x80 };
static u8 CROWN_A3_S0_MCD_RS_2_RIGHT_03[] = { 0xCC, 0x40 };
static u8 CROWN_A3_S0_MCD_RS_RIGHT_04[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_RIGHT_05[] = { 0xCC, 0x00 };

static u8 CROWN_A3_S0_MCD_RS_1_LEFT_01[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_2_LEFT_01[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_LEFT_02[] = { 0xCC, 0x01 };
static u8 CROWN_A3_S0_MCD_RS_1_LEFT_03[] = { 0xCC, 0x08 };
static u8 CROWN_A3_S0_MCD_RS_2_LEFT_03[] = { 0xCC, 0x04 };
static u8 CROWN_A3_S0_MCD_RS_LEFT_04[] = { 0xCC, 0x00 };
static u8 CROWN_A3_S0_MCD_RS_LEFT_05[] = { 0xCC, 0x00 };

#ifdef CONFIG_SUPPORT_MST
static u8 CROWN_A3_S0_MST_ON_01[] = { 0xF6, 0x43 };
static u8 CROWN_A3_S0_MST_ON_02[] = { 0xF6, 0xA2, 0x74, 0xC4, 0xCC, 0x91, 0x00, 0x03 };
static u8 CROWN_A3_S0_MST_ON_03[] = { 0xBF, 0x33, 0x25 };
static u8 CROWN_A3_S0_MST_OFF_01[] = { 0xF6, 0x43 };
static u8 CROWN_A3_S0_MST_OFF_02[] = { 0xF6, 0xAA, 0xC1, 0xC4, 0xCC, 0x91, 0x00, 0x07 };
static u8 CROWN_A3_S0_MST_OFF_03[] = { 0xBF, 0x00, 0x07 };
#endif

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static u8 CROWN_A3_S0_VDDM_ORIG[] = { 0xF4, 0x00 };
static u8 CROWN_A3_S0_VDDM_VOLT[] = { 0xF4, 0x00 };
static u8 CROWN_A3_S0_VDDM_INIT[] = { 0xFE, 0x14 };
static u8 CROWN_A3_S0_VDDM_UPDATE_ENABLE[] = { 0xFE, 0xB0 };
static u8 CROWN_A3_S0_VDDM_UPDATE_DISABLE[] = { 0xFE, 0x30 };
static u8 CROWN_A3_S0_GRAM_CHKSUM_START[] = { 0x2C };
static u8 CROWN_A3_S0_GRAM_IMG_PATTERN_ON[] = { 0xBE, 0x00 };
static u8 CROWN_A3_S0_GRAM_INV_IMG_PATTERN_ON[] = { 0xBE, 0x00 };
static u8 CROWN_A3_S0_GRAM_IMG_PATTERN_OFF[] = { 0xBE, 0x00 };
#endif

#ifdef CONFIG_SUPPORT_GRAYSPOT_TEST
static u8 CROWN_A3_S0_GRAYSPOT_ON_01[] = {
	0xF6, 0x00
};
static u8 CROWN_A3_S0_GRAYSPOT_ON_02[] = {
	0xF2, 0x00, 0xE4, 0x3C, 0x90
};
static u8 CROWN_A3_S0_GRAYSPOT_ON_03[] = {
	0xF4, 0xEB, 0x23
};
static u8 CROWN_A3_S0_GRAYSPOT_ON_04[] = {
	0xB5,
	0x19, 0xCC, 0x23, 0x01, 0x34, 0x67, 0x9A, 0xCD,
	0x01, 0x22, 0x33, 0x44, 0x00, 0x00, 0x05, 0x55,
	0xCC, 0x0C, 0x01, 0x11, 0x11, 0x10, 0x12
};
static u8 CROWN_A3_S0_GRAYSPOT_OFF_01[] = {
	0xF6, 0xC1
};
static u8 CROWN_A3_S0_GRAYSPOT_OFF_02[] = {
	0xF2, 0xB4, 0xE4, 0x3C, 0x10
};
#endif

static DEFINE_STATIC_PACKET(crown_a3_s0_level1_key_enable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY1_ENABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_level2_key_enable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY2_ENABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_level3_key_enable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY3_ENABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_level1_key_disable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY1_DISABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_level2_key_disable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY2_DISABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_level3_key_disable, DSI_PKT_TYPE_WR, CROWN_A3_S0_KEY3_DISABLE, 0);

static DEFINE_STATIC_PACKET(crown_a3_s0_sleep_out, DSI_PKT_TYPE_WR, CROWN_A3_S0_SLEEP_OUT, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_sleep_in, DSI_PKT_TYPE_WR, CROWN_A3_S0_SLEEP_IN, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_display_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_DISPLAY_ON, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_display_off, DSI_PKT_TYPE_WR, CROWN_A3_S0_DISPLAY_OFF, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_exit_alpm, DSI_PKT_TYPE_WR, CROWN_A3_S0_EXIT_ALPM, 0);

static DEFINE_STATIC_PACKET(crown_a3_s0_te_off, DSI_PKT_TYPE_WR, CROWN_A3_S0_TE_OFF, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_te_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_TE_ON, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_err_fg, DSI_PKT_TYPE_WR, CROWN_A3_S0_ERR_FG, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_ffc, DSI_PKT_TYPE_WR, CROWN_A3_S0_FFC, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_tsp_hsync, DSI_PKT_TYPE_WR, CROWN_A3_S0_TSP_HSYNC, 0);

static DEFINE_PKTUI(crown_a3_s0_dsc, &crown_a3_s0_maptbl[DSC_MAPTBL], 0);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_dsc, DSI_PKT_TYPE_COMP, CROWN_A3_S0_DSC, 0);
static DEFINE_PKTUI(crown_a3_s0_pps, &crown_a3_s0_maptbl[PPS_MAPTBL], 0);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_pps, DSI_PKT_TYPE_PPS, CROWN_A3_S0_PPS, 0);

#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
static DEFINE_PKTUI(crown_a3_s0_scaler, &crown_a3_s0_maptbl[SCALER_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_scaler, DSI_PKT_TYPE_WR, CROWN_A3_S0_SCALER, 0);
static DEFINE_PKTUI(crown_a3_s0_caset, &crown_a3_s0_maptbl[CASET_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_caset, DSI_PKT_TYPE_WR, CROWN_A3_S0_CASET, 0);
static DEFINE_PKTUI(crown_a3_s0_paset, &crown_a3_s0_maptbl[PASET_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_paset, DSI_PKT_TYPE_WR, CROWN_A3_S0_PASET, 0);
#endif

static DEFINE_STATIC_PACKET(crown_a3_s0_set_area, DSI_PKT_TYPE_WR, CROWN_A3_S0_SET_AREA, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_lpm_aor, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_AOR, 0);
static DEFINE_PKTUI(crown_a3_s0_lpm_off_nit, &crown_a3_s0_maptbl[LPM_OFF_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_lpm_off_nit, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_OFF_NIT, 0);
static DEFINE_PKTUI(crown_a3_s0_lpm_nit, &crown_a3_s0_maptbl[LPM_NIT_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_lpm_nit, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_NIT, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_lpm_voltage, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_VOLTAGE, 0x25);
static DEFINE_STATIC_PACKET(crown_a3_s0_avs_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_AVS_ON, 0x2B);
static DEFINE_STATIC_PACKET(crown_a3_s0_avc2_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_AVC2_ON, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_avc2_off, DSI_PKT_TYPE_WR, CROWN_A3_S0_AVC2_OFF, 0);
static DEFINE_PKTUI(crown_a3_s0_lpm_dyn_vlin, &crown_a3_s0_maptbl[LPM_DYN_VLIN_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_lpm_dyn_vlin, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_DYN_VLIN, 0x20);
static DEFINE_STATIC_PACKET(crown_a3_s0_lpm_off_dyn_vlin, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_OFF_DYN_VLIN, 0x1D);
static DEFINE_PKTUI(crown_a3_s0_lpm_mode, &crown_a3_s0_maptbl[LPM_MODE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_lpm_mode, DSI_PKT_TYPE_WR, CROWN_A3_S0_LPM_MODE, 0);

#ifdef CONFIG_ACTIVE_CLOCK
static DEFINE_PKTUI(crown_a3_s0_enable_active_clk, &crown_a3_s0_maptbl[ACTIVE_CLK_CTRL_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_enable_active_clk, DSI_PKT_TYPE_WR, CROWN_A3_S0_ENABLE_ACTIVE_CLK, 0);
static DEFINE_PKTUI(crown_a3_s0_set_self_drawer, &crown_a3_s0_maptbl[ACTIVE_CLK_SELF_DRAWER], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_set_self_drawer, DSI_PKT_TYPE_WR, CROWN_A3_S0_SET_SELF_DRAWER, 0);
static DEFINE_PKTUI(crown_a3_s0_update_active_clk, &crown_a3_s0_maptbl[ACTIVE_CLK_CTRL_UPDATE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_update_active_clk, DSI_PKT_TYPE_WR, CROWN_A3_S0_UPDATE_ACTIVE_CLK, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_disable_self_drawer, DSI_PKT_TYPE_WR, CROWN_A3_S0_DISABLE_SELF_DRAWER, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_disable_active_clk, DSI_PKT_TYPE_WR, CROWN_A3_S0_DISABLE_ACTIVE_CLK, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_active_clk_img_pkt, DSI_PKT_TYPE_WR_SR, live_clock_image, 0);
#endif

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static DEFINE_STATIC_PACKET(crown_a3_s0_sw_reset, DSI_PKT_TYPE_WR, CROWN_A3_S0_SW_RESET, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_gct_dsc, DSI_PKT_TYPE_WR, CROWN_A3_S0_GCT_DSC, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_gct_pps, DSI_PKT_TYPE_WR, CROWN_A3_S0_GCT_PPS, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_vddm_orig, DSI_PKT_TYPE_WR, CROWN_A3_S0_VDDM_ORIG, 0x09);
static DEFINE_PKTUI(crown_a3_s0_vddm_volt, &crown_a3_s0_maptbl[VDDM_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_vddm_volt, DSI_PKT_TYPE_WR, CROWN_A3_S0_VDDM_VOLT, 0x09);
static DEFINE_STATIC_PACKET(crown_a3_s0_vddm_init, DSI_PKT_TYPE_WR, CROWN_A3_S0_VDDM_INIT, 0x0A);
static DEFINE_STATIC_PACKET(crown_a3_s0_vddm_update_enable, DSI_PKT_TYPE_WR, CROWN_A3_S0_VDDM_UPDATE_ENABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_vddm_update_disable, DSI_PKT_TYPE_WR, CROWN_A3_S0_VDDM_UPDATE_DISABLE, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_gram_chksum_start, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAM_CHKSUM_START, 0);
static DEFINE_PKTUI(crown_a3_s0_gram_img_pattern_on, &crown_a3_s0_maptbl[GRAM_IMG_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_gram_img_pattern_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAM_IMG_PATTERN_ON, 0);
static DEFINE_PKTUI(crown_a3_s0_gram_inv_img_pattern_on, &crown_a3_s0_maptbl[GRAM_INV_IMG_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_gram_inv_img_pattern_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAM_INV_IMG_PATTERN_ON, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_gram_img_pattern_off, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAM_IMG_PATTERN_OFF, 0);
#endif

static DEFINE_PKTUI(crown_a3_s0_gamma, &crown_a3_s0_maptbl[GAMMA_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_gamma, DSI_PKT_TYPE_WR, CROWN_A3_S0_GAMMA, 0);
static DEFINE_PKTUI(crown_a3_s0_aor, &crown_a3_s0_maptbl[AOR_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_aor, DSI_PKT_TYPE_WR, CROWN_A3_S0_AOR, 0);

static DEFINE_STATIC_PACKET(crown_a3_s0_poc_comp1, DSI_PKT_TYPE_WR, CROWN_A3_S0_POC_COMP1, 0x06);
static DEFINE_PKTUI(crown_a3_s0_poc_comp2, &crown_a3_s0_maptbl[POC_COMP_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_poc_comp2, DSI_PKT_TYPE_WR, CROWN_A3_S0_POC_COMP2, 0x53);

static DECLARE_PKTUI(crown_a3_s0_tset_mps_elvss) = {
	{ .offset = 1, .maptbl = &crown_a3_s0_maptbl[TSET_MAPTBL] },
	{ .offset = 2, .maptbl = &crown_a3_s0_maptbl[MPS_MAPTBL] },
	{ .offset = 3, .maptbl = &crown_a3_s0_maptbl[ELVSS_MAPTBL] },
};
static DEFINE_VARIABLE_PACKET(crown_a3_s0_tset_mps_elvss, DSI_PKT_TYPE_WR, CROWN_A3_S0_TSET_MPS_ELVSS, 0);
static DEFINE_PKTUI(crown_a3_s0_elvss_temp, &crown_a3_s0_maptbl[ELVSS_TEMP_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_elvss_temp, DSI_PKT_TYPE_WR, CROWN_A3_S0_ELVSS_TEMP, S6E3HA8_ELVSS_TEMP_0_OFS);

#ifdef CONFIG_SUPPORT_HMD
/* Command for hmd on */
static u8 CROWN_A3_S0_HMD_ON_AOR[] = {
	0xB1,
	0x00, 0x00, 0x0C, 0x00
};

static u8 CROWN_A3_S0_HMD_ON_LTPS[] = {
	0xCB,
	0x44, 0x00, 0x01, 0x01, 0x09, 0x62, 0x83, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F,
	0x8B, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x9E, 0x00, 0x00, 0x00, 0x00,
	0xDA, 0xDA, 0x1A, 0x1A, 0x16, 0x98, 0x46, 0xCF,
	0xC7, 0xC2, 0x1A, 0x1A, 0x1A, 0x1A, 0x9A, 0xDA,
	0xD6, 0xD8, 0xC6, 0x8F
};

static DEFINE_PKTUI(crown_a3_s0_hmd_on_aor, &crown_a3_s0_maptbl[HMD_AOR_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_hmd_on_aor, DSI_PKT_TYPE_WR, CROWN_A3_S0_HMD_ON_AOR, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_hmd_on_ltps, DSI_PKT_TYPE_WR, CROWN_A3_S0_HMD_ON_LTPS, 0);
/* Command for hmd off */
static u8 CROWN_A3_S0_HMD_OFF_AOR[] = {
	0xB1,
	0x02, 0xB2, 0x0C, 0x80
};

static u8 CROWN_A3_S0_HMD_OFF_LTPS[] = {
	0xCB,
	0x44, 0x00, 0x01, 0x01, 0x09, 0x62, 0x83, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0B, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32,
	0x8B, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x9E, 0x00, 0x00, 0x00, 0x00,
	0xDA, 0xDA, 0x1A, 0x1A, 0x16, 0x98, 0x46, 0xCF,
	0xC7, 0xC2, 0x1A, 0x1A, 0x1A, 0x1A, 0x9A, 0xDA,
	0xD6, 0xD8, 0xC6, 0x0F
};

static DEFINE_PKTUI(crown_a3_s0_hmd_off_aor, &crown_a3_s0_maptbl[HMD_AOR_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_hmd_off_aor, DSI_PKT_TYPE_WR, CROWN_A3_S0_HMD_OFF_AOR, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_hmd_off_ltps, DSI_PKT_TYPE_WR, CROWN_A3_S0_HMD_OFF_LTPS, 0);

static DEFINE_PKTUI(crown_a3_s0_hmd_gamma, &crown_a3_s0_maptbl[HMD_GAMMA_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_hmd_gamma, DSI_PKT_TYPE_WR, CROWN_A3_S0_GAMMA, 0);
static DEFINE_PKTUI(crown_a3_s0_hmd_aor, &crown_a3_s0_maptbl[HMD_AOR_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_hmd_aor, DSI_PKT_TYPE_WR, CROWN_A3_S0_AOR, 0);
static DECLARE_PKTUI(crown_a3_s0_hmd_tset_mps_elvss) = {
	{ .offset = 1, .maptbl = &crown_a3_s0_maptbl[TSET_MAPTBL] },
	{ .offset = 2, .maptbl = &crown_a3_s0_maptbl[MPS_MAPTBL] },
	{ .offset = 3, .maptbl = &crown_a3_s0_maptbl[HMD_ELVSS_MAPTBL] },
};
static DEFINE_VARIABLE_PACKET(crown_a3_s0_hmd_tset_mps_elvss, DSI_PKT_TYPE_WR, CROWN_A3_S0_TSET_MPS_ELVSS, 0);
#endif /* CONFIG_SUPPORT_HMD */

static DECLARE_PKTUI(crown_a3_s0_vgh_vint) = {
#ifdef CONFIG_SUPPORT_XTALK_MODE
	{ .offset = 1, .maptbl = &crown_a3_s0_maptbl[VGH_MAPTBL] },
#endif
	{ .offset = 2, .maptbl = &crown_a3_s0_maptbl[VINT_MAPTBL] },
};
static DEFINE_VARIABLE_PACKET(crown_a3_s0_vgh_vint, DSI_PKT_TYPE_WR, CROWN_A3_S0_VGH_VINT, 0);
static DECLARE_PKTUI(crown_a3_s0_irc_value) = {
	{ .offset = 1, .maptbl = &crown_a3_s0_maptbl[IRC_MAPTBL] },
	{ .offset = 2, .maptbl = &crown_a3_s0_maptbl[IRC_MODE_MAPTBL] },
};
static DEFINE_VARIABLE_PACKET(crown_a3_s0_irc_value, DSI_PKT_TYPE_WR, CROWN_A3_S0_IRC_VALUE, S6E3HA8_IRC_VALUE_OFS);
static DEFINE_STATIC_PACKET(crown_a3_s0_irc_on, DSI_PKT_TYPE_WR, CROWN_A3_S0_IRC_ON, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_irc_off, DSI_PKT_TYPE_WR, CROWN_A3_S0_IRC_OFF, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_gamma_update_enable, DSI_PKT_TYPE_WR, CROWN_A3_S0_GAMMA_UPDATE_ENABLE, 0);
static DEFINE_PKTUI(crown_a3_s0_acl_onoff, &crown_a3_s0_maptbl[ACL_ONOFF_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_acl_onoff, DSI_PKT_TYPE_WR, CROWN_A3_S0_ACL_ONOFF, 0);

static DECLARE_PKTUI(crown_a3_s0_acl_control) = {
	{ .offset = 2, .maptbl = &crown_a3_s0_maptbl[ACL_FRAME_AVG_MAPTBL] },
	{ .offset = 3, .maptbl = &crown_a3_s0_maptbl[ACL_START_POINT_MAPTBL] },
	{ .offset = 6, .maptbl = &crown_a3_s0_maptbl[ACL_OPR_MAPTBL] },
};
static DEFINE_VARIABLE_PACKET(crown_a3_s0_acl_control, DSI_PKT_TYPE_WR, CROWN_A3_S0_ACL_CONTROL, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_acl_dim_frm, DSI_PKT_TYPE_WR, CROWN_A3_S0_ACL_DIM_FRM, 0xF);

static DEFINE_STATIC_PACKET(crown_a3_s0_isc, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC, 3);

static DEFINE_STATIC_PACKET(crown_a3_s0_edge_dimming, DSI_PKT_TYPE_WR, CROWN_A3_S0_EDGE_DIMMING, 0);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_on_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_ON_01, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_on_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_ON_02, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_on_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_ON_03, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_on_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_ON_04, 5);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_on_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_ON_05, 2);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_off_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_OFF_01, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_off_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_OFF_03, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_off_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_OFF_04, 5);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_off_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_OFF_05, 2);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_01, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_02, 0x24);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_03, 0x03);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_04, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_05, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_06, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_06, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_07, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_07, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_08, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_08, 0x02);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_on_09, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_ON_09, 0x03);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_01, 0x03);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_02, 0x02);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_03, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_04, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_05, 0x05);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_06, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_06, 0x02);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_off_07, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_OFF_07, 0x05);

static DEFINE_PKTUI(crown_a3_s0_mcd_rs_1_right_01, &crown_a3_s0_maptbl[MCD_RESISTANCE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_mcd_rs_1_right_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_1_RIGHT_01, 0x07);

static DEFINE_PKTUI(crown_a3_s0_mcd_rs_2_right_01, &crown_a3_s0_maptbl[MCD_RESISTANCE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_mcd_rs_2_right_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_2_RIGHT_01, 0x08);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_right_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_RIGHT_02, 0x03);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_1_right_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_1_RIGHT_03, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_2_right_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_2_RIGHT_03, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_right_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_RIGHT_04, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_right_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_RIGHT_05, 0x03);

static DEFINE_PKTUI(crown_a3_s0_mcd_rs_1_left_01, &crown_a3_s0_maptbl[MCD_RESISTANCE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_mcd_rs_1_left_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_1_LEFT_01, 0x0B);

static DEFINE_PKTUI(crown_a3_s0_mcd_rs_2_left_01, &crown_a3_s0_maptbl[MCD_RESISTANCE_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(crown_a3_s0_mcd_rs_2_left_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_2_LEFT_01, 0x0C);

static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_left_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_LEFT_02, 0x03);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_1_left_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_1_LEFT_03, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_2_left_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_2_LEFT_03, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_left_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_LEFT_04, 0x04);
static DEFINE_STATIC_PACKET(crown_a3_s0_mcd_rs_left_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_MCD_RS_LEFT_05, 0x03);

#ifdef CONFIG_SUPPORT_MST
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_on_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_ON_01, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_on_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_ON_02, 4);
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_on_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_ON_03, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_off_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_OFF_01, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_off_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_OFF_02, 4);
static DEFINE_STATIC_PACKET(crown_a3_s0_mst_off_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_MST_OFF_03, 0);
#endif

#ifdef CONFIG_SUPPORT_GRAYSPOT_TEST
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_on_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_ON_01, 5);
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_on_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_ON_02, 5);
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_on_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_ON_03, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_on_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_ON_04, 0);
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_off_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_OFF_01, 5);
static DEFINE_STATIC_PACKET(crown_a3_s0_grayspot_off_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_GRAYSPOT_OFF_02, 5);
#endif

static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_1msec, 1);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_5msec, 5);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_sleep_out, 10);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_afc_off, 20);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_sleep_in, 100);
static DEFINE_PANEL_UDELAY(crown_a3_s0_wait_1_frame_in_60hz, 16700);
static DEFINE_PANEL_UDELAY(crown_a3_s0_wait_1_frame_in_30hz, 33400);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_100msec, 100);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_124msec, 124);

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_120msec, 120);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_vddm_update, 50);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_gram_inv_img_update, 20);
static DEFINE_PANEL_MDELAY(crown_a3_s0_wait_gram_img_update, 150);
#endif

static DEFINE_PANEL_KEY(crown_a3_s0_level1_key_enable, CMD_LEVEL_1, KEY_ENABLE, &PKTINFO(crown_a3_s0_level1_key_enable));
static DEFINE_PANEL_KEY(crown_a3_s0_level2_key_enable, CMD_LEVEL_2, KEY_ENABLE, &PKTINFO(crown_a3_s0_level2_key_enable));
static DEFINE_PANEL_KEY(crown_a3_s0_level3_key_enable, CMD_LEVEL_3, KEY_ENABLE, &PKTINFO(crown_a3_s0_level3_key_enable));
static DEFINE_PANEL_KEY(crown_a3_s0_level1_key_disable, CMD_LEVEL_1, KEY_DISABLE, &PKTINFO(crown_a3_s0_level1_key_disable));
static DEFINE_PANEL_KEY(crown_a3_s0_level2_key_disable, CMD_LEVEL_2, KEY_DISABLE, &PKTINFO(crown_a3_s0_level2_key_disable));
static DEFINE_PANEL_KEY(crown_a3_s0_level3_key_disable, CMD_LEVEL_3, KEY_DISABLE, &PKTINFO(crown_a3_s0_level3_key_disable));

static void *crown_a3_s0_init_cmdtbl[] = {
	&DLYINFO(crown_a3_s0_wait_5msec),
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_dsc),
	&PKTINFO(crown_a3_s0_pps),
	&KEYINFO(crown_a3_s0_level1_key_disable),
	&PKTINFO(crown_a3_s0_sleep_out),
	&DLYINFO(crown_a3_s0_wait_sleep_out),
#ifdef CONFIG_DISPLAY_USE_INFO
	&s6e3ha8_dmptbl[DUMP_SELF_DIAG],
#endif
#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_scaler),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&PKTINFO(crown_a3_s0_caset),
	&PKTINFO(crown_a3_s0_paset),
#endif
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_set_area),
	&PKTINFO(crown_a3_s0_te_on),

	&KEYINFO(crown_a3_s0_level1_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_err_fg),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_ffc),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&PKTINFO(crown_a3_s0_tsp_hsync),
	&PKTINFO(crown_a3_s0_isc),
	&PKTINFO(crown_a3_s0_edge_dimming),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&SEQINFO(crown_a3_s0_seqtbl[PANEL_SET_BL_SEQ]),
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	&SEQINFO(crown_a3_s0_copr_seqtbl[COPR_SET_SEQ]),
#endif
};

static void *crown_a3_s0_res_init_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&s6e3ha8_restbl[RES_COORDINATE],
	&s6e3ha8_restbl[RES_CODE],
	&s6e3ha8_restbl[RES_ELVSS],
	&s6e3ha8_restbl[RES_ELVSS_TEMP_0],
	&s6e3ha8_restbl[RES_ELVSS_TEMP_1],
	&s6e3ha8_restbl[RES_MTP],
	&s6e3ha8_restbl[RES_DATE],
	&s6e3ha8_restbl[RES_HBM_GAMMA],
	&s6e3ha8_restbl[RES_OCTA_ID],
#ifdef CONFIG_DISPLAY_USE_INFO
	&s6e3ha8_restbl[RES_CHIP_ID],
	&s6e3ha8_restbl[RES_SELF_DIAG],
	&s6e3ha8_restbl[RES_ERR_FG],
	&s6e3ha8_restbl[RES_DSI_ERR],
#endif
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&KEYINFO(crown_a3_s0_level1_key_disable),
};

#ifdef CONFIG_SUPPORT_DIM_FLASH
static void *crown_a3_s0_dim_flash_res_init_cmdtbl[] = {
	&s6e3ha8_restbl[RES_DIM_FLASH_GAMMA],
	&s6e3ha8_restbl[RES_DIM_FLASH_AOR],
	&s6e3ha8_restbl[RES_DIM_FLASH_VINT],
	&s6e3ha8_restbl[RES_DIM_FLASH_ELVSS],
	&s6e3ha8_restbl[RES_DIM_FLASH_IRC],
	&s6e3ha8_restbl[RES_DIM_FLASH_HMD_GAMMA],
	&s6e3ha8_restbl[RES_DIM_FLASH_HMD_AOR],
	&s6e3ha8_restbl[RES_DIM_FLASH_MTP_OFFSET],
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&s6e3ha8_restbl[RES_MTP],
	&s6e3ha8_restbl[RES_HBM_GAMMA],
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

static void *crown_a3_s0_set_bl_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_gamma),
	&PKTINFO(crown_a3_s0_aor),
	&PKTINFO(crown_a3_s0_tset_mps_elvss),
	&PKTINFO(crown_a3_s0_elvss_temp),
	&PKTINFO(crown_a3_s0_vgh_vint),
	&PKTINFO(crown_a3_s0_acl_control),
	&PKTINFO(crown_a3_s0_acl_dim_frm),
	&PKTINFO(crown_a3_s0_acl_onoff),
	&PKTINFO(crown_a3_s0_irc_value),
	&PKTINFO(crown_a3_s0_irc_on),
	&PKTINFO(crown_a3_s0_poc_comp1),
	&PKTINFO(crown_a3_s0_poc_comp2),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_hmd_on_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_hmd_on_aor),
	&PKTINFO(crown_a3_s0_hmd_on_ltps),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_hmd_off_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_hmd_off_aor),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_hmd_off_ltps),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_hmd_bl_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_hmd_gamma),
	&PKTINFO(crown_a3_s0_hmd_aor),
	&PKTINFO(crown_a3_s0_hmd_tset_mps_elvss),
	&PKTINFO(crown_a3_s0_acl_control),
	&PKTINFO(crown_a3_s0_acl_dim_frm),
	&PKTINFO(crown_a3_s0_acl_onoff),
	&PKTINFO(crown_a3_s0_irc_off),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_display_on_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_display_on),
	&KEYINFO(crown_a3_s0_level1_key_disable),
};

static void *crown_a3_s0_display_off_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_display_off),
	&KEYINFO(crown_a3_s0_level1_key_disable),
};

static void *crown_a3_s0_exit_cmdtbl[] = {
#ifdef CONFIG_SUPPORT_AFC
	&SEQINFO(crown_a3_s0_mdnie_seqtbl[MDNIE_AFC_OFF_SEQ]),
	&DLYINFO(crown_a3_s0_wait_afc_off),
#endif
	&KEYINFO(crown_a3_s0_level1_key_enable),
#ifdef CONFIG_DISPLAY_USE_INFO
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&s6e3ha8_dmptbl[DUMP_ERR_FG],
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&s6e3ha8_dmptbl[DUMP_DSI_ERR],
#endif
	&PKTINFO(crown_a3_s0_sleep_in),
	&KEYINFO(crown_a3_s0_level1_key_disable),
	&DLYINFO(crown_a3_s0_wait_sleep_in),
};

static void *crown_a3_s0_alpm_enter_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_lpm_aor),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_lpm_nit),
	&PKTINFO(crown_a3_s0_lpm_voltage),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_avs_on),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&PKTINFO(crown_a3_s0_lpm_mode),
	&PKTINFO(crown_a3_s0_avc2_off),
	//&PKTINFO(crown_a3_s0_lpm_dyn_vlin),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_alpm_enter_delay_cmdtbl[] = {
	&DLYINFO(crown_a3_s0_wait_124msec),
};

static void *crown_a3_s0_alpm_exit_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
#ifdef CONFIG_ACTIVE_CLOCK
	&PKTINFO(crown_a3_s0_disable_active_clk),
	&PKTINFO(crown_a3_s0_disable_self_drawer),
#endif
	&PKTINFO(crown_a3_s0_lpm_off_nit),
	&PKTINFO(crown_a3_s0_avc2_on),
	&PKTINFO(crown_a3_s0_exit_alpm),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
static void *crown_a3_s0_dsu_mode_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_dsc),
	&PKTINFO(crown_a3_s0_pps),
	&KEYINFO(crown_a3_s0_level1_key_disable),
	&PKTINFO(crown_a3_s0_caset),
	&PKTINFO(crown_a3_s0_paset),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_scaler),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

static void *crown_a3_s0_mcd_on_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_mcd_on_01),
	&PKTINFO(crown_a3_s0_mcd_on_02),
	&PKTINFO(crown_a3_s0_mcd_on_03),
	&PKTINFO(crown_a3_s0_mcd_on_04),
	&PKTINFO(crown_a3_s0_mcd_on_05),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&DLYINFO(crown_a3_s0_wait_100msec),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_mcd_off_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_mcd_off_01),
	&PKTINFO(crown_a3_s0_aor),
	&PKTINFO(crown_a3_s0_mcd_off_03),
	&PKTINFO(crown_a3_s0_mcd_off_04),
	&PKTINFO(crown_a3_s0_mcd_off_05),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&DLYINFO(crown_a3_s0_wait_100msec),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_mcd_rs_on_cmdtbl[] = {
	&PKTINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_display_off),
	&PKTINFO(crown_a3_s0_level1_key_disable),
	&PKTINFO(crown_a3_s0_mcd_rs_on_01),
	&PKTINFO(crown_a3_s0_mcd_rs_on_02),
	&PKTINFO(crown_a3_s0_mcd_rs_on_03),
	&PKTINFO(crown_a3_s0_mcd_rs_on_04),
	&PKTINFO(crown_a3_s0_mcd_rs_on_05),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_on_06),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_on_07),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_on_08),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_on_09),
};

static void *crown_a3_s0_mcd_rs_read_cmdtbl[] = {
	&PKTINFO(crown_a3_s0_mcd_rs_1_right_01),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_2_right_01),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_1_left_01),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_2_left_01),
	&DLYINFO(crown_a3_s0_wait_1msec),

	/* MCD_R ENABLE */
	&PKTINFO(crown_a3_s0_mcd_rs_right_02),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD1_R */
	&PKTINFO(crown_a3_s0_mcd_rs_1_right_03),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_right_04),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD2_R */
	&PKTINFO(crown_a3_s0_mcd_rs_2_right_03),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_right_04),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD_R DISABLE */
	&PKTINFO(crown_a3_s0_mcd_rs_right_05),
	&DLYINFO(crown_a3_s0_wait_1msec),

	/* MCD_L ENABLE */
	&PKTINFO(crown_a3_s0_mcd_rs_left_02),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD1_L */
	&PKTINFO(crown_a3_s0_mcd_rs_1_left_03),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_left_04),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD2_L */
	&PKTINFO(crown_a3_s0_mcd_rs_2_left_03),
	&DLYINFO(crown_a3_s0_wait_1msec),
	&PKTINFO(crown_a3_s0_mcd_rs_left_04),
	&DLYINFO(crown_a3_s0_wait_1msec),
	/* MCD_L DISABLE */
	&PKTINFO(crown_a3_s0_mcd_rs_left_05),
	&DLYINFO(crown_a3_s0_wait_1msec),

	/* READ MCD RESISTANCE */
	&s6e3ha8_restbl[RES_MCD_RESISTANCE],
};

static void *crown_a3_s0_mcd_rs_off_cmdtbl[] = {
	&PKTINFO(crown_a3_s0_mcd_rs_off_01),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_02),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_03),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_04),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_05),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_06),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_mcd_rs_off_07),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_60hz),
	&PKTINFO(crown_a3_s0_level3_key_disable),
	&PKTINFO(crown_a3_s0_level2_key_disable),
	&PKTINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_display_on),
	&PKTINFO(crown_a3_s0_level1_key_disable),
};

#ifdef CONFIG_SUPPORT_MST
static void *crown_a3_s0_mst_on_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_mst_on_01),
	&PKTINFO(crown_a3_s0_mst_on_02),
	&PKTINFO(crown_a3_s0_mst_on_03),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_mst_off_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_mst_off_01),
	&PKTINFO(crown_a3_s0_mst_off_02),
	&PKTINFO(crown_a3_s0_mst_off_03),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static void *crown_a3_s0_gct_enter_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&PKTINFO(crown_a3_s0_sw_reset),
	&DLYINFO(crown_a3_s0_wait_120msec),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_vddm_init),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&PKTINFO(crown_a3_s0_sleep_out),
	&DLYINFO(crown_a3_s0_wait_sleep_out),
	&PKTINFO(crown_a3_s0_display_on),
	&PKTINFO(crown_a3_s0_gct_dsc),
	&PKTINFO(crown_a3_s0_gct_pps),
	&KEYINFO(crown_a3_s0_level1_key_disable),
};

static void *crown_a3_s0_gct_vddm_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_vddm_volt),
	&PKTINFO(crown_a3_s0_vddm_update_enable),
	&PKTINFO(crown_a3_s0_vddm_update_disable),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&DLYINFO(crown_a3_s0_wait_vddm_update),
};

static void *crown_a3_s0_gct_img_0_update_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_gram_chksum_start),
	&PKTINFO(crown_a3_s0_gram_inv_img_pattern_on),
	&DLYINFO(crown_a3_s0_wait_gram_inv_img_update),
	&PKTINFO(crown_a3_s0_gram_img_pattern_on),
	&DLYINFO(crown_a3_s0_wait_gram_img_update),
	&s6e3ha8_restbl[RES_GRAM_CHECKSUM],
	&PKTINFO(crown_a3_s0_gram_img_pattern_off),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_gct_img_1_update_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_gram_img_pattern_off),
	&PKTINFO(crown_a3_s0_gram_img_pattern_on),
	&DLYINFO(crown_a3_s0_wait_gram_img_update),
	&s6e3ha8_restbl[RES_GRAM_CHECKSUM],
	&PKTINFO(crown_a3_s0_gram_img_pattern_off),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_gct_exit_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_vddm_orig),
	&PKTINFO(crown_a3_s0_vddm_update_enable),
	&PKTINFO(crown_a3_s0_vddm_update_disable),
	&DLYINFO(crown_a3_s0_wait_vddm_update),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

#ifdef CONFIG_SUPPORT_GRAYSPOT_TEST
static void *crown_a3_s0_grayspot_on_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_grayspot_on_01),
	&PKTINFO(crown_a3_s0_grayspot_on_02),
	&PKTINFO(crown_a3_s0_grayspot_on_03),
	&PKTINFO(crown_a3_s0_grayspot_on_04),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_grayspot_off_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_grayspot_off_01),
	&PKTINFO(crown_a3_s0_grayspot_off_02),
	&PKTINFO(crown_a3_s0_vgh_vint),
	&PKTINFO(crown_a3_s0_tset_mps_elvss),
	&PKTINFO(crown_a3_s0_elvss_temp),
	&PKTINFO(crown_a3_s0_gamma_update_enable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

#ifdef CONFIG_ACTIVE_CLOCK
static void *crown_a3_s0_active_clk_img_cmdtbl[] = {
	&PKTINFO(crown_a3_s0_active_clk_img_pkt),
};

static void *crown_a3_s0_active_clk_ctrl_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_enable_active_clk),
	&PKTINFO(crown_a3_s0_set_self_drawer),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};

static void *crown_a3_s0_active_clk_update_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_enable_active_clk),
	&PKTINFO(crown_a3_s0_set_self_drawer),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_30hz),
	&PKTINFO(crown_a3_s0_update_active_clk),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

#ifdef CONFIG_SUPPORT_ISC_DEFECT
static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_01[] = {
	0xF5, 0x80
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_01, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_02[] = {
	0xB7, 0x40
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_02, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_03[] = {
	0xB0, 0x02
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_03, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_04[] = {
	0xC2, 0xFF, 0xFF
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_04, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_05[] = {
	0xB8, 0x20
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_05, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_05, 0);


static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_06[] = {
	0xEB, 0x56, 0x37
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_06, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_06, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_07[] = {
	0xB0, 0x37
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_07, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_07, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_08[] = {
	0xEB, 0xE4
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_08, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_08, 0);

static u8 CROWN_A3_S0_ISC_IPOFF_SEQ_09[] = {
	0xDD, 0x00
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ipoff_seq_09, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_IPOFF_SEQ_09, 0);


static u8 CROWN_A3_S0_ISC_VDDM_SEQ_01[] = {
	0xB0, 0x09
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_vddm_seq_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_VDDM_SEQ_01, 0);

static u8 CROWN_A3_S0_ISC_VDDM_SEQ_02[] = {
	0xF4, 0x10
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_vddm_seq_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_VDDM_SEQ_02, 0);

static u8 CROWN_A3_S0_ISC_VDDM_SEQ_03[] = {
	0xFE, 0xB0
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_vddm_seq_03, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_VDDM_SEQ_03, 0);

static u8 CROWN_A3_S0_ISC_VDDM_SEQ_04[] = {
	0xFE, 0x30
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_vddm_seq_04, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_VDDM_SEQ_04, 0);

static u8 CROWN_A3_S0_ISC_ISON_SEQ_01[] = {
	0xB0, 0x03
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ison_seq_01, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_ISON_SEQ_01, 0);

static u8 CROWN_A3_S0_ISC_ISON_SEQ_02[] = {
	0xF6, 0x43
};
static DEFINE_STATIC_PACKET(crown_a3_s0_isc_ison_seq_02, DSI_PKT_TYPE_WR, CROWN_A3_S0_ISC_ISON_SEQ_02, 0);


static void *crown_a3_s0_isc_defect_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_01),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_02),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_03),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_04),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_05),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_06),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_07),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_08),
	&PKTINFO(crown_a3_s0_isc_ipoff_seq_09),
	&PKTINFO(crown_a3_s0_isc_vddm_seq_01),
	&PKTINFO(crown_a3_s0_isc_vddm_seq_02),
	&PKTINFO(crown_a3_s0_isc_vddm_seq_03),
	&PKTINFO(crown_a3_s0_isc_vddm_seq_04),
	&PKTINFO(crown_a3_s0_isc_ison_seq_01),
	&PKTINFO(crown_a3_s0_isc_ison_seq_02),
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
};
#endif

static void *crown_a3_s0_dump_cmdtbl[] = {
	&KEYINFO(crown_a3_s0_level1_key_enable),
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&KEYINFO(crown_a3_s0_level3_key_enable),
	&s6e3ha8_dmptbl[DUMP_RDDPM],
	&s6e3ha8_dmptbl[DUMP_RDDSM],
	&s6e3ha8_dmptbl[DUMP_ERR],
	&s6e3ha8_dmptbl[DUMP_ERR_FG],
	&s6e3ha8_dmptbl[DUMP_DSI_ERR],
	&s6e3ha8_dmptbl[DUMP_SELF_DIAG],
	&KEYINFO(crown_a3_s0_level3_key_disable),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&KEYINFO(crown_a3_s0_level1_key_disable),
};

static void *crown_a3_s0_dummy_cmdtbl[] = {
	&PKTINFO(crown_a3_s0_avs_on),
	&PKTINFO(crown_a3_s0_avc2_off),
	&PKTINFO(crown_a3_s0_lpm_dyn_vlin),
	&PKTINFO(crown_a3_s0_avc2_on),
	&PKTINFO(crown_a3_s0_lpm_off_dyn_vlin),
	&DLYINFO(crown_a3_s0_wait_1_frame_in_30hz),
#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
	&KEYINFO(crown_a3_s0_level2_key_enable),
	&PKTINFO(crown_a3_s0_scaler),
	&KEYINFO(crown_a3_s0_level2_key_disable),
	&PKTINFO(crown_a3_s0_caset),
	&PKTINFO(crown_a3_s0_paset),

	&KEYINFO(crown_a3_s0_level3_key_enable),
	&PKTINFO(crown_a3_s0_omok_2ch_latch1),
	&PKTINFO(crown_a3_s0_omok_2ch_latch2),
	&PKTINFO(crown_a3_s0_omok_zero_black1),
	&PKTINFO(crown_a3_s0_omok_zero_black2),
	&KEYINFO(crown_a3_s0_level3_key_disable),
#endif
	&PKTINFO(crown_a3_s0_te_off),
};

static struct seqinfo crown_a3_s0_seqtbl[MAX_PANEL_SEQ] = {
	[PANEL_INIT_SEQ] = SEQINFO_INIT("init-seq", crown_a3_s0_init_cmdtbl),
	[PANEL_RES_INIT_SEQ] = SEQINFO_INIT("resource-init-seq", crown_a3_s0_res_init_cmdtbl),
#ifdef CONFIG_SUPPORT_DIM_FLASH
	[PANEL_DIM_FLASH_RES_INIT_SEQ] = SEQINFO_INIT("dim-flash-resource-init-seq", crown_a3_s0_dim_flash_res_init_cmdtbl),
#endif
	[PANEL_SET_BL_SEQ] = SEQINFO_INIT("set-bl-seq", crown_a3_s0_set_bl_cmdtbl),
#ifdef CONFIG_SUPPORT_HMD
	[PANEL_HMD_ON_SEQ] = SEQINFO_INIT("hmd-on-seq", crown_a3_s0_hmd_on_cmdtbl),
	[PANEL_HMD_OFF_SEQ] = SEQINFO_INIT("hmd-off-seq", crown_a3_s0_hmd_off_cmdtbl),
	[PANEL_HMD_BL_SEQ] = SEQINFO_INIT("hmd-bl-seq", crown_a3_s0_hmd_bl_cmdtbl),
#endif /* CONFIG_SUPPORT_HMD */
	[PANEL_DISPLAY_ON_SEQ] = SEQINFO_INIT("display-on-seq", crown_a3_s0_display_on_cmdtbl),
	[PANEL_DISPLAY_OFF_SEQ] = SEQINFO_INIT("display-off-seq", crown_a3_s0_display_off_cmdtbl),
	[PANEL_EXIT_SEQ] = SEQINFO_INIT("exit-seq", crown_a3_s0_exit_cmdtbl),
	[PANEL_ALPM_ENTER_SEQ] = SEQINFO_INIT("alpm-enter-seq", crown_a3_s0_alpm_enter_cmdtbl),
	[PANEL_ALPM_DELAY_SEQ] = SEQINFO_INIT("alpm-enter-delay-seq", crown_a3_s0_alpm_enter_delay_cmdtbl),
	[PANEL_ALPM_EXIT_SEQ] = SEQINFO_INIT("alpm-exit-seq", crown_a3_s0_alpm_exit_cmdtbl),
#ifdef CONFIG_EXYNOS_MULTIRESOLUTION
	[PANEL_DSU_SEQ] = SEQINFO_INIT("dsu-mode-seq", crown_a3_s0_dsu_mode_cmdtbl),
#endif
	[PANEL_MCD_ON_SEQ] = SEQINFO_INIT("mcd-on-seq", crown_a3_s0_mcd_on_cmdtbl),
	[PANEL_MCD_OFF_SEQ] = SEQINFO_INIT("mcd-off-seq", crown_a3_s0_mcd_off_cmdtbl),
	[PANEL_MCD_RS_ON_SEQ] = SEQINFO_INIT("mcd-rs-on-seq", crown_a3_s0_mcd_rs_on_cmdtbl),
	[PANEL_MCD_RS_OFF_SEQ] = SEQINFO_INIT("mcd-rs-off-seq", crown_a3_s0_mcd_rs_off_cmdtbl),
	[PANEL_MCD_RS_READ_SEQ] = SEQINFO_INIT("mcd-rs-read-seq", crown_a3_s0_mcd_rs_read_cmdtbl),
#ifdef CONFIG_SUPPORT_MST
	[PANEL_MST_ON_SEQ] = SEQINFO_INIT("mst-on-seq", crown_a3_s0_mst_on_cmdtbl),
	[PANEL_MST_OFF_SEQ] = SEQINFO_INIT("mst-off-seq", crown_a3_s0_mst_off_cmdtbl),
#endif
#ifdef CONFIG_ACTIVE_CLOCK
	[PANEL_ACTIVE_CLK_IMG_SEQ] = SEQINFO_INIT("active-clk-img-seq", crown_a3_s0_active_clk_img_cmdtbl),
	[PANEL_ACTIVE_CLK_CTRL_SEQ] = SEQINFO_INIT("active-clk-ctrl-seq", crown_a3_s0_active_clk_ctrl_cmdtbl),
	[PANEL_ACTIVE_CLK_UPDATE_SEQ] = SEQINFO_INIT("active-clk-update-seq", crown_a3_s0_active_clk_update_cmdtbl),
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	[PANEL_GCT_ENTER_SEQ] = SEQINFO_INIT("gct-enter-seq", crown_a3_s0_gct_enter_cmdtbl),
	[PANEL_GCT_VDDM_SEQ] = SEQINFO_INIT("gct-vddm-seq", crown_a3_s0_gct_vddm_cmdtbl),
	[PANEL_GCT_IMG_0_UPDATE_SEQ] = SEQINFO_INIT("gct-img-0-update-seq", crown_a3_s0_gct_img_0_update_cmdtbl),
	[PANEL_GCT_IMG_1_UPDATE_SEQ] = SEQINFO_INIT("gct-img-1-update-seq", crown_a3_s0_gct_img_1_update_cmdtbl),
	[PANEL_GCT_EXIT_SEQ] = SEQINFO_INIT("gct-exit-seq", crown_a3_s0_gct_exit_cmdtbl),
#endif
#ifdef CONFIG_SUPPORT_GRAYSPOT_TEST
	[PANEL_GRAYSPOT_ON_SEQ] = SEQINFO_INIT("grayspot-on-seq", crown_a3_s0_grayspot_on_cmdtbl),
	[PANEL_GRAYSPOT_OFF_SEQ] = SEQINFO_INIT("grayspot-off-seq", crown_a3_s0_grayspot_off_cmdtbl),
#endif
#ifdef CONFIG_SUPPORT_ISC_DEFECT
	[PANEL_CHECK_ISC_DEFECT_SEQ] = SEQINFO_INIT("isc-defect-seq", crown_a3_s0_isc_defect_cmdtbl),
#endif
	[PANEL_DUMP_SEQ] = SEQINFO_INIT("dump-seq", crown_a3_s0_dump_cmdtbl),
	[PANEL_DUMMY_SEQ] = SEQINFO_INIT("dummy-seq", crown_a3_s0_dummy_cmdtbl),
};

struct common_panel_info s6e3ha8_crown_a3_s0_preliminary_panel_info = {
	.ldi_name = "s6e3ha8",
	.name = "s6e3ha8_crown_a3_s0_preliminary",
	.model = "AMB638RD01",
	.vendor = "SDC",
	.id = 0x900042,
	.rev = 0,
	.maptbl = crown_a3_s0_maptbl,
	.nr_maptbl = ARRAY_SIZE(crown_a3_s0_maptbl),
	.seqtbl = crown_a3_s0_seqtbl,
	.nr_seqtbl = ARRAY_SIZE(crown_a3_s0_seqtbl),
	.rditbl = s6e3ha8_rditbl,
	.nr_rditbl = ARRAY_SIZE(s6e3ha8_rditbl),
	.restbl = s6e3ha8_restbl,
	.nr_restbl = ARRAY_SIZE(s6e3ha8_restbl),
	.dumpinfo = s6e3ha8_dmptbl,
	.nr_dumpinfo = ARRAY_SIZE(s6e3ha8_dmptbl),
#ifdef CONFIG_EXYNOS_DECON_MDNIE_LITE
	.mdnie_tune = &s6e3ha8_crown_a3_s0_mdnie_tune,
#endif
	.panel_dim_info = {
		&s6e3ha8_crown_a3_s0_preliminary_panel_dimming_info,
		&s6e3ha8_crown_a3_s0_preliminary_panel_hmd_dimming_info,
#ifdef CONFIG_SUPPORT_AOD_BL
		&s6e3ha8_crown_a3_s0_panel_aod_dimming_info,
#endif
	},
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	.copr_data = &s6e3ha8_crown_a3_s0_copr_data,
#endif
#ifdef CONFIG_EXTEND_LIVE_CLOCK
	.aod_tune = &s6e3ha8_crown_aod,
#endif
#ifdef CONFIG_SUPPORT_DDI_FLASH
	.poc_data = &s6e3ha8_crown_poc_data,
#endif
};

struct common_panel_info s6e3ha8_crown_a3_s0_default_panel_info = {
	.ldi_name = "s6e3ha8",
	.name = "s6e3ha8_crown_a3_s0_default",
	.model = "AMB638RD01",
	.vendor = "SDC",
	.id = 0x900043,
	.rev = 1,
	.maptbl = crown_a3_s0_maptbl,
	.nr_maptbl = ARRAY_SIZE(crown_a3_s0_maptbl),
	.seqtbl = crown_a3_s0_seqtbl,
	.nr_seqtbl = ARRAY_SIZE(crown_a3_s0_seqtbl),
	.rditbl = s6e3ha8_rditbl,
	.nr_rditbl = ARRAY_SIZE(s6e3ha8_rditbl),
	.restbl = s6e3ha8_restbl,
	.nr_restbl = ARRAY_SIZE(s6e3ha8_restbl),
	.dumpinfo = s6e3ha8_dmptbl,
	.nr_dumpinfo = ARRAY_SIZE(s6e3ha8_dmptbl),
#ifdef CONFIG_EXYNOS_DECON_MDNIE_LITE
	.mdnie_tune = &s6e3ha8_crown_a3_s0_mdnie_tune,
#endif
	.panel_dim_info = {
		&s6e3ha8_crown_a3_s0_panel_dimming_info,
		&s6e3ha8_crown_a3_s0_panel_hmd_dimming_info,
#ifdef CONFIG_SUPPORT_AOD_BL
		&s6e3ha8_crown_a3_s0_panel_aod_dimming_info,
#endif
	},
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	.copr_data = &s6e3ha8_crown_a3_s0_copr_data,
#endif
#ifdef CONFIG_EXTEND_LIVE_CLOCK
	.aod_tune = &s6e3ha8_crown_aod,
#endif
#ifdef CONFIG_SUPPORT_DDI_FLASH
	.poc_data = &s6e3ha8_crown_poc_data,
#endif
};

static int __init s6e3ha8_crown_a3_s0_panel_init(void)
{
	register_common_panel(&s6e3ha8_crown_a3_s0_preliminary_panel_info);
	register_common_panel(&s6e3ha8_crown_a3_s0_default_panel_info);

	return 0;
}
arch_initcall(s6e3ha8_crown_a3_s0_panel_init)
#endif /* __S6E3HA8_CROWN_A3_S0_PANEL_H__ */
