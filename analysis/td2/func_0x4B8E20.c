// func @ 0x4B8E20

uint FUN_004b8e20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (param_2 <= iVar1) {
      return uVar2;
    }
    if ((*(char *)(param_1 + iVar1) < '0') || ('9' < *(char *)(param_1 + iVar1))) {
      if ((*(char *)(param_1 + iVar1) < 'a') || ('f' < *(char *)(param_1 + iVar1))) {
        if ((*(char *)(param_1 + iVar1) < 'A') || ('F' < *(char *)(param_1 + iVar1))) {
          return 0;
        }
        uVar2 = (int)*(char *)(param_1 + iVar1) - 0x57U | uVar2 << 4;
      }
      else {
        uVar2 = (int)*(char *)(param_1 + iVar1) - 0x57U | uVar2 << 4;
      }
    }
    else {
      uVar2 = (int)*(char *)(param_1 + iVar1) - 0x30U | uVar2 << 4;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

