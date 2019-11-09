
/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_DCM_Golden_Setting_tcl_gs_dpidle_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_dpidle = AP_DCM_Golden_Setting_tcl_gs_dpidle_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_dpidle_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_suspend_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_suspend = AP_DCM_Golden_Setting_tcl_gs_suspend_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_suspend_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_vp_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0x00000000,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000000,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_vp = AP_DCM_Golden_Setting_tcl_gs_vp_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_vp_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_topck_name_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001078, 0xB7FF01C0, 0x00000000,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x00000000,/* DFS_MEM_DCM_CTRL */
	0x14000100, 0xFFFFBFF8, 0x00000000,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x00000000,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0x00000000,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000000,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_topck_name = AP_DCM_Golden_Setting_tcl_gs_topck_name_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_topck_name_len = 21;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_paging_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_paging = AP_DCM_Golden_Setting_tcl_gs_paging_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_paging_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_mp3_play_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_mp3_play = AP_DCM_Golden_Setting_tcl_gs_mp3_play_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_mp3_play_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_pdn_ao_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00000000,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x00000000,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x00000000,/* DFS_MEM_DCM_CTRL */
	0x14000100, 0xFFFFBFF8, 0x00000000,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x00000000,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0x00000000,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000000,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_pdn_ao = AP_DCM_Golden_Setting_tcl_gs_pdn_ao_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_pdn_ao_len = 27;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_idle_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_idle = AP_DCM_Golden_Setting_tcl_gs_idle_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_idle_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_talk_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_talk = AP_DCM_Golden_Setting_tcl_gs_talk_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_talk_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_connsys_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_connsys = AP_DCM_Golden_Setting_tcl_gs_connsys_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_connsys_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_dcm_off_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00600600,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0x00007FE0,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x10001F00, 0x10000000, 0x00000000,/* INFRA_MISC */
	0x13000010, 0x00008000, 0x00000000,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0x00000000,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x00000000,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0x00000000,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000000,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000001/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_dcm_off = AP_DCM_Golden_Setting_tcl_gs_dcm_off_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_dcm_off_len = 33;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_datalink_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_datalink = AP_DCM_Golden_Setting_tcl_gs_datalink_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_datalink_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_vr_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x13000010, 0x0003FF7F, 0x0000C03F,/* MFG_DCM_CON_0 */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0x00000000,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000000,/* MMSYS_HW_DCM_DIS1 */
	0x16000018, 0x00000001, 0x00000000/* VDEC_DCM_CON */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_vr = AP_DCM_Golden_Setting_tcl_gs_vr_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_vr_len = 36;

const unsigned int AP_DCM_Golden_Setting_tcl_gs_flight_data[] = {
/* Address, Mask, Golden Setting Value */
	0x10001070, 0x00707FFF, 0x00700603,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0xBFFFFFFB, 0xB07F83E3,/* PERI_BUS_DCM_CTRL */
	0x10001078, 0xB7FF01C1, 0x03E00180,/* MEM_DCM_CTRL */
	0x1000107C, 0x07FF01C1, 0x03E00180,/* DFS_MEM_DCM_CTRL */
	0x100010A0, 0x0000000F, 0x00000000,/* P2P_RX_CLK_ON */
	0x10001F00, 0x10000000, 0x10000000,/* INFRA_MISC */
	0x14000100, 0xFFFFBFF8, 0xFFFFBFF8,/* MMSYS_CG_CON0 */
	0x14000110, 0x0000003F, 0x0000003F,/* MMSYS_CG_CON1 */
	0x14000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_HW_DCM_DIS0 */
	0x14000130, 0x00000703, 0x00000703,/* MMSYS_HW_DCM_DIS1 */
};

const unsigned int *AP_DCM_Golden_Setting_tcl_gs_flight = AP_DCM_Golden_Setting_tcl_gs_flight_data;

unsigned int AP_DCM_Golden_Setting_tcl_gs_flight_len = 30;
