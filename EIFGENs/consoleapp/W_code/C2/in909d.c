/*
 * Class INET_PROPERTIES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_909 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_909 [] = {0,0xFF11,235,0xFF12,908,0xFFFF};
static EIF_TYPE_INDEX gen_type2_909 [] = {0,0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type3_909 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_909 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_909 [] = {0,0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type6_909 [] = {0,0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type7_909 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_909 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_909 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_909 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_909 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_909 [] = {0,0xFF11,908,0xFFFF};


static struct desc_info desc_909[] = {
	{(BODY_INDEX) 13112, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_909},
	{2, (BODY_INDEX)-1, 235, gen_type1_909},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 908, gen_type2_909},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_909},
	{15, (BODY_INDEX)-1, 0, gen_type4_909},
	{16, (BODY_INDEX)-1, 908, gen_type5_909},
	{17, (BODY_INDEX)-1, 908, gen_type6_909},
	{18, (BODY_INDEX)-1, 0, gen_type7_909},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_909},
	{22, (BODY_INDEX)-1, 218, gen_type9_909},
	{23, (BODY_INDEX)-1, 218, gen_type10_909},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_909},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 908, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 908, gen_type12_909},
	{13113, (BODY_INDEX)-1, 189, NULL},
	{13114, (BODY_INDEX)-1, 189, NULL},
	{13115, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init909(void);
void Init909(void)
{
	IDSC(desc_909, 0, 908);
	IDSC(desc_909 + 1, 1, 908);
	IDSC(desc_909 + 32, 371, 908);
}


#ifdef __cplusplus
}
#endif
