// func @ 0x4BADDC

void FUN_004baddc(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  *(short *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) = param_3 + param_2;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  *(short *)(param_1 + iVar1 * 2 + 0xfc) = param_2;
  if (0x78 < *(uint *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 0x78;
  }
  return;
}

