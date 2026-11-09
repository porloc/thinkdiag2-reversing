// func @ 0x4BE7A6

undefined4
FUN_004be7a6(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  param_1[4] = (char)((uint)param_3 >> 0x18);
  param_1[5] = (char)((uint)param_3 >> 0x10);
  param_1[6] = (char)((uint)param_3 >> 8);
  param_1[7] = (char)param_3;
  param_1[8] = (char)((uint)param_4 >> 0x18);
  param_1[9] = (char)((uint)param_4 >> 0x10);
  param_1[10] = (char)((uint)param_4 >> 8);
  param_1[0xb] = (char)param_4;
  return 0xc;
}

