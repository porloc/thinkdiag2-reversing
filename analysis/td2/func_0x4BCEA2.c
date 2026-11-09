// func @ 0x4BCEA2

void FUN_004bcea2(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(uint *)(param_1 + iVar1 * 4) =
         CONCAT13(*(undefined1 *)(param_2 + uVar2 + 3),
                  CONCAT12(*(undefined1 *)(param_2 + uVar2 + 2),
                           CONCAT11(*(undefined1 *)(param_2 + uVar2 + 1),
                                    *(undefined1 *)(param_2 + uVar2))));
    iVar1 = iVar1 + 1;
  }
  return;
}

