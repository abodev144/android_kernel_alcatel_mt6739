
#ifndef __sleep_def_h__
#define __sleep_def_h__


/* --- SPM Flag Define --- */
#define SPM_FLAG_DIS_CPU_PDN                  (1U << 0)
#define SPM_FLAG_DIS_INFRA_PDN                (1U << 1)
#define SPM_FLAG_DIS_DDRPHY_PDN               (1U << 2)
#define SPM_FLAG_DIS_VCORE_DVS                (1U << 3)
#define SPM_FLAG_DIS_VCORE_DFS                (1U << 4)
#define SPM_FLAG_DIS_DVFS_MMPLL_SET           (1U << 5)
#define SPM_FLAG_DIS_BUS_CLOCK_OFF            (1U << 6)
#define SPM_FLAG_ENABLE_ATF_ABORT             (1U << 7)
#define SPM_FLAG_KEEP_CSYSPWRUPACK_HIGH       (1U << 8)
#define SPM_FLAG_DIS_CPU_VPROC_VSRAM_PDN      (1U << 9)
#define SPM_FLAG_RUN_COMMON_SCENARIO          (1U << 10)
#define SPM_FLAG_EN_MET_DBG_FOR_VCORE_DVFS    (1U << 11)
#define SPM_FLAG_DIS_ULPOSC_OFF               (1U << 12)
#define SPM_FLAG_DIS_SYSPLL_OFF               (1U << 13)
#define SPM_FLAG_FORCE_VPROC_VSRAM_OFF        (1U << 14)
#define SPM_FLAG_DIS_SRCCLKEN_LOW             (1U << 15)
#define SPM_FLAG_DIS_SYSRAM_SLEEP             (1U << 16)
#define SPM_FLAG_DIS_SSPM_SRAM_SLEEP          (1U << 17)
#define SPM_FLAG_MCDI_FLOW                    (1U << 18)
#define SPM_FLAG_SUSPEND_OPTION               (1U << 19)
#define SPM_FLAG_DEEPIDLE_OPTION              (1U << 20)
#define SPM_FLAG_SODI_OPTION                  (1U << 21)
#define SPM_FLAG_DFS_ACTIVE                   (1U << 22)
#define SPM_FLAG_SODI_CG_MODE                 (1U << 23)
#define SPM_FLAG_DVFS_STATE_LSB               (1U << 24)
#define SPM_FLAG_ENABLE_SODI3                 (1U << 25)
#define SPM_FLAG_ENABLE_MCSODI                (1U << 26)
#define SPM_FLAG_VTCXO_STATE_LSB              (1U << 27)
#define SPM_FLAG_INFRA_STATE_LSB              (1U << 28)
#define SPM_FLAG_APSRC_STATE_LSB              (1U << 29)
#define SPM_FLAG_VRF18_STATE_LSB              (1U << 30)
#define SPM_FLAG_DDREN_STATE_LSB              (1U << 31)
/* --- SPM DEBUG Define --- */
#define SPM_DBG_DEBUG_IDX_26M_WAKE            (1U << 0)
#define SPM_DBG_DEBUG_IDX_26M_SLEEP           (1U << 1)
#define SPM_DBG_DEBUG_IDX_INFRA_WAKE          (1U << 2)
#define SPM_DBG_DEBUG_IDX_INFRA_SLEEP         (1U << 3)
#define SPM_DBG_DEBUG_IDX_APSRC_WAKE          (1U << 4)
#define SPM_DBG_DEBUG_IDX_APSRC_SLEEP         (1U << 5)
#define SPM_DBG_DEBUG_IDX_VRF18_WAKE          (1U << 6)
#define SPM_DBG_DEBUG_IDX_VRF18_SLEEP         (1U << 7)
#define SPM_DBG_DEBUG_IDX_DDREN_WAKE          (1U << 8)
#define SPM_DBG_DEBUG_IDX_DDREN_SLEEP         (1U << 9)
#define SPM_DBG_DEBUG_IDX_CPU_PDN             (1U << 12)
#define SPM_DBG_DEBUG_IDX_VCORE_DVFS_START    (1U << 16)
#define SPM_DBG_DEBUG_IDX_SSPM_PDN            (1U << 17)
#define SPM_DBG_DEBUG_IDX_CPU_PDN_ACK_CHECK_FAIL   (1U << 18)
#define SPM_DBG_DEBUG_IDX_TOP_PDN_ACK_CHECK_FAIL   (1U << 19)
#define SPM_DBG_DEBUG_IDX_MCUSYS_PDN_ACK_CHECK_FAIL   (1U << 20)
#define SPM_DBG_DEBUG_IDX_CPU_ON_ACK_CHECK_FAIL   (1U << 21)
#define SPM_DBG_DEBUG_IDX_TOP_ON_ACK_CHECK_FAIL   (1U << 22)
#define SPM_DBG_DEBUG_IDX_MCUSYS_ON_ACK_CHECK_FAIL   (1U << 23)
#define SPM_DBG_DEBUG_SSPM_IDLE_CHECK_FAIL    (1U << 24)
#define SPM_DBG_DEBUG_SMI_COMMON_IDLE_CHECK_FAIL   (1U << 25)
#define SPM_DBG_DEBUG_IDX_PMIC_IRQ_ACK_CHECK_FAIL   (1U << 26)
#define SPM_DBG_SODI1_FLAG                    (1U << 27)
#define SPM_DBG_SODI3_FLAG                    (1U << 28)
#define SPM_DBG_VCORE_DVFS_FLAG               (1U << 29)
#define SPM_DBG_DEEPIDLE_FLAG                 (1U << 30)
#define SPM_DBG_SUSPEND_FLAG                  (1U << 31)

#define is_cpu_pdn(flags)		(!((flags) & SPM_FLAG_DIS_CPU_PDN))
#define is_infra_pdn(flags)		(!((flags) & SPM_FLAG_DIS_INFRA_PDN))
#define is_ddrphy_pdn(flags)		(!((flags) & SPM_FLAG_DIS_DDRPHY_PDN))

#endif /* __sleep_def_h__ */
