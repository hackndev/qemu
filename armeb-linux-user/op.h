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
case INDEX_op_movl_T0_r0: {
    extern void op_movl_T0_r0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r0: {
    extern void op_movl_T1_r0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r0: {
    extern void op_movl_T2_r0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r0_T0: {
    extern void op_movl_r0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r0_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r0_T1: {
    extern void op_movl_r0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r0_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r1: {
    extern void op_movl_T0_r1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r1: {
    extern void op_movl_T1_r1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r1: {
    extern void op_movl_T2_r1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r1_T0: {
    extern void op_movl_r1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r1_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r1_T1: {
    extern void op_movl_r1_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r1_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r2: {
    extern void op_movl_T0_r2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r2: {
    extern void op_movl_T1_r2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r2: {
    extern void op_movl_T2_r2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r2+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r2_T0: {
    extern void op_movl_r2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r2_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r2_T1: {
    extern void op_movl_r2_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r2_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r3: {
    extern void op_movl_T0_r3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r3: {
    extern void op_movl_T1_r3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r3: {
    extern void op_movl_T2_r3();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r3+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r3_T0: {
    extern void op_movl_r3_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r3_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r3_T1: {
    extern void op_movl_r3_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r3_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r4: {
    extern void op_movl_T0_r4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r4: {
    extern void op_movl_T1_r4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r4: {
    extern void op_movl_T2_r4();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r4+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r4_T0: {
    extern void op_movl_r4_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r4_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r4_T1: {
    extern void op_movl_r4_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r4_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r5: {
    extern void op_movl_T0_r5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r5: {
    extern void op_movl_T1_r5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r5: {
    extern void op_movl_T2_r5();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r5+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r5_T0: {
    extern void op_movl_r5_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r5_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r5_T1: {
    extern void op_movl_r5_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r5_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r6: {
    extern void op_movl_T0_r6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r6: {
    extern void op_movl_T1_r6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r6: {
    extern void op_movl_T2_r6();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r6+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r6_T0: {
    extern void op_movl_r6_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r6_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r6_T1: {
    extern void op_movl_r6_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r6_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r7: {
    extern void op_movl_T0_r7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r7: {
    extern void op_movl_T1_r7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r7: {
    extern void op_movl_T2_r7();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r7+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r7_T0: {
    extern void op_movl_r7_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r7_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r7_T1: {
    extern void op_movl_r7_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r7_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r8: {
    extern void op_movl_T0_r8();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r8: {
    extern void op_movl_T1_r8();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r8: {
    extern void op_movl_T2_r8();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r8+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r8_T0: {
    extern void op_movl_r8_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r8_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r8_T1: {
    extern void op_movl_r8_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r8_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r9: {
    extern void op_movl_T0_r9();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r9: {
    extern void op_movl_T1_r9();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r9: {
    extern void op_movl_T2_r9();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r9+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r9_T0: {
    extern void op_movl_r9_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r9_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r9_T1: {
    extern void op_movl_r9_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r9_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r10: {
    extern void op_movl_T0_r10();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r10: {
    extern void op_movl_T1_r10();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r10: {
    extern void op_movl_T2_r10();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r10+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r10_T0: {
    extern void op_movl_r10_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r10_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r10_T1: {
    extern void op_movl_r10_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r10_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r11: {
    extern void op_movl_T0_r11();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r11: {
    extern void op_movl_T1_r11();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r11: {
    extern void op_movl_T2_r11();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r11+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r11_T0: {
    extern void op_movl_r11_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r11_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r11_T1: {
    extern void op_movl_r11_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r11_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r12: {
    extern void op_movl_T0_r12();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r12: {
    extern void op_movl_T1_r12();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r12: {
    extern void op_movl_T2_r12();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r12+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r12_T0: {
    extern void op_movl_r12_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r12_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r12_T1: {
    extern void op_movl_r12_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r12_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r13: {
    extern void op_movl_T0_r13();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r13: {
    extern void op_movl_T1_r13();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r13: {
    extern void op_movl_T2_r13();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r13+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r13_T0: {
    extern void op_movl_r13_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r13_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r13_T1: {
    extern void op_movl_r13_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r13_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r14: {
    extern void op_movl_T0_r14();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r14: {
    extern void op_movl_T1_r14();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r14: {
    extern void op_movl_T2_r14();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r14+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r14_T0: {
    extern void op_movl_r14_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r14_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r14_T1: {
    extern void op_movl_r14_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r14_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T0_r15: {
    extern void op_movl_T0_r15();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_r15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T1_r15: {
    extern void op_movl_T1_r15();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T1_r15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_T2_r15: {
    extern void op_movl_T2_r15();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_r15+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_r15_T0: {
    extern void op_movl_r15_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r15_T0+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_movl_r15_T1: {
    extern void op_movl_r15_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_r15_T1+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_bx_T0: {
    extern void op_bx_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_bx_T0+0), 19);
    gen_code_ptr += 19;
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

case INDEX_op_movl_T0_T1: {
    extern void op_movl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_T1+0), 2);
    gen_code_ptr += 2;
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

case INDEX_op_mov_CF_T1: {
    extern void op_mov_CF_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mov_CF_T1+0), 11);
    gen_code_ptr += 11;
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

case INDEX_op_addl_T1_im: {
    long param1;
    extern void op_addl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T1_im+0), 6);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 6;
}
break;

case INDEX_op_addl_T1_T2: {
    extern void op_addl_T1_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T1_T2+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_subl_T1_T2: {
    extern void op_subl_T1_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_T1_T2+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_addl_T0_T1: {
    extern void op_addl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_addl_T0_T1_cc: {
    extern void op_addl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_T1_cc+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_adcl_T0_T1: {
    extern void op_adcl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_adcl_T0_T1+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_adcl_T0_T1_cc: {
    extern void op_adcl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_adcl_T0_T1_cc+0), 68);
    gen_code_ptr += 68;
}
break;

case INDEX_op_subl_T0_T1: {
    extern void op_subl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_T0_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_subl_T0_T1_cc: {
    extern void op_subl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_T0_T1_cc+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_sbcl_T0_T1: {
    extern void op_sbcl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sbcl_T0_T1+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_sbcl_T0_T1_cc: {
    extern void op_sbcl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sbcl_T0_T1_cc+0), 69);
    gen_code_ptr += 69;
}
break;

case INDEX_op_rsbl_T0_T1: {
    extern void op_rsbl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rsbl_T0_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_rsbl_T0_T1_cc: {
    extern void op_rsbl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_rsbl_T0_T1_cc+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_rscl_T0_T1: {
    extern void op_rscl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rscl_T0_T1+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_rscl_T0_T1_cc: {
    extern void op_rscl_T0_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_rscl_T0_T1_cc+0), 71);
    gen_code_ptr += 71;
}
break;

case INDEX_op_andl_T0_T1: {
    extern void op_andl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_andl_T0_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_xorl_T0_T1: {
    extern void op_xorl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_xorl_T0_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_orl_T0_T1: {
    extern void op_orl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_orl_T0_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_bicl_T0_T1: {
    extern void op_bicl_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_bicl_T0_T1+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_notl_T1: {
    extern void op_notl_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_notl_T1+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_logic_T0_cc: {
    extern void op_logic_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_logic_T0_cc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_logic_T1_cc: {
    extern void op_logic_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_logic_T1_cc+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_test_eq: {
    long param1;
    extern void op_test_eq();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_eq+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_ne: {
    long param1;
    extern void op_test_ne();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ne+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_cs: {
    long param1;
    extern void op_test_cs();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_cs+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_cc: {
    long param1;
    extern void op_test_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_cc+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_mi: {
    long param1;
    extern void op_test_mi();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_mi+0), 30);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 30;
}
break;

case INDEX_op_test_pl: {
    long param1;
    extern void op_test_pl();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_pl+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_vs: {
    long param1;
    extern void op_test_vs();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_vs+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_vc: {
    long param1;
    extern void op_test_vc();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_vc+0), 15);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 11) = gen_labels[param1] - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 15;
}
break;

case INDEX_op_test_hi: {
    long param1;
    extern void op_test_hi();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_hi+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 21) = gen_labels[param1] - (long)(gen_code_ptr + 21) + -4;
    gen_code_ptr += 31;
}
break;

case INDEX_op_test_ls: {
    long param1;
    extern void op_test_ls();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ls+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 21) = gen_labels[param1] - (long)(gen_code_ptr + 21) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_test_ge: {
    long param1;
    extern void op_test_ge();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_ge+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 15) = gen_labels[param1] - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 19;
}
break;

case INDEX_op_test_lt: {
    long param1;
    extern void op_test_lt();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_lt+0), 33);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 15) = gen_labels[param1] - (long)(gen_code_ptr + 15) + -4;
    gen_code_ptr += 33;
}
break;

case INDEX_op_test_gt: {
    long param1;
    extern void op_test_gt();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_gt+0), 29);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 25) = gen_labels[param1] - (long)(gen_code_ptr + 25) + -4;
    gen_code_ptr += 29;
}
break;

case INDEX_op_test_le: {
    long param1;
    extern void op_test_le();
    memcpy(gen_code_ptr, (void *)((char *)&op_test_le+0), 38);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 34) = gen_labels[param1] - (long)(gen_code_ptr + 34) + -4;
    gen_code_ptr += 38;
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

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_movl_T0_cpsr: {
    extern void op_movl_T0_cpsr();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_cpsr+0), 78);
    gen_code_ptr += 78;
}
break;

case INDEX_op_movl_T0_spsr: {
    extern void op_movl_T0_spsr();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_spsr+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_movl_spsr_T0: {
    long param1;
    extern void op_movl_spsr_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_spsr_T0+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = param1 + 0;
    gen_code_ptr += 25;
}
break;

case INDEX_op_movl_cpsr_T0: {
    long param1;
    extern void op_movl_cpsr_T0();
extern char switch_mode;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_cpsr_T0+0), 238);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 157) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 180) = (long)(&switch_mode) - (long)(gen_code_ptr + 180) + -4;
    gen_code_ptr += 238;
}
break;

case INDEX_op_mul_T0_T1: {
    extern void op_mul_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mul_T0_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_mull_T0_T1: {
    extern void op_mull_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_mull_T0_T1+0), 22);
    gen_code_ptr += 22;
}
break;

case INDEX_op_imull_T0_T1: {
    extern void op_imull_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_imull_T0_T1+0), 22);
    gen_code_ptr += 22;
}
break;

case INDEX_op_imulw_T0_T1: {
    extern void op_imulw_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_imulw_T0_T1+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_addq_T0_T1: {
    long param1, param2;
    extern void op_addq_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addq_T0_T1+0), 124);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 30) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 61) = param1 + 0;
    gen_code_ptr += 124;
}
break;

case INDEX_op_addq_lo_T0_T1: {
    long param1;
    extern void op_addq_lo_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addq_lo_T0_T1+0), 64);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 37) = param1 + 0;
    gen_code_ptr += 64;
}
break;

case INDEX_op_logicq_cc: {
    extern void op_logicq_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_logicq_cc+0), 26);
    gen_code_ptr += 26;
}
break;

case INDEX_op_ldub_raw: {
    extern void op_ldub_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldub_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_ldsb_raw: {
    extern void op_ldsb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsb_raw+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_lduw_raw: {
    extern void op_lduw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_lduw_raw+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_ldsw_raw: {
    extern void op_ldsw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldsw_raw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_ldl_raw: {
    extern void op_ldl_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_ldl_raw+0), 4);
    gen_code_ptr += 4;
}
break;

case INDEX_op_stb_raw: {
    extern void op_stb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_raw+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_stw_raw: {
    extern void op_stw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_raw+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_stl_raw: {
    extern void op_stl_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_stl_raw+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_swpb_raw: {
    extern void op_swpb_raw();
extern char cpu_lock;
extern char cpu_unlock;
    memcpy(gen_code_ptr, (void *)((char *)&op_swpb_raw+0), 17);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&cpu_lock) - (long)(gen_code_ptr + 1) + -4;
    *(uint32_t *)(gen_code_ptr + 13) = (long)(&cpu_unlock) - (long)(gen_code_ptr + 13) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_swpl_raw: {
    extern void op_swpl_raw();
extern char cpu_lock;
extern char cpu_unlock;
    memcpy(gen_code_ptr, (void *)((char *)&op_swpl_raw+0), 22);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&cpu_lock) - (long)(gen_code_ptr + 1) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = (long)(&cpu_unlock) - (long)(gen_code_ptr + 18) + -4;
    gen_code_ptr += 22;
}
break;

case INDEX_op_vfp_lds_raw: {
    extern void op_vfp_lds_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_lds_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_vfp_sts_raw: {
    extern void op_vfp_sts_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_sts_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_vfp_ldd_raw: {
    extern void op_vfp_ldd_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_ldd_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_vfp_std_raw: {
    extern void op_vfp_std_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_std_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_iwmmxt_ldb_raw: {
    extern void op_iwmmxt_ldb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_ldb_raw+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_iwmmxt_stb_raw: {
    extern void op_iwmmxt_stb_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_stb_raw+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_iwmmxt_ldw_raw: {
    extern void op_iwmmxt_ldw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_ldw_raw+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_iwmmxt_stw_raw: {
    extern void op_iwmmxt_stw_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_stw_raw+0), 11);
    gen_code_ptr += 11;
}
break;

case INDEX_op_iwmmxt_ldl_raw: {
    extern void op_iwmmxt_ldl_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_ldl_raw+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_iwmmxt_stl_raw: {
    extern void op_iwmmxt_stl_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_stl_raw+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_iwmmxt_ldq_raw: {
    extern void op_iwmmxt_ldq_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_ldq_raw+0), 49);
    gen_code_ptr += 49;
}
break;

case INDEX_op_iwmmxt_stq_raw: {
    extern void op_iwmmxt_stq_raw();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_stq_raw+0), 21);
    gen_code_ptr += 21;
}
break;

case INDEX_op_shll_T1_im: {
    long param1;
    extern void op_shll_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T1_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_shrl_T1_im: {
    long param1;
    extern void op_shrl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_shrl_T1_0: {
    extern void op_shrl_T1_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_sarl_T1_im: {
    long param1;
    extern void op_sarl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_sarl_T1_0: {
    extern void op_sarl_T1_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_rorl_T1_im: {
    long param1;
    extern void op_rorl_T1_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T1_im+0), 7);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 7;
}
break;

case INDEX_op_rrxl_T1: {
    extern void op_rrxl_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_rrxl_T1+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_shll_T1_im_cc: {
    long param1;
    extern void op_shll_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T1_im_cc+0), 33);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 9) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 25) = param1 + 0;
    gen_code_ptr += 33;
}
break;

case INDEX_op_shrl_T1_im_cc: {
    long param1;
    extern void op_shrl_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_im_cc+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + -1;
    *(uint32_t *)(gen_code_ptr + 19) = param1 + 0;
    gen_code_ptr += 27;
}
break;

case INDEX_op_shrl_T1_0_cc: {
    extern void op_shrl_T1_0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_0_cc+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_sarl_T1_im_cc: {
    long param1;
    extern void op_sarl_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_im_cc+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + -1;
    *(uint32_t *)(gen_code_ptr + 19) = param1 + 0;
    gen_code_ptr += 27;
}
break;

case INDEX_op_sarl_T1_0_cc: {
    extern void op_sarl_T1_0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_0_cc+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_rorl_T1_im_cc: {
    long param1;
    extern void op_rorl_T1_im_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T1_im_cc+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + -1;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    gen_code_ptr += 25;
}
break;

case INDEX_op_rrxl_T1_cc: {
    extern void op_rrxl_T1_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_rrxl_T1_cc+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_shll_T2_im: {
    long param1;
    extern void op_shll_T2_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T2_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_shrl_T2_im: {
    long param1;
    extern void op_shrl_T2_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T2_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_shrl_T2_0: {
    extern void op_shrl_T2_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T2_0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_sarl_T2_im: {
    long param1;
    extern void op_sarl_T2_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T2_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_sarl_T2_0: {
    extern void op_sarl_T2_0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T2_0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_rorl_T2_im: {
    long param1;
    extern void op_rorl_T2_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T2_im+0), 7);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 7;
}
break;

case INDEX_op_rrxl_T2: {
    extern void op_rrxl_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_rrxl_T2+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_shll_T1_T0: {
    extern void op_shll_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T1_T0+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_shrl_T1_T0: {
    extern void op_shrl_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_T0+0), 14);
    gen_code_ptr += 14;
}
break;

case INDEX_op_sarl_T1_T0: {
    extern void op_sarl_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_T0+0), 15);
    gen_code_ptr += 15;
}
break;

case INDEX_op_rorl_T1_T0: {
    extern void op_rorl_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T1_T0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_shll_T1_T0_cc: {
    extern void op_shll_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T1_T0_cc+0), 99);
    gen_code_ptr += 99;
}
break;

case INDEX_op_shrl_T1_T0_cc: {
    extern void op_shrl_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T1_T0_cc+0), 79);
    gen_code_ptr += 79;
}
break;

case INDEX_op_sarl_T1_T0_cc: {
    extern void op_sarl_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T1_T0_cc+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_rorl_T1_T0_cc: {
    extern void op_rorl_T1_T0_cc();
    memcpy(gen_code_ptr, (void *)((char *)&op_rorl_T1_T0_cc+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_clz_T0: {
    extern void op_clz_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_clz_T0+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_sarl_T0_im: {
    long param1;
    extern void op_sarl_T0_im();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T0_im+0), 9);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 9;
}
break;

case INDEX_op_sxth_T0: {
    extern void op_sxth_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_sxth_T0+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_sxth_T1: {
    extern void op_sxth_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sxth_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_sxtb_T1: {
    extern void op_sxtb_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sxtb_T1+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_uxtb_T1: {
    extern void op_uxtb_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_uxtb_T1+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_uxth_T1: {
    extern void op_uxth_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_uxth_T1+0), 3);
    gen_code_ptr += 3;
}
break;

case INDEX_op_sxtb16_T1: {
    extern void op_sxtb16_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_sxtb16_T1+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_uxtb16_T1: {
    extern void op_uxtb16_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_uxtb16_T1+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_addl_T0_T1_setq: {
    extern void op_addl_T0_T1_setq();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_T1_setq+0), 30);
    gen_code_ptr += 30;
}
break;

case INDEX_op_addl_T0_T1_saturate: {
    extern void op_addl_T0_T1_saturate();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl_T0_T1_saturate+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_subl_T0_T1_saturate: {
    extern void op_subl_T0_T1_saturate();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl_T0_T1_saturate+0), 44);
    gen_code_ptr += 44;
}
break;

case INDEX_op_double_T1_saturate: {
    extern void op_double_T1_saturate();
    memcpy(gen_code_ptr, (void *)((char *)&op_double_T1_saturate+0), 68);
    gen_code_ptr += 68;
}
break;

case INDEX_op_shll_T0_im_thumb: {
    long param1;
    extern void op_shll_T0_im_thumb();
    memcpy(gen_code_ptr, (void *)((char *)&op_shll_T0_im_thumb+0), 37);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 9) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = param1 + 0;
    gen_code_ptr += 37;
}
break;

case INDEX_op_shrl_T0_im_thumb: {
    long param1;
    extern void op_shrl_T0_im_thumb();
    memcpy(gen_code_ptr, (void *)((char *)&op_shrl_T0_im_thumb+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + -1;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_sarl_T0_im_thumb: {
    long param1;
    extern void op_sarl_T0_im_thumb();
    memcpy(gen_code_ptr, (void *)((char *)&op_sarl_T0_im_thumb+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + -1;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_swi: {
    extern void op_swi();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_swi+0), 16);
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_undef_insn: {
    extern void op_undef_insn();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_undef_insn+0), 16);
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_debug: {
    extern void op_debug();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_debug+0), 16);
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_wfi: {
    extern void op_wfi();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_wfi+0), 27);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_bkpt: {
    extern void op_bkpt();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_bkpt+0), 16);
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_vfp_adds: {
    extern void op_vfp_adds();
extern char float32_add;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_adds+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_add) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_addd: {
    extern void op_vfp_addd();
extern char float64_add;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_addd+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_add) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_vfp_subs: {
    extern void op_vfp_subs();
extern char float32_sub;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_subs+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_sub) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_subd: {
    extern void op_vfp_subd();
extern char float64_sub;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_subd+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_sub) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_vfp_muls: {
    extern void op_vfp_muls();
extern char float32_mul;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_muls+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_mul) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_muld: {
    extern void op_vfp_muld();
extern char float64_mul;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_muld+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_mul) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_vfp_divs: {
    extern void op_vfp_divs();
extern char float32_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_divs+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float32_div) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_divd: {
    extern void op_vfp_divd();
extern char float64_div;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_divd+0), 72);
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&float64_div) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 72;
}
break;

case INDEX_op_vfp_abss: {
    extern void op_vfp_abss();
extern char do_vfp_abss;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_abss+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_abss) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_absd: {
    extern void op_vfp_absd();
extern char do_vfp_absd;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_absd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_absd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_sqrts: {
    extern void op_vfp_sqrts();
extern char do_vfp_sqrts;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_sqrts+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_sqrts) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_sqrtd: {
    extern void op_vfp_sqrtd();
extern char do_vfp_sqrtd;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_sqrtd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_sqrtd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_cmps: {
    extern void op_vfp_cmps();
extern char do_vfp_cmps;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_cmps+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_cmps) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_cmpd: {
    extern void op_vfp_cmpd();
extern char do_vfp_cmpd;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_cmpd+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_cmpd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_cmpes: {
    extern void op_vfp_cmpes();
extern char do_vfp_cmpes;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_cmpes+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_cmpes) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_cmped: {
    extern void op_vfp_cmped();
extern char do_vfp_cmped;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_cmped+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_cmped) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_negs: {
    extern void op_vfp_negs();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_negs+0), 10);
    gen_code_ptr += 10;
}
break;

case INDEX_op_vfp_negd: {
    extern void op_vfp_negd();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_negd+0), 30);
    gen_code_ptr += 30;
}
break;

case INDEX_op_vfp_F1_ld0s: {
    extern void op_vfp_F1_ld0s();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_F1_ld0s+0), 8);
    gen_code_ptr += 8;
}
break;

case INDEX_op_vfp_F1_ld0d: {
    extern void op_vfp_F1_ld0d();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_F1_ld0d+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_vfp_uitos: {
    extern void op_vfp_uitos();
extern char uint32_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_uitos+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&uint32_to_float32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_uitod: {
    extern void op_vfp_uitod();
extern char uint32_to_float64;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_uitod+0), 42);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&uint32_to_float64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 42;
}
break;

case INDEX_op_vfp_sitos: {
    extern void op_vfp_sitos();
extern char int32_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_sitos+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&int32_to_float32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_sitod: {
    extern void op_vfp_sitod();
extern char int32_to_float64;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_sitod+0), 42);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&int32_to_float64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 42;
}
break;

case INDEX_op_vfp_touis: {
    extern void op_vfp_touis();
extern char float32_to_uint32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_touis+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_uint32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_touid: {
    extern void op_vfp_touid();
extern char float64_to_uint32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_touid+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_uint32) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_tosis: {
    extern void op_vfp_tosis();
extern char float32_to_int32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_tosis+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_int32) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_tosid: {
    extern void op_vfp_tosid();
extern char float64_to_int32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_tosid+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_int32) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_touizs: {
    extern void op_vfp_touizs();
extern char float32_to_uint32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_touizs+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_uint32_round_to_zero) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_touizd: {
    extern void op_vfp_touizd();
extern char float64_to_uint32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_touizd+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_uint32_round_to_zero) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_tosizs: {
    extern void op_vfp_tosizs();
extern char float32_to_int32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_tosizs+0), 36);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_int32_round_to_zero) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_vfp_tosizd: {
    extern void op_vfp_tosizd();
extern char float64_to_int32_round_to_zero;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_tosizd+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_int32_round_to_zero) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_fcvtds: {
    extern void op_vfp_fcvtds();
extern char float32_to_float64;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_fcvtds+0), 42);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 42;
}
break;

case INDEX_op_vfp_fcvtsd: {
    extern void op_vfp_fcvtsd();
extern char float64_to_float32;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_fcvtsd+0), 46);
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_float32) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_vfp_getreg_F0d: {
    long param1;
    extern void op_vfp_getreg_F0d();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_getreg_F0d+0), 24);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 4;
    gen_code_ptr += 24;
}
break;

case INDEX_op_vfp_getreg_F0s: {
    long param1;
    extern void op_vfp_getreg_F0s();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_getreg_F0s+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_getreg_F1d: {
    long param1;
    extern void op_vfp_getreg_F1d();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_getreg_F1d+0), 24);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 4;
    gen_code_ptr += 24;
}
break;

case INDEX_op_vfp_getreg_F1s: {
    long param1;
    extern void op_vfp_getreg_F1s();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_getreg_F1s+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_setreg_F0d: {
    long param1;
    extern void op_vfp_setreg_F0d();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_setreg_F0d+0), 24);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = param1 + 4;
    gen_code_ptr += 24;
}
break;

case INDEX_op_vfp_setreg_F0s: {
    long param1;
    extern void op_vfp_setreg_F0s();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_setreg_F0s+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 8) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_movl_T0_fpscr: {
    extern void op_vfp_movl_T0_fpscr();
extern char do_vfp_get_fpscr;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_movl_T0_fpscr+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_get_fpscr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_movl_T0_fpscr_flags: {
    extern void op_vfp_movl_T0_fpscr_flags();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_movl_T0_fpscr_flags+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_movl_fpscr_T0: {
    extern void op_vfp_movl_fpscr_T0();
extern char do_vfp_set_fpscr;
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_movl_fpscr_T0+0), 5);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&do_vfp_set_fpscr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_vfp_movl_T0_xreg: {
    long param1;
    extern void op_vfp_movl_T0_xreg();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_movl_T0_xreg+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_movl_xreg_T0: {
    long param1;
    extern void op_vfp_movl_xreg_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_movl_xreg_T0+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_vfp_mrs: {
    extern void op_vfp_mrs();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_mrs+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_vfp_msr: {
    extern void op_vfp_msr();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_msr+0), 6);
    gen_code_ptr += 6;
}
break;

case INDEX_op_vfp_mrrd: {
    extern void op_vfp_mrrd();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_mrrd+0), 16);
    gen_code_ptr += 16;
}
break;

case INDEX_op_vfp_mdrr: {
    extern void op_vfp_mdrr();
    memcpy(gen_code_ptr, (void *)((char *)&op_vfp_mdrr+0), 12);
    gen_code_ptr += 12;
}
break;

case INDEX_op_signbit_T1_T0: {
    extern void op_signbit_T1_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_signbit_T1_T0+0), 5);
    gen_code_ptr += 5;
}
break;

case INDEX_op_movl_cp_T0: {
    long param1;
    extern void op_movl_cp_T0();
extern char helper_set_cp;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_cp_T0+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&helper_set_cp) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_movl_T0_cp: {
    long param1;
    extern void op_movl_T0_cp();
extern char helper_get_cp;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_cp+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&helper_get_cp) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_movl_cp15_T0: {
    long param1;
    extern void op_movl_cp15_T0();
extern char helper_set_cp15;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_cp15_T0+0), 27);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&helper_set_cp15) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_movl_T0_cp15: {
    long param1;
    extern void op_movl_T0_cp15();
extern char helper_get_cp15;
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_cp15+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&helper_get_cp15) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_movl_T0_user: {
    long param1;
    extern void op_movl_T0_user();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_user+0), 46);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 46;
}
break;

case INDEX_op_movl_user_T0: {
    long param1;
    extern void op_movl_user_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_user_T0+0), 46);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 46;
}
break;

case INDEX_op_movl_T2_T0: {
    extern void op_movl_T2_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T2_T0+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_movl_T0_T2: {
    extern void op_movl_T0_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_movl_T0_T2+0), 2);
    gen_code_ptr += 2;
}
break;

case INDEX_op_iwmmxt_movl_T0_T1_wRn: {
    long param1;
    extern void op_iwmmxt_movl_T0_T1_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movl_T0_T1_wRn+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_iwmmxt_movl_wRn_T0_T1: {
    long param1;
    extern void op_iwmmxt_movl_wRn_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movl_wRn_T0_T1+0), 49);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 28) = param1 + 0;
    gen_code_ptr += 49;
}
break;

case INDEX_op_iwmmxt_movq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_movq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movq_M0_wRn+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_iwmmxt_orq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_orq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_orq_M0_wRn+0), 67);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 67;
}
break;

case INDEX_op_iwmmxt_andq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_andq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_andq_M0_wRn+0), 67);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 67;
}
break;

case INDEX_op_iwmmxt_xorq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_xorq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_xorq_M0_wRn+0), 67);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 67;
}
break;

case INDEX_op_iwmmxt_maddsq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maddsq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maddsq_M0_wRn+0), 205);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 55) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 97) = param1 + 0;
    gen_code_ptr += 205;
}
break;

case INDEX_op_iwmmxt_madduq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_madduq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_madduq_M0_wRn+0), 500);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 121) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 352) = param1 + 0;
    gen_code_ptr += 500;
}
break;

case INDEX_op_iwmmxt_sadb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_sadb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sadb_M0_wRn+0), 1043);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 9) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 86) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 155) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 225) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 294) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 363) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 433) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 502) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 571) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 641) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 711) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 791) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 871) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 951) = param1 + 0;
    gen_code_ptr += 1043;
}
break;

case INDEX_op_iwmmxt_sadw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_sadw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sadw_M0_wRn+0), 463);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 9) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 82) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 151) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 221) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 291) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 371) = param1 + 0;
    gen_code_ptr += 463;
}
break;

case INDEX_op_iwmmxt_addl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addl_M0_wRn+0), 26);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 26;
}
break;

case INDEX_op_iwmmxt_mulsw_M0_wRn: {
    long param1, param2;
    extern void op_iwmmxt_mulsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_mulsw_M0_wRn+0), 330);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 27) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 74) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 169) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 244) = param1 + 0;
    gen_code_ptr += 330;
}
break;

case INDEX_op_iwmmxt_muluw_M0_wRn: {
    long param1, param2;
    extern void op_iwmmxt_muluw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_muluw_M0_wRn+0), 718);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 127) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 198) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 377) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 525) = param1 + 0;
    gen_code_ptr += 718;
}
break;

case INDEX_op_iwmmxt_macsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_macsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_macsw_M0_wRn+0), 174);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 45) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 103) = param1 + 0;
    gen_code_ptr += 174;
}
break;

case INDEX_op_iwmmxt_macuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_macuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_macuw_M0_wRn+0), 174);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 45) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 103) = param1 + 0;
    gen_code_ptr += 174;
}
break;

case INDEX_op_iwmmxt_addsq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addsq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addsq_M0_wRn+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_iwmmxt_adduq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_adduq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_adduq_M0_wRn+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_iwmmxt_movq_wRn_M0: {
    long param1;
    extern void op_iwmmxt_movq_wRn_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movq_wRn_M0+0), 31);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 31;
}
break;

case INDEX_op_iwmmxt_movl_wCx_T0: {
    long param1;
    extern void op_iwmmxt_movl_wCx_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movl_wCx_T0+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_iwmmxt_movl_T0_wCx: {
    long param1;
    extern void op_iwmmxt_movl_T0_wCx();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movl_T0_wCx+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_iwmmxt_movl_T1_wCx: {
    long param1;
    extern void op_iwmmxt_movl_T1_wCx();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_movl_T1_wCx+0), 12);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 12;
}
break;

case INDEX_op_iwmmxt_set_mup: {
    extern void op_iwmmxt_set_mup();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_set_mup+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_iwmmxt_set_cup: {
    extern void op_iwmmxt_set_cup();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_set_cup+0), 7);
    gen_code_ptr += 7;
}
break;

case INDEX_op_iwmmxt_setpsr_nz: {
    extern void op_iwmmxt_setpsr_nz();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_setpsr_nz+0), 55);
    gen_code_ptr += 55;
}
break;

case INDEX_op_iwmmxt_negq_M0: {
    extern void op_iwmmxt_negq_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_negq_M0+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_iwmmxt_unpacklb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpacklb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklb_M0_wRn+0), 1247);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 1247;
}
break;

case INDEX_op_iwmmxt_unpacklw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpacklw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklw_M0_wRn+0), 490);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 490;
}
break;

case INDEX_op_iwmmxt_unpackll_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpackll_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackll_M0_wRn+0), 167);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 167;
}
break;

case INDEX_op_iwmmxt_unpacklub_M0: {
    extern void op_iwmmxt_unpacklub_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklub_M0+0), 502);
    gen_code_ptr += 502;
}
break;

case INDEX_op_iwmmxt_unpackluw_M0: {
    extern void op_iwmmxt_unpackluw_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackluw_M0+0), 191);
    gen_code_ptr += 191;
}
break;

case INDEX_op_iwmmxt_unpacklul_M0: {
    extern void op_iwmmxt_unpacklul_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklul_M0+0), 58);
    gen_code_ptr += 58;
}
break;

case INDEX_op_iwmmxt_unpacklsb_M0: {
    extern void op_iwmmxt_unpacklsb_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklsb_M0+0), 532);
    gen_code_ptr += 532;
}
break;

case INDEX_op_iwmmxt_unpacklsw_M0: {
    extern void op_iwmmxt_unpacklsw_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklsw_M0+0), 165);
    gen_code_ptr += 165;
}
break;

case INDEX_op_iwmmxt_unpacklsl_M0: {
    extern void op_iwmmxt_unpacklsl_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpacklsl_M0+0), 57);
    gen_code_ptr += 57;
}
break;

case INDEX_op_iwmmxt_unpackhb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpackhb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhb_M0_wRn+0), 1255);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 1255;
}
break;

case INDEX_op_iwmmxt_unpackhw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpackhw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhw_M0_wRn+0), 494);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 494;
}
break;

case INDEX_op_iwmmxt_unpackhl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_unpackhl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhl_M0_wRn+0), 167);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 167;
}
break;

case INDEX_op_iwmmxt_unpackhub_M0: {
    extern void op_iwmmxt_unpackhub_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhub_M0+0), 505);
    gen_code_ptr += 505;
}
break;

case INDEX_op_iwmmxt_unpackhuw_M0: {
    extern void op_iwmmxt_unpackhuw_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhuw_M0+0), 192);
    gen_code_ptr += 192;
}
break;

case INDEX_op_iwmmxt_unpackhul_M0: {
    extern void op_iwmmxt_unpackhul_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhul_M0+0), 58);
    gen_code_ptr += 58;
}
break;

case INDEX_op_iwmmxt_unpackhsb_M0: {
    extern void op_iwmmxt_unpackhsb_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhsb_M0+0), 493);
    gen_code_ptr += 493;
}
break;

case INDEX_op_iwmmxt_unpackhsw_M0: {
    extern void op_iwmmxt_unpackhsw_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhsw_M0+0), 163);
    gen_code_ptr += 163;
}
break;

case INDEX_op_iwmmxt_unpackhsl_M0: {
    extern void op_iwmmxt_unpackhsl_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_unpackhsl_M0+0), 57);
    gen_code_ptr += 57;
}
break;

case INDEX_op_iwmmxt_cmpeqb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpeqb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpeqb_M0_wRn+0), 1234);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 1234;
}
break;

case INDEX_op_iwmmxt_cmpeqw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpeqw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpeqw_M0_wRn+0), 523);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    gen_code_ptr += 523;
}
break;

case INDEX_op_iwmmxt_cmpeql_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpeql_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpeql_M0_wRn+0), 186);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 39) = param1 + 0;
    gen_code_ptr += 186;
}
break;

case INDEX_op_iwmmxt_cmpgtsb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtsb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtsb_M0_wRn+0), 1182);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 1182;
}
break;

case INDEX_op_iwmmxt_cmpgtsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtsw_M0_wRn+0), 500);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    gen_code_ptr += 500;
}
break;

case INDEX_op_iwmmxt_cmpgtsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtsl_M0_wRn+0), 183);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 39) = param1 + 0;
    gen_code_ptr += 183;
}
break;

case INDEX_op_iwmmxt_cmpgtub_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtub_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtub_M0_wRn+0), 1182);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 1182;
}
break;

case INDEX_op_iwmmxt_cmpgtuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtuw_M0_wRn+0), 500);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    gen_code_ptr += 500;
}
break;

case INDEX_op_iwmmxt_cmpgtul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_cmpgtul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_cmpgtul_M0_wRn+0), 183);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 39) = param1 + 0;
    gen_code_ptr += 183;
}
break;

case INDEX_op_iwmmxt_minsb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minsb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minsb_M0_wRn+0), 1504);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 79) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 335) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 472) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 593) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 726) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 842) = param1 + 0;
    gen_code_ptr += 1504;
}
break;

case INDEX_op_iwmmxt_minsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minsw_M0_wRn+0), 648);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 77) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 197) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 289) = param1 + 0;
    gen_code_ptr += 648;
}
break;

case INDEX_op_iwmmxt_minsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minsl_M0_wRn+0), 241);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 241;
}
break;

case INDEX_op_iwmmxt_minub_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minub_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minub_M0_wRn+0), 1504);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 79) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 335) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 472) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 593) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 726) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 842) = param1 + 0;
    gen_code_ptr += 1504;
}
break;

case INDEX_op_iwmmxt_minuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minuw_M0_wRn+0), 648);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 77) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 197) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 289) = param1 + 0;
    gen_code_ptr += 648;
}
break;

case INDEX_op_iwmmxt_minul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_minul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_minul_M0_wRn+0), 241);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 241;
}
break;

case INDEX_op_iwmmxt_maxsb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxsb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxsb_M0_wRn+0), 1504);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 79) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 335) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 472) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 593) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 726) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 842) = param1 + 0;
    gen_code_ptr += 1504;
}
break;

case INDEX_op_iwmmxt_maxsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxsw_M0_wRn+0), 648);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 77) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 197) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 289) = param1 + 0;
    gen_code_ptr += 648;
}
break;

case INDEX_op_iwmmxt_maxsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxsl_M0_wRn+0), 241);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 241;
}
break;

case INDEX_op_iwmmxt_maxub_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxub_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxub_M0_wRn+0), 1504);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 79) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 204) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 335) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 472) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 593) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 726) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 842) = param1 + 0;
    gen_code_ptr += 1504;
}
break;

case INDEX_op_iwmmxt_maxuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxuw_M0_wRn+0), 648);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 77) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 197) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 289) = param1 + 0;
    gen_code_ptr += 648;
}
break;

case INDEX_op_iwmmxt_maxul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_maxul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_maxul_M0_wRn+0), 241);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 59) = param1 + 0;
    gen_code_ptr += 241;
}
break;

case INDEX_op_iwmmxt_subnb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subnb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subnb_M0_wRn+0), 1243);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 66) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 182) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 303) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 422) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 500) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 566) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 629) = param1 + 0;
    gen_code_ptr += 1243;
}
break;

case INDEX_op_iwmmxt_subnw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subnw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subnw_M0_wRn+0), 535);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 146) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 213) = param1 + 0;
    gen_code_ptr += 535;
}
break;

case INDEX_op_iwmmxt_subnl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subnl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subnl_M0_wRn+0), 190);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 190;
}
break;

case INDEX_op_iwmmxt_addnb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addnb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addnb_M0_wRn+0), 1219);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 167) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 294) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 410) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 479) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 542) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 605) = param1 + 0;
    gen_code_ptr += 1219;
}
break;

case INDEX_op_iwmmxt_addnw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addnw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addnw_M0_wRn+0), 523);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 134) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 201) = param1 + 0;
    gen_code_ptr += 523;
}
break;

case INDEX_op_iwmmxt_addnl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addnl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addnl_M0_wRn+0), 194);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 194;
}
break;

case INDEX_op_iwmmxt_subub_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subub_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subub_M0_wRn+0), 1243);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 66) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 182) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 303) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 422) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 500) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 566) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 629) = param1 + 0;
    gen_code_ptr += 1243;
}
break;

case INDEX_op_iwmmxt_subuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subuw_M0_wRn+0), 535);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 146) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 213) = param1 + 0;
    gen_code_ptr += 535;
}
break;

case INDEX_op_iwmmxt_subul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subul_M0_wRn+0), 190);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 190;
}
break;

case INDEX_op_iwmmxt_addub_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addub_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addub_M0_wRn+0), 1219);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 167) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 294) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 410) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 479) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 542) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 605) = param1 + 0;
    gen_code_ptr += 1219;
}
break;

case INDEX_op_iwmmxt_adduw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_adduw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_adduw_M0_wRn+0), 523);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 134) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 201) = param1 + 0;
    gen_code_ptr += 523;
}
break;

case INDEX_op_iwmmxt_addul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addul_M0_wRn+0), 194);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 194;
}
break;

case INDEX_op_iwmmxt_subsb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subsb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subsb_M0_wRn+0), 1266);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 66) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 182) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 303) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 415) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 494) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 589) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 652) = param1 + 0;
    gen_code_ptr += 1266;
}
break;

case INDEX_op_iwmmxt_subsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subsw_M0_wRn+0), 535);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 57) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 146) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 213) = param1 + 0;
    gen_code_ptr += 535;
}
break;

case INDEX_op_iwmmxt_subsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_subsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_subsl_M0_wRn+0), 190);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 190;
}
break;

case INDEX_op_iwmmxt_addsb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addsb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addsb_M0_wRn+0), 1243);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 167) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 294) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 410) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 478) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 566) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 622) = param1 + 0;
    gen_code_ptr += 1243;
}
break;

case INDEX_op_iwmmxt_addsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addsw_M0_wRn+0), 519);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 130) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 197) = param1 + 0;
    gen_code_ptr += 519;
}
break;

case INDEX_op_iwmmxt_addsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_addsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addsl_M0_wRn+0), 194);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 194;
}
break;

case INDEX_op_iwmmxt_avgb_M0_wRn: {
    long param1, param2;
    extern void op_iwmmxt_avgb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_avgb_M0_wRn+0), 1865);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 88) = param2 + 0;
    gen_code_ptr += 1865;
}
break;

case INDEX_op_iwmmxt_avgw_M0_wRn: {
    long param1, param2;
    extern void op_iwmmxt_avgw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_avgw_M0_wRn+0), 702);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 64) = param2 + 0;
    gen_code_ptr += 702;
}
break;

case INDEX_op_iwmmxt_msadb_M0_wRn: {
    long param1;
    extern void op_iwmmxt_msadb_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_msadb_M0_wRn+0), 500);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 121) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 212) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 352) = param1 + 0;
    gen_code_ptr += 500;
}
break;

case INDEX_op_iwmmxt_align_M0_T0_wRn: {
    long param1;
    extern void op_iwmmxt_align_M0_T0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_align_M0_T0_wRn+0), 142);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    gen_code_ptr += 142;
}
break;

case INDEX_op_iwmmxt_insr_M0_T0_T1: {
    long param1;
    extern void op_iwmmxt_insr_M0_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_insr_M0_T0_T1+0), 173);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 10) = param1 + 0;
    gen_code_ptr += 173;
}
break;

case INDEX_op_iwmmxt_extrsb_T0_M0: {
    long param1;
    extern void op_iwmmxt_extrsb_T0_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_extrsb_T0_M0+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_iwmmxt_extrsw_T0_M0: {
    long param1;
    extern void op_iwmmxt_extrsw_T0_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_extrsw_T0_M0+0), 32);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 32;
}
break;

case INDEX_op_iwmmxt_extru_T0_M0_T1: {
    long param1;
    extern void op_iwmmxt_extru_T0_M0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_extru_T0_M0_T1+0), 33);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 33;
}
break;

case INDEX_op_iwmmxt_bcstb_M0_T0: {
    extern void op_iwmmxt_bcstb_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_bcstb_M0_T0+0), 372);
    gen_code_ptr += 372;
}
break;

case INDEX_op_iwmmxt_bcstw_M0_T0: {
    extern void op_iwmmxt_bcstw_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_bcstw_M0_T0+0), 172);
    gen_code_ptr += 172;
}
break;

case INDEX_op_iwmmxt_bcstl_M0_T0: {
    extern void op_iwmmxt_bcstl_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_bcstl_M0_T0+0), 66);
    gen_code_ptr += 66;
}
break;

case INDEX_op_iwmmxt_addcb_M0: {
    extern void op_iwmmxt_addcb_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addcb_M0+0), 300);
    gen_code_ptr += 300;
}
break;

case INDEX_op_iwmmxt_addcw_M0: {
    extern void op_iwmmxt_addcw_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addcw_M0+0), 144);
    gen_code_ptr += 144;
}
break;

case INDEX_op_iwmmxt_addcl_M0: {
    extern void op_iwmmxt_addcl_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_addcl_M0+0), 55);
    gen_code_ptr += 55;
}
break;

case INDEX_op_iwmmxt_msbb_T0_M0: {
    extern void op_iwmmxt_msbb_T0_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_msbb_T0_M0+0), 148);
    gen_code_ptr += 148;
}
break;

case INDEX_op_iwmmxt_msbw_T0_M0: {
    extern void op_iwmmxt_msbw_T0_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_msbw_T0_M0+0), 76);
    gen_code_ptr += 76;
}
break;

case INDEX_op_iwmmxt_msbl_T0_M0: {
    extern void op_iwmmxt_msbl_T0_M0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_msbl_T0_M0+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_iwmmxt_srlw_M0_T0: {
    extern void op_iwmmxt_srlw_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_srlw_M0_T0+0), 485);
    gen_code_ptr += 485;
}
break;

case INDEX_op_iwmmxt_srll_M0_T0: {
    extern void op_iwmmxt_srll_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_srll_M0_T0+0), 211);
    gen_code_ptr += 211;
}
break;

case INDEX_op_iwmmxt_srlq_M0_T0: {
    extern void op_iwmmxt_srlq_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_srlq_M0_T0+0), 78);
    gen_code_ptr += 78;
}
break;

case INDEX_op_iwmmxt_sllw_M0_T0: {
    extern void op_iwmmxt_sllw_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sllw_M0_T0+0), 485);
    gen_code_ptr += 485;
}
break;

case INDEX_op_iwmmxt_slll_M0_T0: {
    extern void op_iwmmxt_slll_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_slll_M0_T0+0), 210);
    gen_code_ptr += 210;
}
break;

case INDEX_op_iwmmxt_sllq_M0_T0: {
    extern void op_iwmmxt_sllq_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sllq_M0_T0+0), 78);
    gen_code_ptr += 78;
}
break;

case INDEX_op_iwmmxt_sraw_M0_T0: {
    extern void op_iwmmxt_sraw_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sraw_M0_T0+0), 460);
    gen_code_ptr += 460;
}
break;

case INDEX_op_iwmmxt_sral_M0_T0: {
    extern void op_iwmmxt_sral_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sral_M0_T0+0), 209);
    gen_code_ptr += 209;
}
break;

case INDEX_op_iwmmxt_sraq_M0_T0: {
    extern void op_iwmmxt_sraq_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_sraq_M0_T0+0), 79);
    gen_code_ptr += 79;
}
break;

case INDEX_op_iwmmxt_rorw_M0_T0: {
    extern void op_iwmmxt_rorw_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_rorw_M0_T0+0), 892);
    gen_code_ptr += 892;
}
break;

case INDEX_op_iwmmxt_rorl_M0_T0: {
    extern void op_iwmmxt_rorl_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_rorl_M0_T0+0), 377);
    gen_code_ptr += 377;
}
break;

case INDEX_op_iwmmxt_rorq_M0_T0: {
    extern void op_iwmmxt_rorq_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_rorq_M0_T0+0), 151);
    gen_code_ptr += 151;
}
break;

case INDEX_op_iwmmxt_shufh_M0_T0: {
    extern void op_iwmmxt_shufh_M0_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_shufh_M0_T0+0), 559);
    gen_code_ptr += 559;
}
break;

case INDEX_op_iwmmxt_packuw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packuw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packuw_M0_wRn+0), 1190);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 314) = param1 + 0;
    gen_code_ptr += 1190;
}
break;

case INDEX_op_iwmmxt_packul_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packul_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packul_M0_wRn+0), 463);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    gen_code_ptr += 463;
}
break;

case INDEX_op_iwmmxt_packuq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packuq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packuq_M0_wRn+0), 167);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 167;
}
break;

case INDEX_op_iwmmxt_packsw_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packsw_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packsw_M0_wRn+0), 1190);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 314) = param1 + 0;
    gen_code_ptr += 1190;
}
break;

case INDEX_op_iwmmxt_packsl_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packsl_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packsl_M0_wRn+0), 463);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 83) = param1 + 0;
    gen_code_ptr += 463;
}
break;

case INDEX_op_iwmmxt_packsq_M0_wRn: {
    long param1;
    extern void op_iwmmxt_packsq_M0_wRn();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_packsq_M0_wRn+0), 167);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    gen_code_ptr += 167;
}
break;

case INDEX_op_iwmmxt_muladdsl_M0_T0_T1: {
    extern void op_iwmmxt_muladdsl_M0_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_muladdsl_M0_T0_T1+0), 18);
    gen_code_ptr += 18;
}
break;

case INDEX_op_iwmmxt_muladdsw_M0_T0_T1: {
    extern void op_iwmmxt_muladdsw_M0_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_muladdsw_M0_T0_T1+0), 48);
    gen_code_ptr += 48;
}
break;

case INDEX_op_iwmmxt_muladdswl_M0_T0_T1: {
    extern void op_iwmmxt_muladdswl_M0_T0_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_iwmmxt_muladdswl_M0_T0_T1+0), 22);
    gen_code_ptr += 22;
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

