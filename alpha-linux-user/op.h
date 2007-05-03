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
case INDEX_op_reset_T0: {
    extern void op_reset_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T0+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_reset_FT0: {
    extern void op_reset_FT0();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_FT0+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_set_s32_T0: {
    long param1;
    extern void op_set_s32_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_s32_T0+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_set_u32_T0: {
    long param1;
    extern void op_set_u32_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_u32_T0+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_set_64_T0: {
    long param1, param2;
    extern void op_set_64_T0();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_64_T0+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 38;
}
break;

case INDEX_op_load_T0_ir0: {
    extern void op_load_T0_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir0: {
    extern void op_load_T1_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir0: {
    extern void op_load_T2_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir0: {
    extern void op_store_T0_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir0: {
    extern void op_store_T1_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir0: {
    extern void op_store_T2_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir0+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir0: {
    extern void op_cmov_ir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir0+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir0: {
    extern void op_load_FT0_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir0: {
    extern void op_load_FT1_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir0: {
    extern void op_load_FT2_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir0: {
    extern void op_store_FT0_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir0: {
    extern void op_store_FT1_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir0: {
    extern void op_store_FT2_fir0();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir0+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir0: {
    extern void op_cmov_fir0();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir0+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_reset_T1: {
    extern void op_reset_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T1+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_reset_FT1: {
    extern void op_reset_FT1();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_FT1+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_set_s32_T1: {
    long param1;
    extern void op_set_s32_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_s32_T1+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_set_u32_T1: {
    long param1;
    extern void op_set_u32_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_u32_T1+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_set_64_T1: {
    long param1, param2;
    extern void op_set_64_T1();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_64_T1+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 38;
}
break;

case INDEX_op_load_T0_ir1: {
    extern void op_load_T0_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir1: {
    extern void op_load_T1_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir1: {
    extern void op_load_T2_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir1: {
    extern void op_store_T0_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir1: {
    extern void op_store_T1_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir1: {
    extern void op_store_T2_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir1+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir1: {
    extern void op_cmov_ir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir1+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir1: {
    extern void op_load_FT0_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir1: {
    extern void op_load_FT1_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir1: {
    extern void op_load_FT2_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir1: {
    extern void op_store_FT0_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir1: {
    extern void op_store_FT1_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir1: {
    extern void op_store_FT2_fir1();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir1+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir1: {
    extern void op_cmov_fir1();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir1+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_reset_T2: {
    extern void op_reset_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_T2+0), 17);
    gen_code_ptr += 17;
}
break;

case INDEX_op_reset_FT2: {
    extern void op_reset_FT2();
    memcpy(gen_code_ptr, (void *)((char *)&op_reset_FT2+0), 9);
    gen_code_ptr += 9;
}
break;

case INDEX_op_set_s32_T2: {
    long param1;
    extern void op_set_s32_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_s32_T2+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_set_u32_T2: {
    long param1;
    extern void op_set_u32_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_u32_T2+0), 20);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 20;
}
break;

case INDEX_op_set_64_T2: {
    long param1, param2;
    extern void op_set_64_T2();
    memcpy(gen_code_ptr, (void *)((char *)&op_set_64_T2+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 38;
}
break;

case INDEX_op_load_T0_ir2: {
    extern void op_load_T0_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir2: {
    extern void op_load_T1_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir2: {
    extern void op_load_T2_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir2: {
    extern void op_store_T0_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir2: {
    extern void op_store_T1_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir2: {
    extern void op_store_T2_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir2+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir2: {
    extern void op_cmov_ir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir2+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir2: {
    extern void op_load_FT0_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir2: {
    extern void op_load_FT1_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir2: {
    extern void op_load_FT2_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir2: {
    extern void op_store_FT0_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir2: {
    extern void op_store_FT1_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir2: {
    extern void op_store_FT2_fir2();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir2+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir2: {
    extern void op_cmov_fir2();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir2+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir3: {
    extern void op_load_T0_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir3: {
    extern void op_load_T1_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir3: {
    extern void op_load_T2_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir3: {
    extern void op_store_T0_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir3: {
    extern void op_store_T1_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir3: {
    extern void op_store_T2_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir3+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir3: {
    extern void op_cmov_ir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir3+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir3: {
    extern void op_load_FT0_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir3: {
    extern void op_load_FT1_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir3: {
    extern void op_load_FT2_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir3: {
    extern void op_store_FT0_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir3: {
    extern void op_store_FT1_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir3: {
    extern void op_store_FT2_fir3();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir3+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir3: {
    extern void op_cmov_fir3();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir3+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir4: {
    extern void op_load_T0_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir4: {
    extern void op_load_T1_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir4: {
    extern void op_load_T2_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir4: {
    extern void op_store_T0_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir4: {
    extern void op_store_T1_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir4: {
    extern void op_store_T2_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir4+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir4: {
    extern void op_cmov_ir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir4+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir4: {
    extern void op_load_FT0_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir4: {
    extern void op_load_FT1_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir4: {
    extern void op_load_FT2_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir4: {
    extern void op_store_FT0_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir4: {
    extern void op_store_FT1_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir4: {
    extern void op_store_FT2_fir4();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir4+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir4: {
    extern void op_cmov_fir4();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir4+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir5: {
    extern void op_load_T0_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir5: {
    extern void op_load_T1_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir5: {
    extern void op_load_T2_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir5: {
    extern void op_store_T0_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir5: {
    extern void op_store_T1_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir5: {
    extern void op_store_T2_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir5+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir5: {
    extern void op_cmov_ir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir5+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir5: {
    extern void op_load_FT0_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir5: {
    extern void op_load_FT1_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir5: {
    extern void op_load_FT2_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir5: {
    extern void op_store_FT0_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir5: {
    extern void op_store_FT1_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir5: {
    extern void op_store_FT2_fir5();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir5+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir5: {
    extern void op_cmov_fir5();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir5+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir6: {
    extern void op_load_T0_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir6: {
    extern void op_load_T1_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir6: {
    extern void op_load_T2_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir6: {
    extern void op_store_T0_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir6: {
    extern void op_store_T1_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir6: {
    extern void op_store_T2_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir6+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir6: {
    extern void op_cmov_ir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir6+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir6: {
    extern void op_load_FT0_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir6: {
    extern void op_load_FT1_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir6: {
    extern void op_load_FT2_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir6: {
    extern void op_store_FT0_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir6: {
    extern void op_store_FT1_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir6: {
    extern void op_store_FT2_fir6();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir6+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir6: {
    extern void op_cmov_fir6();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir6+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir7: {
    extern void op_load_T0_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir7: {
    extern void op_load_T1_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir7: {
    extern void op_load_T2_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir7: {
    extern void op_store_T0_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir7: {
    extern void op_store_T1_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir7: {
    extern void op_store_T2_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir7+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir7: {
    extern void op_cmov_ir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir7+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir7: {
    extern void op_load_FT0_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir7: {
    extern void op_load_FT1_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir7: {
    extern void op_load_FT2_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir7: {
    extern void op_store_FT0_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir7: {
    extern void op_store_FT1_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir7: {
    extern void op_store_FT2_fir7();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir7+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir7: {
    extern void op_cmov_fir7();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir7+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir8: {
    extern void op_load_T0_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir8: {
    extern void op_load_T1_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir8: {
    extern void op_load_T2_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir8: {
    extern void op_store_T0_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir8: {
    extern void op_store_T1_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir8: {
    extern void op_store_T2_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir8+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir8: {
    extern void op_cmov_ir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir8+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir8: {
    extern void op_load_FT0_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir8: {
    extern void op_load_FT1_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir8: {
    extern void op_load_FT2_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir8: {
    extern void op_store_FT0_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir8: {
    extern void op_store_FT1_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir8: {
    extern void op_store_FT2_fir8();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir8+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir8: {
    extern void op_cmov_fir8();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir8+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir9: {
    extern void op_load_T0_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir9: {
    extern void op_load_T1_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir9: {
    extern void op_load_T2_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir9: {
    extern void op_store_T0_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir9: {
    extern void op_store_T1_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir9: {
    extern void op_store_T2_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir9+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir9: {
    extern void op_cmov_ir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir9+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir9: {
    extern void op_load_FT0_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir9: {
    extern void op_load_FT1_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir9: {
    extern void op_load_FT2_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir9: {
    extern void op_store_FT0_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir9: {
    extern void op_store_FT1_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir9: {
    extern void op_store_FT2_fir9();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir9+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir9: {
    extern void op_cmov_fir9();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir9+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir10: {
    extern void op_load_T0_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir10: {
    extern void op_load_T1_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir10: {
    extern void op_load_T2_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir10: {
    extern void op_store_T0_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir10: {
    extern void op_store_T1_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir10: {
    extern void op_store_T2_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir10+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir10: {
    extern void op_cmov_ir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir10+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir10: {
    extern void op_load_FT0_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir10: {
    extern void op_load_FT1_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir10: {
    extern void op_load_FT2_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir10: {
    extern void op_store_FT0_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir10: {
    extern void op_store_FT1_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir10: {
    extern void op_store_FT2_fir10();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir10+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir10: {
    extern void op_cmov_fir10();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir10+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir11: {
    extern void op_load_T0_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir11: {
    extern void op_load_T1_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir11: {
    extern void op_load_T2_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir11: {
    extern void op_store_T0_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir11: {
    extern void op_store_T1_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir11: {
    extern void op_store_T2_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir11+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir11: {
    extern void op_cmov_ir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir11+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir11: {
    extern void op_load_FT0_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir11: {
    extern void op_load_FT1_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir11: {
    extern void op_load_FT2_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir11: {
    extern void op_store_FT0_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir11: {
    extern void op_store_FT1_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir11: {
    extern void op_store_FT2_fir11();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir11+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir11: {
    extern void op_cmov_fir11();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir11+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir12: {
    extern void op_load_T0_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir12: {
    extern void op_load_T1_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir12: {
    extern void op_load_T2_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir12: {
    extern void op_store_T0_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir12: {
    extern void op_store_T1_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir12: {
    extern void op_store_T2_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir12+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir12: {
    extern void op_cmov_ir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir12+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir12: {
    extern void op_load_FT0_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir12: {
    extern void op_load_FT1_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir12: {
    extern void op_load_FT2_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir12: {
    extern void op_store_FT0_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir12: {
    extern void op_store_FT1_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir12: {
    extern void op_store_FT2_fir12();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir12+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir12: {
    extern void op_cmov_fir12();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir12+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir13: {
    extern void op_load_T0_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir13: {
    extern void op_load_T1_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir13: {
    extern void op_load_T2_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir13: {
    extern void op_store_T0_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir13: {
    extern void op_store_T1_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir13: {
    extern void op_store_T2_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir13+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir13: {
    extern void op_cmov_ir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir13+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir13: {
    extern void op_load_FT0_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir13: {
    extern void op_load_FT1_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir13: {
    extern void op_load_FT2_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir13: {
    extern void op_store_FT0_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir13: {
    extern void op_store_FT1_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir13: {
    extern void op_store_FT2_fir13();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir13+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir13: {
    extern void op_cmov_fir13();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir13+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir14: {
    extern void op_load_T0_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir14: {
    extern void op_load_T1_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir14: {
    extern void op_load_T2_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir14: {
    extern void op_store_T0_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir14: {
    extern void op_store_T1_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir14: {
    extern void op_store_T2_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir14+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir14: {
    extern void op_cmov_ir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir14+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir14: {
    extern void op_load_FT0_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir14: {
    extern void op_load_FT1_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir14: {
    extern void op_load_FT2_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir14: {
    extern void op_store_FT0_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir14: {
    extern void op_store_FT1_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir14: {
    extern void op_store_FT2_fir14();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir14+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir14: {
    extern void op_cmov_fir14();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir14+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir15: {
    extern void op_load_T0_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T1_ir15: {
    extern void op_load_T1_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_load_T2_ir15: {
    extern void op_load_T2_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T0_ir15: {
    extern void op_store_T0_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T1_ir15: {
    extern void op_store_T1_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_store_T2_ir15: {
    extern void op_store_T2_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir15+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_cmov_ir15: {
    extern void op_cmov_ir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir15+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_load_FT0_fir15: {
    extern void op_load_FT0_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir15: {
    extern void op_load_FT1_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir15: {
    extern void op_load_FT2_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir15: {
    extern void op_store_FT0_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir15: {
    extern void op_store_FT1_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir15: {
    extern void op_store_FT2_fir15();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir15+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir15: {
    extern void op_cmov_fir15();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir15+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir16: {
    extern void op_load_T0_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir16: {
    extern void op_load_T1_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir16: {
    extern void op_load_T2_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir16: {
    extern void op_store_T0_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir16: {
    extern void op_store_T1_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir16: {
    extern void op_store_T2_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir16+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir16: {
    extern void op_cmov_ir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir16+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir16: {
    extern void op_load_FT0_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir16: {
    extern void op_load_FT1_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir16: {
    extern void op_load_FT2_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir16: {
    extern void op_store_FT0_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir16: {
    extern void op_store_FT1_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir16: {
    extern void op_store_FT2_fir16();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir16+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir16: {
    extern void op_cmov_fir16();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir16+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir17: {
    extern void op_load_T0_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir17: {
    extern void op_load_T1_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir17: {
    extern void op_load_T2_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir17: {
    extern void op_store_T0_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir17: {
    extern void op_store_T1_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir17: {
    extern void op_store_T2_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir17+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir17: {
    extern void op_cmov_ir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir17+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir17: {
    extern void op_load_FT0_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir17: {
    extern void op_load_FT1_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir17: {
    extern void op_load_FT2_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir17: {
    extern void op_store_FT0_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir17: {
    extern void op_store_FT1_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir17: {
    extern void op_store_FT2_fir17();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir17+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir17: {
    extern void op_cmov_fir17();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir17+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir18: {
    extern void op_load_T0_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir18: {
    extern void op_load_T1_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir18: {
    extern void op_load_T2_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir18: {
    extern void op_store_T0_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir18: {
    extern void op_store_T1_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir18: {
    extern void op_store_T2_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir18+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir18: {
    extern void op_cmov_ir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir18+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir18: {
    extern void op_load_FT0_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir18: {
    extern void op_load_FT1_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir18: {
    extern void op_load_FT2_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir18: {
    extern void op_store_FT0_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir18: {
    extern void op_store_FT1_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir18: {
    extern void op_store_FT2_fir18();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir18+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir18: {
    extern void op_cmov_fir18();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir18+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir19: {
    extern void op_load_T0_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir19: {
    extern void op_load_T1_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir19: {
    extern void op_load_T2_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir19: {
    extern void op_store_T0_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir19: {
    extern void op_store_T1_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir19: {
    extern void op_store_T2_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir19+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir19: {
    extern void op_cmov_ir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir19+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir19: {
    extern void op_load_FT0_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir19: {
    extern void op_load_FT1_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir19: {
    extern void op_load_FT2_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir19: {
    extern void op_store_FT0_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir19: {
    extern void op_store_FT1_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir19: {
    extern void op_store_FT2_fir19();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir19+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir19: {
    extern void op_cmov_fir19();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir19+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir20: {
    extern void op_load_T0_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir20: {
    extern void op_load_T1_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir20: {
    extern void op_load_T2_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir20: {
    extern void op_store_T0_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir20: {
    extern void op_store_T1_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir20: {
    extern void op_store_T2_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir20+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir20: {
    extern void op_cmov_ir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir20+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir20: {
    extern void op_load_FT0_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir20: {
    extern void op_load_FT1_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir20: {
    extern void op_load_FT2_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir20: {
    extern void op_store_FT0_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir20: {
    extern void op_store_FT1_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir20: {
    extern void op_store_FT2_fir20();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir20+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir20: {
    extern void op_cmov_fir20();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir20+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir21: {
    extern void op_load_T0_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir21: {
    extern void op_load_T1_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir21: {
    extern void op_load_T2_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir21: {
    extern void op_store_T0_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir21: {
    extern void op_store_T1_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir21: {
    extern void op_store_T2_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir21+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir21: {
    extern void op_cmov_ir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir21+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir21: {
    extern void op_load_FT0_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir21: {
    extern void op_load_FT1_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir21: {
    extern void op_load_FT2_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir21: {
    extern void op_store_FT0_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir21: {
    extern void op_store_FT1_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir21: {
    extern void op_store_FT2_fir21();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir21+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir21: {
    extern void op_cmov_fir21();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir21+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir22: {
    extern void op_load_T0_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir22: {
    extern void op_load_T1_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir22: {
    extern void op_load_T2_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir22: {
    extern void op_store_T0_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir22: {
    extern void op_store_T1_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir22: {
    extern void op_store_T2_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir22+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir22: {
    extern void op_cmov_ir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir22+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir22: {
    extern void op_load_FT0_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir22: {
    extern void op_load_FT1_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir22: {
    extern void op_load_FT2_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir22: {
    extern void op_store_FT0_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir22: {
    extern void op_store_FT1_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir22: {
    extern void op_store_FT2_fir22();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir22+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir22: {
    extern void op_cmov_fir22();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir22+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir23: {
    extern void op_load_T0_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir23: {
    extern void op_load_T1_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir23: {
    extern void op_load_T2_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir23: {
    extern void op_store_T0_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir23: {
    extern void op_store_T1_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir23: {
    extern void op_store_T2_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir23+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir23: {
    extern void op_cmov_ir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir23+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir23: {
    extern void op_load_FT0_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir23: {
    extern void op_load_FT1_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir23: {
    extern void op_load_FT2_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir23: {
    extern void op_store_FT0_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir23: {
    extern void op_store_FT1_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir23: {
    extern void op_store_FT2_fir23();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir23+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir23: {
    extern void op_cmov_fir23();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir23+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir24: {
    extern void op_load_T0_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir24: {
    extern void op_load_T1_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir24: {
    extern void op_load_T2_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir24: {
    extern void op_store_T0_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir24: {
    extern void op_store_T1_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir24: {
    extern void op_store_T2_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir24+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir24: {
    extern void op_cmov_ir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir24+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir24: {
    extern void op_load_FT0_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir24: {
    extern void op_load_FT1_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir24: {
    extern void op_load_FT2_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir24: {
    extern void op_store_FT0_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir24: {
    extern void op_store_FT1_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir24: {
    extern void op_store_FT2_fir24();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir24+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir24: {
    extern void op_cmov_fir24();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir24+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir25: {
    extern void op_load_T0_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir25: {
    extern void op_load_T1_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir25: {
    extern void op_load_T2_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir25: {
    extern void op_store_T0_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir25: {
    extern void op_store_T1_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir25: {
    extern void op_store_T2_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir25+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir25: {
    extern void op_cmov_ir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir25+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir25: {
    extern void op_load_FT0_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir25: {
    extern void op_load_FT1_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir25: {
    extern void op_load_FT2_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir25: {
    extern void op_store_FT0_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir25: {
    extern void op_store_FT1_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir25: {
    extern void op_store_FT2_fir25();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir25+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir25: {
    extern void op_cmov_fir25();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir25+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir26: {
    extern void op_load_T0_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir26: {
    extern void op_load_T1_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir26: {
    extern void op_load_T2_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir26: {
    extern void op_store_T0_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir26: {
    extern void op_store_T1_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir26: {
    extern void op_store_T2_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir26+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir26: {
    extern void op_cmov_ir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir26+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir26: {
    extern void op_load_FT0_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir26: {
    extern void op_load_FT1_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir26: {
    extern void op_load_FT2_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir26: {
    extern void op_store_FT0_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir26: {
    extern void op_store_FT1_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir26: {
    extern void op_store_FT2_fir26();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir26+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir26: {
    extern void op_cmov_fir26();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir26+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir27: {
    extern void op_load_T0_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir27: {
    extern void op_load_T1_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir27: {
    extern void op_load_T2_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir27: {
    extern void op_store_T0_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir27: {
    extern void op_store_T1_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir27: {
    extern void op_store_T2_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir27+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir27: {
    extern void op_cmov_ir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir27+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir27: {
    extern void op_load_FT0_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir27: {
    extern void op_load_FT1_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir27: {
    extern void op_load_FT2_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir27: {
    extern void op_store_FT0_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir27: {
    extern void op_store_FT1_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir27: {
    extern void op_store_FT2_fir27();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir27+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir27: {
    extern void op_cmov_fir27();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir27+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir28: {
    extern void op_load_T0_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir28: {
    extern void op_load_T1_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir28: {
    extern void op_load_T2_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir28: {
    extern void op_store_T0_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir28: {
    extern void op_store_T1_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir28: {
    extern void op_store_T2_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir28+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir28: {
    extern void op_cmov_ir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir28+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir28: {
    extern void op_load_FT0_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir28: {
    extern void op_load_FT1_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir28: {
    extern void op_load_FT2_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir28: {
    extern void op_store_FT0_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir28: {
    extern void op_store_FT1_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir28: {
    extern void op_store_FT2_fir28();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir28+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir28: {
    extern void op_cmov_fir28();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir28+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir29: {
    extern void op_load_T0_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir29: {
    extern void op_load_T1_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir29: {
    extern void op_load_T2_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir29: {
    extern void op_store_T0_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir29: {
    extern void op_store_T1_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir29: {
    extern void op_store_T2_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir29+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir29: {
    extern void op_cmov_ir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir29+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir29: {
    extern void op_load_FT0_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir29: {
    extern void op_load_FT1_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir29: {
    extern void op_load_FT2_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir29: {
    extern void op_store_FT0_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir29: {
    extern void op_store_FT1_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir29: {
    extern void op_store_FT2_fir29();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir29+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir29: {
    extern void op_cmov_fir29();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir29+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_load_T0_ir30: {
    extern void op_load_T0_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T0_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T1_ir30: {
    extern void op_load_T1_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T1_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_load_T2_ir30: {
    extern void op_load_T2_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_T2_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T0_ir30: {
    extern void op_store_T0_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T0_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T1_ir30: {
    extern void op_store_T1_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T1_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_store_T2_ir30: {
    extern void op_store_T2_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_T2_ir30+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_cmov_ir30: {
    extern void op_cmov_ir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_ir30+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_load_FT0_fir30: {
    extern void op_load_FT0_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT0_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT1_fir30: {
    extern void op_load_FT1_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT1_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_load_FT2_fir30: {
    extern void op_load_FT2_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_load_FT2_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT0_fir30: {
    extern void op_store_FT0_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT0_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT1_fir30: {
    extern void op_store_FT1_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT1_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_store_FT2_fir30: {
    extern void op_store_FT2_fir30();
    memcpy(gen_code_ptr, (void *)((char *)&op_store_FT2_fir30+0), 13);
    gen_code_ptr += 13;
}
break;

case INDEX_op_cmov_fir30: {
    extern void op_cmov_fir30();
extern char helper_cmov_fir;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmov_fir30+0), 17);
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_cmov_fir) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 17;
}
break;

case INDEX_op_no_op: {
    extern void op_no_op();
    memcpy(gen_code_ptr, (void *)((char *)&op_no_op+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_tb_flush: {
    extern void op_tb_flush();
extern char helper_tb_flush;
    memcpy(gen_code_ptr, (void *)((char *)&op_tb_flush+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_tb_flush) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_ldbu_raw: {
    extern void op_ldbu_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldbu_raw+0), 53);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 53;
}
break;

case INDEX_op_stb_raw: {
    extern void op_stb_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stb_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_ldwu_raw: {
    extern void op_ldwu_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldwu_raw+0), 53);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 53;
}
break;

case INDEX_op_stw_raw: {
    extern void op_stw_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stw_raw+0), 46);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_ldl_raw: {
    extern void op_ldl_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldl_raw+0), 52);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_stl_raw: {
    extern void op_stl_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stl_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_ldq_raw: {
    extern void op_ldq_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_raw+0), 54);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_stq_raw: {
    extern void op_stq_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_raw+0), 54);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_ldq_u_raw: {
    extern void op_ldq_u_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_u_raw+0), 54);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_stq_u_raw: {
    extern void op_stq_u_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_u_raw+0), 54);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_ldl_l_raw: {
    extern void op_ldl_l_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldl_l_raw+0), 71);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 71;
}
break;

case INDEX_op_ldq_l_raw: {
    extern void op_ldq_l_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldq_l_raw+0), 71);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 71;
}
break;

case INDEX_op_stl_c_raw: {
    extern void op_stl_c_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stl_c_raw+0), 156);
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 35) + -4;
    gen_code_ptr += 156;
}
break;

case INDEX_op_stq_c_raw: {
    extern void op_stq_c_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stq_c_raw+0), 173);
    *(uint32_t *)(gen_code_ptr + 31) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 31) + -4;
    gen_code_ptr += 173;
}
break;

case INDEX_op_ldt_raw: {
    extern void op_ldt_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldt_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_stt_raw: {
    extern void op_stt_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_stt_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_lds_raw: {
    extern void op_lds_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_lds_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_sts_raw: {
    extern void op_sts_raw();
extern char helper_print_mem_EA;
    memcpy(gen_code_ptr, (void *)((char *)&op_sts_raw+0), 45);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 45;
}
break;

case INDEX_op_ldf_raw: {
    extern void op_ldf_raw();
extern char helper_print_mem_EA;
extern char helper_ldff_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldf_raw+0), 61);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    *(uint32_t *)(gen_code_ptr + 47) = (long)(&helper_ldff_raw) - (long)(gen_code_ptr + 47) + -4;
    gen_code_ptr += 61;
}
break;

case INDEX_op_stf_raw: {
    extern void op_stf_raw();
extern char helper_print_mem_EA;
extern char helper_stff_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stf_raw+0), 65);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&helper_stff_raw) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 65;
}
break;

case INDEX_op_ldg_raw: {
    extern void op_ldg_raw();
extern char helper_print_mem_EA;
extern char helper_ldfg_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldg_raw+0), 61);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    *(uint32_t *)(gen_code_ptr + 47) = (long)(&helper_ldfg_raw) - (long)(gen_code_ptr + 47) + -4;
    gen_code_ptr += 61;
}
break;

case INDEX_op_stg_raw: {
    extern void op_stg_raw();
extern char helper_print_mem_EA;
extern char helper_stfg_raw;
    memcpy(gen_code_ptr, (void *)((char *)&op_stg_raw+0), 65);
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_print_mem_EA) - (long)(gen_code_ptr + 23) + -4;
    *(uint32_t *)(gen_code_ptr + 57) = (long)(&helper_stfg_raw) - (long)(gen_code_ptr + 57) + -4;
    gen_code_ptr += 65;
}
break;

case INDEX_op_n7: {
    extern void op_n7();
    memcpy(gen_code_ptr, (void *)((char *)&op_n7+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_excp: {
    long param1, param2;
    extern void op_excp();
extern char helper_excp;
    memcpy(gen_code_ptr, (void *)((char *)&op_excp+0), 28);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&helper_excp) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 28;
}
break;

case INDEX_op_load_amask: {
    extern void op_load_amask();
extern char helper_amask;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_amask+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_amask) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_pcc: {
    extern void op_load_pcc();
extern char helper_load_pcc;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_pcc+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_load_pcc) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_implver: {
    extern void op_load_implver();
extern char helper_load_implver;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_implver+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_load_implver) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_fpcr: {
    extern void op_load_fpcr();
extern char helper_load_fpcr;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_fpcr+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_load_fpcr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_store_fpcr: {
    extern void op_store_fpcr();
extern char helper_store_fpcr;
    memcpy(gen_code_ptr, (void *)((char *)&op_store_fpcr+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_store_fpcr) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_load_irf: {
    extern void op_load_irf();
extern char helper_load_irf;
    memcpy(gen_code_ptr, (void *)((char *)&op_load_irf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_load_irf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_set_irf: {
    extern void op_set_irf();
extern char helper_set_irf;
    memcpy(gen_code_ptr, (void *)((char *)&op_set_irf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_set_irf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_clear_irf: {
    extern void op_clear_irf();
extern char helper_clear_irf;
    memcpy(gen_code_ptr, (void *)((char *)&op_clear_irf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_clear_irf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_exit_tb: {
    extern void op_exit_tb();
    memcpy(gen_code_ptr, (void *)((char *)&op_exit_tb+0), 1);
    gen_code_ptr += 1;
}
break;

case INDEX_op_addq: {
    extern void op_addq();
    memcpy(gen_code_ptr, (void *)((char *)&op_addq+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_addqv: {
    extern void op_addqv();
extern char helper_addqv;
    memcpy(gen_code_ptr, (void *)((char *)&op_addqv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_addqv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_addl: {
    extern void op_addl();
    memcpy(gen_code_ptr, (void *)((char *)&op_addl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_addlv: {
    extern void op_addlv();
extern char helper_addlv;
    memcpy(gen_code_ptr, (void *)((char *)&op_addlv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_addlv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_subq: {
    extern void op_subq();
    memcpy(gen_code_ptr, (void *)((char *)&op_subq+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_subqv: {
    extern void op_subqv();
extern char helper_subqv;
    memcpy(gen_code_ptr, (void *)((char *)&op_subqv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_subqv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_subl: {
    extern void op_subl();
    memcpy(gen_code_ptr, (void *)((char *)&op_subl+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_sublv: {
    extern void op_sublv();
extern char helper_sublv;
    memcpy(gen_code_ptr, (void *)((char *)&op_sublv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_sublv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_s4: {
    extern void op_s4();
    memcpy(gen_code_ptr, (void *)((char *)&op_s4+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_s8: {
    extern void op_s8();
    memcpy(gen_code_ptr, (void *)((char *)&op_s8+0), 32);
    gen_code_ptr += 32;
}
break;

case INDEX_op_mull: {
    extern void op_mull();
    memcpy(gen_code_ptr, (void *)((char *)&op_mull+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_mullv: {
    extern void op_mullv();
extern char helper_mullv;
    memcpy(gen_code_ptr, (void *)((char *)&op_mullv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mullv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mulq: {
    extern void op_mulq();
    memcpy(gen_code_ptr, (void *)((char *)&op_mulq+0), 94);
    gen_code_ptr += 94;
}
break;

case INDEX_op_mulqv: {
    extern void op_mulqv();
extern char helper_mulqv;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulqv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mulqv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_umulh: {
    extern void op_umulh();
extern char helper_umulh;
    memcpy(gen_code_ptr, (void *)((char *)&op_umulh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_umulh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_and: {
    extern void op_and();
    memcpy(gen_code_ptr, (void *)((char *)&op_and+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_bic: {
    extern void op_bic();
    memcpy(gen_code_ptr, (void *)((char *)&op_bic+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_bis: {
    extern void op_bis();
    memcpy(gen_code_ptr, (void *)((char *)&op_bis+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_eqv: {
    extern void op_eqv();
    memcpy(gen_code_ptr, (void *)((char *)&op_eqv+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_ornot: {
    extern void op_ornot();
    memcpy(gen_code_ptr, (void *)((char *)&op_ornot+0), 47);
    gen_code_ptr += 47;
}
break;

case INDEX_op_xor: {
    extern void op_xor();
    memcpy(gen_code_ptr, (void *)((char *)&op_xor+0), 43);
    gen_code_ptr += 43;
}
break;

case INDEX_op_sll: {
    extern void op_sll();
    memcpy(gen_code_ptr, (void *)((char *)&op_sll+0), 45);
    gen_code_ptr += 45;
}
break;

case INDEX_op_srl: {
    extern void op_srl();
    memcpy(gen_code_ptr, (void *)((char *)&op_srl+0), 45);
    gen_code_ptr += 45;
}
break;

case INDEX_op_sra: {
    extern void op_sra();
    memcpy(gen_code_ptr, (void *)((char *)&op_sra+0), 46);
    gen_code_ptr += 46;
}
break;

case INDEX_op_sextb: {
    extern void op_sextb();
    memcpy(gen_code_ptr, (void *)((char *)&op_sextb+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_sextw: {
    extern void op_sextw();
    memcpy(gen_code_ptr, (void *)((char *)&op_sextw+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_ctpop: {
    extern void op_ctpop();
extern char helper_ctpop;
    memcpy(gen_code_ptr, (void *)((char *)&op_ctpop+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_ctpop) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_ctlz: {
    extern void op_ctlz();
extern char helper_ctlz;
    memcpy(gen_code_ptr, (void *)((char *)&op_ctlz+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_ctlz) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cttz: {
    extern void op_cttz();
extern char helper_cttz;
    memcpy(gen_code_ptr, (void *)((char *)&op_cttz+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cttz) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskbl: {
    extern void op_mskbl();
extern char helper_mskbl;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskbl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskbl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extbl: {
    extern void op_extbl();
extern char helper_extbl;
    memcpy(gen_code_ptr, (void *)((char *)&op_extbl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extbl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_insbl: {
    extern void op_insbl();
extern char helper_insbl;
    memcpy(gen_code_ptr, (void *)((char *)&op_insbl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_insbl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskwl: {
    extern void op_mskwl();
extern char helper_mskwl;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskwl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskwl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extwl: {
    extern void op_extwl();
extern char helper_extwl;
    memcpy(gen_code_ptr, (void *)((char *)&op_extwl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extwl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_inswl: {
    extern void op_inswl();
extern char helper_inswl;
    memcpy(gen_code_ptr, (void *)((char *)&op_inswl+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_inswl) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskll: {
    extern void op_mskll();
extern char helper_mskll;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskll+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskll) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extll: {
    extern void op_extll();
extern char helper_extll;
    memcpy(gen_code_ptr, (void *)((char *)&op_extll+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extll) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_insll: {
    extern void op_insll();
extern char helper_insll;
    memcpy(gen_code_ptr, (void *)((char *)&op_insll+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_insll) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_zap: {
    extern void op_zap();
extern char helper_zap;
    memcpy(gen_code_ptr, (void *)((char *)&op_zap+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_zap) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_zapnot: {
    extern void op_zapnot();
extern char helper_zapnot;
    memcpy(gen_code_ptr, (void *)((char *)&op_zapnot+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_zapnot) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskql: {
    extern void op_mskql();
extern char helper_mskql;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskql+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskql) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extql: {
    extern void op_extql();
extern char helper_extql;
    memcpy(gen_code_ptr, (void *)((char *)&op_extql+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extql) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_insql: {
    extern void op_insql();
extern char helper_insql;
    memcpy(gen_code_ptr, (void *)((char *)&op_insql+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_insql) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskwh: {
    extern void op_mskwh();
extern char helper_mskwh;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskwh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskwh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_inswh: {
    extern void op_inswh();
extern char helper_inswh;
    memcpy(gen_code_ptr, (void *)((char *)&op_inswh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_inswh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extwh: {
    extern void op_extwh();
extern char helper_extwh;
    memcpy(gen_code_ptr, (void *)((char *)&op_extwh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extwh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_msklh: {
    extern void op_msklh();
extern char helper_msklh;
    memcpy(gen_code_ptr, (void *)((char *)&op_msklh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_msklh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_inslh: {
    extern void op_inslh();
extern char helper_inslh;
    memcpy(gen_code_ptr, (void *)((char *)&op_inslh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_inslh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extlh: {
    extern void op_extlh();
extern char helper_extlh;
    memcpy(gen_code_ptr, (void *)((char *)&op_extlh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extlh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mskqh: {
    extern void op_mskqh();
extern char helper_mskqh;
    memcpy(gen_code_ptr, (void *)((char *)&op_mskqh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mskqh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_insqh: {
    extern void op_insqh();
extern char helper_insqh;
    memcpy(gen_code_ptr, (void *)((char *)&op_insqh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_insqh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_extqh: {
    extern void op_extqh();
extern char helper_extqh;
    memcpy(gen_code_ptr, (void *)((char *)&op_extqh+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_extqh) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpult: {
    extern void op_cmpult();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpult+0), 74);
    gen_code_ptr += 74;
}
break;

case INDEX_op_cmpule: {
    extern void op_cmpule();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpule+0), 74);
    gen_code_ptr += 74;
}
break;

case INDEX_op_cmpeq: {
    extern void op_cmpeq();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeq+0), 73);
    gen_code_ptr += 73;
}
break;

case INDEX_op_cmplt: {
    extern void op_cmplt();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplt+0), 74);
    gen_code_ptr += 74;
}
break;

case INDEX_op_cmple: {
    extern void op_cmple();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmple+0), 74);
    gen_code_ptr += 74;
}
break;

case INDEX_op_cmpbge: {
    extern void op_cmpbge();
extern char helper_cmpbge;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpbge+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpbge) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpeqz: {
    extern void op_cmpeqz();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpeqz+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_cmpnez: {
    extern void op_cmpnez();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpnez+0), 37);
    gen_code_ptr += 37;
}
break;

case INDEX_op_cmpltz: {
    extern void op_cmpltz();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpltz+0), 27);
    gen_code_ptr += 27;
}
break;

case INDEX_op_cmplez: {
    extern void op_cmplez();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplez+0), 61);
    gen_code_ptr += 61;
}
break;

case INDEX_op_cmpgtz: {
    extern void op_cmpgtz();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpgtz+0), 77);
    gen_code_ptr += 77;
}
break;

case INDEX_op_cmpgez: {
    extern void op_cmpgez();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpgez+0), 29);
    gen_code_ptr += 29;
}
break;

case INDEX_op_cmplbs: {
    extern void op_cmplbs();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplbs+0), 24);
    gen_code_ptr += 24;
}
break;

case INDEX_op_cmplbc: {
    extern void op_cmplbc();
    memcpy(gen_code_ptr, (void *)((char *)&op_cmplbc+0), 26);
    gen_code_ptr += 26;
}
break;

case INDEX_op_branch: {
    extern void op_branch();
    memcpy(gen_code_ptr, (void *)((char *)&op_branch+0), 28);
    gen_code_ptr += 28;
}
break;

case INDEX_op_addq1: {
    extern void op_addq1();
    memcpy(gen_code_ptr, (void *)((char *)&op_addq1+0), 25);
    gen_code_ptr += 25;
}
break;

case INDEX_op_bcond: {
    long param1, param2;
    extern void op_bcond();
    memcpy(gen_code_ptr, (void *)((char *)&op_bcond+0), 85);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 49) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 54) = param1 + 0;
    gen_code_ptr += 85;
}
break;

case INDEX_op_update_pc: {
    long param1, param2;
    extern void op_update_pc();
    memcpy(gen_code_ptr, (void *)((char *)&op_update_pc+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 2) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    gen_code_ptr += 38;
}
break;

case INDEX_op_update_pc32: {
    long param1;
    extern void op_update_pc32();
    memcpy(gen_code_ptr, (void *)((char *)&op_update_pc32+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    gen_code_ptr += 19;
}
break;

case INDEX_op_adds: {
    extern void op_adds();
    memcpy(gen_code_ptr, (void *)((char *)&op_adds+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_subs: {
    extern void op_subs();
    memcpy(gen_code_ptr, (void *)((char *)&op_subs+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_muls: {
    extern void op_muls();
    memcpy(gen_code_ptr, (void *)((char *)&op_muls+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_divs: {
    extern void op_divs();
    memcpy(gen_code_ptr, (void *)((char *)&op_divs+0), 39);
    gen_code_ptr += 39;
}
break;

case INDEX_op_sqrts: {
    extern void op_sqrts();
extern char helper_sqrts;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrts+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_sqrts) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cpys: {
    extern void op_cpys();
extern char helper_cpys;
    memcpy(gen_code_ptr, (void *)((char *)&op_cpys+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cpys) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cpysn: {
    extern void op_cpysn();
extern char helper_cpysn;
    memcpy(gen_code_ptr, (void *)((char *)&op_cpysn+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cpysn) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cpyse: {
    extern void op_cpyse();
extern char helper_cpyse;
    memcpy(gen_code_ptr, (void *)((char *)&op_cpyse+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cpyse) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_itofs: {
    extern void op_itofs();
extern char helper_itofs;
    memcpy(gen_code_ptr, (void *)((char *)&op_itofs+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_itofs) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_ftois: {
    extern void op_ftois();
extern char helper_ftois;
    memcpy(gen_code_ptr, (void *)((char *)&op_ftois+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_ftois) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_addt: {
    extern void op_addt();
    memcpy(gen_code_ptr, (void *)((char *)&op_addt+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_subt: {
    extern void op_subt();
    memcpy(gen_code_ptr, (void *)((char *)&op_subt+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_mult: {
    extern void op_mult();
    memcpy(gen_code_ptr, (void *)((char *)&op_mult+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_divt: {
    extern void op_divt();
    memcpy(gen_code_ptr, (void *)((char *)&op_divt+0), 19);
    gen_code_ptr += 19;
}
break;

case INDEX_op_sqrtt: {
    extern void op_sqrtt();
extern char helper_sqrtt;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_sqrtt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmptun: {
    extern void op_cmptun();
extern char helper_cmptun;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmptun+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmptun) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpteq: {
    extern void op_cmpteq();
extern char helper_cmpteq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpteq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpteq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmptle: {
    extern void op_cmptle();
extern char helper_cmptle;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmptle+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmptle) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmptlt: {
    extern void op_cmptlt();
extern char helper_cmptlt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmptlt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmptlt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_itoft: {
    extern void op_itoft();
extern char helper_itoft;
    memcpy(gen_code_ptr, (void *)((char *)&op_itoft+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_itoft) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_ftoit: {
    extern void op_ftoit();
extern char helper_ftoit;
    memcpy(gen_code_ptr, (void *)((char *)&op_ftoit+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_ftoit) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_addf: {
    extern void op_addf();
extern char helper_addf;
    memcpy(gen_code_ptr, (void *)((char *)&op_addf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_addf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_subf: {
    extern void op_subf();
extern char helper_subf;
    memcpy(gen_code_ptr, (void *)((char *)&op_subf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_subf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mulf: {
    extern void op_mulf();
extern char helper_mulf;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mulf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_divf: {
    extern void op_divf();
extern char helper_divf;
    memcpy(gen_code_ptr, (void *)((char *)&op_divf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_divf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_sqrtf: {
    extern void op_sqrtf();
extern char helper_sqrtf;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_sqrtf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpfeq: {
    extern void op_cmpfeq();
extern char helper_cmpfeq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpfeq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpfeq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpfne: {
    extern void op_cmpfne();
extern char helper_cmpfne;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpfne+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpfne) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpflt: {
    extern void op_cmpflt();
extern char helper_cmpflt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpflt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpflt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpfle: {
    extern void op_cmpfle();
extern char helper_cmpfle;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpfle+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpfle) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpfgt: {
    extern void op_cmpfgt();
extern char helper_cmpfgt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpfgt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpfgt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpfge: {
    extern void op_cmpfge();
extern char helper_cmpfge;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpfge+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpfge) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_itoff: {
    extern void op_itoff();
extern char helper_itoff;
    memcpy(gen_code_ptr, (void *)((char *)&op_itoff+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_itoff) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_addg: {
    extern void op_addg();
extern char helper_addg;
    memcpy(gen_code_ptr, (void *)((char *)&op_addg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_addg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_subg: {
    extern void op_subg();
extern char helper_subg;
    memcpy(gen_code_ptr, (void *)((char *)&op_subg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_subg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_mulg: {
    extern void op_mulg();
extern char helper_mulg;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_mulg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_divg: {
    extern void op_divg();
extern char helper_divg;
    memcpy(gen_code_ptr, (void *)((char *)&op_divg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_divg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_sqrtg: {
    extern void op_sqrtg();
extern char helper_sqrtg;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_sqrtg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpgeq: {
    extern void op_cmpgeq();
extern char helper_cmpgeq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpgeq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpgeq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpglt: {
    extern void op_cmpglt();
extern char helper_cmpglt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpglt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpglt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cmpgle: {
    extern void op_cmpgle();
extern char helper_cmpgle;
    memcpy(gen_code_ptr, (void *)((char *)&op_cmpgle+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cmpgle) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtst: {
    extern void op_cvtst();
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtst+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_cvtqs: {
    extern void op_cvtqs();
extern char helper_cvtqs;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqs+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqs) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtts: {
    extern void op_cvtts();
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtts+0), 23);
    gen_code_ptr += 23;
}
break;

case INDEX_op_cvttq: {
    extern void op_cvttq();
extern char helper_cvttq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvttq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvttq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtqt: {
    extern void op_cvtqt();
extern char helper_cvtqt;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqt+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqt) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtqf: {
    extern void op_cvtqf();
extern char helper_cvtqf;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtgf: {
    extern void op_cvtgf();
extern char helper_cvtgf;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtgf+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtgf) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtgd: {
    extern void op_cvtgd();
extern char helper_cvtgd;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtgd+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtgd) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtgq: {
    extern void op_cvtgq();
extern char helper_cvtgq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtgq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtgq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtqg: {
    extern void op_cvtqg();
extern char helper_cvtqg;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtdg: {
    extern void op_cvtdg();
extern char helper_cvtdg;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtdg+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtdg) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtlq: {
    extern void op_cvtlq();
extern char helper_cvtlq;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtlq+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtlq) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtql: {
    extern void op_cvtql();
extern char helper_cvtql;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtql+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtql) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtqlv: {
    extern void op_cvtqlv();
extern char helper_cvtqlv;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqlv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqlv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
}
break;

case INDEX_op_cvtqlsv: {
    extern void op_cvtqlsv();
extern char helper_cvtqlsv;
    memcpy(gen_code_ptr, (void *)((char *)&op_cvtqlsv+0), 6);
    *(uint32_t *)(gen_code_ptr + 1) = (long)(&helper_cvtqlsv) - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 6;
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

