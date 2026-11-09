// func @ 0x4C9CB6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c9cb6(undefined4 param_1,char *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uStack_4c4;
  short sStack_4c0;
  short sStack_4be;
  int iStack_4bc;
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [64];
  undefined1 auStack_468 [64];
  undefined1 auStack_428 [1024];
  undefined4 uStack_28;
  
  uStack_28 = param_1;
  FUN_004ad04c(auStack_468,0x40);
  cVar6 = *param_2;
  if (cVar6 == '\0') {
    bVar1 = param_2[1];
    if (bVar1 < 0x41) {
      sStack_4be = CONCAT11(param_2[bVar1],param_2[bVar1 + 1]);
      FUN_004b26e8(auStack_468,param_2 + 2,bVar1);
      FUN_004cb690(auStack_468,bVar1 - 2,_DAT_004ca044,auStack_4a8);
      sStack_4c0 = FUN_004cbebc(auStack_4a8);
      if (sStack_4be == sStack_4c0) {
        *_DAT_004ca048 = 1;
        FUN_004b26e8(_DAT_004ca04c,auStack_4a8,0x40);
        FUN_004cbf38(auStack_428);
        FUN_004cc054(auStack_4a8,auStack_428,auStack_4b8);
        FUN_004cc5f2(auStack_4b8,0xc,*_DAT_004ca044,*_DAT_004ca050);
        FUN_004cc5f2(auStack_4b8,0xd,_DAT_004ca044[1],_DAT_004ca050[1]);
        FUN_004cc5f2(auStack_4b8,0xe,_DAT_004ca044[2],_DAT_004ca050[2]);
        FUN_004cc5f2(auStack_4b8,0xf,_DAT_004ca044[3],_DAT_004ca050[3]);
        uVar2 = FUN_004bb6d8(auStack_4a8);
        FUN_004cb666(auStack_4a8,uVar2,auStack_4b8,param_3 + 1);
        uVar3 = FUN_004bb6d8(auStack_4a8);
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
    iVar4 = func_0x004c75a8(&uStack_4c4);
    if (iVar4 == 0) {
      *_DAT_004ca050 = param_2[6];
      _DAT_004ca050[1] = param_2[7];
      _DAT_004ca050[2] = param_2[8];
      _DAT_004ca050[3] = param_2[9];
      FUN_004b26e8(_DAT_004ca044,param_2 + 2,8);
      *_DAT_004ca044 = (char)((uint)uStack_4c4 >> 0x18);
      _DAT_004ca044[1] = (char)((uint)uStack_4c4 >> 0x10);
      _DAT_004ca044[2] = (char)((uint)uStack_4c4 >> 8);
      _DAT_004ca044[3] = (char)uStack_4c4;
      iVar4 = func_0x004cc66c(param_3 + 1,param_2 + 2,uStack_4c4);
      if (iVar4 == 0) {
        *param_3 = 0;
        return 9;
      }
    }
  }
  else {
    if (cVar6 == '\x02') {
      *param_3 = 0xff;
      param_3[1] = 2;
      return 2;
    }
    if (cVar6 == '\x03') {
      if ((CONCAT11(param_2[2],param_2[3]) < 0x20) &&
         (pcVar5 = *(code **)(_DAT_004ca054 + (uint)CONCAT11(param_2[2],param_2[3]) * 4),
         pcVar5 != (code *)0x0)) {
        iStack_4bc = 0x200;
        FUN_004b4048(param_3,0x200,0);
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
          *_DAT_004ca058 = 0xff;
        }
        else if (param_2[2] == 'Z') {
          *_DAT_004ca058 = 0;
        }
        *param_3 = 0xff;
        param_3[1] = 0;
        return 2;
      }
      if (cVar6 == '\x06') {
        uVar7 = (uint)(byte)param_2[1];
        iStack_4bc = (byte)param_2[1] + 1;
        FUN_004b40b0(param_2 + 2,param_2 + 1,iStack_4bc);
        *param_2 = '\x01';
        param_2[1] = '\x01';
        FUN_004caaf8(0,param_2 + 8,0xc);
        cVar6 = '\0';
        for (uVar3 = 0; (uVar3 & 0xff) < (uVar7 & 0xff); uVar3 = (uVar3 & 0xff) + 1) {
          cVar6 = param_2[(uVar3 & 0xff) + 3] + cVar6;
        }
        param_2[(uVar7 & 0xff) + 3] = cVar6;
        param_2[2] = param_2[2] + '\x01';
        iVar4 = FUN_004a5386(2,param_2,param_3);
        return iVar4;
      }
      if (cVar6 == '\a') {
        if (param_2[2] == -0x5b) {
          *_DAT_004ca05c = 0xff;
        }
        else if (param_2[2] == 'Z') {
          *_DAT_004ca05c = 0;
        }
        *param_3 = 0xff;
        param_3[1] = 0;
        return 2;
      }
    }
  }
  *param_3 = 0xff;
  param_3[1] = 2;
  return 2;
}

