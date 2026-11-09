// func @ 0x4BCF10

void FUN_004bcf10(int param_1,undefined1 param_2,uint param_3)

{
  *DAT_004bcfd0 = 0;
  while (*DAT_004bcfd0 < param_3) {
    *(undefined1 *)(param_1 + *DAT_004bcfd0) = param_2;
    *DAT_004bcfd0 = *DAT_004bcfd0 + 1;
  }
  return;
}

