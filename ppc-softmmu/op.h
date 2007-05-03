int dyngen_code(uint8_t *gen_code_buf,
                uint16_t *label_offsets, uint16_t *jmp_offsets,
                const uint16_t *opc_buf, const uint32_t *opparam_buf, const long *gen_labels)
{
    uint8_t *gen_code_ptr;
    const uint16_t *opc_ptr;
    const uint32_t *opparam_ptr;

    gen_code_ptr = gen_code_buf;
    opc_ptr = opc_buf;
    opparam_ptr = opparam_buf;
    for(;;) {
        switch(*opc_ptr++) {
case INDEX_op_load_gpr_T0_gpr0: {
    extern void op_load_gpr_T0_gpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr0: {
    extern void op_load_gpr_T1_gpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr0: {
    extern void op_load_gpr_T2_gpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr0: {
    extern void op_store_T0_gpr_gpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr0: {
    extern void op_store_T1_gpr_gpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf0: {
    extern void op_load_crf_T0_crf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf0+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf0: {
    extern void op_load_crf_T1_crf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf0+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf0: {
    extern void op_store_T0_crf_crf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf0: {
    extern void op_store_T1_crf_crf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr0: {
    extern void op_load_fpscr_T0_fpscr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr0+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr0: {
    extern void op_store_T0_fpscr_fpscr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr0+0), 22);
    gen_code_ptr += 22;
}
break;

case INDEX_op_clear_fpscr_fpscr0: {
    extern void op_clear_fpscr_fpscr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr0+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr0: {
    extern void op_load_fpr_FT0_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr0: {
    extern void op_store_FT0_fpr_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr0: {
    extern void op_load_fpr_FT1_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr0: {
    extern void op_store_FT1_fpr_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr0: {
    extern void op_load_fpr_FT2_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr1: {
    extern void op_load_gpr_T0_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr1: {
    extern void op_load_gpr_T1_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr1: {
    extern void op_load_gpr_T2_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr1: {
    extern void op_store_T0_gpr_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr1: {
    extern void op_store_T1_gpr_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf1: {
    extern void op_load_crf_T0_crf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf1+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf1: {
    extern void op_load_crf_T1_crf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf1+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf1: {
    extern void op_store_T0_crf_crf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf1: {
    extern void op_store_T1_crf_crf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr1: {
    extern void op_load_fpscr_T0_fpscr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr1+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr1: {
    extern void op_store_T0_fpscr_fpscr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr1: {
    extern void op_clear_fpscr_fpscr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr1+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr1: {
    extern void op_load_fpr_FT0_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr1: {
    extern void op_store_FT0_fpr_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr1: {
    extern void op_load_fpr_FT1_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr1: {
    extern void op_store_FT1_fpr_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr1: {
    extern void op_load_fpr_FT2_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr2: {
    extern void op_load_gpr_T0_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr2: {
    extern void op_load_gpr_T1_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr2: {
    extern void op_load_gpr_T2_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr2: {
    extern void op_store_T0_gpr_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr2: {
    extern void op_store_T1_gpr_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf2: {
    extern void op_load_crf_T0_crf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf2+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf2: {
    extern void op_load_crf_T1_crf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf2+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf2: {
    extern void op_store_T0_crf_crf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf2: {
    extern void op_store_T1_crf_crf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr2: {
    extern void op_load_fpscr_T0_fpscr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr2+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr2: {
    extern void op_store_T0_fpscr_fpscr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr2: {
    extern void op_clear_fpscr_fpscr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr2+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr2: {
    extern void op_load_fpr_FT0_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr2: {
    extern void op_store_FT0_fpr_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr2: {
    extern void op_load_fpr_FT1_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr2: {
    extern void op_store_FT1_fpr_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr2: {
    extern void op_load_fpr_FT2_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr3: {
    extern void op_load_gpr_T0_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr3: {
    extern void op_load_gpr_T1_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr3: {
    extern void op_load_gpr_T2_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr3: {
    extern void op_store_T0_gpr_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr3: {
    extern void op_store_T1_gpr_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf3: {
    extern void op_load_crf_T0_crf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf3+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf3: {
    extern void op_load_crf_T1_crf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf3+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf3: {
    extern void op_store_T0_crf_crf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf3: {
    extern void op_store_T1_crf_crf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf3+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr3: {
    extern void op_load_fpscr_T0_fpscr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr3+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr3: {
    extern void op_store_T0_fpscr_fpscr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr3: {
    extern void op_clear_fpscr_fpscr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr3+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr3: {
    extern void op_load_fpr_FT0_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr3: {
    extern void op_store_FT0_fpr_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr3: {
    extern void op_load_fpr_FT1_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr3: {
    extern void op_store_FT1_fpr_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr3: {
    extern void op_load_fpr_FT2_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr4: {
    extern void op_load_gpr_T0_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr4: {
    extern void op_load_gpr_T1_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr4: {
    extern void op_load_gpr_T2_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr4: {
    extern void op_store_T0_gpr_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr4: {
    extern void op_store_T1_gpr_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf4: {
    extern void op_load_crf_T0_crf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf4+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf4: {
    extern void op_load_crf_T1_crf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf4+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf4: {
    extern void op_store_T0_crf_crf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf4: {
    extern void op_store_T1_crf_crf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf4+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr4: {
    extern void op_load_fpscr_T0_fpscr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr4+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr4: {
    extern void op_store_T0_fpscr_fpscr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr4: {
    extern void op_clear_fpscr_fpscr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr4+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr4: {
    extern void op_load_fpr_FT0_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr4: {
    extern void op_store_FT0_fpr_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr4: {
    extern void op_load_fpr_FT1_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr4: {
    extern void op_store_FT1_fpr_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr4: {
    extern void op_load_fpr_FT2_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr5: {
    extern void op_load_gpr_T0_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr5: {
    extern void op_load_gpr_T1_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr5: {
    extern void op_load_gpr_T2_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr5: {
    extern void op_store_T0_gpr_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr5: {
    extern void op_store_T1_gpr_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf5: {
    extern void op_load_crf_T0_crf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf5+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf5: {
    extern void op_load_crf_T1_crf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf5+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf5: {
    extern void op_store_T0_crf_crf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf5: {
    extern void op_store_T1_crf_crf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf5+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr5: {
    extern void op_load_fpscr_T0_fpscr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr5+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr5: {
    extern void op_store_T0_fpscr_fpscr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr5: {
    extern void op_clear_fpscr_fpscr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr5+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr5: {
    extern void op_load_fpr_FT0_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr5: {
    extern void op_store_FT0_fpr_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr5: {
    extern void op_load_fpr_FT1_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr5: {
    extern void op_store_FT1_fpr_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr5: {
    extern void op_load_fpr_FT2_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr6: {
    extern void op_load_gpr_T0_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr6: {
    extern void op_load_gpr_T1_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr6: {
    extern void op_load_gpr_T2_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr6: {
    extern void op_store_T0_gpr_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr6: {
    extern void op_store_T1_gpr_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf6: {
    extern void op_load_crf_T0_crf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf6+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf6: {
    extern void op_load_crf_T1_crf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf6+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf6: {
    extern void op_store_T0_crf_crf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf6: {
    extern void op_store_T1_crf_crf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf6+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr6: {
    extern void op_load_fpscr_T0_fpscr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr6+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr6: {
    extern void op_store_T0_fpscr_fpscr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr6: {
    extern void op_clear_fpscr_fpscr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr6+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr6: {
    extern void op_load_fpr_FT0_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr6: {
    extern void op_store_FT0_fpr_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr6: {
    extern void op_load_fpr_FT1_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr6: {
    extern void op_store_FT1_fpr_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr6: {
    extern void op_load_fpr_FT2_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr7: {
    extern void op_load_gpr_T0_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr7: {
    extern void op_load_gpr_T1_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr7: {
    extern void op_load_gpr_T2_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr7: {
    extern void op_store_T0_gpr_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr7: {
    extern void op_store_T1_gpr_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_crf_T0_crf7: {
    extern void op_load_crf_T0_crf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T0_crf7+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_crf_T1_crf7: {
    extern void op_load_crf_T1_crf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_crf_T1_crf7+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_crf_crf7: {
    extern void op_store_T0_crf_crf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_crf_crf7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_crf_crf7: {
    extern void op_store_T1_crf_crf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_crf_crf7+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_load_fpscr_T0_fpscr7: {
    extern void op_load_fpscr_T0_fpscr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr_T0_fpscr7+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_T0_fpscr_fpscr7: {
    extern void op_store_T0_fpscr_fpscr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_fpscr_fpscr7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_fpscr_fpscr7: {
    extern void op_clear_fpscr_fpscr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_fpscr_fpscr7+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_fpr_FT0_fpr7: {
    extern void op_load_fpr_FT0_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr7: {
    extern void op_store_FT0_fpr_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr7: {
    extern void op_load_fpr_FT1_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr7: {
    extern void op_store_FT1_fpr_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr7: {
    extern void op_load_fpr_FT2_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr8: {
    extern void op_load_gpr_T0_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr8: {
    extern void op_load_gpr_T1_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr8: {
    extern void op_load_gpr_T2_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr8: {
    extern void op_store_T0_gpr_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr8: {
    extern void op_store_T1_gpr_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr8: {
    extern void op_load_fpr_FT0_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr8: {
    extern void op_store_FT0_fpr_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr8: {
    extern void op_load_fpr_FT1_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr8: {
    extern void op_store_FT1_fpr_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr8: {
    extern void op_load_fpr_FT2_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr9: {
    extern void op_load_gpr_T0_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr9: {
    extern void op_load_gpr_T1_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr9: {
    extern void op_load_gpr_T2_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr9: {
    extern void op_store_T0_gpr_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr9: {
    extern void op_store_T1_gpr_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr9: {
    extern void op_load_fpr_FT0_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr9: {
    extern void op_store_FT0_fpr_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr9: {
    extern void op_load_fpr_FT1_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr9: {
    extern void op_store_FT1_fpr_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr9: {
    extern void op_load_fpr_FT2_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr10: {
    extern void op_load_gpr_T0_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr10: {
    extern void op_load_gpr_T1_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr10: {
    extern void op_load_gpr_T2_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr10: {
    extern void op_store_T0_gpr_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr10: {
    extern void op_store_T1_gpr_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr10: {
    extern void op_load_fpr_FT0_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr10: {
    extern void op_store_FT0_fpr_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr10: {
    extern void op_load_fpr_FT1_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr10: {
    extern void op_store_FT1_fpr_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr10: {
    extern void op_load_fpr_FT2_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr11: {
    extern void op_load_gpr_T0_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr11: {
    extern void op_load_gpr_T1_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr11: {
    extern void op_load_gpr_T2_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr11: {
    extern void op_store_T0_gpr_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr11: {
    extern void op_store_T1_gpr_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr11: {
    extern void op_load_fpr_FT0_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr11: {
    extern void op_store_FT0_fpr_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr11: {
    extern void op_load_fpr_FT1_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr11: {
    extern void op_store_FT1_fpr_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr11: {
    extern void op_load_fpr_FT2_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr12: {
    extern void op_load_gpr_T0_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr12: {
    extern void op_load_gpr_T1_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr12: {
    extern void op_load_gpr_T2_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr12: {
    extern void op_store_T0_gpr_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr12: {
    extern void op_store_T1_gpr_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr12: {
    extern void op_load_fpr_FT0_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr12: {
    extern void op_store_FT0_fpr_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr12: {
    extern void op_load_fpr_FT1_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr12: {
    extern void op_store_FT1_fpr_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr12: {
    extern void op_load_fpr_FT2_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr13: {
    extern void op_load_gpr_T0_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr13: {
    extern void op_load_gpr_T1_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr13: {
    extern void op_load_gpr_T2_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr13: {
    extern void op_store_T0_gpr_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr13: {
    extern void op_store_T1_gpr_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr13: {
    extern void op_load_fpr_FT0_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr13: {
    extern void op_store_FT0_fpr_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr13: {
    extern void op_load_fpr_FT1_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr13: {
    extern void op_store_FT1_fpr_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr13: {
    extern void op_load_fpr_FT2_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr14: {
    extern void op_load_gpr_T0_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr14: {
    extern void op_load_gpr_T1_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr14: {
    extern void op_load_gpr_T2_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr14: {
    extern void op_store_T0_gpr_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr14: {
    extern void op_store_T1_gpr_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr14: {
    extern void op_load_fpr_FT0_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr14: {
    extern void op_store_FT0_fpr_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr14: {
    extern void op_load_fpr_FT1_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr14: {
    extern void op_store_FT1_fpr_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr14: {
    extern void op_load_fpr_FT2_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr15: {
    extern void op_load_gpr_T0_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr15: {
    extern void op_load_gpr_T1_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr15: {
    extern void op_load_gpr_T2_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr15: {
    extern void op_store_T0_gpr_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr15: {
    extern void op_store_T1_gpr_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr15: {
    extern void op_load_fpr_FT0_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr15: {
    extern void op_store_FT0_fpr_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr15: {
    extern void op_load_fpr_FT1_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr15: {
    extern void op_store_FT1_fpr_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr15: {
    extern void op_load_fpr_FT2_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr16: {
    extern void op_load_gpr_T0_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr16: {
    extern void op_load_gpr_T1_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr16: {
    extern void op_load_gpr_T2_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr16: {
    extern void op_store_T0_gpr_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr16: {
    extern void op_store_T1_gpr_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr16: {
    extern void op_load_fpr_FT0_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr16: {
    extern void op_store_FT0_fpr_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr16: {
    extern void op_load_fpr_FT1_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr16: {
    extern void op_store_FT1_fpr_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr16: {
    extern void op_load_fpr_FT2_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr17: {
    extern void op_load_gpr_T0_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr17: {
    extern void op_load_gpr_T1_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr17: {
    extern void op_load_gpr_T2_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr17: {
    extern void op_store_T0_gpr_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr17: {
    extern void op_store_T1_gpr_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr17: {
    extern void op_load_fpr_FT0_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr17: {
    extern void op_store_FT0_fpr_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr17: {
    extern void op_load_fpr_FT1_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr17: {
    extern void op_store_FT1_fpr_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr17: {
    extern void op_load_fpr_FT2_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr18: {
    extern void op_load_gpr_T0_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr18: {
    extern void op_load_gpr_T1_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr18: {
    extern void op_load_gpr_T2_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr18: {
    extern void op_store_T0_gpr_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr18: {
    extern void op_store_T1_gpr_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr18: {
    extern void op_load_fpr_FT0_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr18: {
    extern void op_store_FT0_fpr_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr18: {
    extern void op_load_fpr_FT1_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr18: {
    extern void op_store_FT1_fpr_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr18: {
    extern void op_load_fpr_FT2_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr19: {
    extern void op_load_gpr_T0_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr19: {
    extern void op_load_gpr_T1_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr19: {
    extern void op_load_gpr_T2_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr19: {
    extern void op_store_T0_gpr_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr19: {
    extern void op_store_T1_gpr_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_fpr_FT0_fpr19: {
    extern void op_load_fpr_FT0_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr19: {
    extern void op_store_FT0_fpr_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr19: {
    extern void op_load_fpr_FT1_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr19: {
    extern void op_store_FT1_fpr_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr19: {
    extern void op_load_fpr_FT2_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr20: {
    extern void op_load_gpr_T0_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr20+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr20: {
    extern void op_load_gpr_T1_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr20+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr20: {
    extern void op_load_gpr_T2_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr20+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr20: {
    extern void op_store_T0_gpr_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr20+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr20: {
    extern void op_store_T1_gpr_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr20+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr20: {
    extern void op_load_fpr_FT0_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr20: {
    extern void op_store_FT0_fpr_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr20: {
    extern void op_load_fpr_FT1_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr20: {
    extern void op_store_FT1_fpr_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr20: {
    extern void op_load_fpr_FT2_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr21: {
    extern void op_load_gpr_T0_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr21+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr21: {
    extern void op_load_gpr_T1_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr21+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr21: {
    extern void op_load_gpr_T2_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr21+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr21: {
    extern void op_store_T0_gpr_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr21+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr21: {
    extern void op_store_T1_gpr_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr21+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr21: {
    extern void op_load_fpr_FT0_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr21: {
    extern void op_store_FT0_fpr_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr21: {
    extern void op_load_fpr_FT1_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr21: {
    extern void op_store_FT1_fpr_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr21: {
    extern void op_load_fpr_FT2_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr22: {
    extern void op_load_gpr_T0_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr22+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr22: {
    extern void op_load_gpr_T1_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr22+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr22: {
    extern void op_load_gpr_T2_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr22+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr22: {
    extern void op_store_T0_gpr_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr22+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr22: {
    extern void op_store_T1_gpr_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr22+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr22: {
    extern void op_load_fpr_FT0_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr22: {
    extern void op_store_FT0_fpr_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr22: {
    extern void op_load_fpr_FT1_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr22: {
    extern void op_store_FT1_fpr_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr22: {
    extern void op_load_fpr_FT2_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr23: {
    extern void op_load_gpr_T0_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr23+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr23: {
    extern void op_load_gpr_T1_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr23+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr23: {
    extern void op_load_gpr_T2_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr23+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr23: {
    extern void op_store_T0_gpr_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr23+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr23: {
    extern void op_store_T1_gpr_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr23+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr23: {
    extern void op_load_fpr_FT0_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr23: {
    extern void op_store_FT0_fpr_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr23: {
    extern void op_load_fpr_FT1_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr23: {
    extern void op_store_FT1_fpr_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr23: {
    extern void op_load_fpr_FT2_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr24: {
    extern void op_load_gpr_T0_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr24+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr24: {
    extern void op_load_gpr_T1_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr24+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr24: {
    extern void op_load_gpr_T2_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr24+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr24: {
    extern void op_store_T0_gpr_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr24+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr24: {
    extern void op_store_T1_gpr_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr24+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr24: {
    extern void op_load_fpr_FT0_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr24: {
    extern void op_store_FT0_fpr_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr24: {
    extern void op_load_fpr_FT1_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr24: {
    extern void op_store_FT1_fpr_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr24: {
    extern void op_load_fpr_FT2_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr25: {
    extern void op_load_gpr_T0_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr25+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr25: {
    extern void op_load_gpr_T1_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr25+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr25: {
    extern void op_load_gpr_T2_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr25+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr25: {
    extern void op_store_T0_gpr_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr25+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr25: {
    extern void op_store_T1_gpr_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr25+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr25: {
    extern void op_load_fpr_FT0_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr25: {
    extern void op_store_FT0_fpr_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr25: {
    extern void op_load_fpr_FT1_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr25: {
    extern void op_store_FT1_fpr_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr25: {
    extern void op_load_fpr_FT2_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr26: {
    extern void op_load_gpr_T0_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr26+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr26: {
    extern void op_load_gpr_T1_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr26+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr26: {
    extern void op_load_gpr_T2_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr26+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr26: {
    extern void op_store_T0_gpr_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr26+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr26: {
    extern void op_store_T1_gpr_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr26+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr26: {
    extern void op_load_fpr_FT0_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr26: {
    extern void op_store_FT0_fpr_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr26: {
    extern void op_load_fpr_FT1_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr26: {
    extern void op_store_FT1_fpr_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr26: {
    extern void op_load_fpr_FT2_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr27: {
    extern void op_load_gpr_T0_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr27+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr27: {
    extern void op_load_gpr_T1_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr27+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr27: {
    extern void op_load_gpr_T2_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr27+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr27: {
    extern void op_store_T0_gpr_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr27+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr27: {
    extern void op_store_T1_gpr_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr27+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr27: {
    extern void op_load_fpr_FT0_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr27: {
    extern void op_store_FT0_fpr_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr27: {
    extern void op_load_fpr_FT1_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr27: {
    extern void op_store_FT1_fpr_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr27: {
    extern void op_load_fpr_FT2_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr28: {
    extern void op_load_gpr_T0_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr28+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr28: {
    extern void op_load_gpr_T1_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr28+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr28: {
    extern void op_load_gpr_T2_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr28+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr28: {
    extern void op_store_T0_gpr_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr28+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr28: {
    extern void op_store_T1_gpr_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr28+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr28: {
    extern void op_load_fpr_FT0_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr28: {
    extern void op_store_FT0_fpr_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr28: {
    extern void op_load_fpr_FT1_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr28: {
    extern void op_store_FT1_fpr_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr28: {
    extern void op_load_fpr_FT2_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr29: {
    extern void op_load_gpr_T0_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr29+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr29: {
    extern void op_load_gpr_T1_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr29+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr29: {
    extern void op_load_gpr_T2_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr29+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr29: {
    extern void op_store_T0_gpr_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr29+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr29: {
    extern void op_store_T1_gpr_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr29+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr29: {
    extern void op_load_fpr_FT0_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr29: {
    extern void op_store_FT0_fpr_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr29: {
    extern void op_load_fpr_FT1_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr29: {
    extern void op_store_FT1_fpr_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr29: {
    extern void op_load_fpr_FT2_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr30: {
    extern void op_load_gpr_T0_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr30+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr30: {
    extern void op_load_gpr_T1_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr30+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr30: {
    extern void op_load_gpr_T2_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr30+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr30: {
    extern void op_store_T0_gpr_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr30+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr30: {
    extern void op_store_T1_gpr_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr30+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr30: {
    extern void op_load_fpr_FT0_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr30: {
    extern void op_store_FT0_fpr_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr30: {
    extern void op_load_fpr_FT1_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr30: {
    extern void op_store_FT1_fpr_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr30: {
    extern void op_load_fpr_FT2_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_gpr_T0_gpr31: {
    extern void op_load_gpr_T0_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr31+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T1_gpr31: {
    extern void op_load_gpr_T1_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr31+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_gpr_T2_gpr31: {
    extern void op_load_gpr_T2_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr31+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T0_gpr_gpr31: {
    extern void op_store_T0_gpr_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr31+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_T1_gpr_gpr31: {
    extern void op_store_T1_gpr_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr31+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fpr31: {
    extern void op_load_fpr_FT0_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fpr31: {
    extern void op_store_FT0_fpr_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fpr31: {
    extern void op_load_fpr_FT1_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fpr31: {
    extern void op_store_FT1_fpr_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT2_fpr31: {
    extern void op_load_fpr_FT2_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT2_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_print_mem_EA: {
    extern void op_print_mem_EA();
extern char do_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_print_mem_EA+0), 12);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&do_print_mem_EA) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 12;
}
break;

case INDEX_op_set_Rc0: {
    extern void op_set_Rc0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_Rc0+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_set_Rc1: {
    extern void op_set_Rc1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_Rc1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_reset_T0: {
    extern void op_reset_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_set_T0: {
    long param1;
    extern void op_set_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_T0+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_set_T1: {
    long param1;
    extern void op_set_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_T1+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_move_T1_T0: {
    extern void op_move_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_move_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_move_T2_T0: {
    extern void op_move_T2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_move_T2_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_raise_exception_err: {
    long param1, param2;
    extern void op_raise_exception_err();
extern char do_raise_exception_err;
    memcpy(gen_code_ptr, (void *)((char *)&op_raise_exception_err+0), 27);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_update_nip: {
    long param1;
    extern void op_update_nip();
    memcpy(gen_code_ptr, (void *)((char *)&op_update_nip+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_debug: {
    extern void op_debug();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_debug+0), 16);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_load_cr: {
    extern void op_load_cr();
extern char do_load_cr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_cr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_load_cr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_store_cr: {
    long param1;
    extern void op_store_cr();
extern char do_store_cr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_cr+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_cr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_load_cro: {
    long param1;
    extern void op_load_cro();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_cro+0), 7);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 3) = param1 + 184;
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_cro: {
    long param1;
    extern void op_store_cro();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_cro+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 184;
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_xer_cr: {
    extern void op_load_xer_cr();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_xer_cr+0), 35);
    gen_code_ptr += 35;
}
break;

case INDEX_op_clear_xer_ov: {
    extern void op_clear_xer_ov();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_xer_ov+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_clear_xer_ca: {
    extern void op_clear_xer_ca();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_xer_ca+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_load_xer_bc: {
    extern void op_load_xer_bc();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_xer_bc+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_xer_bc: {
    extern void op_store_xer_bc();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_xer_bc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_xer: {
    extern void op_load_xer();
extern char do_load_xer;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_xer+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_load_xer) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_store_xer: {
    extern void op_store_xer();
extern char do_store_xer;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_xer+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_store_xer) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_load_sr: {
    extern void op_load_sr();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_sr+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_store_sr: {
    extern void op_store_sr();
extern char do_store_sr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_sr+0), 22);
    *(uint32_t *)(gen_code_ptr + 15) = (long)(&do_store_sr) - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 22;
}
break;

case INDEX_op_load_sdr1: {
    extern void op_load_sdr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_sdr1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_sdr1: {
    extern void op_store_sdr1();
extern char do_store_sdr1;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_sdr1+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_sdr1) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_load_msr: {
    extern void op_load_msr();
extern char do_load_msr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_msr+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&do_load_msr) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_store_msr: {
    extern void op_store_msr();
extern char do_store_msr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_msr+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_msr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_load_spr: {
    long param1;
    extern void op_load_spr();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_spr+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_spr: {
    long param1;
    extern void op_store_spr();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_spr+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_dump_spr: {
    long param1;
    extern void op_load_dump_spr();
extern char ppc_load_dump_spr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_dump_spr+0), 18);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&ppc_load_dump_spr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_dump_spr: {
    long param1;
    extern void op_store_dump_spr();
extern char ppc_store_dump_spr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_dump_spr+0), 22);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = (long)(&ppc_store_dump_spr) - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 22;
}
break;

case INDEX_op_mask_spr: {
    long param1;
    extern void op_mask_spr();
    memcpy(gen_code_ptr, (void *)((char *)&op_mask_spr+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 3) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_load_lr: {
    extern void op_load_lr();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_lr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_lr: {
    extern void op_store_lr();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_lr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_ctr: {
    extern void op_load_ctr();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_ctr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_ctr: {
    extern void op_store_ctr();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_ctr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_tbl: {
    extern void op_load_tbl();
extern char cpu_ppc_load_tbl;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_tbl+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&cpu_ppc_load_tbl) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_load_tbu: {
    extern void op_load_tbu();
extern char cpu_ppc_load_tbu;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_tbu+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&cpu_ppc_load_tbu) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_store_tbl: {
    extern void op_store_tbl();
extern char cpu_ppc_store_tbl;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_tbl+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_ppc_store_tbl) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_tbu: {
    extern void op_store_tbu();
extern char cpu_ppc_store_tbu;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_tbu+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_ppc_store_tbu) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_load_decr: {
    extern void op_load_decr();
extern char cpu_ppc_load_decr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_decr+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&cpu_ppc_load_decr) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_store_decr: {
    extern void op_store_decr();
extern char cpu_ppc_store_decr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_decr+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_ppc_store_decr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_load_ibat: {
    long param1, param2;
    extern void op_load_ibat();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_ibat+0), 19);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_ibatu: {
    long param1;
    extern void op_store_ibatu();
extern char do_store_ibatu;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_ibatu+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&do_store_ibatu) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_store_ibatl: {
    long param1;
    extern void op_store_ibatl();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_ibatl+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_dbat: {
    long param1, param2;
    extern void op_load_dbat();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_dbat+0), 19);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_dbatu: {
    long param1;
    extern void op_store_dbatu();
extern char do_store_dbatu;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_dbatu+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&do_store_dbatu) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_store_dbatl: {
    long param1;
    extern void op_store_dbatl();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_dbatl+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpscr: {
    extern void op_load_fpscr();
extern char do_load_fpscr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpscr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_load_fpscr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_store_fpscr: {
    long param1;
    extern void op_store_fpscr();
extern char do_store_fpscr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpscr+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_fpscr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_reset_scrfx: {
    extern void op_reset_scrfx();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_scrfx+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_getbit_T0: {
    long param1;
    extern void op_getbit_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_getbit_T0+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_getbit_T1: {
    long param1;
    extern void op_getbit_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_getbit_T1+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 16;
}
break;

case INDEX_op_setcrfbit: {
    long param1, param2;
    extern void op_setcrfbit();
    memcpy(gen_code_ptr, (void *)((char *)&op_setcrfbit+0), 23);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 3) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = param1 + 0;
    gen_code_ptr += 23;
}
break;

case INDEX_op_setlr: {
    long param1;
    extern void op_setlr();
    memcpy(gen_code_ptr, (void *)((char *)&op_setlr+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_goto_tb0: {
    extern void op_goto_tb0();
    memcpy(gen_code_ptr, (void *)((char *)&op_goto_tb0+0), 5);
    label_offsets[0] = 5 + (gen_code_ptr - gen_code_buf);
    jmp_offsets[0] = 1 + (gen_code_ptr - gen_code_buf);
    gen_code_ptr += 5;
}
break;

case INDEX_op_goto_tb1: {
    extern void op_goto_tb1();
    memcpy(gen_code_ptr, (void *)((char *)&op_goto_tb1+0), 5);
    label_offsets[1] = 5 + (gen_code_ptr - gen_code_buf);
    jmp_offsets[1] = 1 + (gen_code_ptr - gen_code_buf);
    gen_code_ptr += 5;
}
break;

case INDEX_op_b_T1: {
    extern void op_b_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_b_T1+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_jz_T0: {
    long param1;
    extern void op_jz_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_T0+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = gen_labels[param1] - (long)(gen_code_ptr + 5) + -4;
    gen_code_ptr += 9;
}
break;

case INDEX_op_btest_T1: {
    long param1;
    extern void op_btest_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_btest_T1+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    gen_code_ptr += 28;
}
break;

case INDEX_op_movl_T1_ctr: {
    extern void op_movl_T1_ctr();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_ctr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_lr: {
    extern void op_movl_T1_lr();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_lr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_test_ctr: {
    extern void op_test_ctr();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_test_ctr_true: {
    long param1;
    extern void op_test_ctr_true();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctr_true+0), 42);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    gen_code_ptr += 42;
}
break;

case INDEX_op_test_ctr_false: {
    long param1;
    extern void op_test_ctr_false();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctr_false+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_test_ctrz: {
    extern void op_test_ctrz();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctrz+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_test_ctrz_true: {
    long param1;
    extern void op_test_ctrz_true();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctrz_true+0), 34);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    gen_code_ptr += 34;
}
break;

case INDEX_op_test_ctrz_false: {
    long param1;
    extern void op_test_ctrz_false();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ctrz_false+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_test_true: {
    long param1;
    extern void op_test_true();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_true+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_test_false: {
    long param1;
    extern void op_test_false();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_false+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_dec_ctr: {
    extern void op_dec_ctr();
    memcpy(gen_code_ptr, (void *)((char *)&op_dec_ctr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_add: {
    extern void op_add();
    memcpy(gen_code_ptr, (void *)((char *)&op_add+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_check_addo: {
    extern void op_check_addo();
    memcpy(gen_code_ptr, (void *)((char *)&op_check_addo+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_check_addc: {
    extern void op_check_addc();
    memcpy(gen_code_ptr, (void *)((char *)&op_check_addc+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_adde: {
    extern void op_adde();
extern char do_adde;
    memcpy(gen_code_ptr, (void *)((char *)&op_adde+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_adde) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_addi: {
    long param1;
    extern void op_addi();
    memcpy(gen_code_ptr, (void *)((char *)&op_addi+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_add_me: {
    extern void op_add_me();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_me+0), 22);
    gen_code_ptr += 22;
}
break;

case INDEX_op_addmeo: {
    extern void op_addmeo();
extern char do_addmeo;
    memcpy(gen_code_ptr, (void *)((char *)&op_addmeo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_addmeo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_addmeo_64: {
    extern void op_addmeo_64();
extern char do_addmeo;
    memcpy(gen_code_ptr, (void *)((char *)&op_addmeo_64+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_addmeo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_add_ze: {
    extern void op_add_ze();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_ze+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_divw: {
    extern void op_divw();
    memcpy(gen_code_ptr, (void *)((char *)&op_divw+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_divwo: {
    extern void op_divwo();
extern char do_divwo;
    memcpy(gen_code_ptr, (void *)((char *)&op_divwo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_divwo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_divwu: {
    extern void op_divwu();
    memcpy(gen_code_ptr, (void *)((char *)&op_divwu+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_divwuo: {
    extern void op_divwuo();
extern char do_divwuo;
    memcpy(gen_code_ptr, (void *)((char *)&op_divwuo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_divwuo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_mulhw: {
    extern void op_mulhw();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulhw+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_mulhwu: {
    extern void op_mulhwu();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulhwu+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_mulli: {
    long param1;
    extern void op_mulli();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulli+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mullw: {
    extern void op_mullw();
    memcpy(gen_code_ptr, (void *)((char *)&op_mullw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_mullwo: {
    extern void op_mullwo();
extern char do_mullwo;
    memcpy(gen_code_ptr, (void *)((char *)&op_mullwo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_mullwo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_neg: {
    extern void op_neg();
    memcpy(gen_code_ptr, (void *)((char *)&op_neg+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_nego: {
    extern void op_nego();
extern char do_nego;
    memcpy(gen_code_ptr, (void *)((char *)&op_nego+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_nego) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_subf: {
    extern void op_subf();
    memcpy(gen_code_ptr, (void *)((char *)&op_subf+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_check_subfo: {
    extern void op_check_subfo();
    memcpy(gen_code_ptr, (void *)((char *)&op_check_subfo+0), 48);
    gen_code_ptr += 48;
}
break;

case INDEX_op_check_subfc: {
    extern void op_check_subfc();
    memcpy(gen_code_ptr, (void *)((char *)&op_check_subfc+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_subfe: {
    extern void op_subfe();
extern char do_subfe;
    memcpy(gen_code_ptr, (void *)((char *)&op_subfe+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_subfe) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_subfic: {
    long param1;
    extern void op_subfic();
    memcpy(gen_code_ptr, (void *)((char *)&op_subfic+0), 23);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 1;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 23;
}
break;

case INDEX_op_subfme: {
    extern void op_subfme();
    memcpy(gen_code_ptr, (void *)((char *)&op_subfme+0), 27);
    gen_code_ptr += 27;
}
break;

case INDEX_op_subfmeo: {
    extern void op_subfmeo();
extern char do_subfmeo;
    memcpy(gen_code_ptr, (void *)((char *)&op_subfmeo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_subfmeo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_subfze: {
    extern void op_subfze();
    memcpy(gen_code_ptr, (void *)((char *)&op_subfze+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_subfzeo: {
    extern void op_subfzeo();
extern char do_subfzeo;
    memcpy(gen_code_ptr, (void *)((char *)&op_subfzeo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_subfzeo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_cmp: {
    extern void op_cmp();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_cmpi: {
    long param1;
    extern void op_cmpi();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpi+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmpl: {
    extern void op_cmpl();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpl+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_cmpli: {
    long param1;
    extern void op_cmpli();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpli+0), 30);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = param1 + 0;
    gen_code_ptr += 30;
}
break;

case INDEX_op_isel: {
    extern void op_isel();
    memcpy(gen_code_ptr, (void *)((char *)&op_isel+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_popcntb: {
    extern void op_popcntb();
extern char do_popcntb;
    memcpy(gen_code_ptr, (void *)((char *)&op_popcntb+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_popcntb) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_and: {
    extern void op_and();
    memcpy(gen_code_ptr, (void *)((char *)&op_and+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_andc: {
    extern void op_andc();
    memcpy(gen_code_ptr, (void *)((char *)&op_andc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_andi_T0: {
    long param1;
    extern void op_andi_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_andi_T0+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_andi_T1: {
    long param1;
    extern void op_andi_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_andi_T1+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cntlzw: {
    extern void op_cntlzw();
    memcpy(gen_code_ptr, (void *)((char *)&op_cntlzw+0), 74);
    gen_code_ptr += 74;
}
break;

case INDEX_op_eqv: {
    extern void op_eqv();
    memcpy(gen_code_ptr, (void *)((char *)&op_eqv+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_extsb: {
    extern void op_extsb();
    memcpy(gen_code_ptr, (void *)((char *)&op_extsb+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_extsh: {
    extern void op_extsh();
    memcpy(gen_code_ptr, (void *)((char *)&op_extsh+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_nand: {
    extern void op_nand();
    memcpy(gen_code_ptr, (void *)((char *)&op_nand+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_nor: {
    extern void op_nor();
    memcpy(gen_code_ptr, (void *)((char *)&op_nor+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_or: {
    extern void op_or();
    memcpy(gen_code_ptr, (void *)((char *)&op_or+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_orc: {
    extern void op_orc();
    memcpy(gen_code_ptr, (void *)((char *)&op_orc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_ori: {
    long param1;
    extern void op_ori();
    memcpy(gen_code_ptr, (void *)((char *)&op_ori+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_xor: {
    extern void op_xor();
    memcpy(gen_code_ptr, (void *)((char *)&op_xor+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_xori: {
    long param1;
    extern void op_xori();
    memcpy(gen_code_ptr, (void *)((char *)&op_xori+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_rotl32_T0_T1: {
    extern void op_rotl32_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rotl32_T0_T1+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_rotli32_T0: {
    long param1;
    extern void op_rotli32_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_rotli32_T0+0), 7);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 7;
}
break;

case INDEX_op_slw: {
    extern void op_slw();
    memcpy(gen_code_ptr, (void *)((char *)&op_slw+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_sraw: {
    extern void op_sraw();
extern char do_sraw;
    memcpy(gen_code_ptr, (void *)((char *)&op_sraw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_sraw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_srawi: {
    long param1, param2;
    extern void op_srawi();
    memcpy(gen_code_ptr, (void *)((char *)&op_srawi+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param2 + 0;
    gen_code_ptr += 37;
}
break;

case INDEX_op_srw: {
    extern void op_srw();
    memcpy(gen_code_ptr, (void *)((char *)&op_srw+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_sl_T0_T1: {
    extern void op_sl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_sli_T0: {
    long param1;
    extern void op_sli_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sli_T0+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_srl_T0_T1: {
    extern void op_srl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_srl_T0_T1+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_srli_T0: {
    long param1;
    extern void op_srli_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_srli_T0+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_srli_T1: {
    long param1;
    extern void op_srli_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_srli_T1+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_fadd: {
    extern void op_fadd();
    memcpy(gen_code_ptr, (void *)((char *)&op_fadd+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_fsub: {
    extern void op_fsub();
    memcpy(gen_code_ptr, (void *)((char *)&op_fsub+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_fmul: {
    extern void op_fmul();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmul+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_fdiv: {
    extern void op_fdiv();
    memcpy(gen_code_ptr, (void *)((char *)&op_fdiv+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_fsqrt: {
    extern void op_fsqrt();
extern char do_fsqrt;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsqrt+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fsqrt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fres: {
    extern void op_fres();
extern char do_fres;
    memcpy(gen_code_ptr, (void *)((char *)&op_fres+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fres) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_frsqrte: {
    extern void op_frsqrte();
extern char do_frsqrte;
    memcpy(gen_code_ptr, (void *)((char *)&op_frsqrte+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_frsqrte) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fsel: {
    extern void op_fsel();
extern char do_fsel;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fsel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fmadd: {
    extern void op_fmadd();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmadd+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_fmsub: {
    extern void op_fmsub();
    memcpy(gen_code_ptr, (void *)((char *)&op_fmsub+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_fnmadd: {
    extern void op_fnmadd();
extern char do_fnmadd;
    memcpy(gen_code_ptr, (void *)((char *)&op_fnmadd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fnmadd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fnmsub: {
    extern void op_fnmsub();
extern char do_fnmsub;
    memcpy(gen_code_ptr, (void *)((char *)&op_fnmsub+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fnmsub) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_frsp: {
    extern void op_frsp();
extern char float64_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_frsp+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float64_to_float32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_fctiw: {
    extern void op_fctiw();
extern char do_fctiw;
    memcpy(gen_code_ptr, (void *)((char *)&op_fctiw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fctiw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fctiwz: {
    extern void op_fctiwz();
extern char do_fctiwz;
    memcpy(gen_code_ptr, (void *)((char *)&op_fctiwz+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fctiwz) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmpu: {
    extern void op_fcmpu();
extern char do_fcmpu;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmpu+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmpu) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmpo: {
    extern void op_fcmpo();
extern char do_fcmpo;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmpo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmpo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fabs: {
    extern void op_fabs();
    memcpy(gen_code_ptr, (void *)((char *)&op_fabs+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_fnabs: {
    extern void op_fnabs();
    memcpy(gen_code_ptr, (void *)((char *)&op_fnabs+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_fneg: {
    extern void op_fneg();
    memcpy(gen_code_ptr, (void *)((char *)&op_fneg+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_lbz_raw: {
    extern void op_lbz_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lbz_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_lha_raw: {
    extern void op_lha_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_raw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_lhz_raw: {
    extern void op_lhz_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_lwz_raw: {
    extern void op_lwz_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_lha_le_raw: {
    extern void op_lha_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_le_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_lhz_le_raw: {
    extern void op_lhz_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_le_raw+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_lwz_le_raw: {
    extern void op_lwz_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_le_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_stb_raw: {
    extern void op_stb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_sth_raw: {
    extern void op_sth_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_stw_raw: {
    extern void op_stw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_sth_le_raw: {
    extern void op_sth_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_le_raw+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_stw_le_raw: {
    extern void op_stw_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_le_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_lhbr_raw: {
    extern void op_lhbr_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_raw+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_lwbr_raw: {
    extern void op_lwbr_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_sthbr_raw: {
    extern void op_sthbr_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_raw+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_stwbr_raw: {
    extern void op_stwbr_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_lhbr_le_raw: {
    extern void op_lhbr_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_le_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_lwbr_le_raw: {
    extern void op_lwbr_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_le_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_sthbr_le_raw: {
    extern void op_sthbr_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_le_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_stwbr_le_raw: {
    extern void op_stwbr_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_le_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_lmw_raw: {
    long param1;
    extern void op_lmw_raw();
extern char do_lmw_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lmw_le_raw: {
    long param1;
    extern void op_lmw_le_raw();
extern char do_lmw_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_le_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_le_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_raw: {
    long param1;
    extern void op_stmw_raw();
extern char do_stmw_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_le_raw: {
    long param1;
    extern void op_stmw_le_raw();
extern char do_stmw_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_le_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_le_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_raw: {
    long param1;
    extern void op_lswi_raw();
extern char do_lsw_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_le_raw: {
    long param1;
    extern void op_lswi_le_raw();
extern char do_lsw_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_le_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_le_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswx_raw: {
    long param1, param2, param3;
    extern void op_lswx_raw();
extern char do_raise_exception_err;
extern char do_lsw_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_raw+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_raw) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_lswx_le_raw: {
    long param1, param2, param3;
    extern void op_lswx_le_raw();
extern char do_raise_exception_err;
extern char do_lsw_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_le_raw+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_le_raw) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_stsw_raw: {
    long param1;
    extern void op_stsw_raw();
extern char do_stsw_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stsw_le_raw: {
    long param1;
    extern void op_stsw_le_raw();
extern char do_stsw_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_le_raw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_le_raw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stfd_raw: {
    extern void op_stfd_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_raw+0), 31);
    gen_code_ptr += 31;
}
break;

case INDEX_op_stfs_raw: {
    extern void op_stfs_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_raw+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_stfd_le_raw: {
    extern void op_stfd_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_le_raw+0), 612);
    gen_code_ptr += 612;
}
break;

case INDEX_op_stfs_le_raw: {
    extern void op_stfs_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_le_raw+0), 63);
    gen_code_ptr += 63;
}
break;

case INDEX_op_lfd_raw: {
    extern void op_lfd_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_raw+0), 31);
    gen_code_ptr += 31;
}
break;

case INDEX_op_lfs_raw: {
    extern void op_lfs_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_raw+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_lfd_le_raw: {
    extern void op_lfd_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_le_raw+0), 518);
    gen_code_ptr += 518;
}
break;

case INDEX_op_lfs_le_raw: {
    extern void op_lfs_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_le_raw+0), 73);
    gen_code_ptr += 73;
}
break;

case INDEX_op_lwarx_raw: {
    extern void op_lwarx_raw();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_raw+0), 33);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 33;
}
break;

case INDEX_op_lwarx_le_raw: {
    extern void op_lwarx_le_raw();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_le_raw+0), 69);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 69;
}
break;

case INDEX_op_stwcx_raw: {
    extern void op_stwcx_raw();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_raw+0), 78);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_stwcx_le_raw: {
    extern void op_stwcx_le_raw();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_le_raw+0), 112);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 112;
}
break;

case INDEX_op_dcbz_raw: {
    extern void op_dcbz_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_dcbz_raw+0), 55);
    gen_code_ptr += 55;
}
break;

case INDEX_op_icbi_raw: {
    extern void op_icbi_raw();
extern char do_icbi_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_icbi_raw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_icbi_raw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_eciwx_raw: {
    extern void op_eciwx_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_ecowx_raw: {
    extern void op_ecowx_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_eciwx_le_raw: {
    extern void op_eciwx_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_le_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_ecowx_le_raw: {
    extern void op_ecowx_le_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_le_raw+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_POWER_lscbx_raw: {
    long param1, param2, param3;
    extern void op_POWER_lscbx_raw();
extern char do_POWER_lscbx_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_lscbx_raw+0), 40);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&do_POWER_lscbx_raw) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 40;
}
break;

case INDEX_op_POWER2_lfq_raw: {
    extern void op_POWER2_lfq_raw();
extern char do_POWER2_lfq_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_raw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_raw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_lfq_le_raw: {
    extern void op_POWER2_lfq_le_raw();
extern char do_POWER2_lfq_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_le_raw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_le_raw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_raw: {
    extern void op_POWER2_stfq_raw();
extern char do_POWER2_stfq_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_raw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_raw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_le_raw: {
    extern void op_POWER2_stfq_le_raw();
extern char do_POWER2_stfq_le_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_le_raw+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_le_raw) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_lbz_user: {
    extern void op_lbz_user();
extern char __ldb_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lbz_user+0), 84);
    *(uint32_t *)(gen_code_ptr + 52) = (long)(&__ldb_mmu) - (long)(gen_code_ptr + 52) + -4;
    gen_code_ptr += 84;
}
break;

case INDEX_op_lha_user: {
    extern void op_lha_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_user+0), 81);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 81;
}
break;

case INDEX_op_lhz_user: {
    extern void op_lhz_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_user+0), 82);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_lwz_user: {
    extern void op_lwz_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_user+0), 78);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_lha_le_user: {
    extern void op_lha_le_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_le_user+0), 90);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 90;
}
break;

case INDEX_op_lhz_le_user: {
    extern void op_lhz_le_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_le_user+0), 94);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_lwz_le_user: {
    extern void op_lwz_le_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_le_user+0), 110);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_stb_user: {
    extern void op_stb_user();
extern char __stb_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_user+0), 83);
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&__stb_mmu) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 83;
}
break;

case INDEX_op_sth_user: {
    extern void op_sth_user();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_user+0), 86);
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_stw_user: {
    extern void op_stw_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_user+0), 82);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_sth_le_user: {
    extern void op_sth_le_user();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_le_user+0), 102);
    *(uint32_t *)(gen_code_ptr + 73) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 73) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_stw_le_user: {
    extern void op_stw_le_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_le_user+0), 118);
    *(uint32_t *)(gen_code_ptr + 90) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 90) + -4;
    gen_code_ptr += 118;
}
break;

case INDEX_op_lhbr_user: {
    extern void op_lhbr_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_user+0), 94);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_lwbr_user: {
    extern void op_lwbr_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_user+0), 110);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_sthbr_user: {
    extern void op_sthbr_user();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_user+0), 102);
    *(uint32_t *)(gen_code_ptr + 73) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 73) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_stwbr_user: {
    extern void op_stwbr_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_user+0), 118);
    *(uint32_t *)(gen_code_ptr + 90) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 90) + -4;
    gen_code_ptr += 118;
}
break;

case INDEX_op_lhbr_le_user: {
    extern void op_lhbr_le_user();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_le_user+0), 82);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_lwbr_le_user: {
    extern void op_lwbr_le_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_le_user+0), 78);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_sthbr_le_user: {
    extern void op_sthbr_le_user();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_le_user+0), 86);
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_stwbr_le_user: {
    extern void op_stwbr_le_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_le_user+0), 82);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_lmw_user: {
    long param1;
    extern void op_lmw_user();
extern char do_lmw_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lmw_le_user: {
    long param1;
    extern void op_lmw_le_user();
extern char do_lmw_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_le_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_le_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_user: {
    long param1;
    extern void op_stmw_user();
extern char do_stmw_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_le_user: {
    long param1;
    extern void op_stmw_le_user();
extern char do_stmw_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_le_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_le_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_user: {
    long param1;
    extern void op_lswi_user();
extern char do_lsw_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_le_user: {
    long param1;
    extern void op_lswi_le_user();
extern char do_lsw_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_le_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_le_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswx_user: {
    long param1, param2, param3;
    extern void op_lswx_user();
extern char do_raise_exception_err;
extern char do_lsw_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_user+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_user) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_lswx_le_user: {
    long param1, param2, param3;
    extern void op_lswx_le_user();
extern char do_raise_exception_err;
extern char do_lsw_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_le_user+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_le_user) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_stsw_user: {
    long param1;
    extern void op_stsw_user();
extern char do_stsw_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stsw_le_user: {
    long param1;
    extern void op_stsw_le_user();
extern char do_stsw_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_le_user+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_le_user) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stfd_user: {
    extern void op_stfd_user();
extern char __stq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_user+0), 114);
    *(uint32_t *)(gen_code_ptr + 77) = (long)(&__stq_mmu) - (long)(gen_code_ptr + 77) + -4;
    gen_code_ptr += 114;
}
break;

case INDEX_op_stfs_user: {
    extern void op_stfs_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_user+0), 94);
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_stfd_le_user: {
    extern void op_stfd_le_user();
extern char __stq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_le_user+0), 619);
    *(uint32_t *)(gen_code_ptr + 575) = (long)(&__stq_mmu) - (long)(gen_code_ptr + 575) + -4;
    gen_code_ptr += 619;
}
break;

case INDEX_op_stfs_le_user: {
    extern void op_stfs_le_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_le_user+0), 149);
    *(uint32_t *)(gen_code_ptr + 117) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 117) + -4;
    gen_code_ptr += 149;
}
break;

case INDEX_op_lfd_user: {
    extern void op_lfd_user();
extern char __ldq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_user+0), 143);
    *(uint32_t *)(gen_code_ptr + 48) = (long)(&__ldq_mmu) - (long)(gen_code_ptr + 48) + -4;
    gen_code_ptr += 143;
}
break;

case INDEX_op_lfs_user: {
    extern void op_lfs_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_user+0), 86);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_lfd_le_user: {
    extern void op_lfd_le_user();
extern char __ldq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_le_user+0), 688);
    *(uint32_t *)(gen_code_ptr + 51) = (long)(&__ldq_mmu) - (long)(gen_code_ptr + 51) + -4;
    gen_code_ptr += 688;
}
break;

case INDEX_op_lfs_le_user: {
    extern void op_lfs_le_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_le_user+0), 143);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 143;
}
break;

case INDEX_op_lwarx_user: {
    extern void op_lwarx_user();
extern char do_raise_exception;
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_user+0), 97);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 69) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 69) + -4;
    gen_code_ptr += 97;
}
break;

case INDEX_op_lwarx_le_user: {
    extern void op_lwarx_le_user();
extern char do_raise_exception;
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_le_user+0), 135);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 69) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 69) + -4;
    gen_code_ptr += 135;
}
break;

case INDEX_op_stwcx_user: {
    extern void op_stwcx_user();
extern char do_raise_exception;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_user+0), 150);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 96) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 96) + -4;
    gen_code_ptr += 150;
}
break;

case INDEX_op_stwcx_le_user: {
    extern void op_stwcx_le_user();
extern char do_raise_exception;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_le_user+0), 189);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 135) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 135) + -4;
    gen_code_ptr += 189;
}
break;

case INDEX_op_dcbz_user: {
    extern void op_dcbz_user();
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_dcbz_user+0), 571);
    *(uint32_t *)(gen_code_ptr + 52) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 52) + -4;
    *(uint32_t *)(gen_code_ptr + 123) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 123) + -4;
    *(uint32_t *)(gen_code_ptr + 194) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 194) + -4;
    *(uint32_t *)(gen_code_ptr + 265) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 265) + -4;
    *(uint32_t *)(gen_code_ptr + 336) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 336) + -4;
    *(uint32_t *)(gen_code_ptr + 407) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 407) + -4;
    *(uint32_t *)(gen_code_ptr + 478) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 478) + -4;
    *(uint32_t *)(gen_code_ptr + 549) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 549) + -4;
    gen_code_ptr += 571;
}
break;

case INDEX_op_icbi_user: {
    extern void op_icbi_user();
extern char do_icbi_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_icbi_user+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_icbi_user) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_eciwx_user: {
    extern void op_eciwx_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_user+0), 78);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_ecowx_user: {
    extern void op_ecowx_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_user+0), 82);
    *(uint32_t *)(gen_code_ptr + 54) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 54) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_eciwx_le_user: {
    extern void op_eciwx_le_user();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_le_user+0), 110);
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_ecowx_le_user: {
    extern void op_ecowx_le_user();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_le_user+0), 118);
    *(uint32_t *)(gen_code_ptr + 90) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 90) + -4;
    gen_code_ptr += 118;
}
break;

case INDEX_op_POWER_lscbx_user: {
    long param1, param2, param3;
    extern void op_POWER_lscbx_user();
extern char do_POWER_lscbx_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_lscbx_user+0), 40);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&do_POWER_lscbx_user) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 40;
}
break;

case INDEX_op_POWER2_lfq_user: {
    extern void op_POWER2_lfq_user();
extern char do_POWER2_lfq_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_user+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_user) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_lfq_le_user: {
    extern void op_POWER2_lfq_le_user();
extern char do_POWER2_lfq_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_le_user+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_le_user) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_user: {
    extern void op_POWER2_stfq_user();
extern char do_POWER2_stfq_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_user+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_user) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_le_user: {
    extern void op_POWER2_stfq_le_user();
extern char do_POWER2_stfq_le_user;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_le_user+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_le_user) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_lbz_kernel: {
    extern void op_lbz_kernel();
extern char __ldb_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lbz_kernel+0), 76);
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&__ldb_mmu) - (long)(gen_code_ptr + 44) + -4;
    gen_code_ptr += 76;
}
break;

case INDEX_op_lha_kernel: {
    extern void op_lha_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_kernel+0), 73);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_lhz_kernel: {
    extern void op_lhz_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_kernel+0), 74);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 74;
}
break;

case INDEX_op_lwz_kernel: {
    extern void op_lwz_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_kernel+0), 70);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 70;
}
break;

case INDEX_op_lha_le_kernel: {
    extern void op_lha_le_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lha_le_kernel+0), 82);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_lhz_le_kernel: {
    extern void op_lhz_le_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhz_le_kernel+0), 86);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_lwz_le_kernel: {
    extern void op_lwz_le_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwz_le_kernel+0), 102);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_stb_kernel: {
    extern void op_stb_kernel();
extern char __stb_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_kernel+0), 75);
    *(uint32_t *)(gen_code_ptr + 49) = (long)(&__stb_mmu) - (long)(gen_code_ptr + 49) + -4;
    gen_code_ptr += 75;
}
break;

case INDEX_op_sth_kernel: {
    extern void op_sth_kernel();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_kernel+0), 78);
    *(uint32_t *)(gen_code_ptr + 51) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 51) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_stw_kernel: {
    extern void op_stw_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_kernel+0), 74);
    *(uint32_t *)(gen_code_ptr + 48) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 48) + -4;
    gen_code_ptr += 74;
}
break;

case INDEX_op_sth_le_kernel: {
    extern void op_sth_le_kernel();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sth_le_kernel+0), 94);
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 65) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_stw_le_kernel: {
    extern void op_stw_le_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_le_kernel+0), 110);
    *(uint32_t *)(gen_code_ptr + 82) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 82) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_lhbr_kernel: {
    extern void op_lhbr_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_kernel+0), 86);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_lwbr_kernel: {
    extern void op_lwbr_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_kernel+0), 102);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_sthbr_kernel: {
    extern void op_sthbr_kernel();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_kernel+0), 94);
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 65) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_stwbr_kernel: {
    extern void op_stwbr_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_kernel+0), 110);
    *(uint32_t *)(gen_code_ptr + 82) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 82) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_lhbr_le_kernel: {
    extern void op_lhbr_le_kernel();
extern char __ldw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lhbr_le_kernel+0), 74);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldw_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 74;
}
break;

case INDEX_op_lwbr_le_kernel: {
    extern void op_lwbr_le_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwbr_le_kernel+0), 70);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 70;
}
break;

case INDEX_op_sthbr_le_kernel: {
    extern void op_sthbr_le_kernel();
extern char __stw_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_sthbr_le_kernel+0), 78);
    *(uint32_t *)(gen_code_ptr + 51) = (long)(&__stw_mmu) - (long)(gen_code_ptr + 51) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_stwbr_le_kernel: {
    extern void op_stwbr_le_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwbr_le_kernel+0), 74);
    *(uint32_t *)(gen_code_ptr + 48) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 48) + -4;
    gen_code_ptr += 74;
}
break;

case INDEX_op_lmw_kernel: {
    long param1;
    extern void op_lmw_kernel();
extern char do_lmw_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lmw_le_kernel: {
    long param1;
    extern void op_lmw_le_kernel();
extern char do_lmw_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lmw_le_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lmw_le_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_kernel: {
    long param1;
    extern void op_stmw_kernel();
extern char do_stmw_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stmw_le_kernel: {
    long param1;
    extern void op_stmw_le_kernel();
extern char do_stmw_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_stmw_le_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stmw_le_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_kernel: {
    long param1;
    extern void op_lswi_kernel();
extern char do_lsw_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswi_le_kernel: {
    long param1;
    extern void op_lswi_le_kernel();
extern char do_lsw_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswi_le_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_lsw_le_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_lswx_kernel: {
    long param1, param2, param3;
    extern void op_lswx_kernel();
extern char do_raise_exception_err;
extern char do_lsw_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_kernel+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_kernel) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_lswx_le_kernel: {
    long param1, param2, param3;
    extern void op_lswx_le_kernel();
extern char do_raise_exception_err;
extern char do_lsw_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_lswx_le_kernel+0), 95);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 38) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 51) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 74) + -4;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = (long)(&do_lsw_le_kernel) - (long)(gen_code_ptr + 88) + -4;
    gen_code_ptr += 95;
}
break;

case INDEX_op_stsw_kernel: {
    long param1;
    extern void op_stsw_kernel();
extern char do_stsw_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stsw_le_kernel: {
    long param1;
    extern void op_stsw_le_kernel();
extern char do_stsw_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_stsw_le_kernel+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_stsw_le_kernel) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_stfd_kernel: {
    extern void op_stfd_kernel();
extern char __stq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_kernel+0), 103);
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&__stq_mmu) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 103;
}
break;

case INDEX_op_stfs_kernel: {
    extern void op_stfs_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_kernel+0), 82);
    *(uint32_t *)(gen_code_ptr + 56) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 56) + -4;
    gen_code_ptr += 82;
}
break;

case INDEX_op_stfd_le_kernel: {
    extern void op_stfd_le_kernel();
extern char __stq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfd_le_kernel+0), 608);
    *(uint32_t *)(gen_code_ptr + 564) = (long)(&__stq_mmu) - (long)(gen_code_ptr + 564) + -4;
    gen_code_ptr += 608;
}
break;

case INDEX_op_stfs_le_kernel: {
    extern void op_stfs_le_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stfs_le_kernel+0), 141);
    *(uint32_t *)(gen_code_ptr + 109) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 109) + -4;
    gen_code_ptr += 141;
}
break;

case INDEX_op_lfd_kernel: {
    extern void op_lfd_kernel();
extern char __ldq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_kernel+0), 135);
    *(uint32_t *)(gen_code_ptr + 40) = (long)(&__ldq_mmu) - (long)(gen_code_ptr + 40) + -4;
    gen_code_ptr += 135;
}
break;

case INDEX_op_lfs_kernel: {
    extern void op_lfs_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_kernel+0), 78);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 78;
}
break;

case INDEX_op_lfd_le_kernel: {
    extern void op_lfd_le_kernel();
extern char __ldq_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfd_le_kernel+0), 680);
    *(uint32_t *)(gen_code_ptr + 43) = (long)(&__ldq_mmu) - (long)(gen_code_ptr + 43) + -4;
    gen_code_ptr += 680;
}
break;

case INDEX_op_lfs_le_kernel: {
    extern void op_lfs_le_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lfs_le_kernel+0), 135);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 135;
}
break;

case INDEX_op_lwarx_kernel: {
    extern void op_lwarx_kernel();
extern char do_raise_exception;
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_kernel+0), 89);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 61) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 61) + -4;
    gen_code_ptr += 89;
}
break;

case INDEX_op_lwarx_le_kernel: {
    extern void op_lwarx_le_kernel();
extern char do_raise_exception;
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwarx_le_kernel+0), 127);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 61) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 61) + -4;
    gen_code_ptr += 127;
}
break;

case INDEX_op_stwcx_kernel: {
    extern void op_stwcx_kernel();
extern char do_raise_exception;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_kernel+0), 142);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 90) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 90) + -4;
    gen_code_ptr += 142;
}
break;

case INDEX_op_stwcx_le_kernel: {
    extern void op_stwcx_le_kernel();
extern char do_raise_exception;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_stwcx_le_kernel+0), 181);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 16) + -4;
    *(uint32_t *)(gen_code_ptr + 127) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 127) + -4;
    gen_code_ptr += 181;
}
break;

case INDEX_op_dcbz_kernel: {
    extern void op_dcbz_kernel();
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_dcbz_kernel+0), 507);
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 44) + -4;
    *(uint32_t *)(gen_code_ptr + 107) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 107) + -4;
    *(uint32_t *)(gen_code_ptr + 170) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 170) + -4;
    *(uint32_t *)(gen_code_ptr + 233) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 233) + -4;
    *(uint32_t *)(gen_code_ptr + 296) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 296) + -4;
    *(uint32_t *)(gen_code_ptr + 359) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 359) + -4;
    *(uint32_t *)(gen_code_ptr + 422) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 422) + -4;
    *(uint32_t *)(gen_code_ptr + 485) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 485) + -4;
    gen_code_ptr += 507;
}
break;

case INDEX_op_icbi_kernel: {
    extern void op_icbi_kernel();
extern char do_icbi_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_icbi_kernel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_icbi_kernel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_eciwx_kernel: {
    extern void op_eciwx_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_kernel+0), 70);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 70;
}
break;

case INDEX_op_ecowx_kernel: {
    extern void op_ecowx_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_kernel+0), 74);
    *(uint32_t *)(gen_code_ptr + 48) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 48) + -4;
    gen_code_ptr += 74;
}
break;

case INDEX_op_eciwx_le_kernel: {
    extern void op_eciwx_le_kernel();
extern char __ldl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_eciwx_le_kernel+0), 102);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&__ldl_mmu) - (long)(gen_code_ptr + 42) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_ecowx_le_kernel: {
    extern void op_ecowx_le_kernel();
extern char __stl_mmu;
    memcpy(gen_code_ptr, (void *)((char *)&op_ecowx_le_kernel+0), 110);
    *(uint32_t *)(gen_code_ptr + 82) = (long)(&__stl_mmu) - (long)(gen_code_ptr + 82) + -4;
    gen_code_ptr += 110;
}
break;

case INDEX_op_POWER_lscbx_kernel: {
    long param1, param2, param3;
    extern void op_POWER_lscbx_kernel();
extern char do_POWER_lscbx_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_lscbx_kernel+0), 40);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 24) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&do_POWER_lscbx_kernel) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 40;
}
break;

case INDEX_op_POWER2_lfq_kernel: {
    extern void op_POWER2_lfq_kernel();
extern char do_POWER2_lfq_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_kernel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_kernel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_lfq_le_kernel: {
    extern void op_POWER2_lfq_le_kernel();
extern char do_POWER2_lfq_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_lfq_le_kernel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_lfq_le_kernel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_kernel: {
    extern void op_POWER2_stfq_kernel();
extern char do_POWER2_stfq_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_kernel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_kernel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER2_stfq_le_kernel: {
    extern void op_POWER2_stfq_le_kernel();
extern char do_POWER2_stfq_le_kernel;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER2_stfq_le_kernel+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER2_stfq_le_kernel) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_check_reservation: {
    extern void op_check_reservation();
    memcpy(gen_code_ptr, (void *)((char *)&op_check_reservation+0), 33);
    gen_code_ptr += 33;
}
break;

case INDEX_op_rfi: {
    extern void op_rfi();
extern char do_rfi;
    memcpy(gen_code_ptr, (void *)((char *)&op_rfi+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_rfi) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tw: {
    long param1;
    extern void op_tw();
extern char do_tw;
    memcpy(gen_code_ptr, (void *)((char *)&op_tw+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_tw) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_tlbia: {
    extern void op_tlbia();
extern char do_tlbia;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbia+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbia) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tlbie: {
    extern void op_tlbie();
extern char do_tlbie;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbie+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbie) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_6xx_tlbld: {
    extern void op_6xx_tlbld();
extern char do_load_6xx_tlb;
    memcpy(gen_code_ptr, (void *)((char *)&op_6xx_tlbld+0), 16);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_load_6xx_tlb) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_6xx_tlbli: {
    extern void op_6xx_tlbli();
extern char do_load_6xx_tlb;
    memcpy(gen_code_ptr, (void *)((char *)&op_6xx_tlbli+0), 16);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_load_6xx_tlb) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_load_601_rtcl: {
    extern void op_load_601_rtcl();
extern char cpu_ppc601_load_rtcl;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_601_rtcl+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&cpu_ppc601_load_rtcl) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_load_601_rtcu: {
    extern void op_load_601_rtcu();
extern char cpu_ppc601_load_rtcu;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_601_rtcu+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&cpu_ppc601_load_rtcu) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_store_601_rtcl: {
    extern void op_store_601_rtcl();
extern char cpu_ppc601_store_rtcl;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_601_rtcl+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_ppc601_store_rtcl) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_601_rtcu: {
    extern void op_store_601_rtcu();
extern char cpu_ppc601_store_rtcu;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_601_rtcu+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_ppc601_store_rtcu) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_load_601_bat: {
    long param1, param2;
    extern void op_load_601_bat();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_601_bat+0), 19);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_601_batl: {
    long param1;
    extern void op_store_601_batl();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_601_batl+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_601_batu: {
    long param1;
    extern void op_store_601_batu();
extern char do_store_601_batu;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_601_batu+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_601_batu) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_POWER_abs: {
    extern void op_POWER_abs();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_abs+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_POWER_abso: {
    extern void op_POWER_abso();
extern char do_POWER_abso;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_abso+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_abso) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_clcs: {
    extern void op_POWER_clcs();
extern char do_POWER_clcs;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_clcs+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_clcs) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_div: {
    extern void op_POWER_div();
extern char do_POWER_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_div+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_div) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_divo: {
    extern void op_POWER_divo();
extern char do_POWER_divo;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_divo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_divo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_divs: {
    extern void op_POWER_divs();
extern char do_POWER_divs;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_divs+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_divs) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_divso: {
    extern void op_POWER_divso();
extern char do_POWER_divso;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_divso+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_divso) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_doz: {
    extern void op_POWER_doz();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_doz+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_POWER_dozo: {
    extern void op_POWER_dozo();
extern char do_POWER_dozo;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_dozo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_dozo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_load_xer_cmp: {
    extern void op_load_xer_cmp();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_xer_cmp+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_POWER_maskg: {
    extern void op_POWER_maskg();
extern char do_POWER_maskg;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_maskg+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_maskg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_maskir: {
    extern void op_POWER_maskir();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_maskir+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_POWER_mul: {
    extern void op_POWER_mul();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_mul+0), 26);
    gen_code_ptr += 26;
}
break;

case INDEX_op_POWER_mulo: {
    extern void op_POWER_mulo();
extern char do_POWER_mulo;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_mulo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_mulo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_nabs: {
    extern void op_POWER_nabs();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_nabs+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_POWER_nabso: {
    extern void op_POWER_nabso();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_nabso+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_POWER_rlmi: {
    long param1, param2;
    extern void op_POWER_rlmi();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_rlmi+0), 23);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 17) = param2 + 0;
    gen_code_ptr += 23;
}
break;

case INDEX_op_POWER_rrib: {
    extern void op_POWER_rrib();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_rrib+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_POWER_sle: {
    extern void op_POWER_sle();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sle+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_POWER_sleq: {
    extern void op_POWER_sleq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sleq+0), 34);
    gen_code_ptr += 34;
}
break;

case INDEX_op_POWER_sllq: {
    extern void op_POWER_sllq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sllq+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_POWER_slq: {
    extern void op_POWER_slq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_slq+0), 41);
    gen_code_ptr += 41;
}
break;

case INDEX_op_POWER_sraq: {
    extern void op_POWER_sraq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sraq+0), 41);
    gen_code_ptr += 41;
}
break;

case INDEX_op_POWER_sre: {
    extern void op_POWER_sre();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sre+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_POWER_srea: {
    extern void op_POWER_srea();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_srea+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_POWER_sreq: {
    extern void op_POWER_sreq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_sreq+0), 53);
    gen_code_ptr += 53;
}
break;

case INDEX_op_POWER_srlq: {
    extern void op_POWER_srlq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_srlq+0), 70);
    gen_code_ptr += 70;
}
break;

case INDEX_op_POWER_srq: {
    extern void op_POWER_srq();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_srq+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_POWER_mfsri: {
    extern void op_POWER_mfsri();
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_mfsri+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_POWER_rac: {
    extern void op_POWER_rac();
extern char do_POWER_rac;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_rac+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_rac) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_POWER_rfsvc: {
    extern void op_POWER_rfsvc();
extern char do_POWER_rfsvc;
    memcpy(gen_code_ptr, (void *)((char *)&op_POWER_rfsvc+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_POWER_rfsvc) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_602_mfrom: {
    extern void op_602_mfrom();
extern char do_op_602_mfrom;
    memcpy(gen_code_ptr, (void *)((char *)&op_602_mfrom+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_op_602_mfrom) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_405_add_T0_T2: {
    extern void op_405_add_T0_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_add_T0_T2+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_405_mulchw: {
    extern void op_405_mulchw();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mulchw+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_405_mulchwu: {
    extern void op_405_mulchwu();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mulchwu+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_405_mulhhw: {
    extern void op_405_mulhhw();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mulhhw+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_405_mulhhwu: {
    extern void op_405_mulhhwu();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mulhhwu+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_405_mullhw: {
    extern void op_405_mullhw();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mullhw+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_405_mullhwu: {
    extern void op_405_mullhwu();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_mullhwu+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_405_check_ov: {
    extern void op_405_check_ov();
extern char do_405_check_ov;
    memcpy(gen_code_ptr, (void *)((char *)&op_405_check_ov+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_405_check_ov) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_405_check_sat: {
    extern void op_405_check_sat();
extern char do_405_check_sat;
    memcpy(gen_code_ptr, (void *)((char *)&op_405_check_sat+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_405_check_sat) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_405_check_ovu: {
    extern void op_405_check_ovu();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_check_ovu+0), 33);
    gen_code_ptr += 33;
}
break;

case INDEX_op_405_check_satu: {
    extern void op_405_check_satu();
    memcpy(gen_code_ptr, (void *)((char *)&op_405_check_satu+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_load_dcr: {
    extern void op_load_dcr();
extern char do_load_dcr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_dcr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_load_dcr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_store_dcr: {
    extern void op_store_dcr();
extern char do_store_dcr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_dcr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_store_dcr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_40x_rfci: {
    extern void op_40x_rfci();
extern char do_40x_rfci;
    memcpy(gen_code_ptr, (void *)((char *)&op_40x_rfci+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_40x_rfci) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_rfci: {
    extern void op_rfci();
extern char do_rfci;
    memcpy(gen_code_ptr, (void *)((char *)&op_rfci+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_rfci) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_rfdi: {
    extern void op_rfdi();
extern char do_rfdi;
    memcpy(gen_code_ptr, (void *)((char *)&op_rfdi+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_rfdi) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_rfmci: {
    extern void op_rfmci();
extern char do_rfmci;
    memcpy(gen_code_ptr, (void *)((char *)&op_rfmci+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_rfmci) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_wrte: {
    extern void op_wrte();
    memcpy(gen_code_ptr, (void *)((char *)&op_wrte+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_4xx_tlbre_lo: {
    extern void op_4xx_tlbre_lo();
extern char do_4xx_tlbre_lo;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbre_lo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbre_lo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_4xx_tlbre_hi: {
    extern void op_4xx_tlbre_hi();
extern char do_4xx_tlbre_hi;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbre_hi+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbre_hi) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_4xx_tlbsx: {
    extern void op_4xx_tlbsx();
extern char do_4xx_tlbsx;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbsx+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbsx) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_4xx_tlbsx_: {
    extern void op_4xx_tlbsx_();
extern char do_4xx_tlbsx_;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbsx_+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbsx_) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_4xx_tlbwe_lo: {
    extern void op_4xx_tlbwe_lo();
extern char do_4xx_tlbwe_lo;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbwe_lo+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbwe_lo) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_4xx_tlbwe_hi: {
    extern void op_4xx_tlbwe_hi();
extern char do_4xx_tlbwe_hi;
    memcpy(gen_code_ptr, (void *)((char *)&op_4xx_tlbwe_hi+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_4xx_tlbwe_hi) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_440_dlmzb: {
    extern void op_440_dlmzb();
extern char do_440_dlmzb;
    memcpy(gen_code_ptr, (void *)((char *)&op_440_dlmzb+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_440_dlmzb) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_440_dlmzb_update_Rc: {
    extern void op_440_dlmzb_update_Rc();
    memcpy(gen_code_ptr, (void *)((char *)&op_440_dlmzb_update_Rc+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_pir: {
    extern void op_store_pir();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_pir+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_load_403_pb: {
    long param1;
    extern void op_load_403_pb();
extern char do_load_403_pb;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_403_pb+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_load_403_pb) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_store_403_pb: {
    long param1;
    extern void op_store_403_pb();
extern char do_store_403_pb;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_403_pb+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_store_403_pb) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_load_40x_pit: {
    extern void op_load_40x_pit();
extern char load_40x_pit;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_40x_pit+0), 14);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&load_40x_pit) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 14;
}
break;

case INDEX_op_store_40x_pit: {
    extern void op_store_40x_pit();
extern char store_40x_pit;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_40x_pit+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&store_40x_pit) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_40x_dbcr0: {
    extern void op_store_40x_dbcr0();
extern char store_40x_dbcr0;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_40x_dbcr0+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&store_40x_dbcr0) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_40x_sler: {
    extern void op_store_40x_sler();
extern char store_40x_sler;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_40x_sler+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&store_40x_sler) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_booke_tcr: {
    extern void op_store_booke_tcr();
extern char store_booke_tcr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_booke_tcr+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&store_booke_tcr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_store_booke_tsr: {
    extern void op_store_booke_tsr();
extern char store_booke_tsr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_booke_tsr+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&store_booke_tsr) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

        case INDEX_op_nop:
            break;
        case INDEX_op_nop1:
            opparam_ptr++;
            break;
        case INDEX_op_nop2:
            opparam_ptr += 2;
            break;
        case INDEX_op_nop3:
            opparam_ptr += 3;
            break;
        default:
            goto the_end;
        }
    }
 the_end:
flush_icache_range((unsigned long)gen_code_buf, (unsigned long)gen_code_ptr);
return gen_code_ptr -  gen_code_buf;
}

