// func @ 0x4BEEF4

undefined1 FUN_004beef4(ushort param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 0;
  uVar2 = DAT_004bfbbc / *DAT_004bfbc0;
  if (3 < uVar2) {
    uVar2 = uVar2 - 3;
  }
  FUN_004b46c4(4);
  FUN_004b5b18(4,3);
  while( true ) {
    iVar3 = FUN_004b5bc4();
    if (iVar3 == 1) {
      uVar4 = uVar4 + 1;
    }
    else {
      uVar4 = 0;
    }
    if (0xb < uVar4) break;
    FUN_004b089a(uVar2);
    iVar5 = iVar5 + 1;
    if ((uint)param_1 * 1000 < uVar2 * iVar5) {
      uVar1 = 0;
LAB_004bef74:
      FUN_004b4300(4,DAT_004bfbc0);
      return uVar1;
    }
  }
  uVar1 = 1;
  goto LAB_004bef74;
}

