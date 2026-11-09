// func @ 0x409B44

void FUN_00409b44(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  FUN_004099d0(param_1,(int)(short)param_2);
  if (*param_3 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 1 << (param_2 & 0xff);
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & ~(1 << (param_2 & 0xff)) | uVar1;
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) & ~(3 << ((param_2 & 0x7f) << 1)) |
       (int)param_3[1] << ((param_2 & 0x7f) << 1);
  return;
}

