// FUN_0800a606 @ 0800a606

undefined8 FUN_0800a606(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = FUN_0800a9a0(param_1,param_2);
  if (uVar1 == 0x9000) {
    iVar2 = -0x6fff7000;
  }
  else {
    iVar2 = uVar1 + 0xaf000000;
  }
  return CONCAT44(param_4,iVar2);
}

