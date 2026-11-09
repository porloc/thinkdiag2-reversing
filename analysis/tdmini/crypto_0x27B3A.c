// FUN_08027b3a @ 08027b3a

void FUN_08027b3a(byte *param_1)

{
  byte bVar1;
  
  *param_1 = *(byte *)(DAT_08028224 + (uint)*param_1);
  param_1[4] = *(byte *)(DAT_08028224 + (uint)param_1[4]);
  param_1[8] = *(byte *)(DAT_08028224 + (uint)param_1[8]);
  param_1[0xc] = *(byte *)(DAT_08028224 + (uint)param_1[0xc]);
  bVar1 = *(byte *)(DAT_08028224 + (uint)param_1[0xd]);
  param_1[0xd] = *(byte *)(DAT_08028224 + (uint)param_1[9]);
  param_1[9] = *(byte *)(DAT_08028224 + (uint)param_1[5]);
  param_1[5] = *(byte *)(DAT_08028224 + (uint)param_1[1]);
  param_1[1] = bVar1;
  bVar1 = *(byte *)(DAT_08028224 + (uint)param_1[2]);
  param_1[2] = *(byte *)(DAT_08028224 + (uint)param_1[10]);
  param_1[10] = bVar1;
  bVar1 = *(byte *)(DAT_08028224 + (uint)param_1[6]);
  param_1[6] = *(byte *)(DAT_08028224 + (uint)param_1[0xe]);
  param_1[0xe] = bVar1;
  bVar1 = *(byte *)(DAT_08028224 + (uint)param_1[3]);
  param_1[3] = *(byte *)(DAT_08028224 + (uint)param_1[7]);
  param_1[7] = *(byte *)(DAT_08028224 + (uint)param_1[0xb]);
  param_1[0xb] = *(byte *)(DAT_08028224 + (uint)param_1[0xf]);
  param_1[0xf] = bVar1;
  return;
}

