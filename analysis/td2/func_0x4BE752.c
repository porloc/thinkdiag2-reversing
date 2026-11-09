// func @ 0x4BE752

void FUN_004be752(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_004bcfd4(param_1);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (iVar2 % 2 == 0) {
      *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)(iVar2 + param_1);
      iVar4 = iVar4 + 1;
    }
    else {
      *(undefined1 *)(iVar3 + param_2) = *(undefined1 *)(iVar2 + param_1);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

