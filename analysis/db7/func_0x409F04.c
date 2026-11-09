// func @ 0x409F04

undefined1 FUN_00409f04(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((uint)param_2 <= (uVar1 & 0xff)) {
      return 0;
    }
    if (*(char *)(param_1 + (uVar1 & 0xff)) == '\0') break;
    if ((*(char *)(param_1 + (uVar1 & 0xff)) < ' ') ||
       (*(char *)(param_1 + (uVar1 & 0xff)) == '\x7f')) {
      return 0;
    }
    uVar1 = (uVar1 & 0xff) + 1;
  }
  return 1;
}

