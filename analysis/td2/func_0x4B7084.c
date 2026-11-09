// func @ 0x4B7084

undefined4 FUN_004b7084(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *param_2;
  FUN_004b5b18(1,0);
  if (cVar1 == '\0') {
    FUN_004b5b40(0,CONCAT11(param_2[1],param_2[2]));
    *(undefined1 *)(DAT_004b7cc8 + 0xd) = 0;
  }
  else {
    if (cVar1 != -1) {
      FUN_004ac21a(DAT_004b73d0,param_3,4);
      return 2;
    }
    FUN_004b5b40(1,CONCAT11(param_2[1],param_2[2]));
    FUN_004b4300(0,DAT_004b7ccc);
  }
  FUN_004ac21a(DAT_004b77cc,param_3,4);
  return 2;
}

