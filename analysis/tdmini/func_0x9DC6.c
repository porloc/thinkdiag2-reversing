// FUN_08009dc6 @ 08009dc6

int FUN_08009dc6(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint local_244;
  uint local_240;
  undefined4 local_23c;
  undefined1 auStack_238 [516];
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  uVar6 = 0x9000;
  local_244 = 0;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_080067d8(auStack_238,0x200);
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  iVar5 = 0;
  if ((((local_34 == 0) ||
       ((((char)local_30 != '\x01' && ((char)local_30 != '\x02')) || (local_2c == 0)))) ||
      (((local_28 % 0x10 != 0 || (local_28 < 0x10)) || (param_5 == 0)))) || (param_6 == (int *)0x0))
  {
    iVar2 = DAT_0800a098;
  }
  else {
    if (*DAT_0800a09c != 0) {
      local_240 = local_28 / 0x10;
      FUN_0800016c(auStack_238,0x200,0);
      uVar1 = 1;
      do {
        if (local_240 < uVar1) {
LAB_08009fde:
          *param_6 = iVar5;
          return 0;
        }
        FUN_08000348(auStack_238 + iVar3 * 0x10,local_2c + iVar2,0x10);
        iVar2 = iVar2 + 0x10;
        iVar3 = iVar3 + 1;
        if (uVar1 == local_240) {
          uVar6 = FUN_0800ad66(*(undefined4 *)(*DAT_0800a09c + 4),local_30 & 0xff,auStack_238,
                               iVar3 * 0x10,auStack_238,&local_244,uVar6);
          uVar1 = local_244;
          if ((char)local_30 == '\x01') {
            if (((uVar6 != 0x9000) || (local_244 < 0x10)) || ((local_244 & 0xf) != 0)) {
              iVar2 = uVar6 + 0x80000000;
              goto LAB_08009fec;
            }
            uVar1 = iVar3 * 0x10;
            FUN_08000348(param_5 + iVar4,auStack_238,iVar3 * 0x10);
          }
          else {
            if (uVar6 != 0x9000) {
              iVar2 = uVar6 + 0x80000000;
              goto LAB_08009fec;
            }
            FUN_08000348(param_5 + iVar4,auStack_238,local_244);
          }
          iVar5 = iVar5 + uVar1;
          goto LAB_08009fde;
        }
        if (0x1ff < (uint)(iVar3 * 0x10)) {
          uVar6 = FUN_0800ad66(*(undefined4 *)(*DAT_0800a09c + 4),1,auStack_238,0x200,auStack_238,
                               &local_244,uVar6);
          if ((((uVar6 != 0x9000) || (local_244 < 0x10)) || ((local_244 & 0xf) != 0)) ||
             (local_244 != 0x200)) {
            iVar2 = uVar6 + 0x80000000;
            goto LAB_08009fec;
          }
          iVar5 = iVar5 + 0x200;
          local_23c = 0x200;
          FUN_08000348(param_5 + iVar4,auStack_238,0x200);
          iVar4 = iVar4 + 0x200;
          FUN_0800016c(auStack_238,0x200,0);
          iVar3 = 0;
        }
        uVar1 = uVar1 + 1;
      } while( true );
    }
    iVar2 = DAT_0800a094;
  }
LAB_08009fec:
  *param_6 = 0;
  return iVar2;
}

