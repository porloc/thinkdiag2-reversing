// func @ 0x4B934C

int FUN_004b934c(undefined4 param_1,char *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 local_4c4;
  short local_4c0;
  short local_4be;
  int local_4bc;
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [64];
  undefined1 auStack_468 [64];
  undefined1 auStack_428 [1024];
  undefined4 uStack_28;
  
  uStack_28 = param_1;
  FUN_004b2824(auStack_468,0x40);
  cVar6 = *param_2;
  if (cVar6 == '\0') {
    bVar1 = param_2[1];
    if (bVar1 < 0x41) {
      local_4be = CONCAT11(param_2[bVar1],param_2[bVar1 + 1]);
      FUN_004b27ac(auStack_468,param_2 + 2,bVar1);
      FUN_004bddcc(auStack_468,bVar1 - 2,DAT_004b9738,auStack_4a8);
      local_4c0 = FUN_004be65c(auStack_4a8);
      if (local_4be == local_4c0) {
        *DAT_004b973c = 1;
        FUN_004b27ac(DAT_004b9734,auStack_4a8,0x40);
        FUN_004be6d8(auStack_428);
        FUN_004be7f4(auStack_4a8,auStack_428,auStack_4b8);
        FUN_004bed92(auStack_4b8,0xc,*DAT_004b9738,*DAT_004b9740);
        FUN_004bed92(auStack_4b8,0xd,DAT_004b9738[1],DAT_004b9740[1]);
        FUN_004bed92(auStack_4b8,0xe,DAT_004b9738[2],DAT_004b9740[2]);
        FUN_004bed92(auStack_4b8,0xf,DAT_004b9738[3],DAT_004b9740[3]);
        uVar2 = FUN_004bcfd4(auStack_4a8);
        FUN_004bdda2(auStack_4a8,uVar2,auStack_4b8,param_3 + 1);
        uVar3 = FUN_004bcfd4(auStack_4a8);
        uVar3 = uVar3 & 0xff;
        if (uVar3 % 0x10 != 0) {
          uVar3 = (uVar3 / 0x10 + 1) * 0x10;
        }
        *param_3 = 0;
        return uVar3 + 1;
      }
    }
  }
  else if (cVar6 == '\x01') {
    iVar4 = FUN_004b5d10(&local_4c4);
    if (iVar4 == 0) {
      *DAT_004b9740 = param_2[6];
      DAT_004b9740[1] = param_2[7];
      DAT_004b9740[2] = param_2[8];
      DAT_004b9740[3] = param_2[9];
      FUN_004b27ac(DAT_004b9738,param_2 + 2,8);
      *DAT_004b9738 = (char)((uint)local_4c4 >> 0x18);
      DAT_004b9738[1] = (char)((uint)local_4c4 >> 0x10);
      DAT_004b9738[2] = (char)((uint)local_4c4 >> 8);
      DAT_004b9738[3] = (char)local_4c4;
      iVar4 = FUN_004bee0c(param_3 + 1,param_2 + 2,local_4c4);
      if (iVar4 == 0) {
        *param_3 = 0;
        return 9;
      }
    }
  }
  else {
    if (cVar6 == '\x02') {
      if (0x1000 < *(ushort *)(param_2 + 1)) {
        *param_3 = 0xff;
        param_3[1] = 2;
        param_3[2] = 2;
        param_3[3] = 0x55;
        return 4;
      }
      FUN_004b09c0(DAT_004b9744,0x1028,0);
      if (0x1000 < CONCAT11(param_2[4],param_2[5])) {
        *param_3 = 0xff;
        param_3[1] = 2;
        param_3[2] = 2;
        param_3[3] = 0xaa;
        return 4;
      }
      iVar4 = FUN_004b9172(param_2 + 6,param_3,CONCAT11(param_2[4],param_2[5]),DAT_004b9744);
      if (iVar4 == 0) {
        *DAT_004b9748 = 1;
        *param_3 = 0xff;
        param_3[1] = 0;
        return 2;
      }
      *DAT_004b9748 = 0;
      *param_3 = 0xff;
      param_3[1] = 2;
      param_3[2] = 2;
      param_3[3] = (char)((uint)iVar4 >> 0x18);
      param_3[4] = (char)((uint)iVar4 >> 0x10);
      param_3[5] = (char)((uint)iVar4 >> 8);
      param_3[6] = (char)iVar4;
      return 7;
    }
    if (cVar6 == '\x03') {
      if ((CONCAT11(param_2[2],param_2[3]) < 0x20) &&
         (pcVar5 = *(code **)(DAT_004b974c + (uint)CONCAT11(param_2[2],param_2[3]) * 4),
         pcVar5 != (code *)0x0)) {
        local_4bc = 0x200;
        FUN_004b09c0(param_3,0x200,0);
        iVar4 = (*pcVar5)(param_2 + 5,param_2[4],param_2 + (byte)param_2[4] + 6,
                          param_2[(byte)param_2[4] + 5],param_3 + 2,0x100);
        if (iVar4 != 0) {
          *param_3 = (char)(iVar4 / 0x100);
          param_3[1] = (char)iVar4;
          return iVar4 + 2;
        }
      }
    }
    else {
      if (cVar6 == '\x05') {
        if (param_2[2] == -0x5b) {
          *DAT_004b9750 = 0xff;
        }
        else if (param_2[2] == 'Z') {
          *DAT_004b9750 = 0;
        }
        *param_3 = 0xff;
        param_3[1] = 0;
        return 2;
      }
      if (cVar6 == '\x06') {
        uVar7 = (uint)(byte)param_2[1];
        local_4bc = (byte)param_2[1] + 1;
        FUN_004ab0c4(param_2 + 2,param_2 + 1,local_4bc);
        *param_2 = '\x01';
        param_2[1] = '\x01';
        FUN_004bb0ea(0,param_2 + 8,0xc);
        cVar6 = '\0';
        for (uVar3 = 0; (uVar3 & 0xff) < (uVar7 & 0xff); uVar3 = (uVar3 & 0xff) + 1) {
          cVar6 = param_2[(uVar3 & 0xff) + 3] + cVar6;
        }
        param_2[(uVar7 & 0xff) + 3] = cVar6;
        param_2[2] = param_2[2] + '\x01';
        iVar4 = FUN_004c405a(2,param_2,param_3);
        return iVar4;
      }
    }
  }
  *param_3 = 0xff;
  param_3[1] = 2;
  return 2;
}

