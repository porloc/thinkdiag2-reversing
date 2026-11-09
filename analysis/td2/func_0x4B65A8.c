// func @ 0x4B65A8

undefined8 FUN_004b65a8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    if (2 < bVar2) {
      *(undefined1 *)((int)DAT_004b7074 + 0xd) = 0;
      *(undefined1 *)(DAT_004b7078 + 8) = 5;
      if (*DAT_004b707c == '\x01') {
        *DAT_004b707c = '\0';
        FUN_004b0914(0);
      }
      FUN_004ac21a(DAT_004b66dc,param_3,4);
LAB_004b66ce:
      return CONCAT44(param_4,2);
    }
    if (bVar2 == 0) {
      DAT_004b7074[1] = (uint)*param_2 * 0x100;
      DAT_004b7074[1] = DAT_004b7074[1] + (uint)param_2[1];
      DAT_004b7074[1] = DAT_004b7074[1] * 100;
      uVar1 = DAT_004b7074[1] / 100;
      if (uVar1 % 10 < 5) {
        *(char *)(DAT_004b7074 + 3) = (char)(uVar1 / 10);
      }
      else {
        *(char *)(DAT_004b7074 + 3) = (char)(uVar1 / 10) + '\x01';
      }
      if ((char)DAT_004b7074[3] == '\0') {
        *(undefined1 *)(DAT_004b7074 + 3) = 1;
      }
    }
    else if (bVar2 == 2) {
      if (CONCAT11(param_2[3],param_2[4]) == 0) {
        FUN_004ac21a(DAT_004b66e4,param_3,4);
        goto LAB_004b66ce;
      }
      DAT_004b7074[2] = (uint)CONCAT11(param_2[3],param_2[4]) * 10;
    }
    else if (bVar2 < 2) {
      if (param_2[2] == 0) {
        FUN_004ac21a(DAT_004b66e4,param_3,4);
        goto LAB_004b66ce;
      }
      *DAT_004b7074 = (uint)param_2[2] * 10;
    }
    bVar2 = bVar2 + 1;
  } while( true );
}

