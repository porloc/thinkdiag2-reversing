// func @ 0x4C9B48

undefined8 FUN_004c9b48(undefined4 param_1,byte *param_2,undefined1 *param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    FUN_004acb7c(0x19,1);
    FUN_004acba4(1,0);
  }
  else if (bVar1 == 0) {
    FUN_004acb7c(0x19,1);
    FUN_004acba4(0,0);
  }
  else {
    if ((0xf < bVar1) || (bVar1 == 0)) {
      *param_3 = 0xff;
      param_3[1] = 2;
      goto LAB_004c9c28;
    }
    if ((bVar1 & 0xe) == 8) {
      *(undefined1 *)(DAT_004ca03c + 8) = 2;
    }
    else if ((bVar1 & 0xe) == 4) {
      *(undefined1 *)(DAT_004ca03c + 8) = 1;
    }
    else if ((bVar1 & 0xe) == 2) {
      *(undefined1 *)(DAT_004ca03c + 8) = 3;
    }
    else if ((bVar1 & 0xe) == 0) {
      *(undefined1 *)(DAT_004ca03c + 8) = 0;
    }
    FUN_004b3d58(DAT_004ca03c);
    FUN_004acf14(0x14);
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      FUN_004acb7c(0x19,1);
      FUN_004acba4(1,0);
    }
    else {
      FUN_004acb7c(0x19,1);
      FUN_004acba4(0,0);
    }
  }
  *param_3 = 0xff;
  param_3[1] = 0;
LAB_004c9c28:
  return CONCAT44(param_4,2);
}

