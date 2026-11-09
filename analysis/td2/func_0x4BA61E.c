// func @ 0x4BA61E

undefined4 FUN_004ba61e(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    FUN_004b2ee8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30));
    FUN_004b2f06(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    while (*param_2 != '\0') {
      if ((((*(int *)(param_2 + 4) == 0) || (*(uint *)(param_2 + 8) <= *(uint *)(param_2 + 4))) ||
          (iVar1 = FUN_004b2f8e(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c)),
          iVar1 << 0x1b < 0)) &&
         ((iVar1 = FUN_004ba5c4(param_1,param_2), iVar1 == 0 &&
          (iVar1 = FUN_004b2f8e(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c)),
          iVar1 << 0x1c < 0)))) {
        FUN_004b2f12(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
        *param_2 = '\0';
      }
    }
  }
  return param_4;
}

