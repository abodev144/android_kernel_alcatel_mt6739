
#ifndef UNIFIED_POWER_INTERNAL_H
#define UNIFIED_POWER_INTERNAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/spinlock.h>
#include <linux/rcupdate.h>
#include <linux/slab.h>
#include <linux/errno.h>
#include <linux/export.h>
#include <linux/module.h>
#include <linux/ktime.h>

#define UPOWER_ENABLE (1)

/* #define EARLY_PORTING_SPOWER */ /* will not get leakage from leakage driver */
/* #define UPOWER_UT */
/* #define UPOWER_PROFILE_API_TIME */
#define UPOWER_RCU_LOCK

/* for unified power driver internal use */
#define UPOWER_LOG (1)
#define UPOWER_TAG "[UPOWER]"

#if UPOWER_LOG
	#define upower_error(fmt, args...) pr_debug(UPOWER_TAG fmt, ##args)
	#define upower_debug(fmt, args...) pr_debug(UPOWER_TAG fmt, ##args)
#else
	#define upower_error(fmt, args...)
	#define upower_debug(fmt, args...)
#endif

#undef  BIT
#define BIT(bit)	(1U << (bit))

#define MSB(range)	(1 ? range)
#define LSB(range)	(0 ? range)
#define BITMASK(r)	\
	(((unsigned) -1 >> (31 - MSB(r))) & ~((1U << LSB(r)) - 1))

/* BITS(MSB:LSB, value) => Set value at MSB:LSB  */
#define BITS(r, val)	((val << LSB(r)) & BITMASK(r))

#define GET_BITS_VAL(_bits_, _val_)   (((_val_) & (BITMASK(_bits_))) >> ((0) ? _bits_))

#ifdef UPOWER_RCU_LOCK
extern void upower_read_lock(void);
extern void upower_read_unlock(void);
#endif

#ifdef UPOWER_PROFILE_API_TIME
enum {
	GET_PWR,
	GET_TBL_PTR,
	UPDATE_TBL_PTR,

	TEST_NUM
};
extern void upower_get_start_time_us(unsigned int type);
extern void upower_get_diff_time_us(unsigned int type);
extern void print_diff_results(unsigned int type);
#endif

#ifdef __cplusplus
}
#endif

#endif
