// func @ 0x4B7F34

undefined4 FUN_004b7f34(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  char local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_38[0] = '\0';
  uVar6 = 0;
  FUN_004b5428(DAT_004b8174);
  uVar1 = *param_2;
  DAT_004b8174[4] = 0;
  uVar2 = param_2[1];
  DAT_004b8174[1] = uVar2;
  cVar7 = param_2[2];
  if (cVar7 == '\0') {
    *param_3 = 0xff;
    param_3[1] = 2;
    uVar3 = 2;
  }
  else {
    FUN_004b34f4();
    local_34 = 0x1c200;
    local_30 = 0xc0;
    local_2c = 0;
    local_28 = 0x800;
    FUN_004b4300(0,&local_34);
    uVar5 = 3;
    for (; cVar7 != '\0'; cVar7 = cVar7 + -1) {
      uVar6 = param_2[uVar5 & 0xff];
      uVar5 = (uVar5 & 0xff) + 1;
      *DAT_004b8174 = uVar6;
      DAT_004b8174[6] = 0xc;
      DAT_004b8174[5] = 1;
      FUN_004b5462(DAT_004b8174);
      FUN_004b3c70(0x55);
      iVar4 = FUN_004b4090(local_38,10);
      if (iVar4 != 0) {
        if (local_38[0] == 'U') {
          *param_3 = 0;
          param_3[1] = 1;
        }
        else {
          *param_3 = 0;
          param_3[1] = 2;
        }
        break;
      }
      *param_3 = 0;
      param_3[1] = 0;
    }
    param_3[2] = uVar1;
    param_3[3] = uVar6;
    param_3[4] = uVar2;
    param_3[5] = 0;
    param_3[6] = 0;
    uVar3 = 7;
  }
  return uVar3;
}

