
#ifndef _MT_SPM_REG_
#define _MT_SPM_REG_

#include "sleep_def_mt6775.h"
#include "pcm_def_mt6775.h"



#define POWERON_CONFIG_EN              (SPM_BASE + 0x0000)
#define SPM_POWER_ON_VAL0              (SPM_BASE + 0x0004)
#define SPM_POWER_ON_VAL1              (SPM_BASE + 0x0008)
#define SPM_CLK_CON                    (SPM_BASE + 0x000C)
#define SPM_CLK_SETTLE                 (SPM_BASE + 0x0010)
#define PCM_CON0                       (SPM_BASE + 0x0018)
#define PCM_CON1                       (SPM_BASE + 0x001C)
#define PCM_IM_PTR                     (SPM_BASE + 0x0020)
#define PCM_IM_LEN                     (SPM_BASE + 0x0024)
#define PCM_REG_DATA_INI               (SPM_BASE + 0x0028)
#define PCM_PWR_IO_EN                  (SPM_BASE + 0x002C)
#define PCM_TIMER_VAL                  (SPM_BASE + 0x0030)
#define PCM_WDT_VAL                    (SPM_BASE + 0x0034)
#define PCM_IM_HOST_RW_PTR             (SPM_BASE + 0x0038)
#define PCM_IM_HOST_RW_DAT             (SPM_BASE + 0x003C)
#define PCM_EVENT_VECTOR0              (SPM_BASE + 0x0040)
#define PCM_EVENT_VECTOR1              (SPM_BASE + 0x0044)
#define PCM_EVENT_VECTOR2              (SPM_BASE + 0x0048)
#define PCM_EVENT_VECTOR3              (SPM_BASE + 0x004C)
#define PCM_EVENT_VECTOR4              (SPM_BASE + 0x0050)
#define PCM_EVENT_VECTOR5              (SPM_BASE + 0x0054)
#define PCM_EVENT_VECTOR6              (SPM_BASE + 0x0058)
#define PCM_EVENT_VECTOR7              (SPM_BASE + 0x005C)
#define PCM_EVENT_VECTOR8              (SPM_BASE + 0x0060)
#define PCM_EVENT_VECTOR9              (SPM_BASE + 0x0064)
#define PCM_EVENT_VECTOR10             (SPM_BASE + 0x0068)
#define PCM_EVENT_VECTOR11             (SPM_BASE + 0x006C)
#define PCM_EVENT_VECTOR12             (SPM_BASE + 0x0070)
#define PCM_EVENT_VECTOR13             (SPM_BASE + 0x0074)
#define PCM_EVENT_VECTOR14             (SPM_BASE + 0x0078)
#define PCM_EVENT_VECTOR15             (SPM_BASE + 0x007C)
#define PCM_EVENT_VECTOR_EN            (SPM_BASE + 0x0080)
#define SPM_SSPM_IRQ                   (SPM_BASE + 0x0084)
#define SPM_SCP_IRQ                    (SPM_BASE + 0x008C)
#define SPM_TWAM_CON                   (SPM_BASE + 0x0090)
#define SPM_TWAM_WINDOW_LEN            (SPM_BASE + 0x0094)
#define SPM_TWAM_IDLE_SEL              (SPM_BASE + 0x0098)
#define SPM_CPU_WAKEUP_EVENT           (SPM_BASE + 0x009C)
#define SPM_IRQ_MASK                   (SPM_BASE + 0x00A0)
#define SPM_SRC_REQ                    (SPM_BASE + 0x00B0)
#define SPM_SRC_MASK                   (SPM_BASE + 0x00B4)
#define SPM_SRC2_MASK                  (SPM_BASE + 0x00B8)
#define SPM_SRC3_MASK                  (SPM_BASE + 0x00BC)
#define SPM_SRC4_MASK                  (SPM_BASE + 0x00C0)
#define SPM_WAKEUP_EVENT_MASK          (SPM_BASE + 0x00C4)
#define SPM_EXT_WAKEUP_EVENT_MASK      (SPM_BASE + 0x00C8)
#define MEM_CLK_CON                    (SPM_BASE + 0x00CC)
#define SCP_CLK_CON                    (SPM_BASE + 0x00D0)
#define PCM_DEBUG_CON                  (SPM_BASE + 0x00D4)
#define DDR_EN_DBC_LEN                 (SPM_BASE + 0x00D8)
#define SPM_ACK_CHK_CON                (SPM_BASE + 0x00E0)
#define SPM_ACK_CHK_TIMER_VAL          (SPM_BASE + 0x00E4)
#define SRCCLKENI2PWRAP_MASK_B         (SPM_BASE + 0x00E8)
#define SPM_DRS_CON                    (SPM_BASE + 0x00EC)
#define PCM_REG0_DATA                  (SPM_BASE + 0x0100)
#define PCM_REG1_DATA                  (SPM_BASE + 0x0104)
#define PCM_REG2_DATA                  (SPM_BASE + 0x0108)
#define PCM_REG3_DATA                  (SPM_BASE + 0x010C)
#define PCM_REG4_DATA                  (SPM_BASE + 0x0110)
#define PCM_REG5_DATA                  (SPM_BASE + 0x0114)
#define PCM_REG6_DATA                  (SPM_BASE + 0x0118)
#define PCM_REG7_DATA                  (SPM_BASE + 0x011C)
#define PCM_REG8_DATA                  (SPM_BASE + 0x0120)
#define PCM_REG9_DATA                  (SPM_BASE + 0x0124)
#define PCM_REG10_DATA                 (SPM_BASE + 0x0128)
#define PCM_REG11_DATA                 (SPM_BASE + 0x012C)
#define PCM_REG12_DATA                 (SPM_BASE + 0x0130)
#define PCM_REG13_DATA                 (SPM_BASE + 0x0134)
#define PCM_REG14_DATA                 (SPM_BASE + 0x0138)
#define PCM_REG15_DATA                 (SPM_BASE + 0x013C)
#define PCM_REG12_MASK_B_STA           (SPM_BASE + 0x0140)
#define PCM_REG12_EXT_DATA             (SPM_BASE + 0x0144)
#define PCM_REG12_EXT_MASK_B_STA       (SPM_BASE + 0x0148)
#define PCM_EVENT_REG_STA              (SPM_BASE + 0x014C)
#define PCM_TIMER_OUT                  (SPM_BASE + 0x0150)
#define PCM_WDT_OUT                    (SPM_BASE + 0x0154)
#define SPM_IRQ_STA                    (SPM_BASE + 0x0158)
#define SPM_WAKEUP_STA                 (SPM_BASE + 0x015C)
#define SPM_WAKEUP_EXT_STA             (SPM_BASE + 0x0160)
#define SPM_WAKEUP_MISC                (SPM_BASE + 0x0164)
#define SPM_WAKEUP_MISC2               (SPM_BASE + 0x0168)
#define BUS_PROTECT_RDY                (SPM_BASE + 0x016C)
#define BUS_PROTECT2_RDY               (SPM_BASE + 0x0170)
#define BUS_PROTECT3_RDY               (SPM_BASE + 0x0174)
#define BUS_PROTECT4_RDY               (SPM_BASE + 0x0178)
#define BUS_PROTECT5_RDY               (SPM_BASE + 0x017C)
#define SUBSYS_IDLE_STA                (SPM_BASE + 0x0180)
#define CPU_IDLE_STA                   (SPM_BASE + 0x0184)
#define CPU_IDLE_STA_AFT_SEL           (SPM_BASE + 0x0188)
#define PCM_FSM_STA                    (SPM_BASE + 0x018C)
#define PWR_STATUS                     (SPM_BASE + 0x0190)
#define PWR_STATUS_2ND                 (SPM_BASE + 0x0194)
#define CPU_PWR_STATUS                 (SPM_BASE + 0x0198)
#define CPU_PWR_STATUS_2ND             (SPM_BASE + 0x019C)
#define PCM_WDT_LATCH_0                (SPM_BASE + 0x01A0)
#define PCM_WDT_LATCH_1                (SPM_BASE + 0x01A4)
#define PCM_WDT_LATCH_2                (SPM_BASE + 0x01A8)
#define PCM_WDT_LATCH_3                (SPM_BASE + 0x01AC)
#define PCM_WDT_LATCH_4                (SPM_BASE + 0x01B0)
#define PCM_WDT_LATCH_5                (SPM_BASE + 0x01B4)
#define PCM_WDT_LATCH_6                (SPM_BASE + 0x01B8)
#define PCM_WDT_LATCH_7                (SPM_BASE + 0x01BC)
#define PCM_WDT_LATCH_8                (SPM_BASE + 0x01C0)
#define PCM_WDT_LATCH_9                (SPM_BASE + 0x01C4)
#define SPM_TWAM_LAST_STA0             (SPM_BASE + 0x01C8)
#define SPM_TWAM_LAST_STA1             (SPM_BASE + 0x01CC)
#define SPM_TWAM_LAST_STA2             (SPM_BASE + 0x01D0)
#define SPM_TWAM_LAST_STA3             (SPM_BASE + 0x01D4)
#define SPM_TWAM_CURR_STA0             (SPM_BASE + 0x01D8)
#define SPM_TWAM_CURR_STA1             (SPM_BASE + 0x01DC)
#define SPM_TWAM_CURR_STA2             (SPM_BASE + 0x01E0)
#define SPM_TWAM_CURR_STA3             (SPM_BASE + 0x01E4)
#define SPM_TWAM_TIMER_OUT             (SPM_BASE + 0x01E8)
#define SPM_SRC_RDY_STA                (SPM_BASE + 0x01EC)
#define CPU_RET_STATUS                 (SPM_BASE + 0x01F0)
#define SPM_ACK_CHK_TIMER              (SPM_BASE + 0x01F4)
#define SPM_ACK_CHK_STA                (SPM_BASE + 0x01F8)
#define MCU0_PWR_CON                   (SPM_BASE + 0x0200)
#define MCU1_PWR_CON                   (SPM_BASE + 0x0204)
#define MCU2_PWR_CON                   (SPM_BASE + 0x0208)
#define MCU3_PWR_CON                   (SPM_BASE + 0x020C)
#define MCU4_PWR_CON                   (SPM_BASE + 0x0210)
#define MCU5_PWR_CON                   (SPM_BASE + 0x0214)
#define MCU6_PWR_CON                   (SPM_BASE + 0x0218)
#define MCU7_PWR_CON                   (SPM_BASE + 0x021C)
#define MCU8_PWR_CON                   (SPM_BASE + 0x0220)
#define MCU9_PWR_CON                   (SPM_BASE + 0x0224)
#define MCU10_PWR_CON                  (SPM_BASE + 0x0228)
#define MCU11_PWR_CON                  (SPM_BASE + 0x022C)
#define MCU12_PWR_CON                  (SPM_BASE + 0x0230)
#define MCU13_PWR_CON                  (SPM_BASE + 0x0234)
#define MCU14_PWR_CON                  (SPM_BASE + 0x0238)
#define MCU15_PWR_CON                  (SPM_BASE + 0x023C)
#define MCU16_PWR_CON                  (SPM_BASE + 0x0240)
#define MCU17_PWR_CON                  (SPM_BASE + 0x0244)
#define CPU_EXT_BUCK_ISO               (SPM_BASE + 0x0260)
#define ARMPLL_CLK_CON                 (SPM_BASE + 0x0264)
#define SPMC_DORMANT_ENABLE            (SPM_BASE + 0x0268)
#define BYPASS_SPMC                    (SPM_BASE + 0x026C)
#define CPU_SRAM_DREQ_CON              (SPM_BASE + 0x0270)
#define CPU_SRAM_DREQ_CON_SET          (SPM_BASE + 0x0274)
#define CPU_SRAM_DREQ_CON_CLR          (SPM_BASE + 0x0278)
#define CPU_SRAM_DREQ_ACK              (SPM_BASE + 0x027C)
#define SPMC_MISC                      (SPM_BASE + 0x0280)
#define SPMC_MISC2                     (SPM_BASE + 0x0284)
#define COMMON_CPU_PWR_ADDR            (SPM_BASE + 0x0288)
#define COMMON_TOP_PWR_ADDR            (SPM_BASE + 0x028C)
#define MCU2_L2_FLUSH                  (SPM_BASE + 0x0290)
#define MCU7_L2_FLUSH                  (SPM_BASE + 0x0294)
#define MCU12_L2_FLUSH                 (SPM_BASE + 0x0298)
#define MFG0_PWR_CON                   (SPM_BASE + 0x0300)
#define MFG1_PWR_CON                   (SPM_BASE + 0x0304)
#define MFG2_PWR_CON                   (SPM_BASE + 0x0308)
#define MFG3_PWR_CON                   (SPM_BASE + 0x030C)
#define MFG4_PWR_CON                   (SPM_BASE + 0x0310)
#define C2K_PWR_CON                    (SPM_BASE + 0x0314)
#define MD1_PWR_CON                    (SPM_BASE + 0x0318)
#define DPY_CH0_PWR_CON                (SPM_BASE + 0x031C)
#define DPY_CH1_PWR_CON                (SPM_BASE + 0x0320)
#define CONN_PWR_CON                   (SPM_BASE + 0x0324)
#define INFRA_PWR_CON                  (SPM_BASE + 0x0328)
#define AUD_PWR_CON                    (SPM_BASE + 0x032C)
#define IPU_VCORE_PWR_CON              (SPM_BASE + 0x0330)
#define MM0_PWR_CON                    (SPM_BASE + 0x0334)
#define CAM_PWR_CON                    (SPM_BASE + 0x0338)
#define IPU_PWR_CON                    (SPM_BASE + 0x033C)
#define ISP_PWR_CON                    (SPM_BASE + 0x0340)
#define VEN_PWR_CON                    (SPM_BASE + 0x0344)
#define VDE_PWR_CON                    (SPM_BASE + 0x0348)
#define IPU_CORE0_PWR_CON              (SPM_BASE + 0x034C)
#define IPU_CORE1_PWR_CON              (SPM_BASE + 0x0350)
#define IPU_CORE2_PWR_CON              (SPM_BASE + 0x0354)
#define MFG5_PWR_CON                   (SPM_BASE + 0x0358)
#define PERI_SRAM_CON                  (SPM_BASE + 0x0360)
#define SYSRAM_0_CON                   (SPM_BASE + 0x0370)
#define SYSRAM_1_CON                   (SPM_BASE + 0x0374)
#define SYSROM_CON                     (SPM_BASE + 0x0378)
#define SCP_SRAM_CON                   (SPM_BASE + 0x037C)
#define SSPM_SRAM_CON                  (SPM_BASE + 0x0380)
#define BSI_TOP_SRAM_CON               (SPM_BASE + 0x0384)
#define DBGSYS_SRAM_CON                (SPM_BASE + 0x0388)
#define AUD_DSP_SRAM_CON               (SPM_BASE + 0x038C)
#define AUD_ANC_SRAM_CON               (SPM_BASE + 0x0390)
#define EXT_BUCK_ISO                   (SPM_BASE + 0x0394)
#define UFS_SRAM_CON                   (SPM_BASE + 0x0398)
#define DXCC_SRAM_CON                  (SPM_BASE + 0x039C)
#define SPARE1_SRAM_CON                (SPM_BASE + 0x03A0)
#define SPARE_SRAM_CON                 (SPM_BASE + 0x03A4)
#define SPM_DVFS_CON                   (SPM_BASE + 0x0400)
#define SPM_MDBSI_CON                  (SPM_BASE + 0x0404)
#define SPM_MAS_PAUSE_MASK_B           (SPM_BASE + 0x0408)
#define SPM_MAS_PAUSE2_MASK_B          (SPM_BASE + 0x040C)
#define SPM_MAS_PAUSE3_MASK_B          (SPM_BASE + 0x0410)
#define SPM_MAS_PAUSE4_MASK_B          (SPM_BASE + 0x0414)
#define SPM_MAS_PAUSE5_MASK_B          (SPM_BASE + 0x0418)
#define SPM_BSI_GEN                    (SPM_BASE + 0x041C)
#define SPM_BSI_EN_SR                  (SPM_BASE + 0x0420)
#define SPM_BSI_CLK_SR                 (SPM_BASE + 0x0424)
#define SPM_BSI_D0_SR                  (SPM_BASE + 0x0428)
#define SPM_BSI_D1_SR                  (SPM_BASE + 0x042C)
#define SPM_BSI_D2_SR                  (SPM_BASE + 0x0430)
#define AP2MD_CROSS_TRIGGER            (SPM_BASE + 0x0434)
#define AP_MDSRC_REQ                   (SPM_BASE + 0x0438)
#define SPM2MD_DVFS_CON                (SPM_BASE + 0x043C)
#define MD2SPM_DVFS_CON                (SPM_BASE + 0x0440)
#define SPM_PLL_CON                    (SPM_BASE + 0x044C)
#define AP2MD_PEER_WAKEUP              (SPM_BASE + 0x0454)
#define ULPOSC_CON                     (SPM_BASE + 0x0458)
#define DRAMC_DPY_CLK_SW_CON_SEL       (SPM_BASE + 0x0460)
#define DRAMC_DPY_CLK_SW_CON           (SPM_BASE + 0x0464)
#define DRAMC_DPY_CLK_SW_CON_SEL2      (SPM_BASE + 0x0468)
#define DRAMC_DPY_CLK_SW_CON2          (SPM_BASE + 0x046C)
#define DRAMC_DPY_CLK_SW_CON_SEL3      (SPM_BASE + 0x0470)
#define DRAMC_DPY_CLK_SW_CON3          (SPM_BASE + 0x0474)
#define DVFS_LEVEL                     (SPM_BASE + 0x0478)
#define MSDC_DVFS_HALT                 (SPM_BASE + 0x047C)
#define SRAM_DREQ_CON                  (SPM_BASE + 0x0480)
#define SRAM_DREQ_CON_SET              (SPM_BASE + 0x0484)
#define SRAM_DREQ_CON_CLR              (SPM_BASE + 0x0488)
#define SRAM_DREQ_ACK                  (SPM_BASE + 0x048C)
#define DRAMC_DPY_CLK_SW_CON_SEL4      (SPM_BASE + 0x0490)
#define DRAMC_DPY_CLK_SW_CON4          (SPM_BASE + 0x0494)
#define DRAMC_DPY_CLK_SPM_CON          (SPM_BASE + 0x0498)
#define DRAMC_DPY_CLK_SW_CON5          (SPM_BASE + 0x049C)
#define DRAMC_GATING_ERR               (SPM_BASE + 0x04A0)
#define MCU0_IRQ_MASK                  (SPM_BASE + 0x0500)
#define MCU1_IRQ_MASK                  (SPM_BASE + 0x0504)
#define MCU2_IRQ_MASK                  (SPM_BASE + 0x0508)
#define MCU3_IRQ_MASK                  (SPM_BASE + 0x050C)
#define MCU4_IRQ_MASK                  (SPM_BASE + 0x0510)
#define MCU5_IRQ_MASK                  (SPM_BASE + 0x0514)
#define MCU6_IRQ_MASK                  (SPM_BASE + 0x0518)
#define MCU7_IRQ_MASK                  (SPM_BASE + 0x051C)
#define MCU8_IRQ_MASK                  (SPM_BASE + 0x0520)
#define MCU9_IRQ_MASK                  (SPM_BASE + 0x0524)
#define MCU10_IRQ_MASK                 (SPM_BASE + 0x0528)
#define MCU11_IRQ_MASK                 (SPM_BASE + 0x052C)
#define MCU12_IRQ_MASK                 (SPM_BASE + 0x0530)
#define MCU13_IRQ_MASK                 (SPM_BASE + 0x0534)
#define MCU14_IRQ_MASK                 (SPM_BASE + 0x0538)
#define MCU15_IRQ_MASK                 (SPM_BASE + 0x053C)
#define MCU16_IRQ_MASK                 (SPM_BASE + 0x0540)
#define MCU17_IRQ_MASK                 (SPM_BASE + 0x0544)
#define MCU0_WFI_EN                    (SPM_BASE + 0x0548)
#define MCU1_WFI_EN                    (SPM_BASE + 0x054C)
#define MCU2_WFI_EN                    (SPM_BASE + 0x0550)
#define MCU3_WFI_EN                    (SPM_BASE + 0x0554)
#define MCU4_WFI_EN                    (SPM_BASE + 0x0558)
#define MCU5_WFI_EN                    (SPM_BASE + 0x055C)
#define MCU6_WFI_EN                    (SPM_BASE + 0x0560)
#define MCU7_WFI_EN                    (SPM_BASE + 0x0564)
#define MCU8_WFI_EN                    (SPM_BASE + 0x0568)
#define MCU9_WFI_EN                    (SPM_BASE + 0x056C)
#define MCU10_WFI_EN                   (SPM_BASE + 0x0570)
#define MCU11_WFI_EN                   (SPM_BASE + 0x0574)
#define MCU12_WFI_EN                   (SPM_BASE + 0x0578)
#define MCU13_WFI_EN                   (SPM_BASE + 0x057C)
#define MCU14_WFI_EN                   (SPM_BASE + 0x0580)
#define MCU15_WFI_EN                   (SPM_BASE + 0x0584)
#define MCU16_WFI_EN                   (SPM_BASE + 0x0588)
#define MCU17_WFI_EN                   (SPM_BASE + 0x058C)
#define SPM_SW_FLAG                    (SPM_BASE + 0x0600)
#define SPM_SW_DEBUG                   (SPM_BASE + 0x0604)
#define SPM_SW_RSV_0                   (SPM_BASE + 0x0608)
#define SPM_SW_RSV_1                   (SPM_BASE + 0x060C)
#define SPM_SW_RSV_2                   (SPM_BASE + 0x0610)
#define SPM_SW_RSV_3                   (SPM_BASE + 0x0614)
#define SPM_SW_RSV_4                   (SPM_BASE + 0x0618)
#define SPM_SW_RSV_5                   (SPM_BASE + 0x061C)
#define SPM_RSV_CON3                   (SPM_BASE + 0x0620)
#define SPM_RSV_CON2                   (SPM_BASE + 0x0624)
#define SPM_RSV_STA                    (SPM_BASE + 0x0628)
#define SPM_RSV_STA2                   (SPM_BASE + 0x062C)
#define SPM_PASR_DPD_0                 (SPM_BASE + 0x0630)
#define SPM_PASR_DPD_1                 (SPM_BASE + 0x0634)
#define SPM_PASR_DPD_2                 (SPM_BASE + 0x0638)
#define SPM_PASR_DPD_3                 (SPM_BASE + 0x063C)
#define SPM_SPARE_CON                  (SPM_BASE + 0x0640)
#define SPM_SPARE_CON_SET              (SPM_BASE + 0x0644)
#define SPM_SPARE_CON_CLR              (SPM_BASE + 0x0648)
#define SPM_C2K_DEBUG                  (SPM_BASE + 0x064C)
#define SPM_DEBUG_OUT_STA              (SPM_BASE + 0x0650)
#define SPM_CCIF_STA                   (SPM_BASE + 0x0654)
#define SPM_PC_TRACE_G0                (SPM_BASE + 0x0658)
#define SPM_PC_TRACE_G1                (SPM_BASE + 0x065C)
#define SPM_PC_TRACE_G2                (SPM_BASE + 0x0660)
#define SPM_PC_TRACE_G3                (SPM_BASE + 0x0664)
#define SPM_PC_TRACE_G4                (SPM_BASE + 0x0668)
#define SPM_PC_TRACE_G5                (SPM_BASE + 0x066C)
#define SPM_PC_TRACE_G6                (SPM_BASE + 0x0670)
#define SPM_PC_TRACE_G7                (SPM_BASE + 0x0674)
#define SPM_PC_TRACE_CON               (SPM_BASE + 0x0678)
#define PCM_WDT_LATCH_10               (SPM_BASE + 0x067C)
#define PCM_WDT_LATCH_11               (SPM_BASE + 0x0680)
#define DCHA_GATING_LATCH_0            (SPM_BASE + 0x0684)
#define DCHA_GATING_LATCH_1            (SPM_BASE + 0x0688)
#define DCHA_GATING_LATCH_2            (SPM_BASE + 0x068C)
#define DCHA_GATING_LATCH_3            (SPM_BASE + 0x0690)
#define DCHA_GATING_LATCH_4            (SPM_BASE + 0x0694)
#define DCHA_GATING_LATCH_5            (SPM_BASE + 0x0698)
#define DCHA_GATING_LATCH_6            (SPM_BASE + 0x069C)
#define DCHA_GATING_LATCH_7            (SPM_BASE + 0x06A0)
#define DCHB_GATING_LATCH_0            (SPM_BASE + 0x06A4)
#define DCHB_GATING_LATCH_1            (SPM_BASE + 0x06A8)
#define DCHB_GATING_LATCH_2            (SPM_BASE + 0x06AC)
#define DCHB_GATING_LATCH_3            (SPM_BASE + 0x06B0)
#define DCHB_GATING_LATCH_4            (SPM_BASE + 0x06B4)
#define DCHB_GATING_LATCH_5            (SPM_BASE + 0x06B8)
#define DCHB_GATING_LATCH_6            (SPM_BASE + 0x06BC)
#define DCHB_GATING_LATCH_7            (SPM_BASE + 0x06C0)
#define SPM_SW_RSV_6                   (SPM_BASE + 0x06C4)
#define SPM_SW_RSV_7                   (SPM_BASE + 0x06C8)
#define SPM_SW_RSV_8                   (SPM_BASE + 0x06CC)
#define PCM_WDT_LATCH_12               (SPM_BASE + 0x06D0)
#define PCM_WDT_LATCH_13               (SPM_BASE + 0x06D4)
#define PCM_WDT_LATCH_14               (SPM_BASE + 0x06D8)
#define EFUSE_BOND_RX                  (SPM_BASE + 0x06DC)
#define SPM_DVFS_INITIAL_MASK          (SPM_BASE + 0x0700)
#define SPM_DVFS_INITIAL_MASK_SET      (SPM_BASE + 0x0704)
#define SPM_DVFS_INITIAL_MASK_CLR      (SPM_BASE + 0x0708)
#define SPM_DVFS_FLOOR_MASK            (SPM_BASE + 0x070C)
#define SPM_DVFS_FLOOR_MASK_SET        (SPM_BASE + 0x0710)
#define SPM_DVFS_FLOOR_MASK_CLR        (SPM_BASE + 0x0714)
#define SPM_DVFS_FLOOR_MASK2           (SPM_BASE + 0x0718)
#define SPM_DVFS_FLOOR_MASK2_SET       (SPM_BASE + 0x071C)
#define SPM_DVFS_FLOOR_MASK2_CLR       (SPM_BASE + 0x0720)
#define SPM_DVFS_FLOOR_MASK3           (SPM_BASE + 0x0724)
#define SPM_DVFS_FLOOR_MASK3_SET       (SPM_BASE + 0x0728)
#define SPM_DVFS_FLOOR_MASK3_CLR       (SPM_BASE + 0x072C)
#define SPM_DVFS_FLOOR_MASK4           (SPM_BASE + 0x0730)
#define SPM_DVFS_FLOOR_MASK4_SET       (SPM_BASE + 0x0734)
#define SPM_DVFS_FLOOR_MASK4_CLR       (SPM_BASE + 0x0738)
#define SPM_DVFS_FORCE_MASK0           (SPM_BASE + 0x073C)
#define SPM_DVFS_FORCE_MASK0_SET       (SPM_BASE + 0x0740)
#define SPM_DVFS_FORCE_MASK0_CLR       (SPM_BASE + 0x0744)
#define SPM_DVFS_CNFG                  (SPM_BASE + 0x0748)
#define SPM_AP_SCENARIO                (SPM_BASE + 0x074C)
#define SPM_MD_DVFS_INITIAL            (SPM_BASE + 0x0750)
#define SPM_MD_DVFS_INITIAL2           (SPM_BASE + 0x0754)
#define SPM_DVFS_FORCE                 (SPM_BASE + 0x0758)
#define SPM_DVFS_FORCE_SET             (SPM_BASE + 0x075C)
#define SPM_DVFS_FORCE_CLR             (SPM_BASE + 0x0760)
#define SPM_DISP_CAM_BW_LEVEL          (SPM_BASE + 0x0764)
#define SPM_DISP_CAM_BW                (SPM_BASE + 0x0768)
#define SPM_MM_LARB1_BW_LEVEL          (SPM_BASE + 0x076C)
#define SPM_MM_LARB2_BW_LEVEL          (SPM_BASE + 0x0770)
#define SPM_DVFS_INITIAL_SETTING       (SPM_BASE + 0x0774)
#define SPM_DVFS_SW_FLOOR0             (SPM_BASE + 0x0778)
#define SPM_DVFS_SW_FLOOR1             (SPM_BASE + 0x077C)
#define SPM_DVFS_SW_FLOOR2             (SPM_BASE + 0x0780)
#define SPM_DVFS_SW_FLOOR3             (SPM_BASE + 0x0784)
#define SPM_DVFS_SW_FLOOR4             (SPM_BASE + 0x0788)
#define SPM_DVFS_SW_FLOOR5             (SPM_BASE + 0x078C)
#define SPM_DVFS_SW_FLOOR6             (SPM_BASE + 0x0790)
#define SPM_DVFS_SW_FLOOR7             (SPM_BASE + 0x0794)
#define SPM_MD_DVFS_FLOOR              (SPM_BASE + 0x0798)
#define SPM_MD_DVFS_FLOOR2             (SPM_BASE + 0x079C)
#define SPM_MD_DVFS_FLOOR3             (SPM_BASE + 0x07A0)
#define SPM_MD_DVFS_FLOOR4             (SPM_BASE + 0x07A4)
#define SPM_CONN_DVFS_FLOOR            (SPM_BASE + 0x07A8)
#define SPM_C2K_DVFS_FLOOR             (SPM_BASE + 0x07AC)
#define SPM_DVFS_DEBOUNCE0             (SPM_BASE + 0x07B0)
#define SPM_DVFS_DEBOUNCE1             (SPM_BASE + 0x07B4)
#define SPM_DVFS_DEBOUNCE2             (SPM_BASE + 0x07B8)
#define SPM_DVFS_DEBOUNCE3             (SPM_BASE + 0x07BC)
#define SPM_DVFS_DEBUG                 (SPM_BASE + 0x07C0)
#define SPM_DVFS_DEBUG1                (SPM_BASE + 0x07C4)
#define SPM_DVFS_DEBUG2                (SPM_BASE + 0x07C8)
#define SPM_DVFS_DEBUG3                (SPM_BASE + 0x07CC)
#define SPM_DVFS_DEBUG4                (SPM_BASE + 0x07D0)
#define SPM_DVFS_DEBUG5                (SPM_BASE + 0x07D4)
#define SPM_DVFS_RSV0                  (SPM_BASE + 0x07D8)
#define SPM_DVFS_RSV1                  (SPM_BASE + 0x07DC)
#define SPM_DVFS_RSV2                  (SPM_BASE + 0x07E0)
#define SPM_DVFS_RSV3                  (SPM_BASE + 0x07E4)
#define SPM_DVFS_RSV_STA0              (SPM_BASE + 0x07E8)
#define SPM_DVFS_RSV_STA1              (SPM_BASE + 0x07EC)
#define DVFSRC_EVENT_MASK_CON          (SPM_BASE + 0x0800)
#define DVFSRC_EVENT_FORCE_ON          (SPM_BASE + 0x0804)
#define DVFSRC_EVENT_SEL               (SPM_BASE + 0x0808)
#define SPM_DVFSRC_EVENT_STA           (SPM_BASE + 0x080C)
#define SPM_DVFSRC_EVENT_STA1          (SPM_BASE + 0x0810)
#define SPM_DVFSRC_LEVEL               (SPM_BASE + 0x0814)
#define SPM_PMSR_CON0                  (SPM_BASE + 0x0900)
#define SPM_PMSR_CON1                  (SPM_BASE + 0x0904)
#define SPM_PMSR_CON2                  (SPM_BASE + 0x0908)
#define SPM_PMSR_CON3                  (SPM_BASE + 0x090C)
#define SPM_PMSR_LAST_STA0             (SPM_BASE + 0x0910)
#define SPM_PMSR_LAST_STA1             (SPM_BASE + 0x0914)
#define SPM_PMSR_LAST_STA2             (SPM_BASE + 0x0918)
#define SPM_PMSR_LAST_STA3             (SPM_BASE + 0x091C)
#define SPM_PMSR_LAST_STA4             (SPM_BASE + 0x0920)
#define SPM_PMSR_LAST_STA5             (SPM_BASE + 0x0924)
#define SPM_PMSR_LAST_STA6             (SPM_BASE + 0x0928)
#define SPM_PMSR_LAST_STA7             (SPM_BASE + 0x092C)
#define SPM_PMSR_LAST_STA8             (SPM_BASE + 0x0930)
#define SPM_PMSR_LAST_STA9             (SPM_BASE + 0x0934)
#define SPM_PMSR_LAST_STA10            (SPM_BASE + 0x0938)
#define SPM_PMSR_LAST_STA11            (SPM_BASE + 0x093C)
#define SPM_PMSR_LAST_STA12            (SPM_BASE + 0x0940)
#define SPM_PMSR_LAST_STA13            (SPM_BASE + 0x0944)
#define SPM_PMSR_LAST_STA14            (SPM_BASE + 0x0948)
#define SPM_PMSR_LAST_STA15            (SPM_BASE + 0x094C)
#define SPM_PMSR_CURR_STA0             (SPM_BASE + 0x0950)
#define SPM_PMSR_CURR_STA1             (SPM_BASE + 0x0954)
#define SPM_PMSR_CURR_STA2             (SPM_BASE + 0x0958)
#define SPM_PMSR_CURR_STA3             (SPM_BASE + 0x095C)
#define SPM_PMSR_CURR_STA4             (SPM_BASE + 0x0960)
#define SPM_PMSR_CURR_STA5             (SPM_BASE + 0x0964)
#define SPM_PMSR_CURR_STA6             (SPM_BASE + 0x0968)
#define SPM_PMSR_CURR_STA7             (SPM_BASE + 0x096C)
#define SPM_PMSR_CURR_STA8             (SPM_BASE + 0x0970)
#define SPM_PMSR_CURR_STA9             (SPM_BASE + 0x0974)
#define SPM_PMSR_CURR_STA10            (SPM_BASE + 0x0978)
#define SPM_PMSR_CURR_STA11            (SPM_BASE + 0x097C)
#define SPM_PMSR_CURR_STA12            (SPM_BASE + 0x0980)
#define SPM_PMSR_CURR_STA13            (SPM_BASE + 0x0984)
#define SPM_PMSR_CURR_STA14            (SPM_BASE + 0x0988)
#define SPM_PMSR_CURR_STA15            (SPM_BASE + 0x098C)
#define SPM_PMSR_STATE_SIG_SEL         (SPM_BASE + 0x0990)
#define SPM_SCP_SLP                    (SPM_BASE + 0x0994)
#define SCP_VCORE_LEVEL                (SPM_BASE + 0x0998)
#define SCP_SPM_MAILBOX                (SPM_BASE + 0x099C)
#define SPM_SCP_MAILBOX                (SPM_BASE + 0x09A0)
#define SPM2SSPM_INT_SET               (SPM_BASE + 0x10C00)
#define SPM2SSPM_INT_CLR               (SPM_BASE + 0x10C04)
#define SPM2SSPM_INT                   (SPM_BASE + 0x10C08)
#define SSPM2SPM_MAILBOX_0             (SPM_BASE + 0x10C20)
#define SSPM2SPM_MAILBOX_1             (SPM_BASE + 0x10C24)
#define SSPM2SPM_MAILBOX_2             (SPM_BASE + 0x10C28)
#define SSPM2SPM_MAILBOX_3             (SPM_BASE + 0x10C2C)
#define SPM2SSPM_MAILBOX_0             (SPM_BASE + 0x10C30)
#define SPM2SSPM_MAILBOX_1             (SPM_BASE + 0x10C34)
#define SPM2SSPM_MAILBOX_2             (SPM_BASE + 0x10C38)
#define SPM2SSPM_MAILBOX_3             (SPM_BASE + 0x10C3C)
#define SSPM2SPM_INT_SET               (SPM_BASE + 0x10C40)
#define SSPM2SPM_INT_CLR               (SPM_BASE + 0x10C44)
#define SSPM2SPM_INT                   (SPM_BASE + 0x10C48)
#define AHB_HADDR_EXT                  (SPM_BASE + 0x10C4C)
#define SPM_SWINT_SET                  (SPM_BASE + 0x20E00)
#define SPM_SWINT_CLR                  (SPM_BASE + 0x20E04)
#define SPM_SWINT                      (SPM_BASE + 0x20E08)
#define SPM_SW_NONSERSV_0              (SPM_BASE + 0x20E10)
#define SPM_SW_NONSERSV_1              (SPM_BASE + 0x20E14)
#define SPM_SW_NONSERSV_2              (SPM_BASE + 0x20E18)
#define SPM_SW_NONSERSV_3              (SPM_BASE + 0x20E1C)
#define SW2SPM_MAILBOX_0               (SPM_BASE + 0x20E20)
#define SW2SPM_MAILBOX_1               (SPM_BASE + 0x20E24)
#define SW2SPM_MAILBOX_2               (SPM_BASE + 0x20E28)
#define SW2SPM_MAILBOX_3               (SPM_BASE + 0x20E2C)
#define SPM2SW_MAILBOX_0               (SPM_BASE + 0x20E30)
#define SPM2SW_MAILBOX_1               (SPM_BASE + 0x20E34)
#define SPM2SW_MAILBOX_2               (SPM_BASE + 0x20E38)
#define SPM2SW_MAILBOX_3               (SPM_BASE + 0x20E3C)
#define SW2SPM_INT_SET                 (SPM_BASE + 0x20E40)
#define SW2SPM_INT_CLR                 (SPM_BASE + 0x20E44)
#define SW2SPM_INT                     (SPM_BASE + 0x20E48)
#define SPM_SEMA_M0                    (SPM_BASE + 0x20E50)
#define SPM_SEMA_M1                    (SPM_BASE + 0x20E54)
#define SPM_SEMA_M2                    (SPM_BASE + 0x20E58)
#define SPM_SEMA_M3                    (SPM_BASE + 0x20E5C)
#define CPU_HOTPLUG_SET                (SPM_BASE + 0x20E60)
#define CPU_HOTPLUG_CLR                (SPM_BASE + 0x20E64)
#define CPU_HOTPLUG                    (SPM_BASE + 0x20E68)
#define BYPASS_MSDC_DVFS_HALT          (SPM_BASE + 0x20E6C)

/* POWERON_CONFIG_EN (0x10A00000+0x000) */
#define BCLK_CG_EN_LSB                      (1U << 0)       /* 1b */
#define PROJECT_CODE_LSB                    (1U << 16)      /* 16b */
/* SPM_POWER_ON_VAL0 (0x10A00000+0x004) */
#define INI_PWRON_REG0_RF_LSB               (1U << 0)       /* 32b */
/* SPM_POWER_ON_VAL1 (0x10A00000+0x008) */
#define INI_PWRON_REG7_RF_LSB               (1U << 0)       /* 32b */
/* SPM_CLK_CON (0x10A00000+0x00C) */
#define REG_SRCCLKEN0_CTL_LSB               (1U << 0)       /* 2b */
#define REG_SRCCLKEN1_CTL_LSB               (1U << 2)       /* 2b */
#define REG_SPM_LOCK_INFRA_DCM_LSB          (1U << 5)       /* 1b */
#define REG_SRCCLKEN_MASK_LSB               (1U << 6)       /* 3b */
#define REG_MD1_C32RM_EN_LSB                (1U << 9)       /* 1b */
#define REG_MD2_C32RM_EN_LSB                (1U << 10)      /* 1b */
#define REG_CLKSQ0_SEL_CTRL_LSB             (1U << 11)      /* 1b */
#define REG_CLKSQ1_SEL_CTRL_LSB             (1U << 12)      /* 1b */
#define REG_SRCCLKEN0_EN_LSB                (1U << 13)      /* 1b */
#define REG_SRCCLKEN1_EN_LSB                (1U << 14)      /* 1b */
#define REG_SYSCLK0_SRC_MASK_B_LSB          (1U << 16)      /* 7b */
#define REG_SYSCLK1_SRC_MASK_B_LSB          (1U << 23)      /* 7b */
/* SPM_CLK_SETTLE (0x10A00000+0x010) */
#define RG_SETTLE_VAL_LSB                   (1U << 0)       /* 28b */
/* PCM_CON0 (0x10A00000+0x018) */
#define RG_PCM_KICK_L_LSB                   (1U << 0)       /* 1b */
#define RG_IM_KICK_L_LSB                    (1U << 1)       /* 1b */
#define PCM_CK_EN_LSB                       (1U << 2)       /* 1b */
#define RG_EN_IM_SLEEP_DVS_LSB              (1U << 3)       /* 1b */
#define IM_AUTO_PDN_EN_LSB                  (1U << 4)       /* 1b */
#define PCM_SW_RESET_LSB                    (1U << 15)      /* 1b */
#define PROJECT_CODE_LSB                    (1U << 16)      /* 16b */
/* PCM_CON1 (0x10A00000+0x01C) */
#define RG_IM_SLAVE_LSB                     (1U << 0)       /* 1b */
#define RG_IM_SLEEP_LSB                     (1U << 1)       /* 1b */
#define RG_AHBMIF_APBEN_LSB                 (1U << 3)       /* 1b */
#define RG_IM_PDN_LSB                       (1U << 4)       /* 1b */
#define RG_PCM_TIMER_EN_LSB                 (1U << 5)       /* 1b */
#define RG_IM_NONRP_EN_LSB                  (1U << 6)       /* 1b */
#define RG_DIS_MIF_CK_PROT_LSB              (1U << 7)       /* 1b */
#define RG_PCM_WDT_EN_LSB                   (1U << 8)       /* 1b */
#define RG_PCM_WDT_WAKE_LSB                 (1U << 9)       /* 1b */
#define REG_SPM_SRAM_SLEEP_B_LSB            (1U << 10)      /* 1b */
#define REG_SPM_SRAM_ISOINT_B_LSB           (1U << 11)      /* 1b */
#define REG_EVENT_LOCK_EN_LSB               (1U << 12)      /* 1b */
#define REG_SRCCLKEN_FAST_RESP_LSB          (1U << 13)      /* 1b */
#define RG_SSPM_APB_INTERNAL_EN_LSB         (1U << 14)      /* 1b */
#define PROJECT_CODE_LSB                    (1U << 16)      /* 16b */
/* PCM_IM_PTR (0x10A00000+0x020) */
#define RG_IM_PTR_LSB                       (1U << 0)       /* 32b */
/* PCM_IM_LEN (0x10A00000+0x024) */
#define RG_IM_LEN_LSB                       (1U << 0)       /* 13b */
/* PCM_REG_DATA_INI (0x10A00000+0x028) */
#define PCM_REG_RF_INI_LSB                  (1U << 0)       /* 32b */
/* PCM_PWR_IO_EN (0x10A00000+0x02C) */
#define RG_PCM_PWR_IO_EN_LSB                (1U << 0)       /* 8b */
#define RG_RF_SYNC_EN_LSB                   (1U << 16)      /* 8b */
/* PCM_TIMER_VAL (0x10A00000+0x030) */
#define RG_PCM_TIMER_VAL_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_VAL (0x10A00000+0x034) */
#define RG_PCM_WDT_VAL_LSB                  (1U << 0)       /* 32b */
/* PCM_IM_HOST_RW_PTR (0x10A00000+0x038) */
#define RG_IM_HOST_RW_PTR_LSB               (1U << 0)       /* 12b */
#define RG_IM_HOST_W_EN_LSB                 (1U << 30)      /* 1b */
#define RG_IM_HOST_EN_LSB                   (1U << 31)      /* 1b */
/* PCM_IM_HOST_RW_DAT (0x10A00000+0x03C) */
#define PCM_IM_HOST_RW_DAT_LSB              (1U << 0)       /* 32b */
/* PCM_EVENT_VECTOR0 (0x10A00000+0x040) */
#define PCM_EVENT_VECTOR_0_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_0_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_0_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_0_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR1 (0x10A00000+0x044) */
#define PCM_EVENT_VECTOR_1_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_1_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_1_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_1_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR2 (0x10A00000+0x048) */
#define PCM_EVENT_VECTOR_2_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_2_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_2_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_2_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR3 (0x10A00000+0x04C) */
#define PCM_EVENT_VECTOR_3_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_3_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_3_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_3_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR4 (0x10A00000+0x050) */
#define PCM_EVENT_VECTOR_4_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_4_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_4_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_4_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR5 (0x10A00000+0x054) */
#define PCM_EVENT_VECTOR_5_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_5_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_5_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_5_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR6 (0x10A00000+0x058) */
#define PCM_EVENT_VECTOR_6_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_6_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_6_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_6_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR7 (0x10A00000+0x05C) */
#define PCM_EVENT_VECTOR_7_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_7_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_7_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_7_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR8 (0x10A00000+0x060) */
#define PCM_EVENT_VECTOR_8_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_8_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_8_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_8_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR9 (0x10A00000+0x064) */
#define PCM_EVENT_VECTOR_9_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_9_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_9_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_9_LSB              (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR10 (0x10A00000+0x068) */
#define PCM_EVENT_VECTOR_10_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_10_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_10_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_10_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR11 (0x10A00000+0x06C) */
#define PCM_EVENT_VECTOR_11_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_11_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_11_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_11_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR12 (0x10A00000+0x070) */
#define PCM_EVENT_VECTOR_12_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_12_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_12_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_12_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR13 (0x10A00000+0x074) */
#define PCM_EVENT_VECTOR_13_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_13_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_13_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_13_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR14 (0x10A00000+0x078) */
#define PCM_EVENT_VECTOR_14_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_14_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_14_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_14_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR15 (0x10A00000+0x07C) */
#define PCM_EVENT_VECTOR_15_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_15_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_15_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_15_LSB             (1U << 16)      /* 11b */
/* PCM_EVENT_VECTOR_EN (0x10A00000+0x080) */
#define RG_EVENT_VEC_EN_LSB                 (1U << 0)       /* 16b */
/* SPM_SSPM_IRQ (0x10A00000+0x084) */
#define REG_SPM_SSPM_IRQ_LSB                (1U << 0)       /* 1b */
#define REG_SPM_SSPM_IRQ_SEL_LSB            (1U << 4)       /* 1b */
/* SPM_SCP_IRQ (0x10A00000+0x08C) */
#define REG_SPM_SCP_IRQ_LSB                 (1U << 0)       /* 1b */
#define REG_SPM_SCP_IRQ_SEL_LSB             (1U << 4)       /* 1b */
/* SPM_TWAM_CON (0x10A00000+0x090) */
#define REG_TWAM_ENABLE_LSB                 (1U << 0)       /* 1b */
#define REG_SPEED_MODE_EN_LSB               (1U << 1)       /* 1b */
#define REG_TWAM_SW_RST_EN_LSB              (1U << 2)       /* 1b */
#define REG_TWAM_MON_TYPE_0_LSB             (1U << 4)       /* 2b */
#define REG_TWAM_MON_TYPE_1_LSB             (1U << 6)       /* 2b */
#define REG_TWAM_MON_TYPE_2_LSB             (1U << 8)       /* 2b */
#define REG_TWAM_MON_TYPE_3_LSB             (1U << 10)      /* 2b */
#define REG_TWAM_SIG_SEL_0_LSB              (1U << 12)      /* 5b */
#define REG_TWAM_SIG_SEL_1_LSB              (1U << 17)      /* 5b */
#define REG_TWAM_SIG_SEL_2_LSB              (1U << 22)      /* 5b */
#define REG_TWAM_SIG_SEL_3_LSB              (1U << 27)      /* 5b */
/* SPM_TWAM_WINDOW_LEN (0x10A00000+0x094) */
#define REG_TWAM_WINDOW_LEN_LSB             (1U << 0)       /* 32b */
/* SPM_TWAM_IDLE_SEL (0x10A00000+0x098) */
#define REG_TWAM_IDLE_SIG_SEL_0_LSB         (1U << 0)       /* 2b */
#define REG_TWAM_IDLE_SIG_SEL_1_LSB         (1U << 2)       /* 2b */
#define REG_TWAM_IDLE_SIG_SEL_2_LSB         (1U << 4)       /* 2b */
#define REG_TWAM_IDLE_SIG_SEL_3_LSB         (1U << 6)       /* 2b */
/* SPM_CPU_WAKEUP_EVENT (0x10A00000+0x09C) */
#define REG_CPU_WAKEUP_LSB                  (1U << 0)       /* 1b */
/* SPM_IRQ_MASK (0x10A00000+0x0A0) */
#define REG_TWAM_IRQ_MASK_LSB               (1U << 2)       /* 1b */
#define RG_PCM_IRQ_MSK_LSB                  (1U << 3)       /* 1b */
#define REG_SPM_IRQ_MASK_LSB                (1U << 8)       /* 16b */
/* SPM_SRC_REQ (0x10A00000+0x0B0) */
#define REG_SPM_APSRC_REQ_LSB               (1U << 0)       /* 1b */
#define REG_SPM_F26M_REQ_LSB                (1U << 1)       /* 1b */
#define REG_SPM_INFRA_REQ_LSB               (1U << 2)       /* 1b */
#define REG_SPM_DDREN_REQ_LSB               (1U << 3)       /* 1b */
#define REG_SPM_VRF18_REQ_LSB               (1U << 4)       /* 1b */
#define REG_SPM_DVFS_LEVEL0_REQ_LSB         (1U << 5)       /* 1b */
#define REG_SPM_DVFS_LEVEL1_REQ_LSB         (1U << 6)       /* 1b */
#define REG_SPM_DVFS_LEVEL2_REQ_LSB         (1U << 7)       /* 1b */
#define REG_SPM_DVFS_LEVEL3_REQ_LSB         (1U << 8)       /* 1b */
#define REG_SPM_DVFS_LEVEL4_REQ_LSB         (1U << 9)       /* 1b */
#define REG_SPM_SSPM_MAILBOX_REQ_LSB        (1U << 10)      /* 1b */
#define REG_SPM_SW_MAILBOX_REQ_LSB          (1U << 11)      /* 1b */
#define REG_SPM_CKSEL2_REQ_LSB              (1U << 12)      /* 1b */
#define REG_SPM_CKSEL3_REQ_LSB              (1U << 13)      /* 1b */
/* SPM_SRC_MASK (0x10A00000+0x0B4) */
#define REG_CSYSPWREQ_MASK_LSB              (1U << 0)       /* 1b */
#define REG_MD_SRCCLKENA_0_INFRA_MASK_B_LSB (1U << 1)       /* 1b */
#define REG_MD_SRCCLKENA_1_INFRA_MASK_B_LSB (1U << 2)       /* 1b */
#define REG_MD_APSRC_REQ_0_INFRA_MASK_B_LSB (1U << 3)       /* 1b */
#define REG_MD_APSRC_REQ_1_INFRA_MASK_B_LSB (1U << 4)       /* 1b */
#define REG_CONN_SRCCLKENA_INFRA_MASK_B_LSB (1U << 5)       /* 1b */
#define REG_CONN_INFRA_REQ_MASK_B_LSB       (1U << 6)       /* 1b */
#define REG_SSPM_SRCCLKENA_INFRA_MASK_B_LSB (1U << 7)       /* 1b */
#define REG_SSPM_INFRA_REQ_MASK_B_LSB       (1U << 8)       /* 1b */
#define REG_SCP_SRCCLKENA_INFRA_MASK_B_LSB  (1U << 9)       /* 1b */
#define REG_SCP_INFRA_REQ_MASK_B_LSB        (1U << 10)      /* 1b */
#define REG_SRCCLKENI0_INFRA_MASK_B_LSB     (1U << 11)      /* 1b */
#define REG_SRCCLKENI1_INFRA_MASK_B_LSB     (1U << 12)      /* 1b */
#define REG_SRCCLKENI2_INFRA_MASK_B_LSB     (1U << 13)      /* 1b */
#define REG_CCIF0_MD_EVENT_MASK_B_LSB       (1U << 14)      /* 1b */
#define REG_CCIF0_AP_EVENT_MASK_B_LSB       (1U << 15)      /* 1b */
#define REG_CCIF1_MD_EVENT_MASK_B_LSB       (1U << 16)      /* 1b */
#define REG_CCIF1_AP_EVENT_MASK_B_LSB       (1U << 17)      /* 1b */
#define REG_CCIF2_MD_EVENT_MASK_B_LSB       (1U << 18)      /* 1b */
#define REG_CCIF2_AP_EVENT_MASK_B_LSB       (1U << 19)      /* 1b */
#define REG_CCIF3_MD_EVENT_MASK_B_LSB       (1U << 20)      /* 1b */
#define REG_CCIF3_AP_EVENT_MASK_B_LSB       (1U << 21)      /* 1b */
#define REG_CCIFMD_MD1_EVENT_MASK_B_LSB     (1U << 22)      /* 1b */
#define REG_CCIFMD_MD2_EVENT_MASK_B_LSB     (1U << 23)      /* 1b */
#define REG_C2K_PS_RCCIF_WAKE_MASK_B_LSB    (1U << 24)      /* 1b */
#define REG_C2K_L1_RCCIF_WAKE_MASK_B_LSB    (1U << 25)      /* 1b */
#define REG_PS_C2K_RCCIF_WAKE_MASK_B_LSB    (1U << 26)      /* 1b */
#define REG_L1_C2K_RCCIF_WAKE_MASK_B_LSB    (1U << 27)      /* 1b */
#define REG_DISP2_REQ_MASK_B_LSB            (1U << 28)      /* 1b */
#define REG_MD_DDR_EN_0_MASK_B_LSB          (1U << 29)      /* 1b */
#define REG_MD_DDR_EN_1_MASK_B_LSB          (1U << 30)      /* 1b */
#define REG_CONN_DDR_EN_MASK_B_LSB          (1U << 31)      /* 1b */
/* SPM_SRC2_MASK (0x10A00000+0x0B8) */
#define REG_DISP0_APSRC_REQ_MASK_B_LSB      (1U << 0)       /* 1b */
#define REG_DISP1_APSRC_REQ_MASK_B_LSB      (1U << 1)       /* 1b */
#define REG_DISP_OD_REQ_MASK_B_LSB          (1U << 2)       /* 1b */
#define REG_MFG_REQ_MASK_B_LSB              (1U << 3)       /* 1b */
#define REG_VDEC0_REQ_MASK_B_LSB            (1U << 4)       /* 1b */
#define REG_GCE_APSRC_REQ_MASK_B_LSB        (1U << 5)       /* 1b */
#define REG_GCE_DDR_EN_REQ_MASK_B_LSB       (1U << 6)       /* 1b */
#define REG_LPDMA_REQ_MASK_B_LSB            (1U << 7)       /* 1b */
#define REG_CONN_SRCCLKENA_CKSEL2_MASK_B_LSB (1U << 8)       /* 1b */
#define REG_SSPM_APSRC_REQ_DDREN_MASK_B_LSB (1U << 9)       /* 1b */
#define REG_SCP_APSRC_REQ_DDREN_MASK_B_LSB  (1U << 10)      /* 1b */
#define REG_MD_VRF18_REQ_0_MASK_B_LSB       (1U << 11)      /* 1b */
#define REG_MD_VRF18_REQ_1_MASK_B_LSB       (1U << 12)      /* 1b */
#define REG_NEXT_DVFS_LEVEL0_MASK_B_LSB     (1U << 13)      /* 1b */
#define REG_NEXT_DVFS_LEVEL1_MASK_B_LSB     (1U << 14)      /* 1b */
#define REG_NEXT_DVFS_LEVEL2_MASK_B_LSB     (1U << 15)      /* 1b */
#define REG_NEXT_DVFS_LEVEL3_MASK_B_LSB     (1U << 16)      /* 1b */
#define REG_NEXT_DVFS_LEVEL4_MASK_B_LSB     (1U << 17)      /* 1b */
#define REG_SW2SPM_INT0_MASK_B_LSB          (1U << 18)      /* 1b */
#define REG_SW2SPM_INT1_MASK_B_LSB          (1U << 19)      /* 1b */
#define REG_SW2SPM_INT2_MASK_B_LSB          (1U << 20)      /* 1b */
#define REG_SW2SPM_INT3_MASK_B_LSB          (1U << 21)      /* 1b */
#define REG_SSPM2SPM_INT0_MASK_B_LSB        (1U << 22)      /* 1b */
#define REG_SSPM2SPM_INT1_MASK_B_LSB        (1U << 23)      /* 1b */
#define REG_SSPM2SPM_INT2_MASK_B_LSB        (1U << 24)      /* 1b */
#define REG_SSPM2SPM_INT3_MASK_B_LSB        (1U << 25)      /* 1b */
#define REG_DQSSOC_REQ_MASK_B_LSB           (1U << 26)      /* 1b */
#define REG_GCE_BUSCLK_REQ_MASK_B_LSB       (1U << 27)      /* 1b */
#define REG_UFS_SRCCLKENA_MASK_B_LSB        (1U << 28)      /* 1b */
#define REG_UFS_VRF18_REQ_MASK_B_LSB        (1U << 29)      /* 1b */
/* SPM_SRC3_MASK (0x10A00000+0x0BC) */
#define REG_MPWFI_OP_LSB                    (1U << 0)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV1_4_MASK_B_LSB (1U << 1)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV1_3_MASK_B_LSB (1U << 2)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV1_2_MASK_B_LSB (1U << 3)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV1_1_MASK_B_LSB (1U << 4)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV1_0_MASK_B_LSB (1U << 5)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV0_4_MASK_B_LSB (1U << 6)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV0_3_MASK_B_LSB (1U << 7)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV0_2_MASK_B_LSB (1U << 8)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV0_1_MASK_B_LSB (1U << 9)       /* 1b */
#define REG_SPM_RESOURCE_REQ_RSV0_0_MASK_B_LSB (1U << 10)      /* 1b */
#define REG_SRCCLKENI2_CKSEL3_MASK_B_LSB    (1U << 11)      /* 1b */
#define REG_SRCCLKENI2_CKSEL2_MASK_B_LSB    (1U << 12)      /* 1b */
#define REG_SRCCLKENI1_CKSEL3_MASK_B_LSB    (1U << 13)      /* 1b */
#define REG_SRCCLKENI1_CKSEL2_MASK_B_LSB    (1U << 14)      /* 1b */
#define REG_SRCCLKENI0_CKSEL3_MASK_B_LSB    (1U << 15)      /* 1b */
#define REG_SRCCLKENI0_CKSEL2_MASK_B_LSB    (1U << 16)      /* 1b */
#define REG_MD_DDR_EN_0_DBC_EN_LSB          (1U << 17)      /* 1b */
#define REG_MD_DDR_EN_1_DBC_EN_LSB          (1U << 18)      /* 1b */
#define REG_CONN_DDR_EN_DBC_EN_LSB          (1U << 19)      /* 1b */
#define REG_SSPM_MASK_B_LSB                 (1U << 20)      /* 1b */
#define REG_MD_0_MASK_B_LSB                 (1U << 21)      /* 1b */
#define REG_MD_1_MASK_B_LSB                 (1U << 22)      /* 1b */
#define REG_SCP_MASK_B_LSB                  (1U << 23)      /* 1b */
#define REG_SRCCLKENI0_MASK_B_LSB           (1U << 24)      /* 1b */
#define REG_SRCCLKENI1_MASK_B_LSB           (1U << 25)      /* 1b */
#define REG_SRCCLKENI2_MASK_B_LSB           (1U << 26)      /* 1b */
#define REG_MD_APSRC_1_SEL_LSB              (1U << 27)      /* 1b */
#define REG_MD_APSRC_0_SEL_LSB              (1U << 28)      /* 1b */
#define REG_CONN_MASK_B_LSB                 (1U << 29)      /* 1b */
#define REG_CONN_APSRC_SEL_LSB              (1U << 30)      /* 1b */
#define REG_MD_SRCCLKENA_0_VRF18_MASK_B_LSB (1U << 31)      /* 1b */
/* SPM_SRC4_MASK (0x10A00000+0x0C0) */
#define REG_CCIF4_AP_EVENT_MASK_B_LSB       (1U << 0)       /* 1b */
#define REG_CCIF4_MD_EVENT_MASK_B_LSB       (1U << 1)       /* 1b */
#define REG_CCIF5_AP_EVENT_MASK_B_LSB       (1U << 2)       /* 1b */
#define REG_CCIF5_MD_EVENT_MASK_B_LSB       (1U << 3)       /* 1b */
#define REG_DISP0_DDREN_REQ_MASK_B_LSB      (1U << 4)       /* 1b */
#define REG_DISP1_DDREN_REQ_MASK_B_LSB      (1U << 5)       /* 1b */
/* SPM_WAKEUP_EVENT_MASK (0x10A00000+0x0C4) */
#define REG_WAKEUP_EVENT_MASK_LSB           (1U << 0)       /* 32b */
/* SPM_EXT_WAKEUP_EVENT_MASK (0x10A00000+0x0C8) */
#define REG_EXT_WAKEUP_EVENT_MASK_LSB       (1U << 0)       /* 32b */
/* MEM_CLK_CON (0x10A00000+0x0CC) */
#define REG_MEM_26M_CK_SEL_LSB              (1U << 0)       /* 1b */
#define REG_MEM_DCM_EN_LSB                  (1U << 1)       /* 1b */
/* SCP_CLK_CON (0x10A00000+0x0D0) */
#define REG_SCP_26M_CK_SEL_LSB              (1U << 0)       /* 1b */
#define REG_SCP_DCM_EN_LSB                  (1U << 1)       /* 1b */
#define REG_SSPM_26M_CK_SEL_LSB             (1U << 8)       /* 1b */
#define REG_SSPM_DCM_EN_LSB                 (1U << 9)       /* 1b */
/* PCM_DEBUG_CON (0x10A00000+0x0D4) */
#define REG_PCM_DEBUG_OUT_EN_LSB            (1U << 0)       /* 1b */
/* DDR_EN_DBC_LEN (0x10A00000+0X0D8) */
#define MD_DDR_EN_0_DBC_LEN_LSB             (1U << 0)       /* 10b */
#define MD_DDR_EN_1_DBC_LEN_LSB             (1U << 10)      /* 10b */
#define CONN_DDR_EN_DBC_LEN_LSB             (1U << 20)      /* 10b */
/* SPM_ACK_CHK_CON (0x10A00000+0x0E0) */
#define SPM_ACK_CHK_EN_LSB                  (1U << 0)       /* 1b */
#define SPM_ACK_CHK_CLR_ALL_LSB             (1U << 1)       /* 1b */
#define SPM_ACK_CHK_CLR_TIMER_LSB           (1U << 2)       /* 1b */
#define SPM_ACK_CHK_CLR_IRQ_LSB             (1U << 3)       /* 1b */
#define SPM_ACK_CHK_STA_EN_LSB              (1U << 4)       /* 1b */
#define SPM_ACK_CHK_WAKEUP_EN_LSB           (1U << 5)       /* 1b */
#define SPM_ACK_CHK_SWINT_EN_LSB            (1U << 6)       /* 1b */
#define SPM_ACK_CHK_FAIL_LSB                (1U << 15)      /* 1b */
#define SPM_ACK_CHK_SWINT_MASK_B_LSB        (1U << 16)      /* 16b */
/* SPM_ACK_CHK_TIMER_VAL (0x10A00000+0x0E4) */
#define SPM_ACK_CHK_TIMER_VAL_LSB           (1U << 0)       /* 32b */
/* SRCCLKENI2PWRAP_MASK_B (0x10A00000+0x0E8) */
#define SRCCLKENI2PWRAP_MASK_B_LSB          (1U << 0)       /* 6b */
/* SPM_DRS_CON (0x10A00000+0x0EC) */
#define SPM_DRS_DIS_REQ_LSB                 (1U << 0)       /* 2b */
#define SPM_DRS_DIS_ACK_LSB                 (1U << 4)       /* 2b */
/* PCM_REG0_DATA (0x10A00000+0x100) */
#define PCM_REG0_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG1_DATA (0x10A00000+0x104) */
#define PCM_REG1_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG2_DATA (0x10A00000+0x108) */
#define PCM_REG2_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG3_DATA (0x10A00000+0x10C) */
#define PCM_REG3_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG4_DATA (0x10A00000+0x110) */
#define PCM_REG4_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG5_DATA (0x10A00000+0x114) */
#define PCM_REG5_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG6_DATA (0x10A00000+0x118) */
#define PCM_REG6_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG7_DATA (0x10A00000+0x11C) */
#define PCM_REG7_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG8_DATA (0x10A00000+0x120) */
#define PCM_REG8_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG9_DATA (0x10A00000+0x124) */
#define PCM_REG9_RF_LSB                     (1U << 0)       /* 32b */
/* PCM_REG10_DATA (0x10A00000+0x128) */
#define PCM_REG10_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG11_DATA (0x10A00000+0x12C) */
#define PCM_REG11_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG12_DATA (0x10A00000+0x130) */
#define PCM_REG12_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG13_DATA (0x10A00000+0x134) */
#define PCM_REG13_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG14_DATA (0x10A00000+0x138) */
#define PCM_REG14_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG15_DATA (0x10A00000+0x13C) */
#define PCM_REG15_RF_LSB                    (1U << 0)       /* 32b */
/* PCM_REG12_MASK_B_STA (0x10A00000+0x140) */
#define PCM_REG12_MASK_B_LSB                (1U << 0)       /* 32b */
/* PCM_REG12_EXT_DATA (0x10A00000+0x144) */
#define PCM_REG12_EXT_RF_LSB                (1U << 0)       /* 32b */
/* PCM_REG12_EXT_MASK_B_STA (0x10A00000+0x148) */
#define PCM_REG12_EXT_MASK_B_LSB            (1U << 0)       /* 32b */
/* PCM_EVENT_REG_STA (0x10A00000+0x14C) */
#define EVET_CNTER_STA_LSB                  (1U << 0)       /* 32b */
/* PCM_TIMER_OUT (0x10A00000+0x150) */
#define PCM_TIMER_LSB                       (1U << 0)       /* 32b */
/* PCM_WDT_OUT (0x10A00000+0x154) */
#define PCM_WDT_TIMER_VAL_OUT_LSB           (1U << 0)       /* 32b */
/* SPM_IRQ_STA (0x10A00000+0x158) */
#define SPM_ACK_CHK_FAIL_LSB_STA            (1U << 1)       /* 1b */
#define TWAM_IRQ_LSB_STA                    (1U << 2)       /* 1b */
#define PCM_IRQ_LSB_STA                     (1U << 3)       /* 1b */
#define SPM_SWINT_LSB_STA                   (1U << 4)       /* 16b */
/* SPM_WAKEUP_STA (0x10A00000+0x15C) */
#define SPM_WAKEUP_EVENT_STA_LSB            (1U << 0)       /* 32b */
/* SPM_WAKEUP_EXT_STA (0x10A00000+0x160) */
#define SPM_WAKEUP_EVENT_EXT_STA_LSB        (1U << 0)       /* 32b */
/* SPM_WAKEUP_MISC (0x10A00000+0x164) */
#define WAKEUP_EVENT_MISC_LSB               (1U << 0)       /* 21b */
#define PMIC_IRQ_ACK_LSB                    (1U << 22)      /* 1b */
#define PMIC_SCP_IRQ_LSB                    (1U << 23)      /* 1b */
/* SPM_WAKEUP_MISC2 (0x10A00000+0x168) */
#define WAKEUP_EVENT_MISC2_LSB              (1U << 0)       /* 32b */
/* BUS_PROTECT_RDY (0x10A00000+0x16C) */
#define PROTECT_READY_LSB                   (1U << 0)       /* 32b */
/* BUS_PROTECT2_RDY (0x10A00000+0x170) */
#define PROTECT2_READY_LSB                  (1U << 0)       /* 32b */
/* BUS_PROTECT3_RDY (0x10A00000+0x174) */
#define PROTECT3_READY_LSB                  (1U << 0)       /* 32b */
/* BUS_PROTECT4_RDY (0x10A00000+0x178) */
#define PROTECT4_READY_LSB                  (1U << 0)       /* 32b */
/* BUS_PROTECT5_RDY (0x10A00000+0x17C) */
#define PROTECT5_READY_LSB                  (1U << 0)       /* 32b */
/* SUBSYS_IDLE_STA (0x10A00000+0x180) */
#define SUBSYS_IDLE_SIGNALS_LSB             (1U << 0)       /* 32b */
/* CPU_IDLE_STA (0x10A00000+0x184) */
#define MCU0_IDLE_LSB                       (1U << 0)       /* 1b */
#define MCU1_IDLE_LSB                       (1U << 1)       /* 1b */
#define MCU2_IDLE_LSB                       (1U << 2)       /* 1b */
#define MCU3_IDLE_LSB                       (1U << 3)       /* 1b */
#define MCU4_IDLE_LSB                       (1U << 4)       /* 1b */
#define MCU5_IDLE_LSB                       (1U << 5)       /* 1b */
#define MCU6_IDLE_LSB                       (1U << 6)       /* 1b */
#define MCU7_IDLE_LSB                       (1U << 7)       /* 1b */
#define MCU8_IDLE_LSB                       (1U << 8)       /* 1b */
#define MCU9_IDLE_LSB                       (1U << 9)       /* 1b */
#define MCU10_IDLE_LSB                      (1U << 10)      /* 1b */
#define MCU11_IDLE_LSB                      (1U << 11)      /* 1b */
#define MCU12_IDLE_LSB                      (1U << 12)      /* 1b */
#define MCU13_IDLE_LSB                      (1U << 13)      /* 1b */
#define MCU14_IDLE_LSB                      (1U << 14)      /* 1b */
#define MCU15_IDLE_LSB                      (1U << 15)      /* 1b */
#define MCU16_IDLE_LSB                      (1U << 16)      /* 1b */
#define MCU17_IDLE_LSB                      (1U << 17)      /* 1b */
/* CPU_IDLE_STA_AFT_SEL (0x10A00000+0x188) */
#define MCU0_IDLE_AFT_SEL_LSB               (1U << 0)       /* 1b */
#define MCU1_IDLE_AFT_SEL_LSB               (1U << 1)       /* 1b */
#define MCU2_IDLE_AFT_SEL_LSB               (1U << 2)       /* 1b */
#define MCU3_IDLE_AFT_SEL_LSB               (1U << 3)       /* 1b */
#define MCU4_IDLE_AFT_SEL_LSB               (1U << 4)       /* 1b */
#define MCU5_IDLE_AFT_SEL_LSB               (1U << 5)       /* 1b */
#define MCU6_IDLE_AFT_SEL_LSB               (1U << 6)       /* 1b */
#define MCU7_IDLE_AFT_SEL_LSB               (1U << 7)       /* 1b */
#define MCU8_IDLE_AFT_SEL_LSB               (1U << 8)       /* 1b */
#define MCU9_IDLE_AFT_SEL_LSB               (1U << 9)       /* 1b */
#define MCU10_IDLE_AFT_SEL_LSB              (1U << 10)      /* 1b */
#define MCU11_IDLE_AFT_SEL_LSB              (1U << 11)      /* 1b */
#define MCU12_IDLE_AFT_SEL_LSB              (1U << 12)      /* 1b */
#define MCU13_IDLE_AFT_SEL_LSB              (1U << 13)      /* 1b */
#define MCU14_IDLE_AFT_SEL_LSB              (1U << 14)      /* 1b */
#define MCU15_IDLE_AFT_SEL_LSB              (1U << 15)      /* 1b */
#define MCU16_IDLE_AFT_SEL_LSB              (1U << 16)      /* 1b */
#define MCU17_IDLE_AFT_SEL_LSB              (1U << 17)      /* 1b */
/* PCM_FSM_STA (0x10A00000+0x18C) */
#define EXEC_INST_OP_LSB                    (1U << 0)       /* 4b */
#define PC_STATE_LSB                        (1U << 4)       /* 3b */
#define IM_STATE_LSB                        (1U << 7)       /* 3b */
#define NXT_MASTER_STATE_LSB                (1U << 10)      /* 5b */
#define EVENT_FSM_LSB                       (1U << 15)      /* 3b */
#define PCM_CK_SEL_O_LSB                    (1U << 18)      /* 3b */
#define RG_PCM_KICK_LSB                     (1U << 21)      /* 1b */
#define RG_IM_KICK_LSB                      (1U << 22)      /* 1b */
#define EXT_SRC_STA_LSB                     (1U << 23)      /* 3b */
#define SRCCLKENO_LSB                       (1U << 26)      /* 2b */
/* PWR_STATUS (0x10A00000+0x190) */
#define PWR_STATUS_LSB                      (1U << 0)       /* 32b */
/* PWR_STATUS_2ND (0x10A00000+0x194) */
#define PWR_STATUS_2ND_LSB                  (1U << 0)       /* 32b */
/* CPU_PWR_STATUS (0x10A00000+0x198) */
#define CPU_PWR_STATUS_LSB                  (1U << 0)       /* 32b */
/* CPU_PWR_STATUS_2ND (0x10A00000+0x19C) */
#define CPU_PWR_STATUS_2ND_LSB              (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_0 (0x10A00000+0x1A0) */
#define PCM_WDT_LATCH_0_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_1 (0x10A00000+0x1A4) */
#define PCM_WDT_LATCH_1_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_2 (0x10A00000+0x1A8) */
#define PCM_WDT_LATCH_2_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_3 (0x10A00000+0x1AC) */
#define PCM_WDT_LATCH_3_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_4 (0x10A00000+0x1B0) */
#define PCM_WDT_LATCH_4_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_5 (0x10A00000+0x1B4) */
#define PCM_WDT_LATCH_5_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_6 (0x10A00000+0x1B8) */
#define PCM_WDT_LATCH_6_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_7 (0x10A00000+0x1BC) */
#define PCM_WDT_LATCH_7_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_8 (0x10A00000+0x1C0) */
#define PCM_WDT_LATCH_8_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_9 (0x10A00000+0x1C4) */
#define PCM_WDT_LATCH_9_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA0 (0x10A00000+0x1C8) */
#define LAST_IDLE_CNT_0_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA1 (0x10A00000+0x1CC) */
#define LAST_IDLE_CNT_1_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA2 (0x10A00000+0x1D0) */
#define LAST_IDLE_CNT_2_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA3 (0x10A00000+0x1D4) */
#define LAST_IDLE_CNT_3_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA0 (0x10A00000+0x1D8) */
#define CURRENT_IDLE_CNT_0_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA1 (0x10A00000+0x1DC) */
#define CURRENT_IDLE_CNT_1_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA2 (0x10A00000+0x1E0) */
#define CURRENT_IDLE_CNT_2_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA3 (0x10A00000+0x1E4) */
#define CURRENT_IDLE_CNT_3_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_TIMER_OUT (0x10A00000+0x1E8) */
#define TWAM_TIMER_LSB                      (1U << 0)       /* 32b */
/* SPM_SRC_RDY_STA (0x10A00000+0x1EC) */
#define SPM_INFRA_SRC_ACK_LSB               (1U << 0)       /* 1b */
#define SPM_VRF18_SRC_ACK_LSB               (1U << 1)       /* 1b */
/* CPU_RET_STATUS (0x10A00000+0x1F0) */
#define CPU_RET_STATUS_LSB                  (1U << 0)       /* 32b */
/* SPM_ACK_CHK_TIMER (0x10A00000+0x1F4) */
#define SPM_ACK_CHK_TIMER_LSB               (1U << 0)       /* 32b */
/* SPM_ACK_CHK_STA (0x10A00000+0x1F8) */
#define SPM_ACK_CHK_STA_LSB                 (1U << 0)       /* 32b */
/* MCU0_PWR_CON (0x10A00000+0x200) */
#define MCU0_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU0_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU0_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU0_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU0_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU0_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU0_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU0_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU0_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU0_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU0_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU0_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU0_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU0_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU1_PWR_CON (0x10A00000+0x204) */
#define MCU1_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU1_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU1_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU1_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU1_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU1_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU1_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU1_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU1_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU1_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU1_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU1_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU1_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU1_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU2_PWR_CON (0x10A00000+0x208) */
#define MCU2_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU2_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU2_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU2_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU2_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU2_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU2_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU2_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU2_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU2_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU2_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU2_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU2_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU2_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU3_PWR_CON (0x10A00000+0x20C) */
#define MCU3_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU3_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU3_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU3_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU3_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU3_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU3_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU3_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU3_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU3_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU3_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU3_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU3_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU3_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU4_PWR_CON (0x10A00000+0x210) */
#define MCU4_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU4_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU4_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU4_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU4_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU4_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU4_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU4_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU4_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU4_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU4_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU4_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU4_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU4_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU5_PWR_CON (0x10A00000+0x214) */
#define MCU5_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU5_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU5_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU5_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU5_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU5_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU5_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU5_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU5_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU5_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU5_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU5_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU5_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU5_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU6_PWR_CON (0x10A00000+0x218) */
#define MCU6_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU6_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU6_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU6_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU6_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU6_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU6_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU6_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU6_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU6_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU6_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU6_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU6_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU6_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU7_PWR_CON (0x10A00000+0x21C) */
#define MCU7_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU7_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU7_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU7_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU7_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU7_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU7_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU7_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU7_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU7_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU7_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU7_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU7_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU7_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU8_PWR_CON (0x10A00000+0x220) */
#define MCU8_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU8_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU8_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU8_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU8_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU8_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU8_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU8_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU8_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU8_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU8_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU8_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU8_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU8_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU9_PWR_CON (0x10A00000+0x224) */
#define MCU9_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MCU9_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MCU9_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MCU9_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MCU9_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MCU9_SRAM_CKISO_LSB                 (1U << 5)       /* 1b */
#define MCU9_SRAM_ISOINT_B_LSB              (1U << 6)       /* 1b */
#define MCU9_SRAM_PD_SLPB_CLAMP_LSB         (1U << 7)       /* 1b */
#define MCU9_SRAM_PDN_LSB                   (1U << 8)       /* 1b */
#define MCU9_SRAM_SLEEP_B_LSB               (1U << 12)      /* 1b */
#define SC_MCU9_SRAM_PDN_ACK_LSB            (1U << 24)      /* 1b */
#define SC_MCU9_SRAM_SLEEP_B_ACK_LSB        (1U << 28)      /* 1b */
#define SC_MCU9_PWR_ACK_LSB                 (1U << 30)      /* 1b */
#define SC_MCU9_PWR_ACK_2ND_LSB             (1U << 31)      /* 1b */
/* MCU10_PWR_CON (0x10A00000+0x228) */
#define MCU10_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU10_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU10_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU10_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU10_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU10_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU10_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU10_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU10_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU10_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU10_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU10_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU10_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU10_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU11_PWR_CON (0x10A00000+0x22C) */
#define MCU11_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU11_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU11_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU11_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU11_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU11_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU11_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU11_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU11_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU11_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU11_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU11_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU11_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU11_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU12_PWR_CON (0x10A00000+0x230) */
#define MCU12_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU12_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU12_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU12_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU12_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU12_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU12_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU12_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU12_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU12_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU12_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU12_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU12_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU12_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU13_PWR_CON (0x10A00000+0x234) */
#define MCU13_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU13_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU13_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU13_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU13_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU13_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU13_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU13_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU13_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU13_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU13_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU13_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU13_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU13_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU14_PWR_CON (0x10A00000+0x238) */
#define MCU14_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU14_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU14_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU14_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU14_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU14_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU14_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU14_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU14_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU14_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU14_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU14_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU14_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU14_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU15_PWR_CON (0x10A00000+0x23C) */
#define MCU15_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU15_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU15_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU15_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU15_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU15_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU15_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU15_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU15_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU15_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU15_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU15_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU15_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU15_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU16_PWR_CON (0x10A00000+0x240) */
#define MCU16_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU16_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU16_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU16_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU16_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU16_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU16_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU16_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU16_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU16_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU16_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU16_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU16_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU16_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* MCU17_PWR_CON (0x10A00000+0x244) */
#define MCU17_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define MCU17_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define MCU17_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define MCU17_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MCU17_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MCU17_SRAM_CKISO_LSB                (1U << 5)       /* 1b */
#define MCU17_SRAM_ISOINT_B_LSB             (1U << 6)       /* 1b */
#define MCU17_SRAM_PD_SLPB_CLAMP_LSB        (1U << 7)       /* 1b */
#define MCU17_SRAM_PDN_LSB                  (1U << 8)       /* 1b */
#define MCU17_SRAM_SLEEP_B_LSB              (1U << 12)      /* 1b */
#define SC_MCU17_SRAM_PDN_ACK_LSB           (1U << 24)      /* 1b */
#define SC_MCU17_SRAM_SLEEP_B_ACK_LSB       (1U << 28)      /* 1b */
#define SC_MCU17_PWR_ACK_LSB                (1U << 30)      /* 1b */
#define SC_MCU17_PWR_ACK_2ND_LSB            (1U << 31)      /* 1b */
/* CPU_EXT_BUCK_ISO (0x10A00000+0x260) */
#define CPU_EXT_BUCK_ISO_LSB                (1U << 0)       /* 4b */
/* ARMPLL_CLK_CON (0x10A00000+0x264) */
#define MUXSEL_SC_CCIPLL_LSB                (1U << 0)       /* 1b */
#define MUXSEL_SC_ARMPLL1_LSB               (1U << 1)       /* 1b */
#define MUXSEL_SC_ARMPLL2_LSB               (1U << 2)       /* 1b */
#define MUXSEL_SC_ARMPLL3_LSB               (1U << 3)       /* 1b */
#define MUXSEL_SC_ARMPLL4_LSB               (1U << 4)       /* 1b */
#define REG_SC_ARM_CLK_OFF_LSB              (1U << 5)       /* 5b */
#define REG_SC_ARMPLL_OFF_LSB               (1U << 10)      /* 5b */
#define REG_SC_ARMPLLOUT_OFF_LSB            (1U << 15)      /* 5b */
#define REG_SC_FHC_PAUSE_LSB                (1U << 20)      /* 5b */
#define REG_SC_ARMPLL_S_OFF_LSB             (1U << 25)      /* 5b */
/* SPMC_DORMANT_ENABLE (0x10A00000+0X268) */
#define SPMC_DORMANT_ENABLE_LSB             (1U << 0)       /* 4b */
/* BYPASS_SPMC (0x10A00000+0x26C) */
#define BYPASS_CPU_SPMC_MODE_LSB            (1U << 0)       /* 1b */
/* CPU_SRAM_DREQ_CON (0x10A00000+0x270) */
#define CPU_SRAM_DREQ_CON_LSB               (1U << 0)       /* 16b */
/* CPU_SRAM_DREQ_CON_SET (0x10A00000+0x274) */
#define CPU_SRAM_DREQ_CON_SET_LSB           (1U << 0)       /* 16b */
/* CPU_SRAM_DREQ_CON_CLR (0x10A00000+0x278) */
#define CPU_SRAM_DREQ_CON_CLR_LSB           (1U << 0)       /* 16b */
/* CPU_SRAM_DREQ_ACK (0x10A00000+0x27C) */
#define CPU_SRAM_DREQ_ACK_LSB               (1U << 0)       /* 16b */
/* SPMC_MISC (0x10A00000+0x280) */
#define SPMC_MISC_LSB                       (1U << 0)       /* 32b */
/* SPMC_MISC2 (0x10A00000+0x284) */
#define SPMC_MISC2_LSB                      (1U << 0)       /* 32b */
/* COMMON_CPU_PWR_ADDR (0x10A00000+0x288) */
#define COMMON_CPU_PWR_ADDR_LSB             (1U << 0)       /* 32b */
/* COMMON_TOP_PWR_ADDR (0x10A00000+0x28C) */
#define COMMON_TOP_PWR_ADDR_LSB             (1U << 0)       /* 32b */
/* MCU2_L2_FLUSH (0x10A00000+0x290) */
#define MCU2_AINACTS_LSB                    (1U << 0)       /* 1b */
#define MCU2_L2CFLUSH_REQ_LSB               (1U << 1)       /* 1b */
#define MCU2_L2CFLUSH_DONE_LSB              (1U << 4)       /* 1b */
/* MCU7_L2_FLUSH (0x10A00000+0x294) */
#define MCU7_AINACTS_LSB                    (1U << 0)       /* 1b */
#define MCU7_L2CFLUSH_REQ_LSB               (1U << 1)       /* 1b */
#define MCU7_L2CFLUSH_DONE_LSB              (1U << 4)       /* 1b */
/* MCU12_L2_FLUSH (0x10A00000+0x298) */
#define MCU12_AINACTS_LSB                   (1U << 0)       /* 1b */
#define MCU12_L2CFLUSH_REQ_LSB              (1U << 1)       /* 1b */
#define MCU12_L2CFLUSH_DONE_LSB             (1U << 4)       /* 1b */
/* MFG0_PWR_CON (0x10A00000+0x300) */
#define MFG0_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG0_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG0_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG0_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG0_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG0_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG0_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* MFG1_PWR_CON (0x10A00000+0x304) */
#define MFG1_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG1_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG1_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG1_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG1_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG1_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG1_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* MFG2_PWR_CON (0x10A00000+0x308) */
#define MFG2_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG2_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG2_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG2_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG2_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG2_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG2_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* MFG3_PWR_CON (0x10A00000+0x30C) */
#define MFG3_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG3_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG3_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG3_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG3_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG3_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG3_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* MFG4_PWR_CON (0x10A00000+0x310) */
#define MFG4_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG4_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG4_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG4_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG4_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG4_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG4_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* C2K_PWR_CON (0x10A00000+0x314) */
#define C2K_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define C2K_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define C2K_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define C2K_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define C2K_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
/* MD1_PWR_CON (0x10A00000+0x318) */
#define MD1_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MD1_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MD1_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MD1_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MD1_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define MD1_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_MD1_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* DPY_CH0_PWR_CON (0x10A00000+0x31C) */
#define DPYA_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define DPYA_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define DPYA_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define DPYA_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define DPYA_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define DPYA_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_DPY_CH0_SRAM_PDN_ACK_LSB         (1U << 12)      /* 4b */
/* DPY_CH1_PWR_CON (0x10A00000+0x320) */
#define REG_DPYB_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define REG_DPYB_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define REG_DPYB_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define REG_DPYB_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define REG_DPYB_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
#define REG_DPYB_SRAM_PDN_LSB               (1U << 8)       /* 4b */
#define SC_DPY_CH1_SRAM_PDN_ACK_LSB         (1U << 12)      /* 4b */
/* CONN_PWR_CON (0x10A00000+0x324) */
#define CONN_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define CONN_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define CONN_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define CONN_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define CONN_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define CONN_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_CONN_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
#define SC_CONN2_PWR_ACK_LSB                (1U << 28)      /* 1b */
#define SC_CONN2_PWR_ACK_2ND_LSB            (1U << 29)      /* 1b */
/* INFRA_PWR_CON (0x10A00000+0x328) */
#define INFRA_PWR_RST_B_LSB                 (1U << 0)       /* 1b */
#define INFRA_PWR_ISO_LSB                   (1U << 1)       /* 1b */
#define INFRA_PWR_ON_LSB                    (1U << 2)       /* 1b */
#define INFRA_PWR_ON_2ND_LSB                (1U << 3)       /* 1b */
#define INFRA_PWR_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define INFRA_SRAM_PDN_LSB                  (1U << 8)       /* 4b */
#define SC_INFRA_SRAM_PDN_ACK_LSB           (1U << 24)      /* 4b */
/* AUD_PWR_CON (0x10A00000+0x32C) */
#define AUD_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define AUD_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define AUD_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define AUD_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define AUD_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define AUD_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_AUD_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* IPU_VCORE_PWR_CON (0x10A00000+0x330) */
#define IPU_VCORE_PWR_RST_B_LSB             (1U << 0)       /* 1b */
#define IPU_VCORE_PWR_ISO_LSB               (1U << 1)       /* 1b */
#define IPU_VCORE_PWR_ON_LSB                (1U << 2)       /* 1b */
#define IPU_VCORE_PWR_ON_2ND_LSB            (1U << 3)       /* 1b */
#define IPU_VCORE_PWR_CLK_DIS_LSB           (1U << 4)       /* 1b */
#define IPU_VCORE_SRAM_PDN_LSB              (1U << 8)       /* 4b */
#define SC_IPU_VCORE_SRAM_PDN_ACK_LSB       (1U << 24)      /* 4b */
/* MM0_PWR_CON (0x10A00000+0x334) */
#define MM0_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MM0_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MM0_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MM0_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MM0_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define MM0_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_MM0_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* CAM_PWR_CON (0x10A00000+0x338) */
#define CAM_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define CAM_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define CAM_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define CAM_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define CAM_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define CAM_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_CAM_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* IPU_PWR_CON (0x10A00000+0x33C) */
#define IPU_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define IPU_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define IPU_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define IPU_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define IPU_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define IPU_SRAM_CKISO_LSB                  (1U << 5)       /* 1b */
#define IPU_SRAM_ISOINT_B_LSB               (1U << 6)       /* 1b */
#define IPU_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define IPU_SRAM_SLEEP_B_LSB                (1U << 12)      /* 4b */
#define SC_IPU_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
#define SC_IPU_VCORE_PWR_ACK_LSB            (1U << 28)      /* 1b */
#define SC_IPU_VCORE_PWR_ACK_2ND_LSB        (1U << 29)      /* 1b */
#define SC_IPU_SRAM_SLEEP_B_ACK_LSB         (1U << 30)      /* 2b */
/* ISP_PWR_CON (0x10A00000+0x340) */
#define ISP_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define ISP_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define ISP_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define ISP_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define ISP_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define ISP_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_ISP_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* VEN_PWR_CON (0x10A00000+0x344) */
#define VEN_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define VEN_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define VEN_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define VEN_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define VEN_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define VEN_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_VEN_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* VDE_PWR_CON (0x10A00000+0x348) */
#define VDE_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define VDE_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define VDE_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define VDE_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define VDE_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define VDE_SRAM_PDN_LSB                    (1U << 8)       /* 4b */
#define SC_VDE_SRAM_PDN_ACK_LSB             (1U << 24)      /* 4b */
/* IPU_CORE0_PWR_CON (0x10A00000+0x34C) */
#define IPU_CORE0_PWR_RST_B_LSB             (1U << 0)       /* 1b */
#define IPU_CORE0_PWR_ISO_LSB               (1U << 1)       /* 1b */
#define IPU_CORE0_PWR_ON_LSB                (1U << 2)       /* 1b */
#define IPU_CORE0_PWR_ON_2ND_LSB            (1U << 3)       /* 1b */
#define IPU_CORE0_PWR_CLK_DIS_LSB           (1U << 4)       /* 1b */
#define IPU_CORE0_SRAM_CKISO_LSB            (1U << 5)       /* 1b */
#define IPU_CORE0_SRAM_ISOINT_B_LSB         (1U << 6)       /* 1b */
#define IPU_CORE0_SRAM_PDN_LSB              (1U << 8)       /* 4b */
#define IPU_CORE0_SRAM_SLEEP_B_LSB          (1U << 12)      /* 4b */
#define SC_IPU_CORE0_SRAM_PDN_ACK_LSB       (1U << 24)      /* 4b */
#define SC_IPU_CORE0_SRAM_SLEEP_B_ACK_LSB   (1U << 28)      /* 4b */
/* IPU_CORE1_PWR_CON (0x10A00000+0x350) */
#define IPU_CORE1_PWR_RST_B_LSB             (1U << 0)       /* 1b */
#define IPU_CORE1_PWR_ISO_LSB               (1U << 1)       /* 1b */
#define IPU_CORE1_PWR_ON_LSB                (1U << 2)       /* 1b */
#define IPU_CORE1_PWR_ON_2ND_LSB            (1U << 3)       /* 1b */
#define IPU_CORE1_PWR_CLK_DIS_LSB           (1U << 4)       /* 1b */
#define IPU_CORE1_SRAM_CKISO_LSB            (1U << 5)       /* 1b */
#define IPU_CORE1_SRAM_ISOINT_B_LSB         (1U << 6)       /* 1b */
#define IPU_CORE1_SRAM_PDN_LSB              (1U << 8)       /* 4b */
#define IPU_CORE1_SRAM_SLEEP_B_LSB          (1U << 12)      /* 4b */
#define SC_IPU_CORE1_SRAM_PDN_ACK_LSB       (1U << 24)      /* 4b */
#define SC_IPU_CORE1_SRAM_SLEEP_B_ACK_LSB   (1U << 28)      /* 4b */
/* IPU_CORE2_PWR_CON (0x10A00000+0x354) */
#define IPU_CORE2_PWR_RST_B_LSB             (1U << 0)       /* 1b */
#define IPU_CORE2_PWR_ISO_LSB               (1U << 1)       /* 1b */
#define IPU_CORE2_PWR_ON_LSB                (1U << 2)       /* 1b */
#define IPU_CORE2_PWR_ON_2ND_LSB            (1U << 3)       /* 1b */
#define IPU_CORE2_PWR_CLK_DIS_LSB           (1U << 4)       /* 1b */
#define IPU_CORE2_SRAM_CKISO_LSB            (1U << 5)       /* 1b */
#define IPU_CORE2_SRAM_ISOINT_B_LSB         (1U << 6)       /* 1b */
#define IPU_CORE2_SRAM_PDN_LSB              (1U << 8)       /* 4b */
#define IPU_CORE2_SRAM_SLEEP_B_LSB          (1U << 12)      /* 4b */
#define SC_IPU_CORE2_SRAM_PDN_ACK_LSB       (1U << 24)      /* 4b */
#define SC_IPU_CORE2_SRAM_SLEEP_B_ACK_LSB   (1U << 28)      /* 4b */
/* MFG5_PWR_CON (0x10A00000+0x358) */
#define MFG5_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define MFG5_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define MFG5_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define MFG5_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define MFG5_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define MFG5_SRAM_PDN_LSB                   (1U << 8)       /* 4b */
#define SC_MFG5_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* PERI_SRAM_CON (0x10A00000+0x360) */
#define PERI_SRAM_CKISO_LSB                 (1U << 0)       /* 1b */
#define PERI_SRAM_ISOINT_B_LSB              (1U << 1)       /* 1b */
#define PERI_SRAM_SLEEP_B_LSB               (1U << 4)       /* 4b */
#define PERI_SRAM_PDN_LSB                   (1U << 16)      /* 4b */
#define SC_PERI_SRAM_PDN_ACK_LSB            (1U << 24)      /* 4b */
/* SYSRAM_0_CON (0x10A00000+0x370) */
#define SYSRAM_0_SRAM_CKISO_LSB             (1U << 0)       /* 1b */
#define SYSRAM_0_SRAM_ISOINT_B_LSB          (1U << 1)       /* 1b */
#define SYSRAM_0_SRAM_SLEEP_B_LSB           (1U << 4)       /* 8b */
#define SYSRAM_0_SRAM_PDN_LSB               (1U << 16)      /* 8b */
/* SYSRAM_1_CON (0x10A00000+0x374) */
#define SYSRAM_1_SRAM_CKISO_LSB             (1U << 0)       /* 1b */
#define SYSRAM_1_SRAM_ISOINT_B_LSB          (1U << 1)       /* 1b */
#define SYSRAM_1_SRAM_SLEEP_B_LSB           (1U << 4)       /* 8b */
#define SYSRAM_1_SRAM_PDN_LSB               (1U << 16)      /* 8b */
/* SYSROM_CON (0x10A00000+0x378) */
#define SYSROM_SRAM_PDN_LSB                 (1U << 0)       /* 6b */
/* SCP_SRAM_CON (0x10A00000+0x37C) */
#define SCP_SRAM_CKISO_LSB                  (1U << 0)       /* 1b */
#define SCP_SRAM_ISOINT_B_LSB               (1U << 1)       /* 1b */
#define SCP_SRAM_SLEEP_B_LSB                (1U << 4)       /* 1b */
#define SCP_SRAM_PDN_LSB                    (1U << 12)      /* 1b */
/* SSPM_SRAM_CON (0x10A00000+0x380) */
#define SSPM_SRAM_CKISO_LSB                 (1U << 0)       /* 1b */
#define SSPM_SRAM_ISOINT_B_LSB              (1U << 1)       /* 1b */
#define SSPM_SRAM_SLEEP_B_LSB               (1U << 4)       /* 1b */
#define SSPM_SRAM_PDN_LSB                   (1U << 12)      /* 1b */
#define SSPM_WFI_LSB                        (1U << 16)      /* 1b */
/* BSI_TOP_SRAM_CON (0x10A00000+0x384) */
#define BSI_TOP_SRAM_CKISO_LSB              (1U << 0)       /* 1b */
#define BSI_TOP_SRAM_ISOINT_B_LSB           (1U << 1)       /* 1b */
#define BSI_TOP_SRAM_SLEEP_B_LSB            (1U << 4)       /* 12b */
#define BSI_TOP_SRAM_PDN_LSB                (1U << 16)      /* 12b */
/* DBGSYS_SRAM_CON (0x10A00000+0x388) */
#define DBGSYS_SRAM_CKISO_LSB               (1U << 0)       /* 1b */
#define DBGSYS_SRAM_ISOINT_B_LSB            (1U << 1)       /* 1b */
#define DBGSYS_SRAM_SLEEP_B_LSB             (1U << 4)       /* 1b */
#define DBGSYS_SRAM_PDN_LSB                 (1U << 12)      /* 1b */
/* AUD_DSP_SRAM_CON (0x10A00000+0x38C) */
#define AUD_DSP_SRAM_CKISO_LSB              (1U << 0)       /* 1b */
#define AUD_DSP_SRAM_ISOINT_B_LSB           (1U << 1)       /* 1b */
#define AUD_DSP_SRAM_SLEEP_B_LSB            (1U << 4)       /* 12b */
#define AUD_DSP_SRAM_PDN_LSB                (1U << 16)      /* 12b */
/* AUD_ANC_SRAM_CON (0x10A00000+0x390) */
#define AUD_ANC_SRAM_CKISO_LSB              (1U << 0)       /* 1b */
#define AUD_ANC_SRAM_ISOINT_B_LSB           (1U << 1)       /* 1b */
#define AUD_ANC_SRAM_SLEEP_B_LSB            (1U << 4)       /* 2b */
#define AUD_ANC_SRAM_PDN_LSB                (1U << 12)      /* 2b */
/* EXT_BUCK_ISO (0x10A00000+0x394) */
#define MD_EXT_BUCK_ISO_LSB                 (1U << 0)       /* 1b */
#define GPU_EXT_BUCK_ISO_LSB                (1U << 1)       /* 1b */
#define VIMVO_EXT_BUCK_ISO_LSB              (1U << 2)       /* 1b */
#define VIMVO_ASYNC_PROT_LSB                (1U << 3)       /* 1b */
#define RG_VA09_ON_LSB                      (1U << 4)       /* 1b */
#define IPU_EXT_BUCK_ISO_LSB                (1U << 5)       /* 3b */
/* UFS_SRAM_CON (0x10A00000+0x398) */
#define UFS_SRAM_CKISO_LSB                  (1U << 0)       /* 2b */
#define UFS_SRAM_ISOINT_B_LSB               (1U << 2)       /* 2b */
#define UFS_SRAM_SLEEP_B_LSB                (1U << 4)       /* 2b */
#define UFS_SRAM_PDN_LSB                    (1U << 6)       /* 2b */
/* DXCC_SRAM_CON (0x10A00000+0x39C) */
#define DXCC_SRAM_CKISO_LSB                 (1U << 0)       /* 1b */
#define DXCC_SRAM_ISOINT_B_LSB              (1U << 1)       /* 1b */
#define DXCC_SRAM_SLEEP_B_LSB               (1U << 4)       /* 12b */
#define DXCC_SRAM_PDN_LSB                   (1U << 16)      /* 12b */
/* SPARE1_SRAM_CON (0x10A00000+0x3A0) */
#define SPARE1_SRAM_CKISO_LSB               (1U << 0)       /* 1b */
#define SPARE1_SRAM_ISOINT_B_LSB            (1U << 1)       /* 1b */
#define SPARE1_SRAM_SLEEP_B_LSB             (1U << 4)       /* 8b */
#define SPARE1_SRAM_PDN_LSB                 (1U << 12)      /* 12b */
#define SC_SPARE1_SRAM_PDN_ACK_LSB          (1U << 24)      /* 4b */
/* SPARE_SRAM_CON (0x10A00000+0x3A4) */
#define SPARE_SRAM_CKISO_LSB                (1U << 0)       /* 2b */
#define SPARE_SRAM_ISOINT_B_LSB             (1U << 2)       /* 2b */
#define SPARE_SRAM_SLEEP_B_LSB              (1U << 4)       /* 12b */
#define SPARE_SRAM_PDN_LSB                  (1U << 16)      /* 12b */
/* SPM_DVFS_CON (0x10A00000+0x400) */
#define DVFS_CTRL_LSB                       (1U << 0)       /* 4b */
#define SPM_DVFS_ACK_LSB                    (1U << 30)      /* 2b */
/* SPM_MDBSI_CON (0x10A00000+0x404) */
#define AP_BSI_BUF_EN_LSB                   (1U << 0)       /* 3b */
/* SPM_MAS_PAUSE_MASK_B (0x10A00000+0x408) */
#define RG_PCM_PAUSE_MASK_B_LSB             (1U << 0)       /* 32b */
/* SPM_MAS_PAUSE2_MASK_B (0x10A00000+0x40C) */
#define RG_PCM_PAUSE2_MASK_B_LSB            (1U << 0)       /* 32b */
/* SPM_MAS_PAUSE3_MASK_B (0x10A00000+0x410) */
#define RG_PCM_PAUSE3_MASK_B_LSB            (1U << 0)       /* 32b */
/* SPM_MAS_PAUSE4_MASK_B (0x10A00000+0x414) */
#define RG_PCM_PAUSE4_MASK_B_LSB            (1U << 0)       /* 32b */
/* SPM_MAS_PAUSE5_MASK_B (0x10A00000+0x418) */
#define RG_PCM_PAUSE5_MASK_B_LSB            (1U << 0)       /* 32b */
/* SPM_BSI_GEN (0x10A00000+0x41C) */
#define SPM_BSI_START_LSB                   (1U << 0)       /* 1b */
/* SPM_BSI_EN_SR (0x10A00000+0x420) */
#define SPM_BSI_EN_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_CLK_SR (0x10A00000+0x424) */
#define SPM_BSI_CLK_SR_LSB                  (1U << 0)       /* 32b */
/* SPM_BSI_D0_SR (0x10A00000+0x428) */
#define SPM_BSI_D0_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_D1_SR (0x10A00000+0x42C) */
#define SPM_BSI_D1_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_D2_SR (0x10A00000+0x430) */
#define SPM_BSI_D2_SR_LSB                   (1U << 0)       /* 32b */
/* AP2MD_CROSS_TRIGGER (0x10A00000+0x434) */
#define AP2MD_CROSS_TRIGGER_REQ_LSB         (1U << 0)       /* 1b */
#define AP2MD_CROSS_TRIGGER_ACK_LSB         (1U << 1)       /* 1b */
/* AP_MDSRC_REQ (0x10A00000+0x438) */
#define AP_MD1SRC_REQ_LSB                   (1U << 0)       /* 1b */
#define AP_MD2SRC_REQ_LSB                   (1U << 1)       /* 1b */
#define AP_MD1SRC_ACK_LSB                   (1U << 4)       /* 1b */
#define AP_MD2SRC_ACK_LSB                   (1U << 5)       /* 1b */
/* SPM2MD_DVFS_CON (0x10A00000+0x43C) */
#define SPM2MD_DVFS_CON_LSB                 (1U << 0)       /* 32b */
/* MD2SPM_DVFS_CON (0x10A00000+0x440) */
#define MD2SPM_DVFS_CON_LSB                 (1U << 0)       /* 32b */
/* SPM_PLL_CON (0x10A00000+0x44C) */
#define SC_UNIPLLOUT_OFF_LSB                (1U << 1)       /* 1b */
#define SC_EMIPLLOUT_OFF_LSB                (1U << 2)       /* 1b */
#define SC_UNIPLL_OFF_LSB                   (1U << 5)       /* 1b */
#define SC_EMIPLL_OFF_LSB                   (1U << 6)       /* 1b */
#define SC_UNIDDS_OFF_LSB                   (1U << 9)       /* 1b */
#define SC_EMIDDS_OFF_LSB                   (1U << 10)      /* 1b */
#define FHC_PAUSE_EMIPLL_LSB                (1U << 14)      /* 1b */
#define SC_MD32K_CK_OFF_LSB                 (1U << 15)      /* 1b */
#define SC_EMI_CK_OFF_LSB                   (1U << 18)      /* 1b */
/* AP2MD_PEER_WAKEUP (0x10A00000+0x454) */
#define AP2MD_PEER_WAKEUP_LSB               (1U << 0)       /* 1b */
/* ULPOSC_CON (0x10A00000+0x458) */
#define ULPOSC_EN_LSB                       (1U << 0)       /* 1b */
#define ULPOSC_RST_LSB                      (1U << 1)       /* 1b */
#define ULPOSC_CG_EN_LSB                    (1U << 2)       /* 1b */
#define ULPOSC_CLK_SEL_LSB                  (1U << 3)       /* 1b */
/* DRAMC_DPY_CLK_SW_CON_SEL (0x10A00000+0x460) */
#define SW_EMI_CLK_OFF_SEL_LSB              (1U << 0)       /* 4b */
#define SW_MEM_CK_OFF_SEL_LSB               (1U << 4)       /* 4b */
#define SW_DPY_MODE_SW_SEL_LSB              (1U << 8)       /* 4b */
#define SW_DMSUS_OFF_SEL_LSB                (1U << 12)      /* 4b */
#define SW_DPY_DLL_EN_SEL_LSB               (1U << 16)      /* 4b */
#define SW_DPY_2ND_DLL_EN_SEL_LSB           (1U << 20)      /* 4b */
#define SW_DPY_DLL_CK_EN_SEL_LSB            (1U << 24)      /* 4b */
#define SW_DPY_VREF_EN_SEL_LSB              (1U << 28)      /* 4b */
/* DRAMC_DPY_CLK_SW_CON (0x10A00000+0x464) */
#define SW_EMI_CLK_OFF_LSB                  (1U << 0)       /* 4b */
#define SW_MEM_CK_OFF_LSB                   (1U << 4)       /* 4b */
#define SW_DPY_MODE_SW_LSB                  (1U << 8)       /* 4b */
#define SW_DMSUS_OFF_LSB                    (1U << 12)      /* 4b */
#define SW_DPY_DLL_EN_LSB                   (1U << 16)      /* 4b */
#define SW_DPY_2ND_DLL_EN_LSB               (1U << 20)      /* 4b */
#define SW_DPY_DLL_CK_EN_LSB                (1U << 24)      /* 4b */
#define SW_DPY_VREF_EN_LSB                  (1U << 28)      /* 4b */
/* DRAMC_DPY_CLK_SW_CON_SEL2 (0x10A00000+0x468) */
#define SW_PHYPLL_EN_SEL_LSB                (1U << 0)       /* 4b */
#define SW_DR_GATE_RETRY_EN_SEL_LSB         (1U << 4)       /* 4b */
#define SW_DDRPHY_FB_CK_EN_SEL_LSB          (1U << 8)       /* 4b */
#define SW_DMDRAMCSHU_ACK_SEL_LSB           (1U << 12)      /* 4b */
#define SW_EMI_CLK_OFF_ACK_SEL_LSB          (1U << 16)      /* 4b */
#define SW_DR_SHORT_QUEUE_ACK_SEL_LSB       (1U << 20)      /* 4b */
#define SW_DRAMC_DFS_STA_SEL_LSB            (1U << 24)      /* 4b */
#define SEPARATE_PHY_PWR_SEL_LSB            (1U << 28)      /* 3b */
/* DRAMC_DPY_CLK_SW_CON2 (0x10A00000+0x46C) */
#define SW_PHYPLL_EN_LSB                    (1U << 0)       /* 4b */
#define SW_DR_GATE_RETRY_EN_LSB             (1U << 4)       /* 4b */
#define SW_DDRPHY_FB_CK_EN_LSB              (1U << 8)       /* 4b */
#define SC_DR_SHU_EN_ACK_LSB                (1U << 12)      /* 4b */
#define EMI_CLK_OFF_ACK_LSB                 (1U << 16)      /* 4b */
#define SC_DR_SHORT_QUEUE_ACK_LSB           (1U << 20)      /* 4b */
#define SC_DRAMC_DFS_STA_LSB                (1U << 24)      /* 4b */
/* DRAMC_DPY_CLK_SW_CON_SEL3 (0x10A00000+0x470) */
#define SW_PHYPLL_SHU_EN_SEL_LSB            (1U << 0)       /* 1b */
#define SW_PHYPLL2_SHU_EN_SEL_LSB           (1U << 1)       /* 1b */
#define SW_PHYPLL_MODE_SW_SEL_LSB           (1U << 2)       /* 1b */
#define SW_PHYPLL2_MODE_SW_SEL_LSB          (1U << 3)       /* 1b */
#define SW_DR_SHORT_QUEUE_SEL_LSB           (1U << 4)       /* 1b */
#define SW_DR_SHU_EN_SEL_LSB                (1U << 5)       /* 1b */
#define SW_DR_SHU_LEVEL_SEL_LSB             (1U << 6)       /* 1b */
/* DRAMC_DPY_CLK_SW_CON3 (0x10A00000+0x474) */
#define SW_PHYPLL_SHU_EN_LSB                (1U << 0)       /* 1b */
#define SW_PHYPLL2_SHU_EN_LSB               (1U << 1)       /* 1b */
#define SW_PHYPLL_MODE_SW_LSB               (1U << 2)       /* 1b */
#define SW_PHYPLL2_MODE_SW_LSB              (1U << 3)       /* 1b */
#define SW_DR_SHORT_QUEUE_LSB               (1U << 4)       /* 1b */
#define SW_DR_SHU_EN_LSB                    (1U << 5)       /* 1b */
#define SW_DR_SHU_LEVEL_LSB                 (1U << 6)       /* 2b */
#define SPM2ISP_ULTRAREQ_SW_MODE_LSB        (1U << 8)       /* 1b */
#define SPM2MM_ULTRAREQ_SW_MODE_LSB         (1U << 9)       /* 1b */
#define SPM2MD_ULTRAREQ_SW_MODE_LSB         (1U << 10)      /* 1b */
#define SPM2ISP_ULTRAACK_D2T_LSB            (1U << 12)      /* 1b */
#define SPM2MM_ULTRAACK_D2T_LSB             (1U << 13)      /* 1b */
#define SPM2MD_ULTRAACK_D2T_LSB             (1U << 14)      /* 1b */
#define SPM_ULTRAACK_ALL_D2T_LSB            (1U << 15)      /* 1b */
#define SPM2ISP_ULTRAACK_MASK_B_LSB         (1U << 16)      /* 1b */
#define SPM2MM_ULTRAACK_MASK_B_LSB          (1U << 17)      /* 1b */
#define SPM2MD_ULTRAACK_MASK_B_LSB          (1U << 18)      /* 1b */
#define SPM_ULTRAACK_MASK_ALL_B_LSB         (1U << 19)      /* 1b */
#define SPM2ISP_ULTRAREQ_HW_MODE_LSB        (1U << 20)      /* 1b */
#define SPM2MM_ULTRAREQ_HW_MODE_LSB         (1U << 21)      /* 1b */
#define SPM2MD_ULTRAREQ_HW_MODE_LSB         (1U << 22)      /* 1b */
#define SW_DMDRAMCSHU_ACK_ALL_LSB           (1U << 28)      /* 1b */
#define EMI_CLK_OFF_ACK_ALL_LSB             (1U << 29)      /* 1b */
#define DR_SHORT_QUEUE_ACK_ALL_LSB          (1U << 30)      /* 1b */
#define SW_DRAMC_DFS_STA_ALL_LSB            (1U << 31)      /* 1b */
/* DVFS_LEVEL (0x10A00000+0x478) */
#define CURRENT_DVFS_LEVEL_LSB              (1U << 0)       /* 6b */
#define SPM_HWVCORE_DVFS_DISABLE_LSB        (1U << 7)       /* 1b */
#define CURRENT_DVS_LEVEL_LSB               (1U << 8)       /* 4b */
#define CURRENT_DFS_LEVEL_LSB               (1U << 12)      /* 4b */
#define NEXT_DVFS_LEVEL_LSB                 (1U << 16)      /* 5b */
#define REG_DVFS_PRE_START_LSB              (1U << 24)      /* 1b */
#define DVFS_PRE_START_SEL_LSB              (1U << 25)      /* 1b */
/* MSDC_DVFS_HALT (0x10A00000+0x47C) */
#define MSDC_ALL_DVFS_HALT_LSB              (1U << 0)       /* 1b */
#define MSDC1_DVFS_HALT_LSB                 (1U << 1)       /* 1b */
#define MSDC2_DVFS_HALT_LSB                 (1U << 2)       /* 1b */
#define MSDC3_DVFS_HALT_LSB                 (1U << 3)       /* 1b */
/* SRAM_DREQ_CON (0x10A00000+0x480) */
#define SRAM_DREQ_CON_LSB                   (1U << 0)       /* 16b */
/* SRAM_DREQ_CON_SET (0x10A00000+0x484) */
#define SRAM_DREQ_CON_SET_LSB               (1U << 0)       /* 16b */
/* SRAM_DREQ_CON_CLR (0x10A00000+0x488) */
#define SRAM_DREQ_CON_CLR_LSB               (1U << 0)       /* 16b */
/* SRAM_DREQ_ACK (0x10A00000+0x48C) */
#define SRAM_DREQ_ACK_LSB                   (1U << 0)       /* 16b */
/* DRAMC_DPY_CLK_SW_CON_SEL4 (0x10A00000+0x490) */
#define SW_DPY_BCLK_ENABLE_SEL_LSB          (1U << 0)       /* 4b */
#define SW_DPY_SHU_RESTORE_SEL_LSB          (1U << 4)       /* 4b */
#define SW_DPY_RESERVED_0_SEL_LSB           (1U << 8)       /* 4b */
#define SW_DPY_RESERVED_1_SEL_LSB           (1U << 12)      /* 4b */
/* DRAMC_DPY_CLK_SW_CON4 (0x10A00000+0x494) */
#define SW_DPY_CH0_BCLK_ENABLE_LSB          (1U << 0)       /* 1b */
#define SW_DPY_CH1_BCLK_ENABLE_LSB          (1U << 1)       /* 1b */
#define SW_DPY_CH0_SHU_RESTORE_LSB          (1U << 2)       /* 1b */
#define SW_DPY_CH1_SHU_RESTORE_LSB          (1U << 3)       /* 1b */
#define SW_DPY_CH0_RESERVED_0_LSB           (1U << 4)       /* 1b */
#define SW_DPY_CH1_RESERVED_0_LSB           (1U << 5)       /* 1b */
#define SW_DPY_CH0_RESERVED_1_LSB           (1U << 6)       /* 1b */
#define SW_DPY_CH1_RESERVED_1_LSB           (1U << 7)       /* 1b */
#define SW_DPY_CH2_BCLK_ENABLE_LSB          (1U << 8)       /* 1b */
#define SW_DPY_CH3_BCLK_ENABLE_LSB          (1U << 9)       /* 1b */
#define SW_DPY_CH2_SHU_ENABLE_LSB           (1U << 10)      /* 1b */
#define SW_DPY_CH3_SHU_ENABLE_LSB           (1U << 11)      /* 1b */
#define SW_DPY_CH2_RESERVED_0_LSB           (1U << 12)      /* 1b */
#define SW_DPY_CH3_RESERVED_0_LSB           (1U << 13)      /* 1b */
#define SW_DPY_CH2_RESERVED_1_LSB           (1U << 14)      /* 1b */
#define SW_DPY_CH3_RESERVED_1_LSB           (1U << 15)      /* 1b */
#define SPM2SMI_ULTRAREQ_LSB                (1U << 16)      /* 1b */
#define SMI_DOUBLE_OUTSTANDING_LSB          (1U << 17)      /* 1b */
/* DRAMC_DPY_CLK_SPM_CON (0x10A00000+0x498) */
#define PCM_DPY_BCLK_ENABLE_LSB             (1U << 0)       /* 1b */
#define PCM_DPY_SHU_RESTORE_LSB             (1U << 1)       /* 1b */
#define PCM_DPY_RESERVED_0_LSB              (1U << 2)       /* 1b */
#define PCM_DPY_RESERVED_1_LSB              (1U << 3)       /* 1b */
/* DRAMC_DPY_CLK_SW_CON5 (0x10A00000+0x49C) */
#define SC_DPY_CH0_BCLK_ENABLE_LSB          (1U << 0)       /* 1b */
#define SC_DPY_CH1_BCLK_ENABLE_LSB          (1U << 1)       /* 1b */
#define SC_DPY_CH0_SHU_RESTORE_LSB          (1U << 2)       /* 1b */
#define SC_DPY_CH1_SHU_RESTORE_LSB          (1U << 3)       /* 1b */
#define SC_DPHY_RESERVED_LSB                (1U << 4)       /* 4b */
/* DRAMC_GATING_ERR (0x10A00000+0x4A0) */
#define GATING_ERROR_TRIGGER_CHA_LSB        (1U << 0)       /* 1b */
#define GATING_ERROR_TRIGGER_CHB_LSB        (1U << 4)       /* 1b */
/* MCU0_IRQ_MASK (0x10A00000+0x500) */
#define MCU0_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU0_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU1_IRQ_MASK (0x10A00000+0x504) */
#define MCU1_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU1_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU2_IRQ_MASK (0x10A00000+0x508) */
#define MCU2_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU2_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU3_IRQ_MASK (0x10A00000+0x50C) */
#define MCU3_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU3_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU4_IRQ_MASK (0x10A00000+0x510) */
#define MCU4_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU4_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU5_IRQ_MASK (0x10A00000+0x514) */
#define MCU5_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU5_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU6_IRQ_MASK (0x10A00000+0x518) */
#define MCU6_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU6_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU7_IRQ_MASK (0x10A00000+0x51C) */
#define MCU7_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU7_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU8_IRQ_MASK (0x10A00000+0x520) */
#define MCU8_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU8_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU9_IRQ_MASK (0x10A00000+0x524) */
#define MCU9_IRQ_MASK_LSB                   (1U << 0)       /* 1b */
#define MCU9_AUX_LSB                        (1U << 8)       /* 16b */
/* MCU10_IRQ_MASK (0x10A00000+0x528) */
#define MCU10_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU10_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU11_IRQ_MASK (0x10A00000+0x52C) */
#define MCU11_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU11_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU12_IRQ_MASK (0x10A00000+0x530) */
#define MCU12_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU12_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU13_IRQ_MASK (0x10A00000+0x534) */
#define MCU13_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU13_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU14_IRQ_MASK (0x10A00000+0x538) */
#define MCU14_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU14_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU15_IRQ_MASK (0x10A00000+0x53C) */
#define MCU15_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU15_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU16_IRQ_MASK (0x10A00000+0x540) */
#define MCU16_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU16_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU17_IRQ_MASK (0x10A00000+0x544) */
#define MCU17_IRQ_MASK_LSB                  (1U << 0)       /* 1b */
#define MCU17_AUX_LSB                       (1U << 8)       /* 16b */
/* MCU0_WFI_EN (0x10A00000+0x548) */
#define MCU0_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU1_WFI_EN (0x10A00000+0x54C) */
#define MCU1_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU2_WFI_EN (0x10A00000+0x550) */
#define MCU2_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU3_WFI_EN (0x10A00000+0x554) */
#define MCU3_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU4_WFI_EN (0x10A00000+0x558) */
#define MCU4_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU5_WFI_EN (0x10A00000+0x55C) */
#define MCU5_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU6_WFI_EN (0x10A00000+0x560) */
#define MCU6_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU7_WFI_EN (0x10A00000+0x564) */
#define MCU7_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU8_WFI_EN (0x10A00000+0x568) */
#define MCU8_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU9_WFI_EN (0x10A00000+0x56C) */
#define MCU9_WFI_EN_LSB                     (1U << 0)       /* 1b */
/* MCU10_WFI_EN (0x10A00000+0x570) */
#define MCU10_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU11_WFI_EN (0x10A00000+0x574) */
#define MCU11_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU12_WFI_EN (0x10A00000+0x578) */
#define MCU12_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU13_WFI_EN (0x10A00000+0x57C) */
#define MCU13_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU14_WFI_EN (0x10A00000+0x580) */
#define MCU14_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU15_WFI_EN (0x10A00000+0x584) */
#define MCU15_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU16_WFI_EN (0x10A00000+0x588) */
#define MCU16_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* MCU17_WFI_EN (0x10A00000+0x58C) */
#define MCU17_WFI_EN_LSB                    (1U << 0)       /* 1b */
/* SPM_SW_FLAG (0x10A00000+0x600) */
#define SPM_SW_FLAG_LSB                     (1U << 0)       /* 32b */
/* SPM_SW_DEBUG (0x10A00000+0x604) */
#define SPM_SW_DEBUG_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_0 (0x10A00000+0x608) */
#define SPM_SW_RSV_0_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_1 (0x10A00000+0x60C) */
#define SPM_SW_RSV_1_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_2 (0x10A00000+0x610) */
#define SPM_SW_RSV_2_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_3 (0x10A00000+0x614) */
#define SPM_SW_RSV_3_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_4 (0x10A00000+0x618) */
#define SPM_SW_RSV_4_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_5 (0x10A00000+0x61C) */
#define SPM_SW_RSV_5_LSB                    (1U << 0)       /* 32b */
/* SPM_RSV_CON3 (0x10A00000+0x620) */
#define SPM_RSV_CON3_LSB                    (1U << 0)       /* 16b */
/* SPM_RSV_CON2 (0x10A00000+0x624) */
#define SPM_RSV_CON2_LSB                    (1U << 0)       /* 16b */
/* SPM_RSV_STA (0x10A00000+0x628) */
#define SPM_RSV_STA_LSB                     (1U << 0)       /* 16b */
/* SPM_RSV_STA2 (0x10A00000+0x62C) */
#define SPM_RSV_STA2_LSB                    (1U << 0)       /* 16b */
/* SPM_PASR_DPD_0 (0x10A00000+0x630) */
#define SPM_PASR_DPD_0_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_1 (0x10A00000+0x634) */
#define SPM_PASR_DPD_1_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_2 (0x10A00000+0x638) */
#define SPM_PASR_DPD_2_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_3 (0x10A00000+0x63C) */
#define SPM_PASR_DPD_3_LSB                  (1U << 0)       /* 32b */
/* SPM_SPARE_CON (0x10A00000+0x640) */
#define SPM_SPARE_CON_LSB                   (1U << 0)       /* 32b */
/* SPM_SPARE_CON_SET (0x10A00000+0x644) */
#define SPM_SPARE_CON_SET_LSB               (1U << 0)       /* 32b */
/* SPM_SPARE_CON_CLR (0x10A00000+0x648) */
#define SPM_SPARE_CON_CLR_LSB               (1U << 0)       /* 32b */
/* SPM_C2K_DEBUG (0x10A00000+0x64C) */
#define SPM_C2K_DEBUG_LSB                   (1U << 0)       /* 1b */
/* SPM_DEBUG_OUT_STA (0x10A00000+0x650) */
#define DEBUG_OUT3_LSB                      (1U << 0)       /* 8b */
#define DEBUG_OUT2_LSB                      (1U << 8)       /* 8b */
#define DEBUG_OUT1_LSB                      (1U << 16)      /* 8b */
#define DEBUG_OUT0_LSB                      (1U << 24)      /* 8b */
/* SPM_CCIF_STA (0x10A00000+0x654) */
#define C2K_L1_RCCIF_WAKE_LSB               (1U << 0)       /* 1b */
#define C2K_PS_RCCIF_WAKE_LSB               (1U << 1)       /* 1b */
#define L1_C2K_RCCIF_WAKE_LSB               (1U << 2)       /* 1b */
#define PS_C2K_RCCIF_WAKE_LSB               (1U << 3)       /* 1b */
#define CCIF0_AP_EVENT_B_LSB                (1U << 4)       /* 1b */
#define CCIF0_MD_EVENT_B_LSB                (1U << 5)       /* 1b */
#define CCIF1_AP_EVENT_B_LSB                (1U << 6)       /* 1b */
#define CCIF1_MD_EVENT_B_LSB                (1U << 7)       /* 1b */
#define CCIF2_AP_EVENT_B_LSB                (1U << 8)       /* 1b */
#define CCIF2_MD_EVENT_B_LSB                (1U << 9)       /* 1b */
#define CCIF3_AP_EVENT_B_LSB                (1U << 10)      /* 1b */
#define CCIF3_MD_EVENT_B_LSB                (1U << 11)      /* 1b */
#define CCIFMD_MD1_EVENT_B_LSB              (1U << 12)      /* 1b */
#define CCIFMD_MD2_EVENT_B_LSB              (1U << 13)      /* 1b */
#define CCIF4_AP_EVENT_B_LSB                (1U << 14)      /* 1b */
#define CCIF4_MD_EVENT_B_LSB                (1U << 15)      /* 1b */
#define CCIF5_AP_EVENT_B_LSB                (1U << 16)      /* 1b */
#define CCIF5_MD_EVENT_B_LSB                (1U << 17)      /* 1b */
/* SPM_PC_TRACE_G0 (0x10A00000+0x658) */
#define SPM_PC_TRACE0_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE1_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G1 (0x10A00000+0x65C) */
#define SPM_PC_TRACE2_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE3_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G2 (0x10A00000+0x660) */
#define SPM_PC_TRACE4_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE5_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G3 (0x10A00000+0x664) */
#define SPM_PC_TRACE6_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE7_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G4 (0x10A00000+0x668) */
#define SPM_PC_TRACE8_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE9_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G5 (0x10A00000+0x66C) */
#define SPM_PC_TRACE10_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE11_LSB                  (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G6 (0x10A00000+0x670) */
#define SPM_PC_TRACE12_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE13_LSB                  (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G7 (0x10A00000+0x674) */
#define SPM_PC_TRACE14_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE15_LSB                  (1U << 16)      /* 12b */
/* SPM_PC_TRACE_CON (0x10A00000+0x678) */
#define SPM_PC_TRACE_OFFSET_LSB             (1U << 0)       /* 12b */
#define SPM_PC_TRACE_HW_EN_LSB              (1U << 31)      /* 1b */
/* PCM_WDT_LATCH_10 (0x10A00000+0x67C) */
#define PCM_WDT_LATCH_10_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_11 (0x10A00000+0x680) */
#define PCM_WDT_LATCH_11_LSB                (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_0 (0x10A00000+0x684) */
#define DCHA_GATING_LATCH_0_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_1 (0x10A00000+0x688) */
#define DCHA_GATING_LATCH_1_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_2 (0x10A00000+0x68C) */
#define DCHA_GATING_LATCH_2_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_3 (0x10A00000+0x690) */
#define DCHA_GATING_LATCH_3_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_4 (0x10A00000+0x694) */
#define DCHA_GATING_LATCH_4_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_5 (0x10A00000+0x698) */
#define DCHA_GATING_LATCH_5_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_6 (0x10A00000+0x69C) */
#define DCHA_GATING_LATCH_6_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_7 (0x10A00000+0x6A0) */
#define DCHA_GATING_LATCH_7_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_0 (0x10A00000+0x6A4) */
#define DCHB_GATING_LATCH_0_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_1 (0x10A00000+0x6A8) */
#define DCHB_GATING_LATCH_1_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_2 (0x10A00000+0x6AC) */
#define DCHB_GATING_LATCH_2_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_3 (0x10A00000+0x6B0) */
#define DCHB_GATING_LATCH_3_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_4 (0x10A00000+0x6B4) */
#define DCHB_GATING_LATCH_4_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_5 (0x10A00000+0x6B8) */
#define DCHB_GATING_LATCH_5_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_6 (0x10A00000+0x6BC) */
#define DCHB_GATING_LATCH_6_LSB             (1U << 0)       /* 32b */
/* DCHB_GATING_LATCH_7 (0x10A00000+0x6C0) */
#define DCHB_GATING_LATCH_7_LSB             (1U << 0)       /* 32b */
/* SPM_SW_RSV_6 (0x10A00000+0x6C4) */
#define SPM_SW_RSV_6_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_7 (0x10A00000+0x6C8) */
#define SPM_SW_RSV_7_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_8 (0x10A00000+0x6CC) */
#define SPM_SW_RSV_8_LSB                    (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_12 (0x10A00000+0x6D0) */
#define PCM_WDT_LATCH_12_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_13 (0x10A00000+0x6D4) */
#define PCM_WDT_LATCH_13_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_14 (0x10A00000+0x6D8) */
#define PCM_WDT_LATCH_14_LSB                (1U << 0)       /* 32b */
/* EFUSE_BOND_RX (0x10A00000+0x6DC) */
#define EFUSE_BOND_RX_DONE_LSB              (1U << 0)       /* 1b */
/* SPM_DVFS_INITIAL_MASK (0x10A00000+0x700) */
#define MD_DVFS_SCENARIO_INITIAL_MASK_LSB   (1U << 0)       /* 32b */
/* SPM_DVFS_INITIAL_MASK_SET (0x10A00000+0x704) */
#define MD_DVFS_SCENARIO_INITIAL_MASK_SET_LSB (1U << 0)       /* 32b */
/* SPM_DVFS_INITIAL_MASK_CLR (0x10A00000+0x708) */
#define MD_DVFS_SCENARIO_INITIAL_MASK_CLR_LSB (1U << 0)       /* 32b */
/* SPM_DVFS_FLOOR_MASK (0x10A00000+0x70C) */
#define SPM_DVFS_FLOOR_MASK_LSB             (1U << 0)       /* 12b */
/* SPM_DVFS_FLOOR_MASK_SET (0x10A00000+0x710) */
#define SPM_DVFS_FLOOR_MASK_SET_LSB         (1U << 0)       /* 12b */
/* SPM_DVFS_FLOOR_MASK_CLR (0x10A00000+0x714) */
#define SPM_DVFS_FLOOR_MASK_CLR_LSB         (1U << 0)       /* 12b */
/* SPM_DVFS_FLOOR_MASK2 (0x10A00000+0x718) */
#define SPM_DVFS_FLOOR_MASK2_LSB            (1U << 0)       /* 16b */
/* SPM_DVFS_FLOOR_MASK2_SET (0x10A00000+0x71C) */
#define SPM_DVFS_FLOOR_MASK2_SET_LSB        (1U << 0)       /* 16b */
/* SPM_DVFS_FLOOR_MASK2_CLR (0x10A00000+0x720) */
#define SPM_DVFS_FLOOR_MASK2_CLR_LSB        (1U << 0)       /* 16b */
/* SPM_DVFS_FLOOR_MASK3 (0x10A00000+0x724) */
#define SPM_DVFS_FLOOR_MASK3_LSB            (1U << 0)       /* 21b */
/* SPM_DVFS_FLOOR_MASK3_SET (0x10A00000+0x728) */
#define SPM_DVFS_FLOOR_MASK3_SET_LSB        (1U << 0)       /* 21b */
/* SPM_DVFS_FLOOR_MASK3_CLR (0x10A00000+0x72C) */
#define SPM_DVFS_FLOOR_MASK3_CLR_LSB        (1U << 0)       /* 21b */
/* SPM_DVFS_FLOOR_MASK4 (0x10A00000+0x730) */
#define MD_DVFS_SCENARIO_FLOOR_MASK_LSB     (1U << 0)       /* 32b */
/* SPM_DVFS_FLOOR_MASK4_SET (0x10A00000+0x734) */
#define SPM_DVFS_FLOOR_MASK4_SET_LSB        (1U << 0)       /* 32b */
/* SPM_DVFS_FLOOR_MASK4_CLR (0x10A00000+0x738) */
#define SPM_DVFS_FLOOR_MASK4_CLR_LSB        (1U << 0)       /* 32b */
/* SPM_DVFS_FORCE_MASK0 (0x10A00000+0x73C) */
#define SPM_DVFS_FORCE_MASK0_LSB            (1U << 0)       /* 7b */
/* SPM_DVFS_FORCE_MASK0_SET (0x10A00000+0x740) */
#define SPM_DVFS_FORCE_MASK0_SET_LSB        (1U << 0)       /* 7b */
/* SPM_DVFS_FORCE_MASK0_CLR (0x10A00000+0x744) */
#define SPM_DVFS_FORCE_MASK0_CLR_LSB        (1U << 0)       /* 7b */
/* SPM_DVFS_CNFG (0x10A00000+0x748) */
#define MD_DVFS_SCENARIO_SEL_LSB            (1U << 0)       /* 1b */
#define CONNSYS_SCENARIO_SEL_LSB            (1U << 1)       /* 1b */
#define RGU_DVFS_HALT_EN_LSB                (1U << 2)       /* 1b */
#define MD_SRCCLKENA_CHK_DIS_LSB            (1U << 3)       /* 1b */
#define C2K_SRCCLKENA_CHK_DIS_LSB           (1U << 4)       /* 1b */
#define MM_CK_SEL_LSB                       (1U << 8)       /* 8b */
#define SPM_DVFS_DEBUG_SEL_LSB              (1U << 16)      /* 16b */
/* SPM_AP_SCENARIO (0x10A00000+0x74C) */
#define AP_DVFS_SCENARIO_LSB                (1U << 0)       /* 32b */
/* SPM_MD_DVFS_INITIAL (0x10A00000+0x750) */
#define MD_DVFS_INITIAL_LSB                 (1U << 0)       /* 32b */
/* SPM_MD_DVFS_INITIAL2 (0x10A00000+0x754) */
#define MD_DVFS_INITIAL2_LSB                (1U << 0)       /* 32b */
/* SPM_DVFS_FORCE (0x10A00000+0x758) */
#define SPM_DVFS_FORCE_LSB                  (1U << 0)       /* 12b */
/* SPM_DVFS_FORCE_SET (0x10A00000+0x75C) */
#define SPM_DVFS_FORCE_SET_LSB              (1U << 0)       /* 12b */
/* SPM_DVFS_FORCE_CLR (0x10A00000+0x760) */
#define SPM_DVFS_FORCE_CLR_LSB              (1U << 0)       /* 12b */
/* SPM_DISP_CAM_BW_LEVEL (0x10A00000+0x764) */
#define DISP_CAM_BW_LEVEL_2_LSB             (1U << 0)       /* 10b */
#define DISP_CAM_BW_LEVEL_1_LSB             (1U << 10)      /* 10b */
#define DISP_CAM_BW_LEVEL_0_LSB             (1U << 20)      /* 10b */
/* SPM_DISP_CAM_BW (0x10A00000+0x768) */
#define CAM_BW_REG_LSB                      (1U << 0)       /* 7b */
/* SPM_MM_LARB1_BW_LEVEL (0x10A00000+0x76C) */
#define MM_LARB1_BW_LEVEL_2_LSB             (1U << 0)       /* 7b */
#define MM_LARB1_BW_LEVEL_1_LSB             (1U << 8)       /* 7b */
#define MM_LARB1_BW_LEVEL_0_LSB             (1U << 16)      /* 7b */
/* SPM_MM_LARB2_BW_LEVEL (0x10A00000+0x770) */
#define MM_LARB2_BW_LEVEL_2_LSB             (1U << 0)       /* 7b */
#define MM_LARB2_BW_LEVEL_1_LSB             (1U << 8)       /* 7b */
#define MM_LARB2_BW_LEVEL_0_LSB             (1U << 16)      /* 7b */
/* SPM_DVFS_INITIAL_SETTING (0x10A00000+0x774) */
#define DVFS_INITIAL_SETTING_LSB            (1U << 0)       /* 32b */
/* SPM_DVFS_SW_FLOOR0 (0x10A00000+0x778) */
#define DVFS_SW_FLOOR0_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR1 (0x10A00000+0x77C) */
#define DVFS_SW_FLOOR1_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR2 (0x10A00000+0x780) */
#define DVFS_SW_FLOOR2_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR3 (0x10A00000+0x784) */
#define DVFS_SW_FLOOR3_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR4 (0x10A00000+0x788) */
#define DVFS_SW_FLOOR4_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR5 (0x10A00000+0x78C) */
#define DVFS_SW_FLOOR5_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR6 (0x10A00000+0x790) */
#define DVFS_SW_FLOOR6_LSB                  (1U << 0)       /* 4b */
/* SPM_DVFS_SW_FLOOR7 (0x10A00000+0x794) */
#define DVFS_SW_FLOOR7_LSB                  (1U << 0)       /* 4b */
/* SPM_MD_DVFS_FLOOR (0x10A00000+0x798) */
#define MD_DVFS_FLOOR_LSB                   (1U << 0)       /* 32b */
/* SPM_MD_DVFS_FLOOR2 (0x10A00000+0x79C) */
#define MD_DVFS_FLOOR2_LSB                  (1U << 0)       /* 32b */
/* SPM_MD_DVFS_FLOOR3 (0x10A00000+0x7A0) */
#define MD_DVFS_FLOOR3_LSB                  (1U << 0)       /* 32b */
/* SPM_MD_DVFS_FLOOR4 (0x10A00000+0x7A4) */
#define MD_DVFS_FLOOR4_LSB                  (1U << 0)       /* 32b */
/* SPM_CONN_DVFS_FLOOR (0x10A00000+0x7A8) */
#define CONNSYS_DVFS_FLOOR_LSB              (1U << 0)       /* 24b */
#define CONNSYS_DVFS_SCENARIO_REG_LSB       (1U << 24)      /* 8b */
/* SPM_C2K_DVFS_FLOOR (0x10A00000+0x7AC) */
#define C2K_DVFS_FLOOR_LSB                  (1U << 0)       /* 24b */
/* SPM_DVFS_DEBOUNCE0 (0x10A00000+0x7B0) */
#define SPM_DVFS_DEBOUNCE_LIMIT0_LSB        (1U << 0)       /* 20b */
#define SPM_DVFS_DEBOUNCE_SEL0_LSB          (1U << 20)      /* 1b */
/* SPM_DVFS_DEBOUNCE1 (0x10A00000+0x7B4) */
#define SPM_DVFS_DEBOUNCE_LIMIT1_LSB        (1U << 0)       /* 20b */
#define SPM_DVFS_DEBOUNCE_SEL1_LSB          (1U << 20)      /* 1b */
/* SPM_DVFS_DEBOUNCE2 (0x10A00000+0x7B8) */
#define SPM_DVFS_DEBOUNCE_LIMIT2_LSB        (1U << 0)       /* 20b */
#define SPM_DVFS_DEBOUNCE_SEL2_LSB          (1U << 20)      /* 1b */
/* SPM_DVFS_DEBOUNCE3 (0x10A00000+0x7BC) */
#define SPM_DVFS_DEBOUNCE_LIMIT3_LSB        (1U << 0)       /* 20b */
#define SPM_DVFS_DEBOUNCE_SEL3_LSB          (1U << 20)      /* 1b */
/* SPM_DVFS_DEBUG (0x10A00000+0X7C0) */
#define SPM_DVFS_DEBUG_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_DEBUG1 (0x10A00000+0X7C4) */
#define SPM_DVFS_DEBUG1_LSB                 (1U << 0)       /* 32b */
/* SPM_DVFS_DEBUG2 (0x10A00000+0X7C8) */
#define SPM_DVFS_DEBUG2_LSB                 (1U << 0)       /* 32b */
/* SPM_DVFS_DEBUG3 (0x10A00000+0X7CC) */
#define SPM_DVFS_DEBUG3_LSB                 (1U << 0)       /* 32b */
/* SPM_DVFS_DEBUG4 (0x10A00000+0X7D0) */
#define SPM_DVFS_DEBUG4_LSB                 (1U << 0)       /* 32b */
/* SPM_DVFS_DEBUG5 (0x10A00000+0X7D4) */
#define SPM_DVFS_DEBUG5_LSB                 (1U << 0)       /* 32b */
/* SPM_DVFS_RSV0 (0x10A00000+0X7D8) */
#define SPM_DVFS_RSV0_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_RSV1 (0x10A00000+0X7DC) */
#define SPM_DVFS_RSV1_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_RSV2 (0x10A00000+0X7E0) */
#define SPM_DVFS_RSV2_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_RSV3 (0x10A00000+0X7E4) */
#define SPM_DVFS_RSV3_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_RSV_STA0 (0x10A00000+0X7E8) */
#define SPM_DVFS_RSV0_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_RSV_STA1 (0x10A00000+0X7EC) */
#define SPM_DVFS_RSV1_LSB                   (1U << 0)       /* 32b */
/* DVFSRC_EVENT_MASK_CON (0x10A00000+0x800) */
#define REG_DVFSRC_EVENT_MASK_B_LSB         (1U << 0)       /* 16b */
#define REG_DVFSRC_EVENT_TRIGGER_MASK_B_LSB (1U << 16)      /* 1b */
/* DVFSRC_EVENT_FORCE_ON (0x10A00000+0x804) */
#define REG_DVFSRC_EVENT_FORCE_ON_LSB       (1U << 0)       /* 16b */
#define REG_DVFSRC_EVENT_TRIGGER_FORCE_ON_LSB (1U << 16)      /* 1b */
/* DVFSRC_EVENT_SEL (0x10A00000+0x808) */
#define DVFSRC_EVENT_SEL_LSB                (1U << 0)       /* 16b */
/* SPM_DVFSRC_EVENT_STA (0x10A00000+0x80C) */
#define SPM_DVFSRC_EVENT_STA_LSB            (1U << 0)       /* 32b */
/* SPM_DVFSRC_EVENT_STA1 (0x10A00000+0x810) */
#define SPM_DVFSRC_EVENT_STA1_LSB           (1U << 0)       /* 32b */
/* SPM_DVFSRC_LEVEL (0x10A00000+0x814) */
#define SPM_DVFSRC_LEVEL_LSB                (1U << 0)       /* 16b */
/* SPM_PMSR_CON0 (0x10A00000+0x900) */
#define REG_PMSR_SIG_SEL_0_LSB              (1U << 0)       /* 5b */
#define REG_PMSR_SIG_SEL_1_LSB              (1U << 5)       /* 5b */
#define REG_PMSR_SIG_SEL_2_LSB              (1U << 10)      /* 5b */
#define REG_PMSR_SIG_SEL_3_LSB              (1U << 15)      /* 5b */
#define REG_PMSR_SIG_SEL_4_LSB              (1U << 20)      /* 5b */
#define REG_PMSR_SIG_SEL_5_LSB              (1U << 25)      /* 5b */
/* SPM_PMSR_CON1 (0x10A00000+0x904) */
#define REG_PMSR_SIG_SEL_6_LSB              (1U << 0)       /* 5b */
#define REG_PMSR_SIG_SEL_7_LSB              (1U << 5)       /* 5b */
#define REG_PMSR_SIG_SEL_8_LSB              (1U << 10)      /* 5b */
#define REG_PMSR_SIG_SEL_9_LSB              (1U << 15)      /* 5b */
#define REG_PMSR_SIG_SEL_10_LSB             (1U << 20)      /* 5b */
#define REG_PMSR_SIG_SEL_11_LSB             (1U << 25)      /* 5b */
/* SPM_PMSR_CON2 (0x10A00000+0x908) */
#define REG_PMSR_SIG_SEL_12_LSB             (1U << 0)       /* 5b */
#define REG_PMSR_SIG_SEL_13_LSB             (1U << 5)       /* 5b */
#define REG_PMSR_SIG_SEL_14_LSB             (1U << 10)      /* 5b */
#define REG_PMSR_SIG_SEL_15_LSB             (1U << 15)      /* 5b */
/* SPM_PMSR_CON3 (0x10A00000+0x90C) */
#define REG_PMSR_MON_TYPE_0_LSB             (1U << 0)       /* 2b */
#define REG_PMSR_MON_TYPE_1_LSB             (1U << 2)       /* 2b */
#define REG_PMSR_MON_TYPE_2_LSB             (1U << 4)       /* 2b */
#define REG_PMSR_MON_TYPE_3_LSB             (1U << 6)       /* 2b */
#define REG_PMSR_MON_TYPE_4_LSB             (1U << 8)       /* 2b */
#define REG_PMSR_MON_TYPE_5_LSB             (1U << 10)      /* 2b */
#define REG_PMSR_MON_TYPE_6_LSB             (1U << 12)      /* 2b */
#define REG_PMSR_MON_TYPE_7_LSB             (1U << 14)      /* 2b */
#define REG_PMSR_MON_TYPE_8_LSB             (1U << 16)      /* 2b */
#define REG_PMSR_MON_TYPE_9_LSB             (1U << 18)      /* 2b */
#define REG_PMSR_MON_TYPE_10_LSB            (1U << 20)      /* 2b */
#define REG_PMSR_MON_TYPE_11_LSB            (1U << 22)      /* 2b */
#define REG_PMSR_MON_TYPE_12_LSB            (1U << 24)      /* 2b */
#define REG_PMSR_MON_TYPE_13_LSB            (1U << 26)      /* 2b */
#define REG_PMSR_MON_TYPE_14_LSB            (1U << 28)      /* 2b */
#define REG_PMSR_MON_TYPE_15_LSB            (1U << 30)      /* 2b */
/* SPM_PMSR_LAST_STA0 (0x10A00000+0x910) */
#define LAST_PMSR_CNT_0_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA1 (0x10A00000+0x914) */
#define LAST_PMSR_CNT_1_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA2 (0x10A00000+0x918) */
#define LAST_PMSR_CNT_2_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA3 (0x10A00000+0x91C) */
#define LAST_PMSR_CNT_3_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA4 (0x10A00000+0x920) */
#define LAST_PMSR_CNT_4_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA5 (0x10A00000+0x924) */
#define LAST_PMSR_CNT_5_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA6 (0x10A00000+0x928) */
#define LAST_PMSR_CNT_6_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA7 (0x10A00000+0x92C) */
#define LAST_PMSR_CNT_7_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA8 (0x10A00000+0x930) */
#define LAST_PMSR_CNT_8_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA9 (0x10A00000+0x934) */
#define LAST_PMSR_CNT_9_LSB                 (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA10 (0x10A00000+0x938) */
#define LAST_PMSR_CNT_10_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA11 (0x10A00000+0x93C) */
#define LAST_PMSR_CNT_11_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA12 (0x10A00000+0x940) */
#define LAST_PMSR_CNT_12_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA13 (0x10A00000+0x944) */
#define LAST_PMSR_CNT_13_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA14 (0x10A00000+0x948) */
#define LAST_PMSR_CNT_14_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_LAST_STA15 (0x10A00000+0x94C) */
#define LAST_PMSR_CNT_15_LSB                (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA0 (0x10A00000+0x950) */
#define CURRENT_PMSR_CNT_0_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA1 (0x10A00000+0x954) */
#define CURRENT_PMSR_CNT_1_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA2 (0x10A00000+0x958) */
#define CURRENT_PMSR_CNT_2_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA3 (0x10A00000+0x95C) */
#define CURRENT_PMSR_CNT_3_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA4 (0x10A00000+0x960) */
#define CURRENT_PMSR_CNT_4_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA5 (0x10A00000+0x964) */
#define CURRENT_PMSR_CNT_5_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA6 (0x10A00000+0x968) */
#define CURRENT_PMSR_CNT_6_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA7 (0x10A00000+0x96C) */
#define CURRENT_PMSR_CNT_7_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA8 (0x10A00000+0x970) */
#define CURRENT_PMSR_CNT_8_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA9 (0x10A00000+0x974) */
#define CURRENT_PMSR_CNT_9_LSB              (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA10 (0x10A00000+0x978) */
#define CURRENT_PMSR_CNT_10_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA11 (0x10A00000+0x97C) */
#define CURRENT_PMSR_CNT_11_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA12 (0x10A00000+0x980) */
#define CURRENT_PMSR_CNT_12_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA13 (0x10A00000+0x984) */
#define CURRENT_PMSR_CNT_13_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA14 (0x10A00000+0x988) */
#define CURRENT_PMSR_CNT_14_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_CURR_STA15 (0x10A00000+0x98C) */
#define CURRENT_PMSR_CNT_15_LSB             (1U << 0)       /* 32b */
/* SPM_PMSR_STATE_SIG_SEL (0x10A00000+0x990) */
#define REG_PMSR_STATE_SIG_SEL_0_LSB        (1U << 0)       /* 2b */
#define REG_PMSR_STATE_SIG_SEL_1_LSB        (1U << 2)       /* 2b */
#define REG_PMSR_STATE_SIG_SEL_2_LSB        (1U << 4)       /* 2b */
#define REG_PMSR_STATE_SIG_SEL_3_LSB        (1U << 6)       /* 2b */
/* SPM_SCP_SLP (0x10A00000+0x994) */
#define SCP_SLP_REQ_LSB                     (1U << 0)       /* 1b */
#define SCP_SLP_ACK_LSB                     (1U << 1)       /* 1b */
/* SCP_VCORE_LEVEL (0x10A00000+0x998) */
#define SCP_VCORE_LEVEL_LSB                 (1U << 0)       /* 8b */
/* SCP_SPM_MAILBOX (0x10A00000+0x99C) */
#define SCP_SPM_MAILBOX_LSB                 (1U << 0)       /* 32b */
/* SPM_SCP_MAILBOX (0x10A00000+0x9A0) */
#define SPM_SCP_MAILBOX_LSB                 (1U << 0)       /* 32b */
/* SPM2SSPM_INT_SET (0x10A00000+0x10C00) */
#define SPM2SSPM_INT_SET_LSB                (1U << 0)       /* 4b */
/* SPM2SSPM_INT_CLR (0x10A00000+0x10C04) */
#define SPM2SSPM_INT_CLR_LSB                (1U << 0)       /* 4b */
/* SPM2SSPM_INT (0x10A00000+0x10C08) */
#define SPM2SSPM_INT_LSB                    (1U << 0)       /* 4b */
/* SSPM2SPM_MAILBOX_0 (0x10A00000+0x10C20) */
#define SSPM2SPM_MAILBOX_0_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_1 (0x10A00000+0x10C24) */
#define SSPM2SPM_MAILBOX_1_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_2 (0x10A00000+0x10C28) */
#define SSPM2SPM_MAILBOX_2_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_3 (0x10A00000+0x10C2C) */
#define SSPM2SPM_MAILBOX_3_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_0 (0x10A00000+0x10C30) */
#define SPM2SSPM_MAILBOX_0_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_1 (0x10A00000+0x10C34) */
#define SPM2SSPM_MAILBOX_1_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_2 (0x10A00000+0x10C38) */
#define SPM2SSPM_MAILBOX_2_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_3 (0x10A00000+0x10C3C) */
#define SPM2SSPM_MAILBOX_3_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_INT_SET (0x10A00000+0x10C40) */
#define SSPM2SPM_INT_SET_LSB                (1U << 0)       /* 4b */
/* SSPM2SPM_INT_CLR (0x10A00000+0x10C44) */
#define SSPM2SPM_INT_CLR_LSB                (1U << 0)       /* 4b */
/* SSPM2SPM_INT (0x10A00000+0x10C48) */
#define SSPM2SPM_INT_LSB                    (1U << 0)       /* 4b */
/* AHB_HADDR_EXT (0x10A00000+0x10C4C) */
#define AHB_HADDR_EXT_LSB                   (1U << 0)       /* 2b */
/* SPM_SWINT_SET (0x10A00000+0x20E00) */
#define SPM_SWINT_SET_LSB                   (1U << 0)       /* 16b */
/* SPM_SWINT_CLR (0x10A00000+0x20E04) */
#define SPM_SWINT_CLR_LSB                   (1U << 0)       /* 16b */
/* SPM_SWINT (0x10A00000+0x20E08) */
#define SPM_SWINT_LSB                       (1U << 0)       /* 16b */
/* SPM_SW_NONSERSV_0 (0x10A00000+0x20E10) */
#define SPM_SW_NONSERSV_0_LSB               (1U << 0)       /* 32b */
/* SPM_SW_NONSERSV_1 (0x10A00000+0x20E14) */
#define SPM_SW_NONSERSV_1_LSB               (1U << 0)       /* 32b */
/* SPM_SW_NONSERSV_2 (0x10A00000+0x20E18) */
#define SPM_SW_NONSERSV_2_LSB               (1U << 0)       /* 32b */
/* SPM_SW_NONSERSV_3 (0x10A00000+0x20E1C) */
#define SPM_SW_NONSERSV_3_LSB               (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_0 (0x10A00000+0x20E20) */
#define SW2SPM_MAILBOX_0_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_1 (0x10A00000+0x20E24) */
#define SW2SPM_MAILBOX_1_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_2 (0x10A00000+0x20E28) */
#define SW2SPM_MAILBOX_2_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_3 (0x10A00000+0x20E2C) */
#define SW2SPM_MAILBOX_3_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_0 (0x10A00000+0x20E30) */
#define SPM2SW_MAILBOX_0_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_1 (0x10A00000+0x20E34) */
#define SPM2SW_MAILBOX_1_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_2 (0x10A00000+0x20E38) */
#define SPM2SW_MAILBOX_2_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_3 (0x10A00000+0x20E3C) */
#define SPM2SW_MAILBOX_3_LSB                (1U << 0)       /* 32b */
/* SW2SPM_INT_SET (0x10A00000+0x20E40) */
#define SW2SPM_INT_SET_LSB                  (1U << 0)       /* 4b */
/* SW2SPM_INT_CLR (0x10A00000+0x20E44) */
#define SW2SPM_INT_CLR_LSB                  (1U << 0)       /* 4b */
/* SW2SPM_INT (0x10A00000+0x20E48) */
#define SW2SPM_INT_LSB                      (1U << 0)       /* 4b */
/* SPM_SEMA_M0 (0x10A00000+0x20E50) */
#define SPM_SEMA_M0_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M1 (0x10A00000+0x20E54) */
#define SPM_SEMA_M1_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M2 (0x10A00000+0x20E58) */
#define SPM_SEMA_M2_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M3 (0x10A00000+0x20E5C) */
#define SPM_SEMA_M3_LSB                     (1U << 0)       /* 8b */
/* CPU_HOTPLUG_SET (0x10A00000+0x20E60) */
#define CPU_HOTPLUG_SET_LSB                 (1U << 0)       /* 4b */
/* CPU_HOTPLUG_CLR (0x10A00000+0x20E64) */
#define CPU_HOTPLUG_CLR_LSB                 (1U << 0)       /* 4b */
/* CPU_HOTPLUG (0x10A00000+0x20E68) */
#define CPU_HOTPLUG_LSB                     (1U << 0)       /* 4b */
/* BYPASS_MSDC_DVFS_HALT (0x10A00000+0x20E6C) */
#define BYPASS_MSDC1_DVFS_HALT_LSB          (1U << 0)       /* 1b */
#define BYPASS_MSDC2_DVFS_HALT_LSB          (1U << 1)       /* 1b */
#define BYPASS_MSDC3_DVFS_HALT_LSB          (1U << 2)       /* 1b */
#define BYPASS_MSDC_DVFS_HALT_ALL_LSB       (1U << 3)       /* 1b */

#define SPM_PROJECT_CODE	0xb16
#define SPM_REGWR_CFG_KEY	(SPM_PROJECT_CODE << 16)

#define spm_read(addr)			__raw_readl((void __force __iomem *)(addr))
#define spm_write(addr, val)		mt_reg_sync_writel(val, addr)

#endif
