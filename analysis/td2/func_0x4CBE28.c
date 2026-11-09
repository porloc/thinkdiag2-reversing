// func @ 0x4CBE28

longlong FUN_004cbe28(void)

{
  longlong lVar1;
  uint uVar2;
  uint unaff_r7;
  
  FUN_004cb85e(3,1,0);
  uVar2 = FUN_004cbc50();
  lVar1 = (ulonglong)uVar2 * 100 + (ulonglong)DAT_004cbea4;
  FUN_004cc1ec((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_004cbea8,0);
  thunk_EXT_FUN_204028d8();
  FUN_004cb85e(3,1,1);
  uVar2 = FUN_004cbc50();
  lVar1 = (ulonglong)uVar2 * 5 + 0x172b;
  FUN_004cc1ec((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
  thunk_EXT_FUN_204028d8();
  FUN_004cbd58();
  return (ulonglong)unaff_r7 << 0x20;
}

