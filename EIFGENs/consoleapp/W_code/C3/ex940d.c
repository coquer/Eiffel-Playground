/*
 * Class EXTERNAL_OBJECT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_940 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_940 [] = {0,0xFF11,235,0xFF12,939,0xFFFF};
static EIF_TYPE_INDEX gen_type2_940 [] = {0,0xFF11,939,0xFFFF};
static EIF_TYPE_INDEX gen_type3_940 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_940 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_940 [] = {0,0xFF11,939,0xFFFF};
static EIF_TYPE_INDEX gen_type6_940 [] = {0,0xFF11,939,0xFFFF};
static EIF_TYPE_INDEX gen_type7_940 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_940 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_940 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_940 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_940 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_940 [] = {0,0xFF11,939,0xFFFF};


static struct desc_info desc_940[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_940},
	{2, (BODY_INDEX)-1, 235, gen_type1_940},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 939, gen_type2_940},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_940},
	{15, (BODY_INDEX)-1, 0, gen_type4_940},
	{16, (BODY_INDEX)-1, 939, gen_type5_940},
	{17, (BODY_INDEX)-1, 939, gen_type6_940},
	{18, (BODY_INDEX)-1, 0, gen_type7_940},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_940},
	{22, (BODY_INDEX)-1, 218, gen_type9_940},
	{23, (BODY_INDEX)-1, 218, gen_type10_940},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_940},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 939, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 939, gen_type12_940},
	{13618, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{5892, (BODY_INDEX)-1, 189, NULL},
	{13617, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13619, 0, 213, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init940(void);
void Init940(void)
{
	IDSC(desc_940, 0, 939);
	IDSC(desc_940 + 1, 1, 939);
	IDSC(desc_940 + 32, 205, 939);
	IDSC(desc_940 + 34, 392, 939);
}


#ifdef __cplusplus
}
#endif
