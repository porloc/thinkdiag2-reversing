
undefined8 FUN_0800cde2(undefined1 *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uStack_20;
  undefined1 local_1e;
  undefined1 uStack_1d;
  short local_1c;
  short local_1a [3];
  
  FUN_08000348(&uStack_20,DAT_0800d244,3);
  *DAT_0800d248 = 1;
  iVar2 = FUN_080063a4(0,local_1a);
  if (iVar2 == 0) {
    local_1e = 0x15;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
  }
  else if (local_1a[0] == 0xd) {
    iVar2 = FUN_080063a4(5,&local_1c);
    if (iVar2 == 0) {
      local_1e = 0x15;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
    }
    else if (local_1c == 1) {
      local_1e = 0;
      (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
      *param_1 = 1;
    }
    else {
      *param_1 = 0;
      uVar1 = CONCAT11(*(undefined1 *)(param_2 + 1),*(undefined1 *)(param_2 + 2));
      if (uVar1 < 0x21) {
        param_2 = param_2 + 3;
        uVar3 = FUN_08006ac6(DAT_0800d24c);
        if ((uVar1 == uVar3) && (iVar2 = FUN_08006aa8(param_2,DAT_0800d24c,uVar1), iVar2 != 0)) {
          *(ushort *)(param_1 + 0x2048) = uVar1;
          FUN_08000348(param_1 + 0x204a,param_2,uVar1);
          param_1[uVar1 + 0x204a] = 0;
          pbVar4 = (byte *)(param_2 + (uint)uVar1);
          *(uint *)(param_1 + 0x206a) =
               (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
               (uint)pbVar4[3];
          if (*(uint *)(param_1 + 0x206a) < 0x53001) {
            FUN_08006b94(2);
            FUN_0800d340();
            iVar2 = FUN_0800d350(DAT_0800d250,*(undefined4 *)(param_1 + 0x206a));
            if (iVar2 == 0) {
              iVar2 = FUN_0800cd40();
              if (iVar2 == 0) {
                local_1e = 0x19;
                (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
              }
              else {
                iVar2 = FUN_0800cd8c();
                if (iVar2 == 0) {
                  local_1e = 0x12;
                  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
                }
                else {
                  *(undefined4 *)(param_1 + 0x206e) = DAT_0800d250;
                  *(undefined4 *)(param_1 + 0x2098) = 0;
                  local_1e = 0;
                  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
                }
              }
            }
            else {
              local_1e = 0xd;
              (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
            }
          }
          else {
            local_1e = 4;
            (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0x16;
          (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
        }
      }
      else {
        local_1e = 8;
        (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
      }
    }
  }
  else {
    local_1e = 0x18;
    (**(code **)(param_1 + 0x20b8))(param_1,&uStack_20,3);
  }
  return CONCAT26(local_1a[0],CONCAT24(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20))));
}

