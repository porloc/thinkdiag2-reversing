// func @ 0x4BD0D0

void FUN_004bd0d0(undefined4 param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  
  FUN_004bd324(DAT_004bd454,param_2,0x40);
  FUN_004bd2a2(DAT_004bd454,DAT_004bd454,DAT_004bd458,0x40);
  if (param_4 == '\0') {
    for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
      FUN_004c9ec4(DAT_004bd460,*DAT_004bd45c,0x20);
      FUN_004bd202(*DAT_004bd45c,param_3 + iVar1 * 0x30);
      FUN_004bd2da(*DAT_004bd45c,*DAT_004bd464,0x20);
      FUN_004c9ec4(*DAT_004bd464,DAT_004bd460,0x20);
    }
  }
  else {
    for (iVar1 = 0xf; -1 < iVar1; iVar1 = iVar1 + -1) {
      FUN_004c9ec4(DAT_004bd460,*DAT_004bd464,0x20);
      FUN_004bd202(*DAT_004bd464,param_3 + iVar1 * 0x30);
      FUN_004bd2da(*DAT_004bd464,*DAT_004bd45c,0x20);
      FUN_004c9ec4(*DAT_004bd45c,DAT_004bd460,0x20);
    }
  }
  FUN_004bd2a2(DAT_004bd454,DAT_004bd454,DAT_004bd468,0x40);
  FUN_004bd346(param_1,DAT_004bd454,0x40);
  return;
}

