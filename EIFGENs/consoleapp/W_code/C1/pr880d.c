/*
 * Class PROCESS_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_880 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type1_880 [] = {0,0xFF11,235,0xFF12,879,0xFFFF};
static EIF_TYPE_INDEX gen_type2_880 [] = {0,0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type3_880 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_880 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_880 [] = {0,0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type6_880 [] = {0,0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type7_880 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_880 [] = {0,0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_880 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type10_880 [] = {0,0xFF11,218,0xFFFF};
static EIF_TYPE_INDEX gen_type11_880 [] = {0,0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_880 [] = {0,0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type13_880 [] = {0,0xFF11,272,0xFF11,0xFFF9,2,172,204,204,0xFFFF};


static struct desc_info desc_880[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_880},
	{2, (BODY_INDEX)-1, 235, gen_type1_880},
	{3, (BODY_INDEX)-1, 189, NULL},
	{4, (BODY_INDEX)-1, 189, NULL},
	{5, (BODY_INDEX)-1, 189, NULL},
	{6, (BODY_INDEX)-1, 189, NULL},
	{7, (BODY_INDEX)-1, 189, NULL},
	{8, (BODY_INDEX)-1, 189, NULL},
	{9, (BODY_INDEX)-1, 189, NULL},
	{10, (BODY_INDEX)-1, 189, NULL},
	{11, (BODY_INDEX)-1, 879, gen_type2_880},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14, (BODY_INDEX)-1, 0, gen_type3_880},
	{15, (BODY_INDEX)-1, 0, gen_type4_880},
	{16, (BODY_INDEX)-1, 879, gen_type5_880},
	{17, (BODY_INDEX)-1, 879, gen_type6_880},
	{18, (BODY_INDEX)-1, 0, gen_type7_880},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{21, (BODY_INDEX)-1, 14, gen_type8_880},
	{22, (BODY_INDEX)-1, 218, gen_type9_880},
	{23, (BODY_INDEX)-1, 218, gen_type10_880},
	{24, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{25, (BODY_INDEX)-1, 15, gen_type11_880},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{29, (BODY_INDEX)-1, 879, NULL},
	{30, (BODY_INDEX)-1, 213, NULL},
	{31, (BODY_INDEX)-1, 879, gen_type12_880},
	{12734, (BODY_INDEX)-1, 204, NULL},
	{12735, (BODY_INDEX)-1, 204, NULL},
	{12736, (BODY_INDEX)-1, 204, NULL},
	{12737, (BODY_INDEX)-1, 204, NULL},
	{12738, (BODY_INDEX)-1, 204, NULL},
	{12739, (BODY_INDEX)-1, 204, NULL},
	{12740, (BODY_INDEX)-1, 204, NULL},
	{12741, (BODY_INDEX)-1, 204, NULL},
	{12742, (BODY_INDEX)-1, 204, NULL},
	{12743, (BODY_INDEX)-1, 204, NULL},
	{12744, (BODY_INDEX)-1, 204, NULL},
	{12745, (BODY_INDEX)-1, 272, gen_type13_880},
	{12746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12747, (BODY_INDEX)-1, 213, NULL},
	{12748, (BODY_INDEX)-1, 213, NULL},
	{12749, (BODY_INDEX)-1, 213, NULL},
	{12750, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12751, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12752, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12753, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12754, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12755, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12756, (BODY_INDEX)-1, 213, NULL},
};

extern void Init880(void);
void Init880(void)
{
	IDSC(desc_880, 0, 879);
	IDSC(desc_880 + 1, 1, 879);
	IDSC(desc_880 + 32, 445, 879);
	IDSC(desc_880 + 43, 435, 879);
}


#ifdef __cplusplus
}
#endif
