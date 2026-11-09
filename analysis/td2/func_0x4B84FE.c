// func @ 0x4B84FE

int FUN_004b84fe(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_004b09c0(&local_30,0x10,0);
  iVar3 = 0;
  do {
    iVar2 = iVar3;
    *(char *)((int)&local_30 + iVar2) = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
    iVar3 = iVar2 + 1;
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_2 + (iVar2 - iVar1)) = *(undefined1 *)((int)&local_30 + iVar1);
  }
  return iVar3;
}

