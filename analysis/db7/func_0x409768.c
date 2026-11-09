// func @ 0x409768

undefined4 FUN_00409768(void)

{
  bool bVar1;
  undefined4 unaff_r7;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_004096d0(0x1a);
  FUN_004096e4(0x1a,2);
  FUN_004096bc(0x1a);
  FUN_004096d0(0xe);
  FUN_004096e4(0xe,1);
  FUN_004096bc(0xe);
  FUN_004096d0(0x22);
  FUN_004096e4(0x22,0);
  FUN_004096bc(0x22);
  FUN_004096d0(0x18);
  FUN_004096e4(0x18,5);
  FUN_004096bc(0x18);
  FUN_004096d0(0x10);
  FUN_004096e4(0x10,1);
  FUN_004096bc(0x10);
  (*(code *)*DAT_00409820)(DAT_00409810,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  (*(code *)*DAT_00409824)(DAT_00409810);
  return unaff_r7;
}

