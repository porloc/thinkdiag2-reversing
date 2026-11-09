// FUN_08027be4 @ 08027be4

undefined8 FUN_08027be4(byte *param_1)

{
  uint uVar1;
  byte local_14 [4];
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_14[0] = *(byte *)(DAT_08028228 + (uint)*param_1) ^
                *(byte *)(DAT_0802822c + (uint)param_1[5]) ^
                *(byte *)(DAT_08028220 + (uint)param_1[10]) ^
                *(byte *)(DAT_08028220 + (uint)param_1[0xf]);
  local_14[1] = *(byte *)(DAT_08028220 + (uint)*param_1) ^
                *(byte *)(DAT_08028228 + (uint)param_1[5]) ^
                *(byte *)(DAT_0802822c + (uint)param_1[10]) ^
                *(byte *)(DAT_08028220 + (uint)param_1[0xf]);
  local_14[2] = *(byte *)(DAT_08028220 + (uint)*param_1) ^
                *(byte *)(DAT_08028220 + (uint)param_1[5]) ^
                *(byte *)(DAT_08028228 + (uint)param_1[10]) ^
                *(byte *)(DAT_0802822c + (uint)param_1[0xf]);
  local_14[3] = *(byte *)(DAT_0802822c + (uint)*param_1) ^
                *(byte *)(DAT_08028220 + (uint)param_1[5]) ^
                *(byte *)(DAT_08028220 + (uint)param_1[10]) ^
                *(byte *)(DAT_08028228 + (uint)param_1[0xf]);
  local_10 = *(byte *)(DAT_08028228 + (uint)param_1[4]) ^ *(byte *)(DAT_0802822c + (uint)param_1[9])
             ^ *(byte *)(DAT_08028220 + (uint)param_1[0xe]) ^
             *(byte *)(DAT_08028220 + (uint)param_1[3]);
  local_f = *(byte *)(DAT_08028220 + (uint)param_1[4]) ^ *(byte *)(DAT_08028228 + (uint)param_1[9])
            ^ *(byte *)(DAT_0802822c + (uint)param_1[0xe]) ^
            *(byte *)(DAT_08028220 + (uint)param_1[3]);
  local_e = *(byte *)(DAT_08028220 + (uint)param_1[4]) ^ *(byte *)(DAT_08028220 + (uint)param_1[9])
            ^ *(byte *)(DAT_08028228 + (uint)param_1[0xe]) ^
            *(byte *)(DAT_0802822c + (uint)param_1[3]);
  local_d = *(byte *)(DAT_0802822c + (uint)param_1[4]) ^ *(byte *)(DAT_08028220 + (uint)param_1[9])
            ^ *(byte *)(DAT_08028220 + (uint)param_1[0xe]) ^
            *(byte *)(DAT_08028228 + (uint)param_1[3]);
  _local_c = CONCAT13(*(byte *)(DAT_0802822c + (uint)param_1[8]) ^
                      *(byte *)(DAT_08028220 + (uint)param_1[0xd]) ^
                      *(byte *)(DAT_08028220 + (uint)param_1[2]) ^
                      *(byte *)(DAT_08028228 + (uint)param_1[7]),
                      CONCAT12(*(byte *)(DAT_08028220 + (uint)param_1[8]) ^
                               *(byte *)(DAT_08028220 + (uint)param_1[0xd]) ^
                               *(byte *)(DAT_08028228 + (uint)param_1[2]) ^
                               *(byte *)(DAT_0802822c + (uint)param_1[7]),
                               CONCAT11(*(byte *)(DAT_08028220 + (uint)param_1[8]) ^
                                        *(byte *)(DAT_08028228 + (uint)param_1[0xd]) ^
                                        *(byte *)(DAT_0802822c + (uint)param_1[2]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[7]),
                                        *(byte *)(DAT_08028228 + (uint)param_1[8]) ^
                                        *(byte *)(DAT_0802822c + (uint)param_1[0xd]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[2]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[7]))));
  _local_8 = CONCAT13(*(byte *)(DAT_0802822c + (uint)param_1[0xc]) ^
                      *(byte *)(DAT_08028220 + (uint)param_1[1]) ^
                      *(byte *)(DAT_08028220 + (uint)param_1[6]) ^
                      *(byte *)(DAT_08028228 + (uint)param_1[0xb]),
                      CONCAT12(*(byte *)(DAT_08028220 + (uint)param_1[0xc]) ^
                               *(byte *)(DAT_08028220 + (uint)param_1[1]) ^
                               *(byte *)(DAT_08028228 + (uint)param_1[6]) ^
                               *(byte *)(DAT_0802822c + (uint)param_1[0xb]),
                               CONCAT11(*(byte *)(DAT_08028220 + (uint)param_1[0xc]) ^
                                        *(byte *)(DAT_08028228 + (uint)param_1[1]) ^
                                        *(byte *)(DAT_0802822c + (uint)param_1[6]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[0xb]),
                                        *(byte *)(DAT_08028228 + (uint)param_1[0xc]) ^
                                        *(byte *)(DAT_0802822c + (uint)param_1[1]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[6]) ^
                                        *(byte *)(DAT_08028220 + (uint)param_1[0xb]))));
  for (uVar1 = 0; (uVar1 & 0xff) < 0x10; uVar1 = (uVar1 & 0xff) + 1) {
    param_1[uVar1 & 0xff] = local_14[uVar1 & 0xff];
  }
  return CONCAT17(local_d,CONCAT16(local_e,CONCAT15(local_f,CONCAT14(local_10,CONCAT13(local_14[3],
                                                                                       CONCAT12(
                                                  local_14[2],CONCAT11(local_14[1],local_14[0]))))))
                 );
}

