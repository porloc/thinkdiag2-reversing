// func @ 0x4BCEDE

void FUN_004bcede(int param_1,int param_2,uint param_3)

{
  *DAT_004bcfd0 = 0;
  while (*DAT_004bcfd0 < param_3) {
    *(undefined1 *)(param_1 + *DAT_004bcfd0) = *(undefined1 *)(param_2 + *DAT_004bcfd0);
    *DAT_004bcfd0 = *DAT_004bcfd0 + 1;
  }
  return;
}

