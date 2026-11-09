// FUN_080075dc @ 080075dc

int FUN_080075dc(int *param_1,byte *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_6c;
  undefined4 uStack_64;
  undefined2 uStack_60;
  int iStack_5e;
  undefined2 uStack_5a;
  int iStack_58;
  uint uStack_54;
  undefined2 uStack_50;
  int iStack_4e;
  byte *pbStack_4a;
  undefined2 uStack_46;
  int iStack_44;
  byte *pbStack_40;
  undefined2 uStack_3c;
  int iStack_3a;
  byte *pbStack_36;
  byte *pbStack_32;
  int *piStack_28;
  
  uStack_64 = 0;
  iVar2 = DAT_08007c54;
  if ((((param_2 != (byte *)0x0) && (param_3 != 0)) &&
      (uStack_6c = CONCAT11(*param_2,param_2[1]), (ushort)(uStack_6c << 8 | (ushort)*param_2) == 2))
     && (((2 < param_3 && (iStack_5e = *(int *)(param_2 + 2), iStack_5e == 0)) && (6 < param_3)))) {
    uStack_60 = 2;
    uStack_6c = CONCAT11(param_2[6],param_2[7]);
    if ((((ushort)(uStack_6c << 8 | (ushort)param_2[6]) == 8) && (8 < param_3)) &&
       ((iStack_58 = *(int *)(param_2 + 8), iStack_58 == 4 && (0xc < param_3)))) {
      uStack_5a = 8;
      uStack_54 = *(uint *)(param_2 + 0xc);
      if (((((uStack_54 != 0) && ((uStack_54 & 0xf) == 0)) && (0x10 < param_3)) &&
          ((uStack_6c = CONCAT11(param_2[0x10],param_2[0x11]),
           (ushort)(uStack_6c << 8 | (ushort)param_2[0x10]) == 3 && (0x12 < param_3)))) &&
         ((iStack_4e = *(int *)(param_2 + 0x12), iStack_4e == 0x71 && (0x16 < param_3)))) {
        uStack_50 = 3;
        pbStack_4a = param_2 + 0x16;
        if (((0x87 < param_3) &&
            (uStack_6c = CONCAT11(param_2[0x87],param_2[0x88]),
            (ushort)(uStack_6c << 8 | (ushort)param_2[0x87]) == 5)) &&
           ((0x89 < param_3 &&
            ((iStack_44 = *(int *)(param_2 + 0x89), iStack_44 == 0x40 && (0x8d < param_3)))))) {
          uStack_46 = 5;
          pbStack_40 = param_2 + 0x8d;
          uStack_6c = CONCAT11(param_2[0xcd],param_2[0xce]);
          if (((ushort)(uStack_6c << 8 | (ushort)param_2[0xcd]) == 7) &&
             ((0xcf < param_3 && (iStack_3a = *(int *)(param_2 + 0xcf), 0xd3 < param_3)))) {
            uStack_3c = 7;
            pbStack_36 = param_2 + 0xd3;
            iVar3 = iStack_3a + 0xd3;
            if (((iVar3 < param_3) &&
                (((-1 < iVar3 && (pbStack_32 = param_2 + iVar3, param_3 == 0x1000)) &&
                 (iVar2 = DAT_08007c58, param_1 != (int *)0x0)))) && (param_1 != (int *)0x0)) {
              if (*(char *)(*param_1 + 0x11bb) == '\x01') {
                piStack_28 = param_1;
                iVar2 = FUN_08009a82(param_1,DAT_08007c50);
                if (iVar2 == 0) {
                  uVar1 = *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x2b);
                  iVar2 = FUN_08009a82(param_1,DAT_08007c4c);
                  if ((iVar2 == 0) &&
                     (iVar2 = FUN_08009d22(param_1,uVar1,
                                           *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x3b),
                                           pbStack_4a,iStack_4e,param_2,&uStack_64), iVar2 == 0)) {
                    *DAT_08007c60 = uStack_54;
                    *DAT_08007c64 = 0;
                    FUN_08000348(DAT_08007c68,pbStack_40,iStack_44);
                    return 0;
                  }
                }
              }
              else {
                iVar2 = iRam08007c5c;
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}

