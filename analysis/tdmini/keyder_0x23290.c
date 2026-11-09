// FUN_08023290 @ 08023290

bool FUN_08023290(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  for (uVar2 = 0;
      (uVar1 = FUN_08027a14(param_1), (uVar2 & 0xff) < uVar1 &&
      (*(char *)(param_1 + (uVar2 & 0xff)) != '+')); uVar2 = (uVar2 & 0xff) + 1) {
  }
  uVar1 = FUN_08027a14(param_1);
  bVar3 = (uVar2 & 0xff) < uVar1;
  if (bVar3) {
    FUN_0801fbdc(param_1 + (uVar2 & 0xff),param_1 + (uVar2 & 0xff) + 2,8);
  }
  return bVar3;
}

