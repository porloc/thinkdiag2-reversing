// FUN_08027a4c @ 08027a4c

uint * FUN_08027a4c(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  do {
    if (((uint)puVar2 & 3) == 0) {
      uVar3 = *param_2;
      while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
        *puVar2 = uVar3;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
        uVar3 = *param_2;
      }
      cVar1 = (char)*param_2;
      while( true ) {
        param_2 = (uint *)((int)param_2 + 1);
        *(char *)puVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = *(char *)param_2;
        puVar2 = (uint *)((int)puVar2 + 1);
      }
      return param_1;
    }
    uVar3 = *param_2;
    *(char *)puVar2 = (char)uVar3;
    puVar2 = (uint *)((int)puVar2 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  } while ((char)uVar3 != '\0');
  return param_1;
}

