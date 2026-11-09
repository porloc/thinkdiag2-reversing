// FUN_08027a14 @ 08027a14

int FUN_08027a14(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = param_1;
  while (((uint)puVar3 & 3) != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    uVar4 = *puVar3;
    puVar3 = puVar2;
    if ((char)uVar4 == '\0') goto LAB_08027a46;
  }
  uVar4 = *puVar3;
  while ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
    puVar3 = puVar3 + 1;
    uVar4 = *puVar3;
  }
  cVar1 = (char)*puVar3;
  puVar2 = puVar3;
  while (puVar2 = (uint *)((int)puVar2 + 1), cVar1 != '\0') {
    cVar1 = *(char *)puVar2;
  }
LAB_08027a46:
  return (int)puVar2 - (int)((int)param_1 + 1);
}

