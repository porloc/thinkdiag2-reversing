// func @ 0x4BED92

uint FUN_004bed92(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int local_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  local_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_004c9eb0(&local_28,0,0x10);
  FUN_004c9ec4(&local_28,param_1,param_2 & 0xff);
  *(char *)((param_4 & 0xff) + param_1) = (char)param_3;
  param_4 = param_4 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_4 != param_2) {
    for (uVar1 = 0; (uVar1 & 0xff) < param_4; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      *(undefined1 *)(uVar1 + param_1) = *(undefined1 *)((int)&local_28 + uVar1);
    }
    for (; (param_4 & 0xff) < param_2; param_4 = (param_4 & 0xff) + 1) {
      *(undefined1 *)((param_4 & 0xff) + param_1 + 1) =
           *(undefined1 *)((int)&local_28 + (param_4 & 0xff));
    }
  }
  return param_2 + 1 & 0xff;
}

