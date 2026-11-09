// FUN_08027ea2 @ 08027ea2

undefined8 FUN_08027ea2(byte *param_1)

{
  int iVar1;
  byte local_14 [8];
  undefined3 local_c;
  byte local_9;
  byte local_8;
  undefined3 local_7;
  
  local_14[0] = *(byte *)(DAT_08028230 + (uint)*param_1) ^
                *(byte *)(DAT_08028234 + (uint)param_1[1]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[2]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[3]);
  local_14[5] = *(byte *)(DAT_0802823c + (uint)*param_1) ^
                *(byte *)(DAT_08028230 + (uint)param_1[1]) ^
                *(byte *)(DAT_08028234 + (uint)param_1[2]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[3]);
  local_14[4] = *(byte *)(DAT_08028230 + (uint)param_1[4]) ^
                *(byte *)(DAT_08028234 + (uint)param_1[5]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[6]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[7]);
  local_14[3] = *(byte *)(DAT_08028234 + (uint)param_1[4]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[5]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[6]) ^
                *(byte *)(DAT_08028230 + (uint)param_1[7]);
  local_14[2] = *(byte *)(DAT_08028238 + (uint)param_1[8]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[9]) ^
                *(byte *)(DAT_08028230 + (uint)param_1[10]) ^
                *(byte *)(DAT_08028234 + (uint)param_1[0xb]);
  local_14[7] = *(byte *)(DAT_08028234 + (uint)param_1[8]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[9]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[10]) ^
                *(byte *)(DAT_08028230 + (uint)param_1[0xb]);
  _local_8 = CONCAT31(CONCAT21(CONCAT11(*(byte *)(DAT_08028234 + (uint)*param_1) ^
                                        *(byte *)(DAT_08028238 + (uint)param_1[1]) ^
                                        *(byte *)(DAT_0802823c + (uint)param_1[2]) ^
                                        *(byte *)(DAT_08028230 + (uint)param_1[3]),
                                        *(byte *)(DAT_08028238 + (uint)param_1[4]) ^
                                        *(byte *)(DAT_0802823c + (uint)param_1[5]) ^
                                        *(byte *)(DAT_08028230 + (uint)param_1[6]) ^
                                        *(byte *)(DAT_08028234 + (uint)param_1[7])),
                               *(byte *)(DAT_0802823c + (uint)param_1[8]) ^
                               *(byte *)(DAT_08028230 + (uint)param_1[9]) ^
                               *(byte *)(DAT_08028234 + (uint)param_1[10]) ^
                               *(byte *)(DAT_08028238 + (uint)param_1[0xb])),
                      *(byte *)(DAT_08028230 + (uint)param_1[0xc]) ^
                      *(byte *)(DAT_08028234 + (uint)param_1[0xd]) ^
                      *(byte *)(DAT_08028238 + (uint)param_1[0xe]) ^
                      *(byte *)(DAT_0802823c + (uint)param_1[0xf]));
  local_14[1] = *(byte *)(DAT_0802823c + (uint)param_1[0xc]) ^
                *(byte *)(DAT_08028230 + (uint)param_1[0xd]) ^
                *(byte *)(DAT_08028234 + (uint)param_1[0xe]) ^
                *(byte *)(DAT_08028238 + (uint)param_1[0xf]);
  local_14[6] = *(byte *)(DAT_08028238 + (uint)param_1[0xc]) ^
                *(byte *)(DAT_0802823c + (uint)param_1[0xd]) ^
                *(byte *)(DAT_08028230 + (uint)param_1[0xe]) ^
                *(byte *)(DAT_08028234 + (uint)param_1[0xf]);
  _local_c = CONCAT13(*(byte *)(DAT_08028234 + (uint)param_1[0xc]) ^
                      *(byte *)(DAT_08028238 + (uint)param_1[0xd]) ^
                      *(byte *)(DAT_0802823c + (uint)param_1[0xe]) ^
                      *(byte *)(DAT_08028230 + (uint)param_1[0xf]),
                      CONCAT21(CONCAT11(*(byte *)(DAT_08028238 + (uint)*param_1) ^
                                        *(byte *)(DAT_0802823c + (uint)param_1[1]) ^
                                        *(byte *)(DAT_08028230 + (uint)param_1[2]) ^
                                        *(byte *)(DAT_08028234 + (uint)param_1[3]),
                                        *(byte *)(DAT_0802823c + (uint)param_1[4]) ^
                                        *(byte *)(DAT_08028230 + (uint)param_1[5]) ^
                                        *(byte *)(DAT_08028234 + (uint)param_1[6]) ^
                                        *(byte *)(DAT_08028238 + (uint)param_1[7])),
                               *(byte *)(DAT_08028230 + (uint)param_1[8]) ^
                               *(byte *)(DAT_08028234 + (uint)param_1[9]) ^
                               *(byte *)(DAT_08028238 + (uint)param_1[10]) ^
                               *(byte *)(DAT_0802823c + (uint)param_1[0xb])));
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    param_1[iVar1] = *(byte *)(DAT_08028224 + (uint)local_14[iVar1]);
  }
  return CONCAT17(local_14[7],
                  CONCAT16(local_14[6],
                           CONCAT15(local_14[5],
                                    CONCAT14(local_14[4],
                                             CONCAT13(local_14[3],
                                                      CONCAT12(local_14[2],
                                                               CONCAT11(local_14[1],local_14[0])))))
                          ));
}

