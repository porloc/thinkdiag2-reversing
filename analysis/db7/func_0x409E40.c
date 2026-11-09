// func @ 0x409E40

void FUN_00409e40(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [8];
  
  FUN_00409974(local_30 + 3,0x10);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  FUN_0040b1d4(local_30 + 3,0x80);
  uVar2 = 1;
  for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_0040a42c(local_30 + (uVar1 & 0xff),local_30[(uVar2 & 0xff) + 3]);
    uVar2 = (uVar2 & 0xff) + 1;
  }
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_0040a43c(param_1 + (uVar1 & 0xff) * 2,*(undefined1 *)((int)local_30 + (uVar1 & 0xff)),0);
  }
  return;
}

