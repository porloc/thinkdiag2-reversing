// FUN_08003a82 @ 08003a82

undefined2 FUN_08003a82(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xfffe;
  }
  else {
    FUN_08002d9a(param_1);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0x84;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 0xe) = param_3;
    uVar1 = FUN_080032a2(param_1);
    FUN_08000348(param_2,*(undefined4 *)(param_1 + 0x1040),*(undefined4 *)(param_1 + 0x1038));
  }
  return uVar1;
}

