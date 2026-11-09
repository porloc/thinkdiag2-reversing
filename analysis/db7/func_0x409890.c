// func @ 0x409890

undefined4 FUN_00409890(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_r10;
  
  if (*DAT_0040995c < 7) {
    for (uVar2 = 0; (uVar2 & 0xff) <= *DAT_0040995c; uVar2 = (uVar2 & 0xff) + 1) {
      unaff_r10 = (int *)(DAT_00409958 + (uVar2 & 0xff) * 0x10);
      if ((*unaff_r10 == param_2) && (unaff_r10[1] == param_3)) break;
    }
    *unaff_r10 = param_2;
    unaff_r10[1] = param_3;
    unaff_r10[2] = param_4;
    unaff_r10[3] = param_5;
    if ((uVar2 & 0xff) == *DAT_0040995c + 1) {
      *DAT_0040995c = *DAT_0040995c + 1;
    }
    FUN_004091ea(param_1,param_3,param_4);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

