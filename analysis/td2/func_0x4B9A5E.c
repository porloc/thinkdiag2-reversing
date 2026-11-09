// func @ 0x4B9A5E

undefined4 FUN_004b9a5e(uint param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(DAT_004b9b1c + param_1 * 4) = param_2 | 3;
  iVar1 = 0x1000;
  while( true ) {
    if ((*DAT_004b9ad8 & 0x100 << (param_1 & 0xff)) != 0) {
      return 0;
    }
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 1;
}

