
#ifndef __SITUATION_H__
#define __SITUATION_H__


#include <linux/wakelock.h>
#include <linux/interrupt.h>
#include <linux/platform_device.h>
#include <linux/input.h>
#include <linux/workqueue.h>
#include <linux/slab.h>
#include <linux/module.h>
#include <hwmsensor.h>
#include <linux/poll.h>
#include "sensor_attr.h"
#include "sensor_event.h"

#define SITUATION_TAG		            "<SITUATION> "
#define SITUATION_FUN(f)		        pr_debug(SITUATION_TAG"%s\n", __func__)
#define SITUATION_PR_ERR(fmt, args...)		pr_err(SITUATION_TAG"%s %d : "fmt, __func__, __LINE__, ##args)
#define SITUATION_LOG(fmt, args...)		pr_debug(SITUATION_TAG fmt, ##args)
#define SITUATION_VER(fmt, args...)		pr_debug(SITUATION_TAG"%s: "fmt, __func__, ##args)

typedef enum {
	inpocket = 0,
	stationary,
	wake_gesture,
	pickup_gesture,
	glance_gesture,
	answer_call,
	motion_detect,
	device_orientation,
	tilt_detector,
	flat,
	max_situation_support,
} situation_index_table;

struct situation_control_path {
	int (*open_report_data)(int open);
	int (*batch)(int flag, int64_t samplingPeriodNs, int64_t maxBatchReportLatencyNs);
	int (*flush)(void);
	bool is_support_wake_lock;
	bool is_support_batch;
};

struct situation_data_path {
	int (*get_data)(int *value, int *status);
};

struct situation_init_info {
	char *name;
	int (*init)(void);
	int (*uninit)(void);
};

struct situation_data_control_context {
	struct situation_control_path situation_ctl;
	struct situation_data_path situation_data;
	bool is_active_data;
	bool is_active_nodata;
	bool is_batch_enable;
	int power;
	int enable;
	int64_t delay_ns;
	int64_t latency_ns;
};

struct situation_context {
	struct sensor_attr_t mdev;
	struct mutex situation_op_mutex;
	struct situation_data_control_context ctl_context[max_situation_support];
	struct wake_lock wake_lock[max_situation_support];
	char *wake_lock_name[max_situation_support];
};

extern int situation_data_report(int handle, uint32_t one_sample_data);
extern int situation_notify(int handle);
extern int situation_flush_report(int handle);
extern int situation_driver_add(struct situation_init_info *obj, int handle);
extern int situation_register_control_path(struct situation_control_path *ctl, int handle);
extern int situation_register_data_path(struct situation_data_path *data, int handle);

#endif
