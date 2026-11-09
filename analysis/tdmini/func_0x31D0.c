// FUN_080031d0 @ 080031d0

ulonglong FUN_080031d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 2) == '\0') {
    uVar1 = FUN_08002ef4(param_1);
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    uVar1 = FUN_08002ef4(param_1);
  }
  else {
    uVar1 = 0xfffc;
  }
  return CONCAT44(param_4,uVar1) & 0xffffffff0000ffff;
}

