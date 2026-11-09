// func @ 0x4BA228

undefined4 FUN_004ba228(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 < (uint)(param_2 << 4)) {
    iVar4 = 8;
  }
  else {
    iVar4 = 0x10;
  }
  uVar1 = (((uint)(param_2 * iVar4) >> 1) + param_3 * 8) / (uint)(param_2 * iVar4);
  uVar2 = uVar1 >> 3;
  if ((uVar2 == 0) || (0xffff < uVar2)) {
    uVar3 = 1;
  }
  else {
    if (iVar4 == 8) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000;
    }
    *(uint *)(param_1 + 0x20) = uVar2 | (uVar1 & 7) << 0x10;
    uVar3 = 0;
  }
  return uVar3;
}

