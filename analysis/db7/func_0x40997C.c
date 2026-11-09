// func @ 0x40997C

bool FUN_0040997c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  DataMemoryBarrier(0x1f);
  *DAT_00409cec = 0;
  return iVar2 == 0;
}

