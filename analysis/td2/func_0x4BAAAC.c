// func @ 0x4BAAAC

int FUN_004baaac(int param_1,char *param_2,int param_3,undefined1 *param_4,uint param_5,int param_6)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int local_34;
  
  uVar5 = 0x80;
  uVar7 = 0;
  uVar8 = 0;
  *(uint *)(param_2 + 8) = (param_5 & 0xff) * 8 + 2;
  if (0x78 < *(uint *)(param_2 + 8)) {
    param_2[8] = 'x';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
  }
  FUN_004b2ee8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x14));
  FUN_004b2f46(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0);
  FUN_004b2f52(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0);
  FUN_004b2fc6(param_6);
  local_34 = FUN_004b2fae();
  FUN_004b2f8e(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_004b2f06(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
LAB_004bab18:
  while( true ) {
    while( true ) {
      uVar6 = (undefined1)uVar7;
      bVar4 = (byte)uVar5;
      iVar2 = FUN_004b2f8e(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      if (-1 < iVar2 << 0x1a) break;
      uVar1 = FUN_004b2f28(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec) = uVar1;
    }
    if (-1 < iVar2 << 0x19) break;
    uVar1 = FUN_004b2f32(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc) = uVar1;
    *(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc) =
         *(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc) -
         *(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec);
    if (*(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec) != 0) goto LAB_004bac34;
  }
  if (*(int *)(param_2 + 4) != 0) {
    if (*param_2 == '\x04') {
      if (*(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec) != 0) {
        iVar2 = FUN_004b2fae();
        if (0xf < (uint)(local_34 - iVar2)) {
          *(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc) =
               0x4b0 - *(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec);
          goto LAB_004bac34;
        }
        goto LAB_004bab18;
      }
      iVar2 = FUN_004b2fae();
      if (0x28 < (uint)(local_34 - iVar2)) goto LAB_004badae;
    }
    else {
      if (*(short *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec) != 0) {
        iVar2 = FUN_004b2fae();
        if (0x13f < (uint)(local_34 - iVar2)) {
          iVar2 = *(int *)(param_2 + 4);
          (param_2 + iVar2 * 2 + 0x2dc)[0] = -0x80;
          (param_2 + iVar2 * 2 + 0x2dc)[1] = '>';
LAB_004bac34:
          if (*param_2 == '\x04') {
            uVar3 = FUN_004ba732(*(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec),
                                 *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc));
            if ((int)(uVar3 << 0x1e) < 0) {
              uVar8 = uVar5 | uVar8;
              bVar4 = (byte)(uVar5 >> 1);
            }
            else if ((int)(uVar3 << 0x1d) < 0) {
              bVar4 = (byte)(uVar5 >> 1);
            }
            else if ((uVar3 & 0xff) == 0) {
              uVar8 = 0;
              bVar4 = 0x80;
            }
            uVar5 = (uint)bVar4;
            if (uVar5 == 0) {
              *(char *)(param_3 + (uVar7 & 0xff)) = (char)uVar8;
              uVar7 = (uVar7 & 0xff) + 1;
              uVar6 = (undefined1)uVar7;
              if ((param_5 & 0xff) <= (uVar7 & 0xff)) goto LAB_004badae;
              uVar5 = 0x80;
              uVar8 = 0;
            }
          }
          else {
            if (*(int *)(param_2 + 4) == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2da);
            }
            uVar3 = FUN_004ba68a(*(undefined2 *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x1ec),uVar1)
            ;
            if ((int)(uVar3 << 0x1f) < 0) {
              uVar8 = 0;
              bVar4 = 0x80;
            }
            else if ((int)(uVar3 << 0x18) < 0) {
              uVar8 = uVar5 >> 1 | uVar5 | uVar8;
              bVar4 = (byte)(uVar5 >> 2);
            }
            else if ((int)(uVar3 << 0x1a) < 0) {
              uVar8 = uVar5 >> 1 | uVar8;
              bVar4 = (byte)(uVar5 >> 2);
            }
            else if ((int)(uVar3 << 0x19) < 0) {
              uVar8 = uVar5 | uVar8;
              bVar4 = (byte)(uVar5 >> 2);
            }
            else if ((int)(uVar3 << 0x1b) < 0) {
              bVar4 = (byte)(uVar5 >> 2);
            }
            else if ((int)(uVar3 << 0x1e) < 0) {
              uVar8 = uVar5 | uVar8;
              bVar4 = (byte)(uVar5 >> 1);
            }
            else if ((int)(uVar3 << 0x1d) < 0) {
              bVar4 = (byte)(uVar5 >> 1);
            }
            else if ((uVar3 & 0xff) == 0) {
              uVar8 = 0;
              bVar4 = 0x80;
            }
            uVar5 = (uint)bVar4;
            if (uVar5 == 0) {
              *(char *)(param_3 + (uVar7 & 0xff)) = (char)uVar8;
              uVar7 = (uVar7 & 0xff) + 1;
              uVar6 = (undefined1)uVar7;
              if (((param_5 & 0xff) <= (uVar7 & 0xff)) ||
                 (15999 < *(ushort *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2dc)))
              goto LAB_004badae;
              uVar5 = 0x80;
              uVar8 = 0;
            }
          }
          uVar6 = (undefined1)uVar7;
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
          if (*(uint *)(param_2 + 8) <= *(uint *)(param_2 + 4)) goto LAB_004badae;
          local_34 = FUN_004b2fae();
        }
        goto LAB_004bab18;
      }
      if (15999 < *(ushort *)(param_2 + *(int *)(param_2 + 4) * 2 + 0x2da)) goto LAB_004badae;
    }
  }
  iVar2 = FUN_004b3038();
  if ((iVar2 == 0) && (*(int *)(param_2 + 4) == 0)) {
LAB_004badae:
    *param_4 = uVar6;
    FUN_004b2f8e(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    FUN_004b2f12(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    iVar2 = FUN_004b2fae();
    return param_6 - iVar2;
  }
  goto LAB_004bab18;
}

