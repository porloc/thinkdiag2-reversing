// FUN_080256f4 @ 080256f4

void FUN_080256f4(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 & 0xff) < 0x10; uVar2 = (uVar2 & 0xff) + 1) {
    uVar1 = FUN_08028d58((uVar2 & 0xff) + 5 & 0xff);
    *(char *)(param_1 + (uVar2 & 0xff) * 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(param_1 + (uVar2 & 0xff) * 2 + 1) = (char)uVar1;
  }
  return;
}

