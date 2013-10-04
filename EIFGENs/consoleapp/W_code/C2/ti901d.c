/*
 * Class TIME_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_901 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_901 [] = {0,0xFF11,235,0xFF12,900,0xFFFF};
static EIF_TYPE_INDEX gen_type2_901 [] = {0,0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type3_901 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_901 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_901 [] = {0,0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type6_901 [] = {0,0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type7_901 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_901 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_901 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_901 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_901 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_901 [] = {0,0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type13_901 [] = {0,0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type14_901 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type15_901 [] = {0,0xFF11,218,0xFFFF};


static struct desc_info desc_901[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_901},
	{2, (BODY_INDEX)-1, 235, gen_type1_901},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 900, gen_type2_901},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_901},
	{15, (BODY_INDEX)-1, 0, gen_type4_901},
	{16, (BODY_INDEX)-1, 900, gen_type5_901},
	{17, (BODY_INDEX)-1, 900, gen_type6_901},
	{18, (BODY_INDEX)-1, 0, gen_type7_901},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_901},
	{22, (BODY_INDEX)-1, 218, gen_type9_901},
	{23, (BODY_INDEX)-1, 218, gen_type10_901},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_901},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 900, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 900, gen_type12_901},
	{13057, (BODY_INDEX)-1, 204, NULL},
	{13058, (BODY_INDEX)-1, 204, NULL},
	{13059, (BODY_INDEX)-1, 882, gen_type13_901},
	{13060, (BODY_INDEX)-1, 218, gen_type14_901},
	{13061, (BODY_INDEX)-1, 204, NULL},
	{13062, (BODY_INDEX)-1, 204, NULL},
	{13063, (BODY_INDEX)-1, 204, NULL},
	{13064, (BODY_INDEX)-1, 204, NULL},
	{13065, (BODY_INDEX)-1, 204, NULL},
	{13066, (BODY_INDEX)-1, 218, gen_type15_901},
};

extern void Init901(void);
void Init901(void)
{
	IDSC(desc_901, 0, 900);
	IDSC(desc_901 + 1, 1, 900);
	IDSC(desc_901 + 32, 411, 900);
	IDSC(desc_901 + 36, 409, 900);
}


#ifdef __cplusplus
}
#endif
