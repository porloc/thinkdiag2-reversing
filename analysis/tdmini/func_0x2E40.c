// FUN_08002e40 @ 08002e40

undefined8 FUN_08002e40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x110d);
  if ((uVar1 - 1 < 3) || (uVar1 == 5)) {
    uVar2 = FUN_08000294(param_1 + 0x1044,0,param_2,param_3);
  }
  else if (uVar1 == 6) {
    uVar2 = FUN_08000294(param_1 + 0x1044,2,param_2,param_3);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(param_4,uVar2);
}

