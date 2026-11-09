// FUN_08028bb0 @ 08028bb0

char FUN_08028bb0(int param_1,byte param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_38 [20];
  
  FUN_0801fb74(local_38,0x10,0);
  FUN_0801f388(local_38,param_1,param_2);
  uVar1 = param_4 & 0xff;
  *(undefined1 *)(param_1 + uVar1) = param_3;
  if ((param_4 & 0xff) != (uint)param_2) {
    for (uVar2 = 0; (uVar2 & 0xff) < (param_4 & 0xff); uVar2 = (uVar2 & 0xff) + 1) {
      *(undefined1 *)(param_1 + (uVar2 & 0xff)) = local_38[uVar2 & 0xff];
    }
    for (; (uVar1 & 0xff) < (uint)param_2; uVar1 = (uVar1 & 0xff) + 1) {
      *(undefined1 *)(param_1 + (uVar1 & 0xff) + 1) = local_38[uVar1 & 0xff];
    }
  }
  return param_2 + 1;
}

