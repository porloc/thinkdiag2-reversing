// func @ 0x4B6434

undefined4 FUN_004b6434(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  
  if (*param_2 == 0) {
    uVar2 = (uint)param_2[2] * 0x100 + (uint)param_2[1] * 0x10000 + (uint)*param_2 * 0x1000000 +
            (uint)param_2[3];
    cVar3 = '\x04';
  }
  else {
    cVar3 = '\x02';
    uVar2 = DAT_004b7100 / (0x10000 - CONCAT11(*param_2,param_2[1]));
  }
  *DAT_004b7080 = uVar2;
  if (*DAT_004b7080 == 64000) {
    *DAT_004b7080 = 0xf424;
  }
  DAT_004b7080[1] = 0xc0;
  DAT_004b7080[2] = 0;
  DAT_004b7080[3] = 0x800;
  bVar1 = param_2[cVar3];
  if (bVar1 == 0) {
    DAT_004b7080[3] = 0x800;
  }
  else if (bVar1 == 2) {
    DAT_004b7080[3] = 0;
    DAT_004b7080[1] = 0xc0;
  }
  else if (bVar1 < 2) {
    DAT_004b7080[3] = 0x200;
    DAT_004b7080[1] = 0xc0;
  }
  else {
    if ((bVar1 != 4) && (3 < bVar1)) {
      FUN_004ac21a(DAT_004b66e4,param_3,4);
      return 1;
    }
    DAT_004b7080[2] = 0x2000;
  }
  *(undefined1 *)(DAT_004b7074 + 0xd) = 0;
  *(undefined1 *)(DAT_004b7078 + 8) = 5;
  if (*(char *)(DAT_004b66d8 + 4) == '\"') {
    FUN_004b46c4(4);
    FUN_004b4300(4,DAT_004b7080);
  }
  else {
    FUN_004b46c4(0);
    FUN_004b4300(0,DAT_004b7080);
  }
  FUN_004ac21a(DAT_004b66dc,param_3,4);
  return 2;
}

