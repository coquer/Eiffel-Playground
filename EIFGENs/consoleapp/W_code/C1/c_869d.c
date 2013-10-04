/*
 * Class C_DATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_869 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_869 [] = {0,0xFF11,235,0xFF12,868,0xFFFF};
static EIF_TYPE_INDEX gen_type2_869 [] = {0,0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type3_869 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_869 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_869 [] = {0,0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type6_869 [] = {0,0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type7_869 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_869 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_869 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_869 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_869 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_869 [] = {0,0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type13_869 [] = {0,0xFF11,149,0xFFFF};


static struct desc_info desc_869[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_869},
	{2, (BODY_INDEX)-1, 235, gen_type1_869},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 868, gen_type2_869},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_869},
	{15, (BODY_INDEX)-1, 0, gen_type4_869},
	{16, (BODY_INDEX)-1, 868, gen_type5_869},
	{17, (BODY_INDEX)-1, 868, gen_type6_869},
	{18, (BODY_INDEX)-1, 0, gen_type7_869},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_869},
	{22, (BODY_INDEX)-1, 218, gen_type9_869},
	{23, (BODY_INDEX)-1, 218, gen_type10_869},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_869},
	{12624, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 868, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 868, gen_type12_869},
	{12625, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12626, 8, 189, NULL},
	{12627, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12628, (BODY_INDEX)-1, 204, NULL},
	{12629, (BODY_INDEX)-1, 204, NULL},
	{12630, (BODY_INDEX)-1, 204, NULL},
	{12631, (BODY_INDEX)-1, 204, NULL},
	{12632, (BODY_INDEX)-1, 204, NULL},
	{12633, (BODY_INDEX)-1, 204, NULL},
	{12634, 12, 204, NULL},
	{12635, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12636, (BODY_INDEX)-1, 204, NULL},
	{12637, (BODY_INDEX)-1, 204, NULL},
	{12638, (BODY_INDEX)-1, 204, NULL},
	{12639, (BODY_INDEX)-1, 204, NULL},
	{12640, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12641, 0, 149, gen_type13_869},
	{12642, (BODY_INDEX)-1, 213, NULL},
	{12643, (BODY_INDEX)-1, 213, NULL},
	{12644, (BODY_INDEX)-1, 204, NULL},
	{12619, (BODY_INDEX)-1, 204, NULL},
	{12620, (BODY_INDEX)-1, 204, NULL},
	{12621, (BODY_INDEX)-1, 204, NULL},
	{12622, (BODY_INDEX)-1, 204, NULL},
	{12623, (BODY_INDEX)-1, 204, NULL},
};

extern void Init869(void);
void Init869(void)
{
	IDSC(desc_869, 0, 868);
	IDSC(desc_869 + 1, 1, 868);
	IDSC(desc_869 + 32, 383, 868);
}


#ifdef __cplusplus
}
#endif
