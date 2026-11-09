// func @ 0x4B8A58

void FUN_004b8a58(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  uint local_28;
  
  local_28 = param_2;
  while ((iVar1 = FUN_004b8a0c(param_1,0x28,0,0), -1 < iVar1 &&
         (iVar2 = FUN_004b8a0c(param_1,0x29,iVar1 + 1,1), -1 < iVar2))) {
    FUN_004b09c0(local_128,0x100,0);
    for (iVar4 = 0; iVar4 < (iVar2 - iVar1) + 1; iVar4 = iVar4 + 1) {
      local_128[iVar4] = *(undefined1 *)(param_1 + iVar4 + iVar1);
    }
    FUN_004b09c0(local_228,0x100,0);
    for (iVar4 = 0; iVar4 < (iVar2 - iVar1) + -1; iVar4 = iVar4 + 1) {
      local_228[iVar4] = *(undefined1 *)(iVar4 + iVar1 + param_1 + 1);
    }
    FUN_004b8852(local_228,local_28 & 0xff);
    uVar3 = FUN_004b864c(local_228);
    FUN_004b8558(param_1,local_128,uVar3);
  }
  return;
}

