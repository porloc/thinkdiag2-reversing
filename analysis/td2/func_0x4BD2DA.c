// func @ 0x4BD2DA

void FUN_004bd2da(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    *(byte *)(param_1 + iVar1) = *(byte *)(param_1 + iVar1) ^ *(byte *)(param_2 + iVar1);
  }
  return;
}

