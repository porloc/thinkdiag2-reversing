// FUN_08003ea8 @ 08003ea8

/* WARNING: Type propagation algorithm not settling */

int FUN_08003ea8(code *param_1,int param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint *puVar13;
  char cVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 local_a8;
  int local_a0;
  char *local_9c;
  char *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  ushort local_70;
  byte local_6e;
  undefined1 local_68 [3];
  char acStack_65 [65];
  
  local_7c = 0;
  local_a0 = param_2;
LAB_08003eda:
  while( true ) {
    if (*param_3 == 0) {
      return local_7c;
    }
    if (*param_3 == 0x25) break;
    local_a0 = (*param_1)(local_a0,*param_3);
    if (local_a0 == 0) {
      return -1;
    }
    local_7c = local_7c + 1;
    param_3 = param_3 + 1;
  }
  local_70 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  do {
    while( true ) {
      pbVar19 = param_3 + 1;
      bVar1 = *pbVar19;
      if (bVar1 != 0x20) break;
      local_70 = local_70 | 1;
      param_3 = pbVar19;
    }
    if (bVar1 == 0x23) {
      local_70 = local_70 | 8;
    }
    else if (bVar1 == 0x2b) {
      local_70 = local_70 | 2;
    }
    else if (bVar1 == 0x2d) {
      local_70 = local_70 | 4;
    }
    else {
      if (bVar1 != 0x30) break;
      local_70 = local_70 | 0x10;
    }
    param_3 = pbVar19;
  } while( true );
  if (bVar1 == 0x2a) {
    piVar7 = (int *)*param_4;
    *param_4 = (int)piVar7;
    local_74 = *piVar7;
    *param_4 = (int)(piVar7 + 1);
    if (local_74 < 0) {
      local_74 = -local_74;
      local_70 = local_70 | 4;
    }
    pbVar19 = param_3 + 2;
  }
  else {
    local_74 = 0;
    for (; *pbVar19 - 0x30 < 10; pbVar19 = pbVar19 + 1) {
      if (local_74 != 0x7fffffff) {
        local_74 = (uint)*pbVar19 + local_74 * 10 + -0x30;
      }
    }
  }
  if (*pbVar19 == 0x2e) {
    pbVar20 = pbVar19 + 1;
    if (*pbVar20 == 0x2a) {
      piVar7 = (int *)*param_4;
      *param_4 = (int)piVar7;
      pbVar20 = pbVar19 + 2;
      local_78 = *piVar7;
      *param_4 = (int)(piVar7 + 1);
    }
    else {
      local_78 = 0;
      for (; *pbVar20 - 0x30 < 10; pbVar20 = pbVar20 + 1) {
        if (local_78 != 0x7fffffff) {
          local_78 = (uint)*pbVar20 + local_78 * 10 + -0x30;
        }
      }
    }
  }
  else {
    local_78 = -1;
    pbVar20 = pbVar19;
  }
  uVar22 = FUN_080003c0(s_hjltzL_08004c44,*pbVar20);
  iVar21 = local_78;
  uVar8 = (uint)((ulonglong)uVar22 >> 0x20);
  local_6e = 0;
  pbVar19 = pbVar20;
  if ((int)uVar22 != 0) {
    pbVar19 = pbVar20 + 1;
    local_6e = *pbVar20;
  }
  if (local_6e == 0x68) {
    uVar8 = (uint)*pbVar19;
  }
  if (local_6e == 0x68 && uVar8 == 0x68) {
    local_6e = 0x62;
LAB_08003ff4:
    pbVar19 = pbVar19 + 1;
  }
  else {
    bVar1 = local_6e;
    if (local_6e == 0x6c) {
      bVar1 = *pbVar19;
    }
    if (local_6e == 0x6c && bVar1 == 0x6c) {
      local_6e = 0x71;
      goto LAB_08003ff4;
    }
  }
  local_98 = acStack_65 + 1;
  param_3 = pbVar19 + 1;
  bVar1 = *pbVar19;
  uVar8 = (uint)bVar1;
  if (uVar8 == 0x25) {
    acStack_65[1] = 0x25;
    local_94 = 1;
LAB_080042fc:
    acStack_65[1] = 0x25;
    goto LAB_080042fe;
  }
  if ((uVar8 != 0x41) && (2 < uVar8 - 0x45)) {
    if (uVar8 == 0x58) {
LAB_080041f2:
      if ((local_6e == 0x6c) || (local_6e != 0x71 && local_6e != 0x6a)) {
        puVar13 = (uint *)*param_4;
        *param_4 = (int)puVar13;
        local_a8._0_4_ = *puVar13;
        *param_4 = (int)(puVar13 + 1);
        local_a8._4_4_ = 0;
      }
      else {
        puVar13 = (uint *)(*param_4 + 7U & 0xfffffff8);
        *param_4 = (int)puVar13;
        local_a8._0_4_ = *puVar13;
        local_a8._4_4_ = puVar13[1];
        *param_4 = (int)(puVar13 + 2);
      }
      if (local_6e == 0x68) {
        local_a8._0_4_ = (uint)local_a8 & 0xffff;
LAB_0800424e:
        local_a8._4_4_ = 0;
      }
      else {
        if (local_6e == 0x62) {
          local_a8._0_4_ = (uint)local_a8 & 0xff;
          goto LAB_0800424e;
        }
        if (local_6e == 0x74 || local_6e == 0x7a) goto LAB_0800424e;
      }
      uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
      if ((int)((uint)(byte)local_70 << 0x1c) < 0) {
        uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
        if (local_a8._4_4_ != 0 || (uint)local_a8 != 0) {
          uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
          if ((uVar8 | 0x20) == 0x78) {
            acStack_65[local_94 + 1] = '0';
            acStack_65[local_94 + 2] = bVar1;
            local_94 = local_94 + 2;
            uVar23 = CONCAT44(local_a8._4_4_,(uint)local_a8);
          }
        }
      }
    }
    else {
      if (uVar8 == 0x61) goto LAB_080041a2;
      if (uVar8 == 99) {
        local_94 = 1;
        puVar5 = (undefined4 *)*param_4;
        *param_4 = (int)puVar5;
        uVar11 = *puVar5;
        *param_4 = (int)(puVar5 + 1);
        acStack_65[1] = (char)uVar11;
        goto LAB_080042fe;
      }
      if (uVar8 != 100) {
        if (uVar8 - 0x65 < 3) goto LAB_080041a2;
        if (uVar8 != 0x69) {
          if (uVar8 == 0x6e) {
            if (local_6e == 0x62) {
              puVar5 = (undefined4 *)*param_4;
              *param_4 = (int)puVar5;
              puVar10 = (undefined1 *)*puVar5;
              *param_4 = (int)(puVar5 + 1);
              *puVar10 = (char)local_7c;
            }
            else if (local_6e == 0x68) {
              puVar5 = (undefined4 *)*param_4;
              *param_4 = (int)puVar5;
              puVar9 = (undefined2 *)*puVar5;
              *param_4 = (int)(puVar5 + 1);
              *puVar9 = (short)local_7c;
            }
            else if ((local_6e == 0x6a) || ((local_6e != 0x6c && (local_6e == 0x71)))) {
              piVar7 = (int *)*param_4;
              *param_4 = (int)piVar7;
              piVar12 = (int *)*piVar7;
              *param_4 = (int)(piVar7 + 1);
              *piVar12 = local_7c;
              piVar12[1] = local_7c >> 0x1f;
            }
            else {
              puVar5 = (undefined4 *)*param_4;
              *param_4 = (int)puVar5;
              piVar7 = (int *)*puVar5;
              *param_4 = (int)(puVar5 + 1);
              *piVar7 = local_7c;
            }
            goto LAB_080042fe;
          }
          if (uVar8 != 0x6f) {
            if (uVar8 == 0x70) {
              puVar13 = (uint *)*param_4;
              *param_4 = (int)puVar13;
              uVar8 = *puVar13;
              *param_4 = (int)(puVar13 + 1);
              uVar4 = (ulonglong)uVar8;
              uVar3 = (ulonglong)uVar8;
              uVar2 = (ulonglong)uVar8;
              local_a8 = (ulonglong)uVar8;
              uVar23 = (ulonglong)uVar8;
              local_90 = 0x3c;
              if ((uVar8 != 0) || (local_78 != 0)) {
                do {
                  uVar15 = (uVar8 & 0xf) + 0x30;
                  cVar14 = (char)uVar15;
                  if (0x39 < uVar15) {
                    cVar14 = (char)(uVar8 & 0xf) + 'W';
                  }
                  local_90 = local_90 + -1;
                  uVar8 = uVar8 >> 4;
                  local_98[local_90] = cVar14;
                } while ((uVar8 != 0) && (acStack_65 + 1 < local_98 + local_90));
              }
              local_9c = local_98 + local_90;
              local_90 = 0x3c - local_90;
              if (local_90 < local_78) {
                local_70 = local_70 & 0xffef;
                local_88 = local_78 - local_90;
                local_a8 = uVar23;
              }
              else if (local_78 < 0) {
                local_a8 = uVar2;
                if (((byte)local_70 & 0x14) == 0x10) {
                  iVar21 = ((local_74 - local_94) - local_88) - local_90;
                  local_a8 = uVar3;
                  if (0 < iVar21) {
                    local_88 = iVar21;
                    local_a8 = uVar4;
                  }
                }
              }
              goto LAB_080042fe;
            }
            if (uVar8 == 0x73) {
              puVar5 = (undefined4 *)*param_4;
              *param_4 = (int)puVar5;
              pcVar16 = (char *)*puVar5;
              *param_4 = (int)(puVar5 + 1);
              local_9c = pcVar16;
              if (local_78 < 0) {
                iVar21 = FUN_080003d8(pcVar16);
              }
              else {
                iVar17 = FUN_08004c60(pcVar16,0,local_78);
                if (iVar17 != 0) {
                  iVar21 = iVar17 - (int)pcVar16;
                }
              }
              local_90 = iVar21;
              goto LAB_080042fe;
            }
            if ((uVar8 != 0x75) && (uVar8 != 0x78)) {
              acStack_65[1] = 0x25;
              local_94 = 1;
              if (uVar8 == 0) goto LAB_080042fe;
              acStack_65[2] = bVar1;
              local_94 = 2;
              goto LAB_080042fc;
            }
          }
          goto LAB_080041f2;
        }
      }
      uVar23 = FUN_08004448(local_6e,param_4);
      if ((longlong)uVar23 < 0) {
        cVar14 = '-';
LAB_080042ba:
        acStack_65[local_94 + 1] = cVar14;
        local_94 = local_94 + 1;
      }
      else {
        if ((int)((uint)local_70 << 0x1e) < 0) {
          cVar14 = '+';
          goto LAB_080042ba;
        }
        if ((int)((uint)local_70 << 0x1f) < 0) {
          cVar14 = ' ';
          goto LAB_080042ba;
        }
      }
    }
    local_9c = acStack_65 + local_94 + 1;
    local_a8 = uVar23;
    FUN_080044b6(&local_a8,uVar8);
    goto LAB_080042fe;
  }
LAB_080041a2:
  puVar5 = (undefined4 *)(*param_4 + 7U & 0xfffffff8);
  *param_4 = (int)puVar5;
  local_a8._0_4_ = *puVar5;
  local_a8._4_4_ = puVar5[1];
  *param_4 = (int)(puVar5 + 2);
  if ((int)local_a8._4_4_ < 0) {
    cVar14 = '-';
LAB_080041d8:
    acStack_65[local_94 + 1] = cVar14;
    local_94 = local_94 + 1;
  }
  else {
    if ((int)((uint)local_70 << 0x1e) < 0) {
      cVar14 = '+';
      goto LAB_080041d8;
    }
    if ((int)((uint)local_70 << 0x1f) < 0) {
      cVar14 = ' ';
      goto LAB_080041d8;
    }
  }
  local_9c = acStack_65 + local_94 + 1;
  FUN_080045c0(&local_a8,uVar8);
LAB_080042fe:
  iVar21 = (((((local_74 - local_94) - local_88) - local_90) - local_84) - local_8c) - local_80;
  if ((-1 < (int)((uint)(byte)local_70 << 0x1d)) && (local_68[0] = 0x20, 0 < iVar21)) {
    iVar17 = iVar21;
    do {
      iVar6 = FUN_08004c14(param_1,&local_a8,local_68,1);
      if (iVar6 != 0) {
        return -1;
      }
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  pcVar16 = acStack_65;
  iVar17 = local_94;
  iVar6 = local_88;
  while( true ) {
    pcVar16 = pcVar16 + 1;
    local_88 = iVar6;
    if (iVar17 == 0) break;
    local_a0 = (*param_1)(local_a0,*pcVar16);
    if (local_a0 == 0) {
      return -1;
    }
    local_7c = local_7c + 1;
    iVar17 = iVar17 + -1;
    iVar6 = local_88;
  }
  local_68[0] = 0x30;
  pcVar16 = local_9c;
  iVar17 = local_90;
  iVar18 = local_84;
  if (0 < iVar6) {
    do {
      iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
      if (iVar17 != 0) {
        return -1;
      }
      iVar6 = iVar6 + -1;
      pcVar16 = local_9c;
      iVar17 = local_90;
      iVar18 = local_84;
    } while (iVar6 != 0);
  }
  for (; local_84 = iVar18, iVar17 != 0; iVar17 = iVar17 + -1) {
    local_a0 = (*param_1)(local_a0,*pcVar16);
    if (local_a0 == 0) {
      return -1;
    }
    local_7c = local_7c + 1;
    pcVar16 = pcVar16 + 1;
    iVar18 = local_84;
  }
  local_68[0] = 0x30;
  if (0 < iVar18) {
    do {
      iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
      if (iVar17 != 0) {
        return -1;
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  pcVar16 = local_9c + local_90;
  iVar6 = local_80;
  for (iVar17 = local_8c; local_80 = iVar6, iVar17 != 0; iVar17 = iVar17 + -1) {
    local_a0 = (*param_1)(local_a0,*pcVar16);
    if (local_a0 == 0) {
      return -1;
    }
    local_7c = local_7c + 1;
    pcVar16 = pcVar16 + 1;
    iVar6 = local_80;
  }
  local_68[0] = 0x30;
  if (0 < iVar6) {
    do {
      iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
      if (iVar17 != 0) {
        return -1;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((int)((uint)(byte)local_70 << 0x1d) < 0) {
    local_68[0] = 0x20;
    if (0 < iVar21) {
      do {
        iVar17 = FUN_08004c14(param_1,&local_a8,local_68,1);
        if (iVar17 != 0) {
          return -1;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
  }
  goto LAB_08003eda;
}

