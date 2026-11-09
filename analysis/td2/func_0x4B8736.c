// func @ 0x4B8736

void FUN_004b8736(undefined4 param_1,char *param_2,char *param_3,uint param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char acStack_50 [36];
  undefined4 local_2c;
  uint local_28;
  
  uVar4 = 0;
  local_2c = param_1;
  local_28 = param_4;
  if ((*param_2 == 'x') || (*param_2 == 'X')) {
    param_4 = param_4 & 0xff;
  }
  else {
    param_4 = FUN_004b864c(param_2);
  }
  if ((*param_3 == 'x') || (*param_3 == 'X')) {
    uVar1 = local_28 & 0xff;
  }
  else {
    uVar1 = FUN_004b864c(param_3);
  }
  if (param_5 == '%') {
    uVar4 = param_4 - uVar1 * (param_4 / uVar1);
  }
  else if (param_5 == '&') {
    uVar4 = uVar1 & param_4;
  }
  else if (param_5 == '*') {
    uVar4 = uVar1 * param_4;
  }
  else if (param_5 == '+') {
    uVar4 = uVar1 + param_4;
  }
  else if (param_5 == '-') {
    uVar4 = param_4 - uVar1;
  }
  else if (param_5 == '/') {
    uVar4 = param_4 / uVar1;
  }
  else if (param_5 == '^') {
    uVar4 = uVar1 ^ param_4;
  }
  else if (param_5 == '|') {
    uVar4 = uVar1 | param_4;
  }
  FUN_004b09c0(acStack_50,0x20,0);
  iVar2 = FUN_004b8490(param_2);
  FUN_004b27ac(acStack_50,param_2,iVar2);
  acStack_50[iVar2] = param_5;
  uVar3 = FUN_004b8490(param_3);
  FUN_004b27ac(acStack_50 + iVar2 + 1,param_3,uVar3);
  FUN_004b8558(local_2c,acStack_50,uVar4);
  return;
}

