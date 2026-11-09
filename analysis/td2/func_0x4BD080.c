// func @ 0x4BD080

undefined4 FUN_004bd080(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_004c9eb0(DAT_004bd440,0,0x10);
  if (param_2 < 0x11) {
    iVar1 = param_2;
  }
  else {
    iVar1 = 0x10;
  }
  FUN_004c9ec4(DAT_004bd440,param_1,iVar1);
  FUN_004bd1aa(DAT_004bd444,DAT_004bd440);
  if (8 < param_2) {
    FUN_004bd1aa(DAT_004bd44c,DAT_004bd448);
  }
  *(bool *)DAT_004bd450 = 8 < param_2;
  return param_4;
}

