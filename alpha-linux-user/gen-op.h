#include "dyngen-op.h"
static inline void gen_op_reset_T0(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_T0;
}

static inline void gen_op_reset_FT0(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_FT0;
}

static inline void gen_op_set_s32_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_s32_T0;
}

static inline void gen_op_set_u32_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_u32_T0;
}

static inline void gen_op_set_64_T0(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_set_64_T0;
}

static inline void gen_op_load_T0_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir0;
}

static inline void gen_op_load_T1_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir0;
}

static inline void gen_op_load_T2_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir0;
}

static inline void gen_op_store_T0_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir0;
}

static inline void gen_op_store_T1_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir0;
}

static inline void gen_op_store_T2_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir0;
}

static inline void gen_op_cmov_ir0(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir0;
}

static inline void gen_op_load_FT0_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir0;
}

static inline void gen_op_load_FT1_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir0;
}

static inline void gen_op_load_FT2_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir0;
}

static inline void gen_op_store_FT0_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir0;
}

static inline void gen_op_store_FT1_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir0;
}

static inline void gen_op_store_FT2_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir0;
}

static inline void gen_op_cmov_fir0(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir0;
}

static inline void gen_op_reset_T1(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_T1;
}

static inline void gen_op_reset_FT1(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_FT1;
}

static inline void gen_op_set_s32_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_s32_T1;
}

static inline void gen_op_set_u32_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_u32_T1;
}

static inline void gen_op_set_64_T1(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_set_64_T1;
}

static inline void gen_op_load_T0_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir1;
}

static inline void gen_op_load_T1_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir1;
}

static inline void gen_op_load_T2_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir1;
}

static inline void gen_op_store_T0_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir1;
}

static inline void gen_op_store_T1_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir1;
}

static inline void gen_op_store_T2_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir1;
}

static inline void gen_op_cmov_ir1(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir1;
}

static inline void gen_op_load_FT0_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir1;
}

static inline void gen_op_load_FT1_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir1;
}

static inline void gen_op_load_FT2_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir1;
}

static inline void gen_op_store_FT0_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir1;
}

static inline void gen_op_store_FT1_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir1;
}

static inline void gen_op_store_FT2_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir1;
}

static inline void gen_op_cmov_fir1(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir1;
}

static inline void gen_op_reset_T2(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_T2;
}

static inline void gen_op_reset_FT2(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_FT2;
}

static inline void gen_op_set_s32_T2(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_s32_T2;
}

static inline void gen_op_set_u32_T2(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_u32_T2;
}

static inline void gen_op_set_64_T2(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_set_64_T2;
}

static inline void gen_op_load_T0_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir2;
}

static inline void gen_op_load_T1_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir2;
}

static inline void gen_op_load_T2_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir2;
}

static inline void gen_op_store_T0_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir2;
}

static inline void gen_op_store_T1_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir2;
}

static inline void gen_op_store_T2_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir2;
}

static inline void gen_op_cmov_ir2(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir2;
}

static inline void gen_op_load_FT0_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir2;
}

static inline void gen_op_load_FT1_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir2;
}

static inline void gen_op_load_FT2_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir2;
}

static inline void gen_op_store_FT0_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir2;
}

static inline void gen_op_store_FT1_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir2;
}

static inline void gen_op_store_FT2_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir2;
}

static inline void gen_op_cmov_fir2(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir2;
}

static inline void gen_op_load_T0_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir3;
}

static inline void gen_op_load_T1_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir3;
}

static inline void gen_op_load_T2_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir3;
}

static inline void gen_op_store_T0_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir3;
}

static inline void gen_op_store_T1_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir3;
}

static inline void gen_op_store_T2_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir3;
}

static inline void gen_op_cmov_ir3(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir3;
}

static inline void gen_op_load_FT0_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir3;
}

static inline void gen_op_load_FT1_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir3;
}

static inline void gen_op_load_FT2_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir3;
}

static inline void gen_op_store_FT0_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir3;
}

static inline void gen_op_store_FT1_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir3;
}

static inline void gen_op_store_FT2_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir3;
}

static inline void gen_op_cmov_fir3(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir3;
}

static inline void gen_op_load_T0_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir4;
}

static inline void gen_op_load_T1_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir4;
}

static inline void gen_op_load_T2_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir4;
}

static inline void gen_op_store_T0_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir4;
}

static inline void gen_op_store_T1_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir4;
}

static inline void gen_op_store_T2_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir4;
}

static inline void gen_op_cmov_ir4(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir4;
}

static inline void gen_op_load_FT0_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir4;
}

static inline void gen_op_load_FT1_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir4;
}

static inline void gen_op_load_FT2_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir4;
}

static inline void gen_op_store_FT0_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir4;
}

static inline void gen_op_store_FT1_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir4;
}

static inline void gen_op_store_FT2_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir4;
}

static inline void gen_op_cmov_fir4(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir4;
}

static inline void gen_op_load_T0_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir5;
}

static inline void gen_op_load_T1_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir5;
}

static inline void gen_op_load_T2_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir5;
}

static inline void gen_op_store_T0_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir5;
}

static inline void gen_op_store_T1_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir5;
}

static inline void gen_op_store_T2_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir5;
}

static inline void gen_op_cmov_ir5(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir5;
}

static inline void gen_op_load_FT0_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir5;
}

static inline void gen_op_load_FT1_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir5;
}

static inline void gen_op_load_FT2_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir5;
}

static inline void gen_op_store_FT0_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir5;
}

static inline void gen_op_store_FT1_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir5;
}

static inline void gen_op_store_FT2_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir5;
}

static inline void gen_op_cmov_fir5(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir5;
}

static inline void gen_op_load_T0_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir6;
}

static inline void gen_op_load_T1_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir6;
}

static inline void gen_op_load_T2_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir6;
}

static inline void gen_op_store_T0_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir6;
}

static inline void gen_op_store_T1_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir6;
}

static inline void gen_op_store_T2_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir6;
}

static inline void gen_op_cmov_ir6(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir6;
}

static inline void gen_op_load_FT0_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir6;
}

static inline void gen_op_load_FT1_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir6;
}

static inline void gen_op_load_FT2_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir6;
}

static inline void gen_op_store_FT0_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir6;
}

static inline void gen_op_store_FT1_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir6;
}

static inline void gen_op_store_FT2_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir6;
}

static inline void gen_op_cmov_fir6(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir6;
}

static inline void gen_op_load_T0_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir7;
}

static inline void gen_op_load_T1_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir7;
}

static inline void gen_op_load_T2_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir7;
}

static inline void gen_op_store_T0_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir7;
}

static inline void gen_op_store_T1_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir7;
}

static inline void gen_op_store_T2_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir7;
}

static inline void gen_op_cmov_ir7(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir7;
}

static inline void gen_op_load_FT0_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir7;
}

static inline void gen_op_load_FT1_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir7;
}

static inline void gen_op_load_FT2_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir7;
}

static inline void gen_op_store_FT0_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir7;
}

static inline void gen_op_store_FT1_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir7;
}

static inline void gen_op_store_FT2_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir7;
}

static inline void gen_op_cmov_fir7(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir7;
}

static inline void gen_op_load_T0_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir8;
}

static inline void gen_op_load_T1_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir8;
}

static inline void gen_op_load_T2_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir8;
}

static inline void gen_op_store_T0_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir8;
}

static inline void gen_op_store_T1_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir8;
}

static inline void gen_op_store_T2_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir8;
}

static inline void gen_op_cmov_ir8(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir8;
}

static inline void gen_op_load_FT0_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir8;
}

static inline void gen_op_load_FT1_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir8;
}

static inline void gen_op_load_FT2_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir8;
}

static inline void gen_op_store_FT0_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir8;
}

static inline void gen_op_store_FT1_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir8;
}

static inline void gen_op_store_FT2_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir8;
}

static inline void gen_op_cmov_fir8(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir8;
}

static inline void gen_op_load_T0_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir9;
}

static inline void gen_op_load_T1_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir9;
}

static inline void gen_op_load_T2_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir9;
}

static inline void gen_op_store_T0_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir9;
}

static inline void gen_op_store_T1_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir9;
}

static inline void gen_op_store_T2_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir9;
}

static inline void gen_op_cmov_ir9(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir9;
}

static inline void gen_op_load_FT0_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir9;
}

static inline void gen_op_load_FT1_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir9;
}

static inline void gen_op_load_FT2_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir9;
}

static inline void gen_op_store_FT0_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir9;
}

static inline void gen_op_store_FT1_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir9;
}

static inline void gen_op_store_FT2_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir9;
}

static inline void gen_op_cmov_fir9(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir9;
}

static inline void gen_op_load_T0_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir10;
}

static inline void gen_op_load_T1_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir10;
}

static inline void gen_op_load_T2_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir10;
}

static inline void gen_op_store_T0_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir10;
}

static inline void gen_op_store_T1_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir10;
}

static inline void gen_op_store_T2_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir10;
}

static inline void gen_op_cmov_ir10(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir10;
}

static inline void gen_op_load_FT0_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir10;
}

static inline void gen_op_load_FT1_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir10;
}

static inline void gen_op_load_FT2_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir10;
}

static inline void gen_op_store_FT0_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir10;
}

static inline void gen_op_store_FT1_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir10;
}

static inline void gen_op_store_FT2_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir10;
}

static inline void gen_op_cmov_fir10(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir10;
}

static inline void gen_op_load_T0_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir11;
}

static inline void gen_op_load_T1_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir11;
}

static inline void gen_op_load_T2_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir11;
}

static inline void gen_op_store_T0_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir11;
}

static inline void gen_op_store_T1_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir11;
}

static inline void gen_op_store_T2_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir11;
}

static inline void gen_op_cmov_ir11(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir11;
}

static inline void gen_op_load_FT0_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir11;
}

static inline void gen_op_load_FT1_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir11;
}

static inline void gen_op_load_FT2_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir11;
}

static inline void gen_op_store_FT0_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir11;
}

static inline void gen_op_store_FT1_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir11;
}

static inline void gen_op_store_FT2_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir11;
}

static inline void gen_op_cmov_fir11(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir11;
}

static inline void gen_op_load_T0_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir12;
}

static inline void gen_op_load_T1_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir12;
}

static inline void gen_op_load_T2_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir12;
}

static inline void gen_op_store_T0_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir12;
}

static inline void gen_op_store_T1_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir12;
}

static inline void gen_op_store_T2_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir12;
}

static inline void gen_op_cmov_ir12(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir12;
}

static inline void gen_op_load_FT0_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir12;
}

static inline void gen_op_load_FT1_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir12;
}

static inline void gen_op_load_FT2_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir12;
}

static inline void gen_op_store_FT0_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir12;
}

static inline void gen_op_store_FT1_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir12;
}

static inline void gen_op_store_FT2_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir12;
}

static inline void gen_op_cmov_fir12(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir12;
}

static inline void gen_op_load_T0_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir13;
}

static inline void gen_op_load_T1_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir13;
}

static inline void gen_op_load_T2_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir13;
}

static inline void gen_op_store_T0_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir13;
}

static inline void gen_op_store_T1_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir13;
}

static inline void gen_op_store_T2_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir13;
}

static inline void gen_op_cmov_ir13(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir13;
}

static inline void gen_op_load_FT0_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir13;
}

static inline void gen_op_load_FT1_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir13;
}

static inline void gen_op_load_FT2_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir13;
}

static inline void gen_op_store_FT0_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir13;
}

static inline void gen_op_store_FT1_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir13;
}

static inline void gen_op_store_FT2_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir13;
}

static inline void gen_op_cmov_fir13(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir13;
}

static inline void gen_op_load_T0_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir14;
}

static inline void gen_op_load_T1_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir14;
}

static inline void gen_op_load_T2_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir14;
}

static inline void gen_op_store_T0_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir14;
}

static inline void gen_op_store_T1_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir14;
}

static inline void gen_op_store_T2_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir14;
}

static inline void gen_op_cmov_ir14(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir14;
}

static inline void gen_op_load_FT0_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir14;
}

static inline void gen_op_load_FT1_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir14;
}

static inline void gen_op_load_FT2_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir14;
}

static inline void gen_op_store_FT0_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir14;
}

static inline void gen_op_store_FT1_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir14;
}

static inline void gen_op_store_FT2_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir14;
}

static inline void gen_op_cmov_fir14(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir14;
}

static inline void gen_op_load_T0_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir15;
}

static inline void gen_op_load_T1_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir15;
}

static inline void gen_op_load_T2_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir15;
}

static inline void gen_op_store_T0_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir15;
}

static inline void gen_op_store_T1_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir15;
}

static inline void gen_op_store_T2_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir15;
}

static inline void gen_op_cmov_ir15(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir15;
}

static inline void gen_op_load_FT0_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir15;
}

static inline void gen_op_load_FT1_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir15;
}

static inline void gen_op_load_FT2_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir15;
}

static inline void gen_op_store_FT0_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir15;
}

static inline void gen_op_store_FT1_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir15;
}

static inline void gen_op_store_FT2_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir15;
}

static inline void gen_op_cmov_fir15(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir15;
}

static inline void gen_op_load_T0_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir16;
}

static inline void gen_op_load_T1_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir16;
}

static inline void gen_op_load_T2_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir16;
}

static inline void gen_op_store_T0_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir16;
}

static inline void gen_op_store_T1_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir16;
}

static inline void gen_op_store_T2_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir16;
}

static inline void gen_op_cmov_ir16(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir16;
}

static inline void gen_op_load_FT0_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir16;
}

static inline void gen_op_load_FT1_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir16;
}

static inline void gen_op_load_FT2_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir16;
}

static inline void gen_op_store_FT0_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir16;
}

static inline void gen_op_store_FT1_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir16;
}

static inline void gen_op_store_FT2_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir16;
}

static inline void gen_op_cmov_fir16(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir16;
}

static inline void gen_op_load_T0_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir17;
}

static inline void gen_op_load_T1_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir17;
}

static inline void gen_op_load_T2_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir17;
}

static inline void gen_op_store_T0_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir17;
}

static inline void gen_op_store_T1_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir17;
}

static inline void gen_op_store_T2_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir17;
}

static inline void gen_op_cmov_ir17(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir17;
}

static inline void gen_op_load_FT0_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir17;
}

static inline void gen_op_load_FT1_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir17;
}

static inline void gen_op_load_FT2_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir17;
}

static inline void gen_op_store_FT0_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir17;
}

static inline void gen_op_store_FT1_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir17;
}

static inline void gen_op_store_FT2_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir17;
}

static inline void gen_op_cmov_fir17(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir17;
}

static inline void gen_op_load_T0_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir18;
}

static inline void gen_op_load_T1_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir18;
}

static inline void gen_op_load_T2_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir18;
}

static inline void gen_op_store_T0_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir18;
}

static inline void gen_op_store_T1_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir18;
}

static inline void gen_op_store_T2_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir18;
}

static inline void gen_op_cmov_ir18(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir18;
}

static inline void gen_op_load_FT0_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir18;
}

static inline void gen_op_load_FT1_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir18;
}

static inline void gen_op_load_FT2_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir18;
}

static inline void gen_op_store_FT0_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir18;
}

static inline void gen_op_store_FT1_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir18;
}

static inline void gen_op_store_FT2_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir18;
}

static inline void gen_op_cmov_fir18(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir18;
}

static inline void gen_op_load_T0_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir19;
}

static inline void gen_op_load_T1_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir19;
}

static inline void gen_op_load_T2_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir19;
}

static inline void gen_op_store_T0_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir19;
}

static inline void gen_op_store_T1_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir19;
}

static inline void gen_op_store_T2_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir19;
}

static inline void gen_op_cmov_ir19(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir19;
}

static inline void gen_op_load_FT0_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir19;
}

static inline void gen_op_load_FT1_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir19;
}

static inline void gen_op_load_FT2_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir19;
}

static inline void gen_op_store_FT0_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir19;
}

static inline void gen_op_store_FT1_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir19;
}

static inline void gen_op_store_FT2_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir19;
}

static inline void gen_op_cmov_fir19(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir19;
}

static inline void gen_op_load_T0_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir20;
}

static inline void gen_op_load_T1_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir20;
}

static inline void gen_op_load_T2_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir20;
}

static inline void gen_op_store_T0_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir20;
}

static inline void gen_op_store_T1_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir20;
}

static inline void gen_op_store_T2_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir20;
}

static inline void gen_op_cmov_ir20(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir20;
}

static inline void gen_op_load_FT0_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir20;
}

static inline void gen_op_load_FT1_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir20;
}

static inline void gen_op_load_FT2_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir20;
}

static inline void gen_op_store_FT0_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir20;
}

static inline void gen_op_store_FT1_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir20;
}

static inline void gen_op_store_FT2_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir20;
}

static inline void gen_op_cmov_fir20(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir20;
}

static inline void gen_op_load_T0_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir21;
}

static inline void gen_op_load_T1_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir21;
}

static inline void gen_op_load_T2_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir21;
}

static inline void gen_op_store_T0_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir21;
}

static inline void gen_op_store_T1_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir21;
}

static inline void gen_op_store_T2_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir21;
}

static inline void gen_op_cmov_ir21(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir21;
}

static inline void gen_op_load_FT0_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir21;
}

static inline void gen_op_load_FT1_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir21;
}

static inline void gen_op_load_FT2_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir21;
}

static inline void gen_op_store_FT0_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir21;
}

static inline void gen_op_store_FT1_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir21;
}

static inline void gen_op_store_FT2_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir21;
}

static inline void gen_op_cmov_fir21(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir21;
}

static inline void gen_op_load_T0_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir22;
}

static inline void gen_op_load_T1_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir22;
}

static inline void gen_op_load_T2_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir22;
}

static inline void gen_op_store_T0_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir22;
}

static inline void gen_op_store_T1_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir22;
}

static inline void gen_op_store_T2_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir22;
}

static inline void gen_op_cmov_ir22(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir22;
}

static inline void gen_op_load_FT0_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir22;
}

static inline void gen_op_load_FT1_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir22;
}

static inline void gen_op_load_FT2_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir22;
}

static inline void gen_op_store_FT0_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir22;
}

static inline void gen_op_store_FT1_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir22;
}

static inline void gen_op_store_FT2_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir22;
}

static inline void gen_op_cmov_fir22(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir22;
}

static inline void gen_op_load_T0_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir23;
}

static inline void gen_op_load_T1_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir23;
}

static inline void gen_op_load_T2_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir23;
}

static inline void gen_op_store_T0_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir23;
}

static inline void gen_op_store_T1_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir23;
}

static inline void gen_op_store_T2_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir23;
}

static inline void gen_op_cmov_ir23(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir23;
}

static inline void gen_op_load_FT0_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir23;
}

static inline void gen_op_load_FT1_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir23;
}

static inline void gen_op_load_FT2_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir23;
}

static inline void gen_op_store_FT0_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir23;
}

static inline void gen_op_store_FT1_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir23;
}

static inline void gen_op_store_FT2_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir23;
}

static inline void gen_op_cmov_fir23(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir23;
}

static inline void gen_op_load_T0_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir24;
}

static inline void gen_op_load_T1_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir24;
}

static inline void gen_op_load_T2_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir24;
}

static inline void gen_op_store_T0_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir24;
}

static inline void gen_op_store_T1_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir24;
}

static inline void gen_op_store_T2_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir24;
}

static inline void gen_op_cmov_ir24(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir24;
}

static inline void gen_op_load_FT0_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir24;
}

static inline void gen_op_load_FT1_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir24;
}

static inline void gen_op_load_FT2_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir24;
}

static inline void gen_op_store_FT0_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir24;
}

static inline void gen_op_store_FT1_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir24;
}

static inline void gen_op_store_FT2_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir24;
}

static inline void gen_op_cmov_fir24(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir24;
}

static inline void gen_op_load_T0_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir25;
}

static inline void gen_op_load_T1_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir25;
}

static inline void gen_op_load_T2_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir25;
}

static inline void gen_op_store_T0_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir25;
}

static inline void gen_op_store_T1_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir25;
}

static inline void gen_op_store_T2_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir25;
}

static inline void gen_op_cmov_ir25(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir25;
}

static inline void gen_op_load_FT0_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir25;
}

static inline void gen_op_load_FT1_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir25;
}

static inline void gen_op_load_FT2_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir25;
}

static inline void gen_op_store_FT0_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir25;
}

static inline void gen_op_store_FT1_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir25;
}

static inline void gen_op_store_FT2_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir25;
}

static inline void gen_op_cmov_fir25(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir25;
}

static inline void gen_op_load_T0_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir26;
}

static inline void gen_op_load_T1_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir26;
}

static inline void gen_op_load_T2_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir26;
}

static inline void gen_op_store_T0_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir26;
}

static inline void gen_op_store_T1_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir26;
}

static inline void gen_op_store_T2_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir26;
}

static inline void gen_op_cmov_ir26(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir26;
}

static inline void gen_op_load_FT0_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir26;
}

static inline void gen_op_load_FT1_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir26;
}

static inline void gen_op_load_FT2_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir26;
}

static inline void gen_op_store_FT0_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir26;
}

static inline void gen_op_store_FT1_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir26;
}

static inline void gen_op_store_FT2_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir26;
}

static inline void gen_op_cmov_fir26(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir26;
}

static inline void gen_op_load_T0_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir27;
}

static inline void gen_op_load_T1_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir27;
}

static inline void gen_op_load_T2_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir27;
}

static inline void gen_op_store_T0_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir27;
}

static inline void gen_op_store_T1_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir27;
}

static inline void gen_op_store_T2_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir27;
}

static inline void gen_op_cmov_ir27(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir27;
}

static inline void gen_op_load_FT0_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir27;
}

static inline void gen_op_load_FT1_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir27;
}

static inline void gen_op_load_FT2_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir27;
}

static inline void gen_op_store_FT0_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir27;
}

static inline void gen_op_store_FT1_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir27;
}

static inline void gen_op_store_FT2_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir27;
}

static inline void gen_op_cmov_fir27(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir27;
}

static inline void gen_op_load_T0_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir28;
}

static inline void gen_op_load_T1_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir28;
}

static inline void gen_op_load_T2_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir28;
}

static inline void gen_op_store_T0_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir28;
}

static inline void gen_op_store_T1_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir28;
}

static inline void gen_op_store_T2_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir28;
}

static inline void gen_op_cmov_ir28(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir28;
}

static inline void gen_op_load_FT0_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir28;
}

static inline void gen_op_load_FT1_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir28;
}

static inline void gen_op_load_FT2_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir28;
}

static inline void gen_op_store_FT0_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir28;
}

static inline void gen_op_store_FT1_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir28;
}

static inline void gen_op_store_FT2_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir28;
}

static inline void gen_op_cmov_fir28(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir28;
}

static inline void gen_op_load_T0_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir29;
}

static inline void gen_op_load_T1_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir29;
}

static inline void gen_op_load_T2_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir29;
}

static inline void gen_op_store_T0_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir29;
}

static inline void gen_op_store_T1_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir29;
}

static inline void gen_op_store_T2_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir29;
}

static inline void gen_op_cmov_ir29(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir29;
}

static inline void gen_op_load_FT0_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir29;
}

static inline void gen_op_load_FT1_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir29;
}

static inline void gen_op_load_FT2_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir29;
}

static inline void gen_op_store_FT0_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir29;
}

static inline void gen_op_store_FT1_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir29;
}

static inline void gen_op_store_FT2_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir29;
}

static inline void gen_op_cmov_fir29(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir29;
}

static inline void gen_op_load_T0_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T0_ir30;
}

static inline void gen_op_load_T1_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T1_ir30;
}

static inline void gen_op_load_T2_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_T2_ir30;
}

static inline void gen_op_store_T0_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_ir30;
}

static inline void gen_op_store_T1_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_ir30;
}

static inline void gen_op_store_T2_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T2_ir30;
}

static inline void gen_op_cmov_ir30(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_ir30;
}

static inline void gen_op_load_FT0_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT0_fir30;
}

static inline void gen_op_load_FT1_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT1_fir30;
}

static inline void gen_op_load_FT2_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_FT2_fir30;
}

static inline void gen_op_store_FT0_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fir30;
}

static inline void gen_op_store_FT1_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fir30;
}

static inline void gen_op_store_FT2_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT2_fir30;
}

static inline void gen_op_cmov_fir30(void)
{
    *gen_opc_ptr++ = INDEX_op_cmov_fir30;
}

static inline void gen_op_no_op(void)
{
    *gen_opc_ptr++ = INDEX_op_no_op;
}

static inline void gen_op_tb_flush(void)
{
    *gen_opc_ptr++ = INDEX_op_tb_flush;
}

static inline void gen_op_ldbu_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldbu_raw;
}

static inline void gen_op_stb_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stb_raw;
}

static inline void gen_op_ldwu_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldwu_raw;
}

static inline void gen_op_stw_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stw_raw;
}

static inline void gen_op_ldl_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldl_raw;
}

static inline void gen_op_stl_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stl_raw;
}

static inline void gen_op_ldq_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldq_raw;
}

static inline void gen_op_stq_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stq_raw;
}

static inline void gen_op_ldq_u_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldq_u_raw;
}

static inline void gen_op_stq_u_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stq_u_raw;
}

static inline void gen_op_ldl_l_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldl_l_raw;
}

static inline void gen_op_ldq_l_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldq_l_raw;
}

static inline void gen_op_stl_c_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stl_c_raw;
}

static inline void gen_op_stq_c_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stq_c_raw;
}

static inline void gen_op_ldt_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldt_raw;
}

static inline void gen_op_stt_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stt_raw;
}

static inline void gen_op_lds_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lds_raw;
}

static inline void gen_op_sts_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_sts_raw;
}

static inline void gen_op_ldf_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldf_raw;
}

static inline void gen_op_stf_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stf_raw;
}

static inline void gen_op_ldg_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ldg_raw;
}

static inline void gen_op_stg_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stg_raw;
}

static inline void gen_op_n7(void)
{
    *gen_opc_ptr++ = INDEX_op_n7;
}

static inline void gen_op_excp(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_excp;
}

static inline void gen_op_load_amask(void)
{
    *gen_opc_ptr++ = INDEX_op_load_amask;
}

static inline void gen_op_load_pcc(void)
{
    *gen_opc_ptr++ = INDEX_op_load_pcc;
}

static inline void gen_op_load_implver(void)
{
    *gen_opc_ptr++ = INDEX_op_load_implver;
}

static inline void gen_op_load_fpcr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpcr;
}

static inline void gen_op_store_fpcr(void)
{
    *gen_opc_ptr++ = INDEX_op_store_fpcr;
}

static inline void gen_op_load_irf(void)
{
    *gen_opc_ptr++ = INDEX_op_load_irf;
}

static inline void gen_op_set_irf(void)
{
    *gen_opc_ptr++ = INDEX_op_set_irf;
}

static inline void gen_op_clear_irf(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_irf;
}

static inline void gen_op_exit_tb(void)
{
    *gen_opc_ptr++ = INDEX_op_exit_tb;
}

static inline void gen_op_addq(void)
{
    *gen_opc_ptr++ = INDEX_op_addq;
}

static inline void gen_op_addqv(void)
{
    *gen_opc_ptr++ = INDEX_op_addqv;
}

static inline void gen_op_addl(void)
{
    *gen_opc_ptr++ = INDEX_op_addl;
}

static inline void gen_op_addlv(void)
{
    *gen_opc_ptr++ = INDEX_op_addlv;
}

static inline void gen_op_subq(void)
{
    *gen_opc_ptr++ = INDEX_op_subq;
}

static inline void gen_op_subqv(void)
{
    *gen_opc_ptr++ = INDEX_op_subqv;
}

static inline void gen_op_subl(void)
{
    *gen_opc_ptr++ = INDEX_op_subl;
}

static inline void gen_op_sublv(void)
{
    *gen_opc_ptr++ = INDEX_op_sublv;
}

static inline void gen_op_s4(void)
{
    *gen_opc_ptr++ = INDEX_op_s4;
}

static inline void gen_op_s8(void)
{
    *gen_opc_ptr++ = INDEX_op_s8;
}

static inline void gen_op_mull(void)
{
    *gen_opc_ptr++ = INDEX_op_mull;
}

static inline void gen_op_mullv(void)
{
    *gen_opc_ptr++ = INDEX_op_mullv;
}

static inline void gen_op_mulq(void)
{
    *gen_opc_ptr++ = INDEX_op_mulq;
}

static inline void gen_op_mulqv(void)
{
    *gen_opc_ptr++ = INDEX_op_mulqv;
}

static inline void gen_op_umulh(void)
{
    *gen_opc_ptr++ = INDEX_op_umulh;
}

static inline void gen_op_and(void)
{
    *gen_opc_ptr++ = INDEX_op_and;
}

static inline void gen_op_bic(void)
{
    *gen_opc_ptr++ = INDEX_op_bic;
}

static inline void gen_op_bis(void)
{
    *gen_opc_ptr++ = INDEX_op_bis;
}

static inline void gen_op_eqv(void)
{
    *gen_opc_ptr++ = INDEX_op_eqv;
}

static inline void gen_op_ornot(void)
{
    *gen_opc_ptr++ = INDEX_op_ornot;
}

static inline void gen_op_xor(void)
{
    *gen_opc_ptr++ = INDEX_op_xor;
}

static inline void gen_op_sll(void)
{
    *gen_opc_ptr++ = INDEX_op_sll;
}

static inline void gen_op_srl(void)
{
    *gen_opc_ptr++ = INDEX_op_srl;
}

static inline void gen_op_sra(void)
{
    *gen_opc_ptr++ = INDEX_op_sra;
}

static inline void gen_op_sextb(void)
{
    *gen_opc_ptr++ = INDEX_op_sextb;
}

static inline void gen_op_sextw(void)
{
    *gen_opc_ptr++ = INDEX_op_sextw;
}

static inline void gen_op_ctpop(void)
{
    *gen_opc_ptr++ = INDEX_op_ctpop;
}

static inline void gen_op_ctlz(void)
{
    *gen_opc_ptr++ = INDEX_op_ctlz;
}

static inline void gen_op_cttz(void)
{
    *gen_opc_ptr++ = INDEX_op_cttz;
}

static inline void gen_op_mskbl(void)
{
    *gen_opc_ptr++ = INDEX_op_mskbl;
}

static inline void gen_op_extbl(void)
{
    *gen_opc_ptr++ = INDEX_op_extbl;
}

static inline void gen_op_insbl(void)
{
    *gen_opc_ptr++ = INDEX_op_insbl;
}

static inline void gen_op_mskwl(void)
{
    *gen_opc_ptr++ = INDEX_op_mskwl;
}

static inline void gen_op_extwl(void)
{
    *gen_opc_ptr++ = INDEX_op_extwl;
}

static inline void gen_op_inswl(void)
{
    *gen_opc_ptr++ = INDEX_op_inswl;
}

static inline void gen_op_mskll(void)
{
    *gen_opc_ptr++ = INDEX_op_mskll;
}

static inline void gen_op_extll(void)
{
    *gen_opc_ptr++ = INDEX_op_extll;
}

static inline void gen_op_insll(void)
{
    *gen_opc_ptr++ = INDEX_op_insll;
}

static inline void gen_op_zap(void)
{
    *gen_opc_ptr++ = INDEX_op_zap;
}

static inline void gen_op_zapnot(void)
{
    *gen_opc_ptr++ = INDEX_op_zapnot;
}

static inline void gen_op_mskql(void)
{
    *gen_opc_ptr++ = INDEX_op_mskql;
}

static inline void gen_op_extql(void)
{
    *gen_opc_ptr++ = INDEX_op_extql;
}

static inline void gen_op_insql(void)
{
    *gen_opc_ptr++ = INDEX_op_insql;
}

static inline void gen_op_mskwh(void)
{
    *gen_opc_ptr++ = INDEX_op_mskwh;
}

static inline void gen_op_inswh(void)
{
    *gen_opc_ptr++ = INDEX_op_inswh;
}

static inline void gen_op_extwh(void)
{
    *gen_opc_ptr++ = INDEX_op_extwh;
}

static inline void gen_op_msklh(void)
{
    *gen_opc_ptr++ = INDEX_op_msklh;
}

static inline void gen_op_inslh(void)
{
    *gen_opc_ptr++ = INDEX_op_inslh;
}

static inline void gen_op_extlh(void)
{
    *gen_opc_ptr++ = INDEX_op_extlh;
}

static inline void gen_op_mskqh(void)
{
    *gen_opc_ptr++ = INDEX_op_mskqh;
}

static inline void gen_op_insqh(void)
{
    *gen_opc_ptr++ = INDEX_op_insqh;
}

static inline void gen_op_extqh(void)
{
    *gen_opc_ptr++ = INDEX_op_extqh;
}

static inline void gen_op_cmpult(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpult;
}

static inline void gen_op_cmpule(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpule;
}

static inline void gen_op_cmpeq(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpeq;
}

static inline void gen_op_cmplt(void)
{
    *gen_opc_ptr++ = INDEX_op_cmplt;
}

static inline void gen_op_cmple(void)
{
    *gen_opc_ptr++ = INDEX_op_cmple;
}

static inline void gen_op_cmpbge(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpbge;
}

static inline void gen_op_cmpeqz(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpeqz;
}

static inline void gen_op_cmpnez(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpnez;
}

static inline void gen_op_cmpltz(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpltz;
}

static inline void gen_op_cmplez(void)
{
    *gen_opc_ptr++ = INDEX_op_cmplez;
}

static inline void gen_op_cmpgtz(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpgtz;
}

static inline void gen_op_cmpgez(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpgez;
}

static inline void gen_op_cmplbs(void)
{
    *gen_opc_ptr++ = INDEX_op_cmplbs;
}

static inline void gen_op_cmplbc(void)
{
    *gen_opc_ptr++ = INDEX_op_cmplbc;
}

static inline void gen_op_branch(void)
{
    *gen_opc_ptr++ = INDEX_op_branch;
}

static inline void gen_op_addq1(void)
{
    *gen_opc_ptr++ = INDEX_op_addq1;
}

static inline void gen_op_bcond(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_bcond;
}

static inline void gen_op_update_pc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_update_pc;
}

static inline void gen_op_update_pc32(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_update_pc32;
}

static inline void gen_op_adds(void)
{
    *gen_opc_ptr++ = INDEX_op_adds;
}

static inline void gen_op_subs(void)
{
    *gen_opc_ptr++ = INDEX_op_subs;
}

static inline void gen_op_muls(void)
{
    *gen_opc_ptr++ = INDEX_op_muls;
}

static inline void gen_op_divs(void)
{
    *gen_opc_ptr++ = INDEX_op_divs;
}

static inline void gen_op_sqrts(void)
{
    *gen_opc_ptr++ = INDEX_op_sqrts;
}

static inline void gen_op_cpys(void)
{
    *gen_opc_ptr++ = INDEX_op_cpys;
}

static inline void gen_op_cpysn(void)
{
    *gen_opc_ptr++ = INDEX_op_cpysn;
}

static inline void gen_op_cpyse(void)
{
    *gen_opc_ptr++ = INDEX_op_cpyse;
}

static inline void gen_op_itofs(void)
{
    *gen_opc_ptr++ = INDEX_op_itofs;
}

static inline void gen_op_ftois(void)
{
    *gen_opc_ptr++ = INDEX_op_ftois;
}

static inline void gen_op_addt(void)
{
    *gen_opc_ptr++ = INDEX_op_addt;
}

static inline void gen_op_subt(void)
{
    *gen_opc_ptr++ = INDEX_op_subt;
}

static inline void gen_op_mult(void)
{
    *gen_opc_ptr++ = INDEX_op_mult;
}

static inline void gen_op_divt(void)
{
    *gen_opc_ptr++ = INDEX_op_divt;
}

static inline void gen_op_sqrtt(void)
{
    *gen_opc_ptr++ = INDEX_op_sqrtt;
}

static inline void gen_op_cmptun(void)
{
    *gen_opc_ptr++ = INDEX_op_cmptun;
}

static inline void gen_op_cmpteq(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpteq;
}

static inline void gen_op_cmptle(void)
{
    *gen_opc_ptr++ = INDEX_op_cmptle;
}

static inline void gen_op_cmptlt(void)
{
    *gen_opc_ptr++ = INDEX_op_cmptlt;
}

static inline void gen_op_itoft(void)
{
    *gen_opc_ptr++ = INDEX_op_itoft;
}

static inline void gen_op_ftoit(void)
{
    *gen_opc_ptr++ = INDEX_op_ftoit;
}

static inline void gen_op_addf(void)
{
    *gen_opc_ptr++ = INDEX_op_addf;
}

static inline void gen_op_subf(void)
{
    *gen_opc_ptr++ = INDEX_op_subf;
}

static inline void gen_op_mulf(void)
{
    *gen_opc_ptr++ = INDEX_op_mulf;
}

static inline void gen_op_divf(void)
{
    *gen_opc_ptr++ = INDEX_op_divf;
}

static inline void gen_op_sqrtf(void)
{
    *gen_opc_ptr++ = INDEX_op_sqrtf;
}

static inline void gen_op_cmpfeq(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpfeq;
}

static inline void gen_op_cmpfne(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpfne;
}

static inline void gen_op_cmpflt(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpflt;
}

static inline void gen_op_cmpfle(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpfle;
}

static inline void gen_op_cmpfgt(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpfgt;
}

static inline void gen_op_cmpfge(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpfge;
}

static inline void gen_op_itoff(void)
{
    *gen_opc_ptr++ = INDEX_op_itoff;
}

static inline void gen_op_addg(void)
{
    *gen_opc_ptr++ = INDEX_op_addg;
}

static inline void gen_op_subg(void)
{
    *gen_opc_ptr++ = INDEX_op_subg;
}

static inline void gen_op_mulg(void)
{
    *gen_opc_ptr++ = INDEX_op_mulg;
}

static inline void gen_op_divg(void)
{
    *gen_opc_ptr++ = INDEX_op_divg;
}

static inline void gen_op_sqrtg(void)
{
    *gen_opc_ptr++ = INDEX_op_sqrtg;
}

static inline void gen_op_cmpgeq(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpgeq;
}

static inline void gen_op_cmpglt(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpglt;
}

static inline void gen_op_cmpgle(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpgle;
}

static inline void gen_op_cvtst(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtst;
}

static inline void gen_op_cvtqs(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqs;
}

static inline void gen_op_cvtts(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtts;
}

static inline void gen_op_cvttq(void)
{
    *gen_opc_ptr++ = INDEX_op_cvttq;
}

static inline void gen_op_cvtqt(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqt;
}

static inline void gen_op_cvtqf(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqf;
}

static inline void gen_op_cvtgf(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtgf;
}

static inline void gen_op_cvtgd(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtgd;
}

static inline void gen_op_cvtgq(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtgq;
}

static inline void gen_op_cvtqg(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqg;
}

static inline void gen_op_cvtdg(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtdg;
}

static inline void gen_op_cvtlq(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtlq;
}

static inline void gen_op_cvtql(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtql;
}

static inline void gen_op_cvtqlv(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqlv;
}

static inline void gen_op_cvtqlsv(void)
{
    *gen_opc_ptr++ = INDEX_op_cvtqlsv;
}

