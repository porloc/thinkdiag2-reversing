// func @ 0x4B84A0

void FUN_004b84a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_120 [256];
  
  iVar3 = 0;
  FUN_004b09c0(local_120,0x100,0);
  iVar1 = FUN_004b8490(param_1);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (*(char *)(param_1 + iVar2) != ' ') {
      local_120[iVar3] = *(undefined1 *)(param_1 + iVar2);
      iVar3 = iVar3 + 1;
    }
  }
  for (iVar1 = 0; iVar1 < iVar3 + 1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = local_120[iVar1];
  }
  return;
}

