// FUN_080284b2 @ 080284b2

void FUN_080284b2(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  for (uVar2 = 0; (int)uVar2 < 0x100; uVar2 = uVar2 + 1) {
    uVar1 = uVar2;
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if ((int)(uVar1 << 0x1f) < 0) {
        uVar1 = DAT_08028ca0 ^ uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1;
      }
    }
    *(uint *)(param_1 + uVar2 * 4) = uVar1;
  }
  return;
}

