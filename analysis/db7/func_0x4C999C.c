// func @ 0x4C999C

undefined8 FUN_004c999c(undefined4 param_1,char *param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  FUN_004b3a80(DAT_004ca03c);
  FUN_004b3aae();
  if (cVar1 == '\x01') {
    DAT_004ca03c[1] = 4;
    *DAT_004ca03c = 4;
    DAT_004ca03c[8] = 1;
  }
  else if (cVar1 == '\x02') {
    DAT_004ca03c[1] = 0xb;
    *DAT_004ca03c = 0xb;
    DAT_004ca03c[8] = 3;
  }
  else {
    if (cVar1 != '\f') {
      *param_3 = 0xff;
      param_3[1] = 2;
      goto LAB_004c9af0;
    }
    DAT_004ca03c[1] = 8;
    *DAT_004ca03c = 8;
    DAT_004ca03c[8] = 2;
  }
  DAT_004ca03c[4] = 0;
  FUN_004b3aba(DAT_004ca03c);
  FUN_004acb7c(0x19,0);
  FUN_004acba4(1,10);
  FUN_004acba4(0,10);
  FUN_004acb7c(0,3);
  iVar2 = FUN_004acce0(0,DAT_004ca040);
  if (iVar2 == 0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    FUN_004acb7c(0x19,0);
    FUN_004acba4(1,10);
    FUN_004acb7c(0,3);
    iVar2 = FUN_004acce0(1,DAT_004ca040);
    if (iVar2 == 0) {
      *param_3 = 0;
      param_3[1] = 0;
    }
    else {
      FUN_004acb7c(0x19,0);
      FUN_004acba4(0,10);
      FUN_004acba4(1,10);
      FUN_004acba4(0,10);
      FUN_004acba4(1,10);
      FUN_004acba4(0,10);
      FUN_004acba4(1,10);
      FUN_004acba4(0,10);
      FUN_004acba4(1,10);
      *param_3 = 0;
      param_3[1] = 2;
    }
  }
LAB_004c9af0:
  return CONCAT44(param_4,2);
}

