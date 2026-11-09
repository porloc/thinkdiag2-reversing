// FUN_0800d350 @ 0800d350

undefined8 FUN_0800d350(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x800;
  if (param_1 < DAT_0800d3c0) {
    uVar4 = param_2 >> 0xb;
    if ((param_2 & 0xfff) != 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = param_2 >> 0xc;
    if ((param_2 & 0xfff) != 0) {
      uVar4 = uVar4 + 1;
    }
    iVar5 = 0x1000;
  }
  FUN_08008878();
  FUN_08008d00(0x307);
  FUN_08008d00(0x1307);
  uVar3 = 0;
  do {
    if (uVar4 <= uVar3) {
      FUN_080088c4();
      uVar2 = 0;
LAB_0800d3be:
      return CONCAT44(param_4,uVar2);
    }
    iVar1 = FUN_080088f4(uVar3 * iVar5 + param_1);
    if (iVar1 != 0) {
      FUN_080088c4();
      uVar2 = 1;
      goto LAB_0800d3be;
    }
    FUN_08008d00(0x307);
    FUN_08008d00(0x1307);
    uVar3 = uVar3 + 1;
  } while( true );
}

