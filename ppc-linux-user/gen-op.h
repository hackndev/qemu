#include "dyngen-op.h"
static inline void gen_op_load_gpr_T0_gpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr0;
}

static inline void gen_op_load_gpr_T1_gpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr0;
}

static inline void gen_op_load_gpr_T2_gpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr0;
}

static inline void gen_op_store_T0_gpr_gpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr0;
}

static inline void gen_op_store_T1_gpr_gpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr0;
}

static inline void gen_op_load_crf_T0_crf0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf0;
}

static inline void gen_op_load_crf_T1_crf0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf0;
}

static inline void gen_op_store_T0_crf_crf0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf0;
}

static inline void gen_op_store_T1_crf_crf0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf0;
}

static inline void gen_op_load_fpscr_T0_fpscr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr0;
}

static inline void gen_op_store_T0_fpscr_fpscr0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr0;
}

static inline void gen_op_clear_fpscr_fpscr0(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr0;
}

static inline void gen_op_load_fpr_FT0_fpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr0;
}

static inline void gen_op_store_FT0_fpr_fpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr0;
}

static inline void gen_op_load_fpr_FT1_fpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr0;
}

static inline void gen_op_store_FT1_fpr_fpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr0;
}

static inline void gen_op_load_fpr_FT2_fpr0(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr0;
}

static inline void gen_op_load_gpr_T0_gpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr1;
}

static inline void gen_op_load_gpr_T1_gpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr1;
}

static inline void gen_op_load_gpr_T2_gpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr1;
}

static inline void gen_op_store_T0_gpr_gpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr1;
}

static inline void gen_op_store_T1_gpr_gpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr1;
}

static inline void gen_op_load_crf_T0_crf1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf1;
}

static inline void gen_op_load_crf_T1_crf1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf1;
}

static inline void gen_op_store_T0_crf_crf1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf1;
}

static inline void gen_op_store_T1_crf_crf1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf1;
}

static inline void gen_op_load_fpscr_T0_fpscr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr1;
}

static inline void gen_op_store_T0_fpscr_fpscr1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr1;
}

static inline void gen_op_clear_fpscr_fpscr1(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr1;
}

static inline void gen_op_load_fpr_FT0_fpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr1;
}

static inline void gen_op_store_FT0_fpr_fpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr1;
}

static inline void gen_op_load_fpr_FT1_fpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr1;
}

static inline void gen_op_store_FT1_fpr_fpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr1;
}

static inline void gen_op_load_fpr_FT2_fpr1(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr1;
}

static inline void gen_op_load_gpr_T0_gpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr2;
}

static inline void gen_op_load_gpr_T1_gpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr2;
}

static inline void gen_op_load_gpr_T2_gpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr2;
}

static inline void gen_op_store_T0_gpr_gpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr2;
}

static inline void gen_op_store_T1_gpr_gpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr2;
}

static inline void gen_op_load_crf_T0_crf2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf2;
}

static inline void gen_op_load_crf_T1_crf2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf2;
}

static inline void gen_op_store_T0_crf_crf2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf2;
}

static inline void gen_op_store_T1_crf_crf2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf2;
}

static inline void gen_op_load_fpscr_T0_fpscr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr2;
}

static inline void gen_op_store_T0_fpscr_fpscr2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr2;
}

static inline void gen_op_clear_fpscr_fpscr2(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr2;
}

static inline void gen_op_load_fpr_FT0_fpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr2;
}

static inline void gen_op_store_FT0_fpr_fpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr2;
}

static inline void gen_op_load_fpr_FT1_fpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr2;
}

static inline void gen_op_store_FT1_fpr_fpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr2;
}

static inline void gen_op_load_fpr_FT2_fpr2(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr2;
}

static inline void gen_op_load_gpr_T0_gpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr3;
}

static inline void gen_op_load_gpr_T1_gpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr3;
}

static inline void gen_op_load_gpr_T2_gpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr3;
}

static inline void gen_op_store_T0_gpr_gpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr3;
}

static inline void gen_op_store_T1_gpr_gpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr3;
}

static inline void gen_op_load_crf_T0_crf3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf3;
}

static inline void gen_op_load_crf_T1_crf3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf3;
}

static inline void gen_op_store_T0_crf_crf3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf3;
}

static inline void gen_op_store_T1_crf_crf3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf3;
}

static inline void gen_op_load_fpscr_T0_fpscr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr3;
}

static inline void gen_op_store_T0_fpscr_fpscr3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr3;
}

static inline void gen_op_clear_fpscr_fpscr3(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr3;
}

static inline void gen_op_load_fpr_FT0_fpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr3;
}

static inline void gen_op_store_FT0_fpr_fpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr3;
}

static inline void gen_op_load_fpr_FT1_fpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr3;
}

static inline void gen_op_store_FT1_fpr_fpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr3;
}

static inline void gen_op_load_fpr_FT2_fpr3(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr3;
}

static inline void gen_op_load_gpr_T0_gpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr4;
}

static inline void gen_op_load_gpr_T1_gpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr4;
}

static inline void gen_op_load_gpr_T2_gpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr4;
}

static inline void gen_op_store_T0_gpr_gpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr4;
}

static inline void gen_op_store_T1_gpr_gpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr4;
}

static inline void gen_op_load_crf_T0_crf4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf4;
}

static inline void gen_op_load_crf_T1_crf4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf4;
}

static inline void gen_op_store_T0_crf_crf4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf4;
}

static inline void gen_op_store_T1_crf_crf4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf4;
}

static inline void gen_op_load_fpscr_T0_fpscr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr4;
}

static inline void gen_op_store_T0_fpscr_fpscr4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr4;
}

static inline void gen_op_clear_fpscr_fpscr4(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr4;
}

static inline void gen_op_load_fpr_FT0_fpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr4;
}

static inline void gen_op_store_FT0_fpr_fpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr4;
}

static inline void gen_op_load_fpr_FT1_fpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr4;
}

static inline void gen_op_store_FT1_fpr_fpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr4;
}

static inline void gen_op_load_fpr_FT2_fpr4(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr4;
}

static inline void gen_op_load_gpr_T0_gpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr5;
}

static inline void gen_op_load_gpr_T1_gpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr5;
}

static inline void gen_op_load_gpr_T2_gpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr5;
}

static inline void gen_op_store_T0_gpr_gpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr5;
}

static inline void gen_op_store_T1_gpr_gpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr5;
}

static inline void gen_op_load_crf_T0_crf5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf5;
}

static inline void gen_op_load_crf_T1_crf5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf5;
}

static inline void gen_op_store_T0_crf_crf5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf5;
}

static inline void gen_op_store_T1_crf_crf5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf5;
}

static inline void gen_op_load_fpscr_T0_fpscr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr5;
}

static inline void gen_op_store_T0_fpscr_fpscr5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr5;
}

static inline void gen_op_clear_fpscr_fpscr5(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr5;
}

static inline void gen_op_load_fpr_FT0_fpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr5;
}

static inline void gen_op_store_FT0_fpr_fpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr5;
}

static inline void gen_op_load_fpr_FT1_fpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr5;
}

static inline void gen_op_store_FT1_fpr_fpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr5;
}

static inline void gen_op_load_fpr_FT2_fpr5(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr5;
}

static inline void gen_op_load_gpr_T0_gpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr6;
}

static inline void gen_op_load_gpr_T1_gpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr6;
}

static inline void gen_op_load_gpr_T2_gpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr6;
}

static inline void gen_op_store_T0_gpr_gpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr6;
}

static inline void gen_op_store_T1_gpr_gpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr6;
}

static inline void gen_op_load_crf_T0_crf6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf6;
}

static inline void gen_op_load_crf_T1_crf6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf6;
}

static inline void gen_op_store_T0_crf_crf6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf6;
}

static inline void gen_op_store_T1_crf_crf6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf6;
}

static inline void gen_op_load_fpscr_T0_fpscr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr6;
}

static inline void gen_op_store_T0_fpscr_fpscr6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr6;
}

static inline void gen_op_clear_fpscr_fpscr6(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr6;
}

static inline void gen_op_load_fpr_FT0_fpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr6;
}

static inline void gen_op_store_FT0_fpr_fpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr6;
}

static inline void gen_op_load_fpr_FT1_fpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr6;
}

static inline void gen_op_store_FT1_fpr_fpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr6;
}

static inline void gen_op_load_fpr_FT2_fpr6(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr6;
}

static inline void gen_op_load_gpr_T0_gpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr7;
}

static inline void gen_op_load_gpr_T1_gpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr7;
}

static inline void gen_op_load_gpr_T2_gpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr7;
}

static inline void gen_op_store_T0_gpr_gpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr7;
}

static inline void gen_op_store_T1_gpr_gpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr7;
}

static inline void gen_op_load_crf_T0_crf7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T0_crf7;
}

static inline void gen_op_load_crf_T1_crf7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_crf_T1_crf7;
}

static inline void gen_op_store_T0_crf_crf7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_crf_crf7;
}

static inline void gen_op_store_T1_crf_crf7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_crf_crf7;
}

static inline void gen_op_load_fpscr_T0_fpscr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr_T0_fpscr7;
}

static inline void gen_op_store_T0_fpscr_fpscr7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_fpscr_fpscr7;
}

static inline void gen_op_clear_fpscr_fpscr7(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_fpscr_fpscr7;
}

static inline void gen_op_load_fpr_FT0_fpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr7;
}

static inline void gen_op_store_FT0_fpr_fpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr7;
}

static inline void gen_op_load_fpr_FT1_fpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr7;
}

static inline void gen_op_store_FT1_fpr_fpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr7;
}

static inline void gen_op_load_fpr_FT2_fpr7(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr7;
}

static inline void gen_op_load_gpr_T0_gpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr8;
}

static inline void gen_op_load_gpr_T1_gpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr8;
}

static inline void gen_op_load_gpr_T2_gpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr8;
}

static inline void gen_op_store_T0_gpr_gpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr8;
}

static inline void gen_op_store_T1_gpr_gpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr8;
}

static inline void gen_op_load_fpr_FT0_fpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr8;
}

static inline void gen_op_store_FT0_fpr_fpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr8;
}

static inline void gen_op_load_fpr_FT1_fpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr8;
}

static inline void gen_op_store_FT1_fpr_fpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr8;
}

static inline void gen_op_load_fpr_FT2_fpr8(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr8;
}

static inline void gen_op_load_gpr_T0_gpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr9;
}

static inline void gen_op_load_gpr_T1_gpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr9;
}

static inline void gen_op_load_gpr_T2_gpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr9;
}

static inline void gen_op_store_T0_gpr_gpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr9;
}

static inline void gen_op_store_T1_gpr_gpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr9;
}

static inline void gen_op_load_fpr_FT0_fpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr9;
}

static inline void gen_op_store_FT0_fpr_fpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr9;
}

static inline void gen_op_load_fpr_FT1_fpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr9;
}

static inline void gen_op_store_FT1_fpr_fpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr9;
}

static inline void gen_op_load_fpr_FT2_fpr9(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr9;
}

static inline void gen_op_load_gpr_T0_gpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr10;
}

static inline void gen_op_load_gpr_T1_gpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr10;
}

static inline void gen_op_load_gpr_T2_gpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr10;
}

static inline void gen_op_store_T0_gpr_gpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr10;
}

static inline void gen_op_store_T1_gpr_gpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr10;
}

static inline void gen_op_load_fpr_FT0_fpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr10;
}

static inline void gen_op_store_FT0_fpr_fpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr10;
}

static inline void gen_op_load_fpr_FT1_fpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr10;
}

static inline void gen_op_store_FT1_fpr_fpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr10;
}

static inline void gen_op_load_fpr_FT2_fpr10(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr10;
}

static inline void gen_op_load_gpr_T0_gpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr11;
}

static inline void gen_op_load_gpr_T1_gpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr11;
}

static inline void gen_op_load_gpr_T2_gpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr11;
}

static inline void gen_op_store_T0_gpr_gpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr11;
}

static inline void gen_op_store_T1_gpr_gpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr11;
}

static inline void gen_op_load_fpr_FT0_fpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr11;
}

static inline void gen_op_store_FT0_fpr_fpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr11;
}

static inline void gen_op_load_fpr_FT1_fpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr11;
}

static inline void gen_op_store_FT1_fpr_fpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr11;
}

static inline void gen_op_load_fpr_FT2_fpr11(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr11;
}

static inline void gen_op_load_gpr_T0_gpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr12;
}

static inline void gen_op_load_gpr_T1_gpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr12;
}

static inline void gen_op_load_gpr_T2_gpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr12;
}

static inline void gen_op_store_T0_gpr_gpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr12;
}

static inline void gen_op_store_T1_gpr_gpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr12;
}

static inline void gen_op_load_fpr_FT0_fpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr12;
}

static inline void gen_op_store_FT0_fpr_fpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr12;
}

static inline void gen_op_load_fpr_FT1_fpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr12;
}

static inline void gen_op_store_FT1_fpr_fpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr12;
}

static inline void gen_op_load_fpr_FT2_fpr12(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr12;
}

static inline void gen_op_load_gpr_T0_gpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr13;
}

static inline void gen_op_load_gpr_T1_gpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr13;
}

static inline void gen_op_load_gpr_T2_gpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr13;
}

static inline void gen_op_store_T0_gpr_gpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr13;
}

static inline void gen_op_store_T1_gpr_gpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr13;
}

static inline void gen_op_load_fpr_FT0_fpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr13;
}

static inline void gen_op_store_FT0_fpr_fpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr13;
}

static inline void gen_op_load_fpr_FT1_fpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr13;
}

static inline void gen_op_store_FT1_fpr_fpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr13;
}

static inline void gen_op_load_fpr_FT2_fpr13(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr13;
}

static inline void gen_op_load_gpr_T0_gpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr14;
}

static inline void gen_op_load_gpr_T1_gpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr14;
}

static inline void gen_op_load_gpr_T2_gpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr14;
}

static inline void gen_op_store_T0_gpr_gpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr14;
}

static inline void gen_op_store_T1_gpr_gpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr14;
}

static inline void gen_op_load_fpr_FT0_fpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr14;
}

static inline void gen_op_store_FT0_fpr_fpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr14;
}

static inline void gen_op_load_fpr_FT1_fpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr14;
}

static inline void gen_op_store_FT1_fpr_fpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr14;
}

static inline void gen_op_load_fpr_FT2_fpr14(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr14;
}

static inline void gen_op_load_gpr_T0_gpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr15;
}

static inline void gen_op_load_gpr_T1_gpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr15;
}

static inline void gen_op_load_gpr_T2_gpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr15;
}

static inline void gen_op_store_T0_gpr_gpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr15;
}

static inline void gen_op_store_T1_gpr_gpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr15;
}

static inline void gen_op_load_fpr_FT0_fpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr15;
}

static inline void gen_op_store_FT0_fpr_fpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr15;
}

static inline void gen_op_load_fpr_FT1_fpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr15;
}

static inline void gen_op_store_FT1_fpr_fpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr15;
}

static inline void gen_op_load_fpr_FT2_fpr15(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr15;
}

static inline void gen_op_load_gpr_T0_gpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr16;
}

static inline void gen_op_load_gpr_T1_gpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr16;
}

static inline void gen_op_load_gpr_T2_gpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr16;
}

static inline void gen_op_store_T0_gpr_gpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr16;
}

static inline void gen_op_store_T1_gpr_gpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr16;
}

static inline void gen_op_load_fpr_FT0_fpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr16;
}

static inline void gen_op_store_FT0_fpr_fpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr16;
}

static inline void gen_op_load_fpr_FT1_fpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr16;
}

static inline void gen_op_store_FT1_fpr_fpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr16;
}

static inline void gen_op_load_fpr_FT2_fpr16(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr16;
}

static inline void gen_op_load_gpr_T0_gpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr17;
}

static inline void gen_op_load_gpr_T1_gpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr17;
}

static inline void gen_op_load_gpr_T2_gpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr17;
}

static inline void gen_op_store_T0_gpr_gpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr17;
}

static inline void gen_op_store_T1_gpr_gpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr17;
}

static inline void gen_op_load_fpr_FT0_fpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr17;
}

static inline void gen_op_store_FT0_fpr_fpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr17;
}

static inline void gen_op_load_fpr_FT1_fpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr17;
}

static inline void gen_op_store_FT1_fpr_fpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr17;
}

static inline void gen_op_load_fpr_FT2_fpr17(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr17;
}

static inline void gen_op_load_gpr_T0_gpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr18;
}

static inline void gen_op_load_gpr_T1_gpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr18;
}

static inline void gen_op_load_gpr_T2_gpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr18;
}

static inline void gen_op_store_T0_gpr_gpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr18;
}

static inline void gen_op_store_T1_gpr_gpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr18;
}

static inline void gen_op_load_fpr_FT0_fpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr18;
}

static inline void gen_op_store_FT0_fpr_fpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr18;
}

static inline void gen_op_load_fpr_FT1_fpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr18;
}

static inline void gen_op_store_FT1_fpr_fpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr18;
}

static inline void gen_op_load_fpr_FT2_fpr18(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr18;
}

static inline void gen_op_load_gpr_T0_gpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr19;
}

static inline void gen_op_load_gpr_T1_gpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr19;
}

static inline void gen_op_load_gpr_T2_gpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr19;
}

static inline void gen_op_store_T0_gpr_gpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr19;
}

static inline void gen_op_store_T1_gpr_gpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr19;
}

static inline void gen_op_load_fpr_FT0_fpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr19;
}

static inline void gen_op_store_FT0_fpr_fpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr19;
}

static inline void gen_op_load_fpr_FT1_fpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr19;
}

static inline void gen_op_store_FT1_fpr_fpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr19;
}

static inline void gen_op_load_fpr_FT2_fpr19(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr19;
}

static inline void gen_op_load_gpr_T0_gpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr20;
}

static inline void gen_op_load_gpr_T1_gpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr20;
}

static inline void gen_op_load_gpr_T2_gpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr20;
}

static inline void gen_op_store_T0_gpr_gpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr20;
}

static inline void gen_op_store_T1_gpr_gpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr20;
}

static inline void gen_op_load_fpr_FT0_fpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr20;
}

static inline void gen_op_store_FT0_fpr_fpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr20;
}

static inline void gen_op_load_fpr_FT1_fpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr20;
}

static inline void gen_op_store_FT1_fpr_fpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr20;
}

static inline void gen_op_load_fpr_FT2_fpr20(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr20;
}

static inline void gen_op_load_gpr_T0_gpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr21;
}

static inline void gen_op_load_gpr_T1_gpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr21;
}

static inline void gen_op_load_gpr_T2_gpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr21;
}

static inline void gen_op_store_T0_gpr_gpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr21;
}

static inline void gen_op_store_T1_gpr_gpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr21;
}

static inline void gen_op_load_fpr_FT0_fpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr21;
}

static inline void gen_op_store_FT0_fpr_fpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr21;
}

static inline void gen_op_load_fpr_FT1_fpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr21;
}

static inline void gen_op_store_FT1_fpr_fpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr21;
}

static inline void gen_op_load_fpr_FT2_fpr21(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr21;
}

static inline void gen_op_load_gpr_T0_gpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr22;
}

static inline void gen_op_load_gpr_T1_gpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr22;
}

static inline void gen_op_load_gpr_T2_gpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr22;
}

static inline void gen_op_store_T0_gpr_gpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr22;
}

static inline void gen_op_store_T1_gpr_gpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr22;
}

static inline void gen_op_load_fpr_FT0_fpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr22;
}

static inline void gen_op_store_FT0_fpr_fpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr22;
}

static inline void gen_op_load_fpr_FT1_fpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr22;
}

static inline void gen_op_store_FT1_fpr_fpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr22;
}

static inline void gen_op_load_fpr_FT2_fpr22(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr22;
}

static inline void gen_op_load_gpr_T0_gpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr23;
}

static inline void gen_op_load_gpr_T1_gpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr23;
}

static inline void gen_op_load_gpr_T2_gpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr23;
}

static inline void gen_op_store_T0_gpr_gpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr23;
}

static inline void gen_op_store_T1_gpr_gpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr23;
}

static inline void gen_op_load_fpr_FT0_fpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr23;
}

static inline void gen_op_store_FT0_fpr_fpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr23;
}

static inline void gen_op_load_fpr_FT1_fpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr23;
}

static inline void gen_op_store_FT1_fpr_fpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr23;
}

static inline void gen_op_load_fpr_FT2_fpr23(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr23;
}

static inline void gen_op_load_gpr_T0_gpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr24;
}

static inline void gen_op_load_gpr_T1_gpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr24;
}

static inline void gen_op_load_gpr_T2_gpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr24;
}

static inline void gen_op_store_T0_gpr_gpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr24;
}

static inline void gen_op_store_T1_gpr_gpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr24;
}

static inline void gen_op_load_fpr_FT0_fpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr24;
}

static inline void gen_op_store_FT0_fpr_fpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr24;
}

static inline void gen_op_load_fpr_FT1_fpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr24;
}

static inline void gen_op_store_FT1_fpr_fpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr24;
}

static inline void gen_op_load_fpr_FT2_fpr24(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr24;
}

static inline void gen_op_load_gpr_T0_gpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr25;
}

static inline void gen_op_load_gpr_T1_gpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr25;
}

static inline void gen_op_load_gpr_T2_gpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr25;
}

static inline void gen_op_store_T0_gpr_gpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr25;
}

static inline void gen_op_store_T1_gpr_gpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr25;
}

static inline void gen_op_load_fpr_FT0_fpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr25;
}

static inline void gen_op_store_FT0_fpr_fpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr25;
}

static inline void gen_op_load_fpr_FT1_fpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr25;
}

static inline void gen_op_store_FT1_fpr_fpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr25;
}

static inline void gen_op_load_fpr_FT2_fpr25(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr25;
}

static inline void gen_op_load_gpr_T0_gpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr26;
}

static inline void gen_op_load_gpr_T1_gpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr26;
}

static inline void gen_op_load_gpr_T2_gpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr26;
}

static inline void gen_op_store_T0_gpr_gpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr26;
}

static inline void gen_op_store_T1_gpr_gpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr26;
}

static inline void gen_op_load_fpr_FT0_fpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr26;
}

static inline void gen_op_store_FT0_fpr_fpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr26;
}

static inline void gen_op_load_fpr_FT1_fpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr26;
}

static inline void gen_op_store_FT1_fpr_fpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr26;
}

static inline void gen_op_load_fpr_FT2_fpr26(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr26;
}

static inline void gen_op_load_gpr_T0_gpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr27;
}

static inline void gen_op_load_gpr_T1_gpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr27;
}

static inline void gen_op_load_gpr_T2_gpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr27;
}

static inline void gen_op_store_T0_gpr_gpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr27;
}

static inline void gen_op_store_T1_gpr_gpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr27;
}

static inline void gen_op_load_fpr_FT0_fpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr27;
}

static inline void gen_op_store_FT0_fpr_fpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr27;
}

static inline void gen_op_load_fpr_FT1_fpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr27;
}

static inline void gen_op_store_FT1_fpr_fpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr27;
}

static inline void gen_op_load_fpr_FT2_fpr27(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr27;
}

static inline void gen_op_load_gpr_T0_gpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr28;
}

static inline void gen_op_load_gpr_T1_gpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr28;
}

static inline void gen_op_load_gpr_T2_gpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr28;
}

static inline void gen_op_store_T0_gpr_gpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr28;
}

static inline void gen_op_store_T1_gpr_gpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr28;
}

static inline void gen_op_load_fpr_FT0_fpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr28;
}

static inline void gen_op_store_FT0_fpr_fpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr28;
}

static inline void gen_op_load_fpr_FT1_fpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr28;
}

static inline void gen_op_store_FT1_fpr_fpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr28;
}

static inline void gen_op_load_fpr_FT2_fpr28(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr28;
}

static inline void gen_op_load_gpr_T0_gpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr29;
}

static inline void gen_op_load_gpr_T1_gpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr29;
}

static inline void gen_op_load_gpr_T2_gpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr29;
}

static inline void gen_op_store_T0_gpr_gpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr29;
}

static inline void gen_op_store_T1_gpr_gpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr29;
}

static inline void gen_op_load_fpr_FT0_fpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr29;
}

static inline void gen_op_store_FT0_fpr_fpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr29;
}

static inline void gen_op_load_fpr_FT1_fpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr29;
}

static inline void gen_op_store_FT1_fpr_fpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr29;
}

static inline void gen_op_load_fpr_FT2_fpr29(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr29;
}

static inline void gen_op_load_gpr_T0_gpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr30;
}

static inline void gen_op_load_gpr_T1_gpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr30;
}

static inline void gen_op_load_gpr_T2_gpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr30;
}

static inline void gen_op_store_T0_gpr_gpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr30;
}

static inline void gen_op_store_T1_gpr_gpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr30;
}

static inline void gen_op_load_fpr_FT0_fpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr30;
}

static inline void gen_op_store_FT0_fpr_fpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr30;
}

static inline void gen_op_load_fpr_FT1_fpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr30;
}

static inline void gen_op_store_FT1_fpr_fpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr30;
}

static inline void gen_op_load_fpr_FT2_fpr30(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr30;
}

static inline void gen_op_load_gpr_T0_gpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T0_gpr31;
}

static inline void gen_op_load_gpr_T1_gpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T1_gpr31;
}

static inline void gen_op_load_gpr_T2_gpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_gpr_T2_gpr31;
}

static inline void gen_op_store_T0_gpr_gpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T0_gpr_gpr31;
}

static inline void gen_op_store_T1_gpr_gpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_store_T1_gpr_gpr31;
}

static inline void gen_op_load_fpr_FT0_fpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT0_fpr31;
}

static inline void gen_op_store_FT0_fpr_fpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT0_fpr_fpr31;
}

static inline void gen_op_load_fpr_FT1_fpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT1_fpr31;
}

static inline void gen_op_store_FT1_fpr_fpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_store_FT1_fpr_fpr31;
}

static inline void gen_op_load_fpr_FT2_fpr31(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpr_FT2_fpr31;
}

static inline void gen_op_print_mem_EA(void)
{
    *gen_opc_ptr++ = INDEX_op_print_mem_EA;
}

static inline void gen_op_set_Rc0(void)
{
    *gen_opc_ptr++ = INDEX_op_set_Rc0;
}

static inline void gen_op_set_Rc1(void)
{
    *gen_opc_ptr++ = INDEX_op_set_Rc1;
}

static inline void gen_op_reset_T0(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_T0;
}

static inline void gen_op_set_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_T0;
}

static inline void gen_op_set_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_set_T1;
}

static inline void gen_op_move_T1_T0(void)
{
    *gen_opc_ptr++ = INDEX_op_move_T1_T0;
}

static inline void gen_op_move_T2_T0(void)
{
    *gen_opc_ptr++ = INDEX_op_move_T2_T0;
}

static inline void gen_op_raise_exception_err(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_raise_exception_err;
}

static inline void gen_op_update_nip(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_update_nip;
}

static inline void gen_op_debug(void)
{
    *gen_opc_ptr++ = INDEX_op_debug;
}

static inline void gen_op_exit_tb(void)
{
    *gen_opc_ptr++ = INDEX_op_exit_tb;
}

static inline void gen_op_load_cr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_cr;
}

static inline void gen_op_store_cr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_store_cr;
}

static inline void gen_op_load_cro(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_load_cro;
}

static inline void gen_op_store_cro(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_store_cro;
}

static inline void gen_op_load_xer_cr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_xer_cr;
}

static inline void gen_op_clear_xer_ov(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_xer_ov;
}

static inline void gen_op_clear_xer_ca(void)
{
    *gen_opc_ptr++ = INDEX_op_clear_xer_ca;
}

static inline void gen_op_load_xer_bc(void)
{
    *gen_opc_ptr++ = INDEX_op_load_xer_bc;
}

static inline void gen_op_store_xer_bc(void)
{
    *gen_opc_ptr++ = INDEX_op_store_xer_bc;
}

static inline void gen_op_load_xer(void)
{
    *gen_opc_ptr++ = INDEX_op_load_xer;
}

static inline void gen_op_store_xer(void)
{
    *gen_opc_ptr++ = INDEX_op_store_xer;
}

static inline void gen_op_load_spr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_load_spr;
}

static inline void gen_op_store_spr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_store_spr;
}

static inline void gen_op_load_dump_spr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_load_dump_spr;
}

static inline void gen_op_store_dump_spr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_store_dump_spr;
}

static inline void gen_op_mask_spr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_mask_spr;
}

static inline void gen_op_load_lr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_lr;
}

static inline void gen_op_store_lr(void)
{
    *gen_opc_ptr++ = INDEX_op_store_lr;
}

static inline void gen_op_load_ctr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_ctr;
}

static inline void gen_op_store_ctr(void)
{
    *gen_opc_ptr++ = INDEX_op_store_ctr;
}

static inline void gen_op_load_tbl(void)
{
    *gen_opc_ptr++ = INDEX_op_load_tbl;
}

static inline void gen_op_load_tbu(void)
{
    *gen_opc_ptr++ = INDEX_op_load_tbu;
}

static inline void gen_op_load_fpscr(void)
{
    *gen_opc_ptr++ = INDEX_op_load_fpscr;
}

static inline void gen_op_store_fpscr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_store_fpscr;
}

static inline void gen_op_reset_scrfx(void)
{
    *gen_opc_ptr++ = INDEX_op_reset_scrfx;
}

static inline void gen_op_getbit_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_getbit_T0;
}

static inline void gen_op_getbit_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_getbit_T1;
}

static inline void gen_op_setcrfbit(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_setcrfbit;
}

static inline void gen_op_setlr(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_setlr;
}

static inline void gen_op_goto_tb0(void)
{
    *gen_opc_ptr++ = INDEX_op_goto_tb0;
}

static inline void gen_op_goto_tb1(void)
{
    *gen_opc_ptr++ = INDEX_op_goto_tb1;
}

static inline void gen_op_b_T1(void)
{
    *gen_opc_ptr++ = INDEX_op_b_T1;
}

static inline void gen_op_jz_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_jz_T0;
}

static inline void gen_op_btest_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_btest_T1;
}

static inline void gen_op_movl_T1_ctr(void)
{
    *gen_opc_ptr++ = INDEX_op_movl_T1_ctr;
}

static inline void gen_op_movl_T1_lr(void)
{
    *gen_opc_ptr++ = INDEX_op_movl_T1_lr;
}

static inline void gen_op_test_ctr(void)
{
    *gen_opc_ptr++ = INDEX_op_test_ctr;
}

static inline void gen_op_test_ctr_true(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_ctr_true;
}

static inline void gen_op_test_ctr_false(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_ctr_false;
}

static inline void gen_op_test_ctrz(void)
{
    *gen_opc_ptr++ = INDEX_op_test_ctrz;
}

static inline void gen_op_test_ctrz_true(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_ctrz_true;
}

static inline void gen_op_test_ctrz_false(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_ctrz_false;
}

static inline void gen_op_test_true(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_true;
}

static inline void gen_op_test_false(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_test_false;
}

static inline void gen_op_dec_ctr(void)
{
    *gen_opc_ptr++ = INDEX_op_dec_ctr;
}

static inline void gen_op_add(void)
{
    *gen_opc_ptr++ = INDEX_op_add;
}

static inline void gen_op_check_addo(void)
{
    *gen_opc_ptr++ = INDEX_op_check_addo;
}

static inline void gen_op_check_addc(void)
{
    *gen_opc_ptr++ = INDEX_op_check_addc;
}

static inline void gen_op_adde(void)
{
    *gen_opc_ptr++ = INDEX_op_adde;
}

static inline void gen_op_addi(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_addi;
}

static inline void gen_op_add_me(void)
{
    *gen_opc_ptr++ = INDEX_op_add_me;
}

static inline void gen_op_addmeo(void)
{
    *gen_opc_ptr++ = INDEX_op_addmeo;
}

static inline void gen_op_addmeo_64(void)
{
    *gen_opc_ptr++ = INDEX_op_addmeo_64;
}

static inline void gen_op_add_ze(void)
{
    *gen_opc_ptr++ = INDEX_op_add_ze;
}

static inline void gen_op_divw(void)
{
    *gen_opc_ptr++ = INDEX_op_divw;
}

static inline void gen_op_divwo(void)
{
    *gen_opc_ptr++ = INDEX_op_divwo;
}

static inline void gen_op_divwu(void)
{
    *gen_opc_ptr++ = INDEX_op_divwu;
}

static inline void gen_op_divwuo(void)
{
    *gen_opc_ptr++ = INDEX_op_divwuo;
}

static inline void gen_op_mulhw(void)
{
    *gen_opc_ptr++ = INDEX_op_mulhw;
}

static inline void gen_op_mulhwu(void)
{
    *gen_opc_ptr++ = INDEX_op_mulhwu;
}

static inline void gen_op_mulli(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_mulli;
}

static inline void gen_op_mullw(void)
{
    *gen_opc_ptr++ = INDEX_op_mullw;
}

static inline void gen_op_mullwo(void)
{
    *gen_opc_ptr++ = INDEX_op_mullwo;
}

static inline void gen_op_neg(void)
{
    *gen_opc_ptr++ = INDEX_op_neg;
}

static inline void gen_op_nego(void)
{
    *gen_opc_ptr++ = INDEX_op_nego;
}

static inline void gen_op_subf(void)
{
    *gen_opc_ptr++ = INDEX_op_subf;
}

static inline void gen_op_check_subfo(void)
{
    *gen_opc_ptr++ = INDEX_op_check_subfo;
}

static inline void gen_op_check_subfc(void)
{
    *gen_opc_ptr++ = INDEX_op_check_subfc;
}

static inline void gen_op_subfe(void)
{
    *gen_opc_ptr++ = INDEX_op_subfe;
}

static inline void gen_op_subfic(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_subfic;
}

static inline void gen_op_subfme(void)
{
    *gen_opc_ptr++ = INDEX_op_subfme;
}

static inline void gen_op_subfmeo(void)
{
    *gen_opc_ptr++ = INDEX_op_subfmeo;
}

static inline void gen_op_subfze(void)
{
    *gen_opc_ptr++ = INDEX_op_subfze;
}

static inline void gen_op_subfzeo(void)
{
    *gen_opc_ptr++ = INDEX_op_subfzeo;
}

static inline void gen_op_cmp(void)
{
    *gen_opc_ptr++ = INDEX_op_cmp;
}

static inline void gen_op_cmpi(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_cmpi;
}

static inline void gen_op_cmpl(void)
{
    *gen_opc_ptr++ = INDEX_op_cmpl;
}

static inline void gen_op_cmpli(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_cmpli;
}

static inline void gen_op_isel(void)
{
    *gen_opc_ptr++ = INDEX_op_isel;
}

static inline void gen_op_popcntb(void)
{
    *gen_opc_ptr++ = INDEX_op_popcntb;
}

static inline void gen_op_and(void)
{
    *gen_opc_ptr++ = INDEX_op_and;
}

static inline void gen_op_andc(void)
{
    *gen_opc_ptr++ = INDEX_op_andc;
}

static inline void gen_op_andi_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_andi_T0;
}

static inline void gen_op_andi_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_andi_T1;
}

static inline void gen_op_cntlzw(void)
{
    *gen_opc_ptr++ = INDEX_op_cntlzw;
}

static inline void gen_op_eqv(void)
{
    *gen_opc_ptr++ = INDEX_op_eqv;
}

static inline void gen_op_extsb(void)
{
    *gen_opc_ptr++ = INDEX_op_extsb;
}

static inline void gen_op_extsh(void)
{
    *gen_opc_ptr++ = INDEX_op_extsh;
}

static inline void gen_op_nand(void)
{
    *gen_opc_ptr++ = INDEX_op_nand;
}

static inline void gen_op_nor(void)
{
    *gen_opc_ptr++ = INDEX_op_nor;
}

static inline void gen_op_or(void)
{
    *gen_opc_ptr++ = INDEX_op_or;
}

static inline void gen_op_orc(void)
{
    *gen_opc_ptr++ = INDEX_op_orc;
}

static inline void gen_op_ori(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_ori;
}

static inline void gen_op_xor(void)
{
    *gen_opc_ptr++ = INDEX_op_xor;
}

static inline void gen_op_xori(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_xori;
}

static inline void gen_op_rotl32_T0_T1(void)
{
    *gen_opc_ptr++ = INDEX_op_rotl32_T0_T1;
}

static inline void gen_op_rotli32_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_rotli32_T0;
}

static inline void gen_op_slw(void)
{
    *gen_opc_ptr++ = INDEX_op_slw;
}

static inline void gen_op_sraw(void)
{
    *gen_opc_ptr++ = INDEX_op_sraw;
}

static inline void gen_op_srawi(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_srawi;
}

static inline void gen_op_srw(void)
{
    *gen_opc_ptr++ = INDEX_op_srw;
}

static inline void gen_op_sl_T0_T1(void)
{
    *gen_opc_ptr++ = INDEX_op_sl_T0_T1;
}

static inline void gen_op_sli_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_sli_T0;
}

static inline void gen_op_srl_T0_T1(void)
{
    *gen_opc_ptr++ = INDEX_op_srl_T0_T1;
}

static inline void gen_op_srli_T0(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_srli_T0;
}

static inline void gen_op_srli_T1(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_srli_T1;
}

static inline void gen_op_fadd(void)
{
    *gen_opc_ptr++ = INDEX_op_fadd;
}

static inline void gen_op_fsub(void)
{
    *gen_opc_ptr++ = INDEX_op_fsub;
}

static inline void gen_op_fmul(void)
{
    *gen_opc_ptr++ = INDEX_op_fmul;
}

static inline void gen_op_fdiv(void)
{
    *gen_opc_ptr++ = INDEX_op_fdiv;
}

static inline void gen_op_fsqrt(void)
{
    *gen_opc_ptr++ = INDEX_op_fsqrt;
}

static inline void gen_op_fres(void)
{
    *gen_opc_ptr++ = INDEX_op_fres;
}

static inline void gen_op_frsqrte(void)
{
    *gen_opc_ptr++ = INDEX_op_frsqrte;
}

static inline void gen_op_fsel(void)
{
    *gen_opc_ptr++ = INDEX_op_fsel;
}

static inline void gen_op_fmadd(void)
{
    *gen_opc_ptr++ = INDEX_op_fmadd;
}

static inline void gen_op_fmsub(void)
{
    *gen_opc_ptr++ = INDEX_op_fmsub;
}

static inline void gen_op_fnmadd(void)
{
    *gen_opc_ptr++ = INDEX_op_fnmadd;
}

static inline void gen_op_fnmsub(void)
{
    *gen_opc_ptr++ = INDEX_op_fnmsub;
}

static inline void gen_op_frsp(void)
{
    *gen_opc_ptr++ = INDEX_op_frsp;
}

static inline void gen_op_fctiw(void)
{
    *gen_opc_ptr++ = INDEX_op_fctiw;
}

static inline void gen_op_fctiwz(void)
{
    *gen_opc_ptr++ = INDEX_op_fctiwz;
}

static inline void gen_op_fcmpu(void)
{
    *gen_opc_ptr++ = INDEX_op_fcmpu;
}

static inline void gen_op_fcmpo(void)
{
    *gen_opc_ptr++ = INDEX_op_fcmpo;
}

static inline void gen_op_fabs(void)
{
    *gen_opc_ptr++ = INDEX_op_fabs;
}

static inline void gen_op_fnabs(void)
{
    *gen_opc_ptr++ = INDEX_op_fnabs;
}

static inline void gen_op_fneg(void)
{
    *gen_opc_ptr++ = INDEX_op_fneg;
}

static inline void gen_op_lbz_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lbz_raw;
}

static inline void gen_op_lha_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lha_raw;
}

static inline void gen_op_lhz_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lhz_raw;
}

static inline void gen_op_lwz_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwz_raw;
}

static inline void gen_op_lha_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lha_le_raw;
}

static inline void gen_op_lhz_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lhz_le_raw;
}

static inline void gen_op_lwz_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwz_le_raw;
}

static inline void gen_op_stb_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stb_raw;
}

static inline void gen_op_sth_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_sth_raw;
}

static inline void gen_op_stw_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stw_raw;
}

static inline void gen_op_sth_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_sth_le_raw;
}

static inline void gen_op_stw_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stw_le_raw;
}

static inline void gen_op_lhbr_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lhbr_raw;
}

static inline void gen_op_lwbr_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwbr_raw;
}

static inline void gen_op_sthbr_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_sthbr_raw;
}

static inline void gen_op_stwbr_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stwbr_raw;
}

static inline void gen_op_lhbr_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lhbr_le_raw;
}

static inline void gen_op_lwbr_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwbr_le_raw;
}

static inline void gen_op_sthbr_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_sthbr_le_raw;
}

static inline void gen_op_stwbr_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stwbr_le_raw;
}

static inline void gen_op_lmw_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_lmw_raw;
}

static inline void gen_op_lmw_le_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_lmw_le_raw;
}

static inline void gen_op_stmw_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_stmw_raw;
}

static inline void gen_op_stmw_le_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_stmw_le_raw;
}

static inline void gen_op_lswi_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_lswi_raw;
}

static inline void gen_op_lswi_le_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_lswi_le_raw;
}

static inline void gen_op_lswx_raw(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_lswx_raw;
}

static inline void gen_op_lswx_le_raw(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_lswx_le_raw;
}

static inline void gen_op_stsw_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_stsw_raw;
}

static inline void gen_op_stsw_le_raw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_stsw_le_raw;
}

static inline void gen_op_stfd_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stfd_raw;
}

static inline void gen_op_stfs_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stfs_raw;
}

static inline void gen_op_stfd_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stfd_le_raw;
}

static inline void gen_op_stfs_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stfs_le_raw;
}

static inline void gen_op_lfd_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lfd_raw;
}

static inline void gen_op_lfs_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lfs_raw;
}

static inline void gen_op_lfd_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lfd_le_raw;
}

static inline void gen_op_lfs_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lfs_le_raw;
}

static inline void gen_op_lwarx_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwarx_raw;
}

static inline void gen_op_lwarx_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_lwarx_le_raw;
}

static inline void gen_op_stwcx_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stwcx_raw;
}

static inline void gen_op_stwcx_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_stwcx_le_raw;
}

static inline void gen_op_dcbz_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_dcbz_raw;
}

static inline void gen_op_icbi_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_icbi_raw;
}

static inline void gen_op_eciwx_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_eciwx_raw;
}

static inline void gen_op_ecowx_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ecowx_raw;
}

static inline void gen_op_eciwx_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_eciwx_le_raw;
}

static inline void gen_op_ecowx_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_ecowx_le_raw;
}

static inline void gen_op_POWER_lscbx_raw(long param1, long param2, long param3)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opparam_ptr++ = param3;
    *gen_opc_ptr++ = INDEX_op_POWER_lscbx_raw;
}

static inline void gen_op_POWER2_lfq_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER2_lfq_raw;
}

static inline void gen_op_POWER2_lfq_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER2_lfq_le_raw;
}

static inline void gen_op_POWER2_stfq_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER2_stfq_raw;
}

static inline void gen_op_POWER2_stfq_le_raw(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER2_stfq_le_raw;
}

static inline void gen_op_check_reservation(void)
{
    *gen_opc_ptr++ = INDEX_op_check_reservation;
}

static inline void gen_op_tw(long param1)
{
    *gen_opparam_ptr++ = param1;
    *gen_opc_ptr++ = INDEX_op_tw;
}

static inline void gen_op_load_601_rtcl(void)
{
    *gen_opc_ptr++ = INDEX_op_load_601_rtcl;
}

static inline void gen_op_load_601_rtcu(void)
{
    *gen_opc_ptr++ = INDEX_op_load_601_rtcu;
}

static inline void gen_op_POWER_abs(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_abs;
}

static inline void gen_op_POWER_abso(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_abso;
}

static inline void gen_op_POWER_clcs(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_clcs;
}

static inline void gen_op_POWER_div(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_div;
}

static inline void gen_op_POWER_divo(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_divo;
}

static inline void gen_op_POWER_divs(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_divs;
}

static inline void gen_op_POWER_divso(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_divso;
}

static inline void gen_op_POWER_doz(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_doz;
}

static inline void gen_op_POWER_dozo(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_dozo;
}

static inline void gen_op_load_xer_cmp(void)
{
    *gen_opc_ptr++ = INDEX_op_load_xer_cmp;
}

static inline void gen_op_POWER_maskg(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_maskg;
}

static inline void gen_op_POWER_maskir(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_maskir;
}

static inline void gen_op_POWER_mul(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_mul;
}

static inline void gen_op_POWER_mulo(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_mulo;
}

static inline void gen_op_POWER_nabs(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_nabs;
}

static inline void gen_op_POWER_nabso(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_nabso;
}

static inline void gen_op_POWER_rlmi(long param1, long param2)
{
    *gen_opparam_ptr++ = param1;
    *gen_opparam_ptr++ = param2;
    *gen_opc_ptr++ = INDEX_op_POWER_rlmi;
}

static inline void gen_op_POWER_rrib(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_rrib;
}

static inline void gen_op_POWER_sle(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sle;
}

static inline void gen_op_POWER_sleq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sleq;
}

static inline void gen_op_POWER_sllq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sllq;
}

static inline void gen_op_POWER_slq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_slq;
}

static inline void gen_op_POWER_sraq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sraq;
}

static inline void gen_op_POWER_sre(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sre;
}

static inline void gen_op_POWER_srea(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_srea;
}

static inline void gen_op_POWER_sreq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_sreq;
}

static inline void gen_op_POWER_srlq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_srlq;
}

static inline void gen_op_POWER_srq(void)
{
    *gen_opc_ptr++ = INDEX_op_POWER_srq;
}

static inline void gen_op_405_add_T0_T2(void)
{
    *gen_opc_ptr++ = INDEX_op_405_add_T0_T2;
}

static inline void gen_op_405_mulchw(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mulchw;
}

static inline void gen_op_405_mulchwu(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mulchwu;
}

static inline void gen_op_405_mulhhw(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mulhhw;
}

static inline void gen_op_405_mulhhwu(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mulhhwu;
}

static inline void gen_op_405_mullhw(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mullhw;
}

static inline void gen_op_405_mullhwu(void)
{
    *gen_opc_ptr++ = INDEX_op_405_mullhwu;
}

static inline void gen_op_405_check_ov(void)
{
    *gen_opc_ptr++ = INDEX_op_405_check_ov;
}

static inline void gen_op_405_check_sat(void)
{
    *gen_opc_ptr++ = INDEX_op_405_check_sat;
}

static inline void gen_op_405_check_ovu(void)
{
    *gen_opc_ptr++ = INDEX_op_405_check_ovu;
}

static inline void gen_op_405_check_satu(void)
{
    *gen_opc_ptr++ = INDEX_op_405_check_satu;
}

static inline void gen_op_440_dlmzb(void)
{
    *gen_opc_ptr++ = INDEX_op_440_dlmzb;
}

static inline void gen_op_440_dlmzb_update_Rc(void)
{
    *gen_opc_ptr++ = INDEX_op_440_dlmzb_update_Rc;
}

