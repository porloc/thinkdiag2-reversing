// FUN_08006aa8 @ 08006aa8

undefined4 FUN_08006aa8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (param_3 <= uVar1) {
      return 1;
    }
    if (*(char *)(param_1 + uVar1) != *(char *)(param_2 + uVar1)) break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}

