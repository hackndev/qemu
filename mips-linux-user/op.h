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
case INDEX_op_load_gpr_T0_gpr1: {
    extern void op_load_gpr_T0_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr1: {
    extern void op_store_T0_gpr_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr1: {
    extern void op_load_gpr_T1_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr1: {
    extern void op_store_T1_gpr_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr1: {
    extern void op_load_gpr_T2_gpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr2: {
    extern void op_load_gpr_T0_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr2: {
    extern void op_store_T0_gpr_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr2: {
    extern void op_load_gpr_T1_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr2: {
    extern void op_store_T1_gpr_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr2: {
    extern void op_load_gpr_T2_gpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr3: {
    extern void op_load_gpr_T0_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr3: {
    extern void op_store_T0_gpr_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr3: {
    extern void op_load_gpr_T1_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr3: {
    extern void op_store_T1_gpr_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr3: {
    extern void op_load_gpr_T2_gpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr4: {
    extern void op_load_gpr_T0_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr4: {
    extern void op_store_T0_gpr_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr4: {
    extern void op_load_gpr_T1_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr4: {
    extern void op_store_T1_gpr_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr4: {
    extern void op_load_gpr_T2_gpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr5: {
    extern void op_load_gpr_T0_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr5: {
    extern void op_store_T0_gpr_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr5: {
    extern void op_load_gpr_T1_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr5: {
    extern void op_store_T1_gpr_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr5: {
    extern void op_load_gpr_T2_gpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr6: {
    extern void op_load_gpr_T0_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr6: {
    extern void op_store_T0_gpr_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr6: {
    extern void op_load_gpr_T1_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr6: {
    extern void op_store_T1_gpr_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr6: {
    extern void op_load_gpr_T2_gpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr7: {
    extern void op_load_gpr_T0_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr7: {
    extern void op_store_T0_gpr_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr7: {
    extern void op_load_gpr_T1_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr7: {
    extern void op_store_T1_gpr_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr7: {
    extern void op_load_gpr_T2_gpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr8: {
    extern void op_load_gpr_T0_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr8: {
    extern void op_store_T0_gpr_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr8: {
    extern void op_load_gpr_T1_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr8: {
    extern void op_store_T1_gpr_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr8: {
    extern void op_load_gpr_T2_gpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr9: {
    extern void op_load_gpr_T0_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr9: {
    extern void op_store_T0_gpr_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr9: {
    extern void op_load_gpr_T1_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr9: {
    extern void op_store_T1_gpr_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr9: {
    extern void op_load_gpr_T2_gpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr10: {
    extern void op_load_gpr_T0_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr10: {
    extern void op_store_T0_gpr_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr10: {
    extern void op_load_gpr_T1_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr10: {
    extern void op_store_T1_gpr_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr10: {
    extern void op_load_gpr_T2_gpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr11: {
    extern void op_load_gpr_T0_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr11: {
    extern void op_store_T0_gpr_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr11: {
    extern void op_load_gpr_T1_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr11: {
    extern void op_store_T1_gpr_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr11: {
    extern void op_load_gpr_T2_gpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr12: {
    extern void op_load_gpr_T0_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr12: {
    extern void op_store_T0_gpr_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr12: {
    extern void op_load_gpr_T1_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr12: {
    extern void op_store_T1_gpr_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr12: {
    extern void op_load_gpr_T2_gpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr13: {
    extern void op_load_gpr_T0_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr13: {
    extern void op_store_T0_gpr_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr13: {
    extern void op_load_gpr_T1_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr13: {
    extern void op_store_T1_gpr_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr13: {
    extern void op_load_gpr_T2_gpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr14: {
    extern void op_load_gpr_T0_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr14: {
    extern void op_store_T0_gpr_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr14: {
    extern void op_load_gpr_T1_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr14: {
    extern void op_store_T1_gpr_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr14: {
    extern void op_load_gpr_T2_gpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr15: {
    extern void op_load_gpr_T0_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr15: {
    extern void op_store_T0_gpr_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr15: {
    extern void op_load_gpr_T1_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr15: {
    extern void op_store_T1_gpr_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr15: {
    extern void op_load_gpr_T2_gpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr16: {
    extern void op_load_gpr_T0_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr16: {
    extern void op_store_T0_gpr_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr16: {
    extern void op_load_gpr_T1_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr16: {
    extern void op_store_T1_gpr_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr16: {
    extern void op_load_gpr_T2_gpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr16+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr17: {
    extern void op_load_gpr_T0_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr17: {
    extern void op_store_T0_gpr_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr17: {
    extern void op_load_gpr_T1_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr17: {
    extern void op_store_T1_gpr_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr17: {
    extern void op_load_gpr_T2_gpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr17+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr18: {
    extern void op_load_gpr_T0_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr18: {
    extern void op_store_T0_gpr_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr18: {
    extern void op_load_gpr_T1_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr18: {
    extern void op_store_T1_gpr_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr18: {
    extern void op_load_gpr_T2_gpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr18+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr19: {
    extern void op_load_gpr_T0_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr19: {
    extern void op_store_T0_gpr_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr19: {
    extern void op_load_gpr_T1_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr19: {
    extern void op_store_T1_gpr_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr19: {
    extern void op_load_gpr_T2_gpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr19+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr20: {
    extern void op_load_gpr_T0_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr20+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr20: {
    extern void op_store_T0_gpr_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr20+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr20: {
    extern void op_load_gpr_T1_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr20+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr20: {
    extern void op_store_T1_gpr_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr20+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr20: {
    extern void op_load_gpr_T2_gpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr20+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr21: {
    extern void op_load_gpr_T0_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr21+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr21: {
    extern void op_store_T0_gpr_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr21+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr21: {
    extern void op_load_gpr_T1_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr21+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr21: {
    extern void op_store_T1_gpr_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr21+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr21: {
    extern void op_load_gpr_T2_gpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr21+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr22: {
    extern void op_load_gpr_T0_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr22+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr22: {
    extern void op_store_T0_gpr_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr22+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr22: {
    extern void op_load_gpr_T1_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr22+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr22: {
    extern void op_store_T1_gpr_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr22+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr22: {
    extern void op_load_gpr_T2_gpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr22+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr23: {
    extern void op_load_gpr_T0_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr23+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr23: {
    extern void op_store_T0_gpr_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr23+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr23: {
    extern void op_load_gpr_T1_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr23+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr23: {
    extern void op_store_T1_gpr_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr23+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr23: {
    extern void op_load_gpr_T2_gpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr23+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr24: {
    extern void op_load_gpr_T0_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr24+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr24: {
    extern void op_store_T0_gpr_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr24+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr24: {
    extern void op_load_gpr_T1_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr24+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr24: {
    extern void op_store_T1_gpr_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr24+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr24: {
    extern void op_load_gpr_T2_gpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr24+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr25: {
    extern void op_load_gpr_T0_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr25+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr25: {
    extern void op_store_T0_gpr_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr25+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr25: {
    extern void op_load_gpr_T1_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr25+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr25: {
    extern void op_store_T1_gpr_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr25+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr25: {
    extern void op_load_gpr_T2_gpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr25+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr26: {
    extern void op_load_gpr_T0_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr26+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr26: {
    extern void op_store_T0_gpr_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr26+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr26: {
    extern void op_load_gpr_T1_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr26+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr26: {
    extern void op_store_T1_gpr_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr26+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr26: {
    extern void op_load_gpr_T2_gpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr26+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr27: {
    extern void op_load_gpr_T0_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr27+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr27: {
    extern void op_store_T0_gpr_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr27+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr27: {
    extern void op_load_gpr_T1_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr27+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr27: {
    extern void op_store_T1_gpr_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr27+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr27: {
    extern void op_load_gpr_T2_gpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr27+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr28: {
    extern void op_load_gpr_T0_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr28+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr28: {
    extern void op_store_T0_gpr_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr28+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr28: {
    extern void op_load_gpr_T1_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr28+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr28: {
    extern void op_store_T1_gpr_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr28+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr28: {
    extern void op_load_gpr_T2_gpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr28+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr29: {
    extern void op_load_gpr_T0_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr29+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr29: {
    extern void op_store_T0_gpr_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr29+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr29: {
    extern void op_load_gpr_T1_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr29+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr29: {
    extern void op_store_T1_gpr_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr29+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr29: {
    extern void op_load_gpr_T2_gpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr29+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr30: {
    extern void op_load_gpr_T0_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr30+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr30: {
    extern void op_store_T0_gpr_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr30+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr30: {
    extern void op_load_gpr_T1_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr30+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr30: {
    extern void op_store_T1_gpr_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr30+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr30: {
    extern void op_load_gpr_T2_gpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr30+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T0_gpr31: {
    extern void op_load_gpr_T0_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T0_gpr31+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T0_gpr_gpr31: {
    extern void op_store_T0_gpr_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_gpr_gpr31+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T1_gpr31: {
    extern void op_load_gpr_T1_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T1_gpr31+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_store_T1_gpr_gpr31: {
    extern void op_store_T1_gpr_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_gpr_gpr31+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_load_gpr_T2_gpr31: {
    extern void op_load_gpr_T2_gpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_gpr_T2_gpr31+0), 3);
    gen_code_ptr += 3;
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

case INDEX_op_reset_T0: {
    extern void op_reset_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T0+0), 2);
    gen_code_ptr += 2;
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

case INDEX_op_reset_T1: {
    extern void op_reset_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_set_T2: {
    long param1;
    extern void op_set_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_T2+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_reset_T2: {
    extern void op_reset_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T2+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_load_fpr_WT0_fpr0: {
    extern void op_load_fpr_WT0_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr0: {
    extern void op_store_fpr_WT0_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr0: {
    extern void op_load_fpr_WT1_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr0: {
    extern void op_store_fpr_WT1_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr0: {
    extern void op_load_fpr_WT2_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr0: {
    extern void op_store_fpr_WT2_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr0+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr0: {
    extern void op_load_fpr_DT0_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr0: {
    extern void op_store_fpr_DT0_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr0: {
    extern void op_load_fpr_DT1_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr0: {
    extern void op_store_fpr_DT1_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr0: {
    extern void op_load_fpr_DT2_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr0: {
    extern void op_store_fpr_DT2_fpr0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr1: {
    extern void op_load_fpr_WT0_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr1: {
    extern void op_store_fpr_WT0_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr1: {
    extern void op_load_fpr_WT1_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr1: {
    extern void op_store_fpr_WT1_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr1: {
    extern void op_load_fpr_WT2_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr1: {
    extern void op_store_fpr_WT2_fpr1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr1+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr2: {
    extern void op_load_fpr_WT0_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr2: {
    extern void op_store_fpr_WT0_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr2: {
    extern void op_load_fpr_WT1_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr2: {
    extern void op_store_fpr_WT1_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr2: {
    extern void op_load_fpr_WT2_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr2: {
    extern void op_store_fpr_WT2_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr2+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr2: {
    extern void op_load_fpr_DT0_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr2: {
    extern void op_store_fpr_DT0_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr2: {
    extern void op_load_fpr_DT1_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr2: {
    extern void op_store_fpr_DT1_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr2: {
    extern void op_load_fpr_DT2_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr2: {
    extern void op_store_fpr_DT2_fpr2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr2+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr3: {
    extern void op_load_fpr_WT0_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr3: {
    extern void op_store_fpr_WT0_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr3: {
    extern void op_load_fpr_WT1_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr3: {
    extern void op_store_fpr_WT1_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr3: {
    extern void op_load_fpr_WT2_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr3: {
    extern void op_store_fpr_WT2_fpr3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr3+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr4: {
    extern void op_load_fpr_WT0_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr4: {
    extern void op_store_fpr_WT0_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr4: {
    extern void op_load_fpr_WT1_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr4: {
    extern void op_store_fpr_WT1_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr4: {
    extern void op_load_fpr_WT2_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr4: {
    extern void op_store_fpr_WT2_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr4+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr4: {
    extern void op_load_fpr_DT0_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr4: {
    extern void op_store_fpr_DT0_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr4: {
    extern void op_load_fpr_DT1_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr4: {
    extern void op_store_fpr_DT1_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr4: {
    extern void op_load_fpr_DT2_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr4: {
    extern void op_store_fpr_DT2_fpr4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr4+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr5: {
    extern void op_load_fpr_WT0_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr5: {
    extern void op_store_fpr_WT0_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr5: {
    extern void op_load_fpr_WT1_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr5: {
    extern void op_store_fpr_WT1_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr5: {
    extern void op_load_fpr_WT2_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr5: {
    extern void op_store_fpr_WT2_fpr5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr5+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr6: {
    extern void op_load_fpr_WT0_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr6: {
    extern void op_store_fpr_WT0_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr6: {
    extern void op_load_fpr_WT1_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr6: {
    extern void op_store_fpr_WT1_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr6: {
    extern void op_load_fpr_WT2_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr6: {
    extern void op_store_fpr_WT2_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr6+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr6: {
    extern void op_load_fpr_DT0_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr6: {
    extern void op_store_fpr_DT0_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr6: {
    extern void op_load_fpr_DT1_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr6: {
    extern void op_store_fpr_DT1_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr6: {
    extern void op_load_fpr_DT2_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr6: {
    extern void op_store_fpr_DT2_fpr6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr6+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr7: {
    extern void op_load_fpr_WT0_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr7: {
    extern void op_store_fpr_WT0_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr7: {
    extern void op_load_fpr_WT1_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr7: {
    extern void op_store_fpr_WT1_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr7: {
    extern void op_load_fpr_WT2_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr7: {
    extern void op_store_fpr_WT2_fpr7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr7+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr8: {
    extern void op_load_fpr_WT0_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr8: {
    extern void op_store_fpr_WT0_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr8: {
    extern void op_load_fpr_WT1_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr8: {
    extern void op_store_fpr_WT1_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr8: {
    extern void op_load_fpr_WT2_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr8: {
    extern void op_store_fpr_WT2_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr8+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr8: {
    extern void op_load_fpr_DT0_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr8: {
    extern void op_store_fpr_DT0_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr8: {
    extern void op_load_fpr_DT1_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr8: {
    extern void op_store_fpr_DT1_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr8: {
    extern void op_load_fpr_DT2_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr8: {
    extern void op_store_fpr_DT2_fpr8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr8+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr9: {
    extern void op_load_fpr_WT0_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr9: {
    extern void op_store_fpr_WT0_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr9: {
    extern void op_load_fpr_WT1_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr9: {
    extern void op_store_fpr_WT1_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr9: {
    extern void op_load_fpr_WT2_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr9: {
    extern void op_store_fpr_WT2_fpr9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr9+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr10: {
    extern void op_load_fpr_WT0_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr10: {
    extern void op_store_fpr_WT0_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr10: {
    extern void op_load_fpr_WT1_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr10: {
    extern void op_store_fpr_WT1_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr10: {
    extern void op_load_fpr_WT2_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr10: {
    extern void op_store_fpr_WT2_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr10+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr10: {
    extern void op_load_fpr_DT0_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr10: {
    extern void op_store_fpr_DT0_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr10: {
    extern void op_load_fpr_DT1_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr10: {
    extern void op_store_fpr_DT1_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr10: {
    extern void op_load_fpr_DT2_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr10: {
    extern void op_store_fpr_DT2_fpr10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr10+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr11: {
    extern void op_load_fpr_WT0_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr11: {
    extern void op_store_fpr_WT0_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr11: {
    extern void op_load_fpr_WT1_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr11: {
    extern void op_store_fpr_WT1_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr11: {
    extern void op_load_fpr_WT2_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr11: {
    extern void op_store_fpr_WT2_fpr11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr11+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr12: {
    extern void op_load_fpr_WT0_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr12: {
    extern void op_store_fpr_WT0_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr12: {
    extern void op_load_fpr_WT1_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr12: {
    extern void op_store_fpr_WT1_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr12: {
    extern void op_load_fpr_WT2_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr12: {
    extern void op_store_fpr_WT2_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr12+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr12: {
    extern void op_load_fpr_DT0_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr12: {
    extern void op_store_fpr_DT0_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr12: {
    extern void op_load_fpr_DT1_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr12: {
    extern void op_store_fpr_DT1_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr12: {
    extern void op_load_fpr_DT2_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr12: {
    extern void op_store_fpr_DT2_fpr12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr12+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr13: {
    extern void op_load_fpr_WT0_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr13: {
    extern void op_store_fpr_WT0_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr13: {
    extern void op_load_fpr_WT1_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr13: {
    extern void op_store_fpr_WT1_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr13: {
    extern void op_load_fpr_WT2_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr13: {
    extern void op_store_fpr_WT2_fpr13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr13+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr14: {
    extern void op_load_fpr_WT0_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr14: {
    extern void op_store_fpr_WT0_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr14: {
    extern void op_load_fpr_WT1_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr14: {
    extern void op_store_fpr_WT1_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr14: {
    extern void op_load_fpr_WT2_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr14: {
    extern void op_store_fpr_WT2_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr14+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr14: {
    extern void op_load_fpr_DT0_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr14: {
    extern void op_store_fpr_DT0_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr14: {
    extern void op_load_fpr_DT1_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr14: {
    extern void op_store_fpr_DT1_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr14: {
    extern void op_load_fpr_DT2_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr14: {
    extern void op_store_fpr_DT2_fpr14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr14+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr15: {
    extern void op_load_fpr_WT0_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr15: {
    extern void op_store_fpr_WT0_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr15: {
    extern void op_load_fpr_WT1_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr15: {
    extern void op_store_fpr_WT1_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr15: {
    extern void op_load_fpr_WT2_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr15: {
    extern void op_store_fpr_WT2_fpr15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr15+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr16: {
    extern void op_load_fpr_WT0_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr16: {
    extern void op_store_fpr_WT0_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr16: {
    extern void op_load_fpr_WT1_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr16: {
    extern void op_store_fpr_WT1_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr16: {
    extern void op_load_fpr_WT2_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr16: {
    extern void op_store_fpr_WT2_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr16+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr16: {
    extern void op_load_fpr_DT0_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr16: {
    extern void op_store_fpr_DT0_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr16: {
    extern void op_load_fpr_DT1_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr16: {
    extern void op_store_fpr_DT1_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr16: {
    extern void op_load_fpr_DT2_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr16: {
    extern void op_store_fpr_DT2_fpr16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr16+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr17: {
    extern void op_load_fpr_WT0_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr17: {
    extern void op_store_fpr_WT0_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr17: {
    extern void op_load_fpr_WT1_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr17: {
    extern void op_store_fpr_WT1_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr17: {
    extern void op_load_fpr_WT2_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr17: {
    extern void op_store_fpr_WT2_fpr17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr17+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr18: {
    extern void op_load_fpr_WT0_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr18: {
    extern void op_store_fpr_WT0_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr18: {
    extern void op_load_fpr_WT1_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr18: {
    extern void op_store_fpr_WT1_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr18: {
    extern void op_load_fpr_WT2_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr18: {
    extern void op_store_fpr_WT2_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr18+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr18: {
    extern void op_load_fpr_DT0_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr18: {
    extern void op_store_fpr_DT0_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr18: {
    extern void op_load_fpr_DT1_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr18: {
    extern void op_store_fpr_DT1_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr18: {
    extern void op_load_fpr_DT2_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr18: {
    extern void op_store_fpr_DT2_fpr18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr18+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr19: {
    extern void op_load_fpr_WT0_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr19: {
    extern void op_store_fpr_WT0_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr19: {
    extern void op_load_fpr_WT1_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr19: {
    extern void op_store_fpr_WT1_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr19: {
    extern void op_load_fpr_WT2_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr19: {
    extern void op_store_fpr_WT2_fpr19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr19+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr20: {
    extern void op_load_fpr_WT0_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr20: {
    extern void op_store_fpr_WT0_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr20: {
    extern void op_load_fpr_WT1_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr20: {
    extern void op_store_fpr_WT1_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr20: {
    extern void op_load_fpr_WT2_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr20: {
    extern void op_store_fpr_WT2_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr20+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr20: {
    extern void op_load_fpr_DT0_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr20: {
    extern void op_store_fpr_DT0_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr20: {
    extern void op_load_fpr_DT1_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr20: {
    extern void op_store_fpr_DT1_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr20: {
    extern void op_load_fpr_DT2_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr20: {
    extern void op_store_fpr_DT2_fpr20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr20+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr21: {
    extern void op_load_fpr_WT0_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr21: {
    extern void op_store_fpr_WT0_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr21: {
    extern void op_load_fpr_WT1_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr21: {
    extern void op_store_fpr_WT1_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr21: {
    extern void op_load_fpr_WT2_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr21: {
    extern void op_store_fpr_WT2_fpr21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr21+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr22: {
    extern void op_load_fpr_WT0_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr22: {
    extern void op_store_fpr_WT0_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr22: {
    extern void op_load_fpr_WT1_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr22: {
    extern void op_store_fpr_WT1_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr22: {
    extern void op_load_fpr_WT2_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr22: {
    extern void op_store_fpr_WT2_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr22+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr22: {
    extern void op_load_fpr_DT0_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr22: {
    extern void op_store_fpr_DT0_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr22: {
    extern void op_load_fpr_DT1_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr22: {
    extern void op_store_fpr_DT1_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr22: {
    extern void op_load_fpr_DT2_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr22: {
    extern void op_store_fpr_DT2_fpr22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr22+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr23: {
    extern void op_load_fpr_WT0_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr23: {
    extern void op_store_fpr_WT0_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr23: {
    extern void op_load_fpr_WT1_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr23: {
    extern void op_store_fpr_WT1_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr23: {
    extern void op_load_fpr_WT2_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr23: {
    extern void op_store_fpr_WT2_fpr23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr24: {
    extern void op_load_fpr_WT0_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr24: {
    extern void op_store_fpr_WT0_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr24: {
    extern void op_load_fpr_WT1_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr24: {
    extern void op_store_fpr_WT1_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr24: {
    extern void op_load_fpr_WT2_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr24: {
    extern void op_store_fpr_WT2_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr24: {
    extern void op_load_fpr_DT0_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr24: {
    extern void op_store_fpr_DT0_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr24: {
    extern void op_load_fpr_DT1_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr24: {
    extern void op_store_fpr_DT1_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr24: {
    extern void op_load_fpr_DT2_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr24: {
    extern void op_store_fpr_DT2_fpr24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr24+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr25: {
    extern void op_load_fpr_WT0_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr25: {
    extern void op_store_fpr_WT0_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr25: {
    extern void op_load_fpr_WT1_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr25: {
    extern void op_store_fpr_WT1_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr25: {
    extern void op_load_fpr_WT2_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr25: {
    extern void op_store_fpr_WT2_fpr25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr26: {
    extern void op_load_fpr_WT0_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr26: {
    extern void op_store_fpr_WT0_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr26: {
    extern void op_load_fpr_WT1_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr26: {
    extern void op_store_fpr_WT1_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr26: {
    extern void op_load_fpr_WT2_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr26: {
    extern void op_store_fpr_WT2_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr26: {
    extern void op_load_fpr_DT0_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr26: {
    extern void op_store_fpr_DT0_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr26: {
    extern void op_load_fpr_DT1_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr26: {
    extern void op_store_fpr_DT1_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr26: {
    extern void op_load_fpr_DT2_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr26: {
    extern void op_store_fpr_DT2_fpr26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr26+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr27: {
    extern void op_load_fpr_WT0_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr27: {
    extern void op_store_fpr_WT0_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr27: {
    extern void op_load_fpr_WT1_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr27: {
    extern void op_store_fpr_WT1_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr27: {
    extern void op_load_fpr_WT2_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr27: {
    extern void op_store_fpr_WT2_fpr27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr28: {
    extern void op_load_fpr_WT0_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr28: {
    extern void op_store_fpr_WT0_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr28: {
    extern void op_load_fpr_WT1_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr28: {
    extern void op_store_fpr_WT1_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr28: {
    extern void op_load_fpr_WT2_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr28: {
    extern void op_store_fpr_WT2_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr28: {
    extern void op_load_fpr_DT0_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr28: {
    extern void op_store_fpr_DT0_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr28: {
    extern void op_load_fpr_DT1_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr28: {
    extern void op_store_fpr_DT1_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr28: {
    extern void op_load_fpr_DT2_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr28: {
    extern void op_store_fpr_DT2_fpr28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr28+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr29: {
    extern void op_load_fpr_WT0_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr29: {
    extern void op_store_fpr_WT0_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr29: {
    extern void op_load_fpr_WT1_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr29: {
    extern void op_store_fpr_WT1_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr29: {
    extern void op_load_fpr_WT2_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr29: {
    extern void op_store_fpr_WT2_fpr29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT0_fpr30: {
    extern void op_load_fpr_WT0_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr30: {
    extern void op_store_fpr_WT0_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr30: {
    extern void op_load_fpr_WT1_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr30: {
    extern void op_store_fpr_WT1_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr30: {
    extern void op_load_fpr_WT2_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr30: {
    extern void op_store_fpr_WT2_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fpr30: {
    extern void op_load_fpr_DT0_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT0_fpr30: {
    extern void op_store_fpr_DT0_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT0_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT1_fpr30: {
    extern void op_load_fpr_DT1_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT1_fpr30: {
    extern void op_store_fpr_DT1_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT1_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_DT2_fpr30: {
    extern void op_load_fpr_DT2_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT2_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_store_fpr_DT2_fpr30: {
    extern void op_store_fpr_DT2_fpr30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_DT2_fpr30+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_load_fpr_WT0_fpr31: {
    extern void op_load_fpr_WT0_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT0_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT0_fpr31: {
    extern void op_store_fpr_WT0_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT0_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT1_fpr31: {
    extern void op_load_fpr_WT1_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT1_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT1_fpr31: {
    extern void op_store_fpr_WT1_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT1_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_WT2_fpr31: {
    extern void op_load_fpr_WT2_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_WT2_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_fpr_WT2_fpr31: {
    extern void op_store_fpr_WT2_fpr31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpr_WT2_fpr31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_set_WT0: {
    long param1;
    extern void op_set_WT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_WT0+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_reset_WT0: {
    extern void op_reset_WT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_WT0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_set_WT1: {
    long param1;
    extern void op_set_WT1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_WT1+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_reset_WT1: {
    extern void op_reset_WT1();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_WT1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_set_WT2: {
    long param1;
    extern void op_set_WT2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_WT2+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_reset_WT2: {
    extern void op_reset_WT2();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_WT2+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_set_DT0: {
    long param1;
    extern void op_set_DT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_DT0+0), 18);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 18;
}
break;

case INDEX_op_reset_DT0: {
    extern void op_reset_DT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_DT0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_set_DT1: {
    long param1;
    extern void op_set_DT1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_DT1+0), 18);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 18;
}
break;

case INDEX_op_reset_DT1: {
    extern void op_reset_DT1();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_DT1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_set_DT2: {
    long param1;
    extern void op_set_DT2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_DT2+0), 18);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 18;
}
break;

case INDEX_op_reset_DT2: {
    extern void op_reset_DT2();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_DT2+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_dup_T0: {
    extern void op_dup_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_dup_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_load_HI: {
    extern void op_load_HI();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_HI+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_HI: {
    extern void op_store_HI();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_HI+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_LO: {
    extern void op_load_LO();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_LO+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_LO: {
    extern void op_store_LO();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_LO+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_lb_raw: {
    extern void op_lb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lb_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_lbu_raw: {
    extern void op_lbu_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lbu_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_sb_raw: {
    extern void op_sb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sb_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_lh_raw: {
    extern void op_lh_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lh_raw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_lhu_raw: {
    extern void op_lhu_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lhu_raw+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_sh_raw: {
    extern void op_sh_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sh_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_lw_raw: {
    extern void op_lw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lw_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_lwu_raw: {
    extern void op_lwu_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwu_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_sw_raw: {
    extern void op_sw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sw_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_lwl_raw: {
    extern void op_lwl_raw();
extern char do_lwl_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwl_raw+0), 21);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_lwl_raw) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 21;
}
break;

case INDEX_op_lwr_raw: {
    extern void op_lwr_raw();
extern char do_lwr_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_lwr_raw+0), 21);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_lwr_raw) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 21;
}
break;

case INDEX_op_swl_raw: {
    extern void op_swl_raw();
extern char do_swl_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_swl_raw+0), 30);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_swl_raw) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 30;
}
break;

case INDEX_op_swr_raw: {
    extern void op_swr_raw();
extern char do_swr_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_swr_raw+0), 30);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&do_swr_raw) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 30;
}
break;

case INDEX_op_ll_raw: {
    extern void op_ll_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ll_raw+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_sc_raw: {
    extern void op_sc_raw();
extern char dump_sc;
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_sc_raw+0), 59);
    *(uint32_t *)(gen_code_ptr + 4) = (long)(&dump_sc) - (long)(gen_code_ptr + 4) + -4;
    *(uint32_t *)(gen_code_ptr + 27) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 27) + -4;
    gen_code_ptr += 59;
}
break;

case INDEX_op_lwc1_raw: {
    extern void op_lwc1_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lwc1_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_swc1_raw: {
    extern void op_swc1_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_swc1_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_ldc1_raw: {
    extern void op_ldc1_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldc1_raw+0), 49);
    gen_code_ptr += 49;
}
break;

case INDEX_op_sdc1_raw: {
    extern void op_sdc1_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sdc1_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_add: {
    extern void op_add();
    memcpy(gen_code_ptr, (void *)((char *)&op_add+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_addo: {
    extern void op_addo();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_addo+0), 39);
    *(uint32_t *)(gen_code_ptr + 27) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 27) + -4;
    gen_code_ptr += 39;
}
break;

case INDEX_op_sub: {
    extern void op_sub();
    memcpy(gen_code_ptr, (void *)((char *)&op_sub+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_subo: {
    extern void op_subo();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_subo+0), 44);
    *(uint32_t *)(gen_code_ptr + 25) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 25) + -4;
    gen_code_ptr += 44;
}
break;

case INDEX_op_mul: {
    extern void op_mul();
    memcpy(gen_code_ptr, (void *)((char *)&op_mul+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_div: {
    extern void op_div();
extern char do_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_div+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_div) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_divu: {
    extern void op_divu();
    memcpy(gen_code_ptr, (void *)((char *)&op_divu+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_and: {
    extern void op_and();
    memcpy(gen_code_ptr, (void *)((char *)&op_and+0), 2);
    gen_code_ptr += 2;
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

case INDEX_op_xor: {
    extern void op_xor();
    memcpy(gen_code_ptr, (void *)((char *)&op_xor+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_sll: {
    extern void op_sll();
    memcpy(gen_code_ptr, (void *)((char *)&op_sll+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_sra: {
    extern void op_sra();
    memcpy(gen_code_ptr, (void *)((char *)&op_sra+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_srl: {
    extern void op_srl();
    memcpy(gen_code_ptr, (void *)((char *)&op_srl+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_rotr: {
    extern void op_rotr();
    memcpy(gen_code_ptr, (void *)((char *)&op_rotr+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_sllv: {
    extern void op_sllv();
    memcpy(gen_code_ptr, (void *)((char *)&op_sllv+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_srav: {
    extern void op_srav();
    memcpy(gen_code_ptr, (void *)((char *)&op_srav+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_srlv: {
    extern void op_srlv();
    memcpy(gen_code_ptr, (void *)((char *)&op_srlv+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_rotrv: {
    extern void op_rotrv();
    memcpy(gen_code_ptr, (void *)((char *)&op_rotrv+0), 30);
    gen_code_ptr += 30;
}
break;

case INDEX_op_clo: {
    extern void op_clo();
    memcpy(gen_code_ptr, (void *)((char *)&op_clo+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_clz: {
    extern void op_clz();
    memcpy(gen_code_ptr, (void *)((char *)&op_clz+0), 27);
    gen_code_ptr += 27;
}
break;

case INDEX_op_mult: {
    extern void op_mult();
    memcpy(gen_code_ptr, (void *)((char *)&op_mult+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_multu: {
    extern void op_multu();
    memcpy(gen_code_ptr, (void *)((char *)&op_multu+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_madd: {
    extern void op_madd();
    memcpy(gen_code_ptr, (void *)((char *)&op_madd+0), 90);
    gen_code_ptr += 90;
}
break;

case INDEX_op_maddu: {
    extern void op_maddu();
    memcpy(gen_code_ptr, (void *)((char *)&op_maddu+0), 90);
    gen_code_ptr += 90;
}
break;

case INDEX_op_msub: {
    extern void op_msub();
    memcpy(gen_code_ptr, (void *)((char *)&op_msub+0), 90);
    gen_code_ptr += 90;
}
break;

case INDEX_op_msubu: {
    extern void op_msubu();
    memcpy(gen_code_ptr, (void *)((char *)&op_msubu+0), 90);
    gen_code_ptr += 90;
}
break;

case INDEX_op_movn: {
    long param1;
    extern void op_movn();
    memcpy(gen_code_ptr, (void *)((char *)&op_movn+0), 13);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = param1 + 0;
    gen_code_ptr += 13;
}
break;

case INDEX_op_movz: {
    long param1;
    extern void op_movz();
    memcpy(gen_code_ptr, (void *)((char *)&op_movz+0), 13);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = param1 + 0;
    gen_code_ptr += 13;
}
break;

case INDEX_op_movf: {
    long param1, param2, param3;
    extern void op_movf();
    memcpy(gen_code_ptr, (void *)((char *)&op_movf+0), 30);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 22) = param2 + 0;
    gen_code_ptr += 30;
}
break;

case INDEX_op_movt: {
    long param1, param2, param3;
    extern void op_movt();
    memcpy(gen_code_ptr, (void *)((char *)&op_movt+0), 30);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 22) = param2 + 0;
    gen_code_ptr += 30;
}
break;

case INDEX_op_eq: {
    extern void op_eq();
    memcpy(gen_code_ptr, (void *)((char *)&op_eq+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ne: {
    extern void op_ne();
    memcpy(gen_code_ptr, (void *)((char *)&op_ne+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ge: {
    extern void op_ge();
    memcpy(gen_code_ptr, (void *)((char *)&op_ge+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_geu: {
    extern void op_geu();
    memcpy(gen_code_ptr, (void *)((char *)&op_geu+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_lt: {
    extern void op_lt();
    memcpy(gen_code_ptr, (void *)((char *)&op_lt+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ltu: {
    extern void op_ltu();
    memcpy(gen_code_ptr, (void *)((char *)&op_ltu+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_gez: {
    extern void op_gez();
    memcpy(gen_code_ptr, (void *)((char *)&op_gez+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_gtz: {
    extern void op_gtz();
    memcpy(gen_code_ptr, (void *)((char *)&op_gtz+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_lez: {
    extern void op_lez();
    memcpy(gen_code_ptr, (void *)((char *)&op_lez+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ltz: {
    extern void op_ltz();
    memcpy(gen_code_ptr, (void *)((char *)&op_ltz+0), 3);
    gen_code_ptr += 3;
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

case INDEX_op_save_breg_target: {
    extern void op_save_breg_target();
    memcpy(gen_code_ptr, (void *)((char *)&op_save_breg_target+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_restore_breg_target: {
    extern void op_restore_breg_target();
    memcpy(gen_code_ptr, (void *)((char *)&op_restore_breg_target+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_breg: {
    extern void op_breg();
    memcpy(gen_code_ptr, (void *)((char *)&op_breg+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_save_btarget: {
    long param1;
    extern void op_save_btarget();
    memcpy(gen_code_ptr, (void *)((char *)&op_save_btarget+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_set_bcond: {
    extern void op_set_bcond();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_bcond+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_save_bcond: {
    extern void op_save_bcond();
    memcpy(gen_code_ptr, (void *)((char *)&op_save_bcond+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_restore_bcond: {
    extern void op_restore_bcond();
    memcpy(gen_code_ptr, (void *)((char *)&op_restore_bcond+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_jnz_T2: {
    long param1;
    extern void op_jnz_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_T2+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = gen_labels[param1] - (long)(gen_code_ptr + 5) + -4;
    gen_code_ptr += 9;
}
break;

case INDEX_op_mfc0_index: {
    extern void op_mfc0_index();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_index+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_random: {
    extern void op_mfc0_random();
extern char do_mfc0_random;
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_random+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_mfc0_random) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_mfc0_entrylo0: {
    extern void op_mfc0_entrylo0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_entrylo0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_entrylo1: {
    extern void op_mfc0_entrylo1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_entrylo1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_context: {
    extern void op_mfc0_context();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_context+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_pagemask: {
    extern void op_mfc0_pagemask();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_pagemask+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_pagegrain: {
    extern void op_mfc0_pagegrain();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_pagegrain+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_wired: {
    extern void op_mfc0_wired();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_wired+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_hwrena: {
    extern void op_mfc0_hwrena();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_hwrena+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_badvaddr: {
    extern void op_mfc0_badvaddr();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_badvaddr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_count: {
    extern void op_mfc0_count();
extern char do_mfc0_count;
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_count+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_mfc0_count) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_mfc0_entryhi: {
    extern void op_mfc0_entryhi();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_entryhi+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_compare: {
    extern void op_mfc0_compare();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_compare+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_status: {
    extern void op_mfc0_status();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_status+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_intctl: {
    extern void op_mfc0_intctl();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_intctl+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_srsctl: {
    extern void op_mfc0_srsctl();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_srsctl+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_srsmap: {
    extern void op_mfc0_srsmap();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_srsmap+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_cause: {
    extern void op_mfc0_cause();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_cause+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_epc: {
    extern void op_mfc0_epc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_epc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_prid: {
    extern void op_mfc0_prid();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_prid+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_ebase: {
    extern void op_mfc0_ebase();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_ebase+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config0: {
    extern void op_mfc0_config0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config1: {
    extern void op_mfc0_config1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config2: {
    extern void op_mfc0_config2();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config3: {
    extern void op_mfc0_config3();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config6: {
    extern void op_mfc0_config6();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_config7: {
    extern void op_mfc0_config7();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_config7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_lladdr: {
    extern void op_mfc0_lladdr();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_lladdr+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_mfc0_watchlo0: {
    extern void op_mfc0_watchlo0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_watchlo0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_watchhi0: {
    extern void op_mfc0_watchhi0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_watchhi0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_xcontext: {
    extern void op_mfc0_xcontext();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_xcontext+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_framemask: {
    extern void op_mfc0_framemask();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_framemask+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_debug: {
    extern void op_mfc0_debug();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_debug+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_mfc0_depc: {
    extern void op_mfc0_depc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_depc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_performance0: {
    extern void op_mfc0_performance0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_performance0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_taglo: {
    extern void op_mfc0_taglo();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_taglo+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_datalo: {
    extern void op_mfc0_datalo();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_datalo+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_taghi: {
    extern void op_mfc0_taghi();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_taghi+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_datahi: {
    extern void op_mfc0_datahi();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_datahi+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_errorepc: {
    extern void op_mfc0_errorepc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_errorepc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mfc0_desave: {
    extern void op_mfc0_desave();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc0_desave+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_index: {
    extern void op_mtc0_index();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_index+0), 40);
    gen_code_ptr += 40;
}
break;

case INDEX_op_mtc0_entrylo0: {
    extern void op_mtc0_entrylo0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_entrylo0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_mtc0_entrylo1: {
    extern void op_mtc0_entrylo1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_entrylo1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_mtc0_context: {
    extern void op_mtc0_context();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_context+0), 27);
    gen_code_ptr += 27;
}
break;

case INDEX_op_mtc0_pagemask: {
    extern void op_mtc0_pagemask();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_pagemask+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_mtc0_pagegrain: {
    extern void op_mtc0_pagegrain();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_pagegrain+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_mtc0_wired: {
    extern void op_mtc0_wired();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_wired+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_mtc0_hwrena: {
    extern void op_mtc0_hwrena();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_hwrena+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_mtc0_count: {
    extern void op_mtc0_count();
extern char cpu_mips_store_count;
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_count+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_mips_store_count) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_mtc0_entryhi: {
    extern void op_mtc0_entryhi();
extern char cpu_mips_tlb_flush;
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_entryhi+0), 46);
    *(uint32_t *)(gen_code_ptr + 39) = (long)(&cpu_mips_tlb_flush) - (long)(gen_code_ptr + 39) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_mtc0_compare: {
    extern void op_mtc0_compare();
extern char cpu_mips_store_compare;
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_compare+0), 18);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&cpu_mips_store_compare) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 18;
}
break;

case INDEX_op_mtc0_status: {
    extern void op_mtc0_status();
extern char loglevel;
extern char do_mtc0_status_debug;
extern char cpu_mips_update_irq;
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_status+0), 118);
    *(uint32_t *)(gen_code_ptr + 74) = (long)(&loglevel) + 0;
    *(uint32_t *)(gen_code_ptr + 95) = (long)(&do_mtc0_status_debug) - (long)(gen_code_ptr + 95) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&cpu_mips_update_irq) - (long)(gen_code_ptr + 111) + -4;
    gen_code_ptr += 118;
}
break;

case INDEX_op_mtc0_intctl: {
    extern void op_mtc0_intctl();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_intctl+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_mtc0_srsctl: {
    extern void op_mtc0_srsctl();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_srsctl+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_mtc0_srsmap: {
    extern void op_mtc0_srsmap();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_srsmap+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_mtc0_cause: {
    extern void op_mtc0_cause();
extern char cpu_mips_update_irq;
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_cause+0), 85);
    *(uint32_t *)(gen_code_ptr + 67) = (long)(&cpu_mips_update_irq) - (long)(gen_code_ptr + 67) + -4;
    gen_code_ptr += 85;
}
break;

case INDEX_op_mtc0_epc: {
    extern void op_mtc0_epc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_epc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_ebase: {
    extern void op_mtc0_ebase();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_ebase+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_mtc0_config0: {
    extern void op_mtc0_config0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_config0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_mtc0_config2: {
    extern void op_mtc0_config2();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_config2+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_mtc0_watchlo0: {
    extern void op_mtc0_watchlo0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_watchlo0+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_mtc0_watchhi0: {
    extern void op_mtc0_watchhi0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_watchhi0+0), 26);
    gen_code_ptr += 26;
}
break;

case INDEX_op_mtc0_framemask: {
    extern void op_mtc0_framemask();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_framemask+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_debug: {
    extern void op_mtc0_debug();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_debug+0), 51);
    gen_code_ptr += 51;
}
break;

case INDEX_op_mtc0_depc: {
    extern void op_mtc0_depc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_depc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_performance0: {
    extern void op_mtc0_performance0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_performance0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_taglo: {
    extern void op_mtc0_taglo();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_taglo+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_mtc0_datalo: {
    extern void op_mtc0_datalo();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_datalo+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_taghi: {
    extern void op_mtc0_taghi();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_taghi+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_datahi: {
    extern void op_mtc0_datahi();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_datahi+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_errorepc: {
    extern void op_mtc0_errorepc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_errorepc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc0_desave: {
    extern void op_mtc0_desave();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc0_desave+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_cp0_enabled: {
    extern void op_cp0_enabled();
extern char do_raise_exception_err;
    memcpy(gen_code_ptr, (void *)((char *)&op_cp0_enabled+0), 50);
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 35) + -4;
    gen_code_ptr += 50;
}
break;

case INDEX_op_cp1_enabled: {
    extern void op_cp1_enabled();
extern char do_raise_exception_err;
    memcpy(gen_code_ptr, (void *)((char *)&op_cp1_enabled+0), 47);
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&do_raise_exception_err) - (long)(gen_code_ptr + 29) + -4;
    gen_code_ptr += 47;
}
break;

case INDEX_op_cfc1: {
    extern void op_cfc1();
    memcpy(gen_code_ptr, (void *)((char *)&op_cfc1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_ctc1: {
    extern void op_ctc1();
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_ctc1+0), 70);
    *(uint32_t *)(gen_code_ptr + 42) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 50) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 50) + -4;
    gen_code_ptr += 70;
}
break;

case INDEX_op_mfc1: {
    extern void op_mfc1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mfc1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_mtc1: {
    extern void op_mtc1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mtc1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_float_cvtd_s: {
    extern void op_float_cvtd_s();
extern char float32_to_float64;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvtd_s+0), 42);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 42;
}
break;

case INDEX_op_float_cvtd_w: {
    extern void op_float_cvtd_w();
extern char int32_to_float64;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvtd_w+0), 42);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&int32_to_float64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 42;
}
break;

case INDEX_op_float_cvts_d: {
    extern void op_float_cvts_d();
extern char float64_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvts_d+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_float32) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_cvts_w: {
    extern void op_float_cvts_w();
extern char int32_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvts_w+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&int32_to_float32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_float_cvtw_s: {
    extern void op_float_cvtw_s();
extern char float32_to_int32;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvtw_s+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_int32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_float_cvtw_d: {
    extern void op_float_cvtw_d();
extern char float64_to_int32;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_cvtw_d+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_int32) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_roundw_d: {
    extern void op_float_roundw_d();
extern char set_float_rounding_mode;
extern char float64_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_roundw_d+0), 102);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float64_round_to_int) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 95) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 95) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_float_roundw_s: {
    extern void op_float_roundw_s();
extern char set_float_rounding_mode;
extern char float32_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_roundw_s+0), 92);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_round_to_int) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 77) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 92;
}
break;

case INDEX_op_float_truncw_d: {
    extern void op_float_truncw_d();
extern char float64_to_int32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_truncw_d+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_int32_round_to_zero) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_truncw_s: {
    extern void op_float_truncw_s();
extern char float32_to_int32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_truncw_s+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_int32_round_to_zero) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_float_ceilw_d: {
    extern void op_float_ceilw_d();
extern char set_float_rounding_mode;
extern char float64_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_ceilw_d+0), 102);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float64_round_to_int) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 95) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 95) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_float_ceilw_s: {
    extern void op_float_ceilw_s();
extern char set_float_rounding_mode;
extern char float32_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_ceilw_s+0), 92);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_round_to_int) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 77) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 92;
}
break;

case INDEX_op_float_floorw_d: {
    extern void op_float_floorw_d();
extern char set_float_rounding_mode;
extern char float64_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_floorw_d+0), 102);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float64_round_to_int) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 95) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 95) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_float_floorw_s: {
    extern void op_float_floorw_s();
extern char set_float_rounding_mode;
extern char float32_round_to_int;
extern char ieee_rm;
extern char set_float_rounding_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_floorw_s+0), 92);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_round_to_int) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 77) = (long)(&ieee_rm) + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&set_float_rounding_mode) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 92;
}
break;

case INDEX_op_float_add_d: {
    extern void op_float_add_d();
extern char float64_add;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_add_d+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_add) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_float_add_s: {
    extern void op_float_add_s();
extern char float32_add;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_add_s+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_add) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_sub_d: {
    extern void op_float_sub_d();
extern char float64_sub;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_sub_d+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_sub) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_float_sub_s: {
    extern void op_float_sub_s();
extern char float32_sub;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_sub_s+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_sub) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_mul_d: {
    extern void op_float_mul_d();
extern char float64_mul;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_mul_d+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_mul) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_float_mul_s: {
    extern void op_float_mul_s();
extern char float32_mul;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_mul_s+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_mul) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_div_d: {
    extern void op_float_div_d();
extern char float64_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_div_d+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_div) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_float_div_s: {
    extern void op_float_div_s();
extern char float32_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_div_s+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_div) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_float_sqrt_d: {
    extern void op_float_sqrt_d();
extern char float64_sqrt;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_sqrt_d+0), 52);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_sqrt) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_float_sqrt_s: {
    extern void op_float_sqrt_s();
extern char float32_sqrt;
    memcpy(gen_code_ptr, (void *)((char *)&op_float_sqrt_s+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_sqrt) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_float_abs_d: {
    extern void op_float_abs_d();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_abs_d+0), 30);
    gen_code_ptr += 30;
}
break;

case INDEX_op_float_abs_s: {
    extern void op_float_abs_s();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_abs_s+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_float_chs_d: {
    extern void op_float_chs_d();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_chs_d+0), 30);
    gen_code_ptr += 30;
}
break;

case INDEX_op_float_chs_s: {
    extern void op_float_chs_s();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_chs_s+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_float_mov_d: {
    extern void op_float_mov_d();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_mov_d+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_float_mov_s: {
    extern void op_float_mov_s();
    memcpy(gen_code_ptr, (void *)((char *)&op_float_mov_s+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_cmp_d_f: {
    extern void op_cmp_d_f();
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_f+0), 44);
    *(uint32_t *)(gen_code_ptr + 37) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 37) + -4;
    gen_code_ptr += 44;
}
break;

case INDEX_op_cmp_d_un: {
    extern void op_cmp_d_un();
extern char float64_is_unordered;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_un+0), 114);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 107) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 107) + -4;
    gen_code_ptr += 114;
}
break;

case INDEX_op_cmp_d_eq: {
    extern void op_cmp_d_eq();
extern char float64_eq;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_eq+0), 114);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_eq) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 107) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 107) + -4;
    gen_code_ptr += 114;
}
break;

case INDEX_op_cmp_d_ueq: {
    extern void op_cmp_d_ueq();
extern char float64_is_unordered;
extern char float64_eq;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ueq+0), 182);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_eq) - (long)(gen_code_ptr + 111) + -4;
    *(uint32_t *)(gen_code_ptr + 175) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 175) + -4;
    gen_code_ptr += 182;
}
break;

case INDEX_op_cmp_d_olt: {
    extern void op_cmp_d_olt();
extern char float64_lt;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_olt+0), 114);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_lt) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 107) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 107) + -4;
    gen_code_ptr += 114;
}
break;

case INDEX_op_cmp_d_ult: {
    extern void op_cmp_d_ult();
extern char float64_is_unordered;
extern char float64_lt;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ult+0), 188);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_lt) - (long)(gen_code_ptr + 111) + -4;
    *(uint32_t *)(gen_code_ptr + 181) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 181) + -4;
    gen_code_ptr += 188;
}
break;

case INDEX_op_cmp_d_ole: {
    extern void op_cmp_d_ole();
extern char float64_le;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ole+0), 114);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_le) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 107) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 107) + -4;
    gen_code_ptr += 114;
}
break;

case INDEX_op_cmp_d_ule: {
    extern void op_cmp_d_ule();
extern char float64_is_unordered;
extern char float64_le;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ule+0), 188);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_le) - (long)(gen_code_ptr + 111) + -4;
    *(uint32_t *)(gen_code_ptr + 181) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 181) + -4;
    gen_code_ptr += 188;
}
break;

case INDEX_op_cmp_d_sf: {
    extern void op_cmp_d_sf();
extern char float64_is_unordered;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_sf+0), 70);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 70;
}
break;

case INDEX_op_cmp_d_ngle: {
    extern void op_cmp_d_ngle();
extern char float64_is_unordered;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ngle+0), 86);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_cmp_d_seq: {
    extern void op_cmp_d_seq();
extern char float64_eq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_seq+0), 86);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_eq) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_cmp_d_ngl: {
    extern void op_cmp_d_ngl();
extern char float64_is_unordered;
extern char float64_eq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ngl+0), 158);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_eq) - (long)(gen_code_ptr + 111) + -4;
    gen_code_ptr += 158;
}
break;

case INDEX_op_cmp_d_lt: {
    extern void op_cmp_d_lt();
extern char float64_lt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_lt+0), 86);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_lt) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_cmp_d_nge: {
    extern void op_cmp_d_nge();
extern char float64_is_unordered;
extern char float64_lt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_nge+0), 168);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_lt) - (long)(gen_code_ptr + 111) + -4;
    gen_code_ptr += 168;
}
break;

case INDEX_op_cmp_d_le: {
    extern void op_cmp_d_le();
extern char float64_le;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_le+0), 86);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_le) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 86;
}
break;

case INDEX_op_cmp_d_ngt: {
    extern void op_cmp_d_ngt();
extern char float64_is_unordered;
extern char float64_le;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_d_ngt+0), 168);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_is_unordered) - (long)(gen_code_ptr + 53) + -4;
    *(uint32_t *)(gen_code_ptr + 111) = (long)(&float64_le) - (long)(gen_code_ptr + 111) + -4;
    gen_code_ptr += 168;
}
break;

case INDEX_op_cmp_s_f: {
    extern void op_cmp_s_f();
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_f+0), 44);
    *(uint32_t *)(gen_code_ptr + 37) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 37) + -4;
    gen_code_ptr += 44;
}
break;

case INDEX_op_cmp_s_un: {
    extern void op_cmp_s_un();
extern char float32_is_unordered;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_un+0), 94);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 87) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_cmp_s_eq: {
    extern void op_cmp_s_eq();
extern char float32_eq;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_eq+0), 94);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_eq) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 87) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_cmp_s_ueq: {
    extern void op_cmp_s_ueq();
extern char float32_is_unordered;
extern char float32_eq;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ueq+0), 156);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_eq) - (long)(gen_code_ptr + 71) + -4;
    *(uint32_t *)(gen_code_ptr + 149) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 149) + -4;
    gen_code_ptr += 156;
}
break;

case INDEX_op_cmp_s_olt: {
    extern void op_cmp_s_olt();
extern char float32_lt;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_olt+0), 94);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_lt) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 87) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_cmp_s_ult: {
    extern void op_cmp_s_ult();
extern char float32_is_unordered;
extern char float32_lt;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ult+0), 144);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_lt) - (long)(gen_code_ptr + 71) + -4;
    *(uint32_t *)(gen_code_ptr + 137) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 137) + -4;
    gen_code_ptr += 144;
}
break;

case INDEX_op_cmp_s_ole: {
    extern void op_cmp_s_ole();
extern char float32_le;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ole+0), 94);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_le) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 87) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 87) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_cmp_s_ule: {
    extern void op_cmp_s_ule();
extern char float32_is_unordered;
extern char float32_le;
extern char set_float_exception_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ule+0), 144);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_le) - (long)(gen_code_ptr + 71) + -4;
    *(uint32_t *)(gen_code_ptr + 137) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 137) + -4;
    gen_code_ptr += 144;
}
break;

case INDEX_op_cmp_s_sf: {
    extern void op_cmp_s_sf();
extern char float32_is_unordered;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_sf+0), 50);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 50;
}
break;

case INDEX_op_cmp_s_ngle: {
    extern void op_cmp_s_ngle();
extern char float32_is_unordered;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ngle+0), 66);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 66;
}
break;

case INDEX_op_cmp_s_seq: {
    extern void op_cmp_s_seq();
extern char float32_eq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_seq+0), 66);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_eq) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 66;
}
break;

case INDEX_op_cmp_s_ngl: {
    extern void op_cmp_s_ngl();
extern char float32_is_unordered;
extern char float32_eq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ngl+0), 122);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_eq) - (long)(gen_code_ptr + 71) + -4;
    gen_code_ptr += 122;
}
break;

case INDEX_op_cmp_s_lt: {
    extern void op_cmp_s_lt();
extern char float32_lt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_lt+0), 66);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_lt) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 66;
}
break;

case INDEX_op_cmp_s_nge: {
    extern void op_cmp_s_nge();
extern char float32_is_unordered;
extern char float32_lt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_nge+0), 124);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_lt) - (long)(gen_code_ptr + 71) + -4;
    gen_code_ptr += 124;
}
break;

case INDEX_op_cmp_s_le: {
    extern void op_cmp_s_le();
extern char float32_le;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_le+0), 66);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_le) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 66;
}
break;

case INDEX_op_cmp_s_ngt: {
    extern void op_cmp_s_ngt();
extern char float32_is_unordered;
extern char float32_le;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmp_s_ngt+0), 124);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_is_unordered) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 71) = (long)(&float32_le) - (long)(gen_code_ptr + 71) + -4;
    gen_code_ptr += 124;
}
break;

case INDEX_op_bc1f: {
    extern void op_bc1f();
    memcpy(gen_code_ptr, (void *)((char *)&op_bc1f+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_bc1t: {
    extern void op_bc1t();
    memcpy(gen_code_ptr, (void *)((char *)&op_bc1t+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_tlbwi: {
    extern void op_tlbwi();
extern char do_tlbwi;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbwi+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbwi) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tlbwr: {
    extern void op_tlbwr();
extern char do_tlbwr;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbwr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbwr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tlbp: {
    extern void op_tlbp();
extern char do_tlbp;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbp+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbp) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tlbr: {
    extern void op_tlbr();
extern char do_tlbr;
    memcpy(gen_code_ptr, (void *)((char *)&op_tlbr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_tlbr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_tls_value: {
    extern void op_tls_value();
    memcpy(gen_code_ptr, (void *)((char *)&op_tls_value+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_pmon: {
    long param1;
    extern void op_pmon();
extern char do_pmon;
    memcpy(gen_code_ptr, (void *)((char *)&op_pmon+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_pmon) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_di: {
    extern void op_di();
extern char cpu_mips_update_irq;
    memcpy(gen_code_ptr, (void *)((char *)&op_di+0), 29);
    *(uint32_t *)(gen_code_ptr + 24) = (long)(&cpu_mips_update_irq) - (long)(gen_code_ptr + 24) + -4;
    gen_code_ptr += 29;
}
break;

case INDEX_op_ei: {
    extern void op_ei();
extern char cpu_mips_update_irq;
    memcpy(gen_code_ptr, (void *)((char *)&op_ei+0), 29);
    *(uint32_t *)(gen_code_ptr + 24) = (long)(&cpu_mips_update_irq) - (long)(gen_code_ptr + 24) + -4;
    gen_code_ptr += 29;
}
break;

case INDEX_op_trap: {
    extern void op_trap();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_trap+0), 32);
    *(uint32_t *)(gen_code_ptr + 15) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 32;
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

case INDEX_op_set_lladdr: {
    extern void op_set_lladdr();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_lladdr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_eret: {
    extern void op_eret();
extern char loglevel;
extern char debug_pre_eret;
extern char loglevel;
extern char debug_post_eret;
    memcpy(gen_code_ptr, (void *)((char *)&op_eret+0), 145);
    *(uint32_t *)(gen_code_ptr + 2) = (long)(&loglevel) + 0;
    *(uint32_t *)(gen_code_ptr + 10) = (long)(&debug_pre_eret) - (long)(gen_code_ptr + 10) + -4;
    *(uint32_t *)(gen_code_ptr + 120) = (long)(&loglevel) + 0;
    *(uint32_t *)(gen_code_ptr + 128) = (long)(&debug_post_eret) - (long)(gen_code_ptr + 128) + -4;
    gen_code_ptr += 145;
}
break;

case INDEX_op_deret: {
    extern void op_deret();
extern char loglevel;
extern char debug_pre_eret;
extern char loglevel;
extern char debug_post_eret;
    memcpy(gen_code_ptr, (void *)((char *)&op_deret+0), 111);
    *(uint32_t *)(gen_code_ptr + 2) = (long)(&loglevel) + 0;
    *(uint32_t *)(gen_code_ptr + 10) = (long)(&debug_pre_eret) - (long)(gen_code_ptr + 10) + -4;
    *(uint32_t *)(gen_code_ptr + 86) = (long)(&loglevel) + 0;
    *(uint32_t *)(gen_code_ptr + 94) = (long)(&debug_post_eret) - (long)(gen_code_ptr + 94) + -4;
    gen_code_ptr += 111;
}
break;

case INDEX_op_rdhwr_cpunum: {
    extern void op_rdhwr_cpunum();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_rdhwr_cpunum+0), 69);
    *(uint32_t *)(gen_code_ptr + 58) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 58) + -4;
    gen_code_ptr += 69;
}
break;

case INDEX_op_rdhwr_synci_step: {
    extern void op_rdhwr_synci_step();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_rdhwr_synci_step+0), 63);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_rdhwr_cc: {
    extern void op_rdhwr_cc();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_rdhwr_cc+0), 63);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_rdhwr_ccres: {
    extern void op_rdhwr_ccres();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_rdhwr_ccres+0), 63);
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_save_state: {
    long param1;
    extern void op_save_state();
    memcpy(gen_code_ptr, (void *)((char *)&op_save_state+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_save_pc: {
    long param1;
    extern void op_save_pc();
    memcpy(gen_code_ptr, (void *)((char *)&op_save_pc+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_interrupt_restart: {
    extern void op_interrupt_restart();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_interrupt_restart+0), 87);
    *(uint32_t *)(gen_code_ptr + 73) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 73) + -4;
    gen_code_ptr += 87;
}
break;

case INDEX_op_raise_exception: {
    long param1;
    extern void op_raise_exception();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_raise_exception+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 16;
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

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_wait: {
    extern void op_wait();
extern char do_raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_wait+0), 27);
    *(uint32_t *)(gen_code_ptr + 22) = (long)(&do_raise_exception) - (long)(gen_code_ptr + 22) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_ext: {
    long param1, param2;
    extern void op_ext();
    memcpy(gen_code_ptr, (void *)((char *)&op_ext+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 25) = param2 + 0;
    gen_code_ptr += 36;
}
break;

case INDEX_op_ins: {
    long param1, param2;
    extern void op_ins();
    memcpy(gen_code_ptr, (void *)((char *)&op_ins+0), 84);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = param1 + 0;
    gen_code_ptr += 84;
}
break;

case INDEX_op_wsbh: {
    extern void op_wsbh();
    memcpy(gen_code_ptr, (void *)((char *)&op_wsbh+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_seb: {
    extern void op_seb();
    memcpy(gen_code_ptr, (void *)((char *)&op_seb+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_seh: {
    extern void op_seh();
    memcpy(gen_code_ptr, (void *)((char *)&op_seh+0), 3);
    gen_code_ptr += 3;
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

