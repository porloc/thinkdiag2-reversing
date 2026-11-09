// func @ 0x4099E8

undefined4 FUN_004099e8(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00409cf8 + param_1) != -1) {
    uVar1 = FUN_0040997c();
    *(char *)(DAT_00409cf8 + param_1) = *(char *)(DAT_00409cf8 + param_1) + '\x01';
    FUN_004099b2(uVar1);
    return param_4;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

