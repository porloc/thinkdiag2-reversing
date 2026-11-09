// func @ 0x4B76FE

undefined4 FUN_004b76fe(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_004ac078();
  *(undefined1 *)(DAT_004b7cd4 + 0x46) = 0;
  *(undefined1 *)(DAT_004b7cd4 + 0x45) = 0;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *DAT_004b7cd0 = 0;
    *(undefined1 *)(DAT_004b7cd4 + 0x10) = 0;
    *(undefined4 *)(DAT_004b7cd4 + 4) = 0;
  }
  else {
    *(char *)(DAT_004b7cd4 + 0x10) = cVar1;
    FUN_004b27ac(DAT_004b82b8,param_2 + 1,cVar1);
    *(uint *)(DAT_004b7cd4 + 4) = (uint)(byte)param_2[(byte)(cVar1 + 2)] * 10;
    FUN_004b0770(0,*(undefined1 *)(DAT_004b7cc8 + 0xc));
    *(undefined1 *)(DAT_004b7cd4 + 8) = 5;
    FUN_004b08e0(0,DAT_004b82c0);
    *DAT_004b7cd0 = 2;
    FUN_004b0822(0);
  }
  FUN_004ac21a(DAT_004b77cc,param_3,4);
  return 2;
}

