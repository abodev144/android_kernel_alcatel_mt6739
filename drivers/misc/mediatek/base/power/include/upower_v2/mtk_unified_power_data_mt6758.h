
/* Ver: PTPOFF_WAT0_85C_20170425 */
/* MT6758_FY = M17T_WAT0_ptpoff_85C (FY) */
#ifndef MTK_UNIFIED_POWER_DATA_MT6758_H
#define MTK_UNIFIED_POWER_DATA_MT6758_H

/* MT6758_FY = M17T_WAT0_ptpoff_85C (FY) */
struct upower_tbl upower_tbl_ll_FY = {
	.row = {
		{.cap = 148, .volt = 60000, .dyn_pwr = 9842, .lkg_pwr = {5539, 5539, 5539, 5539, 5539, 5539} },
		{.cap = 228, .volt = 65600, .dyn_pwr = 17390, .lkg_pwr = {6026, 6026, 6026, 6026, 6026, 6026} },
		{.cap = 290, .volt = 70000, .dyn_pwr = 25311, .lkg_pwr = {6598, 6598, 6598, 6598, 6598, 6598} },
		{.cap = 341, .volt = 73100, .dyn_pwr = 32525, .lkg_pwr = {7005, 7005, 7005, 7005, 7005, 7005} },
		{.cap = 387, .volt = 76200, .dyn_pwr = 40114, .lkg_pwr = {7406, 7406, 7406, 7406, 7406, 7406} },
		{.cap = 444, .volt = 80000, .dyn_pwr = 50800, .lkg_pwr = {7929, 7929, 7929, 7929, 7929, 7929} },
		{.cap = 501, .volt = 83700, .dyn_pwr = 62828, .lkg_pwr = {8445, 8445, 8445, 8445, 8445, 8445} },
		{.cap = 546, .volt = 86900, .dyn_pwr = 73967, .lkg_pwr = {8901, 8901, 8901, 8901, 8901, 8901} },
		{.cap = 586, .volt = 90000, .dyn_pwr = 85213, .lkg_pwr = {9368, 9368, 9368, 9368, 9368, 9368} },
		{.cap = 620, .volt = 93100, .dyn_pwr = 96590, .lkg_pwr = {9865, 9865, 9865, 9865, 9865, 9865} },
		{.cap = 654, .volt = 96200, .dyn_pwr = 108905, .lkg_pwr = {10383, 10383, 10383, 10383, 10383, 10383} },
		{.cap = 677, .volt = 98700, .dyn_pwr = 118709, .lkg_pwr = {10820, 10820, 10820, 10820, 10820, 10820} },
		{.cap = 711, .volt = 101900, .dyn_pwr = 133022, .lkg_pwr = {11382, 11382, 11382, 11382, 11382, 11382} },
		{.cap = 722, .volt = 105000, .dyn_pwr = 143609, .lkg_pwr = {11930, 11930, 11930, 11930, 11930, 11930} },
		{.cap = 734, .volt = 108700, .dyn_pwr = 156465, .lkg_pwr = {12581, 12581, 12581, 12581, 12581, 12581} },
		{.cap = 740, .volt = 111900, .dyn_pwr = 167214, .lkg_pwr = {13145, 13145, 13145, 13145, 13145, 13145} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {5539} },
		{{0}, {5539} },
		{{0}, {5539} },
		{{0}, {5539} },
		{{0}, {5539} },
		{{0}, {5539} },
	},
};

struct upower_tbl upower_tbl_cluster_ll_FY = {
	.row = {
		{.cap = 148, .volt = 60000, .dyn_pwr = 1483, .lkg_pwr = {8518, 8518, 8518, 8518, 8518, 8518} },
		{.cap = 228, .volt = 65600, .dyn_pwr = 2620, .lkg_pwr = {8822, 8822, 8822, 8822, 8822, 8822} },
		{.cap = 290, .volt = 70000, .dyn_pwr = 3814, .lkg_pwr = {9114, 9114, 9114, 9114, 9114, 9114} },
		{.cap = 341, .volt = 73100, .dyn_pwr = 4901, .lkg_pwr = {9452, 9452, 9452, 9452, 9452, 9452} },
		{.cap = 387, .volt = 76200, .dyn_pwr = 6045, .lkg_pwr = {9887, 9887, 9887, 9887, 9887, 9887} },
		{.cap = 444, .volt = 80000, .dyn_pwr = 7655, .lkg_pwr = {10511, 10511, 10511, 10511, 10511, 10511} },
		{.cap = 501, .volt = 83700, .dyn_pwr = 9467, .lkg_pwr = {11193, 11193, 11193, 11193, 11193, 11193} },
		{.cap = 546, .volt = 86900, .dyn_pwr = 11146, .lkg_pwr = {11849, 11849, 11849, 11849, 11849, 11849} },
		{.cap = 586, .volt = 90000, .dyn_pwr = 12840, .lkg_pwr = {12628, 12628, 12628, 12628, 12628, 12628} },
		{.cap = 620, .volt = 93100, .dyn_pwr = 14555, .lkg_pwr = {13439, 13439, 13439, 13439, 13439, 13439} },
		{.cap = 654, .volt = 96200, .dyn_pwr = 16410, .lkg_pwr = {14273, 14273, 14273, 14273, 14273, 14273} },
		{.cap = 677, .volt = 98700, .dyn_pwr = 17888, .lkg_pwr = {15102, 15102, 15102, 15102, 15102, 15102} },
		{.cap = 711, .volt = 101900, .dyn_pwr = 20044, .lkg_pwr = {16209, 16209, 16209, 16209, 16209, 16209} },
		{.cap = 722, .volt = 105000, .dyn_pwr = 21640, .lkg_pwr = {17446, 17446, 17446, 17446, 17446, 17446} },
		{.cap = 734, .volt = 108700, .dyn_pwr = 23577, .lkg_pwr = {19254, 19254, 19254, 19254, 19254, 19254} },
		{.cap = 740, .volt = 111900, .dyn_pwr = 25197, .lkg_pwr = {21055, 21055, 21055, 21055, 21055, 21055} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {8518} },
		{{0}, {8518} },
		{{0}, {8518} },
		{{0}, {8518} },
		{{0}, {8518} },
		{{0}, {8518} },
	},
};

struct upower_tbl upower_tbl_l_FY = {
	.row = {
		{.cap = 228, .volt = 60000, .dyn_pwr = 18253, .lkg_pwr = {27567, 27567, 27567, 27567, 27567, 27567} },
		{.cap = 336, .volt = 65600, .dyn_pwr = 30921, .lkg_pwr = {30379, 30379, 30379, 30379, 30379, 30379} },
		{.cap = 421, .volt = 70000, .dyn_pwr = 44271, .lkg_pwr = {33361, 33361, 33361, 33361, 33361, 33361} },
		{.cap = 495, .volt = 73100, .dyn_pwr = 56852, .lkg_pwr = {35557, 35557, 35557, 35557, 35557, 35557} },
		{.cap = 563, .volt = 76200, .dyn_pwr = 70401, .lkg_pwr = {37812, 37812, 37812, 37812, 37812, 37812} },
		{.cap = 643, .volt = 80000, .dyn_pwr = 88717, .lkg_pwr = {40726, 40726, 40726, 40726, 40726, 40726} },
		{.cap = 717, .volt = 83700, .dyn_pwr = 108444, .lkg_pwr = {43669, 43669, 43669, 43669, 43669, 43669} },
		{.cap = 779, .volt = 86900, .dyn_pwr = 127247, .lkg_pwr = {46289, 46289, 46289, 46289, 46289, 46289} },
		{.cap = 842, .volt = 90000, .dyn_pwr = 147600, .lkg_pwr = {48938, 48938, 48938, 48938, 48938, 48938} },
		{.cap = 870, .volt = 93100, .dyn_pwr = 163439, .lkg_pwr = {51688, 51688, 51688, 51688, 51688, 51688} },
		{.cap = 899, .volt = 96200, .dyn_pwr = 180372, .lkg_pwr = {54509, 54509, 54509, 54509, 54509, 54509} },
		{.cap = 927, .volt = 98700, .dyn_pwr = 196013, .lkg_pwr = {56906, 56906, 56906, 56906, 56906, 56906} },
		{.cap = 956, .volt = 101900, .dyn_pwr = 215518, .lkg_pwr = {60014, 60014, 60014, 60014, 60014, 60014} },
		{.cap = 978, .volt = 105000, .dyn_pwr = 234458, .lkg_pwr = {63160, 63160, 63160, 63160, 63160, 63160} },
	{.cap = 1001, .volt = 108700, .dyn_pwr = 257336, .lkg_pwr = {67031, 67031, 67031, 67031, 67031, 67031} },
	{.cap = 1024, .volt = 111900, .dyn_pwr = 279101, .lkg_pwr = {70461, 70461, 70461, 70461, 70461, 70461} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {27567} },
		{{0}, {27567} },
		{{0}, {27567} },
		{{0}, {27567} },
		{{0}, {27567} },
		{{0}, {27567} },
	},
};

struct upower_tbl upower_tbl_cluster_l_FY = {
	.row = {
		{.cap = 228, .volt = 60000, .dyn_pwr = 3526, .lkg_pwr = {29357, 29357, 29357, 29357, 29357, 29357} },
		{.cap = 336, .volt = 65600, .dyn_pwr = 5973, .lkg_pwr = {31499, 31499, 31499, 31499, 31499, 31499} },
		{.cap = 421, .volt = 70000, .dyn_pwr = 8552, .lkg_pwr = {33943, 33943, 33943, 33943, 33943, 33943} },
		{.cap = 495, .volt = 73100, .dyn_pwr = 10983, .lkg_pwr = {35767, 35767, 35767, 35767, 35767, 35767} },
		{.cap = 563, .volt = 76200, .dyn_pwr = 13600, .lkg_pwr = {37641, 37641, 37641, 37641, 37641, 37641} },
		{.cap = 643, .volt = 80000, .dyn_pwr = 17139, .lkg_pwr = {40176, 40176, 40176, 40176, 40176, 40176} },
		{.cap = 717, .volt = 83700, .dyn_pwr = 20949, .lkg_pwr = {42851, 42851, 42851, 42851, 42851, 42851} },
		{.cap = 779, .volt = 86900, .dyn_pwr = 24582, .lkg_pwr = {45291, 45291, 45291, 45291, 45291, 45291} },
		{.cap = 842, .volt = 90000, .dyn_pwr = 28514, .lkg_pwr = {47789, 47789, 47789, 47789, 47789, 47789} },
		{.cap = 870, .volt = 93100, .dyn_pwr = 31573, .lkg_pwr = {50443, 50443, 50443, 50443, 50443, 50443} },
		{.cap = 899, .volt = 96200, .dyn_pwr = 34845, .lkg_pwr = {53211, 53211, 53211, 53211, 53211, 53211} },
		{.cap = 927, .volt = 98700, .dyn_pwr = 37866, .lkg_pwr = {55737, 55737, 55737, 55737, 55737, 55737} },
		{.cap = 956, .volt = 101900, .dyn_pwr = 41634, .lkg_pwr = {59063, 59063, 59063, 59063, 59063, 59063} },
		{.cap = 978, .volt = 105000, .dyn_pwr = 45293, .lkg_pwr = {62601, 62601, 62601, 62601, 62601, 62601} },
		{.cap = 1001, .volt = 108700, .dyn_pwr = 49713, .lkg_pwr = {67194, 67194, 67194, 67194, 67194, 67194} },
		{.cap = 1024, .volt = 111900, .dyn_pwr = 53917, .lkg_pwr = {71421, 71421, 71421, 71421, 71421, 71421} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {29357} },
		{{0}, {29357} },
		{{0}, {29357} },
		{{0}, {29357} },
		{{0}, {29357} },
		{{0}, {29357} },
	},
};

struct upower_tbl upower_tbl_cci_FY = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 1478, .lkg_pwr = {5269, 5269, 5269, 5269, 5269, 5269} },
		{.cap = 0, .volt = 65600, .dyn_pwr = 2829, .lkg_pwr = {5662, 5662, 5662, 5662, 5662, 5662} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 4133, .lkg_pwr = {6110, 6110, 6110, 6110, 6110, 6110} },
		{.cap = 0, .volt = 73100, .dyn_pwr = 5220, .lkg_pwr = {6457, 6457, 6457, 6457, 6457, 6457} },
		{.cap = 0, .volt = 76200, .dyn_pwr = 6449, .lkg_pwr = {6822, 6822, 6822, 6822, 6822, 6822} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 8137, .lkg_pwr = {7341, 7341, 7341, 7341, 7341, 7341} },
		{.cap = 0, .volt = 83700, .dyn_pwr = 9849, .lkg_pwr = {7895, 7895, 7895, 7895, 7895, 7895} },
		{.cap = 0, .volt = 86900, .dyn_pwr = 11431, .lkg_pwr = {8417, 8417, 8417, 8417, 8417, 8417} },
		{.cap = 0, .volt = 90000, .dyn_pwr = 13135, .lkg_pwr = {9011, 9011, 9011, 9011, 9011, 9011} },
		{.cap = 0, .volt = 93100, .dyn_pwr = 14992, .lkg_pwr = {9670, 9670, 9670, 9670, 9670, 9670} },
		{.cap = 0, .volt = 96200, .dyn_pwr = 17007, .lkg_pwr = {10377, 10377, 10377, 10377, 10377, 10377} },
		{.cap = 0, .volt = 98700, .dyn_pwr = 18694, .lkg_pwr = {11050, 11050, 11050, 11050, 11050, 11050} },
		{.cap = 0, .volt = 101900, .dyn_pwr = 21050, .lkg_pwr = {11949, 11949, 11949, 11949, 11949, 11949} },
		{.cap = 0, .volt = 105000, .dyn_pwr = 22662, .lkg_pwr = {12959, 12959, 12959, 12959, 12959, 12959} },
		{.cap = 0, .volt = 108700, .dyn_pwr = 24939, .lkg_pwr = {14326, 14326, 14326, 14326, 14326, 14326} },
		{.cap = 0, .volt = 111900, .dyn_pwr = 26782, .lkg_pwr = {15640, 15640, 15640, 15640, 15640, 15640} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {5269} },
		{{0}, {5269} },
		{{0}, {5269} },
		{{0}, {5269} },
		{{0}, {5269} },
		{{0}, {5269} },
	},
};

struct upower_tbl upower_tbl_l_plus_FY = {
	.row = {
		{.cap = 228, .volt = 60000, .dyn_pwr = 20950, .lkg_pwr = {41351, 41351, 41351, 41351, 41351, 41351} },
		{.cap = 336, .volt = 65600, .dyn_pwr = 35489, .lkg_pwr = {45568, 45568, 45568, 45568, 45568, 45568} },
		{.cap = 421, .volt = 70000, .dyn_pwr = 50812, .lkg_pwr = {50042, 50042, 50042, 50042, 50042, 50042} },
		{.cap = 495, .volt = 73100, .dyn_pwr = 65251, .lkg_pwr = {53336, 53336, 53336, 53336, 53336, 53336} },
		{.cap = 563, .volt = 76200, .dyn_pwr = 80801, .lkg_pwr = {56718, 56718, 56718, 56718, 56718, 56718} },
		{.cap = 643, .volt = 80000, .dyn_pwr = 101823, .lkg_pwr = {61089, 61089, 61089, 61089, 61089, 61089} },
		{.cap = 717, .volt = 83700, .dyn_pwr = 124464, .lkg_pwr = {65503, 65503, 65503, 65503, 65503, 65503} },
		{.cap = 779, .volt = 86900, .dyn_pwr = 146045, .lkg_pwr = {69433, 69433, 69433, 69433, 69433, 69433} },
		{.cap = 842, .volt = 90000, .dyn_pwr = 169405, .lkg_pwr = {73407, 73407, 73407, 73407, 73407, 73407} },
		{.cap = 870, .volt = 93100, .dyn_pwr = 187583, .lkg_pwr = {77531, 77531, 77531, 77531, 77531, 77531} },
		{.cap = 899, .volt = 96200, .dyn_pwr = 207017, .lkg_pwr = {81763, 81763, 81763, 81763, 81763, 81763} },
		{.cap = 927, .volt = 98700, .dyn_pwr = 224969, .lkg_pwr = {85359, 85359, 85359, 85359, 85359, 85359} },
		{.cap = 956, .volt = 101900, .dyn_pwr = 247356, .lkg_pwr = {90021, 90021, 90021, 90021, 90021, 90021} },
		{.cap = 978, .volt = 105000, .dyn_pwr = 269094, .lkg_pwr = {94741, 94741, 94741, 94741, 94741, 94741} },
	{.cap = 1001, .volt = 108700, .dyn_pwr = 295351, .lkg_pwr = {100547, 100547, 100547, 100547, 100547, 100547} },
	{.cap = 1024, .volt = 111900, .dyn_pwr = 320332, .lkg_pwr = {105691, 105691, 105691, 105691, 105691, 105691} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {41351} },
		{{0}, {41351} },
		{{0}, {41351} },
		{{0}, {41351} },
		{{0}, {41351} },
		{{0}, {41351} },
	},
};
#endif /* UNIFIED_POWER_DATA_MT6758H */
