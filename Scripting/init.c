#ifdef ___LINKER_INFO
; File: "init.c", produced by Gambit-C v4.6.0
(
406000
" init"
(" init")
(
)
(
)
(
" init"
"hest"
)
(
"oe-init"
)
(
"print"
)
 #f
)
#else
#define ___VERSION 406000
#define ___MODULE_NAME " init"
#define ___LINKER_ID ____20_init
#define ___MH_PROC ___H__20_init
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 4
#define ___SUP_COUNT 3
#define ___SUB_COUNT 1
#define ___LBL_COUNT 8
#include "gambit.h"

___NEED_GLO(___G__20_init)
___NEED_GLO(___G_hest)
___NEED_GLO(___G_oe_2d_init)
___NEED_GLO(___G_print)

___BEGIN_GLO
___DEF_GLO(0," init")
___DEF_GLO(1,"hest")
___DEF_GLO(2,"oe-init")
___DEF_GLO(3,"print")
___END_GLO

___DEF_SUB_STR(___X0,25)
               ___STR8(72,101,108,108,111,32,87,111)
               ___STR8(114,108,100,32,102,114,111,109)
               ___STR8(32,103,97,109,98,105,116,33)
               ___STR1(10)

___BEGIN_SUB
 ___DEF_SUB(___X0)
___END_SUB


#define ___C_LBL_oe_init 6

 void oe_init ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_oe_init))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_R1 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_hest)
___DEF_M_HLBL(___L1_hest)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_oe_2d_init)
___DEF_M_HLBL(___L1_oe_2d_init)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init)
   ___SET_GLO(1,___G_hest,___PRC(3))
   ___SET_GLO(2,___G_oe_2d_init,___PRC(6))
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_hest
#undef ___PH_LBL0
#define ___PH_LBL0 3
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_hest)
___DEF_P_HLBL(___L1_hest)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_hest)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_hest)
   ___SET_R1(___SUB(0))
   ___POLL(1)
___DEF_SLBL(1,___L1_hest)
   ___JUMPGLOSAFE(___SET_NARGS(1),3,___G_print)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_oe_2d_init
#undef ___PH_LBL0
#define ___PH_LBL0 6
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_oe_2d_init)
___DEF_P_HLBL(___L1_oe_2d_init)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_oe_2d_init)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_oe_2d_init)
   ___POLL(1)
___DEF_SLBL(1,___L1_oe_2d_init)
   ___JUMPGLOSAFE(___SET_NARGS(0),1,___G_hest)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_init," init",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H__20_init,0,0)
,___DEF_LBL_INTRO(___H_hest,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_hest,0,0)
,___DEF_LBL_RET(___H_hest,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_oe_2d_init,0,___REF_FAL,2,oe_init)
,___DEF_LBL_PROC(___H_oe_2d_init,0,0)
,___DEF_LBL_RET(___H_oe_2d_init,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_init,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
