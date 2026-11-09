// func @ 0x4CA334

undefined4 FUN_004ca334(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  uVar2 = 0;
  while( true ) {
    if (7 < (uVar2 & 0xff)) {
      return 1;
    }
    iVar1 = FUN_004ca49c(0x12,0,(uVar2 & 0xff) + 5,4,local_14,0,0,0,0,0x27,DAT_004cad4c,0x23,
                         DAT_004cad48);
    if (iVar1 != 0) break;
    if ((*DAT_004cad48 != '\x04') || (DAT_004cad48[1] != '\0')) {
      return 0;
    }
    uVar2 = (uVar2 & 0xff) + 1;
  }
  return 0;
}

