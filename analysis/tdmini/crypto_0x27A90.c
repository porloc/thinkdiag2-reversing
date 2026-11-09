// FUN_08027a90 @ 08027a90

void FUN_08027a90(byte *param_1)

{
  byte bVar1;
  
  *param_1 = *(byte *)(DAT_08028220 + (uint)*param_1);
  param_1[4] = *(byte *)(DAT_08028220 + (uint)param_1[4]);
  param_1[8] = *(byte *)(DAT_08028220 + (uint)param_1[8]);
  param_1[0xc] = *(byte *)(DAT_08028220 + (uint)param_1[0xc]);
  bVar1 = *(byte *)(DAT_08028220 + (uint)param_1[1]);
  param_1[1] = *(byte *)(DAT_08028220 + (uint)param_1[5]);
  param_1[5] = *(byte *)(DAT_08028220 + (uint)param_1[9]);
  param_1[9] = *(byte *)(DAT_08028220 + (uint)param_1[0xd]);
  param_1[0xd] = bVar1;
  bVar1 = *(byte *)(DAT_08028220 + (uint)param_1[2]);
  param_1[2] = *(byte *)(DAT_08028220 + (uint)param_1[10]);
  param_1[10] = bVar1;
  bVar1 = *(byte *)(DAT_08028220 + (uint)param_1[6]);
  param_1[6] = *(byte *)(DAT_08028220 + (uint)param_1[0xe]);
  param_1[0xe] = bVar1;
  bVar1 = *(byte *)(DAT_08028220 + (uint)param_1[0xf]);
  param_1[0xf] = *(byte *)(DAT_08028220 + (uint)param_1[0xb]);
  param_1[0xb] = *(byte *)(DAT_08028220 + (uint)param_1[7]);
  param_1[7] = *(byte *)(DAT_08028220 + (uint)param_1[3]);
  param_1[3] = bVar1;
  return;
}

