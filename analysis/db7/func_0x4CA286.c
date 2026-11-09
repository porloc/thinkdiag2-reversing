// func @ 0x4CA286

undefined8 FUN_004ca286(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10;
  
  local_10 = 0;
  FUN_004ca310();
  FUN_004ca226();
  bVar2 = FUN_004ca450(DAT_004cad44,4,&local_10);
  if (bVar2 != 0) {
    uVar3 = (uint)bVar2;
    goto LAB_004ca30e;
  }
  if ((char)local_10 == '\x04') {
    if (local_10._1_1_ == '\x11') {
      if (local_10._2_1_ == '3') {
        uVar3 = 0;
        if (local_10._3_1_ == 'C') goto LAB_004ca2e2;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
LAB_004ca2e2:
  if (uVar3 != 0) {
    uVar4 = FUN_004ca0e2();
    lVar1 = (ulonglong)uVar4 * 100 + 0x172b;
    FUN_004cc928((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
    thunk_EXT_FUN_204048dc();
  }
LAB_004ca30e:
  return CONCAT44(local_10,uVar3);
}

