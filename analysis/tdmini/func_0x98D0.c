// FUN_080098d0 @ 080098d0

int FUN_080098d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_080096fc(param_1);
  if (((iVar1 != 0) && (*DAT_08009af8 != 0)) &&
     (iVar1 = FUN_0800a606(*(undefined4 *)*DAT_08009af8,0), iVar1 == -0x6fff7000)) {
    iVar1 = FUN_0800a636(*(undefined4 *)*DAT_08009af8);
    if (iVar1 == -0x6fff7000) {
      return *DAT_08009af8;
    }
    FUN_0800a6ae(*(undefined4 *)*DAT_08009af8);
  }
  return 0;
}

