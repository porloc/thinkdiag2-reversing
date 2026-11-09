// FUN_0800a9a0 @ 0800a9a0

undefined4 FUN_0800a9a0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_080001ee(param_1 + 0x1048,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0x9000;
  }
  return uVar2;
}

