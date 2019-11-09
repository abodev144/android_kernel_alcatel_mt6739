
#ifndef __MT6337_IRQ_H
#define __MT6337_IRQ_H

#define MT6337_INT_WIDTH 16

#define MT6337_S_INT_GEN(_name)	\
	{	\
		.name =  "MT6337_"#_name,	\
	}

#define MT6337_M_INTS_GEN(adr, enA, maskA, interrupt)	\
	{	\
		.address =  adr,	\
		.en = enA,	\
		.set = (enA) + 2,	\
		.clear = (enA) + 4,	\
		.mask = maskA,	\
		.mask_set =	(maskA) + 2, \
		.mask_clear = (maskA) + 4,	\
		.interrupts = interrupt,	\
	}

enum MT6337_IRQ_ENUM {
	INT_THR_H,
	INT_THR_L,
	INT_AUDIO,
	INT_MAD,
	INT_ACCDET,
	INT_ACCDET_EINT,
	INT_ACCDET_EINT1,
	INT_ACCDET_NEGV,
	INT_PMU_THR,
	INT_LDO_VA18_OC,
	INT_LDO_VA25_OC,
	INT_LDO_VA18_PG
};

struct mt6337_interrupt_bit {
	const char *name;
	void (*callback)(void);
	void (*oc_callback)(enum MT6337_IRQ_ENUM intNo, const char *);
	unsigned int times;
};

struct mt6337_interrupts {
	unsigned int address;
	unsigned int en;
	unsigned int set;
	unsigned int clear;
	unsigned int mask;
	unsigned int mask_set;
	unsigned int mask_clear;
	struct mt6337_interrupt_bit *interrupts;
};

/* pmic irq extern variable */
#if !defined CONFIG_HAS_WAKELOCKS
extern struct wakeup_source pmicThread_lock_mt6337;
#else
extern struct wake_lock pmicThread_lock_mt6337;
#endif
extern struct mt6337_interrupts sub_interrupts[];
/* pmic irq extern functions */
extern void MT6337_EINT_SETTING(void);

extern void mt6337_enable_interrupt(enum MT6337_IRQ_ENUM intNo, unsigned int en, char *str);
extern void mt6337_mask_interrupt(enum MT6337_IRQ_ENUM intNo, char *str);
extern void mt6337_unmask_interrupt(enum MT6337_IRQ_ENUM intNo, char *str);
extern void mt6337_register_interrupt_callback(enum MT6337_IRQ_ENUM intNo, void (EINT_FUNC_PTR) (void));

#endif /*--MT6337_IRQ_H--*/
