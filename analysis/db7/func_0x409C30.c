// func @ 0x409C30

undefined4 FUN_00409c30(byte param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(DAT_00409d0c + (uint)param_1 * 0x40 + param_2 * 4) != 0) {
    (**(code **)(DAT_00409d0c + (uint)param_1 * 0x40 + param_2 * 4))();
  }
  return param_4;
}

