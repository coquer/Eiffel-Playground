/*
 * Class PROCESS_TIMER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_881 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_881 [] = {0,0xFF11,235,0xFF12,880,0xFFFF};
static EIF_TYPE_INDEX gen_type2_881 [] = {0,0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type3_881 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_881 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_881 [] = {0,0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type6_881 [] = {0,0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type7_881 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_881 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_881 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_881 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_881 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_881 [] = {0,0xFF11,880,0xFFFF};


static struct desc_info desc_881[] = {
	{(BODY_INDEX) 12760, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_881},
	{2, (BODY_INDEX)-1, 235, gen_type1_881},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 880, gen_type2_881},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_881},
	{15, (BODY_INDEX)-1, 0, gen_type4_881},
	{16, (BODY_INDEX)-1, 880, gen_type5_881},
	{17, (BODY_INDEX)-1, 880, gen_type6_881},
	{18, (BODY_INDEX)-1, 0, gen_type7_881},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_881},
	{22, (BODY_INDEX)-1, 218, gen_type9_881},
	{23, (BODY_INDEX)-1, 218, gen_type10_881},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_881},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 880, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 880, gen_type12_881},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{12761, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12762, 8, 189, NULL},
	{12763, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{12757, 12, 204, NULL},
	{12758, 0, 883, NULL},
	{12759, (BODY_INDEX)-1, 204, NULL},
};

extern void Init881(void);
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 1, 880);
	IDSC(desc_881 + 32, 424, 880);
}


#ifdef __cplusplus
}
#endif
