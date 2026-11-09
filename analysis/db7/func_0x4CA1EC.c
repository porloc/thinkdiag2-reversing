// func @ 0x4CA1EC

undefined4 FUN_004ca1ec(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    iVar1 = FUN_004ca7b2(1);
    if (iVar1 == 0) {
      return in_r3;
    }
    if (((iVar1 == 1) && (iVar1 = FUN_004ca334(), iVar1 != 0)) &&
       (iVar1 = FUN_004ca72c(1), iVar1 != 0)) break;
  }
  if (iVar2 != 3) {
    return in_r3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

