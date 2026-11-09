// func @ 0x4CAD5C

void FUN_004cad5c(byte *param_1)

{
  byte bVar1;
  
  *param_1 = (&DAT_004cb6bc)[*param_1];
  param_1[4] = (&DAT_004cb6bc)[param_1[4]];
  param_1[8] = (&DAT_004cb6bc)[param_1[8]];
  param_1[0xc] = (&DAT_004cb6bc)[param_1[0xc]];
  bVar1 = (&DAT_004cb6bc)[param_1[1]];
  param_1[1] = (&DAT_004cb6bc)[param_1[5]];
  param_1[5] = (&DAT_004cb6bc)[param_1[9]];
  param_1[9] = (&DAT_004cb6bc)[param_1[0xd]];
  param_1[0xd] = bVar1;
  bVar1 = (&DAT_004cb6bc)[param_1[2]];
  param_1[2] = (&DAT_004cb6bc)[param_1[10]];
  param_1[10] = bVar1;
  bVar1 = (&DAT_004cb6bc)[param_1[6]];
  param_1[6] = (&DAT_004cb6bc)[param_1[0xe]];
  param_1[0xe] = bVar1;
  bVar1 = (&DAT_004cb6bc)[param_1[0xf]];
  param_1[0xf] = (&DAT_004cb6bc)[param_1[0xb]];
  param_1[0xb] = (&DAT_004cb6bc)[param_1[7]];
  param_1[7] = (&DAT_004cb6bc)[param_1[3]];
  param_1[3] = bVar1;
  return;
}

