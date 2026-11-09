// FUN_0800a358 @ 0800a358

int FUN_0800a358(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 uStack_4;
  
  local_c = &uStack_4;
  local_10 = 0;
  if (param_2 == 0) {
    local_18 = (undefined1 *)0x0;
    local_14 = 0;
  }
  else {
    local_14 = param_2 + -1;
    local_18 = param_1;
  }
  uStack_4 = param_4;
  iVar1 = FUN_08003ea8((int)&DAT_0800a398 + DAT_0800a398,&local_18,param_3,&local_c);
  if (local_18 != (undefined1 *)0x0) {
    *local_18 = 0;
  }
  if (-1 < iVar1) {
    iVar1 = local_10;
  }
  return iVar1;
}

