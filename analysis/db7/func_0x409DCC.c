// func @ 0x409DCC

uint FUN_00409dcc(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  bool bVar5;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar5 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar5) {
      in_r12 = (uint)(byte)*param_2;
      uVar1 = (byte)*param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  do {
    uVar2 = param_3;
    param_3 = uVar2 - 4;
    bVar5 = param_3 == 0;
    if (3 < uVar2) {
      uVar1 = *param_1;
      in_r12 = *param_2;
      bVar5 = uVar1 == in_r12;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  } while (bVar5);
  if (param_3 < 0xfffffffc) {
    uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
    uVar4 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
            in_r12 >> 0x18;
    uVar2 = uVar1 - uVar4;
    bVar5 = uVar2 != 0;
    if (uVar1 < uVar4) {
      uVar2 = 0xffffffff;
    }
    if (uVar1 >= uVar4 && bVar5) {
      uVar2 = 1;
    }
    return uVar2;
  }
  do {
    uVar3 = uVar2;
    uVar4 = uVar3 - 1;
    if (uVar3 != 0) {
      uVar1 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
      uVar4 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    uVar2 = uVar3 - 1;
  } while (uVar4 == 0);
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

