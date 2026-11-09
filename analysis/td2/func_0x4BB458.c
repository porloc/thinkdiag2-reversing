// func @ 0x4BB458

undefined4 FUN_004bb458(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [196];
  
  FUN_004b2824(auStack_e0,0xc0);
  FUN_004b2824(auStack_100,0x20);
  uVar2 = 0;
  while( true ) {
    if (5 < (uVar2 & 0xff)) {
      FUN_004b27ac(param_1,auStack_e0,0xc0);
      return 0xc0;
    }
    cVar1 = FUN_004c9c98(2,(uVar2 & 0xff) + 10,0,0,auStack_100,0x20);
    if (cVar1 != '\0') break;
    FUN_004b27ac(auStack_e0 + (uVar2 & 0xff) * 0x20,auStack_100,0x20);
    uVar2 = (uVar2 & 0xff) + 1;
  }
  return 0;
}

