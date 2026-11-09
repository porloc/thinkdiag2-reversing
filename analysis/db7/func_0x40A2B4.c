// func @ 0x40A2B4

undefined4 FUN_0040a2b4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_588 [516];
  undefined1 auStack_384 [516];
  undefined1 auStack_180 [92];
  undefined1 auStack_124 [256];
  
  FUN_0040284c(auStack_588,DAT_0040a410,0x204);
  FUN_0040282c(auStack_384,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(param_1 + 0xfffc) * 0x1000000 +
          (uint)*(byte *)(param_1 + 0xfffd) * 0x10000 + (uint)*(byte *)(param_1 + 0xfffe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xffff);
  if (uVar5 < 0xff21) {
    uVar2 = (uint)*(byte *)(param_1 + 0xfffb);
    FUN_0040282c(auStack_124,(param_1 - uVar2) + 0xfffb,uVar2);
    iVar3 = FUN_0040b2d8(auStack_180);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_0040b2e4(auStack_180,param_1 + iVar3 * 0x10,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_0040b2e4(auStack_180,param_1 + iVar3 * 0x10,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_0040b2f8(auStack_180,auStack_124,uVar2,auStack_384);
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}

