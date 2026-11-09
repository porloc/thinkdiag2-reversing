// func @ 0x4BA378

undefined4 FUN_004ba378(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_1 = 0xac;
  uVar1 = *param_2 / param_2[1] >> 4;
  if ((uVar1 == 0) || (0xffff < uVar1)) {
    uVar2 = 1;
  }
  else {
    param_1[8] = uVar1;
    param_1[1] = param_2[2];
    *param_1 = 0x50;
    uVar2 = 0;
  }
  return uVar2;
}

