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
case INDEX_op_mov32: {
    long param1, param2;
    extern void op_mov32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_mov32+0), 34);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 22) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 27) = (long)(&helper_set_op) - (long)(gen_code_ptr + 27) + -4;
    gen_code_ptr += 34;
}
break;

case INDEX_op_mov32_im: {
    long param1, param2;
    extern void op_mov32_im();
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_mov32_im+0), 27);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 15) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 20) = (long)(&helper_set_op) - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_movf64: {
    long param1, param2;
    extern void op_movf64();
extern char helper_get_opf64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_movf64+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 31) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 31) + -4;
    gen_code_ptr += 38;
}
break;

case INDEX_op_zerof64: {
    long param1;
    extern void op_zerof64();
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_zerof64+0), 30);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 23) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 23) + -4;
    gen_code_ptr += 30;
}
break;

case INDEX_op_add32: {
    long param1, param2, param3;
    extern void op_add32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_add32+0), 53);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&helper_set_op) - (long)(gen_code_ptr + 45) + -4;
    gen_code_ptr += 53;
}
break;

case INDEX_op_sub32: {
    long param1, param2, param3;
    extern void op_sub32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_sub32+0), 52);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&helper_set_op) - (long)(gen_code_ptr + 44) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_mul32: {
    long param1, param2, param3;
    extern void op_mul32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_mul32+0), 53);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 45) = (long)(&helper_set_op) - (long)(gen_code_ptr + 45) + -4;
    gen_code_ptr += 53;
}
break;

case INDEX_op_not32: {
    long param1, param2;
    extern void op_not32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_not32+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&helper_set_op) - (long)(gen_code_ptr + 29) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_neg32: {
    long param1, param2;
    extern void op_neg32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_neg32+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&helper_set_op) - (long)(gen_code_ptr + 29) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_bswap32: {
    long param1, param2;
    extern void op_bswap32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_bswap32+0), 69);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 62) = (long)(&helper_set_op) - (long)(gen_code_ptr + 62) + -4;
    gen_code_ptr += 69;
}
break;

case INDEX_op_btest: {
    long param1, param2;
    extern void op_btest();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_btest+0), 46);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 46;
}
break;

case INDEX_op_addx_cc: {
    long param1, param2;
    extern void op_addx_cc();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_addx_cc+0), 104);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 91) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 96) = (long)(&helper_set_op) - (long)(gen_code_ptr + 96) + -4;
    gen_code_ptr += 104;
}
break;

case INDEX_op_subx_cc: {
    long param1, param2;
    extern void op_subx_cc();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_subx_cc+0), 102);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 89) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 94) = (long)(&helper_set_op) - (long)(gen_code_ptr + 94) + -4;
    gen_code_ptr += 102;
}
break;

case INDEX_op_and32: {
    long param1, param2, param3;
    extern void op_and32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_and32+0), 52);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&helper_set_op) - (long)(gen_code_ptr + 44) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_or32: {
    long param1, param2, param3;
    extern void op_or32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_or32+0), 52);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&helper_set_op) - (long)(gen_code_ptr + 44) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_xor32: {
    long param1, param2, param3;
    extern void op_xor32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_xor32+0), 52);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 44) = (long)(&helper_set_op) - (long)(gen_code_ptr + 44) + -4;
    gen_code_ptr += 52;
}
break;

case INDEX_op_shl32: {
    long param1, param2, param3;
    extern void op_shl32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_shl32+0), 54);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&helper_set_op) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_shl_cc: {
    long param1, param2;
    extern void op_shl_cc();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_shl_cc+0), 83);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_op) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&helper_get_op) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 58) = (long)(&helper_set_op) - (long)(gen_code_ptr + 58) + -4;
    gen_code_ptr += 83;
}
break;

case INDEX_op_shr32: {
    long param1, param2, param3;
    extern void op_shr32();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_shr32+0), 54);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 46) = (long)(&helper_set_op) - (long)(gen_code_ptr + 46) + -4;
    gen_code_ptr += 54;
}
break;

case INDEX_op_shr_cc: {
    long param1, param2;
    extern void op_shr_cc();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_shr_cc+0), 83);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_op) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&helper_get_op) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 58) = (long)(&helper_set_op) - (long)(gen_code_ptr + 58) + -4;
    gen_code_ptr += 83;
}
break;

case INDEX_op_sar_cc: {
    long param1, param2;
    extern void op_sar_cc();
extern char helper_get_op;
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_sar_cc+0), 83);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_op) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&helper_get_op) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 40) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 58) = (long)(&helper_set_op) - (long)(gen_code_ptr + 58) + -4;
    gen_code_ptr += 83;
}
break;

case INDEX_op_ext8u32: {
    long param1, param2;
    extern void op_ext8u32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ext8u32+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&helper_set_op) - (long)(gen_code_ptr + 30) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_ext8s32: {
    long param1, param2;
    extern void op_ext8s32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ext8s32+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&helper_set_op) - (long)(gen_code_ptr + 30) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_ext16u32: {
    long param1, param2;
    extern void op_ext16u32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ext16u32+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&helper_set_op) - (long)(gen_code_ptr + 30) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_ext16s32: {
    long param1, param2;
    extern void op_ext16s32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ext16s32+0), 35);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 18) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 28) = (long)(&helper_set_op) - (long)(gen_code_ptr + 28) + -4;
    gen_code_ptr += 35;
}
break;

case INDEX_op_ld8u32: {
    long param1, param2;
    extern void op_ld8u32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld8u32+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&helper_set_op) - (long)(gen_code_ptr + 30) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_ld8s32: {
    long param1, param2;
    extern void op_ld8s32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld8s32+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 21) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&helper_set_op) - (long)(gen_code_ptr + 30) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_ld16u32: {
    long param1, param2;
    extern void op_ld16u32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld16u32+0), 39);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 27) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 32) = (long)(&helper_set_op) - (long)(gen_code_ptr + 32) + -4;
    gen_code_ptr += 39;
}
break;

case INDEX_op_ld16s32: {
    long param1, param2;
    extern void op_ld16s32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld16s32+0), 40);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 23) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&helper_set_op) - (long)(gen_code_ptr + 33) + -4;
    gen_code_ptr += 40;
}
break;

case INDEX_op_ld32: {
    long param1, param2;
    extern void op_ld32();
extern char helper_get_op;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_ld32+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 31) = (long)(&helper_set_op) - (long)(gen_code_ptr + 31) + -4;
    gen_code_ptr += 38;
}
break;

case INDEX_op_st8: {
    long param1, param2;
    extern void op_st8();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_st8+0), 34);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 34;
}
break;

case INDEX_op_st16: {
    long param1, param2;
    extern void op_st16();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_st16+0), 37);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 37;
}
break;

case INDEX_op_st32: {
    long param1, param2;
    extern void op_st32();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_st32+0), 36);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 36;
}
break;

case INDEX_op_ldf64: {
    long param1, param2;
    extern void op_ldf64();
extern char helper_get_op;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_ldf64+0), 63);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_op) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 43) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 48) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 48) + -4;
    gen_code_ptr += 63;
}
break;

case INDEX_op_stf64: {
    long param1, param2;
    extern void op_stf64();
extern char helper_get_op;
extern char helper_get_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_stf64+0), 43);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 43;
}
break;

case INDEX_op_flush_flags: {
    long param1;
    extern void op_flush_flags();
extern char cpu_m68k_flush_flags;
    memcpy(gen_code_ptr, (void *)((char *)&op_flush_flags+0), 23);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 4) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 16) = (long)(&cpu_m68k_flush_flags) - (long)(gen_code_ptr + 16) + -4;
    gen_code_ptr += 23;
}
break;

case INDEX_op_divu: {
    long param1;
    extern void op_divu();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_divu+0), 119);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 30) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 30) + -4;
    *(uint32_t *)(gen_code_ptr + 49) = param1 + 0;
    gen_code_ptr += 119;
}
break;

case INDEX_op_divs: {
    long param1;
    extern void op_divs();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_divs+0), 135);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 38) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 38) + -4;
    *(uint32_t *)(gen_code_ptr + 56) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 75) = param1 + 0;
    gen_code_ptr += 135;
}
break;

case INDEX_op_raise_exception: {
    long param1;
    extern void op_raise_exception();
extern char cpu_loop_exit;
    memcpy(gen_code_ptr, (void *)((char *)&op_raise_exception+0), 16);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&cpu_loop_exit) - (long)(gen_code_ptr + 12) + -4;
    gen_code_ptr += 16;
}
break;

case INDEX_op_sub_cmpf64: {
    long param1, param2, param3;
    extern void op_sub_cmpf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char helper_sub_cmpf64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_sub_cmpf64+0), 94);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 59) = (long)(&helper_sub_cmpf64) - (long)(gen_code_ptr + 59) + -4;
    *(uint32_t *)(gen_code_ptr + 74) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 79) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 79) + -4;
    gen_code_ptr += 94;
}
break;

case INDEX_op_update_xflag_tst: {
    long param1;
    extern void op_update_xflag_tst();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_update_xflag_tst+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 19;
}
break;

case INDEX_op_update_xflag_lt: {
    long param1, param2;
    extern void op_update_xflag_lt();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_update_xflag_lt+0), 43);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 43;
}
break;

case INDEX_op_get_xflag: {
    long param1;
    extern void op_get_xflag();
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_get_xflag+0), 25);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 9) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 18) = (long)(&helper_set_op) - (long)(gen_code_ptr + 18) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_logic_cc: {
    long param1;
    extern void op_logic_cc();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_logic_cc+0), 19);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 19;
}
break;

case INDEX_op_update_cc_add: {
    long param1, param2;
    extern void op_update_cc_add();
extern char helper_get_op;
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_update_cc_add+0), 38);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 7) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 12) = (long)(&helper_get_op) - (long)(gen_code_ptr + 12) + -4;
    *(uint32_t *)(gen_code_ptr + 19) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 26) = (long)(&helper_get_op) - (long)(gen_code_ptr + 26) + -4;
    gen_code_ptr += 38;
}
break;

case INDEX_op_fp_result: {
    long param1;
    extern void op_fp_result();
extern char helper_get_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_fp_result+0), 28);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    gen_code_ptr += 28;
}
break;

case INDEX_op_jmp: {
    long param1;
    extern void op_jmp();
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp+0), 5);
    param1 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 1) = gen_labels[param1] - (long)(gen_code_ptr + 1) + -4;
    gen_code_ptr += 5;
}
break;

case INDEX_op_jmp_z32: {
    long param1, param2;
    extern void op_jmp_z32();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_z32+0), 25);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 20) = gen_labels[param2] - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_jmp_nz32: {
    long param1, param2;
    extern void op_jmp_nz32();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_nz32+0), 25);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 20) = gen_labels[param2] - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 25;
}
break;

case INDEX_op_jmp_s32: {
    long param1, param2;
    extern void op_jmp_s32();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_s32+0), 27);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 20) = gen_labels[param2] - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 27;
}
break;

case INDEX_op_jmp_ns32: {
    long param1, param2;
    extern void op_jmp_ns32();
extern char helper_get_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_jmp_ns32+0), 25);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 20) = gen_labels[param2] - (long)(gen_code_ptr + 20) + -4;
    gen_code_ptr += 25;
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

case INDEX_op_f64_to_i32: {
    long param1, param2;
    extern void op_f64_to_i32();
extern char helper_get_opf64;
extern char float64_to_int32;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_f64_to_i32+0), 56);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_int32) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 49) = (long)(&helper_set_op) - (long)(gen_code_ptr + 49) + -4;
    gen_code_ptr += 56;
}
break;

case INDEX_op_f64_to_f32: {
    long param1, param2;
    extern void op_f64_to_f32();
extern char helper_get_opf64;
extern char float64_to_float32;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_f64_to_f32+0), 56);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_to_float32) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 49) = (long)(&helper_set_op) - (long)(gen_code_ptr + 49) + -4;
    gen_code_ptr += 56;
}
break;

case INDEX_op_i32_to_f64: {
    long param1, param2;
    extern void op_i32_to_f64();
extern char helper_get_op;
extern char int32_to_float64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_i32_to_f64+0), 56);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&int32_to_float64) - (long)(gen_code_ptr + 29) + -4;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 49) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 49) + -4;
    gen_code_ptr += 56;
}
break;

case INDEX_op_f32_to_f64: {
    long param1, param2;
    extern void op_f32_to_f64();
extern char helper_get_op;
extern char float32_to_float64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_f32_to_f64+0), 56);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_op) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 29) = (long)(&float32_to_float64) - (long)(gen_code_ptr + 29) + -4;
    *(uint32_t *)(gen_code_ptr + 44) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 49) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 49) + -4;
    gen_code_ptr += 56;
}
break;

case INDEX_op_absf64: {
    long param1, param2;
    extern void op_absf64();
extern char helper_get_opf64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_absf64+0), 62);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 42) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 47) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 47) + -4;
    gen_code_ptr += 62;
}
break;

case INDEX_op_chsf64: {
    long param1, param2;
    extern void op_chsf64();
extern char helper_get_opf64;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_chsf64+0), 62);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 42) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 47) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 47) + -4;
    gen_code_ptr += 62;
}
break;

case INDEX_op_sqrtf64: {
    long param1, param2;
    extern void op_sqrtf64();
extern char helper_get_opf64;
extern char float64_sqrt;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_sqrtf64+0), 60);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_sqrt) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 60;
}
break;

case INDEX_op_addf64: {
    long param1, param2, param3;
    extern void op_addf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char float64_add;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_addf64+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&float64_add) - (long)(gen_code_ptr + 65) + -4;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 100;
}
break;

case INDEX_op_subf64: {
    long param1, param2, param3;
    extern void op_subf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char float64_sub;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_subf64+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&float64_sub) - (long)(gen_code_ptr + 65) + -4;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 100;
}
break;

case INDEX_op_mulf64: {
    long param1, param2, param3;
    extern void op_mulf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char float64_mul;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_mulf64+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&float64_mul) - (long)(gen_code_ptr + 65) + -4;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 100;
}
break;

case INDEX_op_divf64: {
    long param1, param2, param3;
    extern void op_divf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char float64_div;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_divf64+0), 100);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&float64_div) - (long)(gen_code_ptr + 65) + -4;
    *(uint32_t *)(gen_code_ptr + 80) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 85) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 85) + -4;
    gen_code_ptr += 100;
}
break;

case INDEX_op_iround_f64: {
    long param1, param2;
    extern void op_iround_f64();
extern char helper_get_opf64;
extern char float64_round_to_int;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_iround_f64+0), 60);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_round_to_int) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 60;
}
break;

case INDEX_op_itrunc_f64: {
    long param1, param2;
    extern void op_itrunc_f64();
extern char helper_get_opf64;
extern char float64_trunc_to_int;
extern char helper_set_opf64;
    memcpy(gen_code_ptr, (void *)((char *)&op_itrunc_f64+0), 60);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 6) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 11) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 11) + -4;
    *(uint32_t *)(gen_code_ptr + 33) = (long)(&float64_trunc_to_int) - (long)(gen_code_ptr + 33) + -4;
    *(uint32_t *)(gen_code_ptr + 48) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 53) = (long)(&helper_set_opf64) - (long)(gen_code_ptr + 53) + -4;
    gen_code_ptr += 60;
}
break;

case INDEX_op_compare_quietf64: {
    long param1, param2, param3;
    extern void op_compare_quietf64();
extern char helper_get_opf64;
extern char helper_get_opf64;
extern char float64_compare_quiet;
extern char helper_set_op;
    memcpy(gen_code_ptr, (void *)((char *)&op_compare_quietf64+0), 96);
    param1 = *opparam_ptr++;
    param2 = *opparam_ptr++;
    param3 = *opparam_ptr++;
    *(uint32_t *)(gen_code_ptr + 14) = param2 + 0;
    *(uint32_t *)(gen_code_ptr + 19) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 19) + -4;
    *(uint32_t *)(gen_code_ptr + 26) = param3 + 0;
    *(uint32_t *)(gen_code_ptr + 35) = (long)(&helper_get_opf64) - (long)(gen_code_ptr + 35) + -4;
    *(uint32_t *)(gen_code_ptr + 65) = (long)(&float64_compare_quiet) - (long)(gen_code_ptr + 65) + -4;
    *(uint32_t *)(gen_code_ptr + 76) = param1 + 0;
    *(uint32_t *)(gen_code_ptr + 81) = (long)(&helper_set_op) - (long)(gen_code_ptr + 81) + -4;
    gen_code_ptr += 96;
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

