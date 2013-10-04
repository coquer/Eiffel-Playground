/*
 * Class INET_ADDRESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_915 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_915 [] = {0,0xFF11,235,0xFF12,914,0xFFFF};
static EIF_TYPE_INDEX gen_type2_915 [] = {0,0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type3_915 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_915 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_915 [] = {0,0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type6_915 [] = {0,0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type7_915 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_915 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_915 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_915 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_915 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_915 [] = {0,0xFF11,914,0xFFFF};
static EIF_TYPE_INDEX gen_type13_915 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type14_915 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type15_915 [] = {0,0xFF11,712,195,0xFFFF};
static EIF_TYPE_INDEX gen_type16_915 [] = {0,0xFF11,149,0xFFFF};


static struct desc_info desc_915[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_915},
	{2, (BODY_INDEX)-1, 235, gen_type1_915},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 914, gen_type2_915},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_915},
	{15, (BODY_INDEX)-1, 0, gen_type4_915},
	{16, (BODY_INDEX)-1, 914, gen_type5_915},
	{17, (BODY_INDEX)-1, 914, gen_type6_915},
	{18, (BODY_INDEX)-1, 0, gen_type7_915},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_915},
	{22, (BODY_INDEX)-1, 218, gen_type9_915},
	{23, (BODY_INDEX)-1, 218, gen_type10_915},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_915},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 914, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 914, gen_type12_915},
	{13131, (BODY_INDEX)-1, 204, NULL},
	{13132, (BODY_INDEX)-1, 204, NULL},
	{13133, 8, 204, NULL},
	{13134, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 189, NULL},
	{13135, (BODY_INDEX)-1, 218, gen_type13_915},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 218, gen_type14_915},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 712, gen_type15_915},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 149, gen_type16_915},
	{13129, 0, 218, NULL},
	{13130, (BODY_INDEX)-1, 204, NULL},
};

extern void Init915(void);
void Init915(void)
{
	IDSC(desc_915, 0, 914);
	IDSC(desc_915 + 1, 1, 914);
	IDSC(desc_915 + 32, 351, 914);
}


#ifdef __cplusplus
}
#endif
