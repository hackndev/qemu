#include "dyngen-op.h"
static inline void gen_op_mov32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_mov32;
}

static inline void gen_op_mov32_im(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_mov32_im;
}

static inline void gen_op_movf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_movf64;
}

static inline void gen_op_zerof64(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_zerof64;
}

static inline void gen_op_add32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_add32;
}

static inline void gen_op_sub32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_sub32;
}

static inline void gen_op_mul32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_mul32;
}

static inline void gen_op_not32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_not32;
}

static inline void gen_op_neg32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_neg32;
}

static inline void gen_op_bswap32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_bswap32;
}

static inline void gen_op_btest(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_btest;
}

static inline void gen_op_addx_cc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_addx_cc;
}

static inline void gen_op_subx_cc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_subx_cc;
}

static inline void gen_op_and32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_and32;
}

static inline void gen_op_or32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_or32;
}

static inline void gen_op_xor32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_xor32;
}

static inline void gen_op_shl32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_shl32;
}

static inline void gen_op_shl_cc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_shl_cc;
}

static inline void gen_op_shr32(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_shr32;
}

static inline void gen_op_shr_cc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_shr_cc;
}

static inline void gen_op_sar_cc(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_sar_cc;
}

static inline void gen_op_ext8u32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ext8u32;
}

static inline void gen_op_ext8s32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ext8s32;
}

static inline void gen_op_ext16u32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ext16u32;
}

static inline void gen_op_ext16s32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ext16s32;
}

static inline void gen_op_ld8u32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ld8u32;
}

static inline void gen_op_ld8s32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ld8s32;
}

static inline void gen_op_ld16u32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ld16u32;
}

static inline void gen_op_ld16s32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ld16s32;
}

static inline void gen_op_ld32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ld32;
}

static inline void gen_op_st8(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_st8;
}

static inline void gen_op_st16(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_st16;
}

static inline void gen_op_st32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_st32;
}

static inline void gen_op_ldf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_ldf64;
}

static inline void gen_op_stf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_stf64;
}

static inline void gen_op_flush_flags(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_flush_flags;
}

static inline void gen_op_divu(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_divu;
}

static inline void gen_op_divs(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_divs;
}

static inline void gen_op_raise_exception(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_raise_exception;
}

static inline void gen_op_sub_cmpf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_sub_cmpf64;
}

static inline void gen_op_update_xflag_tst(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_update_xflag_tst;
}

static inline void gen_op_update_xflag_lt(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_update_xflag_lt;
}

static inline void gen_op_get_xflag(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_get_xflag;
}

static inline void gen_op_logic_cc(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_logic_cc;
}

static inline void gen_op_update_cc_add(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_update_cc_add;
}

static inline void gen_op_fp_result(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_fp_result;
}

static inline void gen_op_jmp(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_jmp;
}

static inline void gen_op_jmp_z32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_jmp_z32;
}

static inline void gen_op_jmp_nz32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_jmp_nz32;
}

static inline void gen_op_jmp_s32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_jmp_s32;
}

static inline void gen_op_jmp_ns32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_jmp_ns32;
}

static inline void gen_op_goto_tb0(void)
{
    *gen_opc_ptr++ = INDEX_op_goto_tb0;
}

static inline void gen_op_goto_tb1(void)
{
    *gen_opc_ptr++ = INDEX_op_goto_tb1;
}

static inline void gen_op_exit_tb(void)
{
    *gen_opc_ptr++ = INDEX_op_exit_tb;
}

static inline void gen_op_f64_to_i32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_f64_to_i32;
}

static inline void gen_op_f64_to_f32(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_f64_to_f32;
}

static inline void gen_op_i32_to_f64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_i32_to_f64;
}

static inline void gen_op_f32_to_f64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_f32_to_f64;
}

static inline void gen_op_absf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_absf64;
}

static inline void gen_op_chsf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_chsf64;
}

static inline void gen_op_sqrtf64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_sqrtf64;
}

static inline void gen_op_addf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_addf64;
}

static inline void gen_op_subf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_subf64;
}

static inline void gen_op_mulf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_mulf64;
}

static inline void gen_op_divf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_divf64;
}

static inline void gen_op_iround_f64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_iround_f64;
}

static inline void gen_op_itrunc_f64(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_itrunc_f64;
}

static inline void gen_op_compare_quietf64(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_compare_quietf64;
}

