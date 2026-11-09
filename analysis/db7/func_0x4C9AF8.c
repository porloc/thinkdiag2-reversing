// func @ 0x4C9AF8

undefined8 FUN_004c9af8(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  FUN_004acb7c(0x1c,0);
  if (*param_2 == '\0') {
    FUN_004b3aae();
    FUN_004acba4(1,0x14);
  }
  else {
    if (*param_2 != -1) {
      *param_3 = 0xff;
      param_3[1] = 2;
      goto LAB_004c9b46;
    }
    FUN_004acba4(0,0);
  }
  *param_3 = 0xff;
  param_3[1] = 0;
LAB_004c9b46:
  return CONCAT44(param_4,2);
}

