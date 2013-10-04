/*
 * Class TIME_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_902 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_902 [] = {0,0xFF11,235,0xFF12,901,0xFFFF};
static EIF_TYPE_INDEX gen_type2_902 [] = {0,0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type3_902 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_902 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_902 [] = {0,0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type6_902 [] = {0,0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type7_902 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_902 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_902 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_902 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_902 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_902 [] = {0,0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type13_902 [] = {0,0xFF11,882,0xFFFF};
static EIF_TYPE_INDEX gen_type14_902 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type15_902 [] = {0,0xFF11,218,0xFFFF};


static struct desc_info desc_902[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_902},
	{2, (BODY_INDEX)-1, 235, gen_type1_902},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 901, gen_type2_902},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_902},
	{15, (BODY_INDEX)-1, 0, gen_type4_902},
	{16, (BODY_INDEX)-1, 901, gen_type5_902},
	{17, (BODY_INDEX)-1, 901, gen_type6_902},
	{18, (BODY_INDEX)-1, 0, gen_type7_902},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_902},
	{22, (BODY_INDEX)-1, 218, gen_type9_902},
	{23, (BODY_INDEX)-1, 218, gen_type10_902},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_902},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 901, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 901, gen_type12_902},
	{13057, (BODY_INDEX)-1, 204, NULL},
	{13058, (BODY_INDEX)-1, 204, NULL},
	{13059, (BODY_INDEX)-1, 882, gen_type13_902},
	{13060, (BODY_INDEX)-1, 218, gen_type14_902},
	{13061, (BODY_INDEX)-1, 204, NULL},
	{13062, (BODY_INDEX)-1, 204, NULL},
	{13063, (BODY_INDEX)-1, 204, NULL},
	{13064, (BODY_INDEX)-1, 204, NULL},
	{13065, (BODY_INDEX)-1, 204, NULL},
	{13066, (BODY_INDEX)-1, 218, gen_type15_902},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 204, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 204, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 204, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 192, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init902(void);
void Init902(void)
{
	IDSC(desc_902, 0, 901);
	IDSC(desc_902 + 1, 1, 901);
	IDSC(desc_902 + 32, 411, 901);
	IDSC(desc_902 + 36, 409, 901);
	IDSC(desc_902 + 42, 406, 901);
}


#ifdef __cplusplus
}
#endif
