/*
 * Class FILE_HANDLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_862 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_862 [] = {0,0xFF11,235,0xFF12,861,0xFFFF};
static EIF_TYPE_INDEX gen_type2_862 [] = {0,0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type3_862 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_862 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_862 [] = {0,0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type6_862 [] = {0,0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type7_862 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_862 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_862 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_862 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_862 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_862 [] = {0,0xFF11,861,0xFFFF};
static EIF_TYPE_INDEX gen_type13_862 [] = {0,0xFFF9,2,172,213,213,0xFFFF};
static EIF_TYPE_INDEX gen_type14_862 [] = {0,0xFFF9,2,172,213,213,0xFFFF};


static struct desc_info desc_862[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_862},
	{2, (BODY_INDEX)-1, 235, gen_type1_862},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 861, gen_type2_862},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_862},
	{15, (BODY_INDEX)-1, 0, gen_type4_862},
	{16, (BODY_INDEX)-1, 861, gen_type5_862},
	{17, (BODY_INDEX)-1, 861, gen_type6_862},
	{18, (BODY_INDEX)-1, 0, gen_type7_862},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_862},
	{22, (BODY_INDEX)-1, 218, gen_type9_862},
	{23, (BODY_INDEX)-1, 218, gen_type10_862},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_862},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 861, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 861, gen_type12_862},
	{12546, (BODY_INDEX)-1, 213, NULL},
	{12547, (BODY_INDEX)-1, 213, NULL},
	{12548, (BODY_INDEX)-1, 172, gen_type13_862},
	{12549, (BODY_INDEX)-1, 172, gen_type14_862},
	{12550, 8, 189, NULL},
	{12551, 9, 189, NULL},
	{12552, 0, 218, NULL},
	{12553, 12, 204, NULL},
	{12554, 16, 204, NULL},
	{12555, (BODY_INDEX)-1, 189, NULL},
	{12556, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12557, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12558, (BODY_INDEX)-1, 189, NULL},
	{12559, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12560, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12561, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12562, (BODY_INDEX)-1, 189, NULL},
	{12563, (BODY_INDEX)-1, 213, NULL},
	{12564, (BODY_INDEX)-1, 189, NULL},
	{12565, (BODY_INDEX)-1, 189, NULL},
	{12566, (BODY_INDEX)-1, 189, NULL},
	{12567, (BODY_INDEX)-1, 189, NULL},
	{12568, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init862(void);
void Init862(void)
{
	IDSC(desc_862, 0, 861);
	IDSC(desc_862 + 1, 1, 861);
	IDSC(desc_862 + 32, 428, 861);
}


#ifdef __cplusplus
}
#endif
