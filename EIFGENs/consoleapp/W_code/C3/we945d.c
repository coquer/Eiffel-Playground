/*
 * Class WEL_STRUCTURE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_945 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_945 [] = {0,0xFF11,235,0xFF12,944,0xFFFF};
static EIF_TYPE_INDEX gen_type2_945 [] = {0,0xFF11,944,0xFFFF};
static EIF_TYPE_INDEX gen_type3_945 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_945 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_945 [] = {0,0xFF11,944,0xFFFF};
static EIF_TYPE_INDEX gen_type6_945 [] = {0,0xFF11,944,0xFFFF};
static EIF_TYPE_INDEX gen_type7_945 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_945 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_945 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_945 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_945 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_945 [] = {0,0xFF11,944,0xFFFF};


static struct desc_info desc_945[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_945},
	{2, (BODY_INDEX)-1, 235, gen_type1_945},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{13659, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 944, gen_type2_945},
	{13658, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_945},
	{15, (BODY_INDEX)-1, 0, gen_type4_945},
	{16, (BODY_INDEX)-1, 944, gen_type5_945},
	{17, (BODY_INDEX)-1, 944, gen_type6_945},
	{18, (BODY_INDEX)-1, 0, gen_type7_945},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_945},
	{22, (BODY_INDEX)-1, 218, gen_type9_945},
	{23, (BODY_INDEX)-1, 218, gen_type10_945},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_945},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 944, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 944, gen_type12_945},
	{13646, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{5892, (BODY_INDEX)-1, 189, NULL},
	{13638, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13639, 8, 213, NULL},
	{13640, 0, 189, NULL},
	{13641, (BODY_INDEX)-1, 189, NULL},
	{13642, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13643, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13644, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13645, (BODY_INDEX)-1, 204, NULL},
	{13663, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13647, (BODY_INDEX)-1, 213, NULL},
	{13657, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13660, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13661, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13662, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 204, NULL},
	{13664, (BODY_INDEX)-1, 213, NULL},
	{13665, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13666, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13667, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13668, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init945(void);
void Init945(void)
{
	IDSC(desc_945, 0, 944);
	IDSC(desc_945 + 1, 1, 944);
	IDSC(desc_945 + 32, 205, 944);
	IDSC(desc_945 + 34, 454, 944);
	IDSC(desc_945 + 44, 443, 944);
}


#ifdef __cplusplus
}
#endif
