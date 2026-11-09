// func @ 0x4CBF52

void FUN_004cbf52(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_004cbf44();
    FUN_004cc1ec(uVar2 + DAT_004cbfa8,CARRY4(uVar2,DAT_004cbfa8),DAT_004cbfac,0);
    thunk_EXT_FUN_204028d8();
  }
  else {
    uVar2 = FUN_004cbf44();
    lVar1 = (ulonglong)uVar2 * (ulonglong)param_1 + 0x172b;
    FUN_004cc1ec((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0x172c,0);
    thunk_EXT_FUN_204028d8();
  }
  return;
}

