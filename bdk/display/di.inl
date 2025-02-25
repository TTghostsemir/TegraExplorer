/*
* Copyright (c) 2018 naehrwert
* Copyright (c) 2018-2020 CTCaer
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 2, as published by the Free Software Foundation.
*
* This program is distributed in the hope it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

//Display A config.
static const cfg_op_t _display_dc_setup_win_config[94] = {
	{DC_CMD_STATE_ACCESS, 0},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_REG_ACT_CONTROL, 0x54}, // Select H counter for win A/B/C.
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_DISP_DC_MCCIF_FIFOCTRL, 0},
	{DC_DISP_DISP_MEM_HIGH_PRIORITY, 0},
	{DC_DISP_DISP_MEM_HIGH_PRIORITY_TIMER, 0},
	{DC_CMD_DISPLAY_POWER_CONTROL, PW0_ENABLE | PW1_ENABLE | PW2_ENABLE | PW3_ENABLE | PW4_ENABLE | PM0_ENABLE | PM1_ENABLE},
	{DC_CMD_GENERAL_INCR_SYNCPT_CNTRL, SYNCPT_CNTRL_NO_STALL},
	{DC_CMD_CONT_SYNCPT_VSYNC, SYNCPT_VSYNC_ENABLE | 0x9}, // 9: SYNCPT
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE | WIN_B_UPDATE | WIN_C_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ | WIN_B_ACT_REQ | WIN_C_ACT_REQ},
	{DC_CMD_STATE_ACCESS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_COLOR_CONTROL, BASE_COLOR_SIZE_888},
	{DC_DISP_DISP_INTERFACE_CONTROL, DISP_DATA_FORMAT_DF1P1C},
	{DC_COM_PIN_OUTPUT_POLARITY(1), 0x1000000},
	{DC_COM_PIN_OUTPUT_POLARITY(3), 0},
	{DC_DISP_BLEND_BACKGROUND_COLOR, 0},
	{DC_COM_CRC_CONTROL, 0},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE | WIN_B_UPDATE | WIN_C_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ | WIN_B_ACT_REQ | WIN_C_ACT_REQ},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_COMMAND_OPTION0, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_STOP},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE | WIN_B_UPDATE | WIN_C_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ | WIN_B_ACT_REQ | WIN_C_ACT_REQ}
};

//DSI Init config.
static const cfg_op_t _display_dsi_init_config_part1[8] = {
	{DSI_WR_DATA, 0},
	{DSI_INT_ENABLE, 0},
	{DSI_INT_STATUS, 0},
	{DSI_INT_MASK, 0},
	{DSI_INIT_SEQ_DATA_0, 0},
	{DSI_INIT_SEQ_DATA_1, 0},
	{DSI_INIT_SEQ_DATA_2, 0},
	{DSI_INIT_SEQ_DATA_3, 0}
};
static const cfg_op_t _display_dsi_init_config_part2[14] = {
	{DSI_DCS_CMDS, 0},
	{DSI_PKT_SEQ_0_LO, 0},
	{DSI_PKT_SEQ_1_LO, 0},
	{DSI_PKT_SEQ_2_LO, 0},
	{DSI_PKT_SEQ_3_LO, 0},
	{DSI_PKT_SEQ_4_LO, 0},
	{DSI_PKT_SEQ_5_LO, 0},
	{DSI_PKT_SEQ_0_HI, 0},
	{DSI_PKT_SEQ_1_HI, 0},
	{DSI_PKT_SEQ_2_HI, 0},
	{DSI_PKT_SEQ_3_HI, 0},
	{DSI_PKT_SEQ_4_HI, 0},
	{DSI_PKT_SEQ_5_HI, 0},
	{DSI_CONTROL, 0}
};
static const cfg_op_t _display_dsi_init_config_part3_t210b01[7] = {
	{DSI_PAD_CONTROL_1, 0},
	{DSI_PAD_CONTROL_2, 0},
	{DSI_PAD_CONTROL_3, 0},
	{DSI_PAD_CONTROL_4, 0},
	{DSI_PAD_CONTROL_5_B01, 0},
	{DSI_PAD_CONTROL_6_B01, 0},
	{DSI_PAD_CONTROL_7_B01, 0}
};
static const cfg_op_t _display_dsi_init_config_part4[10] = {
	{DSI_PAD_CONTROL_CD, 0},
	{DSI_SOL_DELAY, 0x18},
	{DSI_MAX_THRESHOLD, 0x1E0},
	{DSI_TRIGGER, 0},
	{DSI_INIT_SEQ_CONTROL, 0},
	{DSI_PKT_LEN_0_1, 0},
	{DSI_PKT_LEN_2_3, 0},
	{DSI_PKT_LEN_4_5, 0},
	{DSI_PKT_LEN_6_7, 0},
	{DSI_PAD_CONTROL_1, 0}
};
static const cfg_op_t _display_dsi_init_config_part5[12] = {
	{DSI_PHY_TIMING_1, 0x40A0E05},
	{DSI_PHY_TIMING_2, 0x30109},
	{DSI_BTA_TIMING, 0x190A14},
	{DSI_TIMEOUT_0, DSI_TIMEOUT_LRX(0x2000) | DSI_TIMEOUT_HTX(0xFFFF)},
	{DSI_TIMEOUT_1, DSI_TIMEOUT_PR(0x765) | DSI_TIMEOUT_TA(0x2000)},
	{DSI_TO_TALLY, 0},
	{DSI_PAD_CONTROL_0, DSI_PAD_CONTROL_VS1_PULLDN(0) | DSI_PAD_CONTROL_VS1_PDIO(0)}, // Enable
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_POWER_CONTROL, 0},
	{DSI_POWER_CONTROL, 0},
	{DSI_PAD_CONTROL_1, 0}
};
static const cfg_op_t _display_dsi_init_config_part6[14] = {
	{DSI_PHY_TIMING_1, 0x40A0E05},
	{DSI_PHY_TIMING_2, 0x30118},
	{DSI_BTA_TIMING, 0x190A14},
	{DSI_TIMEOUT_0, DSI_TIMEOUT_LRX(0x2000) | DSI_TIMEOUT_HTX(0xFFFF)},
	{DSI_TIMEOUT_1, DSI_TIMEOUT_PR(0x1343) | DSI_TIMEOUT_TA(0x2000)},
	{DSI_TO_TALLY, 0},
	{DSI_HOST_CONTROL, DSI_HOST_CONTROL_CRC_RESET | DSI_HOST_CONTROL_TX_TRIG_HOST | DSI_HOST_CONTROL_CS | DSI_HOST_CONTROL_ECC},
	{DSI_CONTROL, DSI_CONTROL_LANES(3) | DSI_CONTROL_HOST_ENABLE},
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_MAX_THRESHOLD, 0x40},
	{DSI_TRIGGER, 0},
	{DSI_TX_CRC, 0},
	{DSI_INIT_SEQ_CONTROL, 0}
};

//DSI panel config.
static const cfg_op_t _display_init_config_jdi[43] = {
	{DSI_WR_DATA, 0x0439},     // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x9483FFB9}, // MIPI_DCS_PRIV_SET_EXTC. (Pass: FF 83 94).
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0xBD15},     // MIPI_DSI_DCS_SHORT_WRITE_PARAM: 0 to 0xBD.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x1939},     // MIPI_DSI_DCS_LONG_WRITE: 25 bytes.
	{DSI_WR_DATA, 0xAAAAAAD8}, // Register: 0xD8.
	{DSI_WR_DATA, 0xAAAAAAEB},
	{DSI_WR_DATA, 0xAAEBAAAA},
	{DSI_WR_DATA, 0xAAAAAAAA},
	{DSI_WR_DATA, 0xAAAAAAEB},
	{DSI_WR_DATA, 0xAAEBAAAA},
	{DSI_WR_DATA, 0xAA},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x01BD15},   // MIPI_DSI_DCS_SHORT_WRITE_PARAM: 1 to 0xBD.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x2739},     // MIPI_DSI_DCS_LONG_WRITE: 39 bytes.
	{DSI_WR_DATA, 0xFFFFFFD8}, // Register: 0xD8.
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFF},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x02BD15},   // MIPI_DSI_DCS_SHORT_WRITE_PARAM: 2 to 0xBD.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0xF39},      // MIPI_DSI_DCS_LONG_WRITE: 15 bytes.
	{DSI_WR_DATA, 0xFFFFFFD8}, // Register: 0xD8.
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFFFF},
	{DSI_WR_DATA, 0xFFFFFF},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x00BD15},   // MIPI_DSI_DCS_SHORT_WRITE_PARAM: 0 to 0xBD.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x06D915},   // MIPI_DSI_DCS_SHORT_WRITE_PARAM: 6 to 0xD9.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x439},      // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x000000B9}, // MIPI_DCS_PRIV_SET_EXTC. Disable.
	{DSI_TRIGGER, DSI_TRIGGER_HOST}
};

//DSI packet config.
static const cfg_op_t _display_dsi_packet_config[19] = {
	{DSI_PHY_TIMING_1, 0x40A0E05},
	{DSI_PHY_TIMING_2, 0x30172},
	{DSI_BTA_TIMING, 0x190A14},
	{DSI_TIMEOUT_0, DSI_TIMEOUT_LRX(0x2000) | DSI_TIMEOUT_HTX(0xA40)},
	{DSI_TIMEOUT_1, DSI_TIMEOUT_PR(0x5A2F) | DSI_TIMEOUT_TA(0x2000)},
	{DSI_TO_TALLY, 0},
	{DSI_PKT_SEQ_0_LO, 0x40000208},
	{DSI_PKT_SEQ_2_LO, 0x40000308},
	{DSI_PKT_SEQ_4_LO, 0x40000308},
	{DSI_PKT_SEQ_1_LO, 0x40000308},
	{DSI_PKT_SEQ_3_LO, 0x3F3B2B08},
	{DSI_PKT_SEQ_3_HI, 0x2CC},
	{DSI_PKT_SEQ_5_LO, 0x3F3B2B08},
	{DSI_PKT_SEQ_5_HI, 0x2CC},
	{DSI_PKT_LEN_0_1, 0xCE0000},
	{DSI_PKT_LEN_2_3, 0x87001A2},
	{DSI_PKT_LEN_4_5, 0x190},
	{DSI_PKT_LEN_6_7, 0x190},
	{DSI_HOST_CONTROL, 0}
};

//DSI mode config.
static const cfg_op_t _display_dsi_mode_config[10] = {
	{DSI_TRIGGER, 0},
	{DSI_CONTROL, 0},
	{DSI_SOL_DELAY, 6},
	{DSI_MAX_THRESHOLD, 0x1E0},
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_CONTROL, DSI_CONTROL_HS_CLK_CTRL | DSI_CONTROL_FORMAT(3) | DSI_CONTROL_LANES(3) | DSI_CONTROL_VIDEO_ENABLE},
	{DSI_HOST_CONTROL, DSI_HOST_CONTROL_HS | DSI_HOST_CONTROL_FIFO_SEL| DSI_HOST_CONTROL_CS | DSI_HOST_CONTROL_ECC},
	{DSI_CONTROL, DSI_CONTROL_HS_CLK_CTRL | DSI_CONTROL_FORMAT(3) | DSI_CONTROL_LANES(3) | DSI_CONTROL_VIDEO_ENABLE},
	{DSI_HOST_CONTROL, DSI_HOST_CONTROL_CS | DSI_HOST_CONTROL_ECC},
	{DSI_HOST_CONTROL, DSI_HOST_CONTROL_HS | DSI_HOST_CONTROL_CS | DSI_HOST_CONTROL_ECC}
};

//MIPI CAL config.
static const cfg_op_t _display_mipi_pad_cal_config[4] = {
	{MIPI_CAL_MIPI_BIAS_PAD_CFG2,  0},
	{MIPI_CAL_CIL_MIPI_CAL_STATUS, 0xF3F10000},
	{MIPI_CAL_MIPI_BIAS_PAD_CFG0,  0},
	{MIPI_CAL_MIPI_BIAS_PAD_CFG2,  0}
};

//DSI config.
static const cfg_op_t _display_dsi_pad_cal_config_t210[4] = {
	{DSI_PAD_CONTROL_1, 0},
	{DSI_PAD_CONTROL_2, 0},
	{DSI_PAD_CONTROL_3, DSI_PAD_PREEMP_PD_CLK(0x3) | DSI_PAD_PREEMP_PU_CLK(0x3) | DSI_PAD_PREEMP_PD(0x03) | DSI_PAD_PREEMP_PU(0x3)},
	{DSI_PAD_CONTROL_4, 0}
};
static const cfg_op_t _display_dsi_pad_cal_config_t210b01[7] = {
	{DSI_PAD_CONTROL_1, 0},
	{DSI_PAD_CONTROL_2, 0},
	{DSI_PAD_CONTROL_3, 0},
	{DSI_PAD_CONTROL_4, 0x77777},
	{DSI_PAD_CONTROL_5_B01, 0x77777},
	{DSI_PAD_CONTROL_6_B01, 0x1111},
	{DSI_PAD_CONTROL_7_B01, 0}
};

//MIPI CAL config.
static const cfg_op_t _display_mipi_dsi_cal_offsets_config_t210[4] = {
	{MIPI_CAL_DSIA_MIPI_CAL_CONFIG,   0x200200},
	{MIPI_CAL_DSIB_MIPI_CAL_CONFIG,   0x200200},
	{MIPI_CAL_DSIA_MIPI_CAL_CONFIG_2, 0x200002},
	{MIPI_CAL_DSIB_MIPI_CAL_CONFIG_2, 0x200002}
};
static const cfg_op_t _display_mipi_dsi_cal_offsets_config_t210b01[4] = {
	{MIPI_CAL_DSIA_MIPI_CAL_CONFIG,   0x200006},
	{MIPI_CAL_DSIB_MIPI_CAL_CONFIG,   0x200006},
	{MIPI_CAL_DSIA_MIPI_CAL_CONFIG_2, 0x260000},
	{MIPI_CAL_DSIB_MIPI_CAL_CONFIG_2, 0x260000}
};
static const cfg_op_t _display_mipi_apply_dsi_cal_config[12] = {
	{MIPI_CAL_CILA_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_CILB_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_CILC_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_CILD_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_CILE_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_CILF_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_DSIC_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_DSID_MIPI_CAL_CONFIG,   0},
	{MIPI_CAL_DSIB_MIPI_CAL_CONFIG_2, 0},
	{MIPI_CAL_DSIC_MIPI_CAL_CONFIG_2, 0},
	{MIPI_CAL_DSID_MIPI_CAL_CONFIG_2, 0},
	{MIPI_CAL_MIPI_CAL_CTRL,          0x2A000001}
};

//Display A config.
static const cfg_op_t _display_video_disp_controller_enable_config[113] = {
	{DC_CMD_STATE_ACCESS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_DV_CONTROL, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	/* Setup default YUV colorspace conversion coefficients */
	{DC_WIN_CSC_YOF,   0xF0},
	{DC_WIN_CSC_KYRGB, 0x12A},
	{DC_WIN_CSC_KUR,   0},
	{DC_WIN_CSC_KVR,   0x198},
	{DC_WIN_CSC_KUG,   0x39B},
	{DC_WIN_CSC_KVG,   0x32F},
	{DC_WIN_CSC_KUB,   0x204},
	{DC_WIN_CSC_KVB,   0},
	/* End of color coefficients */
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_COLOR_CONTROL, BASE_COLOR_SIZE_888},
	{DC_DISP_DISP_INTERFACE_CONTROL, DISP_DATA_FORMAT_DF1P1C},
	{DC_COM_PIN_OUTPUT_POLARITY(1), 0x1000000},
	{DC_COM_PIN_OUTPUT_POLARITY(3), 0},
	{DC_DISP_BLEND_BACKGROUND_COLOR, 0},
	{DC_COM_CRC_CONTROL, 0},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE | WIN_B_UPDATE | WIN_C_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ | WIN_B_ACT_REQ | WIN_C_ACT_REQ},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WINBUF_BLEND_LAYER_CONTROL, 0x10000FF},
	{DC_CMD_DISPLAY_COMMAND_OPTION0, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_STOP},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE | WIN_B_UPDATE | WIN_C_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ | WIN_B_ACT_REQ | WIN_C_ACT_REQ},
	{DC_CMD_STATE_ACCESS, 0},

	/* Set Display timings
	 *
	 * DC_DISP_REF_TO_SYNC:
	 *  V_REF_TO_SYNC - 1
	 *  H_REF_TO_SYNC - 0
	 *
	 * DC_DISP_SYNC_WIDTH:
	 *  V_SYNC_WIDTH - 1
	 *  H_SYNC_WIDTH - 72
	 *
	 * DC_DISP_BACK_PORCH:
	 *  V_BACK_PORCH - 9
	 *  H_BACK_PORCH - 72
	 *
	 * DC_DISP_ACTIVE:
	 *  V_DISP_ACTIVE - 1280
	 *  H_DISP_ACTIVE - 720
	 *
	 * DC_DISP_FRONT_PORCH:
	 *  V_FRONT_PORCH - 10
	 *  H_FRONT_PORCH - 136
	 */
	{DC_DISP_DISP_TIMING_OPTIONS, 0},
	{DC_DISP_REF_TO_SYNC, 0x10000},
	{DC_DISP_SYNC_WIDTH,  0x10048},
	{DC_DISP_BACK_PORCH,  0x90048},
	{DC_DISP_ACTIVE,      0x50002D0},
	{DC_DISP_FRONT_PORCH, 0xA0088},   // Sources say that this should happen before DC_DISP_ACTIVE cmd.
	/* End of Display timings */

	{DC_DISP_SHIFT_CLOCK_OPTIONS, SC1_H_QUALIFIER_NONE | SC0_H_QUALIFIER_NONE},
	{DC_COM_PIN_OUTPUT_ENABLE(1), 0},
	{DC_DISP_DATA_ENABLE_OPTIONS, DE_SELECT_ACTIVE | DE_CONTROL_NORMAL},
	{DC_DISP_DISP_INTERFACE_CONTROL, DISP_DATA_FORMAT_DF1P1C},
	{DC_DISP_DISP_CLOCK_CONTROL, 0},
	{DC_CMD_DISPLAY_COMMAND_OPTION0, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_C_DISPLAY},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_STATE_ACCESS, READ_MUX | WRITE_MUX},
	{DC_DISP_FRONT_PORCH, 0xA0088},
	{DC_CMD_STATE_ACCESS, 0},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_GENERAL_INCR_SYNCPT, 0x301},
	{DC_CMD_GENERAL_INCR_SYNCPT, 0x301},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_STATE_ACCESS, 0},
	{DC_DISP_DISP_CLOCK_CONTROL, PIXEL_CLK_DIVIDER_PCD1 | SHIFT_CLK_DIVIDER(4)},
	{DC_DISP_DISP_COLOR_CONTROL, BASE_COLOR_SIZE_888},
	{DC_CMD_DISPLAY_COMMAND_OPTION0, 0}
};

////Display A config.
static const cfg_op_t _display_video_disp_controller_disable_config[17] = {
	{DC_DISP_FRONT_PORCH, 0xA0088},
	{DC_CMD_INT_MASK, 0},
	{DC_CMD_STATE_ACCESS, 0},
	{DC_CMD_INT_ENABLE, 0},
	{DC_CMD_CONT_SYNCPT_VSYNC, 0},
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_STOP},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_GENERAL_INCR_SYNCPT, 0x301},
	{DC_CMD_GENERAL_INCR_SYNCPT, 0x301},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
	{DC_CMD_DISPLAY_POWER_CONTROL, 0},
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ},
};

//DSI config.
static const cfg_op_t _display_dsi_timing_deinit_config[16] = {
	{DSI_POWER_CONTROL, 0},
	{DSI_PAD_CONTROL_1, 0},
	{DSI_PHY_TIMING_0, 0x6070601},
	{DSI_PHY_TIMING_1, 0x40A0E05},
	{DSI_PHY_TIMING_2, 0x30118},
	{DSI_BTA_TIMING, 0x190A14},
	{DSI_TIMEOUT_0, DSI_TIMEOUT_LRX(0x2000) | DSI_TIMEOUT_HTX(0xFFFF) },
	{DSI_TIMEOUT_1, DSI_TIMEOUT_PR(0x1343) | DSI_TIMEOUT_TA(0x2000)},
	{DSI_TO_TALLY, 0},
	{DSI_HOST_CONTROL, DSI_HOST_CONTROL_CRC_RESET | DSI_HOST_CONTROL_TX_TRIG_HOST | DSI_HOST_CONTROL_CS | DSI_HOST_CONTROL_ECC},
	{DSI_CONTROL, DSI_CONTROL_LANES(3) | DSI_CONTROL_HOST_ENABLE},
	{DSI_POWER_CONTROL, DSI_POWER_CONTROL_ENABLE},
	{DSI_MAX_THRESHOLD, 0x40},
	{DSI_TRIGGER, 0},
	{DSI_TX_CRC, 0},
	{DSI_INIT_SEQ_CONTROL, 0}
};

//DSI config (if ver == 0x10).
static const cfg_op_t _display_deinit_config_jdi[22] = {
	{DSI_WR_DATA, 0x439},      // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x9483FFB9}, // MIPI_DCS_PRIV_SET_EXTC. (Pass: FF 83 94).
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x2139},     // MIPI_DSI_DCS_LONG_WRITE: 33 bytes.
	{DSI_WR_DATA, 0x191919D5}, // Register: 0xD5.
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0xB39},      // MIPI_DSI_DCS_LONG_WRITE: 11 bytes.
	{DSI_WR_DATA, 0x4F0F41B1}, // MIPI_DCS_PRIV_SET_POWER_CONTROL.
	{DSI_WR_DATA, 0xF179A433},
	{DSI_WR_DATA, 0x002D81},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x439},      // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x000000B9}, // MIPI_DCS_PRIV_SET_EXTC. Disable.
	{DSI_TRIGGER, DSI_TRIGGER_HOST}
};

static const cfg_op_t _display_deinit_config_auo[37] = {
	{DSI_WR_DATA, 0x439},      // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x9483FFB9}, // MIPI_DCS_PRIV_SET_EXTC. (Pass: FF 83 94).
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x2C39},     // MIPI_DSI_DCS_LONG_WRITE: 44 bytes.
	{DSI_WR_DATA, 0x191919D5}, // Register: 0xD5.
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x2C39},     // MIPI_DSI_DCS_LONG_WRITE: 44 bytes.
	{DSI_WR_DATA, 0x191919D6}, // Register: 0xD6.
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_WR_DATA, 0x19191919},
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0xB39},      // MIPI_DSI_DCS_LONG_WRITE: 11 bytes.
	{DSI_WR_DATA, 0x711148B1}, // MIPI_DCS_PRIV_SET_POWER_CONTROL. (Not deep standby, BT1 / XDK, VRH gamma volt adj 49 / x40).
	// (NVRH gamma volt adj 9, Amplifier current small / x30, FS0 freq Fosc/80 / FS1 freq Fosc/32, Enter standby / PON / VCOMG).
	{DSI_WR_DATA, 0x71143209},
	{DSI_WR_DATA, 0x114D31},   // (Unknown).
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
	{DSI_WR_DATA, 0x439},      // MIPI_DSI_DCS_LONG_WRITE: 4 bytes.
	{DSI_WR_DATA, 0x000000B9}, // MIPI_DCS_PRIV_SET_EXTC. Disable.
	{DSI_TRIGGER, DSI_TRIGGER_HOST}
};

static const cfg_op_t _display_init_config_invert[3] = {
	{DSI_WR_DATA, 0x239},
	{DSI_WR_DATA, 0x02C1}, // INV_EN.
	{DSI_TRIGGER, DSI_TRIGGER_HOST},
};

//Display A config.
static const cfg_op_t cfg_display_one_color[8] = {
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_C_DISPLAY} // Continuous display.
};

//Display A config linear pitch.
static const cfg_op_t cfg_display_framebuffer_pitch[32] = {
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_COLOR_DEPTH, WIN_COLOR_DEPTH_B8G8R8A8}, // NX Default: T_A8B8G8R8, WIN_COLOR_DEPTH_R8G8B8A8.
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_POSITION, 0}, //(0,0)
	{DC_WIN_H_INITIAL_DDA, 0},
	{DC_WIN_V_INITIAL_DDA, 0},
	{DC_WIN_PRESCALED_SIZE, V_PRESCALED_SIZE(1280) | H_PRESCALED_SIZE(720 * 4)},
	{DC_WIN_DDA_INC, V_DDA_INC(0x1000) | H_DDA_INC(0x1000)}, // 1.0x.
	{DC_WIN_SIZE, V_SIZE(1280) | H_SIZE(720)},
	{DC_WIN_LINE_STRIDE, UV_LINE_STRIDE(720 * 2) | LINE_STRIDE(720 * 4)}, // 720*2x720*4 (= 0x600 x 0xC00) bytes, see TRM for alignment requirements.
	{DC_WIN_BUFFER_CONTROL, BUFFER_CONTROL_HOST},
	{DC_WINBUF_SURFACE_KIND, PITCH},
	{DC_WINBUF_START_ADDR, IPL_FB_ADDRESS}, // Framebuffer address.
	{DC_WINBUF_ADDR_H_OFFSET, 0},
	{DC_WINBUF_ADDR_V_OFFSET, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, WIN_ENABLE}, // Enable window AD.
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_C_DISPLAY}, // Continuous display.
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ}
};

//Display A config linear pitch inverse + Win D support.
static const cfg_op_t cfg_display_framebuffer_pitch_inv[34] = {
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_D_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_COLOR_DEPTH, WIN_COLOR_DEPTH_B8G8R8A8}, // NX Default: T_A8B8G8R8, WIN_COLOR_DEPTH_R8G8B8A8.
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_POSITION, 0}, //(0,0)
	{DC_WIN_H_INITIAL_DDA, 0},
	{DC_WIN_V_INITIAL_DDA, 0},
	{DC_WIN_PRESCALED_SIZE, V_PRESCALED_SIZE(1280) | H_PRESCALED_SIZE(720 * 4)},
	{DC_WIN_DDA_INC, V_DDA_INC(0x1000) | H_DDA_INC(0x1000)}, // 1.0x.
	{DC_WIN_SIZE, V_SIZE(1280) | H_SIZE(720)},
	{DC_WIN_LINE_STRIDE, UV_LINE_STRIDE(720 * 2) | LINE_STRIDE(720 * 4)}, // 720*2x720*4 (= 0x600 x 0xC00) bytes, see TRM for alignment requirements.
	{DC_WIN_BUFFER_CONTROL, BUFFER_CONTROL_HOST},
	{DC_WINBUF_SURFACE_KIND, PITCH},
	{DC_WINBUF_START_ADDR, NYX_FB_ADDRESS}, // Framebuffer address.
	{DC_WINBUF_ADDR_H_OFFSET, 0}, // Linear: 0x383FFC, Block: 0x3813FC.
	{DC_WINBUF_ADDR_V_OFFSET, 1279}, // Linear: 1279, Block: 0.
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, WIN_ENABLE | V_DIRECTION}, // Enable window AD.
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_C_DISPLAY}, // Continuous display.
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ}
};

//Display A config block linear.
static const cfg_op_t cfg_display_framebuffer_block[34] = {
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_D_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_C_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_B_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_A_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_COLOR_DEPTH, WIN_COLOR_DEPTH_B8G8R8A8}, // NX Default: T_A8B8G8R8, WIN_COLOR_DEPTH_R8G8B8A8.
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_POSITION, 0}, //(0,0)
	{DC_WIN_H_INITIAL_DDA, 0},
	{DC_WIN_V_INITIAL_DDA, 0},
	{DC_WIN_PRESCALED_SIZE, V_PRESCALED_SIZE(1280) | H_PRESCALED_SIZE(720 * 4)},
	{DC_WIN_DDA_INC, V_DDA_INC(0x1000) | H_DDA_INC(0x1000)}, // 1.0x.
	{DC_WIN_SIZE, V_SIZE(1280) | H_SIZE(720)},
	{DC_WIN_LINE_STRIDE, UV_LINE_STRIDE(1280 * 2) | LINE_STRIDE(1280 * 4)}, //720*2x720*4 (= 0x600 x 0xC00) bytes, see TRM for alignment requirements.
	{DC_WIN_BUFFER_CONTROL, BUFFER_CONTROL_HOST},
	{DC_WINBUF_SURFACE_KIND, BLOCK_HEIGHT(4) | BLOCK},
	{DC_WINBUF_START_ADDR, NYX_FB_ADDRESS}, // Framebuffer address.
	{DC_WINBUF_ADDR_H_OFFSET, 0x3813FC}, // Linear: 0x383FFC, Block: 0x3813FC.
	{DC_WINBUF_ADDR_V_OFFSET, 0}, // Linear: 1279, Block: 0.
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_DISP_DISP_WIN_OPTIONS, DSI_ENABLE},
	{DC_WIN_WIN_OPTIONS, WIN_ENABLE | SCAN_COLUMN | H_DIRECTION}, // Enable window AD. | SCAN_COLUMN | H_DIRECTION.
	{DC_CMD_DISPLAY_COMMAND, DISP_CTRL_MODE_C_DISPLAY}, // Continuous display.
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_A_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_A_ACT_REQ}
};

//Display D config.
static const cfg_op_t cfg_display_framebuffer_log[20] = {
	{DC_CMD_DISPLAY_WINDOW_HEADER, WINDOW_D_SELECT},
	{DC_WIN_WIN_OPTIONS, 0},
	{DC_WIN_COLOR_DEPTH, WIN_COLOR_DEPTH_B8G8R8A8},
	{DC_WIN_POSITION, 0}, //(0,0)
	{DC_WIN_H_INITIAL_DDA, 0},
	{DC_WIN_V_INITIAL_DDA, 0},
	{DC_WIN_PRESCALED_SIZE, V_PRESCALED_SIZE(1280) | H_PRESCALED_SIZE(656 * 4)},
	{DC_WIN_DDA_INC, V_DDA_INC(0x1000) | H_DDA_INC(0x1000)}, // 1.0x.
	{DC_WIN_SIZE, V_SIZE(1280) | H_SIZE(656)},
	{DC_WIN_LINE_STRIDE, UV_LINE_STRIDE(656 * 2) | LINE_STRIDE(656 * 4)}, //656*2x656*4 (= 0x600 x 0xC00) bytes, see TRM for alignment requirements.
	{DC_WIN_BUFFER_CONTROL, BUFFER_CONTROL_HOST},
	{DC_WINBUF_SURFACE_KIND, PITCH},
	{DC_WINBUF_START_ADDR, LOG_FB_ADDRESS}, // Framebuffer address.
	{DC_WINBUF_ADDR_H_OFFSET, 0},
	{DC_WINBUF_ADDR_V_OFFSET, 0},
	{DC_WINBUF_BLEND_LAYER_CONTROL, WIN_BLEND_ENABLE | WIN_K1(200)},
	{DC_WINBUF_BLEND_MATCH_SELECT, WIN_BLEND_FACT_SRC_COLOR_MATCH_SEL_K1 | WIN_BLEND_FACT_DST_COLOR_MATCH_SEL_NEG_K1},
	{DC_WIN_WIN_OPTIONS, 0}, // Enable window DD.
	{DC_CMD_STATE_CONTROL, GENERAL_UPDATE | WIN_D_UPDATE},
	{DC_CMD_STATE_CONTROL, GENERAL_ACT_REQ | WIN_D_ACT_REQ}
};