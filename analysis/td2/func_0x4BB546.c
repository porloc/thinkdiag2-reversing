// func @ 0x4BB546

void FUN_004bb546(int param_1,int param_2,uint param_3)

{
  *DAT_004bb660 = (*(uint *)(param_1 + 0x10) & 0x1ff) >> 3;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  if (*(uint *)(param_1 + 0x10) < param_3 << 3) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  *DAT_004bb664 = 0x40 - *DAT_004bb660;
  if (param_3 < *DAT_004bb664) {
    *DAT_004bb668 = 0;
  }
  else {
    FUN_004bcede(*DAT_004bb660 + param_1 + 0x18,param_2,*DAT_004bb664);
    FUN_004bb670(param_1,param_1 + 0x18);
    *DAT_004bb668 = *DAT_004bb664;
    while (*DAT_004bb668 + 0x3f < param_3) {
      FUN_004bb670(param_1,param_2 + *DAT_004bb668);
      *DAT_004bb668 = *DAT_004bb668 + 0x40;
    }
    *DAT_004bb660 = 0;
  }
  FUN_004bcede(*DAT_004bb660 + param_1 + 0x18,param_2 + *DAT_004bb668,param_3 - *DAT_004bb668);
  return;
}

