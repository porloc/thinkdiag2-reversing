// func @ 0x4B902C

bool FUN_004b902c(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  for (uVar2 = 0;
      (uVar1 = FUN_004bcfd4(param_1), (uVar2 & 0xff) < uVar1 &&
      (*(char *)(param_1 + (uVar2 & 0xff)) != '+')); uVar2 = (uVar2 & 0xff) + 1) {
  }
  uVar1 = FUN_004bcfd4(param_1);
  bVar3 = (uVar2 & 0xff) < uVar1;
  if (bVar3) {
    FUN_004ab0c4(param_1 + (uVar2 & 0xff),param_1 + (uVar2 & 0xff) + 2,8);
  }
  return bVar3;
}

