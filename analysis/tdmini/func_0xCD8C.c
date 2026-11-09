// FUN_0800cd8c @ 0800cd8c

undefined4 FUN_0800cd8c(void)

{
  int iVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  FUN_080067d8(auStack_28,0x10);
  FUN_08000368(auStack_18,DAT_0800d240,0x10);
  iVar1 = FUN_0800676c(auStack_28,0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_08006ffc(*DAT_0800d23c,auStack_18,0x10);
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_08006ffc(*DAT_0800d23c,auStack_28,0x10);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

