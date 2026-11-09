// func @ 0x4BA2B0

undefined4 FUN_004ba2b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004ba280(param_1);
  *DAT_004ba370 = 0;
  if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_004ba228(param_1,*param_2,param_3), iVar1 != 0)
     ) {
    uVar2 = 1;
  }
  else {
    *DAT_004ba370 = *DAT_004ba370 | param_2[1] | param_2[2] | param_2[4] | param_2[3];
    *DAT_004ba370 = *DAT_004ba370;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | *DAT_004ba370;
    uVar2 = 0;
  }
  return uVar2;
}

