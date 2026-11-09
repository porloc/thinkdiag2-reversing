// func @ 0x4B8558

void FUN_004b8558(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_140 [16];
  undefined1 local_130 [260];
  int local_2c;
  undefined4 local_28;
  
  iVar3 = 0;
  iVar7 = 0;
  local_2c = param_2;
  local_28 = param_3;
  FUN_004b09c0(local_130,0x100,0,param_4,0,0x100,0,0);
  iVar1 = FUN_004b8490(param_1);
  iVar2 = FUN_004b8490(local_2c);
  if (iVar2 <= iVar1) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      for (iVar6 = 0;
          ((iVar6 < iVar2 && (iVar3 < 1)) &&
          (*(char *)(param_1 + iVar6 + iVar4) == *(char *)(local_2c + iVar6))); iVar6 = iVar6 + 1) {
      }
      if (iVar6 < iVar2) {
        local_130[iVar7] = *(undefined1 *)(param_1 + iVar4);
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_004b09c0(local_140,0x10,0);
        iVar6 = FUN_004b84fe(local_28,local_140);
        for (iVar5 = 0; iVar5 < iVar6; iVar5 = iVar5 + 1) {
          local_130[iVar7] = local_140[iVar5];
          iVar7 = iVar7 + 1;
        }
        iVar4 = iVar2 + -1 + iVar4;
        iVar3 = iVar3 + 1;
      }
    }
    for (iVar1 = 0; iVar1 < iVar7 + 1; iVar1 = iVar1 + 1) {
      *(undefined1 *)(param_1 + iVar1) = local_130[iVar1];
    }
  }
  return;
}

