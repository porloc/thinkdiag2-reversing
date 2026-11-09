// func @ 0x4BA5C4

undefined8 FUN_004ba5c4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8)) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_004b2f52(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0xfc));
    }
    else {
      FUN_004b2f46(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0xfc));
    }
    FUN_004b2f5e(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0xc));
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(param_4,uVar1);
}

