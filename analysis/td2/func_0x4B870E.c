// func @ 0x4B870E

int FUN_004b870e(char param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_3 <= iVar1) {
      return -1;
    }
    if (*(char *)(param_2 + iVar1) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

