/*
 * Class WEL_SW_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_875 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_875 [] = {0,0xFF11,235,0xFF12,874,0xFFFF};
static EIF_TYPE_INDEX gen_type2_875 [] = {0,0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type3_875 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_875 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_875 [] = {0,0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type6_875 [] = {0,0xFF11,874,0xFFFF};
static EIF_TYPE_INDEX gen_type7_875 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_875 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_875 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_875 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_875 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_875 [] = {0,0xFF11,874,0xFFFF};


static struct desc_info desc_875[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_875},
	{2, (BODY_INDEX)-1, 235, gen_type1_875},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 874, gen_type2_875},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_875},
	{15, (BODY_INDEX)-1, 0, gen_type4_875},
	{16, (BODY_INDEX)-1, 874, gen_type5_875},
	{17, (BODY_INDEX)-1, 874, gen_type6_875},
	{18, (BODY_INDEX)-1, 0, gen_type7_875},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_875},
	{22, (BODY_INDEX)-1, 218, gen_type9_875},
	{23, (BODY_INDEX)-1, 218, gen_type10_875},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_875},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 874, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 874, gen_type12_875},
	{12713, (BODY_INDEX)-1, 204, NULL},
	{12700, (BODY_INDEX)-1, 204, NULL},
	{12701, (BODY_INDEX)-1, 204, NULL},
	{12702, (BODY_INDEX)-1, 204, NULL},
	{12703, (BODY_INDEX)-1, 204, NULL},
	{12704, (BODY_INDEX)-1, 204, NULL},
	{12705, (BODY_INDEX)-1, 204, NULL},
	{12706, (BODY_INDEX)-1, 204, NULL},
	{12707, (BODY_INDEX)-1, 204, NULL},
	{12708, (BODY_INDEX)-1, 204, NULL},
	{12709, (BODY_INDEX)-1, 204, NULL},
	{12710, (BODY_INDEX)-1, 204, NULL},
	{12711, (BODY_INDEX)-1, 204, NULL},
	{12712, (BODY_INDEX)-1, 204, NULL},
};

extern void Init875(void);
void Init875(void)
{
	IDSC(desc_875, 0, 874);
	IDSC(desc_875 + 1, 1, 874);
	IDSC(desc_875 + 32, 453, 874);
}


#ifdef __cplusplus
}
#endif
