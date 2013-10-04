/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_867 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_867 [] = {0,0xFF11,235,0xFF12,866,0xFFFF};
static EIF_TYPE_INDEX gen_type2_867 [] = {0,0xFF11,866,0xFFFF};
static EIF_TYPE_INDEX gen_type3_867 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_867 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_867 [] = {0,0xFF11,866,0xFFFF};
static EIF_TYPE_INDEX gen_type6_867 [] = {0,0xFF11,866,0xFFFF};
static EIF_TYPE_INDEX gen_type7_867 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_867 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_867 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_867 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_867 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_867 [] = {0,0xFF11,866,0xFFFF};
static EIF_TYPE_INDEX gen_type13_867 [] = {0,0xFF11,149,0xFFFF};


static struct desc_info desc_867[] = {
	{(BODY_INDEX) 12617, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_867},
	{2, (BODY_INDEX)-1, 235, gen_type1_867},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{12614, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 866, gen_type2_867},
	{12615, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_867},
	{15, (BODY_INDEX)-1, 0, gen_type4_867},
	{16, (BODY_INDEX)-1, 866, gen_type5_867},
	{17, (BODY_INDEX)-1, 866, gen_type6_867},
	{18, (BODY_INDEX)-1, 0, gen_type7_867},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_867},
	{22, (BODY_INDEX)-1, 218, gen_type9_867},
	{23, (BODY_INDEX)-1, 218, gen_type10_867},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_867},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 866, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 866, gen_type12_867},
	{12618, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12608, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12609, (BODY_INDEX)-1, 204, NULL},
	{12610, (BODY_INDEX)-1, 183, NULL},
	{12611, (BODY_INDEX)-1, 183, NULL},
	{12612, (BODY_INDEX)-1, 189, NULL},
	{12613, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12616, 0, 149, gen_type13_867},
};

extern void Init867(void);
void Init867(void)
{
	IDSC(desc_867, 0, 866);
	IDSC(desc_867 + 1, 1, 866);
	IDSC(desc_867 + 32, 396, 866);
}


#ifdef __cplusplus
}
#endif
