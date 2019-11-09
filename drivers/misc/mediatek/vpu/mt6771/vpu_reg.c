
#include "vpu_reg.h"
#include "vpu_cmn.h"

static uint64_t vpu_base[MTK_VPU_CORE];

struct vpu_reg_desc g_vpu_reg_descs[VPU_NUM_REGS] = {
#define INS_REG(reg, offset, size) \
	{ REG_ ## reg, #reg, offset, size }
	INS_REG(CG_CON, CTRL_BASE_OFFSET + 0x00, 4),
	INS_REG(CG_SET, CTRL_BASE_OFFSET + 0x04, 4),
	INS_REG(CG_CLR, CTRL_BASE_OFFSET + 0x08, 4),
	INS_REG(SW_RST, CTRL_BASE_OFFSET + 0x0C, 4),
	INS_REG(MBIST_MODE, CTRL_BASE_OFFSET + 0x10, 4),
	INS_REG(MBIST_CTL, CTRL_BASE_OFFSET + 0x14, 4),
	INS_REG(RP_OK0, CTRL_BASE_OFFSET + 0x18, 4),
	INS_REG(RP_OK1, CTRL_BASE_OFFSET + 0x1C, 4),
	/*INS_REG(RP_OK2, CTRL_BASE_OFFSET + 0x20, 4),*/
	INS_REG(RP_FAIL0, CTRL_BASE_OFFSET + 0x24, 4),
	INS_REG(RP_FAIL1, CTRL_BASE_OFFSET + 0x28, 4),
	/*INS_REG(RP_FAIL2, CTRL_BASE_OFFSET + 0x2C, 4),*/
	INS_REG(MBIST_FAIL0, CTRL_BASE_OFFSET + 0x30, 4),
	INS_REG(MBIST_FAIL1, CTRL_BASE_OFFSET + 0x34, 4),
	/*INS_REG(MBIST_FAIL2, CTRL_BASE_OFFSET + 0x38, 4),*/
	INS_REG(MBIST_DONE, CTRL_BASE_OFFSET + 0x3C, 4),
	INS_REG(SRAM_DELSEL0, CTRL_BASE_OFFSET + 0x40, 4),
	INS_REG(SRAM_DELSEL1, CTRL_BASE_OFFSET + 0x44, 4),
	INS_REG(RP_RST, CTRL_BASE_OFFSET + 0x48, 4),
	INS_REG(RP_CON, CTRL_BASE_OFFSET + 0x4C, 4),
	INS_REG(RP_PRE_FUSE, CTRL_BASE_OFFSET + 0x50, 4),
	INS_REG(SLEEP_SRAM_CTL, CTRL_BASE_OFFSET + 0x54, 4),
	INS_REG(SPARE0, CTRL_BASE_OFFSET + 0x70, 4),
	INS_REG(SPARE1, CTRL_BASE_OFFSET + 0x74, 4),
	INS_REG(SPARE2, CTRL_BASE_OFFSET + 0x78, 4),
	INS_REG(SPARE3, CTRL_BASE_OFFSET + 0x7C, 4),
	INS_REG(EVENT_TRIG, CTRL_BASE_OFFSET + 0x104, 4),
	INS_REG(DONE_ST, CTRL_BASE_OFFSET + 0x10C, 4),
	INS_REG(CTRL, CTRL_BASE_OFFSET + 0x110, 4),
	INS_REG(XTENSA_INT, CTRL_BASE_OFFSET + 0x114, 4),
	INS_REG(CTL_XTENSA_INT, CTRL_BASE_OFFSET + 0x118, 4),
	INS_REG(CTL_XTENSA_INT_CLR, CTRL_BASE_OFFSET + 0x11C, 4),
	INS_REG(INT_MASK, CTRL_BASE_OFFSET + 0x12C, 4),
	INS_REG(AXI_DEFAULT0, CTRL_BASE_OFFSET + 0x13C, 4),
	INS_REG(AXI_DEFAULT1, CTRL_BASE_OFFSET + 0x140, 4),
	INS_REG(AXI_DEFAULT2, CTRL_BASE_OFFSET + 0x144, 4),
	INS_REG(AXI_DEFAULT3, CTRL_BASE_OFFSET + 0x148, 4),
	INS_REG(CABGEN_CTL, CTRL_BASE_OFFSET + 0x14C, 4),
	INS_REG(XTENSA_INFO00, CTRL_BASE_OFFSET + 0x150, 4),
	INS_REG(XTENSA_INFO01, CTRL_BASE_OFFSET + 0x154, 4),
	INS_REG(XTENSA_INFO02, CTRL_BASE_OFFSET + 0x158, 4),
	INS_REG(XTENSA_INFO03, CTRL_BASE_OFFSET + 0x15C, 4),
	INS_REG(XTENSA_INFO04, CTRL_BASE_OFFSET + 0x160, 4),
	INS_REG(XTENSA_INFO05, CTRL_BASE_OFFSET + 0x164, 4),
	INS_REG(XTENSA_INFO06, CTRL_BASE_OFFSET + 0x168, 4),
	INS_REG(XTENSA_INFO07, CTRL_BASE_OFFSET + 0x16C, 4),
	INS_REG(XTENSA_INFO08, CTRL_BASE_OFFSET + 0x170, 4),
	INS_REG(XTENSA_INFO09, CTRL_BASE_OFFSET + 0x174, 4),
	INS_REG(XTENSA_INFO10, CTRL_BASE_OFFSET + 0x178, 4),
	INS_REG(XTENSA_INFO11, CTRL_BASE_OFFSET + 0x17C, 4),
	INS_REG(XTENSA_INFO12, CTRL_BASE_OFFSET + 0x180, 4),
	INS_REG(XTENSA_INFO13, CTRL_BASE_OFFSET + 0x184, 4),
	INS_REG(XTENSA_INFO14, CTRL_BASE_OFFSET + 0x188, 4),
	INS_REG(XTENSA_INFO15, CTRL_BASE_OFFSET + 0x18C, 4),
	INS_REG(XTENSA_INFO16, CTRL_BASE_OFFSET + 0x190, 4),
	INS_REG(XTENSA_INFO17, CTRL_BASE_OFFSET + 0x194, 4),
	INS_REG(XTENSA_INFO18, CTRL_BASE_OFFSET + 0x198, 4),
	INS_REG(XTENSA_INFO19, CTRL_BASE_OFFSET + 0x19C, 4),
	INS_REG(XTENSA_INFO20, CTRL_BASE_OFFSET + 0x1A0, 4),
	INS_REG(XTENSA_INFO21, CTRL_BASE_OFFSET + 0x1A4, 4),
	INS_REG(XTENSA_INFO22, CTRL_BASE_OFFSET + 0x1A8, 4),
	INS_REG(XTENSA_INFO23, CTRL_BASE_OFFSET + 0x1AC, 4),
	INS_REG(XTENSA_INFO24, CTRL_BASE_OFFSET + 0x1B0, 4),
	INS_REG(XTENSA_INFO25, CTRL_BASE_OFFSET + 0x1B4, 4),
	INS_REG(XTENSA_INFO26, CTRL_BASE_OFFSET + 0x1B8, 4),
	INS_REG(XTENSA_INFO27, CTRL_BASE_OFFSET + 0x1BC, 4),
	INS_REG(XTENSA_INFO28, CTRL_BASE_OFFSET + 0x1C0, 4),
	INS_REG(XTENSA_INFO29, CTRL_BASE_OFFSET + 0x1C4, 4),
	INS_REG(XTENSA_INFO30, CTRL_BASE_OFFSET + 0x1C8, 4),
	INS_REG(XTENSA_INFO31, CTRL_BASE_OFFSET + 0x1CC, 4),
	INS_REG(DEBUG_INFO00, CTRL_BASE_OFFSET + 0x1D0, 4),
	INS_REG(DEBUG_INFO01, CTRL_BASE_OFFSET + 0x1D4, 4),
	INS_REG(DEBUG_INFO02, CTRL_BASE_OFFSET + 0x1D8, 4),
	INS_REG(DEBUG_INFO03, CTRL_BASE_OFFSET + 0x1DC, 4),
	INS_REG(DEBUG_INFO04, CTRL_BASE_OFFSET + 0x1E0, 4),
	INS_REG(DEBUG_INFO05, CTRL_BASE_OFFSET + 0x1E4, 4),
	INS_REG(DEBUG_INFO06, CTRL_BASE_OFFSET + 0x1E8, 4),
	INS_REG(DEBUG_INFO07, CTRL_BASE_OFFSET + 0x1EC, 4),
	INS_REG(XTENSA_ALTRESETVEC, CTRL_BASE_OFFSET + 0x1F8, 4),
	INS_REG(CAM_INT, CTRL_BASE_OFFSET + 0x200, 4),
	INS_REG(CAM_INT_CLR, CTRL_BASE_OFFSET + 0x204, 4)
#undef INS_REG
};


struct vpu_reg_field_desc g_vpu_reg_field_descs[VPU_NUM_REG_FIELDS] = {
#define INS_FIELD(reg, field, msb, lsb) \
	{ REG_ ## reg, FLD_ ## field, #field, msb, lsb }
	INS_FIELD(CG_CON, IPU_CG, 2, 2),
	INS_FIELD(CG_CON, AXI_M_CG, 1, 1),
	INS_FIELD(CG_CON, JTAG_CG, 0, 0),
	INS_FIELD(CG_SET, IPU_CG_SET, 2, 2),
	INS_FIELD(CG_SET, AXI_M_CG_SET, 1, 1),
	INS_FIELD(CG_SET, JTAG_CG_SET, 0, 0),
	INS_FIELD(CG_CLR, IPU_CG_CLR, 2, 2),
	INS_FIELD(CG_CLR, AXI_M_CG_CLR, 1, 1),
	INS_FIELD(CG_CLR, JTAG_CG_CLR, 0, 0),
	INS_FIELD(SW_RST, OCDHALTONRESET, 12, 12),
	INS_FIELD(SW_RST, IPU_D_RST, 8, 8),
	INS_FIELD(SW_RST, IPU_B_RST, 4, 4),
	INS_FIELD(SW_RST, IPU_APB_RST, 2, 2),
	INS_FIELD(SW_RST, AXI_M_RST, 1, 1),
	INS_FIELD(SW_RST, IPU_HW_RST, 0, 0),
	INS_FIELD(MBIST_MODE, CORE_MBIST_MODE, 8, 0),
	INS_FIELD(MBIST_CTL, CORE_MBIST_RSTB, 19, 19),
	INS_FIELD(MBIST_CTL, CORE_MBIST_BACKGROUND, 18, 16),
	INS_FIELD(MBIST_CTL, CORE_MBIST_BSEL, 15, 0),
	INS_FIELD(RP_OK0, CORE_MBIST_RP_OK_0, 31, 0),
	INS_FIELD(RP_OK1, CORE_MBIST_RP_OK_1, 9, 0),
	INS_FIELD(RP_FAIL0, CORE_MBIST_RP_FAIL_0, 31, 0),
	INS_FIELD(RP_FAIL1, CORE_MBIST_RP_FAIL_1, 9, 0),
	INS_FIELD(MBIST_FAIL0, CORE_MBIST_FAIL_0, 31, 0),
	INS_FIELD(MBIST_FAIL1, CORE_MBIST_FAIL_1, 9, 0),
	INS_FIELD(MBIST_DONE, CORE_MBIST_DONE, 8, 0),
	INS_FIELD(SRAM_DELSEL0, CORE_SRAM_DELSEL_0, 31, 0),
	INS_FIELD(SRAM_DELSEL1, CORE_SRAM_DELSEL_1, 27, 0),
	INS_FIELD(RP_RST, CORE_RP_RSTB, 0, 0),
	INS_FIELD(RP_CON, CORE_RP_CON, 1, 0),
	INS_FIELD(RP_PRE_FUSE, CORE_RP_PRE_FUSE, 18, 0),
	INS_FIELD(SLEEP_SRAM_CTL, CORE_SRAM_SLEEP_W, 6, 5),
	INS_FIELD(SLEEP_SRAM_CTL, CORE_SRAM_SLEEP_R, 4, 3),
	INS_FIELD(SLEEP_SRAM_CTL, CORE_SRAM_SLEEP_INV, 2, 2),
	INS_FIELD(SLEEP_SRAM_CTL, CORE_SRAM_SLEEP_TEST, 1, 1),
	INS_FIELD(SLEEP_SRAM_CTL, CORE_SRAM_HDEN, 0, 0),
	INS_FIELD(SPARE0, CORE_SPARE0, 31, 0),
	INS_FIELD(SPARE1, CORE_SPARE1, 31, 0),
	INS_FIELD(SPARE2, CORE_SPARE2, 31, 0),
	INS_FIELD(SPARE3, CORE_SPARE3, 31, 0),
	INS_FIELD(DONE_ST, PWAITMODE, 7, 7),
	INS_FIELD(DONE_ST, BREAK_IN_ACK, 6, 6),
	INS_FIELD(DONE_ST, BREAK_OUT, 5, 5),
	INS_FIELD(DONE_ST, XOCDMODE, 4, 4),
	INS_FIELD(CTRL, P_DEBUG_ENABLE, 31, 31),
	INS_FIELD(CTRL, STROBE, 30, 30),
	INS_FIELD(CTRL, SRAM_CONFIGURE, 29, 27),
	INS_FIELD(CTRL, PBCLK_ENABLE, 26, 26),
	INS_FIELD(CTRL, RUN_STALL, 23, 23),
	INS_FIELD(CTRL, TRIG_IN_DMA, 22, 22),
	INS_FIELD(CTRL, BREAK_OUT_ACK, 21, 21),
	INS_FIELD(CTRL, BREAK_IN, 20, 20),
	INS_FIELD(CTRL, STATE_VECTOR_SELECT, 19, 19),
	INS_FIELD(CTRL, TIE2APB_GATED_ENABLE, 18, 18),
	INS_FIELD(CTRL, PIF_GATED, 17, 17),
	INS_FIELD(CTRL, PRID, 16, 1),
	INS_FIELD(CTRL, NMI, 0, 0),
	INS_FIELD(XTENSA_INT, APMCU_INT, 0, 0),
	INS_FIELD(CTL_XTENSA_INT, CTL_INT, 11, 0),
	INS_FIELD(CTL_XTENSA_INT_CLR, CTL_INT_CLR, 11, 0),
	INS_FIELD(INT_MASK, IPU2CAM_INT_MASK, 17, 17),
	INS_FIELD(INT_MASK, APMCU_INT_MASK, 16, 16),
	INS_FIELD(INT_MASK, CTL_INT_MASK, 15, 0),
	INS_FIELD(AXI_DEFAULT0, ARUSER_8_4, 27, 23),
	INS_FIELD(AXI_DEFAULT0, AWUSER_8_4, 22, 18),
	INS_FIELD(AXI_DEFAULT0, ARDOMAIN, 17, 13),
	INS_FIELD(AXI_DEFAULT0, ARFLUSH, 12, 11),
	INS_FIELD(AXI_DEFAULT0, ARULTRA, 10, 9),
	INS_FIELD(AXI_DEFAULT0, AWDOMAIN, 8, 4),
	INS_FIELD(AXI_DEFAULT0, AWFLUSH, 3, 2),
	INS_FIELD(AXI_DEFAULT0, AWULTRA, 1, 0),
	INS_FIELD(AXI_DEFAULT1, AWULTRA_IDMA, 27, 26),
	INS_FIELD(AXI_DEFAULT1, AWFLUSH_IDMA, 25, 24),
	INS_FIELD(AXI_DEFAULT1, AWDOMAIN_IDMA, 23, 19),
	INS_FIELD(AXI_DEFAULT1, ARULTRA_IDMA, 18, 17),
	INS_FIELD(AXI_DEFAULT1, ARFLUSH_IDMA, 16, 15),
	INS_FIELD(AXI_DEFAULT1, ARDOMAIN_IDMA, 14, 10),
	INS_FIELD(AXI_DEFAULT1, AWUSER_IDMA_8_4, 9, 5),
	INS_FIELD(AXI_DEFAULT1, ARUSER_IDMA_8_4, 4, 0),
	INS_FIELD(AXI_DEFAULT2, SPIDEN, 3, 3),
	INS_FIELD(AXI_DEFAULT2, SPNIDEN, 2, 2),
	INS_FIELD(AXI_DEFAULT2, NIDEN, 1, 1),
	INS_FIELD(AXI_DEFAULT2, DBG_EN, 0, 0),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_O_ARTHRES, 22, 21),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_O_AWTHRES, 20, 19),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_MI0_OUTSTANDING_EXTEND_EN, 18, 18),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_MI0_QOS_ON, 17, 17),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_CG_DIS, 16, 16),
	INS_FIELD(CABGEN_CTL, CABGEN2TO1_SLICE_PCLK_EN, 0, 0),
	INS_FIELD(XTENSA_INFO00, XTENSA_INFO00, 31, 0),
	INS_FIELD(XTENSA_INFO01, XTENSA_INFO01, 31, 0),
	INS_FIELD(XTENSA_INFO02, XTENSA_INFO02, 31, 0),
	INS_FIELD(XTENSA_INFO03, XTENSA_INFO03, 31, 0),
	INS_FIELD(XTENSA_INFO04, XTENSA_INFO04, 31, 0),
	INS_FIELD(XTENSA_INFO05, XTENSA_INFO05, 31, 0),
	INS_FIELD(XTENSA_INFO06, XTENSA_INFO06, 31, 0),
	INS_FIELD(XTENSA_INFO07, XTENSA_INFO07, 31, 0),
	INS_FIELD(XTENSA_INFO08, XTENSA_INFO08, 31, 0),
	INS_FIELD(XTENSA_INFO09, XTENSA_INFO09, 31, 0),
	INS_FIELD(XTENSA_INFO10, XTENSA_INFO10, 31, 0),
	INS_FIELD(XTENSA_INFO11, XTENSA_INFO11, 31, 0),
	INS_FIELD(XTENSA_INFO12, XTENSA_INFO12, 31, 0),
	INS_FIELD(XTENSA_INFO13, XTENSA_INFO13, 31, 0),
	INS_FIELD(XTENSA_INFO14, XTENSA_INFO14, 31, 0),
	INS_FIELD(XTENSA_INFO15, XTENSA_INFO15, 31, 0),
	INS_FIELD(XTENSA_INFO16, XTENSA_INFO16, 31, 0),
	INS_FIELD(XTENSA_INFO17, XTENSA_INFO17, 31, 0),
	INS_FIELD(XTENSA_INFO18, XTENSA_INFO18, 31, 0),
	INS_FIELD(XTENSA_INFO19, XTENSA_INFO19, 31, 0),
	INS_FIELD(XTENSA_INFO20, XTENSA_INFO20, 31, 0),
	INS_FIELD(XTENSA_INFO21, XTENSA_INFO21, 31, 0),
	INS_FIELD(XTENSA_INFO22, XTENSA_INFO22, 31, 0),
	INS_FIELD(XTENSA_INFO23, XTENSA_INFO23, 31, 0),
	INS_FIELD(XTENSA_INFO24, XTENSA_INFO24, 31, 0),
	INS_FIELD(XTENSA_INFO25, XTENSA_INFO25, 31, 0),
	INS_FIELD(XTENSA_INFO26, XTENSA_INFO26, 31, 0),
	INS_FIELD(XTENSA_INFO27, XTENSA_INFO27, 31, 0),
	INS_FIELD(XTENSA_INFO28, XTENSA_INFO28, 31, 0),
	INS_FIELD(XTENSA_INFO29, XTENSA_INFO29, 31, 0),
	INS_FIELD(XTENSA_INFO30, XTENSA_INFO30, 31, 0),
	INS_FIELD(XTENSA_INFO31, XTENSA_INFO31, 31, 0),
	INS_FIELD(DEBUG_INFO00, P_DEBUG_DATA, 31, 0),
	INS_FIELD(DEBUG_INFO01, IPU_INFO_01, 31, 24),
	INS_FIELD(DEBUG_INFO01, P_DEBUG_STATUS, 23, 16),
	INS_FIELD(DEBUG_INFO01, P_DEBUG_INB_PIF, 7, 0),
	INS_FIELD(DEBUG_INFO02, P_DEBUG_INST, 31, 0),
	INS_FIELD(DEBUG_INFO03, P_DEBUG_LS0_STAT, 31, 0),
	INS_FIELD(DEBUG_INFO04, P_DEBUG_LS1_STAT, 31, 0),
	INS_FIELD(DEBUG_INFO05, P_DEBUG_PC, 31, 0),
	INS_FIELD(DEBUG_INFO06, IPU_INFO_06, 31, 24),
	INS_FIELD(DEBUG_INFO06, PSLVERR, 20, 20),
	INS_FIELD(DEBUG_INFO06, IRAM0_LOAD_STORE, 16, 16),
	INS_FIELD(DEBUG_INFO06, P_FAULT_INFO_VALID, 12, 12),
	INS_FIELD(DEBUG_INFO06, P_FATAL_ERROR, 8, 8),
	INS_FIELD(DEBUG_INFO06, DOUBLE_EXCEPTION_ERROR, 4, 4),
	INS_FIELD(DEBUG_INFO06, TRIG_OUT_IDMA, 0, 0),
	INS_FIELD(DEBUG_INFO07, P_FAULT_INFO, 31, 0),
	INS_FIELD(XTENSA_ALTRESETVEC, CORE_XTENSA_ALTRESETVEC, 31, 0),
	INS_FIELD(CAM_INT, IPU2CAM_INT, 0, 0),
	INS_FIELD(CAM_INT_CLR, IPU2CAM_INT_WRITE_ONE_CLEAR, 0, 0)
#undef INS_FIELD
};


int vpu_init_reg(int core, struct vpu_device *device)
{
	unsigned int reg_value;
	unsigned int reg_value2;

	reg_value = 0x0;
	reg_value2 = 0x0;

	LOG_DBG("vpu_init_reg core(%d)\n", core);
	vpu_base[core] = device->vpu_base[core];
	LOG_DBG("vpu_init_reg core(%d) - flag\n", core);

#ifdef MTK_VPU_FPGA_PORTING
	/* enable clock */
	LOG_DBG("vpu_init_reg vpu_conn_base value(0x%x)\n",
		vpu_read_reg32(device->vpu_syscfg_base, 0x0));
	LOG_DBG("vpu_init_reg vpu_vcore_base value(0x%x)\n",
		vpu_read_reg32(device->vpu_vcorecfg_base, 0x0));

	if (core == 0) {
		vpu_write_reg32(device->vpu_vcorecfg_base, 0x8, 0xffffffff);
		vpu_write_reg32(device->vpu_vcorecfg_base, 0xC, 0xffffffff);
		vpu_write_reg32(device->vpu_vcorecfg_base, 0xC, 0x0);

		vpu_write_reg32(device->vpu_syscfg_base, 0x8, 0xffffffff);
		vpu_write_reg32(device->vpu_syscfg_base, 0xC, 0xfffffffe);
		vpu_write_reg32(device->vpu_syscfg_base, 0xC, 0x0);

		LOG_DBG("after.. vpu_init_reg vpu_conn_base value(0x%x)\n",
			vpu_read_reg32(device->vpu_syscfg_base, 0x0));
		LOG_DBG("after.. vpu_init_reg vpu_vcore_base value(0x%x)\n",
			vpu_read_reg32(device->vpu_vcorecfg_base, 0x0));
	}
	vpu_write_reg32(device->vpu_base[core], CTRL_BASE_OFFSET + 0x8, 0xffffffff);

	LOG_DBG("after vpu_init_reg vpu_conn_base value(0x%x)\n",
		vpu_read_reg32(device->vpu_syscfg_base, 0x0));
	LOG_DBG("after vpu_init_reg vpu_vcore_base value(0x%x)\n",
		vpu_read_reg32(device->vpu_vcorecfg_base, 0x0));

#endif
	return 0;
}

uint32_t vpu_read_field(int core, enum vpu_reg_field f)
{
	struct vpu_reg_desc *reg;
	struct vpu_reg_field_desc *field;
	uint32_t reg_val;
	uint8_t msb, lsb;

	field = &g_vpu_reg_field_descs[f];
	reg = &g_vpu_reg_descs[field->reg];
	reg_val = vpu_read_reg32(vpu_base[core], reg->offset);
	msb = field->msb;
	lsb = field->lsb;

	if (msb - lsb > 30)
		return reg_val;
	return (reg_val & (((1L << (msb - lsb + 1)) - 1) << lsb)) >> lsb;
}


void vpu_write_field(int core, enum vpu_reg_field f, uint32_t v)
{
	struct vpu_reg_desc *reg;
	struct vpu_reg_field_desc *field;
	uint8_t msb, lsb;
	uint32_t temp;

	field = &g_vpu_reg_field_descs[f];
	reg = &g_vpu_reg_descs[field->reg];
	msb = field->msb;
	lsb = field->lsb;

	temp = F_REG(vpu_base[core], reg->offset);
	temp &= ~F_MSK(msb, lsb);
	temp |= F_VAL(v, msb, lsb);
	F_REG(vpu_base[core], reg->offset) = temp;
}
