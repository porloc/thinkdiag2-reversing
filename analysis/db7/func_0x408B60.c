// func @ 0x408B60

undefined8 FUN_00408b60(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uStack_28;
  undefined1 local_26;
  undefined1 uStack_25;
  short local_24;
  undefined2 uStack_22;
  int local_20;
  
  local_24 = (short)param_2;
  uStack_22 = (undefined2)((uint)param_2 >> 0x10);
  uStack_28 = (undefined2)param_1;
  local_26 = (undefined1)((uint)param_1 >> 0x10);
  uStack_25 = (undefined1)((uint)param_1 >> 0x18);
  local_20 = param_3;
  FUN_0040282c(&uStack_28,DAT_00408f88,3);
  iVar2 = FUN_00406b14(0,&local_24);
  if (iVar2 == 0) {
    local_26 = 0x15;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
  }
  else if (local_24 == 0xd) {
    local_20 = local_20 + -1;
    iVar2 = FUN_00404bf6(param_1,&uStack_28,2,&local_20);
    if (iVar2 != 0) {
      uVar1 = CONCAT11(*(undefined1 *)(param_2 + 1),*(undefined1 *)(param_2 + 2));
      iVar2 = FUN_00404bf6(param_1,&uStack_28,uVar1,&local_20);
      if (iVar2 != 0) {
        if (uVar1 < 0x21) {
          param_2 = param_2 + 3;
          uVar3 = FUN_00409e30(DAT_00408f8c);
          if (((uVar1 == uVar3) && (iVar2 = FUN_00409f48(param_2,DAT_00408f8c,uVar1), iVar2 != 0))
             || ((uVar3 = FUN_00409e30(DAT_00408f90), uVar1 == uVar3 &&
                 (iVar2 = FUN_00409f48(param_2,DAT_00408f90,uVar1), iVar2 != 0)))) {
            iVar2 = FUN_00404bf6(param_1,&uStack_28,4,&local_20);
            if (iVar2 != 0) {
              *(ushort *)(param_1 + 0x2048) = uVar1;
              FUN_0040282c(param_1 + 0x204a,param_2,uVar1);
              *(undefined1 *)(param_1 + (uint)uVar1 + 0x204a) = 0;
              pbVar4 = (byte *)(param_2 + (uint)uVar1);
              *(uint *)(param_1 + 0x206a) =
                   (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
                   (uint)pbVar4[3];
              if ((*(char *)(param_1 + 0x204a) == 'D') && (0x60000 < *(uint *)(param_1 + 0x206a))) {
                local_26 = 4;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
              else if ((*(char *)(param_1 + 0x204a) == 'J') &&
                      (0x70000 < *(uint *)(param_1 + 0x206a))) {
                local_26 = 4;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
              else {
                FUN_00404ba2(2);
                FUN_0040a490(0,6);
                FUN_0040a490(0,6);
                if (*(char *)(param_1 + 0x204a) == 'D') {
                  iVar2 = FUN_0040a506(&DAT_004a0000,0x30);
                  if (iVar2 != 0) {
                    local_26 = 0xd;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  *(undefined **)(param_1 + 0x206e) = &DAT_004a0000;
                }
                else {
                  if (*(char *)(param_1 + 0x204a) != 'J') {
                    local_26 = 0x16;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  iVar2 = FUN_0040a506(&DAT_00410000,0x38);
                  if (iVar2 != 0) {
                    local_26 = 0xd;
                    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
                    goto LAB_00408dcc;
                  }
                  *(undefined **)(param_1 + 0x206e) = &DAT_00410000;
                }
                *(undefined4 *)(param_1 + 0x2094) = 0;
                local_26 = 0;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
              }
            }
          }
          else {
            local_26 = 0x16;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
          }
        }
        else {
          local_26 = 8;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
        }
      }
    }
  }
  else {
    local_26 = 0x18;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_28,3);
  }
LAB_00408dcc:
  return CONCAT26(uStack_22,CONCAT24(local_24,CONCAT13(uStack_25,CONCAT12(local_26,uStack_28))));
}

