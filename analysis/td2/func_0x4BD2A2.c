// func @ 0x4BD2A2

void FUN_004bd2a2(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    *(undefined1 *)(DAT_004bd494 + iVar1) =
         *(undefined1 *)(*(char *)(param_3 + iVar1) + param_2 + -1);
  }
  FUN_004c9ec4(param_1,DAT_004bd494,param_4);
  return;
}

