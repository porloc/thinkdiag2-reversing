// FUN_080234b0 @ 080234b0

/* WARNING: Removing unreachable block (ram,0x080234d4) */

int FUN_080234b0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_44;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  uint local_28;
  
  local_2c = param_1;
  local_28 = param_3;
  FUN_0801a924(auStack_40,0x10);
  local_44 = 0x1000;
  iVar2 = FUN_080257b0(0);
  if (iVar2 == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = FUN_08025964(iVar2,local_2c,local_28 & 0xffff,param_2,&local_44);
    FUN_080257ce(iVar2);
    if (iVar3 == 0) {
      FUN_08023290(DAT_08023704);
      FUN_0801fb74(auStack_40,0x10,0);
      iVar2 = FUN_080230ec(DAT_08023704,auStack_40);
      if (iVar2 == 0x10) {
        FUN_080283fc(param_2,local_44,auStack_40,param_4 + 0x28);
        iVar2 = FUN_080225dc(param_4 + 0x28,param_4,param_4 + 0x1e);
        if (iVar2 < 0) {
          iVar3 = 4;
        }
        else {
          FUN_080256f4(DAT_0802370c);
          bVar1 = FUN_08027a14(DAT_0802370c);
          if (((bVar1 < 0x21) && (bVar1 != 0)) &&
             (iVar2 = FUN_08028cac(DAT_0802370c,param_4,bVar1), iVar2 == 0)) {
            *DAT_08023714 = 1;
            iVar3 = 0;
          }
          else {
            FUN_0801fb74(param_4 + 0x28,0x400,0);
            iVar3 = 5;
          }
        }
      }
      else {
        iVar3 = 3;
      }
    }
  }
  return iVar3;
}

