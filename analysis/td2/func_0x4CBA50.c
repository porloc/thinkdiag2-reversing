// func @ 0x4CBA50

char FUN_004cba50(char *param_1,byte param_2,byte *param_3,uint param_4,byte param_5)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  ushort local_54;
  undefined1 auStack_50 [36];
  char *local_2c;
  uint local_28;
  
  cVar3 = -0x20;
  bVar2 = false;
  cVar1 = *param_1;
  bVar6 = cVar1 - 2;
  local_2c = param_1;
  local_28 = param_4;
  FUN_004cb95a(bVar6,param_1,param_1 + bVar6);
  do {
    cVar5 = '\x03';
LAB_004cbaa2:
    while( true ) {
      cVar4 = cVar5 + -1;
      if ((cVar5 == '\0') || (cVar3 == '\0')) {
        return cVar3;
      }
      cVar3 = FUN_004cb8e8(cVar1,local_2c);
      cVar5 = cVar4;
      if (cVar3 == '\0') break;
      FUN_004cbf52(0x47);
      bVar6 = 0;
      while ((bVar6 < 2 && (cVar4 = FUN_004cb9fe(auStack_50), cVar4 != '\0'))) {
        bVar6 = bVar6 + 1;
      }
    }
    FUN_004cbf52(local_28 & 0xff);
    cVar4 = '\x01';
LAB_004cbb00:
    if (cVar4 == '\0') goto LAB_004cbaa2;
    for (uVar7 = 0; (uVar7 & 0xff) < (uint)param_2; uVar7 = (uVar7 & 0xff) + 1) {
      param_3[uVar7 & 0xff] = 0;
    }
    local_54 = (ushort)param_5 * 1000 + 0x25;
    do {
      cVar3 = FUN_004cb936(param_2,param_3);
      local_54 = local_54 - 0x25;
      if (local_54 < 0x26) break;
      bVar8 = cVar3 != '\0';
      cVar3 = '\0';
    } while (bVar8);
    if ((cVar3 == '\0') || (bVar2)) {
      cVar3 = FUN_004cb9c4(param_3);
      cVar4 = cVar4 + -1;
      if (cVar3 == '\0') break;
      goto LAB_004cbb00;
    }
    bVar2 = true;
    FUN_004cbf52(0x47);
    bVar6 = 0;
    while ((bVar6 < 2 && (cVar5 = FUN_004cb9fe(auStack_50), cVar5 != '\0'))) {
      bVar6 = bVar6 + 1;
    }
  } while( true );
  cVar3 = '\0';
  if (*param_3 < 5) {
    bVar6 = param_3[1];
    if (bVar6 == 3) {
      cVar3 = -0x2e;
    }
    else if (bVar6 == 0xf) {
      cVar3 = -0x2d;
    }
    else if (bVar6 == 0xff) {
      cVar3 = -0x2c;
      goto LAB_004cbaa2;
    }
  }
  return cVar3;
}

