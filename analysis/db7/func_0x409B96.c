// func @ 0x409B96

void FUN_00409b96(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00409a80();
  param_1[1] = uVar1;
  param_1[2] = DAT_00409d08;
  param_1[3] = 0x40000;
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  return;
}

