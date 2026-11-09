// func @ 0x4099B2

void FUN_004099b2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004099a4(param_1);
  if (iVar1 != 0) {
    *DAT_00409cec = 1;
    DataMemoryBarrier(0x1f);
    enableIRQinterrupts();
  }
  return;
}

