/*
 * Class PROCESS_FACTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_864 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_864 [] = {0,0xFF11,235,0xFF12,863,0xFFFF};
static EIF_TYPE_INDEX gen_type2_864 [] = {0,0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type3_864 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_864 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_864 [] = {0,0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type6_864 [] = {0,0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type7_864 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_864 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_864 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_864 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_864 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_864 [] = {0,0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type13_864 [] = {0,0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type14_864 [] = {0,0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type15_864 [] = {0,0xFF11,934,0xFFFF};


static struct desc_info desc_864[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_864},
	{2, (BODY_INDEX)-1, 235, gen_type1_864},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 863, gen_type2_864},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_864},
	{15, (BODY_INDEX)-1, 0, gen_type4_864},
	{16, (BODY_INDEX)-1, 863, gen_type5_864},
	{17, (BODY_INDEX)-1, 863, gen_type6_864},
	{18, (BODY_INDEX)-1, 0, gen_type7_864},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_864},
	{22, (BODY_INDEX)-1, 218, gen_type9_864},
	{23, (BODY_INDEX)-1, 218, gen_type10_864},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_864},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 863, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 863, gen_type12_864},
	{12574, (BODY_INDEX)-1, 883, gen_type13_864},
	{12575, (BODY_INDEX)-1, 883, gen_type14_864},
	{12576, (BODY_INDEX)-1, 934, gen_type15_864},
};

extern void Init864(void);
void Init864(void)
{
	IDSC(desc_864, 0, 863);
	IDSC(desc_864 + 1, 1, 863);
	IDSC(desc_864 + 32, 416, 863);
}


#ifdef __cplusplus
}
#endif
