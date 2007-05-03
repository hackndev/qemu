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
case INDEX_op_movl_T0_g0: {
    extern void op_movl_T0_g0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g0: {
    extern void op_movl_T1_g0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g0: {
    extern void op_movl_T2_g0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g0_T0: {
    extern void op_movl_g0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g0_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g0_T1: {
    extern void op_movl_g0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g0_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g1: {
    extern void op_movl_T0_g1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g1: {
    extern void op_movl_T1_g1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g1: {
    extern void op_movl_T2_g1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g1_T0: {
    extern void op_movl_g1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g1_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g1_T1: {
    extern void op_movl_g1_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g1_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g2: {
    extern void op_movl_T0_g2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g2: {
    extern void op_movl_T1_g2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g2: {
    extern void op_movl_T2_g2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g2_T0: {
    extern void op_movl_g2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g2_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g2_T1: {
    extern void op_movl_g2_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g2_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g3: {
    extern void op_movl_T0_g3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g3: {
    extern void op_movl_T1_g3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g3: {
    extern void op_movl_T2_g3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g3_T0: {
    extern void op_movl_g3_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g3_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g3_T1: {
    extern void op_movl_g3_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g3_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g4: {
    extern void op_movl_T0_g4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g4: {
    extern void op_movl_T1_g4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g4: {
    extern void op_movl_T2_g4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g4_T0: {
    extern void op_movl_g4_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g4_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g4_T1: {
    extern void op_movl_g4_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g4_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g5: {
    extern void op_movl_T0_g5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g5: {
    extern void op_movl_T1_g5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g5: {
    extern void op_movl_T2_g5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g5_T0: {
    extern void op_movl_g5_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g5_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g5_T1: {
    extern void op_movl_g5_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g5_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g6: {
    extern void op_movl_T0_g6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g6: {
    extern void op_movl_T1_g6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g6: {
    extern void op_movl_T2_g6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g6_T0: {
    extern void op_movl_g6_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g6_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g6_T1: {
    extern void op_movl_g6_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g6_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_g7: {
    extern void op_movl_T0_g7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_g7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_g7: {
    extern void op_movl_T1_g7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_g7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_g7: {
    extern void op_movl_T2_g7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_g7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g7_T0: {
    extern void op_movl_g7_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g7_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_g7_T1: {
    extern void op_movl_g7_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_g7_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_i0: {
    extern void op_movl_T0_i0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i0: {
    extern void op_movl_T1_i0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i0: {
    extern void op_movl_T2_i0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i0_T0: {
    extern void op_movl_i0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i0_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i0_T1: {
    extern void op_movl_i0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i0_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i1: {
    extern void op_movl_T0_i1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i1: {
    extern void op_movl_T1_i1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i1: {
    extern void op_movl_T2_i1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i1_T0: {
    extern void op_movl_i1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i1_T1: {
    extern void op_movl_i1_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i1_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i2: {
    extern void op_movl_T0_i2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i2: {
    extern void op_movl_T1_i2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i2: {
    extern void op_movl_T2_i2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i2_T0: {
    extern void op_movl_i2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i2_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i2_T1: {
    extern void op_movl_i2_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i2_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i3: {
    extern void op_movl_T0_i3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i3: {
    extern void op_movl_T1_i3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i3: {
    extern void op_movl_T2_i3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i3_T0: {
    extern void op_movl_i3_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i3_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i3_T1: {
    extern void op_movl_i3_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i3_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i4: {
    extern void op_movl_T0_i4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i4: {
    extern void op_movl_T1_i4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i4: {
    extern void op_movl_T2_i4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i4_T0: {
    extern void op_movl_i4_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i4_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i4_T1: {
    extern void op_movl_i4_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i4_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i5: {
    extern void op_movl_T0_i5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i5: {
    extern void op_movl_T1_i5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i5: {
    extern void op_movl_T2_i5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i5_T0: {
    extern void op_movl_i5_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i5_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i5_T1: {
    extern void op_movl_i5_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i5_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i6: {
    extern void op_movl_T0_i6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i6: {
    extern void op_movl_T1_i6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i6: {
    extern void op_movl_T2_i6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i6_T0: {
    extern void op_movl_i6_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i6_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i6_T1: {
    extern void op_movl_i6_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i6_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_i7: {
    extern void op_movl_T0_i7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_i7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_i7: {
    extern void op_movl_T1_i7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_i7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_i7: {
    extern void op_movl_T2_i7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_i7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i7_T0: {
    extern void op_movl_i7_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i7_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_i7_T1: {
    extern void op_movl_i7_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_i7_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l0: {
    extern void op_movl_T0_l0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l0: {
    extern void op_movl_T1_l0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l0: {
    extern void op_movl_T2_l0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l0_T0: {
    extern void op_movl_l0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l0_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l0_T1: {
    extern void op_movl_l0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l0_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l1: {
    extern void op_movl_T0_l1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l1: {
    extern void op_movl_T1_l1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l1: {
    extern void op_movl_T2_l1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l1_T0: {
    extern void op_movl_l1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l1_T1: {
    extern void op_movl_l1_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l1_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l2: {
    extern void op_movl_T0_l2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l2: {
    extern void op_movl_T1_l2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l2: {
    extern void op_movl_T2_l2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l2_T0: {
    extern void op_movl_l2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l2_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l2_T1: {
    extern void op_movl_l2_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l2_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l3: {
    extern void op_movl_T0_l3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l3: {
    extern void op_movl_T1_l3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l3: {
    extern void op_movl_T2_l3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l3_T0: {
    extern void op_movl_l3_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l3_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l3_T1: {
    extern void op_movl_l3_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l3_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l4: {
    extern void op_movl_T0_l4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l4: {
    extern void op_movl_T1_l4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l4: {
    extern void op_movl_T2_l4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l4_T0: {
    extern void op_movl_l4_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l4_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l4_T1: {
    extern void op_movl_l4_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l4_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l5: {
    extern void op_movl_T0_l5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l5: {
    extern void op_movl_T1_l5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l5: {
    extern void op_movl_T2_l5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l5_T0: {
    extern void op_movl_l5_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l5_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l5_T1: {
    extern void op_movl_l5_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l5_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l6: {
    extern void op_movl_T0_l6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l6: {
    extern void op_movl_T1_l6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l6: {
    extern void op_movl_T2_l6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l6_T0: {
    extern void op_movl_l6_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l6_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l6_T1: {
    extern void op_movl_l6_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l6_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_l7: {
    extern void op_movl_T0_l7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_l7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_l7: {
    extern void op_movl_T1_l7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_l7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_l7: {
    extern void op_movl_T2_l7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_l7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l7_T0: {
    extern void op_movl_l7_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l7_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_l7_T1: {
    extern void op_movl_l7_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_l7_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o0: {
    extern void op_movl_T0_o0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o0+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T1_o0: {
    extern void op_movl_T1_o0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o0+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T2_o0: {
    extern void op_movl_T2_o0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o0+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_o0_T0: {
    extern void op_movl_o0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o0_T0+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_o0_T1: {
    extern void op_movl_o0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o0_T1+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T0_o1: {
    extern void op_movl_T0_o1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o1: {
    extern void op_movl_T1_o1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o1: {
    extern void op_movl_T2_o1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o1_T0: {
    extern void op_movl_o1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o1_T1: {
    extern void op_movl_o1_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o1_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o2: {
    extern void op_movl_T0_o2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o2: {
    extern void op_movl_T1_o2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o2: {
    extern void op_movl_T2_o2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o2+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o2_T0: {
    extern void op_movl_o2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o2_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o2_T1: {
    extern void op_movl_o2_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o2_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o3: {
    extern void op_movl_T0_o3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o3: {
    extern void op_movl_T1_o3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o3: {
    extern void op_movl_T2_o3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o3+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o3_T0: {
    extern void op_movl_o3_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o3_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o3_T1: {
    extern void op_movl_o3_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o3_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o4: {
    extern void op_movl_T0_o4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o4: {
    extern void op_movl_T1_o4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o4: {
    extern void op_movl_T2_o4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o4+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o4_T0: {
    extern void op_movl_o4_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o4_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o4_T1: {
    extern void op_movl_o4_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o4_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o5: {
    extern void op_movl_T0_o5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o5: {
    extern void op_movl_T1_o5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o5: {
    extern void op_movl_T2_o5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o5+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o5_T0: {
    extern void op_movl_o5_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o5_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o5_T1: {
    extern void op_movl_o5_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o5_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o6: {
    extern void op_movl_T0_o6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o6: {
    extern void op_movl_T1_o6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o6: {
    extern void op_movl_T2_o6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o6+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o6_T0: {
    extern void op_movl_o6_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o6_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o6_T1: {
    extern void op_movl_o6_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o6_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T0_o7: {
    extern void op_movl_T0_o7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_o7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T1_o7: {
    extern void op_movl_T1_o7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_o7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_T2_o7: {
    extern void op_movl_T2_o7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_o7+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o7_T0: {
    extern void op_movl_o7_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o7_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_o7_T1: {
    extern void op_movl_o7_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_o7_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpr_FT0_fprf0: {
    extern void op_load_fpr_FT0_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf0: {
    extern void op_store_FT0_fpr_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf0: {
    extern void op_load_fpr_FT1_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf0: {
    extern void op_store_FT1_fpr_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf0: {
    extern void op_load_fpr_DT0_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf0: {
    extern void op_store_DT0_fpr_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf0: {
    extern void op_load_fpr_DT1_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf0: {
    extern void op_store_DT1_fpr_fprf0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf0+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf1: {
    extern void op_load_fpr_FT0_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf1+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf1: {
    extern void op_store_FT0_fpr_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf1+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf1: {
    extern void op_load_fpr_FT1_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf1+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf1: {
    extern void op_store_FT1_fpr_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf1+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf1: {
    extern void op_load_fpr_DT0_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf1: {
    extern void op_store_DT0_fpr_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf1: {
    extern void op_load_fpr_DT1_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf1: {
    extern void op_store_DT1_fpr_fprf1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf1+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf2: {
    extern void op_load_fpr_FT0_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf2+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf2: {
    extern void op_store_FT0_fpr_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf2+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf2: {
    extern void op_load_fpr_FT1_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf2+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf2: {
    extern void op_store_FT1_fpr_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf2+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf2: {
    extern void op_load_fpr_DT0_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf2+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf2: {
    extern void op_store_DT0_fpr_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf2+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf2: {
    extern void op_load_fpr_DT1_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf2+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf2: {
    extern void op_store_DT1_fpr_fprf2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf2+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf3: {
    extern void op_load_fpr_FT0_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf3+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf3: {
    extern void op_store_FT0_fpr_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf3+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf3: {
    extern void op_load_fpr_FT1_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf3+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf3: {
    extern void op_store_FT1_fpr_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf3+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf3: {
    extern void op_load_fpr_DT0_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf3+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf3: {
    extern void op_store_DT0_fpr_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf3+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf3: {
    extern void op_load_fpr_DT1_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf3+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf3: {
    extern void op_store_DT1_fpr_fprf3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf3+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf4: {
    extern void op_load_fpr_FT0_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf4+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf4: {
    extern void op_store_FT0_fpr_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf4+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf4: {
    extern void op_load_fpr_FT1_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf4+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf4: {
    extern void op_store_FT1_fpr_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf4+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf4: {
    extern void op_load_fpr_DT0_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf4+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf4: {
    extern void op_store_DT0_fpr_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf4+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf4: {
    extern void op_load_fpr_DT1_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf4+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf4: {
    extern void op_store_DT1_fpr_fprf4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf4+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf5: {
    extern void op_load_fpr_FT0_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf5+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf5: {
    extern void op_store_FT0_fpr_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf5+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf5: {
    extern void op_load_fpr_FT1_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf5+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf5: {
    extern void op_store_FT1_fpr_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf5+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf5: {
    extern void op_load_fpr_DT0_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf5+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf5: {
    extern void op_store_DT0_fpr_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf5+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf5: {
    extern void op_load_fpr_DT1_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf5+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf5: {
    extern void op_store_DT1_fpr_fprf5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf5+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf6: {
    extern void op_load_fpr_FT0_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf6+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf6: {
    extern void op_store_FT0_fpr_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf6+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf6: {
    extern void op_load_fpr_FT1_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf6+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf6: {
    extern void op_store_FT1_fpr_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf6+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf6: {
    extern void op_load_fpr_DT0_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf6+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf6: {
    extern void op_store_DT0_fpr_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf6+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf6: {
    extern void op_load_fpr_DT1_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf6+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf6: {
    extern void op_store_DT1_fpr_fprf6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf6+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf7: {
    extern void op_load_fpr_FT0_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf7+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf7: {
    extern void op_store_FT0_fpr_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf7+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf7: {
    extern void op_load_fpr_FT1_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf7+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf7: {
    extern void op_store_FT1_fpr_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf7+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf7: {
    extern void op_load_fpr_DT0_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf7+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf7: {
    extern void op_store_DT0_fpr_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf7+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf7: {
    extern void op_load_fpr_DT1_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf7+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf7: {
    extern void op_store_DT1_fpr_fprf7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf7+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf8: {
    extern void op_load_fpr_FT0_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf8+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf8: {
    extern void op_store_FT0_fpr_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf8+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf8: {
    extern void op_load_fpr_FT1_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf8+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf8: {
    extern void op_store_FT1_fpr_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf8+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf8: {
    extern void op_load_fpr_DT0_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf8+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf8: {
    extern void op_store_DT0_fpr_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf8+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf8: {
    extern void op_load_fpr_DT1_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf8+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf8: {
    extern void op_store_DT1_fpr_fprf8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf8+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf9: {
    extern void op_load_fpr_FT0_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf9+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf9: {
    extern void op_store_FT0_fpr_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf9+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf9: {
    extern void op_load_fpr_FT1_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf9+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf9: {
    extern void op_store_FT1_fpr_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf9+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf9: {
    extern void op_load_fpr_DT0_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf9+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf9: {
    extern void op_store_DT0_fpr_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf9+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf9: {
    extern void op_load_fpr_DT1_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf9+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf9: {
    extern void op_store_DT1_fpr_fprf9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf9+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf10: {
    extern void op_load_fpr_FT0_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf10+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf10: {
    extern void op_store_FT0_fpr_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf10+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf10: {
    extern void op_load_fpr_FT1_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf10+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf10: {
    extern void op_store_FT1_fpr_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf10+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf10: {
    extern void op_load_fpr_DT0_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf10+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf10: {
    extern void op_store_DT0_fpr_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf10+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf10: {
    extern void op_load_fpr_DT1_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf10+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf10: {
    extern void op_store_DT1_fpr_fprf10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf10+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf11: {
    extern void op_load_fpr_FT0_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf11+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf11: {
    extern void op_store_FT0_fpr_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf11+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf11: {
    extern void op_load_fpr_FT1_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf11+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf11: {
    extern void op_store_FT1_fpr_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf11+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf11: {
    extern void op_load_fpr_DT0_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf11+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf11: {
    extern void op_store_DT0_fpr_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf11+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf11: {
    extern void op_load_fpr_DT1_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf11+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf11: {
    extern void op_store_DT1_fpr_fprf11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf11+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf12: {
    extern void op_load_fpr_FT0_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf12+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf12: {
    extern void op_store_FT0_fpr_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf12+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf12: {
    extern void op_load_fpr_FT1_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf12+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf12: {
    extern void op_store_FT1_fpr_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf12+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf12: {
    extern void op_load_fpr_DT0_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf12+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf12: {
    extern void op_store_DT0_fpr_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf12+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf12: {
    extern void op_load_fpr_DT1_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf12+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf12: {
    extern void op_store_DT1_fpr_fprf12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf12+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf13: {
    extern void op_load_fpr_FT0_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf13+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf13: {
    extern void op_store_FT0_fpr_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf13+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf13: {
    extern void op_load_fpr_FT1_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf13+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf13: {
    extern void op_store_FT1_fpr_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf13+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf13: {
    extern void op_load_fpr_DT0_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf13+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf13: {
    extern void op_store_DT0_fpr_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf13+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf13: {
    extern void op_load_fpr_DT1_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf13+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf13: {
    extern void op_store_DT1_fpr_fprf13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf13+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf14: {
    extern void op_load_fpr_FT0_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf14+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf14: {
    extern void op_store_FT0_fpr_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf14+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf14: {
    extern void op_load_fpr_FT1_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf14+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf14: {
    extern void op_store_FT1_fpr_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf14+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf14: {
    extern void op_load_fpr_DT0_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf14+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf14: {
    extern void op_store_DT0_fpr_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf14+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf14: {
    extern void op_load_fpr_DT1_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf14+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf14: {
    extern void op_store_DT1_fpr_fprf14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf14+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf15: {
    extern void op_load_fpr_FT0_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf15+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf15: {
    extern void op_store_FT0_fpr_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf15+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf15: {
    extern void op_load_fpr_FT1_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf15+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf15: {
    extern void op_store_FT1_fpr_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf15+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf15: {
    extern void op_load_fpr_DT0_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf15+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf15: {
    extern void op_store_DT0_fpr_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf15+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf15: {
    extern void op_load_fpr_DT1_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf15+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf15: {
    extern void op_store_DT1_fpr_fprf15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf15+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf16: {
    extern void op_load_fpr_FT0_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf16+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf16: {
    extern void op_store_FT0_fpr_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf16+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf16: {
    extern void op_load_fpr_FT1_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf16+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf16: {
    extern void op_store_FT1_fpr_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf16+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf16: {
    extern void op_load_fpr_DT0_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf16+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf16: {
    extern void op_store_DT0_fpr_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf16+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf16: {
    extern void op_load_fpr_DT1_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf16+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf16: {
    extern void op_store_DT1_fpr_fprf16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf16+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf17: {
    extern void op_load_fpr_FT0_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf17+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf17: {
    extern void op_store_FT0_fpr_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf17+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf17: {
    extern void op_load_fpr_FT1_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf17+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf17: {
    extern void op_store_FT1_fpr_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf17+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf17: {
    extern void op_load_fpr_DT0_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf17+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf17: {
    extern void op_store_DT0_fpr_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf17+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf17: {
    extern void op_load_fpr_DT1_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf17+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf17: {
    extern void op_store_DT1_fpr_fprf17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf17+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf18: {
    extern void op_load_fpr_FT0_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf18+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf18: {
    extern void op_store_FT0_fpr_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf18+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf18: {
    extern void op_load_fpr_FT1_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf18+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf18: {
    extern void op_store_FT1_fpr_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf18+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf18: {
    extern void op_load_fpr_DT0_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf18+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf18: {
    extern void op_store_DT0_fpr_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf18+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf18: {
    extern void op_load_fpr_DT1_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf18+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf18: {
    extern void op_store_DT1_fpr_fprf18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf18+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf19: {
    extern void op_load_fpr_FT0_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf19+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf19: {
    extern void op_store_FT0_fpr_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf19+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf19: {
    extern void op_load_fpr_FT1_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf19+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf19: {
    extern void op_store_FT1_fpr_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf19+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf19: {
    extern void op_load_fpr_DT0_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf19+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf19: {
    extern void op_store_DT0_fpr_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf19+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf19: {
    extern void op_load_fpr_DT1_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf19+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf19: {
    extern void op_store_DT1_fpr_fprf19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf19+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf20: {
    extern void op_load_fpr_FT0_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf20+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf20: {
    extern void op_store_FT0_fpr_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf20+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf20: {
    extern void op_load_fpr_FT1_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf20+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf20: {
    extern void op_store_FT1_fpr_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf20+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf20: {
    extern void op_load_fpr_DT0_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf20+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf20: {
    extern void op_store_DT0_fpr_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf20+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf20: {
    extern void op_load_fpr_DT1_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf20+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf20: {
    extern void op_store_DT1_fpr_fprf20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf20+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf21: {
    extern void op_load_fpr_FT0_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf21+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf21: {
    extern void op_store_FT0_fpr_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf21+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf21: {
    extern void op_load_fpr_FT1_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf21+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf21: {
    extern void op_store_FT1_fpr_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf21+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf21: {
    extern void op_load_fpr_DT0_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf21+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf21: {
    extern void op_store_DT0_fpr_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf21+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf21: {
    extern void op_load_fpr_DT1_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf21+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf21: {
    extern void op_store_DT1_fpr_fprf21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf21+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf22: {
    extern void op_load_fpr_FT0_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf22+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT0_fpr_fprf22: {
    extern void op_store_FT0_fpr_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf22+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_FT1_fprf22: {
    extern void op_load_fpr_FT1_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf22+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_store_FT1_fpr_fprf22: {
    extern void op_store_FT1_fpr_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf22+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_load_fpr_DT0_fprf22: {
    extern void op_load_fpr_DT0_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf22+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT0_fpr_fprf22: {
    extern void op_store_DT0_fpr_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf22+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_DT1_fprf22: {
    extern void op_load_fpr_DT1_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf22+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_store_DT1_fpr_fprf22: {
    extern void op_store_DT1_fpr_fprf22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf22+0), 20);
    gen_code_ptr += 20;
}
break;

case INDEX_op_load_fpr_FT0_fprf23: {
    extern void op_load_fpr_FT0_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf23: {
    extern void op_store_FT0_fpr_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf23: {
    extern void op_load_fpr_FT1_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf23: {
    extern void op_store_FT1_fpr_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf23+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf23: {
    extern void op_load_fpr_DT0_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf23+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf23: {
    extern void op_store_DT0_fpr_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf23+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf23: {
    extern void op_load_fpr_DT1_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf23+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf23: {
    extern void op_store_DT1_fpr_fprf23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf23+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf24: {
    extern void op_load_fpr_FT0_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf24: {
    extern void op_store_FT0_fpr_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf24: {
    extern void op_load_fpr_FT1_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf24: {
    extern void op_store_FT1_fpr_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf24+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf24: {
    extern void op_load_fpr_DT0_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf24+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf24: {
    extern void op_store_DT0_fpr_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf24+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf24: {
    extern void op_load_fpr_DT1_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf24+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf24: {
    extern void op_store_DT1_fpr_fprf24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf24+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf25: {
    extern void op_load_fpr_FT0_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf25: {
    extern void op_store_FT0_fpr_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf25: {
    extern void op_load_fpr_FT1_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf25: {
    extern void op_store_FT1_fpr_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf25+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf25: {
    extern void op_load_fpr_DT0_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf25+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf25: {
    extern void op_store_DT0_fpr_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf25+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf25: {
    extern void op_load_fpr_DT1_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf25+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf25: {
    extern void op_store_DT1_fpr_fprf25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf25+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf26: {
    extern void op_load_fpr_FT0_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf26: {
    extern void op_store_FT0_fpr_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf26: {
    extern void op_load_fpr_FT1_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf26: {
    extern void op_store_FT1_fpr_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf26+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf26: {
    extern void op_load_fpr_DT0_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf26+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf26: {
    extern void op_store_DT0_fpr_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf26+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf26: {
    extern void op_load_fpr_DT1_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf26+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf26: {
    extern void op_store_DT1_fpr_fprf26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf26+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf27: {
    extern void op_load_fpr_FT0_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf27: {
    extern void op_store_FT0_fpr_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf27: {
    extern void op_load_fpr_FT1_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf27: {
    extern void op_store_FT1_fpr_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf27+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf27: {
    extern void op_load_fpr_DT0_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf27+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf27: {
    extern void op_store_DT0_fpr_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf27+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf27: {
    extern void op_load_fpr_DT1_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf27+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf27: {
    extern void op_store_DT1_fpr_fprf27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf27+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf28: {
    extern void op_load_fpr_FT0_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf28: {
    extern void op_store_FT0_fpr_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf28: {
    extern void op_load_fpr_FT1_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf28: {
    extern void op_store_FT1_fpr_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf28+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf28: {
    extern void op_load_fpr_DT0_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf28+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf28: {
    extern void op_store_DT0_fpr_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf28+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf28: {
    extern void op_load_fpr_DT1_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf28+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf28: {
    extern void op_store_DT1_fpr_fprf28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf28+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf29: {
    extern void op_load_fpr_FT0_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf29: {
    extern void op_store_FT0_fpr_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf29: {
    extern void op_load_fpr_FT1_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf29: {
    extern void op_store_FT1_fpr_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf29+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf29: {
    extern void op_load_fpr_DT0_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf29+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf29: {
    extern void op_store_DT0_fpr_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf29+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf29: {
    extern void op_load_fpr_DT1_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf29+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf29: {
    extern void op_store_DT1_fpr_fprf29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf29+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf30: {
    extern void op_load_fpr_FT0_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf30: {
    extern void op_store_FT0_fpr_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf30: {
    extern void op_load_fpr_FT1_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf30: {
    extern void op_store_FT1_fpr_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf30+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf30: {
    extern void op_load_fpr_DT0_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf30+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf30: {
    extern void op_store_DT0_fpr_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf30+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf30: {
    extern void op_load_fpr_DT1_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf30+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf30: {
    extern void op_store_DT1_fpr_fprf30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf30+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_FT0_fprf31: {
    extern void op_load_fpr_FT0_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT0_fprf31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT0_fpr_fprf31: {
    extern void op_store_FT0_fpr_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fpr_fprf31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_FT1_fprf31: {
    extern void op_load_fpr_FT1_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_FT1_fprf31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_store_FT1_fpr_fprf31: {
    extern void op_store_FT1_fpr_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fpr_fprf31+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_load_fpr_DT0_fprf31: {
    extern void op_load_fpr_DT0_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT0_fprf31+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT0_fpr_fprf31: {
    extern void op_store_DT0_fpr_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT0_fpr_fprf31+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_load_fpr_DT1_fprf31: {
    extern void op_load_fpr_DT1_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpr_DT1_fprf31+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_store_DT1_fpr_fprf31: {
    extern void op_store_DT1_fpr_fprf31();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_DT1_fpr_fprf31+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_movl_T0_0: {
    extern void op_movl_T0_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_movl_T0_im: {
    long param1;
    extern void op_movl_T0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_im+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T1_im: {
    long param1;
    extern void op_movl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_im+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T2_im: {
    long param1;
    extern void op_movl_T2_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_im+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T0_sim: {
    long param1;
    extern void op_movl_T0_sim();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_sim+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T1_sim: {
    long param1;
    extern void op_movl_T1_sim();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_sim+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T2_sim: {
    long param1;
    extern void op_movl_T2_sim();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_sim+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_T0_env: {
    long param1;
    extern void op_movl_T0_env();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_env+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_movl_env_T0: {
    long param1;
    extern void op_movl_env_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_env_T0+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_movtl_T0_env: {
    long param1;
    extern void op_movtl_T0_env();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_T0_env+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_movtl_env_T0: {
    long param1;
    extern void op_movtl_env_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movtl_env_T0+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_add_T1_T0: {
    extern void op_add_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_add_T1_T0_cc: {
    extern void op_add_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_add_T1_T0_cc+0), 95);
    gen_code_ptr += 95;
}
break;

case INDEX_op_addx_T1_T0: {
    extern void op_addx_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_addx_T1_T0+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_addx_T1_T0_cc: {
    extern void op_addx_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_addx_T1_T0_cc+0), 141);
    gen_code_ptr += 141;
}
break;

case INDEX_op_tadd_T1_T0_cc: {
    extern void op_tadd_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_tadd_T1_T0_cc+0), 118);
    gen_code_ptr += 118;
}
break;

case INDEX_op_tadd_T1_T0_ccTV: {
    extern void op_tadd_T1_T0_ccTV();
extern char raise_exception;
extern char raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_tadd_T1_T0_ccTV+0), 123);
    *(uint32_t *)(gen_code_ptr + 24) = (long)(&raise_exception) - (long)(gen_code_ptr + 24) + -4;
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&raise_exception) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 123;
}
break;

case INDEX_op_sub_T1_T0: {
    extern void op_sub_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sub_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_sub_T1_T0_cc: {
    extern void op_sub_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sub_T1_T0_cc+0), 89);
    gen_code_ptr += 89;
}
break;

case INDEX_op_subx_T1_T0: {
    extern void op_subx_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_subx_T1_T0+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_subx_T1_T0_cc: {
    extern void op_subx_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_subx_T1_T0_cc+0), 142);
    gen_code_ptr += 142;
}
break;

case INDEX_op_tsub_T1_T0_cc: {
    extern void op_tsub_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_tsub_T1_T0_cc+0), 118);
    gen_code_ptr += 118;
}
break;

case INDEX_op_tsub_T1_T0_ccTV: {
    extern void op_tsub_T1_T0_ccTV();
extern char raise_exception;
extern char raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_tsub_T1_T0_ccTV+0), 139);
    *(uint32_t *)(gen_code_ptr + 24) = (long)(&raise_exception) - (long)(gen_code_ptr + 24) + -4;
    *(uint32_t *)(gen_code_ptr + 58) = (long)(&raise_exception) - (long)(gen_code_ptr + 58) + -4;
    gen_code_ptr += 139;
}
break;

case INDEX_op_and_T1_T0: {
    extern void op_and_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_and_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_or_T1_T0: {
    extern void op_or_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_or_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_xor_T1_T0: {
    extern void op_xor_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_xor_T1_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_andn_T1_T0: {
    extern void op_andn_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_andn_T1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_orn_T1_T0: {
    extern void op_orn_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_orn_T1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_xnor_T1_T0: {
    extern void op_xnor_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_xnor_T1_T0+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_umul_T1_T0: {
    extern void op_umul_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_umul_T1_T0+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_smul_T1_T0: {
    extern void op_smul_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_smul_T1_T0+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_mulscc_T1_T0: {
    extern void op_mulscc_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulscc_T1_T0+0), 155);
    gen_code_ptr += 155;
}
break;

case INDEX_op_udiv_T1_T0: {
    extern void op_udiv_T1_T0();
extern char raise_exception;
extern char __udivdi3;
    memcpy(gen_code_ptr, (void *)((char *)&op_udiv_T1_T0+0), 140);
    *(uint32_t *)(gen_code_ptr + 59) = (long)(&raise_exception) - (long)(gen_code_ptr + 59) + -4;
    *(uint32_t *)(gen_code_ptr + 106) = (long)(&__udivdi3) - (long)(gen_code_ptr + 106) + -4;
    gen_code_ptr += 140;
}
break;

case INDEX_op_sdiv_T1_T0: {
    extern void op_sdiv_T1_T0();
extern char raise_exception;
extern char __divdi3;
    memcpy(gen_code_ptr, (void *)((char *)&op_sdiv_T1_T0+0), 154);
    *(uint32_t *)(gen_code_ptr + 59) = (long)(&raise_exception) - (long)(gen_code_ptr + 59) + -4;
    *(uint32_t *)(gen_code_ptr + 92) = (long)(&__divdi3) - (long)(gen_code_ptr + 92) + -4;
    gen_code_ptr += 154;
}
break;

case INDEX_op_div_cc: {
    extern void op_div_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_div_cc+0), 50);
    gen_code_ptr += 50;
}
break;

case INDEX_op_logic_T0_cc: {
    extern void op_logic_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_logic_T0_cc+0), 49);
    gen_code_ptr += 49;
}
break;

case INDEX_op_sll: {
    extern void op_sll();
    memcpy(gen_code_ptr, (void *)((char *)&op_sll+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_srl: {
    extern void op_srl();
    memcpy(gen_code_ptr, (void *)((char *)&op_srl+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_sra: {
    extern void op_sra();
    memcpy(gen_code_ptr, (void *)((char *)&op_sra+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_ld_raw: {
    extern void op_ld_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ld_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_ldub_raw: {
    extern void op_ldub_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldub_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_lduh_raw: {
    extern void op_lduh_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lduh_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_ldsb_raw: {
    extern void op_ldsb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsb_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_ldsh_raw: {
    extern void op_ldsh_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsh_raw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_st_raw: {
    extern void op_st_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_st_raw+0), 6);
    gen_code_ptr += 6;
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

case INDEX_op_std_raw: {
    extern void op_std_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_std_raw+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_ldstub_raw: {
    extern void op_ldstub_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldstub_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_swap_raw: {
    extern void op_swap_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_swap_raw+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_ldd_raw: {
    extern void op_ldd_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldd_raw+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_stf_raw: {
    extern void op_stf_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stf_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_stdf_raw: {
    extern void op_stdf_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stdf_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_ldf_raw: {
    extern void op_ldf_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldf_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_lddf_raw: {
    extern void op_lddf_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lddf_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_ldfsr: {
    extern void op_ldfsr();
extern char helper_ldfsr;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldfsr+0), 36);
    *(uint32_t *)(gen_code_ptr + 32) = (long)(&helper_ldfsr) - (long)(gen_code_ptr + 32) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_stfsr: {
    extern void op_stfsr();
    memcpy(gen_code_ptr, (void *)((char *)&op_stfsr+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_rdpsr: {
    extern void op_rdpsr();
extern char do_rdpsr;
    memcpy(gen_code_ptr, (void *)((char *)&op_rdpsr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_rdpsr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_wrpsr: {
    extern void op_wrpsr();
extern char do_wrpsr;
    memcpy(gen_code_ptr, (void *)((char *)&op_wrpsr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_wrpsr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_wrwim: {
    extern void op_wrwim();
    memcpy(gen_code_ptr, (void *)((char *)&op_wrwim+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_rett: {
    extern void op_rett();
extern char helper_rett;
    memcpy(gen_code_ptr, (void *)((char *)&op_rett+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_rett) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_save: {
    extern void op_save();
extern char raise_exception;
extern char set_cwp;
    memcpy(gen_code_ptr, (void *)((char *)&op_save+0), 72);
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&raise_exception) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&set_cwp) - (long)(gen_code_ptr + 65) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_restore: {
    extern void op_restore();
extern char raise_exception;
extern char set_cwp;
    memcpy(gen_code_ptr, (void *)((char *)&op_restore+0), 79);
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&raise_exception) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 72) = (long)(&set_cwp) - (long)(gen_code_ptr + 72) + -4;
    gen_code_ptr += 79;
}
break;

case INDEX_op_exception: {
    long param1;
    extern void op_exception();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_exception+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_trap_T0: {
    extern void op_trap_T0();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_trap_T0+0), 19);
    *(uint32_t *)(gen_code_ptr + 15) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 19;
}
break;

case INDEX_op_trapcc_T0: {
    extern void op_trapcc_T0();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_trapcc_T0+0), 27);
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 19) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_fpexception_im: {
    long param1;
    extern void op_fpexception_im();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_fpexception_im+0), 36);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 27) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 32) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_debug: {
    extern void op_debug();
extern char helper_debug;
    memcpy(gen_code_ptr, (void *)((char *)&op_debug+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_debug) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_eval_ba: {
    extern void op_eval_ba();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_ba+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_eval_be: {
    extern void op_eval_be();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_be+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_ble: {
    extern void op_eval_ble();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_ble+0), 36);
    gen_code_ptr += 36;
}
break;

case INDEX_op_eval_bl: {
    extern void op_eval_bl();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bl+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_eval_bleu: {
    extern void op_eval_bleu();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bleu+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_eval_bcs: {
    extern void op_eval_bcs();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bcs+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_bvs: {
    extern void op_eval_bvs();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bvs+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_bn: {
    extern void op_eval_bn();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bn+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_eval_bneg: {
    extern void op_eval_bneg();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bneg+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_bne: {
    extern void op_eval_bne();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bne+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_bg: {
    extern void op_eval_bg();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bg+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_eval_bge: {
    extern void op_eval_bge();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bge+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_eval_bgu: {
    extern void op_eval_bgu();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bgu+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_eval_bcc: {
    extern void op_eval_bcc();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bcc+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_bpos: {
    extern void op_eval_bpos();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bpos+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_bvc: {
    extern void op_eval_bvc();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_bvc+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_fbne: {
    extern void op_eval_fbne();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbne+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_eval_fblg: {
    extern void op_eval_fblg();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fblg+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_eval_fbul: {
    extern void op_eval_fbul();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbul+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_fbl: {
    extern void op_eval_fbl();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_eval_fbug: {
    extern void op_eval_fbug();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbug+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_eval_fbg: {
    extern void op_eval_fbg();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbg+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_eval_fbu: {
    extern void op_eval_fbu();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbu+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_eval_fbe: {
    extern void op_eval_fbe();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbe+0), 31);
    gen_code_ptr += 31;
}
break;

case INDEX_op_eval_fbue: {
    extern void op_eval_fbue();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbue+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_eval_fbge: {
    extern void op_eval_fbge();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbge+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_fbuge: {
    extern void op_eval_fbuge();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbuge+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_eval_fble: {
    extern void op_eval_fble();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fble+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_eval_fbule: {
    extern void op_eval_fbule();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbule+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_eval_fbo: {
    extern void op_eval_fbo();
    memcpy(gen_code_ptr, (void *)((char *)&op_eval_fbo+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_jmp_im: {
    long param1;
    extern void op_jmp_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_im+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_movl_npc_im: {
    long param1;
    extern void op_movl_npc_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_npc_im+0), 11);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 11;
}
break;

case INDEX_op_movl_npc_T0: {
    extern void op_movl_npc_T0();
extern char raise_exception;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_npc_T0+0), 29);
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&raise_exception) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 29;
}
break;

case INDEX_op_mov_pc_npc: {
    extern void op_mov_pc_npc();
    memcpy(gen_code_ptr, (void *)((char *)&op_mov_pc_npc+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_next_insn: {
    extern void op_next_insn();
    memcpy(gen_code_ptr, (void *)((char *)&op_next_insn+0), 19);
    gen_code_ptr += 19;
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

case INDEX_op_jmp_label: {
    long param1;
    extern void op_jmp_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_label+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = gen_labels[param1] - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_jnz_T2_label: {
    long param1;
    extern void op_jnz_T2_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jnz_T2_label+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = gen_labels[param1] - (long)(gen_code_ptr + 5) + -4;
    gen_code_ptr += 9;
}
break;

case INDEX_op_jz_T2_label: {
    long param1;
    extern void op_jz_T2_label();
    memcpy(gen_code_ptr, (void *)((char *)&op_jz_T2_label+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 5) = gen_labels[param1] - (long)(gen_code_ptr + 5) + -4;
    gen_code_ptr += 9;
}
break;

case INDEX_op_flush_T0: {
    extern void op_flush_T0();
extern char helper_flush;
    memcpy(gen_code_ptr, (void *)((char *)&op_flush_T0+0), 12);
    *(uint32_t *)(gen_code_ptr + 7) = (long)(&helper_flush) - (long)(gen_code_ptr + 7) + -4;
    gen_code_ptr += 12;
}
break;

case INDEX_op_clear_ieee_excp_and_FTT: {
    extern void op_clear_ieee_excp_and_FTT();
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_ieee_excp_and_FTT+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_fadds: {
    extern void op_fadds();
extern char set_float_exception_flags;
extern char float32_add;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fadds+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float32_add) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_faddd: {
    extern void op_faddd();
extern char set_float_exception_flags;
extern char float64_add;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_faddd+0), 99);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 75) = (long)(&float64_add) - (long)(gen_code_ptr + 75) + -4;
    *(uint32_t *)(gen_code_ptr + 92) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 92) + -4;
    gen_code_ptr += 99;
}
break;

case INDEX_op_fsubs: {
    extern void op_fsubs();
extern char set_float_exception_flags;
extern char float32_sub;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsubs+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float32_sub) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_fsubd: {
    extern void op_fsubd();
extern char set_float_exception_flags;
extern char float64_sub;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsubd+0), 99);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 75) = (long)(&float64_sub) - (long)(gen_code_ptr + 75) + -4;
    *(uint32_t *)(gen_code_ptr + 92) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 92) + -4;
    gen_code_ptr += 99;
}
break;

case INDEX_op_fmuls: {
    extern void op_fmuls();
extern char set_float_exception_flags;
extern char float32_mul;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fmuls+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float32_mul) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_fmuld: {
    extern void op_fmuld();
extern char set_float_exception_flags;
extern char float64_mul;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fmuld+0), 99);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 75) = (long)(&float64_mul) - (long)(gen_code_ptr + 75) + -4;
    *(uint32_t *)(gen_code_ptr + 92) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 92) + -4;
    gen_code_ptr += 99;
}
break;

case INDEX_op_fdivs: {
    extern void op_fdivs();
extern char set_float_exception_flags;
extern char float32_div;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdivs+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float32_div) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_fdivd: {
    extern void op_fdivd();
extern char set_float_exception_flags;
extern char float64_div;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdivd+0), 99);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 75) = (long)(&float64_div) - (long)(gen_code_ptr + 75) + -4;
    *(uint32_t *)(gen_code_ptr + 92) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 92) + -4;
    gen_code_ptr += 99;
}
break;

case INDEX_op_fsmuld: {
    extern void op_fsmuld();
extern char set_float_exception_flags;
extern char float32_to_float64;
extern char float32_to_float64;
extern char float64_mul;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsmuld+0), 139);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 77) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 77) + -4;
    *(uint32_t *)(gen_code_ptr + 115) = (long)(&float64_mul) - (long)(gen_code_ptr + 115) + -4;
    *(uint32_t *)(gen_code_ptr + 132) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 132) + -4;
    gen_code_ptr += 139;
}
break;

case INDEX_op_fsqrts: {
    extern void op_fsqrts();
extern char do_fsqrts;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsqrts+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fsqrts) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fsqrtd: {
    extern void op_fsqrtd();
extern char do_fsqrtd;
    memcpy(gen_code_ptr, (void *)((char *)&op_fsqrtd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fsqrtd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fnegs: {
    extern void op_fnegs();
    memcpy(gen_code_ptr, (void *)((char *)&op_fnegs+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_fabss: {
    extern void op_fabss();
extern char do_fabss;
    memcpy(gen_code_ptr, (void *)((char *)&op_fabss+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fabss) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmps: {
    extern void op_fcmps();
extern char do_fcmps;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmps+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmps) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmpd: {
    extern void op_fcmpd();
extern char do_fcmpd;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmpd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmpd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmpes: {
    extern void op_fcmpes();
extern char do_fcmpes;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmpes+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmpes) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fcmped: {
    extern void op_fcmped();
extern char do_fcmped;
    memcpy(gen_code_ptr, (void *)((char *)&op_fcmped+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_fcmped) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_fitos: {
    extern void op_fitos();
extern char set_float_exception_flags;
extern char int32_to_float32;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fitos+0), 63);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&int32_to_float32) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 56) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 56) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_fitod: {
    extern void op_fitod();
extern char set_float_exception_flags;
extern char int32_to_float64;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fitod+0), 69);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&int32_to_float64) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 62) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 62) + -4;
    gen_code_ptr += 69;
}
break;

case INDEX_op_fdtos: {
    extern void op_fdtos();
extern char set_float_exception_flags;
extern char float64_to_float32;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdtos+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float64_to_float32) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_fstod: {
    extern void op_fstod();
extern char set_float_exception_flags;
extern char float32_to_float64;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fstod+0), 69);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 62) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 62) + -4;
    gen_code_ptr += 69;
}
break;

case INDEX_op_fstoi: {
    extern void op_fstoi();
extern char set_float_exception_flags;
extern char float32_to_int32_round_to_zero;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fstoi+0), 63);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&float32_to_int32_round_to_zero) - (long)(gen_code_ptr + 45) + -4;
    *(uint32_t *)(gen_code_ptr + 56) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 56) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_fdtoi: {
    extern void op_fdtoi();
extern char set_float_exception_flags;
extern char float64_to_int32_round_to_zero;
extern char check_ieee_exceptions;
    memcpy(gen_code_ptr, (void *)((char *)&op_fdtoi+0), 73);
    *(uint32_t *)(gen_code_ptr + 21) = (long)(&set_float_exception_flags) - (long)(gen_code_ptr + 21) + -4;
    *(uint32_t *)(gen_code_ptr + 55) = (long)(&float64_to_int32_round_to_zero) - (long)(gen_code_ptr + 55) + -4;
    *(uint32_t *)(gen_code_ptr + 66) = (long)(&check_ieee_exceptions) - (long)(gen_code_ptr + 66) + -4;
    gen_code_ptr += 73;
}
break;

case INDEX_op_ld_asi: {
    long param1, param2, param3;
    extern void op_ld_asi();
extern char helper_ld_asi;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld_asi+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&helper_ld_asi) - (long)(gen_code_ptr + 29) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_st_asi: {
    long param1, param2, param3;
    extern void op_st_asi();
extern char helper_st_asi;
    memcpy(gen_code_ptr, (void *)((char *)&op_st_asi+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 13) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 24) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&helper_st_asi) - (long)(gen_code_ptr + 29) + -4;
    gen_code_ptr += 36;
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

