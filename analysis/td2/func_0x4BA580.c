// func @ 0x4BA580

undefined8 FUN_004ba580(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  FUN_004b2fc6(DAT_004ba5c0);
  iVar1 = 0;
  do {
    iVar1 = FUN_004b3038(iVar1);
    if (iVar1 == 0) {
      uVar3 = 0;
LAB_004ba5b8:
      return CONCAT44(in_r3,uVar3);
    }
    iVar2 = FUN_004b2fae();
    while (iVar1 = FUN_004ba51e(DAT_004ba5bc,0), iVar1 == 0) {
      iVar1 = FUN_004b2fae();
      if (0x60 < (uint)(iVar2 - iVar1)) {
        uVar3 = 1;
        goto LAB_004ba5b8;
      }
    }
  } while( true );
}

