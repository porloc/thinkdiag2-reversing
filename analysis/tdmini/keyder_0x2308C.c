// FUN_0802308c @ 0802308c

uint FUN_0802308c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    if (param_2 <= iVar1) {
      return uVar2;
    }
    if ((*(byte *)(param_1 + iVar1) < 0x30) || (0x39 < *(byte *)(param_1 + iVar1))) {
      if ((*(byte *)(param_1 + iVar1) < 0x61) || (0x66 < *(byte *)(param_1 + iVar1))) {
        if ((*(byte *)(param_1 + iVar1) < 0x41) || (0x46 < *(byte *)(param_1 + iVar1))) {
          return 0;
        }
        uVar2 = *(byte *)(param_1 + iVar1) - 0x57 | uVar2 << 4;
      }
      else {
        uVar2 = *(byte *)(param_1 + iVar1) - 0x57 | uVar2 << 4;
      }
    }
    else {
      uVar2 = *(byte *)(param_1 + iVar1) - 0x30 | uVar2 << 4;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

