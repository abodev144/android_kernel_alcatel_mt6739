
#ifndef __pcm_def_h__
#define __pcm_def_h__


/* --- R0 Define --- */
#define R0_SC_26M_CK_OFF                      (1U << 0)
#define R0_SC_ARM_CK_OFF                      (1U << 1)
#define R0_SC_MEM_CK_OFF                      (1U << 2)
#define R0_SC_AXI_CK_OFF                      (1U << 3)
#define R0_SC_M_CK_O_OFF                      (1U << 4)
#define R0_SC_MD26M_CK_OFF                    (1U << 5)
#define R0_BIT6                               (1U << 6)
#define R0_BIT7                               (1U << 7)
#define R0_SC_MEMPLLOUT_OFF                   (1U << 8)
#define R0_SC_ARMPLLOUT_OFF                   (1U << 9)
#define R0_SC_MAINPOUT_OFF                    (1U << 10)
#define R0_BIT11                              (1U << 11)
#define R0_BIT12                              (1U << 12)
#define R0_BIT13                              (1U << 13)
#define R0_BIT14                              (1U << 14)
#define R0_BIT15                              (1U << 15)
#define R0_BIT16                              (1U << 16)
#define R0_SC_ARMPLL_OFF                      (1U << 17)
#define R0_SC_MAINPLL_OFF                     (1U << 18)
#define R0_BIT19                              (1U << 19)
#define R0_SC_CKSQ0_OFF                       (1U << 20)
#define R0_SC_CKSQ1_OFF                       (1U << 21)
#define R0_SC_APBIAS_OFF                      (1U << 22)
#define R0_SC_ARMPLL_S_OFF                    (1U << 23)
#define R0_SC_MAINPLL_S_OFF                   (1U << 24)
#define R0_BIT25                              (1U << 25)
#define R0_SC_MEMPLL1_OFF                     (1U << 26)
#define R0_SC_MEMPLL2_OFF                     (1U << 27)
#define R0_SC_MEMPLL3_OFF                     (1U << 28)
#define R0_BIT29                              (1U << 29)
#define R0_BIT30                              (1U << 30)
#define R0_BIT31                              (1U << 31)
/* --- R7 Define --- */
#define R7_PWRAP_SLEEP_REQ                    (1U << 0)
#define R7_EMI_CLK_OFF_REQ                    (1U << 1)
#define R7_TOP_MAS_PAU_REQ                    (1U << 2)
#define R7_SPM2CKSYS_MEM_CK_MUX_UPDATE        (1U << 3)
#define R7_PCM_CK_SEL0                        (1U << 4)
#define R7_PCM_CK_SEL1                        (1U << 5)
#define R7_SPM2RC_DVS_DONE                    (1U << 6)
#define R7_FREQH_PAUSE_ARM                    (1U << 7)
#define R7_SC_26M_CK_SEL                      (1U << 8)
#define R7_PCM_TIMER_SET                      (1U << 9)
#define R7_PCM_TIMER_CLR                      (1U << 10)
#define R7_SRCVOLTEN                          (1U << 11)
#define R7_CSYSPWRUPACK                       (1U << 12)
#define R7_IM_SLEEP_ENABLE                    (1U << 13)
#define R7_SRCCLKENO_0                        (1U << 14)
#define R7_SYSRST                             (1U << 15)
#define R7_MD_APSRC_ACK                       (1U << 16)
#define R7_CPU_SYS_TIMER_CLK_SEL              (1U << 17)
#define R7_SC_AXI_DCM_DIS                     (1U << 18)
#define R7_FREQH_PAUSE_MAIN                   (1U << 19)
#define R7_FREQH_PAUSE_MEM                    (1U << 20)
#define R7_SRCCLKENO_1                        (1U << 21)
#define R7_WDT_KICK_P                         (1U << 22)
#define R7_SPM2RC_EVENT_ABORT_ACK             (1U << 23)
#define R7_WAKEUP_EXT_W_SEL                   (1U << 24)
#define R7_WAKEUP_EXT_R_SEL                   (1U << 25)
#define R7_PMIC_IRQ_REQ_EN                    (1U << 26)
#define R7_FORCE_26M_WAKE                     (1U << 27)
#define R7_FORCE_APSRC_WAKE                   (1U << 28)
#define R7_FORCE_INFRA_WAKE                   (1U << 29)
#define R7_FORCE_VRF18_WAKE                   (1U << 30)
#define R7_MCUPM_MCUSYS_REQ                   (1U << 31)
/* --- R12 Define --- */
#define R12_PCM_TIMER                         (1U << 0)
#define R12_SSPM_WDT_EVENT_B                  (1U << 1)
#define R12_KP_IRQ_B                          (1U << 2)
#define R12_APWDT_EVENT_B                     (1U << 3)
#define R12_APXGPT1_EVENT_B                   (1U << 4)
#define R12_CONN2AP_SPM_WAKEUP_B              (1U << 5)
#define R12_EINT_EVENT_B                      (1U << 6)
#define R12_CONN_WDT_IRQ_B                    (1U << 7)
#define R12_CCIF0_EVENT_B                     (1U << 8)
#define R12_LOWBATTERY_IRQ_B                  (1U << 9)
#define R12_SSPM_SPM_IRQ_B                    (1U << 10)
#define R12_26M_WAKE                          (1U << 11)
#define R12_26M_SLEEP                         (1U << 12)
#define R12_PCM_WDT_WAKEUP_B                  (1U << 13)
#define R12_USB_CDSC_B                        (1U << 14)
#define R12_USB_POWERDWN_B                    (1U << 15)
#define R12_SYS_TIMER_EVENT_B                 (1U << 16)
#define R12_EINT_EVENT_SECURE_B               (1U << 17)
#define R12_CCIF1_EVENT_B                     (1U << 18)
#define R12_UART0_IRQ_B                       (1U << 19)
#define R12_AFE_IRQ_MCU_B                     (1U << 20)
#define R12_THERM_CTRL_EVENT_B                (1U << 21)
#define R12_SYS_CIRQ_IRQ_B                    (1U << 22)
#define R12_MD2AP_PEER_EVENT_B                (1U << 23)
#define R12_CSYSPWREQ_B                       (1U << 24)
#define R12_MD1_WDT_B                         (1U << 25)
#define R12_CLDMA_EVENT_B                     (1U << 26)
#define R12_SEJ_WDT_GPT_B                     (1U << 27)
#define R12_ALL_SSPM_WAKEUP_B                 (1U << 28)
#define R12_CPU_IRQ_B                         (1U << 29)
#define R12_CPU_WFI_AND_B                     (1U << 30)
#define R12_MCUSYS_IDLE_TO_EMI_ALL_B          (1U << 31)
/* --- R12ext Define --- */
#define R12EXT_26M_WAKE                       (1U << 0)
#define R12EXT_26M_SLEEP                      (1U << 1)
#define R12EXT_INFRA_WAKE                     (1U << 2)
#define R12EXT_INFRA_SLEEP                    (1U << 3)
#define R12EXT_APSRC_WAKE                     (1U << 4)
#define R12EXT_APSRC_SLEEP                    (1U << 5)
#define R12EXT_VRF18_WAKE                     (1U << 6)
#define R12EXT_VRF18_SLEEP                    (1U << 7)
#define R12EXT_DVFS_ALL_STATE                 (1U << 8)
#define R12EXT_DVFS_LEVEL_STATE0              (1U << 9)
#define R12EXT_DVFS_LEVEL_STATE1              (1U << 10)
#define R12EXT_DVFS_LEVEL_STATE2              (1U << 11)
#define R12EXT_DDREN_WAKE                     (1U << 12)
#define R12EXT_DDREN_SLEEP                    (1U << 13)
#define R12EXT_NFC_CLK_BUF_WAKE               (1U << 14)
#define R12EXT_NFC_CLK_BUF_SLEEP              (1U << 15)
#define R12EXT_CONN_CLK_BUF_WAKE              (1U << 16)
#define R12EXT_CONN_CLK_BUF_SLEEP             (1U << 17)
#define R12EXT_MD_DVFS_ERROR_STATUS           (1U << 18)
#define R12EXT_DVFS_LEVEL_STATE3              (1U << 19)
#define R12EXT_DVFS_LEVEL_STATE4              (1U << 20)
#define R12EXT_DVFS_LEVEL_STATE5              (1U << 21)
#define R12EXT_DVFS_LEVEL_STATE6              (1U << 22)
#define R12EXT_DVFS_LEVEL_STATE7              (1U << 23)
#define R12EXT_DVFS_LEVEL_STATE8              (1U << 24)
#define R12EXT_DVFS_LEVEL_STATE9              (1U << 25)
#define R12EXT_DVFS_LEVEL_STATE_G0            (1U << 26)
#define R12EXT_DVFS_LEVEL_STATE_G1            (1U << 27)
#define R12EXT_DVFS_LEVEL_STATE_G2            (1U << 28)
#define R12EXT_DVFS_LEVEL_STATE_G3            (1U << 29)
#define R12EXT_HYBRID_DDREN_SLEEP             (1U << 30)
#define R12EXT_HYBRID_DDREN_WAKE              (1U << 31)
/* --- R13 Define --- */
#define R13_EXT_SRCCLKENI_0                   (1U << 0)
#define R13_EXT_SRCCLKENI_1                   (1U << 1)
#define R13_MD1_SRCCLKENA                     (1U << 2)
#define R13_MD1_APSRC_REQ                     (1U << 3)
#define R13_CONN_DDR_EN                       (1U << 4)
#define R13_MD2_SRCCLKENA                     (1U << 5)
#define R13_SSPM_SRCCLKENA                    (1U << 6)
#define R13_SSPM_APSRC_REQ                    (1U << 7)
#define R13_MD_STATE                          (1U << 8)
#define R13_RESERVED                          (1U << 9)
#define R13_MM_STATE                          (1U << 10)
#define R13_SSPM_STATE                        (1U << 11)
#define R13_MD_DDR_EN                         (1U << 12)
#define R13_CONN_STATE                        (1U << 13)
#define R13_CONN_SRCCLKENA                    (1U << 14)
#define R13_CONN_APSRC_REQ                    (1U << 15)
#define R13_SLEEP_EVENT_STA                   (1U << 16)
#define R13_WAKE_EVENT_STA                    (1U << 17)
#define R13_EMI_IDLE                          (1U << 18)
#define R13_CSYSPWRUPREQ                      (1U << 19)
#define R13_PWRAP_SLEEP_ACK                   (1U << 20)
#define R13_EMI_CLK_OFF_ACK                   (1U << 21)
#define R13_TOP_MAS_PAU_ACK                   (1U << 22)
#define R13_SW_DMDRAMCSHU_ACK_ALL             (1U << 23)
#define R13_RC2SPM_EVENT_ABORT_MASK_OR        (1U << 24)
#define R13_DR_SHORT_QUEUE_ACK_ALL            (1U << 25)
#define R13_INFRA_AUX_IDLE                    (1U << 26)
#define R13_DVFS_ALL_STATE                    (1U << 27)
#define R13_RC2SPM_EVENT_ABORT_OR             (1U << 28)
#define R13_DRAMC_SPCMD_APSRC_REQ             (1U << 29)
#define R13_MD1_VRF18_REQ                     (1U << 30)
#define R13_C2K_VRF18_REQ                     (1U << 31)

enum SPM_WAKE_SRC_LIST {
	WAKE_SRC_R12_PCM_TIMER = (1U << 0),
	WAKE_SRC_R12_SSPM_WDT_EVENT_B = (1U << 1),
	WAKE_SRC_R12_KP_IRQ_B = (1U << 2),
	WAKE_SRC_R12_APWDT_EVENT_B = (1U << 3),
	WAKE_SRC_R12_APXGPT1_EVENT_B = (1U << 4),
	WAKE_SRC_R12_CONN2AP_SPM_WAKEUP_B = (1U << 5),
	WAKE_SRC_R12_EINT_EVENT_B = (1U << 6),
	WAKE_SRC_R12_CONN_WDT_IRQ_B = (1U << 7),
	WAKE_SRC_R12_CCIF0_EVENT_B = (1U << 8),
	WAKE_SRC_R12_LOWBATTERY_IRQ_B = (1U << 9),
	WAKE_SRC_R12_SSPM_SPM_IRQ_B = (1U << 10),
	WAKE_SRC_R12_26M_WAKE = (1U << 11),
	WAKE_SRC_R12_26M_SLEEP = (1U << 12),
	WAKE_SRC_R12_PCM_WDT_WAKEUP_B = (1U << 13),
	WAKE_SRC_R12_USB_CDSC_B = (1U << 14),
	WAKE_SRC_R12_USB_POWERDWN_B = (1U << 15),
	WAKE_SRC_R12_SYS_TIMER_EVENT_B = (1U << 16),
	WAKE_SRC_R12_EINT_EVENT_SECURE_B = (1U << 17),
	WAKE_SRC_R12_CCIF1_EVENT_B = (1U << 18),
	WAKE_SRC_R12_UART0_IRQ_B = (1U << 19),
	WAKE_SRC_R12_AFE_IRQ_MCU_B = (1U << 20),
	WAKE_SRC_R12_THERM_CTRL_EVENT_B = (1U << 21),
	WAKE_SRC_R12_SYS_CIRQ_IRQ_B = (1U << 22),
	WAKE_SRC_R12_MD2AP_PEER_EVENT_B = (1U << 23),
	WAKE_SRC_R12_CSYSPWREQ_B = (1U << 24),
	WAKE_SRC_R12_MD1_WDT_B = (1U << 25),
	WAKE_SRC_R12_CLDMA_EVENT_B = (1U << 26),
	WAKE_SRC_R12_SEJ_WDT_GPT_B = (1U << 27),
	WAKE_SRC_R12_ALL_SSPM_WAKEUP_B = (1U << 28),
	WAKE_SRC_R12_CPU_IRQ_B = (1U << 29),
	WAKE_SRC_R12_CPU_WFI_AND_B = (1U << 30),
	WAKE_SRC_R12_MCUSYS_IDLE_TO_EMI_ALL_B = (1U << 31)
};

/* define WAKE_SRC_CONN2AP for conn use */
#define WAKE_SRC_CONN2AP WAKE_SRC_R12_CONN2AP_SPM_WAKEUP_B

#if 1
extern const char *wakesrc_str[32];
#else
static const char *wakesrc_str[32] = {
	[0] = " R12_PCM_TIMER",
	[1] = " R12_SSPM_WDT_EVENT_B",
	[2] = " R12_KP_IRQ_B",
	[3] = " R12_APWDT_EVENT_B",
	[4] = " R12_APXGPT1_EVENT_B",
	[5] = " R12_CONN2AP_SPM_WAKEUP_B",
	[6] = " R12_EINT_EVENT_B",
	[7] = " R12_CONN_WDT_IRQ_B",
	[8] = " R12_CCIF0_EVENT_B",
	[9] = " R12_LOWBATTERY_IRQ_B",
	[10] = " R12_SSPM_SPM_IRQ_B",
	[11] = " R12_26M_WAKE",
	[12] = " R12_26M_SLEEP",
	[13] = " R12_PCM_WDT_WAKEUP_B",
	[14] = " R12_USB_CDSC_B",
	[15] = " R12_USB_POWERDWN_B",
	[16] = " R12_SYS_TIMER_EVENT_B",
	[17] = " R12_EINT_EVENT_SECURE_B",
	[18] = " R12_CCIF1_EVENT_B",
	[19] = " R12_UART0_IRQ_B",
	[20] = " R12_AFE_IRQ_MCU_B",
	[21] = " R12_THERM_CTRL_EVENT_B",
	[22] = " R12_SYS_CIRQ_IRQ_B",
	[23] = " R12_MD2AP_PEER_EVENT_B",
	[24] = " R12_CSYSPWREQ_B",
	[25] = " R12_MD1_WDT_B",
	[26] = " R12_CLDMA_EVENT_B",
	[27] = " R12_SEJ_WDT_GPT_B",
	[28] = " R12_ALL_SSPM_WAKEUP_B",
	[29] = " R12_CPU_IRQ_B",
	[30] = " R12_CPU_WFI_AND_B",
	[31] = " R12_MCUSYS_IDLE_TO_EMI_ALL_B",
};
#endif

#endif /* __pcm_def_h__ */
