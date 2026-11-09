// FUN_08025964 @ 08025964

int FUN_08025964(int *param_1,byte *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  int local_4e;
  undefined2 local_46;
  int local_44;
  byte *local_40;
  undefined2 local_3c;
  int local_3a;
  byte *local_36;
  undefined2 local_32;
  int local_30;
  byte *local_2c;
  int *local_28;
  
  local_54 = 0;
  iVar2 = DAT_08025d9c;
  if ((((param_2 != (byte *)0x0) && (0 < param_3)) && (param_4 != 0)) &&
     (((param_5 != (undefined4 *)0x0 &&
       (local_5c = CONCAT11(*param_2,param_2[1]), (ushort)(local_5c << 8 | (ushort)*param_2) == 2))
      && ((2 < param_3 && ((local_4e = *(int *)(param_2 + 2), local_4e == 0 && (6 < param_3))))))))
  {
    local_50 = 2;
    local_5c = CONCAT11(param_2[6],param_2[7]);
    if (((ushort)(local_5c << 8 | (ushort)param_2[6]) == 3) &&
       (((8 < param_3 && (local_44 = *(int *)(param_2 + 8), local_44 == 0x71)) && (0xc < param_3))))
    {
      local_46 = 3;
      local_40 = param_2 + 0xc;
      if (((0x7d < param_3) &&
          (local_5c = CONCAT11(param_2[0x7d],param_2[0x7e]),
          (ushort)(local_5c << 8 | (ushort)param_2[0x7d]) == 4)) && (0x7f < param_3)) {
        local_3a = *(int *)(param_2 + 0x7f);
        if (((local_3a != 0) && ((param_2[0x7f] & 0xf) == 0)) && (0x83 < param_3)) {
          local_3c = 4;
          local_36 = param_2 + 0x83;
          iVar3 = local_3a + 0x83;
          if ((((iVar3 < param_3) && (-1 < iVar3)) &&
              (local_5c = CONCAT11(param_2[iVar3],param_2[local_3a + 0x84]),
              (ushort)(local_5c << 8 | (ushort)param_2[iVar3]) == 5)) &&
             ((iVar3 = local_3a + 0x85, iVar3 < param_3 && (-1 < iVar3)))) {
            local_58 = CONCAT13(param_2[local_3a + 0x88],
                                CONCAT12(param_2[local_3a + 0x87],
                                         CONCAT11(param_2[local_3a + 0x86],param_2[iVar3])));
            if ((local_58 == 0x40) && ((iVar3 = local_3a + 0x89, iVar3 < param_3 && (-1 < iVar3))))
            {
              local_32 = 5;
              local_30 = local_58;
              local_2c = param_2 + iVar3;
              if ((local_3a + 0xc9 == param_3) &&
                 ((iVar2 = DAT_08025d90, param_1 != (int *)0x0 && (param_1 != (int *)0x0)))) {
                local_28 = param_1;
                iVar2 = FUN_080293da(param_1,DAT_08025d98);
                if (iVar2 == 0) {
                  uVar1 = *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x2b);
                  iVar2 = FUN_080293da(param_1,DAT_08025d94);
                  if (((iVar2 == 0) &&
                      (iVar2 = FUN_08029574(param_1,uVar1,
                                            *(undefined2 *)(*(int *)(*param_1 + 0x1358) + 0x3b),
                                            local_40,local_44,param_4,&local_54), iVar2 == 0)) &&
                     (iVar2 = FUN_08029618(param_1,2,local_36,local_3a,param_4,&local_54),
                     iVar2 == 0)) {
                    *param_5 = local_54;
                    iVar2 = FUN_080293da(param_1,DAT_08025d98);
                    if ((iVar2 == 0) &&
                       (iVar2 = FUN_0802984e(param_1,*(undefined2 *)
                                                      (*(int *)(*param_1 + 0x1358) + 0x2b),local_2c,
                                             local_30,param_4,&local_54), iVar2 == 0)) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_5 = 0;
  return iVar2;
}

