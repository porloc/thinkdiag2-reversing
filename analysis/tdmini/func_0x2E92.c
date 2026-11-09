// FUN_08002e92 @ 08002e92

undefined4 FUN_08002e92(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == -0x1044) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x110d);
    if ((uVar2 - 1 < 3) || (uVar2 == 5)) {
      uVar1 = FUN_080002e8(param_1 + 0x1044,0,param_2,0x800);
    }
    else {
      if (uVar2 != 6) {
        return 0xffffffff;
      }
      uVar1 = FUN_080002e8(param_1 + 0x1044,2,param_2,0x800);
    }
  }
  return uVar1;
}

