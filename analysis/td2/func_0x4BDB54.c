// func @ 0x4BDB54

void FUN_004bdb54(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(uint *)(param_1 + iVar1 * 4) = *(uint *)(param_1 + iVar1 * 4) ^ *(uint *)(param_2 + iVar1 * 4)
    ;
  }
  return;
}

