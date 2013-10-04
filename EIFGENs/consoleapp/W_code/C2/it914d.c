/*
 * Class ITP_CONSTANT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_914 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_914 [] = {0,0xFF11,235,0xFF12,913,0xFFFF};
static EIF_TYPE_INDEX gen_type2_914 [] = {0,0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type3_914 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_914 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_914 [] = {0,0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type6_914 [] = {0,0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type7_914 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_914 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_914 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_914 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_914 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_914 [] = {0,0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type13_914 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type14_914 [] = {0,0xFF11,218,0xFFFF};


static struct desc_info desc_914[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_914},
	{2, (BODY_INDEX)-1, 235, gen_type1_914},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 913, gen_type2_914},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_914},
	{15, (BODY_INDEX)-1, 0, gen_type4_914},
	{16, (BODY_INDEX)-1, 913, gen_type5_914},
	{17, (BODY_INDEX)-1, 913, gen_type6_914},
	{18, (BODY_INDEX)-1, 0, gen_type7_914},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_914},
	{22, (BODY_INDEX)-1, 218, gen_type9_914},
	{23, (BODY_INDEX)-1, 218, gen_type10_914},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_914},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 913, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 913, gen_type12_914},
	{13124, (BODY_INDEX)-1, 218, gen_type13_914},
	{13125, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13126, 0, 0, NULL},
	{13127, (BODY_INDEX)-1, 218, gen_type14_914},
	{13128, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init914(void);
void Init914(void)
{
	IDSC(desc_914, 0, 913);
	IDSC(desc_914 + 1, 1, 913);
	IDSC(desc_914 + 32, 353, 913);
	IDSC(desc_914 + 33, 373, 913);
	IDSC(desc_914 + 36, 374, 913);
}


#ifdef __cplusplus
}
#endif
