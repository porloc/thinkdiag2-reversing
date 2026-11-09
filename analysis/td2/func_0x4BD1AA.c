// func @ 0x4BD1AA

void FUN_004bd1aa(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_004bd324(DAT_004bd46c,param_2,0x40);
  FUN_004bd2a2(DAT_004bd46c,DAT_004bd46c,DAT_004bd470,0x38);
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    FUN_004bd2f4(*DAT_004bd478,0x1c,(int)*(char *)(DAT_004bd474 + iVar1));
    FUN_004bd2f4(*DAT_004bd47c,0x1c,(int)*(char *)(DAT_004bd474 + iVar1));
    FUN_004bd2a2(iVar1 * 0x30 + param_1,DAT_004bd46c,DAT_004bd480,0x30);
  }
  return;
}

