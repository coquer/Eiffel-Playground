/*
 * Class THREAD_CONTROL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_896 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_896 [] = {0,0xFF11,235,0xFF12,895,0xFFFF};
static EIF_TYPE_INDEX gen_type2_896 [] = {0,0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type3_896 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_896 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_896 [] = {0,0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type6_896 [] = {0,0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type7_896 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_896 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_896 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_896 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_896 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_896 [] = {0,0xFF11,895,0xFFFF};


static struct desc_info desc_896[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_896},
	{2, (BODY_INDEX)-1, 235, gen_type1_896},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 895, gen_type2_896},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_896},
	{15, (BODY_INDEX)-1, 0, gen_type4_896},
	{16, (BODY_INDEX)-1, 895, gen_type5_896},
	{17, (BODY_INDEX)-1, 895, gen_type6_896},
	{18, (BODY_INDEX)-1, 0, gen_type7_896},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_896},
	{22, (BODY_INDEX)-1, 218, gen_type9_896},
	{23, (BODY_INDEX)-1, 218, gen_type10_896},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_896},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 895, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 895, gen_type12_896},
	{12998, (BODY_INDEX)-1, 213, NULL},
	{12999, (BODY_INDEX)-1, 213, NULL},
	{13000, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13001, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init896(void);
void Init896(void)
{
	IDSC(desc_896, 0, 895);
	IDSC(desc_896 + 1, 1, 895);
	IDSC(desc_896 + 32, 427, 895);
	IDSC(desc_896 + 34, 447, 895);
}


#ifdef __cplusplus
}
#endif
