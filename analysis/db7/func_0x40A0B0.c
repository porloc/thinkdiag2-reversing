// func @ 0x40A0B0

undefined4 FUN_0040a0b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_588 [516];
  undefined1 auStack_384 [256];
  undefined1 auStack_284 [516];
  undefined1 auStack_80 [92];
  
  FUN_0040284c(auStack_588,DAT_0040a3d8,0x204);
  FUN_0040282c(auStack_284,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + DAT_0040a3dc) * 0x1000000 +
          (uint)*(byte *)(param_1 + DAT_0040a3e0) * 0x10000 +
          (uint)*(byte *)(param_1 + DAT_0040a3e4) * 0x100 + (uint)*(byte *)(param_1 + DAT_0040a3e8);
  if (DAT_0040a3ec < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + DAT_0040a3f0);
    FUN_0040282c(auStack_384,(param_1 - uVar2) + DAT_0040a3f0,uVar2);
    iVar3 = FUN_0040b2d8(auStack_80);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_0040b2e4(auStack_80,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_0040b2f8(auStack_80,auStack_384,uVar2,auStack_284);
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

