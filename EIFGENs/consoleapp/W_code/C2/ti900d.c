/*
 * Class TIME_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_900 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_900 [] = {0,0xFF11,235,0xFF12,899,0xFFFF};
static EIF_TYPE_INDEX gen_type2_900 [] = {0,0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type3_900 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_900 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_900 [] = {0,0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type6_900 [] = {0,0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type7_900 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_900 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_900 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_900 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_900 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_900 [] = {0,0xFF11,899,0xFFFF};
static EIF_TYPE_INDEX gen_type13_900 [] = {0,0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type14_900 [] = {0,0xFF11,218,0xFFFF};


static struct desc_info desc_900[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_900},
	{2, (BODY_INDEX)-1, 235, gen_type1_900},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 899, gen_type2_900},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_900},
	{15, (BODY_INDEX)-1, 0, gen_type4_900},
	{16, (BODY_INDEX)-1, 899, gen_type5_900},
	{17, (BODY_INDEX)-1, 899, gen_type6_900},
	{18, (BODY_INDEX)-1, 0, gen_type7_900},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_900},
	{22, (BODY_INDEX)-1, 218, gen_type9_900},
	{23, (BODY_INDEX)-1, 218, gen_type10_900},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_900},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 899, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 899, gen_type12_900},
	{13057, (BODY_INDEX)-1, 204, NULL},
	{13058, (BODY_INDEX)-1, 204, NULL},
	{13059, (BODY_INDEX)-1, 882, gen_type13_900},
	{13060, (BODY_INDEX)-1, 218, gen_type14_900},
};

extern void Init900(void);
void Init900(void)
{
	IDSC(desc_900, 0, 899);
	IDSC(desc_900 + 1, 1, 899);
	IDSC(desc_900 + 32, 411, 899);
}


#ifdef __cplusplus
}
#endif
