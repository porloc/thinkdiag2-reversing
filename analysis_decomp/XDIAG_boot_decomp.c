// Ghidra decompilation dump: bootloader.bin
// range: 08000000 .. 08010fff

//==== FUNC FUN_08000184 @ 08000184 ====

undefined4 FUN_08000184(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_30 [4];
  undefined4 local_2c;
  undefined auStack_28 [16];
  undefined4 local_18 [3];
  
  uVar1 = DAT_08000e64;
  local_18[0] = *DAT_08000c2c;
  local_18[1] = DAT_08000c2c[1];
  local_18[2] = DAT_08000c2c[2];
  local_2c = 0;
  iVar2 = FUN_080016c0(0,auStack_28,0xd);
  if (iVar2 != 0) {
    for (uVar4 = 0; (uVar4 & 0xff) < 3; uVar4 = (uVar4 & 0xff) + 1) {
      uVar3 = FUN_08001834(local_18[uVar4 & 0xff]);
      iVar2 = FUN_0800188c(auStack_28,local_18[uVar4 & 0xff],uVar3);
      if (iVar2 == 0) {
        return 1;
      }
    }
    iVar2 = FUN_080016c0(4,local_30,3);
    if (iVar2 != 0) {
      if (local_30[0] == '1') {
        return 1;
      }
      uVar3 = FUN_08001834(uVar1);
      iVar2 = FUN_0800188c(auStack_28,uVar1,uVar3);
      if ((iVar2 == 0) && (iVar2 = FUN_0800188c(local_30,&local_2c,3), iVar2 == 0)) {
        return 2;
      }
    }
  }
  return 0;
}



//==== FUNC FUN_08000226 @ 08000226 ====

bool FUN_08000226(uint *param_1)

{
  return (*param_1 & DAT_08000e68) == 0x20000000;
}



//==== FUNC FUN_0800023e @ 0800023e ====

void FUN_0800023e(undefined4 *param_1)

{
  bool bVar1;
  code *pcVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  pcVar2 = (code *)param_1[1];
  FUN_08001908(*param_1);
  (*pcVar2)();
  return;
}



//==== FUNC FUN_08000258 @ 08000258 ====

undefined8 FUN_08000258(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_08000184();
  if (cVar1 == '\x02') {
    uVar2 = 1;
  }
  else if ((cVar1 == '\0') && (iVar3 = FUN_08001942(), iVar3 != 1)) {
    uVar2 = 1;
  }
  else if (*(char *)(param_1 + 7) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_0800028c @ 0800028c ====

undefined4 FUN_0800028c(void)

{
  int iVar1;
  undefined auStack_110 [16];
  undefined auStack_100 [28];
  undefined uStack_e4;
  undefined auStack_e3 [227];
  
  iVar1 = FUN_080016c0(3,&uStack_e4,0xde);
  if (iVar1 != 0) {
    FUN_0800500c(auStack_100,0x1c);
    FUN_08005024(auStack_100);
    FUN_0800500c(auStack_110,0x10);
    iVar1 = FUN_0800504e(auStack_110,0xd);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_08005238(auStack_e3,0xdc,auStack_110,auStack_100);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



//==== FUNC FUN_080002e0 @ 080002e0 ====

undefined8 FUN_080002e0(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080052be(DAT_08000e70);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_080002f6 @ 080002f6 ====

undefined8 FUN_080002f6(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080053bc(0x8000000);
  return CONCAT44(unaff_r7,(uint)(iVar1 == 0));
}



//==== FUNC FUN_0800030c @ 0800030c ====

undefined8 FUN_0800030c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  int local_10;
  
  local_10 = param_3;
  FUN_08005cce(&uStack_18,DAT_0800101c,3);
  local_10 = local_10 + -1;
  iVar1 = FUN_08001970(param_1,&uStack_18,7,&local_10);
  if (iVar1 != 0) {
    iVar1 = FUN_08005ea4(param_2 + 1);
    if (iVar1 == 0) {
      local_16 = 0xb;
    }
    else {
      local_16 = 0;
    }
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_0800035e @ 0800035e ====

undefined8 FUN_0800035e(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = *DAT_08001020;
  uStack_1c = DAT_08001020[1];
  uStack_18 = DAT_08001020[2];
  FUN_08005e64((int)&local_20 + 2,DAT_08001020);
  (**(code **)(param_1 + 0x20b4))(param_1,&local_20,9);
  return CONCAT44(uStack_1c,local_20);
}



//==== FUNC FUN_0800038e @ 0800038e ====

void FUN_0800038e(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined auStack_120 [2];
  undefined local_11e;
  undefined auStack_11c [4];
  short local_118 [4];
  undefined2 local_110;
  undefined *local_10c;
  undefined *local_108;
  undefined *local_104;
  undefined *local_100;
  undefined *local_fc;
  undefined auStack_f8 [16];
  undefined auStack_e8 [12];
  undefined auStack_dc [12];
  undefined auStack_d0 [28];
  undefined auStack_b4 [2];
  undefined auStack_b2 [150];
  
  FUN_0800500c(auStack_d0,0x1c);
  FUN_08005024(auStack_d0);
  FUN_08005cce(&local_10c,DAT_08001024,0x14);
  local_10c = auStack_d0;
  iVar1 = FUN_080016c0(1,auStack_dc,10);
  if (iVar1 != 0) {
    local_104 = auStack_dc;
  }
  iVar1 = FUN_080016c0(2,auStack_e8,10);
  if (iVar1 != 0) {
    local_100 = auStack_e8;
  }
  iVar1 = FUN_080016c0(4,auStack_11c,4);
  if (iVar1 != 0) {
    local_fc = auStack_11c;
  }
  FUN_0800500c(auStack_f8,0x10);
  iVar1 = FUN_0800504e(auStack_f8,0xe);
  if (iVar1 != 0) {
    local_108 = auStack_f8;
  }
  local_118[0] = FUN_08005014(local_10c);
  local_118[1] = FUN_08005014(local_108);
  local_118[2] = FUN_08005014(local_104);
  local_118[3] = FUN_08005014(local_100);
  local_110 = FUN_08005014(local_fc);
  uVar3 = 2;
  for (uVar2 = 0; (uVar2 & 0xff) < 5; uVar2 = (uVar2 & 0xff) + 1) {
    uVar3 = local_118[uVar2 & 0xff] + 2 + uVar3;
  }
  if (uVar3 < 0x97) {
    FUN_08006026(auStack_b4,&DAT_08000690,2);
    FUN_080019a0(auStack_b2,&local_10c,local_118,5);
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_b4,uVar3);
  }
  else {
    FUN_08005cce(auStack_120,DAT_08001028,3);
    local_11e = 0xc;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_120,3);
  }
  return;
}



//==== FUNC FUN_080004be @ 080004be ====

/* WARNING: Removing unreachable block (ram,0x08000556) */

void FUN_080004be(int param_1)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined auStack_a8 [2];
  undefined local_a6;
  short local_a0 [4];
  undefined *local_98 [4];
  undefined auStack_88 [2];
  undefined auStack_86 [102];
  
  FUN_08005cce(local_98,DAT_080010c0,0x10);
  iVar2 = FUN_08001914();
  if (iVar2 != 0) {
    local_98[1] = &DAT_08000694;
    local_98[2] = &DAT_08000694;
  }
  uVar3 = 2;
  for (uVar4 = 0; (uVar4 & 0xffff) < 4; uVar4 = (uVar4 & 0xffff) + 1) {
    iVar2 = FUN_08005142(local_98[uVar4 & 0xffff],0x20);
    if (iVar2 == 0) {
      local_98[uVar4 & 0xffff] = &DAT_08000694;
    }
    sVar1 = FUN_08005014(local_98[uVar4 & 0xffff]);
    local_a0[uVar4 & 0xffff] = sVar1;
    uVar3 = local_a0[uVar4 & 0xffff] + 2 + uVar3;
  }
  if (uVar3 < 0x65) {
    FUN_08006026(auStack_88,&DAT_08000698,2);
    FUN_080019a0(auStack_86,local_98,local_a0,4);
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_88,uVar3);
  }
  else {
    FUN_08005cce(auStack_a8,DAT_080010cc,3);
    local_a6 = 0xc;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_a8,3);
  }
  return;
}



//==== FUNC FUN_080005d6 @ 080005d6 ====

void FUN_080005d6(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined auStack_98 [2];
  undefined local_96;
  undefined4 local_94 [3];
  undefined auStack_88 [2];
  undefined auStack_86 [102];
  
  local_94[1] = *DAT_080010d0;
  local_94[2] = DAT_080010d0[1];
  uVar4 = 2;
  puVar2 = DAT_080010d0;
  for (uVar3 = 0; (uVar3 & 0xffff) < 2; uVar3 = (uVar3 & 0xffff) + 1) {
    uVar1 = FUN_08005014(local_94[(uVar3 & 0xffff) + 1],puVar2);
    puVar2 = local_94;
    *(undefined2 *)((int)puVar2 + (uVar3 & 0xffff) * 2) = uVar1;
    uVar4 = *(short *)((int)local_94 + (uVar3 & 0xffff) * 2) + 2 + uVar4;
  }
  if (uVar4 < 0x65) {
    FUN_08006026(auStack_88,&DAT_0800069c,2);
    FUN_080019a0(auStack_86,local_94 + 1,local_94,2);
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_88,uVar4);
  }
  else {
    FUN_08005cce(auStack_98,DAT_080010d4,3);
    local_96 = 0xc;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_98,3);
  }
  return;
}



//==== FUNC FUN_080006a0 @ 080006a0 ====

void FUN_080006a0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined4 local_248;
  short local_244;
  short local_242;
  short local_240;
  short local_23e;
  short local_23c;
  short local_23a;
  undefined auStack_238 [2];
  undefined auStack_236 [12];
  undefined local_22a;
  undefined auStack_229 [2];
  undefined auStack_227 [9];
  undefined local_21e;
  undefined auStack_21d [2];
  undefined auStack_21b [8];
  undefined local_213;
  undefined auStack_212 [2];
  undefined auStack_210 [221];
  undefined local_133;
  int local_24;
  
  local_248 = *DAT_080010d8;
  local_24 = param_3 + -1;
  iVar3 = FUN_08001970(param_1,&local_248,1,&local_24);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(param_2 + 1);
    puVar5 = (undefined *)(param_2 + 2);
    iVar3 = FUN_08001970(param_1,&local_248,2,&local_24);
    if (iVar3 != 0) {
      sVar2 = CONCAT11(*puVar5,*(undefined *)(param_2 + 3));
      iVar3 = FUN_08001970(param_1,&local_248,sVar2,&local_24);
      if (iVar3 != 0) {
        if (bVar1 == 0) {
          if (sVar2 == 0xd) {
            iVar3 = FUN_0800603c(DAT_08001454);
            if (iVar3 == 0xd) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
            }
            else {
              FUN_08006026(DAT_08001454,puVar5,0xf);
              local_248._0_3_ = (uint3)(ushort)local_248;
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
            }
          }
          else {
            local_248._0_3_ = CONCAT12(8,(ushort)local_248);
            (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
          }
        }
        else {
          if (bVar1 == 2) {
            if (sVar2 != 10) {
              local_248._0_3_ = CONCAT12(8,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            iVar3 = FUN_08001654(1,&local_23c);
            if (iVar3 == 0) {
              local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (local_23c != -1) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            uVar4 = 0xf;
          }
          else if (bVar1 < 2) {
            if (sVar2 != 0xd) {
              local_248._0_3_ = CONCAT12(8,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (*DAT_08001454 == -1) {
              local_248._0_3_ = CONCAT12(0xf,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            iVar3 = FUN_08001654(0,&local_23a);
            if (iVar3 == 0) {
              local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (local_23a != -1) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            uVar4 = 0;
          }
          else if (bVar1 == 4) {
            if (sVar2 != 0xde) {
              local_248._0_3_ = CONCAT12(8,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            iVar3 = FUN_08001654(3,&local_240);
            if (iVar3 == 0) {
              local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (local_240 != -1) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            uVar4 = 0x26;
          }
          else if (bVar1 < 4) {
            if (sVar2 != 9) {
              local_248._0_3_ = CONCAT12(8,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            iVar3 = FUN_08001654(2,&local_23e);
            if (iVar3 == 0) {
              local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (local_23e != -1) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            uVar4 = 0x1b;
          }
          else {
            if (bVar1 != 6) {
              if (5 < bVar1) {
                (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08000e6c,3);
                return;
              }
              if (sVar2 != 0xfb) {
                local_248._0_3_ = CONCAT12(8,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              iVar3 = FUN_08001654(0,&local_244);
              if (iVar3 == 0) {
                local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              if (local_244 != -1) {
                local_248._0_3_ = CONCAT12(5,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              iVar3 = FUN_08001654(1,&local_244);
              if (iVar3 == 0) {
                local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              if (local_244 != -1) {
                local_248._0_3_ = CONCAT12(5,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              iVar3 = FUN_08001654(2,&local_244);
              if (iVar3 == 0) {
                local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              if (local_244 != -1) {
                local_248._0_3_ = CONCAT12(5,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              iVar3 = FUN_08001654(3,&local_244);
              if (iVar3 == 0) {
                local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              if (local_244 != -1) {
                local_248._0_3_ = CONCAT12(5,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              FUN_08006048(auStack_238,0xd);
              FUN_08006026(auStack_236,param_2 + 4,0xc);
              local_22a = 0;
              FUN_08006048(auStack_229,10);
              FUN_08006026(auStack_227,param_2 + 0x10,9);
              local_21e = 0;
              FUN_08006048(auStack_21d,9);
              FUN_08006026(auStack_21b,param_2 + 0x19,8);
              local_213 = 0;
              FUN_08006048(auStack_212,0xde);
              FUN_08006026(auStack_210,param_2 + 0x21,0xdd);
              local_133 = 0;
              iVar3 = FUN_080017aa(0,auStack_238,0x106);
              if (iVar3 == 0) {
                local_248._0_3_ = CONCAT12(0xe,(ushort)local_248);
                (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
                return;
              }
              local_248._0_3_ = (uint3)(ushort)local_248;
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (sVar2 != 3) {
              local_248._0_3_ = CONCAT12(8,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            iVar3 = FUN_08001654(4,&local_242);
            if (iVar3 == 0) {
              local_248._0_3_ = CONCAT12(0x15,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            if (local_242 != -1) {
              local_248._0_3_ = CONCAT12(5,(ushort)local_248);
              (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
              return;
            }
            uVar4 = 0x106;
          }
          iVar3 = FUN_080017aa(uVar4,puVar5,sVar2 + 2);
          if (iVar3 == 0) {
            local_248._0_3_ = CONCAT12(0xe,(ushort)local_248);
            (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
          }
          else {
            local_248._0_3_ = (uint3)(ushort)local_248;
            (**(code **)(param_1 + 0x20b4))(param_1,&local_248,3);
          }
        }
      }
    }
  }
  return;
}



//==== FUNC FUN_08000c30 @ 08000c30 ====

void FUN_08000c30(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined auStack_58 [2];
  undefined local_56;
  undefined auStack_54 [16];
  undefined auStack_44 [32];
  int local_24;
  
  local_24 = param_3;
  FUN_08005cce(auStack_58,&DAT_080015a4,3);
  local_24 = local_24 + -1;
  iVar4 = FUN_08001970(param_1,auStack_58,2,&local_24);
  if (iVar4 != 0) {
    bVar3 = *(byte *)(param_2 + 2) | *(byte *)(param_2 + 1);
    iVar4 = FUN_08001970(param_1,auStack_58,bVar3,&local_24);
    if (iVar4 != 0) {
      iVar4 = FUN_08001970(param_1,auStack_58,2,&local_24);
      if (iVar4 != 0) {
        pbVar5 = (byte *)((uint)bVar3 + param_2 + 3);
        bVar1 = *pbVar5;
        bVar2 = pbVar5[1];
        iVar4 = FUN_08001970(param_1,auStack_58,bVar2 | bVar1,&local_24);
        if (iVar4 != 0) {
          FUN_0800500c(auStack_44,0x1c);
          FUN_08005024(auStack_44);
          FUN_0800500c(auStack_54,0x10);
          iVar4 = FUN_0800504e(auStack_54,0xe);
          if ((iVar4 != 0) &&
             (iVar4 = FUN_080051ac(param_2 + 3,bVar3,pbVar5 + 2,bVar2 | bVar1,auStack_54,auStack_44)
             , iVar4 == 0)) {
            local_56 = 0;
            (**(code **)(param_1 + 0x20b4))(param_1,auStack_58,3);
            *(undefined *)(param_1 + 7) = 1;
            return;
          }
          local_56 = 0x17;
          (**(code **)(param_1 + 0x20b4))(param_1,auStack_58,3);
        }
      }
    }
  }
  return;
}



//==== FUNC FUN_08000d24 @ 08000d24 ====

void FUN_08000d24(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined auStack_3c [2];
  undefined local_3a;
  undefined *local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined auStack_28 [2];
  undefined auStack_26 [18];
  
  FUN_08005cce(auStack_3c,&DAT_080015a8,3);
  uVar3 = 0;
  iVar2 = FUN_0800603c(DAT_08001504);
  if (iVar2 == 0xc) {
    uStack_34 = DAT_080015b0;
    local_38 = auStack_3c;
    local_30 = DAT_080015b4;
    uStack_2c = DAT_080015b8;
    (**(code **)(param_1 + 0x20b8))(param_1,&local_38,&local_30,2);
  }
  else {
    local_3a = 0x15;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_3c,3,*(code **)(param_1 + 0x20b4),uVar3);
    (**(code **)(param_1 + 0x20c0))(param_1,0);
    uVar4 = 0;
    while( true ) {
      if (DAT_08001508 <= uVar4) break;
      uVar4 = uVar4 + 1;
    }
    FUN_08006178();
    uVar4 = 0;
    while ((uVar4 < 10 && (iVar2 = FUN_08006118(s_AT_AC_0_080015bc,&DAT_080015c8), iVar2 == 0))) {
      uVar4 = uVar4 + 1;
    }
    FUN_08006118(s_AT_EP_0_080015d0,&DAT_080015c8);
    for (uVar4 = 0; uVar4 < 10; uVar4 = uVar4 + 1) {
      FUN_08006104(s_AT_MZ_080015dc);
      sVar1 = FUN_080060f0(auStack_28,0x14);
      if ((sVar1 == 0x10) && (iVar2 = FUN_0800188c(auStack_28,&DAT_0800102c,2), iVar2 == 0)) {
        FUN_08006026(DAT_0800150c,auStack_26,0xc);
        FUN_08006048(DAT_08001504,0xc);
        break;
      }
    }
    FUN_08006118(s_AT_AC_1_080015e4,&DAT_080015c8);
    FUN_08006118(s_AT_EP_1_080015f0,&DAT_080015c8);
    FUN_08006178();
    (**(code **)(param_1 + 0x20c0))(param_1,1);
  }
  return;
}



//==== FUNC FUN_08000e74 @ 08000e74 ====

void FUN_08000e74(int param_1,int param_2,int param_3)

{
  undefined uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint local_58;
  undefined auStack_54 [2];
  undefined local_52;
  undefined auStack_50 [2];
  undefined auStack_4e [30];
  undefined auStack_30 [24];
  int local_18;
  
  local_18 = param_3;
  FUN_08005cce(auStack_54,&DAT_080015fc,3);
  if (*(char *)(param_1 + 6) == '\0') {
    local_52 = 0x13;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_54,3);
  }
  else {
    local_18 = local_18 + -1;
    iVar4 = FUN_08001970(param_1,auStack_54,2,&local_18);
    if (iVar4 != 0) {
      uVar1 = *(undefined *)(param_2 + 2);
      uVar2 = CONCAT11(*(undefined *)(param_2 + 1),uVar1);
      iVar4 = FUN_08001970(param_1,auStack_54,uVar2,&local_18);
      if (iVar4 != 0) {
        FUN_08006026(auStack_30,param_2 + 3,(uint)uVar2);
        (**(code **)(param_1 + 0x20b4))(param_1,auStack_54,3);
        (**(code **)(param_1 + 0x20c0))(param_1,0);
        iVar4 = FUN_080064f8();
        if (iVar4 == 0) {
          for (local_58 = 0; local_58 < DAT_08001508; local_58 = local_58 + 1) {
          }
        }
        cVar3 = FUN_080061a6(auStack_30,uVar1);
        if (cVar3 == '\0') {
          FUN_08006178();
          local_58 = 0;
          while ((local_58 < 10 &&
                 (iVar4 = FUN_08006118(s_AT_AC_0_080015bc,&DAT_080015c8), iVar4 == 0))) {
            local_58 = local_58 + 1;
          }
          FUN_08006118(s_AT_EP_0_080015d0,&DAT_080015c8);
          for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
            FUN_08006654(auStack_50,0x1e,s_AT_MN__s_08001600,auStack_30);
            FUN_08006104(auStack_50);
            cVar3 = FUN_080060bc(auStack_50,0x1e,DAT_08001510);
            if ((cVar3 != '\0') && (iVar4 = FUN_0800188c(auStack_50,&DAT_080015c8,4), iVar4 == 0)) {
              FUN_08006104(s_AT_MN_0800160c);
              cVar3 = FUN_080060bc(auStack_50,0x1e,DAT_08001510);
              if ((cVar3 != '\0') &&
                 ((iVar4 = FUN_0800188c(auStack_50,&DAT_080010c4,2), iVar4 == 0 &&
                  (iVar4 = FUN_0800188c(auStack_4e,auStack_30,uVar2 - 1), iVar4 == 0)))) break;
            }
          }
        }
        FUN_08006118(s_AT_AC_1_080015e4,&DAT_080015c8);
        FUN_08006118(s_AT_EP_1_080015f0,&DAT_080015c8);
        FUN_08006178();
        (**(code **)(param_1 + 0x20c0))(param_1,1);
      }
    }
  }
  return;
}



//==== FUNC FUN_08001044 @ 08001044 ====

undefined8 FUN_08001044(int param_1,int param_2)

{
  int iVar1;
  undefined2 local_18;
  undefined uStack_16;
  undefined uStack_15;
  undefined4 uStack_14;
  
  local_18 = (undefined2)DAT_08001614;
  uStack_16 = (undefined)((uint)DAT_08001614 >> 0x10);
  uStack_15 = (undefined)((uint)DAT_08001614 >> 0x18);
  if (*(char *)(param_2 + 1) == '\0') {
    uStack_16 = FUN_08001942();
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
  }
  else {
    uStack_16 = *(undefined *)(param_2 + 1);
    iVar1 = FUN_0800194e(*(undefined *)(param_2 + 1));
    if (iVar1 == 0) {
      uStack_15 = 0x11;
      (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
    }
    uStack_15 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,4);
    (**(code **)(param_1 + 0x20a0))(param_1);
  }
  return CONCAT44(uStack_14,CONCAT13(uStack_15,CONCAT12(uStack_16,local_18)));
}



//==== FUNC FUN_080010dc @ 080010dc ====

undefined8 FUN_080010dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined local_15;
  undefined4 local_14;
  
  uStack_18 = (undefined2)param_3;
  local_16 = (undefined)((uint)param_3 >> 0x10);
  local_15 = (undefined)((uint)param_3 >> 0x18);
  local_14 = param_4;
  FUN_08005cce(&uStack_18,&DAT_08001618,5);
  local_16 = 0;
  local_15 = *(undefined *)(param_1 + 2);
  uVar1 = FUN_08001914();
  local_14 = CONCAT31(local_14._1_3_,uVar1);
  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,5);
  return CONCAT44(local_14,CONCAT13(local_15,CONCAT12(local_16,uStack_18)));
}



//==== FUNC FUN_08001138 @ 08001138 ====

void FUN_08001138(int param_1)

{
  int iVar1;
  undefined auStack_110 [2];
  undefined local_10e;
  ushort local_10c [2];
  undefined4 local_108;
  uint local_104;
  undefined *local_100;
  undefined *local_fc;
  undefined auStack_f8 [228];
  
  FUN_08005cce(auStack_110,&DAT_08001620,3);
  iVar1 = FUN_08001654(3,local_10c);
  if (iVar1 == 0) {
    local_10e = 0x15;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_110,3);
  }
  else if (local_10c[0] == 0xffff) {
    local_10e = 0xf;
    (**(code **)(param_1 + 0x20b4))(param_1,auStack_110,3);
  }
  else {
    iVar1 = FUN_080016c0(3,auStack_f8,0xde);
    if (iVar1 == 0) {
      local_10e = 0x15;
      (**(code **)(param_1 + 0x20b4))(param_1,auStack_110,3);
    }
    else {
      local_fc = auStack_f8;
      local_108 = DAT_08001624;
      local_104 = (uint)local_10c[0];
      local_100 = auStack_110;
      (**(code **)(param_1 + 0x20b8))(param_1,&local_100,&local_108,2);
    }
  }
  return;
}



//==== FUNC FUN_080011ec @ 080011ec ====

undefined8 FUN_080011ec(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined2 uStack_20;
  undefined local_1e;
  undefined uStack_1d;
  int local_1c;
  
  uStack_20 = (undefined2)param_2;
  local_1e = (undefined)((uint)param_2 >> 0x10);
  uStack_1d = (undefined)((uint)param_2 >> 0x18);
  local_1c = param_3;
  FUN_08005cce(&uStack_20,&DAT_0800162c,3);
  if (*(char *)(param_1 + 6) == '\0') {
    local_1e = 0x13;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
  }
  else {
    local_1c = local_1c + -1;
    iVar2 = FUN_08001970(param_1,&uStack_20,2,&local_1c);
    if (iVar2 != 0) {
      uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
      iVar2 = FUN_08001970(param_1,&uStack_20,uVar1,&local_1c);
      if (iVar2 != 0) {
        uVar3 = FUN_08005014(s_000000_08001630);
        if ((uVar1 == uVar3) &&
           (iVar2 = FUN_08005120(s_000000_08001630,param_2 + 3,uVar1), iVar2 != 0)) {
          puVar4 = (undefined *)((uint)uVar1 + param_2 + 3);
          iVar2 = FUN_08001970(param_1,&uStack_20,2,&local_1c);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_08001970(param_1,&uStack_20,CONCAT11(*puVar4,puVar4[1]),&local_1c),
             iVar2 != 0)) {
            local_1e = 0;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0x12;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        }
      }
    }
  }
  return CONCAT44(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20)));
}



//==== FUNC FUN_080012ce @ 080012ce ====

undefined8 FUN_080012ce(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined uStack_15;
  int local_14;
  
  uStack_18 = (undefined2)param_2;
  local_16 = (undefined)((uint)param_2 >> 0x10);
  uStack_15 = (undefined)((uint)param_2 >> 0x18);
  local_14 = param_3;
  FUN_08005cce(&uStack_18,&DAT_08001638,3);
  local_14 = local_14 + -1;
  iVar1 = FUN_08001970(param_1,&uStack_18,2,&local_14);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_08001970(param_1,&uStack_18,
                           CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2)),
                           &local_14), iVar1 != 0)) {
    local_16 = 0;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  return CONCAT44(local_14,CONCAT13(uStack_15,CONCAT12(local_16,uStack_18)));
}



//==== FUNC FUN_08001338 @ 08001338 ====

void FUN_08001338(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined auStack_48 [2];
  undefined local_46;
  undefined local_44;
  byte local_43;
  undefined auStack_42 [34];
  int local_20;
  
  local_20 = param_3;
  FUN_08005cce(auStack_48,&DAT_0800163c,3);
  local_20 = local_20 + -1;
  iVar3 = FUN_08001970(param_1,auStack_48,2,&local_20);
  if (iVar3 != 0) {
    uVar2 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
    iVar3 = FUN_08001970(param_1,auStack_48,uVar2,&local_20);
    if (iVar3 != 0) {
      local_43 = FUN_08005014(s_000000_08001630);
      if (local_43 + 2 < 0x1f) {
        local_44 = 0;
        FUN_08006026(auStack_42,s_000000_08001630,local_43);
        iVar3 = FUN_08005120(&local_44,param_2 + 1,uVar2 + 2);
        if (iVar3 == 0) {
          bVar1 = *DAT_08001514;
          *DAT_08001514 = bVar1 + 1;
          if ((byte)(bVar1 + 1) < 3) {
            local_46 = 0x12;
            (**(code **)(param_1 + 0x20b4))(param_1,auStack_48,3);
          }
          else {
            local_46 = 0x14;
            (**(code **)(param_1 + 0x20b4))(param_1,auStack_48,3);
            FUN_0800674c(DAT_08001518);
            (**(code **)(param_1 + 0x20a0))(param_1);
          }
        }
        else {
          *DAT_08001514 = 0;
          *(undefined *)(param_1 + 6) = 1;
          local_46 = 0;
          (**(code **)(param_1 + 0x20b4))(param_1,auStack_48,3);
        }
      }
      else {
        local_46 = 0xc;
        (**(code **)(param_1 + 0x20b4))(param_1,auStack_48,3);
      }
    }
  }
  return;
}



//==== FUNC FUN_0800145c @ 0800145c ====

undefined8 FUN_0800145c(int param_1)

{
  undefined8 uStack_18;
  
  FUN_08005cce(&uStack_18,&DAT_08001640,3);
  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return uStack_18;
}



//==== FUNC FUN_08001494 @ 08001494 ====

undefined8 FUN_08001494(int param_1)

{
  int iVar1;
  undefined2 uStack_18;
  undefined local_16;
  undefined5 uStack_15;
  
  FUN_08005cce(&uStack_18,&DAT_08001644,3);
  iVar1 = FUN_080002e0();
  if (iVar1 == 0) {
    local_16 = 0x17;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  else {
    iVar1 = FUN_08000226(DAT_0800151c);
    if (iVar1 != 0) {
      local_16 = 0;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
      FUN_0800023e(DAT_0800151c);
    }
    local_16 = 0xf;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_18,3);
  }
  return CONCAT53(uStack_15,CONCAT12(local_16,uStack_18));
}



//==== FUNC FUN_08001524 @ 08001524 ====

undefined8 FUN_08001524(int param_1)

{
  undefined4 uVar1;
  undefined2 local_20;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  local_20 = (undefined2)DAT_08001648;
  uStack_1e = (undefined)((uint)DAT_08001648 >> 0x10);
  uStack_1d = (undefined)((uint)DAT_08001648 >> 0x18);
  local_1c = (undefined)DAT_0800164c;
  local_1b = (undefined)((uint)DAT_0800164c >> 8);
  local_1a = (undefined)((uint)DAT_0800164c >> 0x10);
  local_19 = (undefined)((uint)DAT_0800164c >> 0x18);
  uVar1 = FUN_0800677c(&local_20,&DAT_08001648);
  uStack_1e = (undefined)((uint)uVar1 >> 0x18);
  uStack_1d = (undefined)((uint)uVar1 >> 0x10);
  local_1c = (undefined)((uint)uVar1 >> 8);
  local_1b = (undefined)uVar1;
  local_1a = 0xc;
  local_19 = 0;
  (**(code **)(param_1 + 0x20b4))(param_1,&local_20,8);
  return CONCAT17(local_19,CONCAT16(local_1a,CONCAT15(local_1b,CONCAT14(local_1c,CONCAT13(uStack_1d,
                                                                                          CONCAT12(
                                                  uStack_1e,local_20))))));
}



//==== FUNC FUN_08001650 @ 08001650 ====

undefined4 FUN_08001650(void)

{
  return 1;
}



//==== FUNC FUN_08001654 @ 08001654 ====

undefined4 FUN_08001654(byte param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_38 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [6];
  
  FUN_08005cce(auStack_28,&DAT_080017ec,0x14);
  local_34 = DAT_08001800;
  uStack_30 = DAT_08001804;
  uStack_2c = DAT_08001808;
  if (param_1 < 6) {
    iVar3 = FUN_08001650(&local_34,&DAT_08001800);
    if (iVar3 == 0) {
      iVar3 = FUN_08006daa(auStack_38,*(undefined2 *)((int)&local_34 + (char)param_1 * 2),2);
      if (iVar3 == 0) {
        uVar1 = FUN_0800603c(auStack_38);
        *param_2 = uVar1;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar1 = FUN_0800603c(auStack_28[(char)param_1]);
      *param_2 = uVar1;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC FUN_080016c0 @ 080016c0 ====

ushort FUN_080016c0(byte param_1,undefined4 param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [5];
  
  FUN_08005cce(aiStack_28,&DAT_0800180c,0x14);
  local_3c = DAT_08001820;
  uStack_38 = DAT_08001824;
  local_34 = DAT_08001828;
  uStack_30 = DAT_0800182c;
  uStack_2c = DAT_08001830;
  if (param_1 < 6) {
    iVar2 = FUN_08001650(&local_34,&DAT_08001828);
    if (iVar2 == 0) {
      iVar2 = FUN_08006daa(auStack_40,*(undefined2 *)((int)&local_34 + (char)param_1 * 2),2);
      if (iVar2 == 0) {
        uVar1 = FUN_0800603c(auStack_40);
        if (uVar1 == *(byte *)((int)&local_3c + (int)(char)param_1)) {
          if (param_3 < uVar1) {
            uVar1 = param_3;
          }
          iVar2 = FUN_08006daa(param_2,*(short *)((int)&local_34 + (char)param_1 * 2) + 2,uVar1);
          if (iVar2 != 0) {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = FUN_0800603c(aiStack_28[(char)param_1]);
      if (uVar1 == *(byte *)((int)&local_3c + (int)(char)param_1)) {
        if (param_3 < uVar1) {
          uVar1 = param_3;
        }
        FUN_08006026(param_2,aiStack_28[(char)param_1] + 2,uVar1);
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_080017aa @ 080017aa ====

undefined4 FUN_080017aa(undefined2 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_08001650();
  if (iVar1 == 0) {
    iVar1 = FUN_08006cae(param_2,param_1,param_3);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_08005098(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



//==== FUNC FUN_08001834 @ 08001834 ====

int FUN_08001834(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    puVar2 = (uint *)((int)puVar3 + 1);
    if (*(char *)puVar3 == '\0') goto LAB_08001866;
    puVar3 = puVar2;
    uVar4 = (uint)puVar2 & 3;
  }
  uVar4 = *puVar3;
  while ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
    puVar3 = puVar3 + 1;
    uVar4 = *puVar3;
  }
  cVar1 = *(char *)puVar3;
  puVar2 = puVar3;
  while (puVar2 = (uint *)((int)puVar2 + 1), cVar1 != '\0') {
    cVar1 = *(char *)puVar2;
  }
LAB_08001866:
  return (int)puVar2 - (int)((int)param_1 + 1);
}



//==== FUNC FUN_0800186a @ 0800186a ====

void FUN_0800186a(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_r9;
  
  while( true ) {
    piVar1 = param_1 + 1;
    iVar2 = *param_1;
    if (iVar2 == 0) break;
    param_1 = param_1 + 2;
    puVar3 = (undefined4 *)*piVar1;
    if ((int)puVar3 << 0x1f < 0) {
      puVar3 = (undefined4 *)(unaff_r9 + -1 + (int)puVar3);
    }
    do {
      *puVar3 = 0;
      iVar2 = iVar2 + -4;
      puVar3 = puVar3 + 1;
    } while (iVar2 != 0);
  }
  return;
}



//==== FUNC FUN_0800188c @ 0800188c ====

uint FUN_0800188c(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  uint uVar4;
  bool bVar5;
  
  uVar1 = 0;
  while (((uint)param_1 & 3) != 0) {
    bVar5 = param_3 != 0;
    param_3 = param_3 - 1;
    uVar2 = param_3;
    if (bVar5) {
      in_r12 = (uint)*(byte *)param_2;
      uVar1 = *(byte *)param_1 - in_r12;
      uVar2 = uVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
    if (uVar2 != 0) {
      return uVar1;
    }
  }
  do {
    uVar2 = param_3;
    param_3 = uVar2 - 4;
    bVar5 = param_3 == 0;
    if (3 < uVar2) {
      uVar1 = *param_1;
      in_r12 = *param_2;
      bVar5 = uVar1 == in_r12;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  } while (bVar5);
  if (0xfffffffb < param_3) {
    do {
      uVar3 = uVar2;
      uVar4 = uVar3 - 1;
      if (uVar3 != 0) {
        uVar1 = (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
        uVar4 = uVar1;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
      }
      uVar2 = uVar3 - 1;
    } while (uVar4 == 0);
    if (uVar3 == 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  uVar4 = in_r12 << 0x18 | (in_r12 >> 8 & 0xff) << 0x10 | (in_r12 >> 0x10 & 0xff) << 8 |
          in_r12 >> 0x18;
  uVar2 = uVar1 - uVar4;
  bVar5 = uVar2 != 0;
  if (uVar1 < uVar4) {
    uVar2 = 0xffffffff;
  }
  if (uVar1 >= uVar4 && bVar5) {
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_08001908 @ 08001908 ====

void FUN_08001908(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setMainStackPointer(param_1);
  }
  return;
}



//==== FUNC FUN_08001910 @ 08001910 ====

void FUN_08001910(void)

{
  WaitForEvent();
  return;
}



//==== FUNC FUN_08001914 @ 08001914 ====

undefined8 FUN_08001914(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_08007352(2);
  return CONCAT44(unaff_r7,(uint)bVar1);
}



//==== FUNC FUN_08001920 @ 08001920 ====

bool FUN_08001920(byte param_1)

{
  uint uVar1;
  
  FUN_08007338(2,param_1);
  uVar1 = FUN_08001914();
  return param_1 == uVar1;
}



//==== FUNC FUN_08001942 @ 08001942 ====

undefined8 FUN_08001942(void)

{
  byte bVar1;
  undefined4 unaff_r7;
  
  bVar1 = FUN_08007352(1);
  return CONCAT44(unaff_r7,(uint)bVar1);
}



//==== FUNC FUN_0800194e @ 0800194e ====

bool FUN_0800194e(byte param_1)

{
  uint uVar1;
  
  FUN_08007338(1,param_1);
  uVar1 = FUN_08001942();
  return param_1 == uVar1;
}



//==== FUNC FUN_08001970 @ 08001970 ====

undefined8 FUN_08001970(int param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = *param_4;
  if (param_3 <= uVar1) {
    *param_4 = *param_4 - param_3;
  }
  else {
    *(undefined *)(param_2 + 2) = 8;
    (**(code **)(param_1 + 0x20b4))(param_1,param_2,3);
  }
  return CONCAT44(param_4,(uint)(param_3 <= uVar1));
}



//==== FUNC FUN_080019a0 @ 080019a0 ====

void FUN_080019a0(undefined *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; param_4 = param_4 & 0xff, (uVar1 & 0xff) < param_4; uVar1 = (uVar1 & 0xff) + 1) {
    *param_1 = (char)((ushort)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2) >> 8);
    param_1[1] = (char)*(undefined2 *)(param_3 + (uVar1 & 0xff) * 2);
    FUN_08006026(param_1 + 2,*(undefined4 *)(param_2 + (uVar1 & 0xff) * 4),
                 *(undefined2 *)(param_3 + (uVar1 & 0xff) * 2));
    param_1 = param_1 + 2 + *(ushort *)(param_3 + (uVar1 & 0xff) * 2);
  }
  return;
}



//==== FUNC FUN_080019fc @ 080019fc ====

void FUN_080019fc(char *param_1)

{
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      *(undefined4 *)(param_1 + 0x18) = 6000;
      sub_080022d8(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0x14;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_0800616a();
  }
  return;
}



//==== FUNC FUN_08001a28 @ 08001a28 ====

undefined8 FUN_08001a28(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined local_c;
  undefined local_b;
  undefined local_a;
  undefined local_9;
  
  local_c = (undefined)param_4;
  local_b = (undefined)((uint)param_4 >> 8);
  local_a = (undefined)((uint)param_4 >> 0x10);
  local_9 = (undefined)((uint)param_4 >> 0x18);
  local_10 = param_3;
  if ((*param_1 == '\0') && (iVar1 = FUN_080064f8(), iVar1 == 0)) {
    *DAT_08002678 = *DAT_08002678 | 0x140;
    FUN_080075f6(0x140,1);
    local_10 = 0x100;
    local_c = 1;
    local_a = 0;
    local_b = 3;
    local_9 = 1;
    FUN_08007816(DAT_080026f4,0x100);
    FUN_08007740(DAT_080026f4,&local_10);
    local_10 = 0x200;
    FUN_08007812(DAT_080026f8,0x200);
    FUN_08007740(DAT_080026f8,&local_10);
    FUN_080078e0(0);
    FUN_080078e0(2);
    FUN_080078e0(1);
    param_1[1] = '\0';
    FUN_080075f6(0x1ff,1);
    local_c = 3;
    local_b = 3;
    local_9 = 0;
    local_10 = 0xffff;
    FUN_08007740(DAT_080026fc,&local_10);
    FUN_08007740(DAT_08002700,&local_10);
    FUN_08007740(DAT_08002704,&local_10);
    FUN_08007740(DAT_08002708,&local_10);
    FUN_08007740(DAT_080026f4,&local_10);
    FUN_08007740(DAT_0800278c,&local_10);
    FUN_08007740(DAT_080026f8,&local_10);
    local_10 = 0xfdff;
    FUN_08007740(DAT_080027ac,&local_10);
    local_10 = 0xff7f;
    FUN_08007740(DAT_080027e4,&local_10);
    FUN_080075f6(0x1fc,0);
    FUN_08005fcc(5);
    if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x14)) {
      FUN_08001910();
    }
    FUN_08001e94(param_1,0);
    FUN_080019fc(param_1);
  }
  return CONCAT17(local_9,CONCAT16(local_a,CONCAT15(local_b,CONCAT14(local_c,local_10))));
}



//==== FUNC FUN_08001b74 @ 08001b74 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08001b74(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r3;
  ushort *puVar5;
  byte bVar6;
  
  uVar2 = _DAT_6400007c;
  if (_DAT_6400007c < 0x79) {
    puVar5 = DAT_08002820;
    for (bVar6 = 0; bVar6 < uVar2; bVar6 = bVar6 + 1) {
      uVar1 = *puVar5;
      uVar3 = FUN_08005014(s_DOWNLOAD_BIN_08002910);
      if ((uVar1 == uVar3) &&
         (iVar4 = FUN_0800188c(puVar5 + 1,s_DOWNLOAD_BIN_08002910,*puVar5), iVar4 == 0)) {
        if (*(int *)(puVar5 + 0x11) != 0xf0000) {
          return in_r3;
        }
        iVar4 = FUN_080052be(*(undefined4 *)(puVar5 + 0x13));
        if (iVar4 != 0) {
          return in_r3;
        }
        iVar4 = FUN_080052be(DAT_08002824);
        if ((iVar4 == 0) &&
           (iVar4 = FUN_08007908(DAT_08002828,*(int *)(puVar5 + 0x13) + 0x10000,6), -1 < iVar4)) {
          return in_r3;
        }
        FUN_08007934();
        iVar4 = FUN_08007942(DAT_08002824,*(undefined4 *)(puVar5 + 0x11));
        if (iVar4 != 0) {
          return in_r3;
        }
        iVar4 = FUN_0800798a(DAT_08002824,*(undefined4 *)(puVar5 + 0x13),
                             *(undefined4 *)(puVar5 + 0x11));
        if (iVar4 != 0) {
          return in_r3;
        }
        FUN_08001920(0);
        return in_r3;
      }
      puVar5 = puVar5 + 0x25;
    }
  }
  return in_r3;
}



//==== FUNC sub_08001c32 @ 08001c32 ====

undefined8 sub_08001c32(int param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (((*(char *)(param_1 + 0xb) == '\0') ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 0x28))) ||
         (*(char *)(param_1 + 0xc) != *(char *)(param_1 + 0x103e))) {
        if (*(ushort *)(param_1 + 0x1e) < 3) {
          (**(code **)(param_1 + 0x20b4))(param_1,&local_18,3);
          *(undefined *)(param_1 + 0xd) = 0;
          uVar3 = 0;
        }
        else {
          sVar1 = *(short *)(param_1 + 0x1e);
          uVar5 = sVar1 - 2;
          *(undefined *)(param_1 + 0xb) = *(undefined *)(param_1 + 0x25);
          *(undefined *)(param_1 + 0xc) = *(undefined *)(param_1 + 0x28);
          cVar2 = *(char *)(param_1 + 0x29);
          if (cVar2 == '!') {
            iVar4 = (**(code **)(param_1 + 0x20c8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\"') {
            iVar4 = (**(code **)(param_1 + 0x20cc))(param_1,param_1 + 0x29,uVar5 + 1);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '#') {
            iVar4 = (**(code **)(param_1 + 0x20d0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '$') {
            iVar4 = (**(code **)(param_1 + 0x20d4))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '%') {
            iVar4 = (**(code **)(param_1 + 0x20d8))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '&') {
            iVar4 = (**(code **)(param_1 + 0x20dc))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == '\'') {
            uVar3 = FUN_08002790(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '(') {
            iVar4 = (**(code **)(param_1 + 0x20e0))(param_1,param_1 + 0x2a,sVar1 + -2);
            uVar3 = (uint)(iVar4 != 0);
          }
          else if (cVar2 == ')') {
            uVar3 = FUN_080027b0(param_1,param_1 + 0x2a,sVar1 + -2);
          }
          else if (cVar2 == '*') {
            uVar3 = FUN_080027ca(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == '/') {
            uVar3 = FUN_080027e8(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else if (cVar2 == -1) {
            (**(code **)(param_1 + 0x20b4))(param_1,param_1 + 0x29,uVar5 + 1);
          }
          else {
            (**(code **)(param_1 + 0x20b4))(param_1,&DAT_0800207c,2);
          }
          *(undefined *)(param_1 + 0xd) = 0;
          uVar3 = uVar3 & 0xff;
        }
      }
      else {
        if (*(uint *)(param_1 + 0x1034) < 0x1011) {
          (**(code **)(param_1 + 0x20b0))
                    (param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
        }
        else {
          (**(code **)(param_1 + 0x20b0))(param_1,param_1 + 0x1038,4);
        }
        (**(code **)(param_1 + 0x20c0))(param_1,1);
        *(undefined *)(param_1 + 0xd) = 0;
        uVar3 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xb) != '\0') {
        (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08001e90,2);
      }
      *(undefined *)(param_1 + 0xd) = 0;
      uVar3 = 0;
    }
  }
  return CONCAT44(local_18,uVar3);
}



//==== FUNC FUN_08001e94 @ 08001e94 ====

undefined8 FUN_08001e94(int param_1,char param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  FUN_08005182();
  FUN_08007884(0);
  FUN_08007884(2);
  FUN_08007884(1);
  FUN_08007884(4);
  FUN_080078bc(0);
  FUN_080078e0(2);
  FUN_080078e0(1);
  FUN_080078e0(4);
  if (param_2 != '\0') {
    iVar1 = FUN_08000184();
    *(bool *)param_1 = iVar1 == 1;
    FUN_08005dc8(*(char *)(param_1 + 4) != '\x01');
    *(undefined4 *)(param_1 + 0x18) = 6000;
    FUN_08007ac4();
    for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
      FUN_08007b08(1);
      for (local_18 = 0; local_18 < DAT_08002bbc; local_18 = local_18 + 1) {
      }
      FUN_08007b08(0);
      for (local_18 = 0; local_18 < DAT_08002bbc; local_18 = local_18 + 1) {
      }
    }
    FUN_08001b74(param_1);
  }
  FUN_080067d2();
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_0800633e(0x4b00);
  }
  else {
    FUN_0800633e(0x1c200);
  }
  FUN_0800642a(1);
  FUN_080065b6();
  FUN_080065ca(1);
  FUN_08006698(10000);
  FUN_080066ec(1);
  return CONCAT44(local_14,local_18);
}



//==== FUNC sub_08001f8e @ 08001f8e ====

undefined8 sub_08001f8e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_08001e94(param_1,1);
  (**(code **)(param_1 + 0x20c4))(param_1);
  iVar1 = FUN_0800028c();
  if (iVar1 == 0) {
    FUN_08001920(6);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_080002f6();
  if (iVar1 == 0) {
    FUN_08001920(8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_080016c0(0,&iStack_18,0xd);
  if ((iVar1 == 0) && (iVar1 = FUN_08000226(DAT_08002bc4), iVar1 != 0)) {
    FUN_0800023e(DAT_08002bc4);
  }
  return CONCAT44(uStack_14,iStack_18);
}



//==== FUNC sub_08001fe8 @ 08001fe8 ====

void sub_08001fe8(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableFIQinterrupts(1);
  }
  *DAT_08002bc8 = DAT_08002bcc;
  return;
}



//==== FUNC sub_08001ffa @ 08001ffa ====

undefined8 sub_08001ffa(int param_1)

{
  bool bVar1;
  int iVar2;
  uint local_10;
  undefined4 uStack_c;
  
  iVar2 = FUN_080064f8();
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 5) != '\0') goto LAB_08002078;
    for (local_10 = 0; local_10 < DAT_08002bbc; local_10 = local_10 + 1) {
    }
  }
  iVar2 = FUN_08001914();
  if ((iVar2 == 0) && (iVar2 = FUN_08000258(param_1), iVar2 != 0)) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(1);
    }
    iVar2 = FUN_080002e0(1);
    if (iVar2 == 0) {
      FUN_08001920(5);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts(0);
      }
    }
    else {
      iVar2 = FUN_08000226(DAT_08002824);
      if (iVar2 == 0) {
        FUN_08001920(4);
      }
      else {
        FUN_080065ac();
        FUN_0800023e(DAT_08002824);
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        enableIRQinterrupts(0);
      }
    }
  }
LAB_08002078:
  return CONCAT44(uStack_c,local_10);
}



//==== FUNC sub_08002080 @ 08002080 ====

void sub_08002080(int param_1)

{
  (**(code **)(param_1 + 0x20a4))(param_1);
  return;
}



//==== FUNC FUN_08002090 @ 08002090 ====

undefined4 FUN_08002090(void)

{
  return 0;
}



//==== FUNC sub_08002096 @ 08002096 ====

undefined4 sub_08002096(int param_1,byte param_2,undefined param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined2 *)(param_1 + 0x10) = 0x14;
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined *)(param_1 + 0x1c) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 8) = 1;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      uVar2 = FUN_08002090(param_1,param_2);
    }
    else {
      if (*(uint *)(param_1 + 0x20) < 6) {
        if (*(uint *)(param_1 + 0x20) < 2) {
          local_28 = DAT_08002bf4;
          uStack_24 = DAT_08002bf8;
          uStack_20 = DAT_08002bfc;
          uVar3 = 0;
          bVar1 = false;
          if (*(int *)(param_1 + 0x20) == 0) {
            for (; (uVar3 & 0xff) < 3; uVar3 = (uVar3 & 0xff) + 1) {
              if (*(byte *)((int)&local_28 + *(int *)(param_1 + 0x20) + (uVar3 & 0xff) * 3) ==
                  param_2) {
                *DAT_08002bd8 = (byte)uVar3;
                bVar1 = true;
                break;
              }
            }
          }
          else if (*(byte *)((int)&local_28 + (uint)*DAT_08002bd8 * 3 + 1) == param_2) {
            if (*DAT_08002bd8 == 1) {
              FUN_08006104(s_AT_IP_0000_08002c00);
            }
            else if (*DAT_08002bd8 == 2) {
              *(undefined *)(param_1 + 8) = 0;
              bVar1 = true;
            }
            else {
              bVar1 = true;
            }
          }
          if (bVar1) {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          else {
            *(undefined *)(param_1 + 0xe) = 1;
          }
          return 0;
        }
        *(byte *)(*(int *)(param_1 + 0x20) + param_1 + 0x22) = param_2;
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
        if ((*(int *)(param_1 + 0x20) == 2) && (param_2 != *(byte *)(param_1 + 10))) {
          *(undefined *)(param_1 + 0xe) = 1;
          return 0;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (*(int *)(param_1 + 0x20) == 6) {
          *DAT_08002be8 = CONCAT11(*(undefined *)(param_1 + 0x26),*(undefined *)(param_1 + 0x27));
          *(ushort *)(param_1 + 0x1e) = *DAT_08002be8;
          if (0x100c < *(ushort *)(param_1 + 0x1e)) {
            *(undefined *)(param_1 + 0xe) = 1;
            (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080022a0,2);
            return 0;
          }
          *DAT_08002be8 = *DAT_08002be8 + 1;
        }
      }
      else {
        if (0x1010 < *(int *)(param_1 + 0x20) - 2U) {
          *(undefined *)(param_1 + 0xe) = 1;
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080022a0,2);
          return 0;
        }
        if (*DAT_08002be8 < 2) {
          *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
          *(undefined *)(param_1 + 0xd) = 1;
          *(undefined *)(param_1 + 0xe) = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          (**(code **)(param_1 + 0x20c0))(param_1,0);
          *(undefined *)(param_1 + 2) = param_3;
          if (*(char *)(param_1 + 2) == '\x01') {
            FUN_080078e0(1);
          }
          else if (*(char *)(param_1 + 2) == '\x02') {
            FUN_080078e0(2);
          }
          (**(code **)(param_1 + 0x20a4))(param_1);
          return 1;
        }
        *(byte *)(*(int *)(param_1 + 0x20) + param_1 + 0x22) = param_2;
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) ^ param_2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *DAT_08002be8 = *DAT_08002be8 - 1;
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



//==== FUNC sub_080022a4 @ 080022a4 ====

undefined4 sub_080022a4(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == '\0') {
    FUN_080066ec(0);
    FUN_0800642a(0);
    FUN_080065ca(0);
  }
  else {
    FUN_080066ec(1);
    FUN_0800642a(1);
    FUN_080065ca(1);
  }
  return param_4;
}



//==== FUNC sub_080022d8 @ 080022d8 ====

void sub_080022d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_080064f8();
  if (iVar1 == 0) {
    FUN_0800616a();
    FUN_0800642a(1);
    *(undefined *)(param_1 + 2) = 2;
    FUN_080065ca(0);
    FUN_080078bc(0);
    FUN_080078bc(2);
    FUN_080078e0(1);
  }
  else {
    FUN_0800615c();
    FUN_0800642a(0);
    FUN_080065ca(1);
    *(undefined *)(param_1 + 2) = 1;
    FUN_080078bc(0);
    FUN_080078bc(1);
    FUN_080078e0(2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



//==== FUNC sub_08002338 @ 08002338 ====

void sub_08002338(int param_1)

{
  if (*(short *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x14)) {
    FUN_08001a28(param_1);
  }
  return;
}



//==== FUNC sub_0800236e @ 0800236e ====

byte sub_0800236e(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 0xff;
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 != 0) {
    if (bVar1 == 2) {
      FUN_080078e0(2);
      for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
        FUN_0800640c(*(undefined *)(uVar3 + param_2));
        bVar2 = bVar2 ^ *(byte *)(uVar3 + param_2);
      }
      FUN_080078bc(2);
    }
    else if (bVar1 < 2) {
      FUN_080078e0(1);
      for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
        FUN_080065e0(uVar3 + param_2,1);
        bVar2 = bVar2 ^ *(byte *)(uVar3 + param_2);
      }
      FUN_080078bc(1);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return bVar2;
}



//==== FUNC sub_080023ea @ 080023ea ====

undefined8 sub_080023ea(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined local_28;
  undefined7 uStack_27;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
    uVar2 = *(int *)(param_3 + uVar1 * 4) + uVar2;
  }
  if ((uVar2 != 0) && (uVar2 < 0x1009)) {
    *(undefined *)(param_1 + 0x1038) = 0x55;
    *(undefined *)(param_1 + 0x1039) = 0xaa;
    *(undefined *)(param_1 + 0x103a) = *(undefined *)(param_1 + 0xb);
    *(undefined *)(param_1 + 0x103b) = *(undefined *)(param_1 + 10);
    *(char *)(param_1 + 0x103c) = (char)(uVar2 + 1 >> 8);
    *(char *)(param_1 + 0x103d) = (char)uVar2 + '\x01';
    *(undefined *)(param_1 + 0x103e) = *(undefined *)(param_1 + 0xc);
    iVar3 = param_1 + 0x103f;
    for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
      FUN_08006026(iVar3,*(undefined4 *)(param_2 + uVar1 * 4),*(undefined4 *)(param_3 + uVar1 * 4));
      iVar3 = *(int *)(param_3 + uVar1 * 4) + iVar3;
    }
    local_28 = (**(code **)(param_1 + 0x20b0))(param_1,param_1 + 0x1038,uVar2 + 7);
    (**(code **)(param_1 + 0x20b0))(param_1,&local_28,1);
    *(undefined *)(uVar2 + param_1 + 0x103f) = local_28;
    *(uint *)(param_1 + 0x1034) = uVar2 + 8;
  }
  (**(code **)(param_1 + 0x20c0))(param_1,1);
  return CONCAT71(uStack_27,local_28);
}



//==== FUNC sub_080024d8 @ 080024d8 ====

undefined8 sub_080024d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  (**(code **)(param_1 + 0x20b8))(param_1,&uStack_14,&uStack_10,1);
  return CONCAT44(uStack_14,param_1);
}



//==== FUNC sub_080024ee @ 080024ee ====

undefined4 sub_080024ee(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    FUN_0800030c(param_1,param_2,param_3);
  }
  else if (cVar1 == '\x02') {
    FUN_0800035e(param_1,param_2,param_3);
  }
  else if (cVar1 == '\x03') {
    FUN_0800038e(param_1,param_2,param_3);
  }
  else if (cVar1 == '\x05') {
    FUN_080004be(param_1,param_2,param_3);
  }
  else if (cVar1 == '\x06') {
    FUN_080005d6(param_1,param_2,param_3);
  }
  else if (cVar1 == '\a') {
    FUN_080006a0(param_1,param_2,param_3);
  }
  else if (cVar1 == '\b') {
    FUN_08000e74(param_1,param_2,param_3);
  }
  else if (cVar1 == '\t') {
    FUN_08001044(param_1,param_2,param_3);
  }
  else if (cVar1 == '\v') {
    FUN_080011ec(param_1,param_2,param_3);
  }
  else if ((cVar1 != '\r') && (cVar1 != '\x0e')) {
    if (cVar1 == '\x0f') {
      FUN_080012ce(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x10') {
      FUN_08001338(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x11') {
      *(undefined *)(param_1 + 5) = 0;
      iVar2 = FUN_08001914();
      if (iVar2 == 1) {
        FUN_08001920(0);
      }
      (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080028e8,3);
    }
    else if (cVar1 == '\x14') {
      FUN_080010dc(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x15') {
      FUN_08001138(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x16') {
      FUN_08000d24(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x17') {
      FUN_08000c30(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x1b') {
      FUN_0800145c(param_1,param_2,param_3);
    }
    else if (cVar1 == '\x1e') {
      FUN_08001494(param_1,param_2,param_3);
    }
    else if (cVar1 == ' ') {
      FUN_08001524(param_1,param_2,param_3);
    }
    else {
      (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080028ec,3);
    }
  }
  return 1;
}



//==== FUNC sub_0800265e @ 0800265e ====

undefined4 sub_0800265e(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080028f0,2);
  return 1;
}



//==== FUNC sub_0800267c @ 0800267c ====

undefined8 sub_0800267c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  if (*param_2 == '\x01') {
    (**(code **)(param_1 + 0x20b0))(param_1,param_1 + 0x1038,*(undefined4 *)(param_1 + 0x1034));
  }
  else if (*param_2 == '\x02') {
    local_18 = CONCAT13((char)*(undefined2 *)(param_1 + 0x1e),
                        CONCAT12((char)((ushort)*(undefined2 *)(param_1 + 0x1e) >> 8),
                                 (short)DAT_08002c10));
    local_14 = CONCAT22((short)((uint)DAT_08002c14 >> 0x10),0xc10);
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,6);
  }
  else {
    (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080028f8,3);
  }
  return CONCAT44(local_18,1);
}



//==== FUNC sub_0800270c @ 0800270c ====

undefined8 sub_0800270c(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 local_18;
  
  local_18 = DAT_08002c18;
  if (*(char *)(param_1 + 3) == '\x01') {
    bVar1 = *param_2;
    if (bVar1 == 2) {
      FUN_08007bcc(param_1,param_2,param_3);
    }
    else {
      if (1 < bVar1) {
        if (bVar1 == 4) {
          FUN_08007e50(param_1,param_2,param_3);
          goto LAB_08002788;
        }
        if (bVar1 < 4) {
          FUN_08007d70(param_1,param_2,param_3);
          goto LAB_08002788;
        }
      }
      (**(code **)(param_1 + 0x20b4))(param_1,&DAT_080028fc,3);
    }
  }
  else {
    (**(code **)(param_1 + 0x20b4))(param_1,&local_18,3);
  }
LAB_08002788:
  return CONCAT44(local_18,1);
}



//==== FUNC FUN_08002790 @ 08002790 ====

undefined4 FUN_08002790(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002900,2);
  return 1;
}



//==== FUNC FUN_080027b0 @ 080027b0 ====

undefined4 FUN_080027b0(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002904,2);
  return 1;
}



//==== FUNC FUN_080027ca @ 080027ca ====

undefined4 FUN_080027ca(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002908,2);
  return 1;
}



//==== FUNC FUN_080027e8 @ 080027e8 ====

undefined4 FUN_080027e8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08001942();
  if ((iVar1 != 7) && (iVar1 = FUN_0800194e(7), iVar1 != 0)) {
    (**(code **)(param_1 + 0x20a0))(param_1);
  }
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_0800290c,2);
  return 1;
}



//==== FUNC FUN_0800282c @ 0800282c ====

void FUN_0800282c(void)

{
  undefined auStack_10 [3];
  undefined auStack_d [13];
  
  FUN_08005e64(auStack_10);
  FUN_08007f18(auStack_d);
  FUN_08007f38();
  return;
}



//==== FUNC FUN_08002844 @ 08002844 ====

void FUN_08002844(void)

{
  return;
}



//==== FUNC sub_08002846 @ 08002846 ====

undefined4 sub_08002846(void)

{
  return 0;
}



//==== FUNC sub_080028cc @ 080028cc ====

undefined4 sub_080028cc(int param_1)

{
  (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002bb8,2);
  return 0;
}



//==== FUNC sub_08002920 @ 08002920 ====

undefined4 sub_08002920(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = DAT_08002c1c;
  uStack_14 = param_3;
  iVar7 = FUN_08001970(param_1,&local_28,1,&uStack_14);
  if (iVar7 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if (bVar1 == 1) {
    FUN_08006026(&local_28,&DAT_08002bd4,2);
    local_28._0_3_ = CONCAT12(3,(ushort)local_28);
    (**(code **)(param_1 + 0x20b4))(param_1,&local_28,3);
  }
  else {
    if (bVar1 == 0) {
LAB_08002b9e:
      (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002be4,3);
      return 0;
    }
    if (bVar1 == 3) {
      FUN_08006026(&local_28,&DAT_08002bd0,2);
      iVar7 = FUN_08001970(param_1,&local_28,1,&uStack_14);
      if (iVar7 == 0) {
        return 0;
      }
      if (param_2[1] == 1) {
        iVar7 = FUN_08001970(param_1,&local_28,2,&uStack_14);
        if (iVar7 == 0) {
          return 0;
        }
        bVar1 = param_2[2];
        bVar2 = param_2[3];
        uVar8 = FUN_08002844(*DAT_08002bec);
        if (CONCAT11(bVar1,bVar2) == uVar8) {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c40,4);
          *(undefined *)(param_1 + 3) = 1;
        }
        else {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c38,4);
        }
      }
      else {
        if (param_2[1] != 2) {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c58,4);
          return 0;
        }
        iVar7 = FUN_08001970(param_1,&local_28,4,&uStack_14);
        if (iVar7 == 0) {
          return 0;
        }
        bVar1 = param_2[2];
        bVar2 = param_2[3];
        bVar3 = param_2[4];
        bVar4 = param_2[5];
        uVar8 = FUN_08002844(*DAT_08002bec);
        if (((uint)bVar4 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8) == uVar8) {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c50,4);
          *(undefined *)(param_1 + 3) = 1;
        }
        else {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c48,4);
        }
      }
    }
    else if (bVar1 < 3) {
      FUN_08006026(&local_28,&DAT_08002bc0,2);
      iVar7 = FUN_08001970(param_1,&local_28,1,&uStack_14);
      if (iVar7 == 0) {
        return 0;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002bc0,3);
        *(undefined *)(param_1 + 3) = 1;
      }
      else if (bVar1 == 2) {
        local_24 = DAT_08002c28;
        local_20 = DAT_08002c2c;
        uVar8 = FUN_0800282c(&local_24,&DAT_08002c28);
        uVar5 = local_20;
        *DAT_08002bec = uVar8;
        local_24 = CONCAT13((char)(*DAT_08002bec >> 0x18),(undefined3)local_24);
        (**(code **)(param_1 + 0x20b4))(param_1,&local_24,7);
      }
      else {
        if (1 < bVar1) {
          (**(code **)(param_1 + 0x20b4))(param_1,&DAT_08002c30,4);
          return 0;
        }
        local_1c = DAT_08002c20;
        local_18 = DAT_08002c24;
        uVar6 = FUN_0800282c(&local_1c,&DAT_08002c20);
        *DAT_08002bec = (uint)uVar6;
        local_1c = CONCAT13((char)(*DAT_08002bec >> 8),(undefined3)local_1c);
        local_18 = CONCAT31(local_18._1_3_,(char)*DAT_08002bec);
        (**(code **)(param_1 + 0x20b4))(param_1,&local_1c,5);
      }
    }
    else if (bVar1 == 5) {
      FUN_08006026(&local_28,&DAT_08002be0,2);
      local_28._0_3_ = (uint3)(ushort)local_28;
      (**(code **)(param_1 + 0x20b4))(param_1,&local_28,3);
      (**(code **)(param_1 + 0x20a0))(param_1);
    }
    else {
      if (4 < bVar1) goto LAB_08002b9e;
      FUN_08006026(&local_28,&DAT_08002bdc,2);
      local_28._0_3_ = (uint3)(ushort)local_28;
      (**(code **)(param_1 + 0x20b4))(param_1,&local_28,3);
      *(undefined *)(param_1 + 3) = 0;
    }
  }
  return 1;
}



//==== FUNC FUN_08002c60 @ 08002c60 ====

void FUN_08002c60(int *param_1)

{
  *(int *)(*param_1 * 4 + -0x60000000) =
       param_1[1] | param_1[2] | param_1[3] | param_1[4] | param_1[5] | param_1[6] | param_1[7] |
       param_1[8] | param_1[9] | param_1[10] | param_1[0xb] | param_1[0xc];
  if (param_1[2] == 8) {
    *(uint *)(*param_1 * 4 + -0x60000000) = *(uint *)(*param_1 * 4 + -0x60000000) | 0x40;
  }
  *(uint *)(*param_1 * 4 + -0x5ffffffc) =
       *(uint *)param_1[0xd] | *(int *)(param_1[0xd] + 4) << 4 | *(int *)(param_1[0xd] + 8) << 8 |
       *(int *)(param_1[0xd] + 0xc) << 0x10 | *(int *)(param_1[0xd] + 0x10) << 0x14 |
       *(int *)(param_1[0xd] + 0x14) << 0x18 | *(uint *)(param_1[0xd] + 0x18);
  if (param_1[0xb] == 0x4000) {
    *(uint *)(DAT_08002d74 + *param_1 * 4) =
         *(uint *)param_1[0xe] | *(int *)(param_1[0xe] + 4) << 4 | *(int *)(param_1[0xe] + 8) << 8 |
         *(int *)(param_1[0xe] + 0x10) << 0x14 | *(int *)(param_1[0xe] + 0x14) << 0x18 |
         *(uint *)(param_1[0xe] + 0x18);
  }
  else {
    *(undefined4 *)(DAT_08002d74 + *param_1 * 4) = 0xfffffff;
  }
  return;
}



//==== FUNC FUN_08002d40 @ 08002d40 ====

void FUN_08002d40(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 * 4 + -0x60000000) = *(uint *)(param_1 * 4 + -0x60000000) & DAT_08002d78;
  }
  else {
    *(uint *)(param_1 * 4 + -0x60000000) = *(uint *)(param_1 * 4 + -0x60000000) | 1;
  }
  return;
}



//==== FUNC FUN_08002d7c @ 08002d7c ====

void FUN_08002d7c(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = DAT_080036ec;
  param_1[1] = DAT_080036f0;
  param_1[2] = DAT_080036f4;
  param_1[3] = DAT_080036f8;
  return;
}



//==== FUNC FUN_08002d9c @ 08002d9c ====

undefined4 FUN_08002d9c(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x10) << 0x17) >> 0x1a;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = 0x40 - uVar1;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    FUN_0800366a(uVar1 + param_1 + 0x18,param_2,uVar2);
    FUN_08002e6c(param_1,param_1 + 0x18);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_08002e6c(param_1,uVar2 + param_2);
    }
    uVar1 = 0;
  }
  FUN_0800366a(uVar1 + param_1 + 0x18,uVar2 + param_2,param_3 - uVar2);
  return param_4;
}



//==== FUNC FUN_08002e12 @ 08002e12 ====

undefined8 FUN_08002e12(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uStack_20;
  
  FUN_080035f8(&uStack_20,param_2 + 0x10,8);
  uVar1 = (uint)(*(int *)(param_2 + 0x10) << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  FUN_08002d9c(param_2,DAT_080036fc,iVar2);
  FUN_08002d9c(param_2,&uStack_20,8);
  FUN_080035f8(param_1,param_2,0x10);
  FUN_08003680(param_2,0,0x58);
  return uStack_20;
}



//==== FUNC FUN_08002e6c @ 08002e6c ====

void FUN_08002e6c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  FUN_08003634(&local_60,param_2,0x40);
  uVar5 = DAT_08003700 + local_60 + (uVar2 & uVar1 | uVar3 & ~uVar1) + iVar4;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_08003704 + local_5c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08003708 + local_58 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0800370c + local_54 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08003710 + local_50 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_08003714 + local_4c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08003718 + local_48 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0800371c + local_44 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08003720 + local_40 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_08003724 + local_3c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08003728 + local_38 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0800372c + local_34 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08003730 + local_30 + (uVar2 & uVar1 | uVar3 & ~uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x19 | uVar5 * 0x80);
  uVar3 = DAT_08003734 + local_2c + (uVar1 & uVar5 | uVar2 & ~uVar5) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x14 | uVar3 * 0x1000);
  uVar2 = DAT_08003738 + local_28 + (uVar5 & uVar3 | uVar1 & ~uVar3) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0xf | uVar2 * 0x20000);
  uVar1 = DAT_0800373c + local_24 + (uVar3 & uVar2 | uVar5 & ~uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 10 | uVar1 * 0x400000);
  uVar5 = DAT_08003740 + local_5c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_08003744 + local_48 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_08003748 + local_34 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0800374c + local_60 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_08003750 + local_4c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_08003754 + local_38 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_08003758 + local_24 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0800375c + local_50 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_08003760 + local_3c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_08003764 + local_28 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_08003768 + local_54 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0800376c + local_40 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_08003770 + local_2c + (uVar3 & uVar1 | uVar2 & ~uVar3) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = DAT_08003774 + local_58 + (uVar2 & uVar5 | uVar1 & ~uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x17 | uVar3 * 0x200);
  uVar2 = DAT_08003778 + local_44 + (uVar1 & uVar3 | uVar5 & ~uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x12 | uVar2 * 0x4000);
  uVar1 = DAT_0800377c + local_30 + (uVar5 & uVar2 | uVar3 & ~uVar5) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xc | uVar1 * 0x100000);
  uVar5 = DAT_08003780 + local_4c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_08003784 + local_40 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08003788 + local_34 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0800378c + local_28 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_08003790 + local_5c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_08003794 + local_50 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_08003798 + local_44 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_0800379c + local_38 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_080037a0 + local_2c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_080037a4 + local_60 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_080037a8 + local_54 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_080037ac + local_48 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_080037b0 + local_3c + (uVar3 ^ uVar2 ^ uVar1) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1c | uVar5 * 0x10);
  uVar3 = DAT_080037b4 + local_30 + (uVar1 ^ uVar5 ^ uVar2) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar2 = DAT_080037b8 + local_24 + (uVar5 ^ uVar3 ^ uVar1) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x10 | uVar2 * 0x10000);
  uVar1 = DAT_080037bc + local_58 + (uVar5 ^ uVar3 ^ uVar2) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 9 | uVar1 * 0x800000);
  uVar5 = DAT_080037c0 + local_60 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_080037c4 + local_44 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_080037c8 + local_28 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_080037cc + local_4c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_080037d0 + local_30 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_080037d4 + local_54 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_080037d8 + local_38 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_080037dc + local_5c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_080037e0 + local_40 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_080037e4 + local_24 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_080037e8 + local_48 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_080037ec + local_2c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  uVar1 = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000);
  uVar5 = DAT_080037f0 + local_50 + ((uVar1 | ~uVar3) ^ uVar2) + uVar5;
  uVar5 = uVar1 + (uVar5 >> 0x1a | uVar5 * 0x40);
  uVar3 = DAT_080037f4 + local_34 + ((uVar5 | ~uVar2) ^ uVar1) + uVar3;
  uVar3 = uVar5 + (uVar3 >> 0x16 | uVar3 * 0x400);
  uVar2 = DAT_080037f8 + local_58 + ((uVar3 | ~uVar1) ^ uVar5) + uVar2;
  uVar2 = uVar3 + (uVar2 >> 0x11 | uVar2 * 0x8000);
  uVar1 = DAT_080037fc + local_3c + ((uVar2 | ~uVar5) ^ uVar3) + uVar1;
  *param_1 = uVar5 + *param_1;
  param_1[1] = uVar2 + (uVar1 >> 0xb | uVar1 * 0x200000) + param_1[1];
  param_1[2] = uVar2 + param_1[2];
  param_1[3] = uVar3 + param_1[3];
  FUN_08003680(&local_60,0,0x40);
  return;
}



//==== FUNC FUN_080035f8 @ 080035f8 ====

void FUN_080035f8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(char *)(uVar2 + param_1) = (char)*(undefined4 *)(param_2 + iVar1 * 4);
    *(char *)(uVar2 + param_1 + 1) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 8);
    *(char *)(uVar2 + param_1 + 2) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x10);
    *(char *)(uVar2 + param_1 + 3) = (char)((uint)*(undefined4 *)(param_2 + iVar1 * 4) >> 0x18);
    iVar1 = iVar1 + 1;
  }
  return;
}



//==== FUNC FUN_08003634 @ 08003634 ====

void FUN_08003634(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 4) {
    *(uint *)(param_1 + iVar1 * 4) =
         CONCAT13(*(undefined *)(uVar2 + param_2 + 3),
                  CONCAT12(*(undefined *)(uVar2 + param_2 + 2),
                           CONCAT11(*(undefined *)(uVar2 + param_2 + 1),
                                    *(undefined *)(uVar2 + param_2))));
    iVar1 = iVar1 + 1;
  }
  return;
}



//==== FUNC FUN_0800366a @ 0800366a ====

void FUN_0800366a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(uVar1 + param_1) = *(undefined *)(uVar1 + param_2);
  }
  return;
}



//==== FUNC FUN_08003680 @ 08003680 ====

void FUN_08003680(int param_1,undefined param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined *)(uVar1 + param_1) = param_2;
  }
  return;
}



//==== FUNC FUN_08003694 @ 08003694 ====

int FUN_08003694(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_78 [104];
  
  FUN_08002d7c(local_78 + 0x10);
  FUN_08002d9c(local_78 + 0x10,param_1,param_2);
  FUN_08002e12(local_78,local_78 + 0x10);
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    FUN_08006052(DAT_08003800 + iVar1 * 2,local_78[iVar1],0);
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined *)(iVar1 + DAT_08003804) = *(undefined *)(iVar1 + DAT_08003800);
  }
  return DAT_08003804;
}



//==== FUNC FUN_08003808 @ 08003808 ====

void FUN_08003808(void)

{
  return;
}



//==== FUNC FUN_0800380c @ 0800380c ====

void FUN_0800380c(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 *puVar10;
  
  if (param_2 < param_1) {
    param_4 = (undefined4 *)(param_3 + (int)param_2);
  }
  if (param_2 >= param_1 || param_4 <= param_1) {
    if (param_3 != 0) {
      uVar4 = (uint)param_2 & 3;
      while (uVar4 != 0) {
        param_3 = param_3 - 1;
        *(undefined *)param_1 = *(undefined *)param_2;
        if (param_3 == 0) {
          return;
        }
        uVar4 = (uint)(undefined4 *)((int)param_2 + 1) & 3;
        param_1 = (undefined4 *)((int)param_1 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      if (((uint)param_1 & 3) == 0) {
        while (uVar4 = param_3 - 0x10, 0xf < param_3) {
          uVar5 = *param_2;
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          param_2 = param_2 + 4;
          *param_1 = uVar5;
          param_1[1] = uVar6;
          param_1[2] = uVar7;
          param_1[3] = uVar8;
          param_1 = param_1 + 4;
          param_3 = uVar4;
        }
        bVar9 = (int)(param_3 << 0x1d) < 0;
        if ((uVar4 & 8) != 0) {
          uVar5 = *param_2;
          uVar6 = param_2[1];
          param_2 = param_2 + 2;
          *param_1 = uVar5;
          param_1[1] = uVar6;
          param_1 = param_1 + 2;
        }
      }
      else {
        while (uVar4 = param_3 - 8, 7 < param_3) {
          uVar5 = *param_2;
          uVar6 = param_2[1];
          param_2 = param_2 + 2;
          puVar10 = param_1 + 1;
          *param_1 = uVar5;
          param_1 = param_1 + 2;
          *puVar10 = uVar6;
          param_3 = uVar4;
        }
        bVar9 = (int)(param_3 << 0x1d) < 0;
      }
      puVar1 = param_1;
      puVar10 = param_2;
      if (bVar9) {
        puVar10 = param_2 + 1;
        puVar1 = param_1 + 1;
        *param_1 = *param_2;
      }
      puVar2 = puVar1;
      puVar3 = puVar10;
      if ((uVar4 & 2) != 0) {
        puVar3 = (undefined4 *)((int)puVar10 + 2);
        puVar2 = (undefined4 *)((int)puVar1 + 2);
        *(undefined2 *)puVar1 = *(undefined2 *)puVar10;
      }
      if ((int)(uVar4 << 0x1f) < 0) {
        *(undefined *)puVar2 = *(undefined *)puVar3;
      }
    }
    return;
  }
  param_1 = (undefined4 *)((int)param_1 + param_3);
  do {
    if (((uint)param_4 & 3) == 0) {
      if (((uint)param_1 & 3) == 0) {
        while (0xf < param_3) {
          puVar10 = param_4 + -1;
          uVar7 = param_4[-2];
          uVar6 = param_4[-3];
          param_4 = param_4 + -4;
          uVar5 = *param_4;
          param_1[-1] = *puVar10;
          param_1[-2] = uVar7;
          param_1[-3] = uVar6;
          param_1 = param_1 + -4;
          *param_1 = uVar5;
          param_3 = param_3 - 0x10;
        }
        do {
          uVar4 = param_3;
          bVar9 = 3 < uVar4;
          param_3 = uVar4 - 4;
          if (bVar9) {
            param_4 = param_4 + -1;
            param_1 = param_1 + -1;
            *param_1 = *param_4;
          }
        } while (bVar9 && param_3 != 0);
        if (!bVar9) {
          param_3 = uVar4;
        }
      }
      else {
        while (7 < param_3) {
          puVar10 = param_4 + -1;
          param_4 = param_4 + -2;
          uVar5 = *param_4;
          param_1[-1] = *puVar10;
          param_1 = param_1 + -2;
          *param_1 = uVar5;
          param_3 = param_3 - 8;
        }
      }
      do {
        bVar9 = param_3 != 0;
        param_3 = param_3 - 1;
        if (bVar9) {
          param_4 = (undefined4 *)((int)param_4 + -1);
          param_1 = (undefined4 *)((int)param_1 + -1);
          *(undefined *)param_1 = *(undefined *)param_4;
        }
      } while (bVar9 && param_3 != 0);
      return;
    }
    bVar9 = param_3 != 0;
    param_3 = param_3 - 1;
    if (bVar9) {
      param_4 = (undefined4 *)((int)param_4 + -1);
      param_1 = (undefined4 *)((int)param_1 + -1);
      *(undefined *)param_1 = *(undefined *)param_4;
    }
  } while (bVar9 && param_3 != 0);
  return;
}



//==== FUNC FUN_08003884 @ 08003884 ====

int FUN_08003884(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_12c;
  char local_128 [260];
  
  uVar1 = *param_5 + 7U >> 3;
  if (uVar1 < param_4) {
    iVar2 = 0x406;
  }
  else {
    iVar2 = FUN_0800394c(local_128,&local_12c,param_3,param_4,param_5);
    if (iVar2 == 0) {
      if (local_12c == uVar1) {
        if ((local_128[0] == '\0') && (local_128[1] == '\x01')) {
          for (uVar3 = 2; (uVar3 < uVar1 - 1 && (local_128[uVar3] == -1)); uVar3 = uVar3 + 1) {
          }
          if (local_128[uVar3] == '\0') {
            *param_2 = uVar1 - (uVar3 + 1);
            if (uVar1 < *param_2 + 0xbU) {
              iVar2 = 0x401;
            }
            else {
              FUN_08003a18(param_1,local_128 + uVar3 + 1,*param_2);
              FUN_08003a00(local_128,0,0x100);
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0x401;
          }
        }
        else {
          iVar2 = 0x401;
        }
      }
      else {
        iVar2 = 0x406;
      }
    }
  }
  return iVar2;
}



//==== FUNC FUN_0800394c @ 0800394c ====

undefined4
FUN_0800394c(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_430 [260];
  undefined auStack_32c [260];
  undefined auStack_228 [260];
  undefined auStack_124 [260];
  
  FUN_0800c024(auStack_32c,0x41,param_3,param_4);
  FUN_0800c024(auStack_430,0x41,param_5 + 1,0x100);
  FUN_0800c024(auStack_228,0x41,param_5 + 0x41,0x100);
  uVar1 = FUN_0800c586(auStack_430,0x41);
  uVar2 = FUN_0800c586(auStack_228,0x41);
  iVar3 = FUN_0800c54e(auStack_32c,auStack_430,uVar1);
  if (iVar3 < 0) {
    FUN_0800c452(auStack_124,auStack_32c,auStack_228,uVar2,auStack_430,uVar1);
    *param_2 = *param_5 + 7U >> 3;
    FUN_0800c07c(param_1,*param_2,auStack_124,uVar1);
    FUN_08003a00(auStack_124,0,0x104);
    FUN_08003a00(auStack_32c,0,0x104);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x401;
  }
  return uVar1;
}



//==== FUNC FUN_08003a00 @ 08003a00 ====

void FUN_08003a00(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_0800c6a8(param_1,param_2,param_3);
  }
  return;
}



//==== FUNC FUN_08003a18 @ 08003a18 ====

void FUN_08003a18(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_08006026(param_1,param_2,param_3);
  }
  return;
}



//==== FUNC FUN_08003a30 @ 08003a30 ====

undefined4 FUN_08003a30(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0800188c(param_1,param_2,param_3);
  }
  return uVar1;
}



//==== FUNC FUN_08003a4c @ 08003a4c ====

void FUN_08003a4c(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08003a6c = *DAT_08003a6c & ~param_1;
  }
  else {
    *DAT_08003a6c = *DAT_08003a6c | param_1;
  }
  return;
}



//==== FUNC FUN_08003a70 @ 08003a70 ====

undefined4 FUN_08003a70(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800d2d2(param_1);
  return uVar1;
}



//==== FUNC FUN_08003a82 @ 08003a82 ====

undefined8 FUN_08003a82(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined4 uStack_10;
  
  for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1) {
    DAT_08003bc4[uVar3] = 0;
  }
  uStack_10 = in_r3;
  iVar1 = FUN_08003a70(0xc00);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0800d53a(iVar1,0x100,0xc,&uStack_10);
    *DAT_08003bc4 = uVar2;
    iVar1 = FUN_08003a70(0xa00);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0800d53a(iVar1,0x80,0x14,&uStack_10);
      DAT_08003bc4[1] = uVar2;
      iVar1 = FUN_08003a70(0x900);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0800d53a(iVar1,0x40,0x24,&uStack_10);
        DAT_08003bc4[2] = uVar2;
        iVar1 = FUN_08003a70(0x880);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0800d53a(iVar1,0x20,0x44,&uStack_10);
          DAT_08003bc4[3] = uVar2;
          iVar1 = FUN_08003a70(0x1080);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_0800d53a(iVar1,0x20,0x84,&uStack_10);
            DAT_08003bc4[4] = uVar2;
            iVar1 = FUN_08003a70(0x2080);
            if (iVar1 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_0800d53a(iVar1,0x20,0x104,&uStack_10);
              DAT_08003bc4[5] = uVar2;
              iVar1 = FUN_08003a70(0x4080);
              if (iVar1 == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = FUN_0800d53a(iVar1,0x20,0x204,&uStack_10);
                DAT_08003bc4[6] = uVar2;
                iVar1 = FUN_08003a70(0x2828);
                if (iVar1 == 0) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = FUN_0800d53a(iVar1,10,0x404,&uStack_10);
                  DAT_08003bc4[7] = uVar2;
                  uVar2 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return CONCAT44(uStack_10,uVar2);
}



//==== FUNC FUN_08003bc8 @ 08003bc8 ====

undefined4 FUN_08003bc8(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  FUN_0800d5a0();
  iVar1 = FUN_08003a82();
  if (iVar1 != 1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return unaff_r7;
}



//==== FUNC FUN_08003bdc @ 08003bdc ====

void FUN_08003bdc(undefined4 param_1,char param_2)

{
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  uint local_18;
  undefined4 local_14;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  
  if (param_2 == '\x01') {
    FUN_080075f6(1,1);
    local_20 = 0x1800;
    local_1b = 3;
    local_1c = 1;
    local_1a = 0;
    local_19 = 2;
    FUN_08007740(DAT_08003ce8,&local_20);
    FUN_08007816(DAT_08003ce8,0x1000);
    FUN_08007816(DAT_08003ce8,0x800);
    for (local_18 = 0; local_18 < DAT_08003cec; local_18 = local_18 + 1) {
    }
    local_20 = 0x1800;
    local_1b = 3;
    local_1c = 2;
    local_1a = 0;
    local_19 = 0;
    FUN_08007740(DAT_08003ce8,&local_20);
    FUN_08007828(DAT_08003ce8,0xb,10);
    FUN_08007828(DAT_08003ce8,0xc,10);
    FUN_0800766e(0x4000,1);
    local_20 = 0x200;
    local_1b = 0;
    local_1c = 0;
    local_1a = 0;
    local_19 = 2;
    FUN_08007740(DAT_08003ce8,&local_20);
    FUN_0800d600(0,9);
    local_14 = 0x200;
    local_10 = 0;
    local_f = 0x10;
    local_e = 1;
    FUN_080083c4(&local_14);
    FUN_0800766e(0x4000,1);
    FUN_08007614(0x80,1);
  }
  return;
}



//==== FUNC FUN_08003cf0 @ 08003cf0 ====

void FUN_08003cf0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 <= (uint)(param_1 * 0x78) / 7);
  return;
}



//==== FUNC FUN_08003d08 @ 08003d08 ====

void FUN_08003d08(int param_1)

{
  FUN_08003cf0(param_1 * 1000);
  return;
}



//==== FUNC FUN_08003d1c @ 08003d1c ====

undefined4 FUN_08003d1c(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\0') {
    FUN_080041f6(param_1,param_2);
  }
  else if (cVar1 == '\x01') {
    FUN_080042ce(param_1,param_2);
  }
  else if (cVar1 == '\x03') {
    FUN_08004244(param_1,param_2);
  }
  else if (cVar1 == '\x05') {
    FUN_08004088(param_1,param_2);
  }
  else if (cVar1 == '\x06') {
    FUN_08003f52(param_1,param_2);
  }
  else if (cVar1 == '\b') {
    FUN_080041ae(param_1,param_2);
  }
  else if (cVar1 == '\t') {
    FUN_080040e8(param_1,param_2);
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return 0;
}



//==== FUNC FUN_08003d98 @ 08003d98 ====

undefined4 FUN_08003d98(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x112) == '\x03') {
    if ((byte)*(undefined2 *)(param_2 + 4) < 2) {
      (**(code **)(*(int *)(param_1 + 0x5e0) + 8))(param_1,param_2);
      if (*(short *)(param_2 + 6) == 0) {
        FUN_0800b680(param_1);
      }
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return 0;
}



//==== FUNC FUN_08003de8 @ 08003de8 ====

longlong FUN_08003de8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_2 + 1);
  bVar2 = (byte)*(undefined2 *)(param_2 + 4);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x112) == '\x02') {
      if ((bVar2 != 0) && (bVar2 != 0x80)) {
        FUN_08008b74(param_1,bVar2);
      }
    }
    else if (*(char *)(param_1 + 0x112) == '\x03') {
      uVar3 = (uint)bVar2;
      if ((int)(uVar3 << 0x18) < 0) {
        if (*(char *)((uVar3 & 0x7f) * 0x28 + param_1 + 0x11a) == '\0') {
          *DAT_08004234 = 0;
        }
        else {
          *DAT_08004234 = 1;
        }
      }
      else if (-1 < (int)(uVar3 << 0x18)) {
        if (*(char *)(uVar3 * 0x28 + param_1 + 0x372) == '\0') {
          *DAT_08004234 = 0;
        }
        else {
          *DAT_08004234 = 1;
        }
      }
      FUN_0800b5e4(param_1,DAT_08004234,2);
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  else if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x112) == '\x02') {
      if ((bVar2 != 0) && (bVar2 != 0x80)) {
        FUN_08008b74(param_1,bVar2);
      }
    }
    else if (*(char *)(param_1 + 0x112) == '\x03') {
      if (*(short *)(param_2 + 2) == 0) {
        if ((bVar2 != 0) && (bVar2 != 0x80)) {
          FUN_08008bc4(param_1,bVar2);
          (**(code **)(*(int *)(param_1 + 0x5e0) + 8))(param_1,param_2);
        }
        FUN_0800b680(param_1);
      }
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  else if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x112) == '\x02') {
      if ((bVar2 != 0) && (bVar2 != 0x80)) {
        FUN_08008b74(param_1,bVar2);
      }
    }
    else if (*(char *)(param_1 + 0x112) == '\x03') {
      if (((*(short *)(param_2 + 2) == 0) && (bVar2 != 0)) && (bVar2 != 0x80)) {
        FUN_08008b74(param_1,bVar2);
      }
      (**(code **)(*(int *)(param_1 + 0x5e0) + 8))(param_1,param_2);
      FUN_0800b680(param_1);
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_08003f52 @ 08003f52 ====

undefined8 FUN_08003f52(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort local_18;
  undefined6 uStack_16;
  
  cVar2 = (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8);
  if (cVar2 == '\x01') {
    iVar3 = (***(code ***)(param_1 + 0x5e8))(*(undefined *)(param_1 + 2),&local_18);
    if ((*(short *)(param_2 + 6) == 0x40) || (*(char *)(param_1 + 0x112) == '\x01')) {
      local_18 = 8;
    }
  }
  else if (cVar2 == '\x02') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x5e0) + 0x28))(*(undefined *)(param_1 + 2),&local_18);
    *(undefined *)(iVar3 + 1) = 2;
    *(int *)(param_1 + 0x5ec) = iVar3;
  }
  else {
    if (cVar2 != '\x03') {
      if (cVar2 == '\x06') {
        FUN_0800434c(param_1,param_2);
      }
      else if (cVar2 == '\a') {
        FUN_0800434c(param_1,param_2);
      }
      else {
        FUN_0800434c(param_1,param_2);
      }
      goto LAB_08004086;
    }
    bVar1 = *(byte *)(param_2 + 2);
    if (bVar1 == 0) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 4))(*(undefined *)(param_1 + 2),&local_18);
    }
    else if (bVar1 == 2) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 0xc))(*(undefined *)(param_1 + 2),&local_18);
    }
    else if (bVar1 < 2) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 8))(*(undefined *)(param_1 + 2),&local_18);
    }
    else if (bVar1 == 4) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 0x14))(*(undefined *)(param_1 + 2),&local_18)
      ;
    }
    else if (bVar1 < 4) {
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 0x10))(*(undefined *)(param_1 + 2),&local_18)
      ;
    }
    else {
      if (bVar1 != 5) {
        FUN_0800434c(param_1,param_2);
        goto LAB_08004086;
      }
      iVar3 = (**(code **)(*(int *)(param_1 + 0x5e8) + 0x18))(*(undefined *)(param_1 + 2),&local_18)
      ;
    }
  }
  if ((local_18 != 0) && (*(short *)(param_2 + 6) != 0)) {
    if (*(ushort *)(param_2 + 6) <= local_18) {
      local_18 = *(ushort *)(param_2 + 6);
    }
    FUN_0800b5e4(param_1,iVar3,local_18);
  }
LAB_08004086:
  return CONCAT62(uStack_16,local_18);
}



//==== FUNC FUN_08004088 @ 08004088 ====

void FUN_08004088(int param_1,int param_2)

{
  byte bVar1;
  
  if ((*(short *)(param_2 + 4) == 0) && (*(short *)(param_2 + 6) == 0)) {
    bVar1 = *(byte *)(param_2 + 2) & 0x7f;
    if (*(char *)(param_1 + 0x112) == '\x03') {
      FUN_0800434c(param_1,param_2);
    }
    else {
      *(byte *)(param_1 + 0x113) = bVar1;
      FUN_08008c14(param_1,bVar1);
      FUN_0800b680(param_1);
      if (bVar1 == 0) {
        *(undefined *)(param_1 + 0x112) = 1;
      }
      else {
        *(undefined *)(param_1 + 0x112) = 2;
      }
    }
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return;
}



//==== FUNC FUN_080040e8 @ 080040e8 ====

undefined4 FUN_080040e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *DAT_08004238 = (byte)*(undefined2 *)(param_2 + 2);
  if (*DAT_08004238 < 2) {
    if (*(char *)(param_1 + 0x112) == '\x02') {
      if (*DAT_08004238 == 0) {
        FUN_0800b680(param_1);
      }
      else {
        *(byte *)(param_1 + 0x110) = *DAT_08004238;
        *(undefined *)(param_1 + 0x112) = 3;
        FUN_08008eb8(param_1,*DAT_08004238);
        FUN_0800b680(param_1);
      }
    }
    else if (*(char *)(param_1 + 0x112) == '\x03') {
      if (*DAT_08004238 == 0) {
        *(undefined *)(param_1 + 0x112) = 2;
        *(byte *)(param_1 + 0x110) = *DAT_08004238;
        FUN_08008ed8(param_1,*DAT_08004238);
        FUN_0800b680(param_1);
      }
      else if (*DAT_08004238 == *(byte *)(param_1 + 0x110)) {
        FUN_0800b680(param_1);
      }
      else {
        FUN_08008ed8(param_1,*(undefined *)(param_1 + 0x110));
        *(byte *)(param_1 + 0x110) = *DAT_08004238;
        FUN_08008eb8(param_1,*DAT_08004238);
        FUN_0800b680(param_1);
      }
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return param_4;
}



//==== FUNC FUN_080041ae @ 080041ae ====

undefined4 FUN_080041ae(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_2 + 6) == 1) {
    if (*(char *)(param_1 + 0x112) == '\x02') {
      FUN_0800b5e4(param_1,DAT_0800423c,1);
    }
    else if (*(char *)(param_1 + 0x112) == '\x03') {
      FUN_0800b5e4(param_1,param_1 + 0x110,1);
    }
    else {
      FUN_0800434c(param_1,param_2);
    }
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return param_4;
}



//==== FUNC FUN_080041f6 @ 080041f6 ====

undefined4 FUN_080041f6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(byte *)(param_1 + 0x112) - 2 < 2) {
    if (*(int *)(param_1 + 0x114) == 0) {
      *DAT_08004240 = 1;
    }
    else {
      *DAT_08004240 = 3;
    }
    FUN_0800b5e4(param_1,DAT_08004240,1);
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return param_4;
}



//==== FUNC FUN_08004244 @ 08004244 ====

undefined4 FUN_08004244(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (*(short *)(param_2 + 2) == 1) {
    *(undefined4 *)(param_1 + 0x114) = 1;
    (**(code **)(*(int *)(param_1 + 0x5e0) + 8))(param_1,param_2);
    FUN_0800b680(param_1);
  }
  else if ((*(short *)(param_2 + 2) == 2) && (*(char *)(param_2 + 4) == '\0')) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 4);
    bVar1 = (byte)((ushort)*(undefined2 *)(param_2 + 4) >> 8);
    if (bVar1 == 1) {
      uVar2 = uVar2 & 0xffffff8f | 0x10;
    }
    else if (bVar1 != 0) {
      if (bVar1 == 3) {
        uVar2 = uVar2 & 0xffffff8f | 0x30;
      }
      else if (bVar1 < 3) {
        uVar2 = uVar2 & 0xffffff8f | 0x20;
      }
      else if (bVar1 == 5) {
        uVar2 = uVar2 & 0xffffff8f | 0x50;
      }
      else if (bVar1 < 5) {
        uVar2 = uVar2 & 0xffffff8f | 0x40;
      }
    }
    *(uint *)(*(int *)(param_1 + 0x10) + 4) = uVar2;
    FUN_0800b680(param_1);
  }
  return param_4;
}



//==== FUNC FUN_080042ce @ 080042ce ====

undefined4 FUN_080042ce(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(byte *)(param_1 + 0x112) - 2 < 2) {
    if (*(short *)(param_2 + 2) == 1) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      (**(code **)(*(int *)(param_1 + 0x5e0) + 8))(param_1,param_2);
      FUN_0800b680(param_1);
    }
  }
  else {
    FUN_0800434c(param_1,param_2);
  }
  return param_4;
}



//==== FUNC FUN_08004308 @ 08004308 ====

void FUN_08004308(int param_1,undefined *param_2)

{
  *param_2 = *(undefined *)(param_1 + 0x5c8);
  param_2[1] = *(undefined *)(param_1 + 0x5c9);
  *(ushort *)(param_2 + 2) =
       (ushort)*(byte *)(param_1 + 0x5ca) + (ushort)*(byte *)(param_1 + 0x5cb) * 0x100;
  *(ushort *)(param_2 + 4) =
       (ushort)*(byte *)(param_1 + 0x5cc) + (ushort)*(byte *)(param_1 + 0x5cd) * 0x100;
  *(ushort *)(param_2 + 6) =
       (ushort)*(byte *)(param_1 + 0x5ce) + (ushort)*(byte *)(param_1 + 0x5cf) * 0x100;
  *(uint *)(param_1 + 0x13c) = (uint)*(ushort *)(param_2 + 6);
  *(undefined *)(param_1 + 0x111) = 1;
  return;
}



//==== FUNC FUN_0800434c @ 0800434c ====

undefined4 FUN_0800434c(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*param_2 << 0x18) < 0) {
    FUN_08008b74(param_1,0x80);
  }
  else if (*(short *)(param_2 + 6) == 0) {
    FUN_08008b74(param_1,0x80);
  }
  else {
    FUN_08008b74(param_1,0);
  }
  FUN_08009bdc(param_1);
  return param_4;
}



//==== FUNC FUN_0800500c @ 0800500c ====

undefined4 * FUN_0800500c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  do {
    uVar3 = param_2;
    param_2 = uVar3 - 0x10;
    if (0xf < uVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1 = param_1 + 4;
    }
  } while (0xf < uVar3 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  if ((int)(uVar3 << 0x1d) < 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  puVar1 = puVar2;
  if ((param_2 & 2) != 0) {
    puVar1 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = 0;
  }
  puVar2 = puVar1;
  if ((int)(uVar3 * -0x80000000) < 0) {
    puVar2 = (undefined4 *)((int)puVar1 + 1);
    *(undefined *)puVar1 = 0;
  }
  return puVar2;
}



//==== FUNC FUN_08005014 @ 08005014 ====

short FUN_08005014(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = FUN_08001834(param_1);
  return sVar1 + 1;
}



//==== FUNC FUN_08005024 @ 08005024 ====

undefined4 FUN_08005024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; (uVar1 & 0xff) < 0xc; uVar1 = (uVar1 & 0xff) + 1) {
    FUN_08006052(param_1 + (uVar1 & 0xff) * 2,*(undefined *)(DAT_08005198 + (uVar1 & 0xff)),0);
  }
  return param_4;
}



//==== FUNC FUN_0800504e @ 0800504e ====

ushort FUN_0800504e(undefined4 param_1,undefined param_2)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = FUN_080016c0(0,param_1,param_2);
  if (uVar1 == 0) {
    sVar2 = FUN_0800603c(DAT_0800519c);
    if (sVar2 == 0xd) {
      FUN_08006026(param_1,DAT_080051a0,0xd);
      uVar1 = 0xd;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



//==== FUNC FUN_08005098 @ 08005098 ====

undefined4 FUN_08005098(int param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_3 < 0x211) && (param_3 != 0)) {
    if (param_1 + (uint)param_3 < 0x211) {
      FUN_08007934();
      param_1 = DAT_080051a4 + param_1;
      for (uVar3 = 0; (uVar3 & 0xffff) < (uint)param_3; uVar3 = (uVar3 & 0xffff) + 1) {
        iVar2 = FUN_0800811e((uVar3 & 0xffff) + param_1,*(undefined *)((uVar3 & 0xffff) + param_2));
        if (iVar2 != 8) {
          return 0;
        }
        if (*(char *)((uVar3 & 0xffff) + param_2) != *(char *)((uVar3 & 0xffff) + param_1)) {
          return 0;
        }
      }
      FUN_0800804c();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_08005120 @ 08005120 ====

undefined4 FUN_08005120(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (param_3 <= uVar1) {
      return 1;
    }
    if (*(char *)(uVar1 + param_1) != *(char *)(uVar1 + param_2)) break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}



//==== FUNC FUN_08005142 @ 08005142 ====

undefined FUN_08005142(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    param_2 = param_2 & 0xff;
    if (param_2 <= (uVar1 & 0xff)) {
      return 0;
    }
    if (*(char *)((uVar1 & 0xff) + param_1) == '\0') break;
    if ((*(char *)((uVar1 & 0xff) + param_1) < ' ') ||
       (*(char *)((uVar1 & 0xff) + param_1) == '\x7f')) {
      return 0;
    }
    uVar1 = (uVar1 & 0xff) + 1;
  }
  return 1;
}



//==== FUNC FUN_08005182 @ 08005182 ====

void FUN_08005182(void)

{
  FUN_080068ec();
  FUN_08006c58();
  FUN_080081f4(0,DAT_080051a8);
  return;
}



//==== FUNC FUN_080051ac @ 080051ac ====

undefined4
FUN_080051ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_480 [516];
  undefined auStack_27c [516];
  undefined auStack_78 [92];
  
  FUN_08005cce(auStack_480,&DAT_080054a4,0x204);
  FUN_08006026(auStack_27c,auStack_480,0x204);
  FUN_0800822c(auStack_78,param_1,param_2);
  uVar1 = FUN_08001834(param_5);
  iVar2 = FUN_08008290(auStack_78,param_5,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_080082a4(auStack_78,param_3,param_4,auStack_27c);
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



//==== FUNC FUN_08005238 @ 08005238 ====

undefined4 FUN_08005238(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_478 [516];
  undefined auStack_274 [516];
  undefined auStack_70 [92];
  
  FUN_08005cce(auStack_478,&DAT_080056a8,0x204);
  FUN_08006026(auStack_274,auStack_478,0x204);
  iVar1 = FUN_08008284(auStack_70);
  if (iVar1 == 0) {
    uVar2 = FUN_08001834(param_3);
    iVar1 = FUN_08008290(auStack_70,param_3,uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_08001834(param_4);
      iVar1 = FUN_08008290(auStack_70,param_4,uVar2);
      if (iVar1 == 0) {
        uVar2 = FUN_080082a4(auStack_70,param_1,param_2,auStack_274);
      }
      else {
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== FUNC FUN_080052be @ 080052be ====

undefined4 FUN_080052be(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined auStack_588 [516];
  undefined auStack_384 [256];
  undefined auStack_284 [516];
  undefined auStack_80 [92];
  
  FUN_08005cce(auStack_588,&DAT_080058ac,0x204);
  FUN_08006026(auStack_284,auStack_588,0x204);
  uVar5 = (uint)*(byte *)(DAT_080053b0 + param_1) +
          (uint)*(byte *)(DAT_080053a4 + param_1) * 0x1000000 +
          (uint)*(byte *)(DAT_080053a8 + param_1) * 0x10000 +
          (uint)*(byte *)(DAT_080053ac + param_1) * 0x100;
  if (DAT_080053b4 < uVar5) {
    uVar1 = 0xfffffffd;
  }
  else {
    uVar2 = (uint)*(byte *)(DAT_080053b8 + param_1);
    FUN_08006026(auStack_384,DAT_080053b8 + (param_1 - uVar2),uVar2);
    iVar3 = FUN_08008284(auStack_80);
    if (iVar3 == 0) {
      for (iVar3 = 0; iVar3 < (int)(uVar5 / 0x10); iVar3 = iVar3 + 1) {
        iVar4 = FUN_08008290(auStack_80,iVar3 * 0x10 + param_1,0x10);
        if (iVar4 != 0) {
          return 0xfffffffe;
        }
      }
      if ((uVar5 % 0x10 == 0) ||
         (iVar3 = FUN_08008290(auStack_80,iVar3 * 0x10 + param_1,uVar5 % 0x10), iVar3 == 0)) {
        uVar1 = FUN_080082a4(auStack_80,auStack_384,uVar2,auStack_284);
      }
      else {
        uVar1 = 0xfffffffe;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



//==== FUNC FUN_080053bc @ 080053bc ====

undefined4 FUN_080053bc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined auStack_588 [516];
  undefined auStack_384 [516];
  undefined auStack_180 [92];
  undefined auStack_124 [260];
  
  FUN_08005cce(auStack_588,&DAT_08005ab0,0x204);
  FUN_08006026(auStack_384,auStack_588,0x204);
  uVar6 = (uint)*(byte *)(param_1 + 0xffff) +
          (uint)*(byte *)(param_1 + 0xfffc) * 0x1000000 +
          (uint)*(byte *)(param_1 + 0xfffd) * 0x10000 + (uint)*(byte *)(param_1 + 0xfffe) * 0x100;
  uVar1 = (uint)*(byte *)(param_1 + 0xfffb);
  FUN_08006026(auStack_124,(param_1 - uVar1) + 0xfffb,uVar1);
  iVar2 = FUN_08008284(auStack_180);
  if (iVar2 == 0) {
    uVar4 = uVar6 % 0x10;
    for (iVar2 = 0; iVar2 < (int)(uVar6 / 0x10); iVar2 = iVar2 + 1) {
      iVar5 = FUN_08008290(auStack_180,iVar2 * 0x10 + param_1,0x10);
      if (iVar5 != 0) {
        return 0xfffffffe;
      }
    }
    if ((uVar4 == 0) || (iVar2 = FUN_08008290(auStack_180,iVar2 * 0x10 + param_1,uVar4), iVar2 == 0)
       ) {
      uVar3 = FUN_080082a4(auStack_180,auStack_124,uVar1,auStack_384);
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



//==== FUNC FUN_08005cb4 @ 08005cb4 ====

void FUN_08005cb4(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  if (param_3 != 0) {
    uVar5 = (uint)param_2 & 3;
    while (uVar5 != 0) {
      param_3 = param_3 - 1;
      *(undefined *)param_1 = *(undefined *)param_2;
      if (param_3 == 0) {
        return;
      }
      uVar5 = (uint)(undefined4 *)((int)param_2 + 1) & 3;
      param_2 = (undefined4 *)((int)param_2 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (((uint)param_1 & 3) == 0) {
      while (uVar5 = param_3 - 0x10, 0xf < param_3) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = uVar6;
        param_1[1] = uVar7;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        param_1 = param_1 + 4;
        param_3 = uVar5;
      }
      bVar10 = (int)(param_3 << 0x1d) < 0;
      if ((uVar5 & 8) != 0) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        *param_1 = uVar6;
        param_1[1] = uVar7;
        param_1 = param_1 + 2;
      }
    }
    else {
      while (uVar5 = param_3 - 8, 7 < param_3) {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        param_2 = param_2 + 2;
        puVar3 = param_1 + 1;
        *param_1 = uVar6;
        param_1 = param_1 + 2;
        *puVar3 = uVar7;
        param_3 = uVar5;
      }
      bVar10 = (int)(param_3 << 0x1d) < 0;
    }
    puVar1 = param_1;
    puVar3 = param_2;
    if (bVar10) {
      puVar3 = param_2 + 1;
      puVar1 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar2 = puVar1;
    puVar4 = puVar3;
    if ((uVar5 & 2) != 0) {
      puVar4 = (undefined4 *)((int)puVar3 + 2);
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    }
    if ((int)(uVar5 << 0x1f) < 0) {
      *(undefined *)puVar2 = *(undefined *)puVar4;
    }
  }
  return;
}



//==== FUNC FUN_08005cce @ 08005cce ====

void FUN_08005cce(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  uVar5 = param_3 - 0x10;
  if (0xf < param_3) {
    do {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      param_2 = param_2 + 4;
      bVar10 = 0xf < uVar5;
      uVar5 = uVar5 - 0x10;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1 = param_1 + 4;
    } while (bVar10);
  }
  if ((uVar5 & 8) != 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if ((int)(uVar5 << 0x1d) < 0) {
    puVar3 = param_2 + 1;
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  puVar2 = puVar1;
  puVar4 = puVar3;
  if ((uVar5 & 2) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 2);
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
  }
  if ((int)(uVar5 << 0x1f) < 0) {
    *(undefined *)puVar2 = *(undefined *)puVar4;
  }
  return;
}



//==== FUNC FUN_08005d24 @ 08005d24 ====

undefined8 FUN_08005d24(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  if (param_1 == '\0') {
    FUN_080074b0(1);
    do {
      iVar1 = FUN_080076aa(0x61);
    } while (iVar1 == 0);
    FUN_080075ba(0x200);
    *DAT_08005dbc = 0xff;
    *DAT_08005dc0 = 0x7f;
LAB_08005d86:
    FUN_080075ee(1);
    FUN_08006f12();
    FUN_080073c2(0x100);
    local_14 = *DAT_08005dc0;
    local_10 = *DAT_08005dbc;
    local_18 = 0;
    iVar1 = FUN_08006e30(&local_18);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    FUN_0800747c(1);
    iVar1 = DAT_08005dc4;
    do {
      iVar2 = FUN_080076aa(0x41);
      if (iVar2 != 0) {
        FUN_080075ba(0x100);
        *DAT_08005dbc = 0xff;
        *DAT_08005dc0 = 0x7f;
        goto LAB_08005d86;
      }
      bVar4 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar4);
    uVar3 = 0;
  }
  return CONCAT44(local_18,uVar3);
}



//==== FUNC FUN_08005dc8 @ 08005dc8 ====

undefined4 FUN_08005dc8(undefined param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_080075f6(0x40000,1);
  FUN_08007650(0x10000000,1);
  FUN_08008380(1);
  FUN_0800768c(0x40000,1);
  FUN_08008378(1);
  iVar1 = FUN_08008388(2);
  if (iVar1 == 0) {
    iVar1 = FUN_08005d24(param_1);
    if ((iVar1 == 0) && (iVar1 = FUN_08005d24(0), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    FUN_08006f12();
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_08005e26 @ 08005e26 ====

undefined FUN_08005e26(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08006f7c(0,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0800709e(0,param_1), iVar1 != 0)) {
    FUN_08007338(0,0x32f2);
    uVar2 = 1;
  }
  FUN_080072b2(0x100,0);
  return uVar2;
}



//==== FUNC FUN_08005e64 @ 08005e64 ====

undefined8 FUN_08005e64(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  undefined local_c;
  undefined local_b;
  undefined local_a;
  undefined uStack_9;
  
  local_c = (undefined)param_4;
  local_b = (undefined)((uint)param_4 >> 8);
  local_a = (undefined)((uint)param_4 >> 0x10);
  uStack_9 = (undefined)((uint)param_4 >> 0x18);
  local_10 = (undefined)param_3;
  local_f = (undefined)((uint)param_3 >> 8);
  local_e = (undefined)((uint)param_3 >> 0x10);
  local_d = (undefined)((uint)param_3 >> 0x18);
  FUN_0800704c(0,&local_c);
  FUN_0800716a(0,&local_10);
  *param_1 = local_d;
  param_1[1] = local_f;
  param_1[2] = local_e;
  param_1[3] = local_c;
  param_1[4] = local_b;
  param_1[5] = local_a;
  param_1[6] = local_10;
  return CONCAT17(uStack_9,CONCAT16(local_a,CONCAT15(local_b,CONCAT14(local_c,CONCAT13(local_d,
                                                  CONCAT12(local_e,CONCAT11(local_f,local_10)))))));
}



//==== FUNC FUN_08005ea4 @ 08005ea4 ====

void FUN_08005ea4(undefined *param_1)

{
  uint local_10;
  undefined4 local_c;
  
  local_c = CONCAT31(CONCAT12(*param_1,*(undefined2 *)(param_1 + 1)),param_1[6]);
  local_10 = (uint)*(uint3 *)(param_1 + 3);
  FUN_08005e26(&local_c,&local_10);
  return;
}



//==== FUNC FUN_08005ee2 @ 08005ee2 ====

undefined8 FUN_08005ee2(void)

{
  undefined4 unaff_r5;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  undefined4 uVar1;
  
  local_10 = (undefined)unaff_r5;
  local_f = (undefined)((uint)unaff_r5 >> 8);
  local_e = (undefined)((uint)unaff_r5 >> 0x10);
  local_d = (undefined)((uint)unaff_r5 >> 0x18);
  FUN_0800847e(0x20000);
  uVar1 = 0x20000;
  FUN_080083c4(&stack0xfffffff4);
  local_10 = 0x29;
  local_f = 0;
  local_e = 0;
  local_d = 1;
  FUN_080084a6(&local_10);
  return CONCAT44(uVar1,CONCAT13(local_d,CONCAT12(local_e,CONCAT11(local_f,local_10))));
}



//==== FUNC FUN_08005f24 @ 08005f24 ====

undefined8 FUN_08005f24(char *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte local_18;
  byte local_17;
  byte local_16;
  char local_15;
  undefined4 uStack_14;
  
  FUN_0800704c(0,&local_18);
  bVar1 = (byte)((param_2 / 0x3c) % 0x3c);
  bVar2 = (byte)((param_2 / 0xe10) % 0x18);
  param_1[3] = local_15;
  param_1[2] = (char)(param_2 + local_16) + (char)((param_2 + local_16) / 0x3c) * -0x3c;
  if ((param_2 + local_16) / 0x3c != 0) {
    bVar1 = bVar1 + 1;
  }
  param_1[1] = (char)((uint)bVar1 + (uint)local_17) +
               (char)(((uint)bVar1 + (uint)local_17) / 0x3c) * -0x3c;
  if (((uint)bVar1 + (uint)local_17) / 0x3c != 0) {
    bVar2 = bVar2 + 1;
  }
  *param_1 = (char)((uint)bVar2 + (uint)local_18) +
             (char)(((uint)bVar2 + (uint)local_18) / 0x18) * -0x18;
  param_1[0xc] = '1';
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0x80000000;
  return CONCAT44(uStack_14,CONCAT13(local_15,CONCAT12(local_16,CONCAT11(local_17,local_18))));
}



//==== FUNC FUN_08005fcc @ 08005fcc ====

undefined8 FUN_08005fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800500c(&uStack_18,0x10);
  FUN_080072b2(0x100,0);
  FUN_08005f24(&uStack_18,param_1);
  FUN_080071bc(0,0x100,&uStack_18);
  FUN_08006f12();
  FUN_0800736e(0x1000,1);
  FUN_080072b2(0x100,1);
  FUN_080073c2(0x100);
  FUN_080083a2(3);
  FUN_08006f12();
  FUN_08005ee2();
  return CONCAT44(uStack_14,uStack_18);
}



//==== FUNC FUN_08006026 @ 08006026 ====

undefined4 FUN_08006026(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08005cb4(param_1,param_2,param_3);
  return param_1;
}



//==== FUNC FUN_0800603c @ 0800603c ====

undefined2 FUN_0800603c(undefined *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



//==== FUNC FUN_08006048 @ 08006048 ====

void FUN_08006048(undefined *param_1,undefined2 param_2)

{
  *param_1 = (char)((ushort)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}



//==== FUNC FUN_08006052 @ 08006052 ====

void FUN_08006052(byte *param_1,byte param_2,char param_3)

{
  byte bVar1;
  
  *param_1 = param_2 >> 4;
  param_1[1] = param_2 & 0xf;
  for (bVar1 = 0; bVar1 < 2; bVar1 = bVar1 + 1) {
    if (param_1[bVar1] < 10) {
      param_1[bVar1] = param_1[bVar1] + 0x30;
    }
    else if (param_3 == '\0') {
      param_1[bVar1] = param_1[bVar1] + 0x57;
    }
    else {
      param_1[bVar1] = param_1[bVar1] + 0x37;
    }
  }
  return;
}



//==== FUNC FUN_080060a4 @ 080060a4 ====

void FUN_080060a4(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    FUN_0800640c(*(undefined *)(uVar1 + param_1));
  }
  return;
}



//==== FUNC FUN_080060bc @ 080060bc ====

undefined8 FUN_080060bc(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    do {
      iVar3 = param_3 + -1;
      if (param_3 == 0) goto LAB_080060ec;
      iVar2 = FUN_080086a6(DAT_080064a4,0x20);
      param_3 = iVar3;
    } while (iVar2 != 1);
    uVar1 = FUN_08008648(DAT_080064a4);
    *(undefined *)(uVar4 + param_1) = uVar1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < param_2);
LAB_080060ec:
  return CONCAT44(param_4,uVar4);
}



//==== FUNC FUN_080060f0 @ 080060f0 ====

void FUN_080060f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080060bc(param_1,param_2,DAT_080064a8,param_4,param_4);
  return;
}



//==== FUNC FUN_08006104 @ 08006104 ====

void FUN_08006104(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08001834(param_1);
  FUN_080060a4(param_1,uVar1);
  return;
}



//==== FUNC FUN_08006118 @ 08006118 ====

undefined4 FUN_08006118(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_50 [64];
  
  FUN_08006104(param_1);
  cVar1 = FUN_080060bc(auStack_50,0x40,DAT_080064ac);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08001834(param_2);
    iVar3 = FUN_0800188c(auStack_50,param_2,uVar2);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== FUNC FUN_0800615c @ 0800615c ====

undefined4 FUN_0800615c(void)

{
  undefined4 unaff_r7;
  
  FUN_08007816(DAT_080064a0,4);
  return unaff_r7;
}



//==== FUNC FUN_0800616a @ 0800616a ====

undefined4 FUN_0800616a(void)

{
  undefined4 unaff_r7;
  
  FUN_08007812(DAT_080064a0,4);
  return unaff_r7;
}



//==== FUNC FUN_08006178 @ 08006178 ====

uint FUN_08006178(void)

{
  uint uVar1;
  
  FUN_08007816(DAT_080064a0,4);
  for (uVar1 = 0; uVar1 < DAT_080064b0; uVar1 = uVar1 + 1) {
  }
  FUN_08007812(DAT_080064a0,4);
  return uVar1;
}



//==== FUNC FUN_080061a6 @ 080061a6 ====

char FUN_080061a6(undefined4 param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char unaff_r7;
  uint local_98;
  undefined4 local_94;
  undefined local_90;
  undefined local_8f;
  undefined local_8e;
  undefined local_8d;
  uint local_8c;
  undefined auStack_88 [3];
  char local_85;
  byte local_82;
  undefined auStack_81 [17];
  undefined auStack_70 [6];
  byte local_6a;
  undefined auStack_58 [10];
  undefined auStack_4e [58];
  
  if (param_2 < 0x11) {
    FUN_080086c6(DAT_080064a4,0x40);
    FUN_080075f6(0x140,1);
    local_8e = 0;
    local_90 = 0;
    local_8f = 3;
    local_8d = 1;
    local_94 = 0x10;
    FUN_08007740(DAT_080064b4,&local_94);
    local_8d = 2;
    local_94 = 0x800;
    FUN_08007740(DAT_080064b8,&local_94);
    local_90 = 1;
    local_8d = 1;
    local_94 = 0x800;
    FUN_08007740(DAT_080064b8,&local_94);
    FUN_08007816(DAT_080064b8,0x800);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(1);
    }
    FUN_08005cce(auStack_88,&DAT_080064c8,0x18);
    FUN_08005cce(auStack_70,&DAT_080064e0,0x18);
    local_85 = param_2 + 3;
    uVar3 = (uint)param_2;
    local_82 = param_2;
    local_6a = param_2;
    FUN_08006026(auStack_81,param_1,uVar3);
    for (bVar4 = 0; bVar4 < 2; bVar4 = bVar4 + 1) {
      FUN_08006178();
      for (local_98 = 0; local_98 < DAT_080064bc; local_98 = local_98 + 1) {
        for (local_8c = 0; local_8c < 0xb; local_8c = local_8c + 1) {
        }
      }
      FUN_080060a4(auStack_88,uVar3 + 7);
      unaff_r7 = FUN_080060bc(auStack_58,0x40,DAT_080064c0);
      if (unaff_r7 != '\0') {
        FUN_080060a4(auStack_70,7);
        unaff_r7 = FUN_080060bc(auStack_58,0x40,DAT_080064c0);
        if ((unaff_r7 != '\0') && (iVar2 = FUN_0800188c(auStack_4e,param_1,uVar3), iVar2 == 0))
        break;
      }
    }
    FUN_08007812(DAT_080064b8,0x800);
    FUN_08006178();
    for (local_98 = 0; local_98 < DAT_080064bc; local_98 = local_98 + 1) {
      for (bVar4 = 0; bVar4 < 0xb; bVar4 = bVar4 + 1) {
      }
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(0);
    }
    if (1 < bVar4) {
      unaff_r7 = '\0';
    }
  }
  else {
    unaff_r7 = '\0';
  }
  return unaff_r7;
}



//==== FUNC FUN_0800633e @ 0800633e ====

void FUN_0800633e(undefined4 param_1)

{
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  FUN_080075f6(8,1);
  FUN_08007650(0x20000,1);
  FUN_08007828(DAT_080064c4,5,7);
  FUN_08007828(DAT_080064c4,6,7);
  local_1a = 0;
  local_19 = 1;
  local_1c = 2;
  local_20 = 0x20;
  local_1b = 2;
  FUN_08007740(DAT_080064c4,&local_20);
  local_1c = 2;
  local_20 = 0x40;
  FUN_08007740(DAT_080064c4,&local_20);
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_c = 0;
  local_e = 0xc;
  local_18 = param_1;
  FUN_08008528(DAT_080064a4,&local_18);
  FUN_08008624(DAT_080064a4,1);
  FUN_080086c6(DAT_080064a4,0x40);
  FUN_080075f6(0x80,1);
  local_1a = 0;
  local_19 = 1;
  local_1c = 1;
  local_20 = 4;
  local_1b = 3;
  FUN_08007740(DAT_080064a0,&local_20);
  FUN_0800616a();
  return;
}



//==== FUNC FUN_0800640c @ 0800640c ====

void FUN_0800640c(undefined param_1)

{
  int iVar1;
  
  FUN_08008640(DAT_080064a4,param_1);
  do {
    iVar1 = FUN_080086a6(DAT_080064a4,0x40);
  } while (iVar1 == 0);
  return;
}



//==== FUNC FUN_0800642a @ 0800642a ====

void FUN_0800642a(char param_1)

{
  if (param_1 == '\0') {
    FUN_08008650(DAT_080064a4,0x525,0);
  }
  else {
    FUN_08008650(DAT_080064a4,0x525,1);
  }
  return;
}



//==== FUNC FUN_08006450 @ 08006450 ====

undefined8 FUN_08006450(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_080086d2(DAT_080064a4,0x525);
  if (iVar2 == 1) {
    uVar1 = FUN_08008648(DAT_080064a4);
    *param_1 = uVar1;
    FUN_08008740(DAT_080064a4,0x525);
  }
  iVar3 = FUN_080086d2(DAT_080064a4,0x360);
  if (iVar3 == 1) {
    FUN_08008740(DAT_080064a4,0x360);
    FUN_08008648(DAT_080064a4);
  }
  return CONCAT44(param_4,(uint)(iVar2 == 1));
}



//==== FUNC FUN_080064f8 @ 080064f8 ====

undefined8 FUN_080064f8(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080077f8(DAT_08006628,0x200);
  *DAT_0800662c = iVar1 != 0;
  return CONCAT44(unaff_r7,(uint)*DAT_0800662c);
}



//==== FUNC FUN_08006560 @ 08006560 ====

undefined4 FUN_08006560(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined *)(*DAT_08006630 + DAT_08006634) = *(undefined *)(uVar1 + param_1);
    *DAT_08006630 = *DAT_08006630 + 1;
    if (*DAT_08006630 == 0x1012) {
      *DAT_08006630 = 0;
    }
  }
  return 0;
}



//==== FUNC FUN_0800659a @ 0800659a ====

longlong FUN_0800659a(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_08008764(param_1,param_2);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_080065ac @ 080065ac ====

undefined4 FUN_080065ac(void)

{
  undefined4 unaff_r7;
  
  FUN_08008c2e(DAT_08006638);
  return unaff_r7;
}



//==== FUNC FUN_080065b6 @ 080065b6 ====

undefined4 FUN_080065b6(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0800663c;
  FUN_08008c48(DAT_08006638,1,DAT_08006644,DAT_08006640);
  return uVar1;
}



//==== FUNC FUN_080065ca @ 080065ca ====

void FUN_080065ca(char param_1)

{
  if (param_1 == '\0') {
    *DAT_0800664c = 8;
  }
  else {
    *DAT_08006648 = 8;
  }
  return;
}



//==== FUNC FUN_080065e0 @ 080065e0 ====

undefined4 FUN_080065e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08006560(param_1,param_2);
  return param_4;
}



//==== FUNC sub_080065f0 @ 080065f0 ====

undefined4 sub_080065f0(void)

{
  undefined4 unaff_r7;
  
  if (*(char *)(DAT_08006638 + 10) != '\0') {
    *DAT_08006650 = *DAT_08006650 & 0xfffffff9;
    FUN_08008f14();
    FUN_08009c2e(DAT_08006638);
  }
  FUN_0800847e(0x40000);
  return unaff_r7;
}



//==== FUNC sub_0800661a @ 0800661a ====

undefined4 sub_0800661a(void)

{
  undefined4 unaff_r7;
  
  FUN_08009c5c(DAT_08006638);
  return unaff_r7;
}



//==== FUNC FUN_08006654 @ 08006654 ====

int FUN_08006654(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *local_18;
  int local_14;
  int local_10;
  undefined4 *local_c [2];
  undefined4 uStack_4;
  
  local_c[0] = &uStack_4;
  local_10 = 0;
  if (param_2 == 0) {
    local_18 = (undefined *)0x0;
    local_14 = 0;
  }
  else {
    local_14 = param_2 + -1;
    local_18 = param_1;
  }
  uStack_4 = param_4;
  iVar1 = FUN_0800a32c((int)&DAT_08006694 + DAT_08006694,&local_18,param_3,local_c);
  if (local_18 != (undefined *)0x0) {
    *local_18 = 0;
  }
  if (-1 < iVar1) {
    iVar1 = local_10;
  }
  return iVar1;
}



//==== FUNC FUN_08006698 @ 08006698 ====

bool FUN_08006698(uint param_1)

{
  short local_20;
  undefined2 local_1e;
  uint local_1c;
  undefined2 local_18;
  
  if (param_1 != 0) {
    FUN_08007650(0x20,1);
    local_20 = (short)((*DAT_08006770 >> 1) / DAT_08006774) + -1;
    local_1c = param_1 % 0xffff - 1 & 0xffff;
    local_18 = 0;
    local_1e = 0;
    FUN_0800b044(DAT_08006778,&local_20);
  }
  return param_1 != 0;
}



//==== FUNC FUN_080066ec @ 080066ec ====

void FUN_080066ec(char param_1)

{
  if (param_1 == '\0') {
    FUN_0800b0ce(DAT_08006778,0);
    FUN_0800b184(DAT_08006778,1,0);
  }
  else {
    FUN_0800b19a(DAT_08006778,1);
    FUN_0800b0ae(DAT_08006778,0);
    FUN_0800b0ce(DAT_08006778,1);
    FUN_0800b184(DAT_08006778,1,1);
  }
  return;
}



//==== FUNC FUN_0800672e @ 0800672e ====

undefined8 FUN_0800672e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800b1a2(DAT_08006778,1);
  if (iVar1 != 0) {
    FUN_0800b1d4(DAT_08006778,1);
  }
  return CONCAT44(unaff_r7,(uint)(iVar1 != 0));
}



//==== FUNC FUN_0800674c @ 0800674c ====

void FUN_0800674c(uint param_1)

{
  uint uVar1;
  uint local_4;
  
  for (uVar1 = 0; uVar1 < param_1; uVar1 = uVar1 + 1) {
    for (local_4 = 0; local_4 < 0xb; local_4 = local_4 + 1) {
    }
  }
  return;
}



//==== FUNC FUN_0800677c @ 0800677c ====

int FUN_0800677c(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ((((uint)*DAT_080068d4 * 0xcaa) / 0x1000) * 0x596 + 5) / 0x14a;
  if (uVar1 < 0x2134) {
    iVar2 = uVar1 + 0xfa;
  }
  else {
    iVar2 = (DAT_080068d8 + uVar1) / 9 + 0xfa + uVar1;
  }
  return (uint)*DAT_080068d4 + (iVar2 + 0x15e) * 0x10000;
}



//==== FUNC FUN_080067d2 @ 080067d2 ====

void FUN_080067d2(void)

{
  undefined4 local_70;
  undefined local_6c;
  undefined local_69;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined local_18;
  undefined local_17;
  undefined4 local_14;
  undefined4 local_c;
  undefined local_8;
  
  FUN_080075f6(1,1);
  FUN_080075f6(0x400000,1);
  FUN_0800766e(0x100,1);
  local_70 = 0x80;
  local_6c = 3;
  local_69 = 0;
  FUN_08007740(DAT_080068dc,&local_70);
  FUN_0800b1dc(DAT_080068e0);
  local_58 = 0;
  local_54 = DAT_080068e4;
  local_50 = DAT_080068d4;
  local_4c = 0;
  local_48 = 1;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x800;
  local_38 = 0x2000;
  local_34 = 0x100;
  local_30 = 0x20000;
  local_2c = 0;
  local_28 = 1;
  local_24 = 0;
  local_20 = 0;
  FUN_0800b31e(DAT_080068e0,&local_58);
  FUN_0800b376(DAT_080068e0,1);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  FUN_0800b444(&local_68);
  local_1c = 0;
  local_18 = 0;
  local_17 = 1;
  local_14 = 0;
  local_c = 0;
  local_8 = 1;
  FUN_0800b3f0(DAT_080068e8,&local_1c);
  FUN_0800b59a(DAT_080068e8,1);
  FUN_0800b4a2(DAT_080068e8,7,1,1);
  FUN_0800b480(1);
  FUN_0800b5b6(DAT_080068e8,1);
  FUN_0800b466(DAT_080068e8,1);
  FUN_0800b590(DAT_080068e8);
  return;
}



//==== FUNC FUN_080068ec @ 080068ec ====

void FUN_080068ec(void)

{
  undefined4 local_68;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  FUN_080075f6(0x78,1);
  FUN_08007632(1,1);
  FUN_08007828(DAT_08006e0c,0,0xc);
  FUN_08007828(DAT_08006e0c,1,0xc);
  FUN_08007828(DAT_08006e0c,8,0xc);
  FUN_08007828(DAT_08006e0c,9,0xc);
  FUN_08007828(DAT_08006e0c,10,0xc);
  FUN_08007828(DAT_08006e0c,0xe,0xc);
  FUN_08007828(DAT_08006e0c,0xf,0xc);
  local_68 = 0xc703;
  local_64 = 2;
  local_63 = 3;
  local_62 = 0;
  local_61 = 0;
  FUN_08007740(DAT_08006e0c,&local_68);
  FUN_08007828(DAT_08006e10,7,0xc);
  FUN_08007828(DAT_08006e10,8,0xc);
  FUN_08007828(DAT_08006e10,9,0xc);
  FUN_08007828(DAT_08006e10,10,0xc);
  FUN_08007828(DAT_08006e10,0xb,0xc);
  FUN_08007828(DAT_08006e10,0xc,0xc);
  FUN_08007828(DAT_08006e10,0xd,0xc);
  FUN_08007828(DAT_08006e10,0xe,0xc);
  FUN_08007828(DAT_08006e10,0xf,0xc);
  local_68 = 0xff80;
  FUN_08007740(DAT_08006e10,&local_68);
  FUN_08007828(DAT_08006e14,0,0xc);
  FUN_08007828(DAT_08006e14,1,0xc);
  FUN_08007828(DAT_08006e14,2,0xc);
  FUN_08007828(DAT_08006e14,3,0xc);
  FUN_08007828(DAT_08006e14,4,0xc);
  FUN_08007828(DAT_08006e14,5,0xc);
  FUN_08007828(DAT_08006e14,0xc,0xc);
  FUN_08007828(DAT_08006e14,0xd,0xc);
  FUN_08007828(DAT_08006e14,0xe,0xc);
  FUN_08007828(DAT_08006e14,0xf,0xc);
  local_68 = 0xf03f;
  FUN_08007740(DAT_08006e14,&local_68);
  FUN_08007828(DAT_08006e18,0,0xc);
  FUN_08007828(DAT_08006e18,1,0xc);
  FUN_08007828(DAT_08006e18,2,0xc);
  FUN_08007828(DAT_08006e18,3,0xc);
  FUN_08007828(DAT_08006e18,4,0xc);
  FUN_08007828(DAT_08006e18,5,0xc);
  local_68 = 0x3f;
  FUN_08007740(DAT_08006e18,&local_68);
  FUN_08007828(DAT_08006e0c,0xb,0xc);
  FUN_08007828(DAT_08006e0c,0xc,0xc);
  FUN_08007828(DAT_08006e0c,0xd,0xc);
  local_68 = 0x3800;
  FUN_08007740(DAT_08006e0c,&local_68);
  FUN_08007828(DAT_08006e10,2,0xc);
  FUN_08007828(DAT_08006e10,3,0xc);
  FUN_08007828(DAT_08006e10,4,0xc);
  FUN_08007828(DAT_08006e10,5,0xc);
  FUN_08007828(DAT_08006e10,6,0xc);
  local_68 = 0x7c;
  FUN_08007740(DAT_08006e10,&local_68);
  FUN_08007828(DAT_08006e0c,4,0xc);
  FUN_08007828(DAT_08006e0c,5,0xc);
  local_68 = 0x30;
  FUN_08007740(DAT_08006e0c,&local_68);
  FUN_08007828(DAT_08006e18,9,0xc);
  local_68 = 0x200;
  FUN_08007740(DAT_08006e18,&local_68);
  FUN_08007828(DAT_08006e0c,6,0xc);
  local_68 = 0x40;
  local_64 = 0;
  local_62 = 0;
  local_61 = 1;
  FUN_08007740(DAT_08006e0c,&local_68);
  local_60 = 5;
  local_5c = 0;
  local_58 = 0xb;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x10000000;
  local_44 = 2;
  local_40 = 0;
  local_3c = 8;
  local_38 = 0x10;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x1000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_30 = 0;
  local_10 = &local_60;
  local_c = &local_60;
  FUN_08002c60(&local_44);
  FUN_08002d40(2,1);
  return;
}



//==== FUNC FUN_08006c30 @ 08006c30 ====

void FUN_08006c30(int param_1,undefined2 param_2)

{
  *DAT_08006e1c = 0xaa;
  *DAT_08006e20 = 0x55;
  *DAT_08006e1c = 0xa0;
  *(undefined2 *)(&DAT_64000000 + param_1) = param_2;
  FUN_08006c70(0x1400);
  return;
}



//==== FUNC FUN_08006c58 @ 08006c58 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08006c58(void)

{
  *DAT_08006e1c = 0xaa;
  *DAT_08006e20 = 0x55;
  _DAT_64000000 = 0xf0;
  return 0;
}



//==== FUNC FUN_08006c70 @ 08006c70 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08006c70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *DAT_08006e1c = 0x70;
    iVar2 = param_1 + -1;
    if (param_1 == 0) break;
    param_1 = iVar2;
  } while (-1 < (int)((uint)_DAT_64000000 << 0x18));
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else if ((_DAT_64000000 & 0x7e) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



//==== FUNC FUN_08006cae @ 08006cae ====

undefined8 FUN_08006cae(undefined2 *param_1,short param_2,ushort param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_20;
  
  uVar4 = (uint)param_3;
  local_20 = param_4;
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(1);
    }
    *DAT_08006e1c = 0xaa;
    *DAT_08006e20 = 0x55;
    *DAT_08006e1c = 0x88;
    cVar2 = '\x02';
    uVar5 = param_2 + 0x200;
    uVar6 = (uint)uVar5;
    if (uVar6 % 2 != 0) {
      local_20._2_2_ = (undefined2)(param_4 >> 0x10);
      local_20._0_2_ = CONCAT11(*(undefined *)param_1,(char)DAT_08006e28);
      param_1 = (undefined2 *)((int)param_1 + 1);
      cVar2 = FUN_08006c30(uVar5 - 1,(undefined2)local_20);
      uVar4 = uVar4 - 1;
      uVar6 = uVar5 + 1;
    }
    for (uVar7 = 0; (uVar7 & 0xffff) < (uVar4 & 0xffff); uVar7 = uVar7 + 2) {
      uVar7 = uVar7 & 0xffff;
      uVar4 = uVar4 & 0xffff;
      if (uVar7 == uVar4 - 1) {
        local_20 = CONCAT22(local_20._2_2_,DAT_08006e2c);
        local_20 = CONCAT31(local_20._1_3_,*(undefined *)param_1);
        cVar2 = FUN_08006c30(uVar7 + (uVar6 & 0xffff),local_20 & 0xffff);
        break;
      }
      uVar6 = uVar6 & 0xffff;
      cVar2 = FUN_08006c30(uVar7 + uVar6,*param_1);
      if (cVar2 != '\0') break;
      param_1 = param_1 + 1;
      cVar2 = '\0';
    }
    *DAT_08006e1c = 0xaa;
    *DAT_08006e20 = 0x55;
    *DAT_08006e1c = 0x90;
    *DAT_08006e1c = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts(0);
    }
    iVar3 = (int)cVar2;
  }
  return CONCAT44(local_20,iVar3);
}



//==== FUNC FUN_08006daa @ 08006daa ====

undefined4 FUN_08006daa(undefined *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  *DAT_08006e1c = 0xaa;
  *DAT_08006e20 = 0x55;
  *DAT_08006e1c = 0x88;
  for (uVar2 = 0; param_3 = param_3 & 0xffff, (uVar2 & 0xffff) < param_3;
      uVar2 = (uVar2 & 0xffff) + 1) {
    param_2 = param_2 & 0xffff;
    *param_1 = *(undefined *)(DAT_08006e24 + (uVar2 & 0xffff) + param_2);
    param_1 = param_1 + 1;
  }
  *DAT_08006e1c = 0xaa;
  *DAT_08006e20 = 0x55;
  *DAT_08006e1c = 0x90;
  *DAT_08006e1c = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  return 0;
}



//==== FUNC FUN_08006e30 @ 08006e30 ====

undefined8 FUN_08006e30(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  iVar1 = FUN_08006ea4();
  if (iVar1 != 0) {
    *DAT_08007428 = *DAT_08007428 & 0xffffffbf;
    *DAT_08007428 = *DAT_08007428 | *param_1;
    *DAT_08007434 = param_1[2];
    *DAT_08007434 = *DAT_08007434 | param_1[1] << 0x10;
    FUN_08006f00();
  }
  *DAT_0800742c = 0xff;
  return CONCAT44(param_4,(int)(iVar1 != 0));
}



//==== FUNC FUN_08006ea4 @ 08006ea4 ====

undefined8 FUN_08006ea4(void)

{
  char cVar1;
  uint uVar2;
  int local_4;
  
  local_4 = 0;
  uVar2 = 0;
  if ((int)(*DAT_08007430 << 0x19) < 0) {
    cVar1 = '\x01';
  }
  else {
    *DAT_08007430 = 0xffffffff;
    do {
      uVar2 = *DAT_08007430 & 0x40;
      local_4 = local_4 + 1;
      if (local_4 == 0x10000) break;
    } while (uVar2 == 0);
    if ((int)(*DAT_08007430 << 0x19) < 0) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
  }
  return CONCAT44(uVar2,(int)cVar1);
}



//==== FUNC FUN_08006f00 @ 08006f00 ====

void FUN_08006f00(void)

{
  *DAT_08007430 = *DAT_08007430 & 0xffffff7f;
  return;
}



//==== FUNC FUN_08006f12 @ 08006f12 ====

bool FUN_08006f12(void)

{
  uint uVar1;
  int local_4;
  
  local_4 = 0;
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  *DAT_08007430 = *DAT_08007430 & 0xffffff5f;
  do {
    local_4 = local_4 + 1;
    if (local_4 == 0x8000) break;
  } while ((*DAT_08007430 & 0x20) == 0);
  uVar1 = *DAT_08007430;
  *DAT_0800742c = 0xff;
  return (int)(uVar1 << 0x1a) < 0;
}



//==== FUNC FUN_08006f7c @ 08006f7c ====

undefined FUN_08006f7c(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  
  if (param_1 == 0) {
    if (-1 < *DAT_08007428 << 0x19) {
      param_2[3] = 0;
    }
  }
  else if (*DAT_08007428 << 0x19 < 0) {
    FUN_08007466(*param_2);
  }
  else {
    param_2[3] = 0;
  }
  if (param_1 == 0) {
    uVar2 = FUN_08007450(*param_2);
    bVar1 = FUN_08007450(param_2[1]);
    uVar3 = FUN_08007450(param_2[2]);
    uVar2 = uVar3 | (uint)bVar1 << 8 | (uVar2 & 0xff) << 0x10 | (uint)param_2[3] << 0x10;
  }
  else {
    uVar2 = (uint)param_2[1] << 8 | (uint)*param_2 << 0x10 | (uint)param_2[2] |
            (uint)param_2[3] << 0x10;
  }
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  iVar4 = FUN_08006ea4();
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    *DAT_080073dc = DAT_08007444 & uVar2;
    FUN_08006f00();
    iVar4 = FUN_08006f12();
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  *DAT_0800742c = 0xff;
  return uVar5;
}



//==== FUNC FUN_0800704c @ 0800704c ====

void FUN_0800704c(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *DAT_080073dc & DAT_08007444;
  bVar1 = (byte)(uVar2 >> 0x10);
  *param_2 = bVar1 & 0x3f;
  param_2[1] = (byte)(uVar2 >> 8) & 0x7f;
  param_2[2] = (byte)uVar2 & 0x7f;
  param_2[3] = bVar1 & 0x40;
  if (param_1 == 0) {
    bVar1 = FUN_08007466(*param_2);
    *param_2 = bVar1;
    bVar1 = FUN_08007466(param_2[1]);
    param_2[1] = bVar1;
    bVar1 = FUN_08007466(param_2[2]);
    param_2[2] = bVar1;
  }
  return;
}



//==== FUNC FUN_0800709e @ 0800709e ====

undefined FUN_0800709e(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  
  if ((param_1 == 0) && ((int)((uint)param_2[1] << 0x1b) < 0)) {
    param_2[1] = (param_2[1] & 0xef) + 10;
  }
  if (param_1 == 0) {
    uVar2 = FUN_08007450(param_2[3]);
    bVar1 = FUN_08007450(param_2[1]);
    uVar3 = FUN_08007450(param_2[2]);
    uVar2 = uVar3 | (uint)bVar1 << 8 | (uVar2 & 0xff) << 0x10 | (uint)*param_2 << 0xd;
  }
  else {
    FUN_08007466(param_2[1]);
    FUN_08007466(param_2[2]);
    uVar2 = (uint)param_2[1] << 8 | (uint)param_2[3] << 0x10 | (uint)param_2[2] |
            (uint)*param_2 << 0xd;
  }
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  iVar4 = FUN_08006ea4();
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    *DAT_080073e0 = DAT_08007448 & uVar2;
    FUN_08006f00();
    iVar4 = FUN_08006f12();
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  *DAT_0800742c = 0xff;
  return uVar5;
}



//==== FUNC FUN_0800716a @ 0800716a ====

void FUN_0800716a(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *DAT_080073e0 & DAT_08007448;
  param_2[3] = (byte)(uVar2 >> 0x10);
  param_2[1] = (byte)(uVar2 >> 8) & 0x1f;
  param_2[2] = (byte)uVar2 & 0x3f;
  *param_2 = (byte)(uVar2 >> 0xd) & 7;
  if (param_1 == 0) {
    bVar1 = FUN_08007466(param_2[3]);
    param_2[3] = bVar1;
    bVar1 = FUN_08007466(param_2[1]);
    param_2[1] = bVar1;
    bVar1 = FUN_08007466(param_2[2]);
    param_2[2] = bVar1;
    *param_2 = *param_2;
  }
  return;
}



//==== FUNC FUN_080071bc @ 080071bc ====

undefined4 FUN_080071bc(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    if (-1 < *DAT_08007428 << 0x19) {
      param_3[3] = 0;
    }
  }
  else {
    if (*DAT_08007428 << 0x19 < 0) {
      FUN_08007466(*param_3);
    }
    else {
      param_3[3] = 0;
    }
    if (*(int *)(param_3 + 8) == 0) {
      FUN_08007466(param_3[0xc]);
    }
    else {
      FUN_08007466(param_3[0xc]);
    }
  }
  if (param_1 == 0) {
    uVar3 = FUN_08007450(*param_3);
    uVar4 = FUN_08007450(param_3[1]);
    bVar2 = FUN_08007450(param_3[2]);
    bVar1 = param_3[3];
    iVar5 = FUN_08007450(param_3[0xc]);
    uVar3 = (uint)bVar2 | (uVar4 & 0xff) << 8 | (uVar3 & 0xff) << 0x10 | (uint)bVar1 << 0x10 |
            iVar5 << 0x18 | *(uint *)(param_3 + 8) | *(uint *)(param_3 + 4);
  }
  else {
    uVar3 = (uint)param_3[1] << 8 | (uint)*param_3 << 0x10 | (uint)param_3[2] |
            (uint)param_3[3] << 0x10 | (uint)param_3[0xc] << 0x18 | *(uint *)(param_3 + 8) |
            *(uint *)(param_3 + 4);
  }
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  if (param_2 == 0x100) {
    *DAT_08007438 = uVar3;
  }
  else {
    *DAT_0800743c = uVar3;
  }
  *DAT_0800742c = 0xff;
  return param_4;
}



//==== FUNC FUN_080072b2 @ 080072b2 ====

undefined8 FUN_080072b2(uint param_1,char param_2)

{
  char cVar1;
  int local_c;
  
  local_c = 0;
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  if (param_2 == '\0') {
    *DAT_08007428 = *DAT_08007428 & ~param_1;
    do {
      local_c = local_c + 1;
      if (local_c == 0x10000) break;
    } while ((*DAT_08007430 & param_1 >> 8) == 0);
    if ((*DAT_08007430 & param_1 >> 8) == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  else {
    *DAT_08007428 = *DAT_08007428 | param_1;
    cVar1 = '\x01';
  }
  *DAT_0800742c = 0xff;
  return CONCAT44(local_c,(int)cVar1);
}



//==== FUNC FUN_08007338 @ 08007338 ====

void FUN_08007338(int param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_0800744c + param_1 * 4) = param_2;
  return;
}



//==== FUNC FUN_08007352 @ 08007352 ====

undefined4 FUN_08007352(int param_1)

{
  return *(undefined4 *)(DAT_0800744c + param_1 * 4);
}



//==== FUNC FUN_0800736e @ 0800736e ====

void FUN_0800736e(uint param_1,char param_2)

{
  *DAT_0800742c = 0xca;
  *DAT_0800742c = 0x53;
  if (param_2 == '\0') {
    *DAT_08007428 = *DAT_08007428 & ~(param_1 & 0xfffffffb);
    *DAT_08007440 = *DAT_08007440 & ~(param_1 & 4);
  }
  else {
    *DAT_08007428 = *DAT_08007428 | param_1 & 0xfffffffb;
    *DAT_08007440 = *DAT_08007440 | param_1 & 4;
  }
  *DAT_0800742c = 0xff;
  return;
}



//==== FUNC FUN_080073c2 @ 080073c2 ====

void FUN_080073c2(ushort param_1)

{
  *DAT_08007430 = *DAT_08007430 & 0x80 | ~(param_1 | 0x80);
  return;
}



//==== FUNC FUN_080073e4 @ 080073e4 ====

undefined FUN_080073e4(uint param_1)

{
  undefined uVar1;
  
  if (((*DAT_08007428 & param_1 | *DAT_08007440 & 4 & param_1 >> 0xf) == 0) ||
     ((*DAT_08007430 & param_1 >> 4 & 0xffff) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_08007450 @ 08007450 ====

uint FUN_08007450(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 = param_1 & 0xff, 9 < param_1; param_1 = param_1 - 10) {
    uVar1 = uVar1 + 1;
  }
  return param_1 | (uVar1 & 0xf) << 4;
}



//==== FUNC FUN_08007466 @ 08007466 ====

char FUN_08007466(byte param_1)

{
  return (param_1 & 0xf) + (param_1 >> 4) * '\n';
}



//==== FUNC FUN_0800747c @ 0800747c ====

void FUN_0800747c(char param_1)

{
  *DAT_08007708 = 0;
  *DAT_08007708 = 0;
  if (param_1 == '\x01') {
    *DAT_08007708 = 1;
  }
  else if (param_1 == '\x04') {
    *DAT_08007708 = 5;
  }
  return;
}



//==== FUNC FUN_080074b0 @ 080074b0 ====

void FUN_080074b0(char param_1)

{
  *DAT_0800770c = (int)param_1;
  return;
}



//==== FUNC FUN_080074ba @ 080074ba ====

void FUN_080074ba(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_08007700 & 0xc;
  if (uVar1 == 0) {
    *param_1 = DAT_08007710;
  }
  else if (uVar1 == 4) {
    *param_1 = DAT_08007714;
  }
  else if (uVar1 == 8) {
    if ((int)(*DAT_08007704 << 9) < 0) {
      uVar1 = ((*DAT_08007704 << 0x11) >> 0x17) * (DAT_08007714 / (*DAT_08007704 & 0x3f));
    }
    else {
      uVar1 = ((*DAT_08007704 << 0x11) >> 0x17) * (DAT_08007710 / (*DAT_08007704 & 0x3f));
    }
    *param_1 = uVar1 / ((((*DAT_08007704 << 0xe) >> 0x1e) + 1) * 2);
  }
  else {
    *param_1 = DAT_08007710;
  }
  param_1[1] = *param_1 >> *(sbyte *)(((*DAT_08007700 & 0xf0) >> 4) + DAT_08007718);
  param_1[2] = param_1[1] >> *(sbyte *)(((*DAT_08007700 & 0x1c00) >> 10) + DAT_08007718);
  param_1[3] = param_1[1] >> *(sbyte *)(((*DAT_08007700 & 0xe000) >> 0xd) + DAT_08007718);
  return;
}



//==== FUNC FUN_080075ba @ 080075ba ====

void FUN_080075ba(uint param_1)

{
  if ((param_1 & 0x300) == 0x300) {
    *DAT_08007700 = *DAT_08007700 & 0xffe0ffff | DAT_0800771c & param_1;
  }
  *DAT_08007708 = *DAT_08007708 | param_1 & 0xfff;
  return;
}



//==== FUNC FUN_080075ee @ 080075ee ====

void FUN_080075ee(char param_1)

{
  *DAT_08007720 = (int)param_1;
  return;
}



//==== FUNC FUN_080075f6 @ 080075f6 ====

void FUN_080075f6(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08007724 = *DAT_08007724 & ~param_1;
  }
  else {
    *DAT_08007724 = *DAT_08007724 | param_1;
  }
  return;
}



//==== FUNC FUN_08007614 @ 08007614 ====

void FUN_08007614(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08007728 = *DAT_08007728 & ~param_1;
  }
  else {
    *DAT_08007728 = *DAT_08007728 | param_1;
  }
  return;
}



//==== FUNC FUN_08007632 @ 08007632 ====

void FUN_08007632(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_0800772c = *DAT_0800772c & ~param_1;
  }
  else {
    *DAT_0800772c = *DAT_0800772c | param_1;
  }
  return;
}



//==== FUNC FUN_08007650 @ 08007650 ====

void FUN_08007650(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08007730 = *DAT_08007730 & ~param_1;
  }
  else {
    *DAT_08007730 = *DAT_08007730 | param_1;
  }
  return;
}



//==== FUNC FUN_0800766e @ 0800766e ====

void FUN_0800766e(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08007734 = *DAT_08007734 & ~param_1;
  }
  else {
    *DAT_08007734 = *DAT_08007734 | param_1;
  }
  return;
}



//==== FUNC FUN_0800768c @ 0800768c ====

void FUN_0800768c(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_08007738 = *DAT_08007738 & ~param_1;
  }
  else {
    *DAT_08007738 = *DAT_08007738 | param_1;
  }
  return;
}



//==== FUNC FUN_080076aa @ 080076aa ====

bool FUN_080076aa(byte param_1)

{
  uint uVar1;
  
  if (param_1 >> 5 == 1) {
    uVar1 = *DAT_080076fc;
  }
  else if (param_1 >> 5 == 2) {
    uVar1 = *DAT_08007708;
  }
  else {
    uVar1 = *DAT_0800773c;
  }
  return (uVar1 & 1 << (param_1 & 0x1f)) != 0;
}



//==== FUNC FUN_08007740 @ 08007740 ====

void FUN_08007740(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 1) {
    uVar2 = 1 << (uVar1 & 0xff);
    if ((*param_2 & uVar2) == uVar2) {
      *param_1 = *param_1 & ~(3 << ((uVar1 & 0x7f) << 1));
      *param_1 = *param_1 | (int)*(char *)(param_2 + 1) << ((uVar1 & 0x7f) << 1);
      if ((*(char *)(param_2 + 1) == '\x01') || (*(char *)(param_2 + 1) == '\x02')) {
        param_1[2] = param_1[2] & ~(3 << ((uVar1 & 0x7f) << 1));
        param_1[2] = param_1[2] | (int)*(char *)((int)param_2 + 5) << ((uVar1 & 0x7f) << 1);
        param_1[1] = param_1[1] & ~(1 << (uVar1 & 0xff));
        param_1[1] = param_1[1] |
                     (uint)(ushort)(short)*(char *)((int)param_2 + 6) << (uVar1 & 0xff) & 0xffff;
      }
      param_1[3] = param_1[3] & ~(3 << ((uVar1 & 0x7f) << 1));
      param_1[3] = param_1[3] | (int)*(char *)((int)param_2 + 7) << ((uVar1 & 0x7f) << 1);
    }
  }
  return;
}



//==== FUNC FUN_080077f8 @ 080077f8 ====

bool FUN_080077f8(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x10) & 0xffff & param_2) != 0;
}



//==== FUNC FUN_08007812 @ 08007812 ====

void FUN_08007812(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x18) = param_2;
  return;
}



//==== FUNC FUN_08007816 @ 08007816 ====

void FUN_08007816(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x1a) = param_2;
  return;
}



//==== FUNC FUN_0800781a @ 0800781a ====

void FUN_0800781a(int param_1,undefined2 param_2,char param_3)

{
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x1a) = param_2;
  }
  else {
    *(undefined2 *)(param_1 + 0x18) = param_2;
  }
  return;
}



//==== FUNC FUN_08007828 @ 08007828 ====

void FUN_08007828(int param_1,uint param_2,byte param_3)

{
  *(uint *)(param_1 + ((int)(param_2 & 0xffff) >> 3) * 4 + 0x20) =
       *(uint *)(param_1 + ((int)(param_2 & 0xffff) >> 3) * 4 + 0x20) &
       ~(0xf << ((param_2 & 7) << 2));
  *(uint *)(param_1 + ((int)(param_2 & 0xffff) >> 3) * 4 + 0x20) =
       *(uint *)(param_1 + ((int)(param_2 & 0xffff) >> 3) * 4 + 0x20) |
       (uint)param_3 << ((param_2 & 7) << 2);
  return;
}



//==== FUNC FUN_08007884 @ 08007884 ====

undefined8 FUN_08007884(byte param_1)

{
  undefined4 *puVar1;
  uint local_18;
  undefined local_14;
  undefined uStack_13;
  undefined local_12;
  undefined local_11;
  
  puVar1 = (undefined4 *)((uint)param_1 * 0xc + DAT_08007904);
  FUN_080075f6(puVar1[2],1);
  local_14 = 1;
  local_12 = 0;
  local_11 = 1;
  local_18 = (uint)*(ushort *)(puVar1 + 1);
  FUN_08007740(*puVar1,&local_18);
  return CONCAT17(local_11,CONCAT16(local_12,CONCAT15(uStack_13,CONCAT14(local_14,local_18))));
}



//==== FUNC FUN_080078bc @ 080078bc ====

void FUN_080078bc(byte param_1)

{
  FUN_0800781a(*(undefined4 *)((uint)param_1 * 0xc + DAT_08007904),
               *(undefined2 *)((uint)param_1 * 0xc + DAT_08007904 + 4),0);
  return;
}



//==== FUNC FUN_080078e0 @ 080078e0 ====

void FUN_080078e0(byte param_1)

{
  FUN_0800781a(*(undefined4 *)((uint)param_1 * 0xc + DAT_08007904),
               *(undefined2 *)((uint)param_1 * 0xc + DAT_08007904 + 4),1);
  return;
}



//==== FUNC FUN_08007908 @ 08007908 ====

undefined4 FUN_08007908(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  if (*param_2 <= *param_1) {
    return 1;
  }
  return 0xffffffff;
}



//==== FUNC FUN_08007934 @ 08007934 ====

undefined4 FUN_08007934(void)

{
  undefined4 unaff_r7;
  
  FUN_0800802c();
  FUN_0800816c(0xf3);
  return unaff_r7;
}



//==== FUNC FUN_08007942 @ 08007942 ====

undefined4 FUN_08007942(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_080079c8(param_1);
    uVar2 = FUN_080079c8(param_2 + param_1 + -1);
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 8) {
      iVar3 = FUN_0800805e(uVar1,2);
      if (iVar3 != 8) {
        return 1;
      }
    }
  }
  return 0;
}



//==== FUNC FUN_0800798a @ 0800798a ====

undefined8 FUN_0800798a(char *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (; (uVar3 < param_3 && (param_1 < (char *)0x8100000)); param_1 = param_1 + 1) {
    iVar1 = FUN_0800811e(param_1,*(undefined *)(uVar3 + param_2));
    if (iVar1 != 8) {
      uVar2 = 1;
      goto LAB_080079c6;
    }
    if (*param_1 != *(char *)(uVar3 + param_2)) {
      uVar2 = 2;
      goto LAB_080079c6;
    }
    uVar3 = uVar3 + 1;
  }
  uVar2 = 0;
LAB_080079c6:
  return CONCAT44(param_4,uVar2);
}



//==== FUNC FUN_080079c8 @ 080079c8 ====

undefined4 FUN_080079c8(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < DAT_08007a9c) && (0x7ffffff < param_1)) {
    uVar1 = 0;
  }
  else if ((param_1 < DAT_08007aa0) && (DAT_08007a9c <= param_1)) {
    uVar1 = 8;
  }
  else if ((param_1 < DAT_08007aa4) && (DAT_08007aa0 <= param_1)) {
    uVar1 = 0x10;
  }
  else if ((param_1 < DAT_08007a98) && (DAT_08007aa4 <= param_1)) {
    uVar1 = 0x18;
  }
  else if ((param_1 < DAT_08007aa8) && (DAT_08007a98 <= param_1)) {
    uVar1 = 0x20;
  }
  else if ((param_1 < DAT_08007aac) && (DAT_08007aa8 <= param_1)) {
    uVar1 = 0x28;
  }
  else if ((param_1 < DAT_08007ab0) && (DAT_08007aac <= param_1)) {
    uVar1 = 0x30;
  }
  else if ((param_1 < DAT_08007ab4) && (DAT_08007ab0 <= param_1)) {
    uVar1 = 0x38;
  }
  else if ((param_1 < DAT_08007ab8) && (DAT_08007ab4 <= param_1)) {
    uVar1 = 0x40;
  }
  else if ((param_1 < DAT_08007abc) && (DAT_08007ab8 <= param_1)) {
    uVar1 = 0x48;
  }
  else if ((param_1 < DAT_08007ac0) && (DAT_08007abc <= param_1)) {
    uVar1 = 0x50;
  }
  else {
    uVar1 = 0x58;
  }
  return uVar1;
}



//==== FUNC FUN_08007ac4 @ 08007ac4 ====

undefined8 FUN_08007ac4(void)

{
  undefined4 local_10;
  undefined local_c;
  undefined local_b;
  undefined local_a;
  undefined local_9;
  
  FUN_08007650(8,1);
  FUN_080075f6(1,1);
  local_10 = 8;
  local_c = 2;
  local_b = 2;
  local_a = 0;
  local_9 = 1;
  FUN_08007740(DAT_08007bbc,&local_10);
  FUN_08007828(DAT_08007bbc,3,2);
  return CONCAT17(local_9,CONCAT16(local_a,CONCAT15(local_b,CONCAT14(local_c,local_10))));
}



//==== FUNC FUN_08007b08 @ 08007b08 ====

void FUN_08007b08(char param_1)

{
  undefined4 local_38;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  short local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_1c;
  undefined2 local_18;
  
  if (param_1 == '\0') {
    FUN_0800b0ce(DAT_08007bc0,0);
    FUN_08007650(1,1);
    local_38 = 8;
    local_34 = 1;
    local_33 = 2;
    local_32 = 0;
    local_31 = 1;
    FUN_08007740(DAT_08007bbc,&local_38);
    FUN_0800781a(DAT_08007bbc,8,1);
  }
  else {
    FUN_08007ac4();
    local_30 = (short)((*DAT_08007bc4 >> 1) / DAT_08007bc8) + -1;
    local_2c = 0xf9;
    local_28 = 0;
    local_2e = 0;
    FUN_0800b044(DAT_08007bc0,&local_30);
    local_24 = 0x60;
    local_22 = 1;
    local_1c = 0x7d;
    local_18 = 2;
    FUN_0800b0ea(DAT_08007bc0,&local_24);
    FUN_0800b170(DAT_08007bc0,8);
    FUN_0800b0b2(DAT_08007bc0,1);
    FUN_0800b0ce(DAT_08007bc0,1);
  }
  return;
}



//==== FUNC FUN_08007bcc @ 08007bcc ====

undefined8 FUN_08007bcc(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uStack_20;
  undefined local_1e;
  undefined uStack_1d;
  short local_1c;
  undefined2 uStack_1a;
  int local_18;
  
  local_1c = (short)param_2;
  uStack_1a = (undefined2)((uint)param_2 >> 0x10);
  uStack_20 = (undefined2)param_1;
  local_1e = (undefined)((uint)param_1 >> 0x10);
  uStack_1d = (undefined)((uint)param_1 >> 0x18);
  local_18 = param_3;
  FUN_08005cce(&uStack_20,&DAT_08007efc,3);
  iVar2 = FUN_08001654(0,&local_1c);
  if (iVar2 == 0) {
    local_1e = 0x15;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
  }
  else if (local_1c == 0xd) {
    local_18 = local_18 + -1;
    iVar2 = FUN_08001970(param_1,&uStack_20,2,&local_18);
    if (iVar2 != 0) {
      uVar1 = CONCAT11(*(undefined *)(param_2 + 1),*(undefined *)(param_2 + 2));
      iVar2 = FUN_08001970(param_1,&uStack_20,uVar1,&local_18);
      if (iVar2 != 0) {
        if (uVar1 < 0x21) {
          param_2 = param_2 + 3;
          uVar3 = FUN_08005014(s_DOWNLOAD_BIN_08007f00);
          if ((uVar1 == uVar3) &&
             (iVar2 = FUN_08005120(param_2,s_DOWNLOAD_BIN_08007f00,uVar1), iVar2 != 0)) {
            iVar2 = FUN_08001970(param_1,&uStack_20,4,&local_18);
            if (iVar2 != 0) {
              *(ushort *)(param_1 + 0x2048) = uVar1;
              FUN_08006026(param_1 + 0x204a,param_2,uVar1);
              *(undefined *)((uint)uVar1 + param_1 + 0x204a) = 0;
              pbVar4 = (byte *)((uint)uVar1 + param_2);
              *(uint *)(param_1 + 0x206a) =
                   (uint)pbVar4[1] << 0x10 | (uint)*pbVar4 << 0x18 | (uint)pbVar4[2] << 8 |
                   (uint)pbVar4[3];
              if (*(uint *)(param_1 + 0x206a) < 0xf0001) {
                FUN_08001920(2);
                FUN_08007934();
                iVar2 = FUN_08007942(DAT_08007ef8,*(undefined4 *)(param_1 + 0x206a));
                if (iVar2 == 0) {
                  *(undefined4 *)(param_1 + 0x206e) = DAT_08007ef8;
                  *(undefined4 *)(param_1 + 0x2094) = 0;
                  local_1e = 0;
                  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
                }
                else {
                  local_1e = 0xd;
                  (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
                }
              }
              else {
                local_1e = 4;
                (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
              }
            }
          }
          else {
            local_1e = 0x16;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 8;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        }
      }
    }
  }
  else {
    local_1e = 0x18;
    (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
  }
  return CONCAT26(uStack_1a,CONCAT24(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20))));
}



//==== FUNC FUN_08007d70 @ 08007d70 ====

undefined8 FUN_08007d70(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uStack_20;
  undefined local_1e;
  undefined uStack_1d;
  int local_1c;
  
  uStack_20 = (undefined2)param_2;
  local_1e = (undefined)((uint)param_2 >> 0x10);
  uStack_1d = (undefined)((uint)param_2 >> 0x18);
  local_1c = param_3;
  FUN_08005cce(&uStack_20,&DAT_08007f10,3);
  local_1c = local_1c + -1;
  iVar1 = FUN_08001970(param_1,&uStack_20,4,&local_1c);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 4) |
            (uint)*(byte *)(param_2 + 2) << 0x10 | (uint)*(byte *)(param_2 + 1) << 0x18 |
            (uint)*(byte *)(param_2 + 3) << 8;
    iVar1 = FUN_08001970(param_1,&uStack_20,2,&local_1c);
    if (iVar1 != 0) {
      uVar3 = (uint)CONCAT11(*(undefined *)(param_2 + 5),*(undefined *)(param_2 + 6));
      iVar1 = FUN_08001970(param_1,&uStack_20,uVar3,&local_1c);
      if (iVar1 != 0) {
        if (uVar2 < *(uint *)(param_1 + 0x206a)) {
          iVar1 = FUN_0800798a(uVar2 + *(int *)(param_1 + 0x206e),param_2 + 7,uVar3);
          if (iVar1 == 0) {
            *(uint *)(param_1 + 0x2094) = uVar3 + *(int *)(param_1 + 0x2094);
            local_1e = 0;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
          else {
            local_1e = 0xe;
            (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
          }
        }
        else {
          local_1e = 0xb;
          (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        }
      }
    }
  }
  return CONCAT44(local_1c,CONCAT13(uStack_1d,CONCAT12(local_1e,uStack_20)));
}



//==== FUNC FUN_08007e50 @ 08007e50 ====

undefined8 FUN_08007e50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uStack_20;
  undefined local_1e;
  undefined5 uStack_1d;
  undefined4 uStack_18;
  
  uStack_18 = param_3;
  FUN_08005cce(&uStack_20,&DAT_08007f14,3);
  iVar1 = FUN_08001970(param_1,&uStack_20,0x21,&uStack_18);
  if (iVar1 != 0) {
    uVar2 = FUN_08003694(*(undefined4 *)(param_1 + 0x206e),*(undefined4 *)(param_1 + 0x206a));
    iVar1 = FUN_08005120(uVar2,param_2 + 1,0x20);
    if (iVar1 == 0) {
      local_1e = 9;
      (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
      FUN_08001920(3);
    }
    else {
      FUN_0800804c();
      iVar1 = FUN_080002e0();
      if (iVar1 == 0) {
        local_1e = 0x17;
        (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        FUN_08001920(5);
      }
      else {
        local_1e = 0;
        (**(code **)(param_1 + 0x20b4))(param_1,&uStack_20,3);
        FUN_08001920(0);
      }
    }
  }
  return CONCAT53(uStack_1d,CONCAT12(local_1e,uStack_20));
}



//==== FUNC FUN_08007f18 @ 08007f18 ====

void FUN_08007f18(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined *)FUN_08003808(DAT_08007f30);
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_08003808(DAT_08007f34);
  *puVar2 = param_1;
  return;
}



//==== FUNC FUN_08007f38 @ 08007f38 ====

ulonglong FUN_08007f38(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 in_r3;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  iVar2 = DAT_08007fe8;
  pcVar4 = (char *)FUN_08003808(DAT_08007fe8);
  piVar5 = (int *)FUN_08003808(iVar2 + 4);
  piVar6 = (int *)FUN_08003808(iVar2 + 8);
  piVar7 = (int *)FUN_08003808(iVar2 + 0xc);
  iVar3 = DAT_08007ff0;
  iVar2 = DAT_08007fec;
  if (*pcVar4 == '\0') {
    iVar8 = 8;
    do {
      *piVar5 = iVar3 * *piVar5 + iVar2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 8;
    piVar9 = piVar7;
    do {
      iVar11 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar11;
      *piVar9 = iVar11;
      iVar11 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar11;
      piVar9[1] = iVar11;
      iVar11 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar11;
      piVar10 = piVar9 + 3;
      piVar9[2] = iVar11;
      iVar11 = iVar3 * *piVar5 + iVar2;
      *piVar5 = iVar11;
      piVar9 = piVar9 + 4;
      *piVar10 = iVar11;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *piVar6 = piVar7[0x1f];
    *pcVar4 = '\x01';
  }
  *piVar5 = iVar3 * *piVar5 + iVar2;
  bVar1 = *(byte *)piVar6;
  *piVar6 = piVar7[bVar1 & 0x1f];
  piVar7[bVar1 & 0x1f] = *piVar5;
  return CONCAT44(in_r3,*piVar6) & 0xffffffff3fffffff;
}



//==== FUNC FUN_0800802c @ 0800802c ====

void FUN_0800802c(void)

{
  if (*DAT_080081b8 < 0) {
    *DAT_080081bc = DAT_080081c0;
    *DAT_080081bc = DAT_080081c4;
  }
  return;
}



//==== FUNC FUN_0800804c @ 0800804c ====

void FUN_0800804c(void)

{
  *DAT_080081b8 = *DAT_080081b8 | 0x80000000;
  return;
}



//==== FUNC FUN_0800805e @ 0800805e ====

undefined8 FUN_0800805e(uint param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else if (param_2 == '\x01') {
    uVar2 = 0x100;
  }
  else if (param_2 == '\x02') {
    uVar2 = 0x200;
  }
  else {
    uVar2 = 0x300;
  }
  cVar1 = FUN_080081cc();
  if (cVar1 == '\b') {
    *DAT_080081b8 = *DAT_080081b8 & 0xfffffcff;
    *DAT_080081b8 = *DAT_080081b8 | uVar2;
    *DAT_080081b8 = *DAT_080081b8 & 0xffffff07;
    *DAT_080081b8 = *DAT_080081b8 | param_1 | 2;
    *DAT_080081b8 = *DAT_080081b8 | 0x10000;
    cVar1 = FUN_080081cc();
    *DAT_080081b8 = *DAT_080081b8 & 0xfffffffd;
    *DAT_080081b8 = *DAT_080081b8 & 0xffffff07;
  }
  return CONCAT44(param_4,(int)cVar1);
}



//==== FUNC FUN_0800811e @ 0800811e ====

int FUN_0800811e(undefined *param_1,undefined param_2)

{
  char cVar1;
  
  cVar1 = FUN_080081cc();
  if (cVar1 == '\b') {
    *DAT_080081b8 = *DAT_080081b8 & 0xfffffcff;
    *DAT_080081b8 = *DAT_080081b8;
    *DAT_080081b8 = *DAT_080081b8 | 1;
    *param_1 = param_2;
    cVar1 = FUN_080081cc();
    *DAT_080081b8 = *DAT_080081b8 & 0xfffffffe;
  }
  return (int)cVar1;
}



//==== FUNC FUN_0800816c @ 0800816c ====

void FUN_0800816c(undefined4 param_1)

{
  *DAT_080081c8 = param_1;
  return;
}



//==== FUNC FUN_08008172 @ 08008172 ====

undefined FUN_08008172(void)

{
  undefined uVar1;
  
  if ((int)(*DAT_080081c8 << 0xf) < 0) {
    uVar1 = 1;
  }
  else if ((int)(*DAT_080081c8 << 0x1b) < 0) {
    uVar1 = 5;
  }
  else if ((*DAT_080081c8 & 0xef) == 0) {
    if ((int)(*DAT_080081c8 << 0x1e) < 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}



//==== FUNC FUN_080081cc @ 080081cc ====

undefined8 FUN_080081cc(void)

{
  undefined uVar1;
  undefined4 unaff_r7;
  undefined3 uVar3;
  undefined4 uVar2;
  
  uVar3 = (undefined3)((uint)unaff_r7 >> 8);
  uVar1 = FUN_08008172();
  for (uVar2 = CONCAT31(uVar3,uVar1); (char)uVar2 == '\x01';
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),uVar1)) {
    uVar1 = FUN_08008172();
  }
  return CONCAT44(uVar2,(int)(char)uVar2);
}



//==== FUNC FUN_080081f4 @ 080081f4 ====

undefined4 FUN_080081f4(byte param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 < 2) {
    puVar2 = *(undefined **)(DAT_08008228 + (uint)param_1 * 4);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
    }
    if (param_2 != (undefined *)0x0) {
      *param_2 = 0;
    }
    *(undefined **)(DAT_08008228 + (uint)param_1 * 4) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xb;
  }
  return uVar1;
}



//==== FUNC FUN_0800822c @ 0800822c ====

undefined4 FUN_0800822c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800380c(param_1,param_2,param_3);
  return param_1;
}



//==== FUNC FUN_08008244 @ 08008244 ====

undefined4 FUN_08008244(undefined4 *param_1)

{
  *param_1 = 5;
  FUN_08002d7c(param_1 + 1);
  return 0;
}



//==== FUNC FUN_08008256 @ 08008256 ====

undefined4 FUN_08008256(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08002d9c(param_1 + 4,param_2,param_3);
  return 0;
}



//==== FUNC FUN_0800826c @ 0800826c ====

undefined4 FUN_0800826c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0x10;
  FUN_08002e12(param_2,param_1 + 4);
  return 0;
}



//==== FUNC FUN_08008284 @ 08008284 ====

void FUN_08008284(undefined4 param_1)

{
  FUN_08008244(param_1);
  return;
}



//==== FUNC FUN_08008290 @ 08008290 ====

void FUN_08008290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08008256(param_1,param_2,param_3);
  return;
}



//==== FUNC FUN_080082a4 @ 080082a4 ====

int FUN_080082a4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_154;
  undefined auStack_150 [4];
  undefined auStack_14c [16];
  undefined auStack_13c [256];
  undefined auStack_3c [36];
  
  if (param_3 < 0x101) {
    iVar1 = FUN_0800826c(param_1,auStack_14c,auStack_150);
    if (iVar1 == 0) {
      FUN_0800833e(auStack_3c,auStack_14c);
      iVar2 = FUN_08003884(auStack_13c,&local_154,param_2,param_3,param_4);
      if (iVar2 == 0) {
        if ((local_154 == 0x22) && (iVar2 = FUN_08003a30(auStack_13c,auStack_3c,0x22), iVar2 == 0))
        {
          FUN_08008244(param_1);
        }
        else {
          iVar1 = 0x40b;
        }
      }
      else {
        iVar1 = 0x40a;
      }
    }
    FUN_08003a00(auStack_14c,0,0x10);
    FUN_08003a00(auStack_3c,0,0x22);
    FUN_08003a00(auStack_13c,0,0x100);
  }
  else {
    iVar1 = 0x406;
  }
  return iVar1;
}



//==== FUNC FUN_0800833e @ 0800833e ====

undefined4 FUN_0800833e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08003a18(param_1,DAT_08008370,0xd);
  *(undefined *)(param_1 + 0xd) = 5;
  FUN_08003a18(param_1 + 0xe,DAT_08008374,4);
  FUN_08003a18(param_1 + 0x12,param_2,0x10);
  return param_4;
}



//==== FUNC FUN_08008378 @ 08008378 ====

void FUN_08008378(char param_1)

{
  *DAT_080083b4 = (int)param_1;
  return;
}



//==== FUNC FUN_08008380 @ 08008380 ====

void FUN_08008380(char param_1)

{
  *DAT_080083bc = (int)param_1;
  return;
}



//==== FUNC FUN_08008388 @ 08008388 ====

bool FUN_08008388(uint param_1)

{
  return (*DAT_080083c0 & param_1) != 0;
}



//==== FUNC FUN_080083a2 @ 080083a2 ====

void FUN_080083a2(int param_1)

{
  *DAT_080083b8 = *DAT_080083b8 | param_1 << 2;
  return;
}



//==== FUNC FUN_080083c4 @ 080083c4 ====

void FUN_080083c4(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08008488;
  if (*(char *)((int)param_1 + 6) == '\0') {
    *(uint *)((int)*(char *)(param_1 + 1) + (int)DAT_08008488) =
         *(uint *)((int)*(char *)(param_1 + 1) + (int)DAT_08008488) & ~*param_1;
  }
  else {
    *DAT_08008488 = *DAT_08008488 & ~*param_1;
    *DAT_0800848c = *DAT_0800848c & ~*param_1;
    *(uint *)((int)*(char *)(param_1 + 1) + (int)puVar1) =
         *(uint *)((int)*(char *)(param_1 + 1) + (int)puVar1) | *param_1;
    *DAT_08008490 = *DAT_08008490 & ~*param_1;
    *DAT_08008494 = *DAT_08008494 & ~*param_1;
    if (*(char *)((int)param_1 + 5) == '\x10') {
      *DAT_08008490 = *DAT_08008490 | *param_1;
      *DAT_08008494 = *DAT_08008494 | *param_1;
    }
    else {
      puVar1 = (uint *)((int)*(char *)((int)param_1 + 5) + (int)DAT_08008488);
      *puVar1 = *puVar1 | *param_1;
    }
  }
  return;
}



//==== FUNC FUN_08008456 @ 08008456 ====

undefined FUN_08008456(uint param_1)

{
  undefined uVar1;
  
  if (((*DAT_08008498 & param_1) == 0) || ((*DAT_08008488 & param_1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800847e @ 0800847e ====

void FUN_0800847e(undefined4 param_1)

{
  *DAT_08008498 = param_1;
  return;
}



//==== FUNC FUN_0800849c @ 0800849c ====

void FUN_0800849c(uint param_1)

{
  *DAT_08008518 = DAT_08008514 | param_1;
  return;
}



//==== FUNC FUN_080084a6 @ 080084a6 ====

void FUN_080084a6(byte *param_1)

{
  uint uVar1;
  
  if (param_1[3] == 0) {
    *(int *)(DAT_08008524 + ((int)(uint)*param_1 >> 5) * 4) = 1 << (*param_1 & 0x1f);
  }
  else {
    uVar1 = 0x700 - (*DAT_08008518 & 0x700) >> 8;
    *(char *)((uint)*param_1 + DAT_0800851c) =
         (char)(((uint)param_1[1] << (4 - uVar1 & 0xff) | (uint)param_1[2] & 0xf >> (uVar1 & 0xff))
               << 4);
    *(int *)(DAT_08008520 + ((int)(uint)*param_1 >> 5) * 4) = 1 << (*param_1 & 0x1f);
  }
  return;
}



//==== FUNC FUN_08008528 @ 08008528 ====

void FUN_08008528(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined auStack_30 [8];
  int local_28;
  int local_24;
  
  *(ushort *)(param_1 + 0x10) = *(ushort *)((int)param_2 + 6) | *(ushort *)(param_1 + 0x10) & 0xcfff
  ;
  *(ushort *)(param_1 + 0xc) =
       *(ushort *)(param_2 + 1) | *(ushort *)(param_2 + 2) | *(ushort *)((int)param_2 + 10) |
       (ushort)DAT_08008620 & *(ushort *)(param_1 + 0xc);
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_2 + 3) | *(ushort *)(param_1 + 0x14) & 0xfcff;
  FUN_080074ba(auStack_30);
  if ((param_1 == DAT_08008618) || (param_1 == DAT_0800861c)) {
    local_28 = local_24;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x10) < 0) {
    uVar2 = (uint)(local_28 * 0x19) / (uint)(*param_2 << 1);
  }
  else {
    uVar2 = (uint)(local_28 * 0x19) / (uint)(*param_2 << 2);
  }
  if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x10) < 0) {
    uVar1 = (ushort)(((uVar2 % 100) * 8 + 0x32) / 100) & 7;
  }
  else {
    uVar1 = (ushort)(((uVar2 % 100) * 0x10 + 0x32) / 100) & 0xf;
  }
  *(ushort *)(param_1 + 8) = uVar1 | (ushort)(uVar2 / 100 << 4);
  return;
}



//==== FUNC FUN_08008624 @ 08008624 ====

void FUN_08008624(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xdfff;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x2000;
  }
  return;
}



//==== FUNC FUN_08008640 @ 08008640 ====

void FUN_08008640(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 4) = param_2 & 0x1ff;
  return;
}



//==== FUNC FUN_08008648 @ 08008648 ====

ushort FUN_08008648(int param_1)

{
  return *(ushort *)(param_1 + 4) & 0x1ff;
}



//==== FUNC FUN_08008650 @ 08008650 ====

void FUN_08008650(int param_1,ushort param_2,char param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  bVar1 = (byte)param_2 >> 5;
  uVar3 = 1 << (param_2 & 0x1f);
  if (bVar1 == 1) {
    puVar2 = (uint *)(param_1 + 0xc);
  }
  else if (bVar1 == 2) {
    puVar2 = (uint *)(param_1 + 0x10);
  }
  else {
    puVar2 = (uint *)(param_1 + 0x14);
  }
  if (param_3 == '\0') {
    *puVar2 = *puVar2 & ~uVar3;
  }
  else {
    *puVar2 = *puVar2 | uVar3;
  }
  return;
}



//==== FUNC FUN_080086a6 @ 080086a6 ====

bool FUN_080086a6(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) != 0;
}



//==== FUNC FUN_080086c6 @ 080086c6 ====

void FUN_080086c6(ushort *param_1,ushort param_2)

{
  *param_1 = ~param_2;
  return;
}



//==== FUNC FUN_080086d2 @ 080086d2 ====

undefined FUN_080086d2(ushort *param_1,ushort param_2)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  
  bVar1 = (byte)param_2 >> 5;
  uVar3 = 1 << (param_2 & 0x1f);
  if (bVar1 == 1) {
    uVar3 = uVar3 & param_1[6];
  }
  else if (bVar1 == 2) {
    uVar3 = uVar3 & param_1[8];
  }
  else {
    uVar3 = uVar3 & param_1[10];
  }
  if ((uVar3 == 0) || ((1 << (uint)(param_2 >> 8) & (uint)*param_1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



//==== FUNC FUN_08008740 @ 08008740 ====

void FUN_08008740(ushort *param_1,ushort param_2)

{
  *param_1 = ~(ushort)(1 << (uint)(param_2 >> 8));
  return;
}



//==== FUNC FUN_08008764 @ 08008764 ====

void FUN_08008764(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    (**DAT_08008924)(DAT_08008920,*(undefined *)(uVar1 + param_1),1);
  }
  return;
}



//==== FUNC sub_08008782 @ 08008782 ====

uint sub_08008782(void)

{
  int iVar1;
  uint unaff_r7;
  
  iVar1 = FUN_08006450(&stack0xfffffff8);
  if (iVar1 != 0) {
    (**DAT_08008924)(DAT_08008920,unaff_r7 & 0xff,2);
  }
  return unaff_r7;
}



//==== FUNC sub_0800879e @ 0800879e ====

undefined4 sub_0800879e(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_0800672e();
  if (iVar1 != 0) {
    (**DAT_08008928)(DAT_08008920);
  }
  return unaff_r7;
}



//==== FUNC sub_080087b2 @ 080087b2 ====

undefined4 sub_080087b2(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_080073e4(0x1000);
  if (iVar1 != 0) {
    FUN_080073c2(0x1000);
  }
  FUN_0800847e(0x20000);
  FUN_080072b2(0x100,0);
  *(undefined *)(DAT_08008920 + 1) = 1;
  return unaff_r7;
}



//==== FUNC sub_080087e2 @ 080087e2 ====

undefined4 sub_080087e2(void)

{
  int iVar1;
  undefined4 unaff_r7;
  
  iVar1 = FUN_08008456(0x200);
  if (iVar1 != 0) {
    (**DAT_0800892c)(DAT_08008920);
    FUN_0800847e(0x200);
  }
  return unaff_r7;
}



//==== FUNC FUN_08008802 @ 08008802 ====

undefined8 FUN_08008802(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_r5;
  undefined local_10;
  undefined local_f;
  undefined local_e;
  undefined local_d;
  undefined4 uVar3;
  
  local_10 = (undefined)unaff_r5;
  local_f = (undefined)((uint)unaff_r5 >> 8);
  local_e = (undefined)((uint)unaff_r5 >> 0x10);
  local_d = (undefined)((uint)unaff_r5 >> 0x18);
  FUN_08003a4c(7,1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(1);
  }
  FUN_080075f6(0x140,1);
  FUN_08007816(DAT_08008930,0x100);
  FUN_08007740(DAT_08008930,&stack0xfffffff4);
  uVar3 = 0x400;
  FUN_08007740(DAT_08008930,&stack0xfffffff4);
  iVar2 = FUN_080077f8(DAT_08008930,0x400);
  if (iVar2 == 0) {
    *(undefined *)(DAT_08008920 + 4) = 1;
  }
  FUN_08003bc8();
  FUN_0800849c(0x600);
  local_10 = 0x43;
  local_f = 0;
  local_e = 0;
  local_d = 1;
  FUN_080084a6(&local_10);
  local_10 = 0x26;
  local_f = 0;
  local_e = 1;
  local_d = 1;
  FUN_080084a6(&local_10);
  local_10 = 0x17;
  local_f = 0;
  local_e = 1;
  local_d = 1;
  FUN_080084a6(&local_10);
  local_10 = 0x37;
  local_f = 1;
  local_e = 5;
  local_d = 1;
  FUN_080084a6(&local_10);
  (**DAT_08008934)(DAT_08008920,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts(0);
  }
  (**DAT_08008938)(DAT_08008920);
  return CONCAT44(uVar3,CONCAT13(local_d,CONCAT12(local_e,CONCAT11(local_f,local_10))));
}



//==== FUNC FUN_08008912 @ 08008912 ====

void FUN_08008912(void)

{
  do {
    (**DAT_0800893c)(DAT_08008920);
  } while( true );
}



//==== FUNC FUN_08008940 @ 08008940 ====

undefined4 FUN_08008940(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_080091a0(param_1,(int)param_2);
  *(undefined *)(param_1 + 0x112) = 1;
  *(undefined *)(param_1 + 0x113) = 0;
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0x28 + param_1;
    *(undefined *)(iVar1 + 0x119) = 1;
    *(char *)(iVar1 + 0x118) = (char)uVar2;
    *(short *)(iVar1 + 0x11e) = (short)uVar2;
    *(undefined *)(iVar1 + 0x11b) = 0;
    *(undefined4 *)(iVar1 + 0x120) = 0x40;
    *(undefined4 *)(iVar1 + 0x124) = 0;
    *(undefined4 *)(iVar1 + 300) = 0;
  }
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0x28 + param_1;
    *(undefined *)(iVar1 + 0x371) = 0;
    *(char *)(iVar1 + 0x370) = (char)uVar2;
    *(short *)(iVar1 + 0x376) = (short)uVar2;
    *(undefined *)(iVar1 + 0x373) = 0;
    *(undefined4 *)(iVar1 + 0x378) = 0x40;
    *(undefined4 *)(iVar1 + 0x37c) = 0;
    *(undefined4 *)(iVar1 + 900) = 0;
  }
  FUN_080093d4(param_1);
  FUN_08009282(param_1);
  FUN_08009484(param_1,0);
  FUN_08009506(param_1);
  FUN_080093b6(param_1);
  return param_4;
}



//==== FUNC FUN_080089e2 @ 080089e2 ====

undefined4 FUN_080089e2(int param_1,byte param_2,uint param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)(uVar2 << 0x18) < 0) {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x118);
  }
  else {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x370);
  }
  *pbVar1 = param_2 & 0x7f;
  pbVar1[1] = param_2 >> 7;
  *(uint *)(pbVar1 + 8) = param_3 & 0xffff;
  pbVar1[3] = param_4;
  if (pbVar1[1] != 0) {
    *(ushort *)(pbVar1 + 6) = (ushort)*pbVar1;
  }
  if (param_4 == 2) {
    pbVar1[4] = 0;
  }
  FUN_0800978a(param_1,pbVar1);
  return 0;
}



//==== FUNC FUN_08008a62 @ 08008a62 ====

undefined4 FUN_08008a62(int param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)(uVar2 << 0x18) < 0) {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x118);
  }
  else {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x370);
  }
  *pbVar1 = param_2 & 0x7f;
  pbVar1[1] = param_2 >> 7;
  FUN_08009804(param_1,pbVar1);
  return 0;
}



//==== FUNC FUN_08008ab0 @ 08008ab0 ====

undefined4 FUN_08008ab0(int param_1,byte param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (param_2 & 0x7f) * 0x28 + param_1;
  pbVar2 = (byte *)(iVar1 + 0x370);
  *(undefined4 *)(iVar1 + 0x37c) = param_3;
  *(uint *)(iVar1 + 900) = param_4 & 0xffff;
  *(undefined4 *)(iVar1 + 0x388) = 0;
  *(undefined *)(iVar1 + 0x371) = 0;
  *pbVar2 = param_2 & 0x7f;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined4 *)(iVar1 + 0x380) = param_3;
  }
  if (*pbVar2 == 0) {
    FUN_080099e8(param_1,pbVar2);
  }
  else {
    FUN_0800985c(param_1,pbVar2);
  }
  return 0;
}



//==== FUNC FUN_08008b16 @ 08008b16 ====

undefined4 FUN_08008b16(int param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (param_2 & 0x7f) * 0x28 + param_1;
  pbVar2 = (byte *)(iVar1 + 0x118);
  *(undefined *)(iVar1 + 0x119) = 1;
  *pbVar2 = param_2 & 0x7f;
  *(undefined4 *)(iVar1 + 0x124) = param_3;
  *(undefined4 *)(iVar1 + 0x128) = param_3;
  *(undefined4 *)(iVar1 + 0x130) = 0;
  *(undefined4 *)(iVar1 + 300) = param_4;
  if (*pbVar2 == 0) {
    FUN_080099e8(param_1,pbVar2);
  }
  else {
    FUN_0800985c(param_1,pbVar2);
  }
  return 0;
}



//==== FUNC FUN_08008b74 @ 08008b74 ====

undefined4 FUN_08008b74(int param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)(uVar2 << 0x18) < 0) {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x118);
  }
  else {
    pbVar1 = (byte *)(uVar2 * 0x28 + param_1 + 0x370);
  }
  pbVar1[2] = 1;
  *pbVar1 = param_2 & 0x7f;
  pbVar1[1] = param_2 >> 7;
  FUN_08009b14(param_1,pbVar1);
  return 0;
}



//==== FUNC FUN_08008bc4 @ 08008bc4 ====

undefined4 FUN_08008bc4(int param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((int)(uVar2 << 0x18) < 0) {
    pbVar1 = (byte *)((uVar2 & 0x7f) * 0x28 + param_1 + 0x118);
  }
  else {
    pbVar1 = (byte *)(uVar2 * 0x28 + param_1 + 0x370);
  }
  pbVar1[2] = 0;
  *pbVar1 = param_2 & 0x7f;
  pbVar1[1] = param_2 >> 7;
  FUN_08009b5c(param_1,pbVar1);
  return 0;
}



//==== FUNC FUN_08008c14 @ 08008c14 ====

void FUN_08008c14(int param_1,byte param_2)

{
  **(uint **)(param_1 + 0x10) = **(uint **)(param_1 + 0x10) | (param_2 & 0x7f) << 4;
  return;
}



//==== FUNC FUN_08008c2e @ 08008c2e ====

undefined4 FUN_08008c2e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(uint *)(*(int *)(param_1 + 0x10) + 4) = *(uint *)(*(int *)(param_1 + 0x10) + 4) | 2;
  FUN_08003d08(3);
  return param_4;
}



//==== FUNC FUN_08008c48 @ 08008c48 ====

void FUN_08008c48(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_08003bdc(param_1,(int)param_2);
  FUN_08008c90(param_1);
  *(undefined4 *)(param_1 + 0x5e0) = param_4;
  *(undefined4 *)(param_1 + 0x5e4) = param_5;
  *(undefined4 *)(param_1 + 0x5e8) = param_3;
  FUN_08008940(param_1,(int)param_2);
  (***(code ***)(param_1 + 0x5e4))();
  FUN_08008e40(param_1);
  return;
}



//==== FUNC FUN_08008c90 @ 08008c90 ====

longlong FUN_08008c90(uint param_1)

{
  return (ulonglong)param_1 << 0x20;
}



//==== FUNC FUN_08008c96 @ 08008c96 ====

longlong FUN_08008c96(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  FUN_08004308(param_1,&local_10);
  if ((local_10 & 0x1f) == 0) {
    FUN_08003d1c(param_1,&local_10);
  }
  else if (((byte)local_10 & 0x1f) == 2) {
    FUN_08003de8(param_1,&local_10);
  }
  else if (((byte)local_10 & 0x1f) < 2) {
    FUN_08003d98(param_1,&local_10);
  }
  else {
    FUN_08008b74(param_1,local_10 & 0x80);
  }
  return (ulonglong)local_10 << 0x20;
}



//==== FUNC FUN_08008ce8 @ 08008ce8 ====

undefined4 FUN_08008ce8(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x111) == '\x03') {
      if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x38c)) {
        *(int *)(param_1 + 0x38c) = *(int *)(param_1 + 0x38c) - *(int *)(param_1 + 0x378);
        if (*(char *)(param_1 + 3) == '\x01') {
          *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x378) + *(int *)(param_1 + 0x37c);
        }
        if (*(uint *)(param_1 + 0x38c) < *(uint *)(param_1 + 0x378)) {
          uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x38c);
        }
        else {
          uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x378);
        }
        FUN_0800b662(param_1,*(undefined4 *)(param_1 + 0x37c),uVar1);
      }
      else {
        if ((*(int *)(*(int *)(param_1 + 0x5e0) + 0x10) != 0) &&
           (*(char *)(param_1 + 0x112) == '\x03')) {
          (**(code **)(*(int *)(param_1 + 0x5e0) + 0x10))(param_1);
        }
        FUN_0800b680(param_1);
      }
    }
  }
  else if ((*(int *)(*(int *)(param_1 + 0x5e0) + 0x18) != 0) &&
          (*(char *)(param_1 + 0x112) == '\x03')) {
    (**(code **)(*(int *)(param_1 + 0x5e0) + 0x18))(param_1,param_2);
  }
  return 0;
}



//==== FUNC FUN_08008d82 @ 08008d82 ====

undefined4 FUN_08008d82(int param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x111) == '\x02') {
      if (*(uint *)(param_1 + 0x120) < *(uint *)(param_1 + 0x134)) {
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 3) == '\x01') {
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x124);
        }
        FUN_0800b614(param_1,*(undefined4 *)(param_1 + 0x124),*(uint *)(param_1 + 0x134) & 0xffff);
      }
      else if (((*(uint *)(param_1 + 0x138) ==
                 *(uint *)(param_1 + 0x120) *
                 (*(uint *)(param_1 + 0x138) / *(uint *)(param_1 + 0x120))) &&
               (*(uint *)(param_1 + 0x120) <= *(uint *)(param_1 + 0x138))) &&
              (*(uint *)(param_1 + 0x138) < *(uint *)(param_1 + 0x13c))) {
        FUN_0800b614(param_1,0,0);
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      else {
        if ((*(int *)(*(int *)(param_1 + 0x5e0) + 0xc) != 0) &&
           (*(char *)(param_1 + 0x112) == '\x03')) {
          (**(code **)(*(int *)(param_1 + 0x5e0) + 0xc))(param_1);
        }
        FUN_0800b6a4(param_1);
      }
    }
  }
  else if ((*(int *)(*(int *)(param_1 + 0x5e0) + 0x14) != 0) &&
          (*(char *)(param_1 + 0x112) == '\x03')) {
    (**(code **)(*(int *)(param_1 + 0x5e0) + 0x14))(param_1,param_2);
  }
  return 0;
}



//==== FUNC FUN_08008e40 @ 08008e40 ====

undefined4 FUN_08008e40(int param_1)

{
  FUN_080089e2(param_1,0,0x40,0);
  FUN_080089e2(param_1,0x80,0x40,0);
  *(undefined *)(param_1 + 0x112) = 1;
  (**(code **)(*(int *)(param_1 + 0x5e4) + 4))(*(undefined *)(param_1 + 2));
  return 0;
}



//==== FUNC FUN_08008e70 @ 08008e70 ====

undefined4 FUN_08008e70(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x5e4) + 0x10))();
  *(undefined *)(param_1 + 0x112) = 3;
  return 0;
}



//==== FUNC FUN_08008e86 @ 08008e86 ====

undefined4 FUN_08008e86(int param_1)

{
  *(undefined *)(param_1 + 0x112) = 4;
  (**(code **)(*(int *)(param_1 + 0x5e4) + 0xc))();
  return 0;
}



//==== FUNC FUN_08008e9c @ 08008e9c ====

undefined4 FUN_08008e9c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x5e0) + 0x1c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x5e0) + 0x1c))(param_1);
  }
  return 0;
}



//==== FUNC FUN_08008eb8 @ 08008eb8 ====

longlong FUN_08008eb8(int param_1,undefined param_2,undefined4 param_3,uint param_4)

{
  (***(code ***)(param_1 + 0x5e0))(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x5e4) + 8))();
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_08008ed8 @ 08008ed8 ====

longlong FUN_08008ed8(int param_1,undefined param_2,undefined4 param_3,uint param_4)

{
  (**(code **)(*(int *)(param_1 + 0x5e0) + 4))(param_1,param_2);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_08008ef0 @ 08008ef0 ====

undefined4 FUN_08008ef0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x5e0) + 0x20))(param_1);
  return 0;
}



//==== FUNC FUN_08008f02 @ 08008f02 ====

undefined4 FUN_08008f02(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x5e0) + 0x24))(param_1);
  return 0;
}



//==== FUNC FUN_08008f14 @ 08008f14 ====

undefined8 FUN_08008f14(void)

{
  undefined4 local_10;
  undefined local_c;
  undefined local_b;
  undefined local_a;
  undefined local_9;
  
  *DAT_08009074 = *DAT_08009074 | 1;
  *DAT_08009078 = 0;
  *DAT_08009074 = *DAT_08009074 & DAT_0800907c;
  *DAT_08009080 = DAT_08009084;
  *DAT_08009074 = *DAT_08009074 & 0xfffbffff;
  *DAT_08009088 = 0;
  *DAT_0800908c = *DAT_0800908c | 0x140;
  FUN_080075f6(0x140,1);
  local_c = 1;
  local_a = 0;
  local_b = 3;
  local_9 = 1;
  local_10 = 0x400;
  FUN_08007812(DAT_08009090,0x400);
  FUN_08007740(DAT_08009090,&local_10);
  local_10 = 0x100;
  FUN_08007816(DAT_08009094,0x100);
  FUN_08007740(DAT_08009094,&local_10);
  FUN_08008fbc();
  *DAT_08009098 = 0x8000000;
  return CONCAT17(local_9,CONCAT16(local_a,CONCAT15(local_b,CONCAT14(local_c,local_10))));
}



//==== FUNC FUN_08008fbc @ 08008fbc ====

void FUN_08008fbc(void)

{
  int local_4;
  
  local_4 = 0;
  *DAT_08009074 = *DAT_08009074 | 0x10000;
  do {
    local_4 = local_4 + 1;
    if ((*DAT_08009074 & 0x20000) != 0) break;
  } while (local_4 != 0x500);
  if ((int)(*DAT_08009074 << 0xe) < 0) {
    *DAT_08009078 = *DAT_08009078;
    *DAT_08009078 = *DAT_08009078 | 0x8000;
    *DAT_08009078 = *DAT_08009078 | 0x1400;
    *DAT_08009080 = DAT_0800909c;
    *DAT_08009074 = *DAT_08009074 | 0x1000000;
    do {
    } while (-1 < (int)(*DAT_08009074 << 6));
    *DAT_080090a0 = 0x703;
    *DAT_08009078 = *DAT_08009078 & 0xfffffffc;
    *DAT_08009078 = *DAT_08009078 | 2;
    do {
    } while ((*DAT_08009078 & 0xc) != 8);
  }
  return;
}



//==== FUNC FUN_080090a4 @ 080090a4 ====

void FUN_080090a4(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0x80000800;
  return;
}



//==== FUNC FUN_080090c6 @ 080090c6 ====

longlong FUN_080090c6(int param_1)

{
  uint uVar1;
  uint local_18;
  
  uVar1 = 0;
  do {
    FUN_08003cf0(3);
    local_18 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
    uVar1 = uVar1 + 1;
    if (DAT_0800947c <= uVar1) goto LAB_0800912a;
  } while (-1 < (int)local_18);
  uVar1 = 0;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x10) = local_18 | 1;
  do {
    local_18 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
    uVar1 = uVar1 + 1;
    if (DAT_0800947c <= uVar1) break;
  } while ((local_18 & 1) != 0);
  FUN_08003cf0(3);
LAB_0800912a:
  return (ulonglong)local_18 << 0x20;
}



//==== FUNC FUN_0800912c @ 0800912c ====

undefined4 FUN_0800912c(int param_1,undefined4 *param_2,byte param_3,ushort param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    puVar2 = *(undefined4 **)(param_1 + (uint)param_3 * 4 + 0xd0);
    for (uVar1 = 0; uVar1 < (param_4 + 3) / 4; uVar1 = uVar1 + 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
    }
  }
  return 0;
}



//==== FUNC FUN_08009174 @ 08009174 ====

void FUN_08009174(int param_1,undefined4 *param_2,ushort param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xd0);
  for (uVar1 = 0; uVar1 < (param_3 + 3) / 4; uVar1 = uVar1 + 1) {
    *param_2 = *puVar2;
    param_2 = param_2 + 1;
  }
  return;
}



//==== FUNC FUN_080091a0 @ 080091a0 ====

undefined4 FUN_080091a0(byte *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  param_1[3] = 0;
  param_1[2] = 1;
  *(undefined2 *)(param_1 + 4) = 0x40;
  iVar1 = DAT_08009480;
  if (param_2 == '\x01') {
    param_1[0xb] = 1;
    *param_1 = 8;
    param_1[1] = 4;
    *(undefined2 *)(param_1 + 6) = 0x140;
    param_1[8] = 2;
    iVar3 = 0x50000000;
  }
  else {
    iVar3 = 0;
    if (param_2 == '\0') {
      param_1[0xb] = 0;
      *param_1 = 0xc;
      param_1[1] = 6;
      *(undefined2 *)(param_1 + 6) = 0x500;
      iVar3 = iVar1;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  *(int *)(param_1 + 0x10) = iVar3 + 0x800;
  for (uVar2 = 0; uVar2 < param_1[1]; uVar2 = uVar2 + 1) {
    *(uint *)(param_1 + uVar2 * 4 + 0x18) = iVar3 + uVar2 * 0x20 + 0x900;
    *(uint *)(param_1 + uVar2 * 4 + 0x54) = iVar3 + uVar2 * 0x20 + 0xb00;
  }
  *(int *)(param_1 + 0x14) = iVar3 + 0x400;
  *(int *)(param_1 + 0xcc) = iVar3 + 0x440;
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    *(uint *)(param_1 + uVar2 * 4 + 0x90) = iVar3 + uVar2 * 0x20 + 0x500;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    *(uint *)(param_1 + uVar2 * 4 + 0xd0) = uVar2 * 0x1000 + iVar3 + 0x1000;
  }
  *(int *)(param_1 + 0x10c) = iVar3 + 0xe00;
  return 0;
}



//==== FUNC FUN_08009282 @ 08009282 ====

longlong FUN_08009282(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x38) & 0xfffeffff;
    if (*(char *)(param_1 + 9) != '\0') {
      uVar1 = uVar1 | 0x100000;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + 0x38) = uVar1;
    *(uint *)(*(int *)(param_1 + 0xc) + 0xc) =
         *(uint *)(*(int *)(param_1 + 0xc) + 0xc) & 0xffb5ff37 | 0x10;
    FUN_080090c6(param_1);
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0x2a;
    }
  }
  else {
    *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = *(uint *)(*(int *)(param_1 + 0xc) + 0xc) | 0x40;
    FUN_080090c6(param_1);
    uVar1 = 0x10000;
    if (*(char *)(param_1 + 8) == '\x03') {
      uVar1 = 0x30000;
    }
    uVar2 = uVar1 | 0x2c0000;
    if (*(char *)(param_1 + 9) != '\0') {
      uVar2 = uVar1 | 0x3c0000;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + 0x38) = uVar2;
    FUN_08003d08(0x14);
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0xc);
    if (*(char *)(param_1 + 8) == '\x03') {
      uVar1 = uVar1 | 0x10000;
    }
    *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = uVar1;
    if (*(char *)(param_1 + 8) == '\x03') {
      uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x30) & 0xf300ffff;
      *(uint *)(*(int *)(param_1 + 0xc) + 0x30) = uVar1 | 0x142d0000;
      FUN_08003d08(200);
      *(uint *)(*(int *)(param_1 + 0xc) + 0x30) = uVar1 | 0x14ad0000;
      FUN_08003d08(200);
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint *)(*(int *)(param_1 + 0xc) + 8) =
         *(uint *)(*(int *)(param_1 + 0xc) + 8) & 0xffffffe1 | 0x2a;
  }
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_080093b6 @ 080093b6 ====

undefined4 FUN_080093b6(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0xc) + 8) = *(uint *)(*(int *)(param_1 + 0xc) + 8) | 1;
  return 0;
}



//==== FUNC FUN_080093d4 @ 080093d4 ====

undefined4 FUN_080093d4(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0xc) + 8) = *(uint *)(*(int *)(param_1 + 0xc) + 8) & 0xfffffffe;
  return 0;
}



//==== FUNC FUN_080093f2 @ 080093f2 ====

longlong FUN_080093f2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x10) = (param_2 & 0x1f) << 6 | 0x20;
  do {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
    uVar2 = uVar2 + 1;
    if (DAT_0800947c <= uVar2) break;
  } while ((int)(uVar1 << 0x1a) < 0);
  FUN_08003cf0(3);
  return (ulonglong)uVar1 << 0x20;
}



//==== FUNC FUN_0800943a @ 0800943a ====

longlong FUN_0800943a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = 0x10;
  do {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
    uVar2 = uVar2 + 1;
    if (DAT_0800947c <= uVar2) break;
  } while ((int)(uVar1 << 0x1b) < 0);
  FUN_08003cf0(3);
  return (ulonglong)uVar1 << 0x20;
}



//==== FUNC FUN_08009484 @ 08009484 ====

longlong FUN_08009484(int param_1,char param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0xc) & 0x9fffffff;
  if (param_2 == '\x01') {
    uVar1 = uVar1 | 0x20000000;
  }
  else if (param_2 == '\0') {
    uVar1 = uVar1 | 0x40000000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = uVar1;
  FUN_08003d08(0x32);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_080094c0 @ 080094c0 ====

uint FUN_080094c0(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x14) & 1;
}



//==== FUNC FUN_080094ca @ 080094ca ====

bool FUN_080094ca(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_080094c0(param_1);
  return iVar1 != 1;
}



//==== FUNC FUN_080094e2 @ 080094e2 ====

uint FUN_080094e2(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xc) + 0x14) & *(uint *)(*(int *)(param_1 + 0xc) + 0x18);
}



//==== FUNC FUN_080094f4 @ 080094f4 ====

void FUN_080094f4(int param_1,byte param_2)

{
  **(uint **)(param_1 + 0x10) = **(uint **)(param_1 + 0x10) & 0xfffffffc | param_2 & 3;
  return;
}



//==== FUNC FUN_08009506 @ 08009506 ====

longlong FUN_08009506(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  **(undefined4 **)(param_1 + 0x10c) = 0;
  **(uint **)(param_1 + 0x10) = **(uint **)(param_1 + 0x10) & 0xffffe7ff;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    FUN_080094f4(param_1,3);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24) = 0x80;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28) = 0x200080;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x104) = 0x8000a0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x108) = 0x200120;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10c) = 0x140;
  }
  FUN_080093f2(param_1,0x10);
  FUN_0800943a(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c) = 0;
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
    if (**(int **)(param_1 + uVar2 * 4 + 0x18) < 0) {
      uVar1 = 0x48000000;
    }
    else {
      uVar1 = 0;
    }
    **(undefined4 **)(param_1 + uVar2 * 4 + 0x18) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + uVar2 * 4 + 0x18) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + uVar2 * 4 + 0x18) + 8) = 0xff;
  }
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
    if (**(int **)(param_1 + uVar2 * 4 + 0x54) < 0) {
      uVar1 = 0x48000000;
    }
    else {
      uVar1 = 0;
    }
    **(undefined4 **)(param_1 + uVar2 * 4 + 0x54) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + uVar2 * 4 + 0x54) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + uVar2 * 4 + 0x54) + 8) = 0xff;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x10) =
       *(uint *)(*(int *)(param_1 + 0x10) + 0x10) & 0xfffffeff | 0x100;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30) = 0x810103;
  }
  FUN_080096aa(param_1);
  return ((ulonglong)param_4 & 0xffffff00) << 0x20;
}



//==== FUNC FUN_080096aa @ 080096aa ====

undefined4 FUN_080096aa(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0xffffffff;
  FUN_080090a4(param_1);
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = 0x10;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x18) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x18) & ~(uVar1 | 0x3c3808) | uVar1 | 0x3c3808;
  return 0;
}



//==== FUNC FUN_08009704 @ 08009704 ====

undefined FUN_08009704(int param_1)

{
  undefined uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 8) >> 1 & 3;
  if (uVar2 == 0) {
    uVar1 = 3;
  }
  else if (uVar2 == 2) {
    uVar1 = 1;
  }
  else if ((uVar2 < 2) || (uVar2 == 3)) {
    uVar1 = 2;
  }
  return uVar1;
}



//==== FUNC FUN_08009738 @ 08009738 ====

undefined4 FUN_08009738(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = **(uint **)(param_1 + 0x18);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 8) >> 1 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar1 = uVar1 & 0xfffff800 | 3;
      goto LAB_0800976e;
    }
    if ((1 < uVar2) && (uVar2 != 3)) goto LAB_0800976e;
  }
  uVar1 = uVar1 & 0xfffff800;
LAB_0800976e:
  **(uint **)(param_1 + 0x18) = uVar1;
  *(uint *)(*(int *)(param_1 + 0x10) + 4) =
       *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfffffeff | 0x100;
  return 0;
}



//==== FUNC FUN_0800978a @ 0800978a ====

undefined4 FUN_0800978a(int param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2[1] == 1) {
    puVar2 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x18);
    uVar1 = 1 << (uint)*param_2 & 0xffff;
  }
  else {
    puVar2 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x54);
    uVar1 = (1 << (uint)*param_2) << 0x10;
  }
  if (-1 < (int)(*puVar2 << 0x10)) {
    *puVar2 = *puVar2 & 0xfc33f800 | *(uint *)(param_2 + 8) & 0x7ff | (param_2[3] & 3) << 0x12 |
              (*(ushort *)(param_2 + 6) & 0xf) << 0x16 | 0x10008000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) = *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) | uVar1;
  return 0;
}



//==== FUNC FUN_08009804 @ 08009804 ====

undefined4 FUN_08009804(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2[1] == 1) {
    puVar2 = *(undefined4 **)(param_1 + (uint)*param_2 * 4 + 0x18);
    uVar1 = 1 << (uint)*param_2 & 0xffff;
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + (uint)*param_2 * 4 + 0x54);
    uVar1 = (1 << (uint)*param_2) << 0x10;
  }
  *puVar2 = 0;
  *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) = *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) & ~uVar1;
  return 0;
}



//==== FUNC FUN_0800985c @ 0800985c ====

undefined4 FUN_0800985c(int param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2[1] == 1) {
    uVar2 = **(uint **)(param_1 + (uint)*param_2 * 4 + 0x18);
    uVar3 = *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x18) + 0x10);
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar4 = uVar3 & 0xe0000000 | 0x80000;
    }
    else {
      uVar1 = (((*(int *)(param_2 + 8) + *(int *)(param_2 + 0x14)) - 1U) / *(uint *)(param_2 + 8) &
              0x3ff) << 0x13;
      uVar4 = uVar3 & 0xe0000000 | *(uint *)(param_2 + 0x14) & 0x7ffff | uVar1;
      if (param_2[3] == 1) {
        uVar4 = uVar3 & 0x80000000 | *(uint *)(param_2 + 0x14) & 0x7ffff | uVar1 | 0x20000000;
      }
    }
    *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x18) + 0x10) = uVar4;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x18) + 0x14) =
           *(undefined4 *)(param_2 + 0x10);
    }
    else if ((param_2[3] != 1) && (*(int *)(param_2 + 0x14) != 0)) {
      *(uint *)(*(int *)(param_1 + 0x10) + 0x34) =
           1 << (uint)*param_2 | *(uint *)(*(int *)(param_1 + 0x10) + 0x34);
    }
    if (param_2[3] == 1) {
      if (*(int *)(*(int *)(param_1 + 0x10) + 8) << 0x17 < 0) {
        uVar2 = uVar2 | 0x10000000;
      }
      else {
        uVar2 = uVar2 | 0x20000000;
      }
    }
    **(uint **)(param_1 + (uint)*param_2 * 4 + 0x18) = uVar2 | 0x84000000;
    if (param_2[3] == 1) {
      FUN_0800912c(param_1,*(undefined4 *)(param_2 + 0xc),*param_2,
                   *(uint *)(param_2 + 0x14) & 0xffff);
    }
  }
  else {
    uVar2 = **(uint **)(param_1 + (uint)*param_2 * 4 + 0x54);
    uVar3 = *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x10);
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar3 = uVar3 & 0xe0000000 | *(uint *)(param_2 + 8) & 0x7ffff | 0x80000;
    }
    else {
      uVar1 = ((*(int *)(param_2 + 8) + *(int *)(param_2 + 0x14)) - 1U) / *(uint *)(param_2 + 8) &
              0x3ff;
      uVar3 = uVar3 & 0xe0000000 | uVar1 << 0x13 | *(int *)(param_2 + 8) * uVar1 & 0x7ffff;
    }
    *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x10) = uVar3;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x14) =
           *(undefined4 *)(param_2 + 0x10);
    }
    if (param_2[3] == 1) {
      if (param_2[5] == 0) {
        uVar2 = uVar2 | 0x10000000;
      }
      else {
        uVar2 = uVar2 | 0x20000000;
      }
    }
    **(uint **)(param_1 + (uint)*param_2 * 4 + 0x54) = uVar2 | 0x84000000;
  }
  return 0;
}



//==== FUNC FUN_080099e8 @ 080099e8 ====

longlong FUN_080099e8(int param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_18;
  
  if (param_2[1] == 1) {
    puVar1 = *(uint **)(param_1 + 0x18);
    uVar2 = *puVar1;
    local_18 = puVar1[4];
    if (*(int *)(param_2 + 0x14) == 0) {
      local_18 = local_18 & 0xffe7ff80;
    }
    else {
      if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0x14)) {
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 8);
        local_18 = local_18 & 0xffffff80 | *(uint *)(param_2 + 8) & 0x7f;
      }
      else {
        local_18 = local_18 & 0xffffff80 | *(uint *)(param_2 + 0x14) & 0x7f;
      }
      local_18 = local_18 & 0xffe7ffff;
    }
    local_18 = local_18 | 0x80000;
    puVar1[4] = local_18;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x18) + 0x14) =
           *(undefined4 *)(param_2 + 0x10);
    }
    *puVar1 = uVar2 | 0x84000000;
    if ((*(char *)(param_1 + 3) == '\0') && (*(int *)(param_2 + 0x14) != 0)) {
      *(uint *)(*(int *)(param_1 + 0x10) + 0x34) =
           *(uint *)(*(int *)(param_1 + 0x10) + 0x34) | 1 << (uint)*param_2;
    }
  }
  else {
    uVar2 = **(uint **)(param_1 + (uint)*param_2 * 4 + 0x54);
    uVar3 = *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x10);
    if (*(int *)(param_2 + 0x14) == 0) {
      local_18 = uVar3 & 0xffe7ff80 | *(uint *)(param_2 + 8) & 0x7f;
    }
    else {
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 8);
      local_18 = uVar3 & 0xffe7ff80 | *(uint *)(param_2 + 8) & 0x7f;
    }
    local_18 = local_18 | 0x80000;
    *(uint *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x10) = local_18;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + (uint)*param_2 * 4 + 0x54) + 0x14) =
           *(undefined4 *)(param_2 + 0x10);
    }
    **(uint **)(param_1 + (uint)*param_2 * 4 + 0x54) = uVar2 | 0x84000000;
  }
  return (ulonglong)local_18 << 0x20;
}



//==== FUNC FUN_08009b14 @ 08009b14 ====

undefined4 FUN_08009b14(int param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2[1] == 1) {
    puVar1 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x18);
    uVar2 = *puVar1;
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 | 0x40000000;
    }
    *puVar1 = uVar2 | 0x200000;
  }
  else {
    puVar1 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x54);
    *puVar1 = *puVar1 | 0x200000;
  }
  return 0;
}



//==== FUNC FUN_08009b5c @ 08009b5c ====

undefined4 FUN_08009b5c(int param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2[1] == 1) {
    puVar2 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x18);
  }
  else {
    puVar2 = *(uint **)(param_1 + (uint)*param_2 * 4 + 0x54);
  }
  uVar1 = *puVar2 & 0xffdfffff;
  if ((param_2[3] == 3) || (param_2[3] == 2)) {
    uVar1 = uVar1 | 0x10000000;
  }
  *puVar2 = uVar1;
  return 0;
}



//==== FUNC FUN_08009ba2 @ 08009ba2 ====

uint FUN_08009ba2(int param_1)

{
  return (*(uint *)(*(int *)(param_1 + 0x10) + 0x18) & *(uint *)(*(int *)(param_1 + 0x10) + 0x1c))
         >> 0x10;
}



//==== FUNC FUN_08009bb4 @ 08009bb4 ====

uint FUN_08009bb4(int param_1,byte param_2)

{
  return *(uint *)(*(int *)(param_1 + (uint)param_2 * 4 + 0x54) + 8) &
         *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
}



//==== FUNC FUN_08009bca @ 08009bca ====

uint FUN_08009bca(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x10) + 0x18) & *(uint *)(*(int *)(param_1 + 0x10) + 0x1c) &
         0xffff;
}



//==== FUNC FUN_08009bdc @ 08009bdc ====

void FUN_08009bdc(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10) = 0xc0080018;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_1 + 0x5c8;
    **(undefined4 **)(param_1 + 0x54) = 0x80008000;
  }
  return;
}



//==== FUNC FUN_08009c2e @ 08009c2e ====

void FUN_08009c2e(int param_1)

{
  if ((*(char *)(param_1 + 10) != '\0') && ((*(uint *)(*(int *)(param_1 + 0x10) + 8) & 1) != 0)) {
    **(uint **)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffc;
  }
  return;
}



//==== FUNC FUN_08009c5c @ 08009c5c ====

uint FUN_08009c5c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_080094ca(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_080094e2(param_1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (iVar1 << 0xc < 0) {
        uVar3 = FUN_08009f3c(param_1);
      }
      if (iVar1 << 0xd < 0) {
        uVar2 = FUN_08009dfe(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x1e < 0) {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 2;
      }
      if (iVar1 < 0) {
        uVar2 = FUN_08009d44(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x14 < 0) {
        uVar2 = FUN_08009d90(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x1c < 0) {
        uVar2 = FUN_0800a034(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x1b < 0) {
        uVar2 = FUN_0800a052(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x13 < 0) {
        uVar2 = FUN_0800a196(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0x12 < 0) {
        uVar2 = FUN_0800a268(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 0xb < 0) {
        uVar2 = FUN_0800a2b6(param_1);
        uVar3 = uVar2 | uVar3;
      }
      if (iVar1 << 10 < 0) {
        uVar2 = FUN_0800a2d4(param_1);
        uVar3 = uVar2 | uVar3;
      }
    }
  }
  return uVar3;
}



//==== FUNC FUN_08009d44 @ 08009d44 ====

undefined8 FUN_08009d44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 10) != '\0') {
    **(uint **)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffc;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 4) = *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfffffffe;
  (**(code **)(*DAT_0800a2f4 + 0x18))(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x80000000;
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_08009d90 @ 08009d90 ====

undefined8 FUN_08009d90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  (**(code **)(*DAT_0800a2f4 + 0x14))(param_1);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x800;
  if ((*(char *)(param_1 + 10) != '\0') && ((uVar1 & 1) != 0)) {
    **(uint **)(param_1 + 0x10c) = **(uint **)(param_1 + 0x10c) | 1;
    **(uint **)(param_1 + 0x10c) = **(uint **)(param_1 + 0x10c) | 3;
    *DAT_0800a2f8 = *DAT_0800a2f8 | 6;
  }
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_08009dfe @ 08009dfe ====

undefined4 FUN_08009dfe(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar1 = FUN_08009bca(param_1); uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((int)(uVar1 << 0x1f) < 0) {
      uVar2 = FUN_0800a2fc(param_1,uVar3 & 0xff);
      if ((uVar2 & 1) != 0) {
        *(uint *)(*(int *)(param_1 + 0x10) + 0x34) =
             *(uint *)(*(int *)(param_1 + 0x10) + 0x34) & ~(1 << (uVar3 & 0xff));
        uVar2 = 1;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 1;
        (**(code **)(*DAT_0800a2f4 + 4))(param_1,uVar3 & 0xff);
        if (((*(char *)(param_1 + 3) == '\x01') && (uVar3 == 0)) &&
           (*(char *)(param_1 + 0x111) == '\x04')) {
          FUN_08009bdc(param_1);
        }
      }
      if ((int)(uVar2 << 0x1d) < 0) {
        uVar2 = 4;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 4;
      }
      if ((int)(uVar2 << 0x1c) < 0) {
        uVar2 = 8;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 8;
      }
      if ((int)(uVar2 << 0x1b) < 0) {
        uVar2 = 0x10;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 0x10;
      }
      if ((int)(uVar2 << 0x1a) < 0) {
        uVar2 = 0x20;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 0x20;
      }
      if ((int)(uVar2 << 0x19) < 0) {
        uVar2 = 0x40;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 0x40;
      }
      if ((int)(uVar2 << 0x1e) < 0) {
        uVar2 = 2;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 2;
      }
      if ((int)(uVar2 << 0x18) < 0) {
        FUN_0800a0f6(param_1,uVar3);
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x18) + 8) = 0x80;
      }
    }
    uVar3 = uVar3 + 1;
  }
  return 1;
}



//==== FUNC FUN_08009f3c @ 08009f3c ====

undefined4 FUN_08009f3c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar1 = FUN_08009ba2(param_1); uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((int)(uVar1 << 0x1f) < 0) {
      uVar2 = FUN_08009bb4(param_1,uVar3 & 0xff);
      if ((uVar2 & 1) != 0) {
        uVar2 = 1;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x54) + 8) = 1;
        if (*(char *)(param_1 + 3) == '\x01') {
          *(uint *)(uVar3 * 0x28 + param_1 + 0x388) =
               *(int *)(uVar3 * 0x28 + param_1 + 0x378) -
               (*(uint *)(*(int *)(param_1 + uVar3 * 4 + 0x54) + 0x10) & 0x7ffff);
        }
        (**(code **)*DAT_0800a2f4)(param_1,uVar3 & 0xff);
        if (((*(char *)(param_1 + 3) == '\x01') && (uVar3 == 0)) &&
           (*(char *)(param_1 + 0x111) == '\x05')) {
          FUN_08009bdc(param_1);
        }
      }
      if ((int)(uVar2 << 0x1e) < 0) {
        uVar2 = 2;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x54) + 8) = 2;
      }
      if ((int)(uVar2 << 0x1d) < 0) {
        uVar2 = 4;
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x54) + 8) = 4;
      }
      if ((int)(uVar2 << 0x1c) < 0) {
        (**(code **)(*DAT_0800a2f4 + 8))(param_1);
        *(undefined4 *)(*(int *)(param_1 + uVar3 * 4 + 0x54) + 8) = 8;
      }
    }
    uVar3 = uVar3 + 1;
  }
  return 1;
}



//==== FUNC FUN_0800a034 @ 0800a034 ====

undefined8 FUN_0800a034(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_0800a2f4 + 0xc))(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 8;
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a052 @ 0800a052 ====

undefined8 FUN_0800a052(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(uint *)(*(int *)(param_1 + 0xc) + 0x18) = *(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0xffffffef
  ;
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x20);
  iVar2 = (uVar1 & 0xf) * 0x28 + param_1;
  uVar3 = uVar1 >> 0x11 & 0xf;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      if ((uVar1 >> 4 & 0x7ff) != 0) {
        FUN_08009174(param_1,*(undefined4 *)(iVar2 + 0x37c),(uVar1 << 0x11) >> 0x15);
        *(uint *)(iVar2 + 0x37c) = ((uVar1 << 0x11) >> 0x15) + *(int *)(iVar2 + 0x37c);
        *(uint *)(iVar2 + 0x388) = ((uVar1 << 0x11) >> 0x15) + *(int *)(iVar2 + 0x388);
      }
    }
    else if (((uVar3 != 3) && (uVar3 != 4)) && (uVar3 == 6)) {
      FUN_08009174(param_1,param_1 + 0x5c8,8);
      *(uint *)(iVar2 + 0x388) = ((uVar1 << 0x11) >> 0x15) + *(int *)(iVar2 + 0x388);
    }
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x18) = *(uint *)(*(int *)(param_1 + 0xc) + 0x18) | 0x10;
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a0f6 @ 0800a0f6 ====

undefined8 FUN_0800a0f6(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_2 * 0x28 + param_1;
  uVar2 = *(int *)(iVar1 + 300) - *(int *)(iVar1 + 0x130);
  if (*(uint *)(iVar1 + 0x120) < uVar2) {
    uVar2 = *(uint *)(iVar1 + 0x120);
  }
  uVar3 = *(uint *)(*(int *)(param_1 + param_2 * 4 + 0x18) + 0x18);
  while (((uVar2 + 3 >> 2 < (uVar3 & 0xffff) && (*(uint *)(iVar1 + 0x130) < *(uint *)(iVar1 + 300)))
         && (*(int *)(iVar1 + 300) != 0))) {
    uVar2 = *(int *)(iVar1 + 300) - *(int *)(iVar1 + 0x130);
    if (*(uint *)(iVar1 + 0x120) < uVar2) {
      uVar2 = *(uint *)(iVar1 + 0x120);
    }
    FUN_0800912c(param_1,*(undefined4 *)(iVar1 + 0x124),param_2 & 0xff,uVar2 & 0xffff);
    *(uint *)(iVar1 + 0x124) = uVar2 + *(int *)(iVar1 + 0x124);
    *(uint *)(iVar1 + 0x130) = uVar2 + *(int *)(iVar1 + 0x130);
    uVar3 = *(uint *)(*(int *)(param_1 + param_2 * 4 + 0x18) + 0x18);
  }
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a196 @ 0800a196 ====

undefined8 FUN_0800a196(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *(uint *)(*(int *)(param_1 + 0x10) + 4) = *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfffffffe;
  FUN_080093f2(param_1,0);
  for (uVar1 = 0; uVar1 < *(byte *)(param_1 + 1); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)(param_1 + uVar1 * 4 + 0x18) + 8) = 0xff;
    *(undefined4 *)(*(int *)(param_1 + uVar1 * 4 + 0x54) + 8) = 0xff;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c) = 0x10001;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0xf;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0x2f;
  **(uint **)(param_1 + 0x10) = **(uint **)(param_1 + 0x10) & 0xfffff80f;
  FUN_08009bdc(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x1000;
  (**(code **)(*DAT_0800a2f4 + 0x10))(param_1);
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a268 @ 0800a268 ====

undefined4 FUN_0800a268(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_08009738(param_1);
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0xc);
  iVar2 = FUN_08009704(param_1);
  if (iVar2 == 3) {
    *(undefined *)(param_1 + 2) = 0;
    *(undefined2 *)(param_1 + 4) = 0x200;
    uVar1 = uVar1 & 0xffffc3ff | 0x2400;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined2 *)(param_1 + 4) = 0x40;
    uVar1 = uVar1 & 0xffffc3ff | 0x1400;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0xc) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x2000;
  return 1;
}



//==== FUNC FUN_0800a2b6 @ 0800a2b6 ====

undefined8 FUN_0800a2b6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_0800a2f4 + 0x1c))(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x100000;
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a2d4 @ 0800a2d4 ====

undefined8 FUN_0800a2d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*DAT_0800a2f4 + 0x20))(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x200000;
  return CONCAT44(param_4,1);
}



//==== FUNC FUN_0800a2fc @ 0800a2fc ====

uint FUN_0800a2fc(int param_1,byte param_2)

{
  return *(uint *)(*(int *)(param_1 + (uint)param_2 * 4 + 0x18) + 8) &
         (*(uint *)(*(int *)(param_1 + 0x10) + 0x10) |
         (*(uint *)(*(int *)(param_1 + 0x10) + 0x34) >> (uint)param_2 & 1) << 7);
}



//==== FUNC FUN_0800a32c @ 0800a32c ====

int FUN_0800a32c(code *param_1,int param_2,byte *param_3,uint **param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte **ppbVar4;
  int **ppiVar5;
  uint *puVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint local_a8;
  uint uStack_a4;
  code *local_a0;
  int local_9c;
  byte *local_98;
  byte *local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  ushort local_6c;
  char local_6a;
  undefined local_68 [4];
  byte abStack_64 [64];
  
  local_78 = 0;
  local_a0 = param_1;
  local_9c = param_2;
  do {
    while( true ) {
      if (*param_3 == 0) {
        return local_78;
      }
      if (*param_3 == 0x25) break;
      local_9c = (*local_a0)(local_9c,*param_3);
      if (local_9c == 0) {
        return -1;
      }
      local_78 = local_78 + 1;
      param_3 = param_3 + 1;
    }
    local_6c = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar8 = param_3 + 1;
              bVar3 = *pbVar8;
              if (bVar3 != 0x20) break;
              local_6c = local_6c | 1;
              param_3 = pbVar8;
            }
            if (bVar3 != 0x23) break;
            local_6c = local_6c | 8;
            param_3 = pbVar8;
          }
          if (bVar3 != 0x2b) break;
          local_6c = local_6c | 2;
          param_3 = pbVar8;
        }
        if (bVar3 != 0x2d) break;
        local_6c = local_6c | 4;
        param_3 = pbVar8;
      }
      if (bVar3 != 0x30) break;
      local_6c = local_6c | 0x10;
      param_3 = pbVar8;
    }
    if (bVar3 == 0x2a) {
      puVar6 = *param_4;
      *param_4 = puVar6 + 1;
      local_70 = *puVar6;
      if ((int)local_70 < 0) {
        local_70 = -local_70;
        local_6c = local_6c | 4;
      }
      pbVar8 = param_3 + 2;
    }
    else {
      local_70 = 0;
      while ((*pbVar8 - 0x30 & 0xff) < 10) {
        if (local_70 != 0x7fffffff) {
          local_70 = (local_70 * 10 + (uint)*pbVar8) - 0x30;
        }
        pbVar8 = pbVar8 + 1;
      }
    }
    if (*pbVar8 == 0x2e) {
      pbVar9 = pbVar8 + 1;
      if (*pbVar9 == 0x2a) {
        puVar6 = *param_4;
        *param_4 = puVar6 + 1;
        local_74 = *puVar6;
        pbVar9 = pbVar8 + 2;
      }
      else {
        local_74 = 0;
        while ((*pbVar9 - 0x30 & 0xff) < 10) {
          if (local_74 != 0x7fffffff) {
            local_74 = (local_74 * 10 + (uint)*pbVar9) - 0x30;
          }
          pbVar9 = pbVar9 + 1;
        }
      }
    }
    else {
      local_74 = 0xffffffff;
      pbVar9 = pbVar8;
    }
    uVar1 = FUN_0800b6c8(s_hjltzL_0800b028,*pbVar9);
    iVar10 = local_90;
    param_3 = pbVar9;
    if (uVar1 != 0) {
      param_3 = pbVar9 + 1;
      uVar1 = (uint)*pbVar9;
    }
    local_6a = (char)uVar1;
    if ((uVar1 & 0xff) == 0x68) {
      if (*param_3 == 0x68) {
        local_6a = 'b';
LAB_0800a47c:
        param_3 = param_3 + 1;
      }
    }
    else if (((uVar1 & 0xff) == 0x6c) && (*param_3 == 0x6c)) {
      local_6a = 'q';
      goto LAB_0800a47c;
    }
    local_94 = abStack_64;
    bVar3 = *param_3;
    uVar1 = (uint)bVar3;
    if (uVar1 == 0x25) {
      bVar3 = 0x25;
LAB_0800a4e2:
      local_90 = local_90 + 1;
      abStack_64[iVar10] = bVar3;
      iVar10 = local_90;
      goto LAB_0800a738;
    }
    if ((uVar1 == 0x41) || (uVar1 - 0x45 < 3)) {
LAB_0800a582:
      puVar6 = (uint *)((int)*param_4 + 7U & 0xfffffff8);
      *param_4 = puVar6;
      *param_4 = puVar6 + 2;
      local_a8 = *puVar6;
      uStack_a4 = puVar6[1];
      if ((int)uStack_a4 < 0) {
        bVar3 = 0x2d;
LAB_0800a5c6:
        local_90 = local_90 + 1;
        abStack_64[iVar10] = bVar3;
      }
      else {
        if ((int)((uint)local_6c << 0x1e) < 0) {
          bVar3 = 0x2b;
          goto LAB_0800a5c6;
        }
        if ((int)((uint)local_6c << 0x1f) < 0) {
          bVar3 = 0x20;
          goto LAB_0800a5c6;
        }
      }
      local_98 = abStack_64 + local_90;
      FUN_0800a976(&local_a8,uVar1);
      iVar10 = local_90;
    }
    else {
      if (uVar1 == 0x58) goto LAB_0800a5da;
      if (uVar1 == 0x61) goto LAB_0800a582;
      if (uVar1 == 99) {
        puVar6 = *param_4;
        *param_4 = puVar6 + 1;
        bVar3 = (byte)*puVar6;
        goto LAB_0800a4e2;
      }
      if (uVar1 == 100) {
LAB_0800a66c:
        if (local_6a == 'b') {
          puVar6 = *param_4;
          *param_4 = puVar6 + 1;
          local_a8 = (uint)*(char *)puVar6;
LAB_0800a6d2:
          uStack_a4 = (int)local_a8 >> 0x1f;
        }
        else {
          if (local_6a == 'h') {
            puVar6 = *param_4;
            *param_4 = puVar6 + 1;
            local_a8 = (uint)*(short *)puVar6;
            goto LAB_0800a6d2;
          }
          if (local_6a == 'j') {
LAB_0800a6b2:
            puVar6 = (uint *)((int)*param_4 + 7U & 0xfffffff8);
            *param_4 = puVar6;
            *param_4 = puVar6 + 2;
            local_a8 = *puVar6;
            uStack_a4 = puVar6[1];
          }
          else {
            if (local_6a == 'l') {
LAB_0800a6ca:
              puVar6 = *param_4;
              *param_4 = puVar6 + 1;
              local_a8 = *puVar6;
              goto LAB_0800a6d2;
            }
            if (local_6a == 'q') goto LAB_0800a6b2;
            if ((local_6a == 't') || (local_6a != 'z')) goto LAB_0800a6ca;
            puVar6 = *param_4;
            *param_4 = puVar6 + 1;
            local_a8 = *puVar6;
            uStack_a4 = 0;
          }
        }
        if ((int)uStack_a4 < 0) {
          bVar3 = 0x2d;
LAB_0800a706:
          local_90 = local_90 + 1;
          abStack_64[iVar10] = bVar3;
        }
        else {
          if ((int)((uint)local_6c << 0x1e) < 0) {
            bVar3 = 0x2b;
            goto LAB_0800a706;
          }
          if ((int)((uint)local_6c << 0x1f) < 0) {
            bVar3 = 0x20;
            goto LAB_0800a706;
          }
        }
LAB_0800a708:
        local_98 = abStack_64 + local_90;
LAB_0800a524:
        FUN_0800a858(&local_a8,uVar1);
        iVar10 = local_90;
      }
      else {
        if (uVar1 - 0x65 < 3) goto LAB_0800a582;
        if (uVar1 == 0x69) goto LAB_0800a66c;
        if (uVar1 != 0x6e) {
          if (uVar1 == 0x6f) {
LAB_0800a5da:
            if ((local_6a == 'l') || ((local_6a != 'q' && (local_6a != 'j')))) {
              puVar6 = *param_4;
              *param_4 = puVar6 + 1;
              local_a8 = *puVar6;
              uStack_a4 = 0;
            }
            else {
              puVar6 = (uint *)((int)*param_4 + 7U & 0xfffffff8);
              *param_4 = puVar6;
              *param_4 = puVar6 + 2;
              local_a8 = *puVar6;
              uStack_a4 = puVar6[1];
            }
            if (local_6a == 'h') {
              local_a8 = local_a8 & 0xffff;
LAB_0800a638:
              uStack_a4 = 0;
            }
            else {
              if (local_6a == 'b') {
                local_a8 = local_a8 & 0xff;
                goto LAB_0800a638;
              }
              if ((local_6a == 't') || (local_6a == 'z')) goto LAB_0800a638;
            }
            if (((int)((uint)(byte)local_6c << 0x1c) < 0) &&
               (((uStack_a4 != 0 || (local_a8 != 0)) && ((uVar1 | 0x20) == 0x78)))) {
              abStack_64[local_90] = 0x30;
              abStack_64[local_90 + 1] = bVar3;
              local_90 = local_90 + 2;
            }
            goto LAB_0800a708;
          }
          if (uVar1 != 0x70) {
            if (uVar1 == 0x73) {
              ppbVar4 = (byte **)*param_4;
              *param_4 = (uint *)(ppbVar4 + 1);
              local_98 = *ppbVar4;
              if ((int)local_74 < 0) {
                local_8c = FUN_08001834();
                iVar10 = local_90;
              }
              else {
                iVar11 = FUN_0800b6e0(local_98,0);
                iVar10 = local_90;
                local_8c = local_74;
                if (iVar11 != 0) {
                  local_8c = iVar11 - (int)local_98;
                }
              }
            }
            else {
              if ((uVar1 == 0x75) || (uVar1 == 0x78)) goto LAB_0800a5da;
              abStack_64[local_90] = 0x25;
              iVar10 = local_90 + 1;
              if (uVar1 != 0) {
                abStack_64[local_90 + 1] = bVar3;
                iVar10 = local_90 + 2;
              }
            }
            goto LAB_0800a738;
          }
          puVar6 = *param_4;
          *param_4 = puVar6 + 1;
          local_a8 = *puVar6;
          uStack_a4 = 0;
          local_98 = abStack_64;
          uVar1 = 0x78;
          goto LAB_0800a524;
        }
        if (local_6a == 'b') {
          puVar6 = *param_4;
          *param_4 = puVar6 + 1;
          *(char *)*puVar6 = (char)local_78;
        }
        else if (local_6a == 'h') {
          puVar6 = *param_4;
          *param_4 = puVar6 + 1;
          *(short *)*puVar6 = (short)local_78;
        }
        else if ((local_6a == 'j') || ((local_6a != 'l' && (local_6a == 'q')))) {
          ppiVar5 = (int **)*param_4;
          *param_4 = (uint *)(ppiVar5 + 1);
          piVar7 = *ppiVar5;
          *piVar7 = local_78;
          piVar7[1] = local_78 >> 0x1f;
        }
        else {
          ppiVar5 = (int **)*param_4;
          *param_4 = (uint *)(ppiVar5 + 1);
          **ppiVar5 = local_78;
        }
      }
    }
LAB_0800a738:
    local_90 = iVar10;
    param_3 = param_3 + 1;
    iVar10 = (((((local_70 - local_90) - local_84) - local_8c) - local_80) - local_88) - local_7c;
    if ((-1 < (int)((uint)(byte)local_6c << 0x1d)) &&
       (local_68[0] = 0x20, iVar11 = iVar10, 0 < iVar10)) {
      do {
        iVar2 = FUN_0800aff4(&local_a8,local_68,1);
        if (iVar2 != 0) {
          return -1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = FUN_0800aff4(&local_a8,abStack_64,local_90);
    if (iVar11 != 0) {
      return -1;
    }
    local_68[0] = 0x30;
    iVar11 = local_84;
    if (0 < local_84) {
      do {
        iVar2 = FUN_0800aff4(&local_a8,local_68,1);
        if (iVar2 != 0) {
          return -1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = FUN_0800aff4(&local_a8,local_98,local_8c);
    if (iVar11 != 0) {
      return -1;
    }
    local_68[0] = 0x30;
    iVar11 = local_80;
    if (0 < local_80) {
      do {
        iVar2 = FUN_0800aff4(&local_a8,local_68,1);
        if (iVar2 != 0) {
          return -1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = FUN_0800aff4(&local_a8,local_98 + local_8c,local_88);
    if (iVar11 != 0) {
      return -1;
    }
    local_68[0] = 0x30;
    iVar11 = local_7c;
    if (0 < local_7c) {
      do {
        iVar2 = FUN_0800aff4(&local_a8,local_68,1);
        if (iVar2 != 0) {
          return -1;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (((int)((uint)(byte)local_6c << 0x1d) < 0) && (local_68[0] = 0x20, 0 < iVar10)) {
      do {
        iVar11 = FUN_0800aff4(&local_a8,local_68,1);
        if (iVar11 != 0) {
          return -1;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  } while( true );
}



//==== FUNC FUN_0800a858 @ 0800a858 ====

void FUN_0800a858(int *param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  
  iVar2 = param_1[5];
  if (param_2 == 0x6f) {
    iVar7 = 8;
  }
  else if ((param_2 | 0x20) == 0x78) {
    iVar7 = 0x10;
  }
  else {
    iVar7 = 10;
  }
  iVar6 = 0x3c;
  iVar3 = *param_1;
  iVar5 = param_1[1];
  if (((param_2 == 100) || (param_2 == 0x69)) && (iVar5 < 0)) {
    bVar8 = iVar3 != 0;
    iVar3 = -iVar3;
    iVar5 = -iVar5 - (uint)bVar8;
  }
  lVar9 = CONCAT44(iVar5,iVar3);
  if (((iVar5 == 0) && (lVar9 = CONCAT44(iVar5,iVar3), iVar3 == 0)) &&
     (lVar9 = CONCAT44(iVar5,iVar3), param_1[0xd] == 0)) {
    if ((iVar7 != 8) || (-1 < (int)((uint)*(byte *)(param_1 + 0xf) << 0x1c))) goto LAB_0800a92c;
  }
  else {
    do {
      iVar3 = (int)lVar9;
      iVar6 = iVar6 + -1;
      lVar9 = FUN_0800b74c(iVar3,(int)((ulonglong)lVar9 >> 0x20),iVar7,0);
      uVar4 = (iVar3 - iVar7 * (int)lVar9) + 0x30;
      cVar1 = (char)uVar4;
      if (0x39 < (uVar4 & 0xff)) {
        cVar1 = param_2 + 0xaf + cVar1;
      }
      *(char *)(iVar6 + iVar2) = cVar1;
    } while ((lVar9 != 0) && ((uint)param_1[4] < (uint)(iVar6 + iVar2)));
    if ((iVar7 != 8) ||
       ((-1 < (int)((uint)*(byte *)(param_1 + 0xf) << 0x1c) || (*(char *)(iVar6 + iVar2) == '0'))))
    goto LAB_0800a92c;
  }
  iVar6 = iVar6 + -1;
  *(undefined *)(iVar6 + iVar2) = 0x30;
LAB_0800a92c:
  iVar7 = 0x3c - iVar6;
  param_1[7] = iVar7;
  param_1[4] = iVar6 + iVar2;
  iVar2 = param_1[0xd];
  if (iVar7 < iVar2) {
    param_1[9] = iVar2 - iVar7;
    *(ushort *)(param_1 + 0xf) = *(ushort *)(param_1 + 0xf) & 0xffef;
  }
  else if ((iVar2 < 0) && ((*(byte *)(param_1 + 0xf) & 0x14) == 0x10)) {
    iVar7 = ((param_1[0xe] - param_1[6]) - param_1[9]) - iVar7;
    if (0 < iVar7) {
      param_1[9] = iVar7;
    }
  }
  return;
}



//==== FUNC FUN_0800a976 @ 0800a976 ====

void FUN_0800a976(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  short sVar6;
  int iVar7;
  undefined uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  undefined4 uVar16;
  int iVar17;
  char cVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined8 local_58;
  byte local_50 [7];
  byte local_49 [33];
  uint local_28;
  
  pbVar5 = local_50;
  local_58._0_4_ = *param_1;
  local_58._4_4_ = param_1[1];
  uVar2 = param_2 & 0xff | 0x20;
  if (uVar2 != 0x61) {
    if (param_1[0xd] < 0) {
      iVar3 = 6;
    }
    else {
      if ((param_1[0xd] != 0) || ((char)uVar2 != 'g')) goto LAB_0800a9b0;
      iVar3 = 1;
    }
    param_1[0xd] = iVar3;
  }
LAB_0800a9b0:
  uVar4 = (uint)(param_1[1] << 1) >> 0x15;
  local_28 = param_2;
  if (uVar4 == 0x7ff) {
    if (((param_1[1] & 0xfffffU) == 0) && (*param_1 == 0)) {
      param_1[7] = 3;
      if (((param_2 & 0xff) - 0x61 & 0xff) < 0x1a) {
        puVar10 = &DAT_0800b038;
      }
      else {
        puVar10 = &DAT_0800b03c;
      }
    }
    else {
      param_1[7] = 3;
      if (((param_2 & 0xff) - 0x61 & 0xff) < 0x1a) {
        puVar10 = &DAT_0800b030;
      }
      else {
        puVar10 = &DAT_0800b034;
      }
    }
    FUN_08005cb4(param_1[4],puVar10,3);
  }
  else {
    if ((uVar4 == 0) && (uVar4 = FUN_0800b868(param_1), 0 < (int)uVar4)) {
      sVar6 = 0;
      iVar3 = 0;
    }
    else {
      param_1[1] = param_1[1] & 0x800fffffU | 0x3fe00000;
      sVar6 = (short)uVar4 + -0x3fe;
      iVar3 = -1;
    }
    if ((char)uVar2 == 'a') {
      puVar10 = (undefined *)param_1[4];
      param_1[4] = (int)(puVar10 + 1);
      *puVar10 = 0x30;
      puVar10 = (undefined *)param_1[4];
      param_1[4] = (int)(puVar10 + 1);
      if ((char)local_28 == 'a') {
        uVar8 = 0x78;
      }
      else {
        uVar8 = 0x58;
      }
      *puVar10 = uVar8;
      param_1[6] = param_1[6] + 2;
    }
    if (iVar3 == 0) {
      sVar15 = 0;
      iVar17 = 0;
    }
    else {
      cVar18 = 0x60 < (uVar2 & 0xff);
      if ((uVar2 & 0xff) == 0x61) {
        if (param_1[0xd] < 0) {
          sVar14 = 0x21;
        }
        else {
          sVar14 = (short)param_1[0xd] + 1;
        }
        uVar2 = (uint)sVar14;
        cVar18 = 0xfffffffe < uVar2;
        iVar3 = uVar2 + 1;
        iVar17 = *param_1;
        uVar4 = param_1[1];
        bVar9 = 0;
        FUN_0800b8ac((int)local_58,local_58._4_4_,0,0);
        if (cVar18 == '\0') {
          local_58._0_4_ = iVar17;
          local_58._4_4_ = uVar4 ^ 0x80000000;
        }
        else {
          local_58._0_4_ = iVar17;
          local_58._4_4_ = uVar4;
        }
        uVar19 = CONCAT44(local_58._4_4_,iVar17);
        sVar15 = sVar6 + -4;
        local_50[0] = bVar9;
        pbVar5 = local_50 + 1;
        while( true ) {
          local_58 = uVar19;
          if (iVar3 < 1) break;
          cVar18 = iVar3 != 0;
          FUN_0800b8dc((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0,0);
          if (cVar18 != '\0') break;
          FUN_0800b90c(&local_58,0x1c);
          iVar17 = FUN_0800ba24((int)local_58,local_58._4_4_);
          iVar3 = iVar3 + -7;
          uVar19 = local_58;
          if (0 < iVar3) {
            uVar19 = FUN_0800ba7c();
            uVar19 = FUN_0800baac((int)local_58,local_58._4_4_,(int)uVar19,
                                  (int)((ulonglong)uVar19 >> 0x20));
            local_58._0_4_ = (int)uVar19;
            local_58._4_4_ = (int)((ulonglong)uVar19 >> 0x20);
          }
          pbVar5 = pbVar5 + 7;
          iVar7 = 7;
          while ((0 < iVar17 && (iVar7 = iVar7 + -1, -1 < iVar7))) {
            pbVar5 = pbVar5 + -1;
            *pbVar5 = (byte)iVar17 & 0xf;
            iVar17 = iVar17 >> 4;
          }
          while (iVar7 = iVar7 + -1, -1 < iVar7) {
            pbVar5 = pbVar5 + -1;
            *pbVar5 = 0;
          }
          pbVar5 = pbVar5 + 7;
        }
        iVar3 = (int)pbVar5 - (int)(local_50 + 1);
        pbVar5 = local_50 + 1;
        if (iVar3 < (int)uVar2) {
          sVar14 = (short)iVar3;
        }
        iVar17 = (int)sVar14;
        if (-1 < iVar17) {
          if ((iVar17 < iVar3) && (7 < local_50[iVar17 + 1])) {
            bVar9 = 0xf;
          }
          else {
            bVar9 = 0;
          }
          iVar3 = iVar17;
          pbVar12 = local_50 + iVar17;
          while( true ) {
            sVar14 = (short)iVar17;
            if (*pbVar12 != bVar9) break;
            iVar17 = iVar17 + -1;
            iVar3 = iVar3 + -1;
            pbVar12 = pbVar12 + -1;
          }
          if (bVar9 == 0xf) {
            local_50[iVar3] = local_50[iVar3] + 1;
          }
          if (iVar3 + -1 < 0) {
            pbVar5 = local_50;
            sVar14 = sVar14 + 1;
            sVar15 = sVar6;
          }
          iVar17 = (int)sVar14;
          iVar3 = iVar17 + -1;
          if (-1 < iVar3) {
            pbVar12 = pbVar5 + iVar3;
            do {
              bVar9 = *pbVar12 + 0x30;
              if (0x39 < bVar9) {
                bVar9 = (char)local_28 + -0x3a + bVar9;
              }
              *pbVar12 = bVar9;
              iVar3 = iVar3 + -1;
              pbVar12 = pbVar12 + -1;
            } while (-1 < iVar3);
          }
        }
        if (param_1[0xd] < 0) {
          param_1[0xd] = iVar17 + -1;
        }
      }
      else {
        uVar11 = 0;
        FUN_0800b8ac((int)local_58,local_58._4_4_,0,0);
        uVar19 = CONCAT44(DAT_0800ad7c,uVar11);
        if (cVar18 == '\0') {
          local_58._4_4_ = local_58._4_4_ ^ 0x80000000;
        }
        uVar20 = CONCAT44(local_58._4_4_,(int)local_58);
        sVar15 = (short)((sVar6 * 0x7597) / DAT_0800ad74);
        iVar17 = (int)sVar15;
        iVar3 = 7 - iVar17;
        lVar21 = (ulonglong)DAT_0800ad78 << 0x20;
        if (iVar3 < 1) {
          iVar3 = -iVar3;
          while( true ) {
            uVar16 = (undefined4)((ulonglong)lVar21 >> 0x20);
            uVar11 = (undefined4)lVar21;
            uVar1 = (undefined4)((ulonglong)uVar19 >> 0x20);
            if (iVar3 == 0) break;
            if (iVar3 << 0x1f < 0) {
              uVar19 = FUN_0800bc2c((int)uVar19,uVar1,uVar11,uVar16);
            }
            iVar3 = iVar3 >> 1;
            lVar21 = FUN_0800bc2c(uVar11,uVar16,uVar11,uVar16);
          }
          uVar20 = FUN_0800bdd0((int)local_58,local_58._4_4_,(int)uVar19,uVar1);
          local_58._0_4_ = (int)uVar20;
          local_58._4_4_ = (int)((ulonglong)uVar20 >> 0x20);
        }
        else {
          do {
            uVar16 = (undefined4)((ulonglong)lVar21 >> 0x20);
            uVar11 = (undefined4)lVar21;
            if (iVar3 << 0x1f < 0) {
              uVar20 = FUN_0800bc2c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar11,uVar16);
            }
            iVar3 = iVar3 >> 1;
            lVar21 = FUN_0800bc2c(uVar11,uVar16,uVar11,uVar16);
          } while (iVar3 != 0);
          local_58._0_4_ = (int)uVar20;
          local_58._4_4_ = (int)((ulonglong)uVar20 >> 0x20);
        }
        uVar11 = DAT_0800ad80;
        if ((uVar2 & 0xff) == 0x66) {
          iVar3 = iVar17 + 10;
        }
        else {
          iVar3 = 6;
        }
        iVar3 = iVar3 + param_1[0xd];
        if (0x13 < iVar3) {
          iVar3 = 0x13;
        }
        local_50[0] = 0x30;
        pbVar5 = local_50 + 1;
        local_58 = uVar20;
        while (uVar19 = local_58, 0 < iVar3) {
          while( true ) {
            local_58._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
            local_58._0_4_ = (int)uVar19;
            uVar4 = FUN_0800ba50((int)local_58,local_58._4_4_);
            local_58 = uVar19;
            iVar7 = 4;
            pbVar12 = pbVar5 + 8;
            do {
              pbVar5 = pbVar12;
              uVar13 = uVar4 / 10;
              pbVar5[-1] = (char)uVar4 + (char)uVar13 * -10 + 0x30;
              uVar4 = uVar13 / 10;
              pbVar5[-2] = (char)(uVar13 % 10) + 0x30;
              iVar7 = iVar7 + -1;
              pbVar12 = pbVar5 + -2;
            } while (iVar7 != 0);
            pbVar5 = pbVar5 + 6;
            iVar3 = iVar3 + -8;
            if (iVar3 < 1) break;
            FUN_0800ba50((int)local_58,local_58._4_4_);
            uVar19 = FUN_0800ba90();
            uVar19 = FUN_0800baac((int)local_58,local_58._4_4_,(int)uVar19,
                                  (int)((ulonglong)uVar19 >> 0x20));
            uVar19 = FUN_0800bc2c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0,uVar11);
          }
        }
        iVar3 = (int)pbVar5 - (int)(local_50 + 1);
        pbVar5 = local_50 + 1;
        while (local_50[1] == 0x30) {
          iVar3 = iVar3 + -1;
          iVar17 = iVar17 + -1;
          sVar15 = (short)iVar17;
          pbVar5 = pbVar5 + 1;
          local_50[1] = *pbVar5;
        }
        if ((uVar2 & 0xff) == 0x66) {
          sVar6 = sVar15 + 1;
        }
        else if ((uVar2 & 0xff) == 0x65) {
          sVar6 = 1;
        }
        else {
          sVar6 = 0;
        }
        sVar6 = sVar6 + (short)param_1[0xd];
        if (iVar3 < sVar6) {
          sVar6 = (short)iVar3;
        }
        iVar7 = (int)sVar6;
        iVar17 = iVar7;
        if (-1 < iVar7) {
          if ((iVar7 < iVar3) && (0x34 < pbVar5[iVar7])) {
            bVar9 = 0x39;
          }
          else {
            bVar9 = 0x30;
          }
          pbVar12 = pbVar5 + iVar7;
          while( true ) {
            pbVar12 = pbVar12 + -1;
            iVar7 = iVar7 + -1;
            if (*pbVar12 != bVar9) break;
            iVar17 = iVar17 + -1;
          }
          if (bVar9 == 0x39) {
            pbVar5[iVar7] = pbVar5[iVar7] + 1;
          }
          if (iVar7 < 0) {
            pbVar5 = pbVar5 + -1;
            iVar17 = iVar17 + 1;
            sVar15 = sVar15 + 1;
          }
        }
      }
    }
    FUN_0800ad84(param_1,local_28 & 0xff,pbVar5,(int)(short)iVar17,(int)sVar15);
  }
  return;
}



//==== FUNC FUN_0800ad84 @ 0800ad84 ====

void FUN_0800ad84(int param_1,uint param_2,undefined1 *param_3,int param_4,short param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined *puVar11;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [12];
  
  iVar4 = (int)param_5;
  iVar10 = *(int *)(param_1 + 0x34);
  if (param_4 < 1) {
    param_4 = 1;
    param_3 = &DAT_0800b040;
  }
  uVar1 = param_2 | 0x20;
  if (uVar1 == 0x66) {
LAB_0800adc2:
    param_5 = param_5 + 1;
    if (uVar1 != 0x66) {
      if ((-1 < (int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c)) && (param_4 < iVar10)) {
        iVar10 = param_4;
      }
      iVar10 = iVar10 - param_5;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = (int)param_5;
    if (iVar5 < 1) {
      iVar3 = iVar2 + 1;
      *(undefined *)(iVar2 + iVar4) = 0x30;
      if ((0 < iVar10) || ((int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c) < 0)) {
        *(undefined *)(iVar3 + iVar4) = 0x2e;
        iVar3 = iVar2 + 2;
      }
      *(int *)(param_1 + 0x1c) = iVar3;
      if (iVar10 + iVar5 < 0 != SCARRY4(iVar10,iVar5)) {
        param_5 = -(short)iVar10;
      }
      *(int *)(param_1 + 0x28) = -(int)param_5;
      iVar10 = iVar10 + param_5;
      if (iVar10 < param_4) {
        param_4 = iVar10;
      }
      iVar2 = (int)(short)param_4;
      *(int *)(param_1 + 0x20) = iVar2;
      FUN_08005cb4(*(int *)(param_1 + 0x1c) + iVar4,param_3,iVar2);
      *(int *)(param_1 + 0x2c) = iVar10 - iVar2;
    }
    else if (param_4 < iVar5) {
      FUN_08005cb4(iVar2 + iVar4,param_3,param_4);
      iVar4 = param_4 + *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) = iVar4;
      *(int *)(param_1 + 0x28) = iVar5 - param_4;
      if ((0 < iVar10) || ((int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c) < 0)) {
        *(undefined *)(iVar4 + *(int *)(param_1 + 0x10)) = 0x2e;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      *(int *)(param_1 + 0x2c) = iVar10;
    }
    else {
      FUN_08005cb4(iVar2 + iVar4,param_3,iVar5);
      iVar4 = iVar5 + *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) = iVar4;
      param_5 = (short)param_4 - param_5;
      if ((0 < iVar10) || ((int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c) < 0)) {
        *(int *)(param_1 + 0x1c) = iVar4 + 1;
        *(undefined *)(iVar4 + *(int *)(param_1 + 0x10)) = 0x2e;
      }
      if (iVar10 < param_5) {
        param_5 = (short)iVar10;
      }
      iVar4 = (int)param_5;
      FUN_08005cb4(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10),param_3 + iVar5,iVar4);
      *(int *)(param_1 + 0x1c) = iVar4 + *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x28) = iVar10 - iVar4;
    }
    goto LAB_0800afc6;
  }
  if (uVar1 == 0x67) {
    if ((-5 < iVar4) && (iVar4 < iVar10)) goto LAB_0800adc2;
    if ((param_4 < iVar10) && (-1 < (int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c))) {
      iVar10 = param_4;
    }
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (param_2 == 0x67) {
      param_2 = 0x65;
    }
    else {
      param_2 = 0x45;
    }
  }
  else if (param_2 == 0x61) {
    param_2 = 0x70;
  }
  else if (param_2 == 0x41) {
    param_2 = 0x50;
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar3 = iVar5 + 1;
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(iVar5 + iVar2) = *param_3;
  if ((0 < iVar10) || ((int)((uint)*(byte *)(param_1 + 0x3c) << 0x1c) < 0)) {
    *(undefined *)(iVar3 + iVar2) = 0x2e;
    iVar3 = iVar5 + 2;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  if (0 < iVar10) {
    sVar6 = (short)param_4 + -1;
    if (iVar10 < sVar6) {
      sVar6 = (short)iVar10;
    }
    iVar5 = (int)sVar6;
    FUN_08005cb4(*(int *)(param_1 + 0x1c) + iVar2,param_3 + 1,iVar5);
    *(int *)(param_1 + 0x1c) = iVar5 + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x28) = iVar10 - iVar5;
  }
  puVar7 = (undefined *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10));
  *puVar7 = (char)param_2;
  if (iVar4 < 0) {
    puVar7[1] = 0x2d;
    param_5 = -param_5;
  }
  else {
    puVar7[1] = 0x2b;
  }
  pcVar8 = puVar7 + 2;
  iVar10 = 0;
  iVar4 = (int)param_5;
  puVar11 = local_28;
  pcVar9 = pcVar8;
  if (iVar4 < 1) {
LAB_0800af90:
    if ((param_2 | 0x20) == 0x65) {
      pcVar9 = puVar7 + 3;
      *pcVar8 = '0';
    }
  }
  else {
    do {
      FUN_0800c016(&local_30,iVar4,10);
      *puVar11 = (char)local_2c;
      iVar10 = iVar10 + 1;
      iVar4 = (int)(short)local_30;
      puVar11 = puVar11 + 1;
    } while (0 < iVar4);
    if (iVar10 < 2) goto LAB_0800af90;
  }
  pcVar8 = pcVar9;
  if (iVar10 == 0) {
    pcVar8 = pcVar9 + 1;
    *pcVar9 = '0';
  }
  else {
    for (; 0 < iVar10; iVar10 = iVar10 + -1) {
      *pcVar8 = local_28[iVar10 + -1] + '0';
      pcVar8 = pcVar8 + 1;
    }
  }
  *(int *)(param_1 + 0x20) = (int)pcVar8 - (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10));
LAB_0800afc6:
  if ((*(byte *)(param_1 + 0x3c) & 0x14) == 0x10) {
    iVar4 = *(int *)(param_1 + 0x2c) +
            *(int *)(param_1 + 0x20) +
            *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar10 = iVar4;
    if (iVar4 < iVar2) {
      iVar10 = iVar2 - iVar4;
    }
    if (iVar4 < iVar2) {
      *(int *)(param_1 + 0x24) = iVar10;
    }
  }
  return;
}



//==== FUNC FUN_0800aff4 @ 0800aff4 ====

undefined4 FUN_0800aff4(int param_1,undefined *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    do {
      iVar1 = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*param_2);
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return 0;
}



//==== FUNC FUN_0800b044 @ 0800b044 ====

void FUN_0800b044(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (((((param_1 == DAT_0800b154) || (param_1 == DAT_0800b16c)) ||
       (param_1 == (ushort *)0x40000000)) ||
      ((param_1 == DAT_0800b158 || (param_1 == DAT_0800b15c)))) || (param_1 == DAT_0800b160)) {
    uVar1 = uVar1 & 0xff8f | param_2[1];
  }
  if ((param_1 != DAT_0800b164) && (param_1 != DAT_0800b168)) {
    uVar1 = uVar1 & 0xfcff | param_2[4];
  }
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 2);
  param_1[0x14] = *param_2;
  if ((param_1 == DAT_0800b154) || (param_1 == DAT_0800b16c)) {
    param_1[0x18] = (ushort)*(byte *)(param_2 + 5);
  }
  param_1[10] = 1;
  return;
}



//==== FUNC FUN_0800b0ae @ 0800b0ae ====

void FUN_0800b0ae(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



//==== FUNC FUN_0800b0b2 @ 0800b0b2 ====

void FUN_0800b0b2(ushort *param_1,char param_2)

{
  if (param_2 == '\0') {
    *param_1 = *param_1 & 0xff7f;
  }
  else {
    *param_1 = *param_1 | 0x80;
  }
  return;
}



//==== FUNC FUN_0800b0ce @ 0800b0ce ====

void FUN_0800b0ce(ushort *param_1,char param_2)

{
  if (param_2 == '\0') {
    *param_1 = *param_1 & 0xfffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}



//==== FUNC FUN_0800b0ea @ 0800b0ea ====

void FUN_0800b0ea(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xefff;
  uVar4 = *(ushort *)(param_1 + 4);
  sVar1 = *param_2;
  sVar2 = param_2[6];
  sVar3 = param_2[1];
  if ((param_1 == DAT_0800b154) || (param_1 == DAT_0800b16c)) {
    uVar4 = uVar4 & 0xbfff | param_2[8] << 6;
  }
  *(ushort *)(param_1 + 4) = uVar4;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x8cff | sVar1 << 8;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 4);
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xdfff | sVar2 << 0xc | sVar3 << 0xc;
  return;
}



//==== FUNC FUN_0800b170 @ 0800b170 ====

void FUN_0800b170(int param_1,int param_2)

{
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xf7ff | (ushort)(param_2 << 8);
  return;
}



//==== FUNC FUN_0800b184 @ 0800b184 ====

void FUN_0800b184(int param_1,ushort param_2,char param_3)

{
  if (param_3 == '\0') {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & ~param_2;
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | param_2;
  }
  return;
}



//==== FUNC FUN_0800b19a @ 0800b19a ====

void FUN_0800b19a(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



//==== FUNC FUN_0800b1a2 @ 0800b1a2 ====

undefined FUN_0800b1a2(int param_1,ushort param_2)

{
  undefined uVar1;
  
  if (((*(ushort *)(param_1 + 0x10) & param_2) == 0) ||
     ((*(ushort *)(param_1 + 0xc) & param_2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== FUNC FUN_0800b1d4 @ 0800b1d4 ====

void FUN_0800b1d4(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = ~param_2;
  return;
}



//==== FUNC FUN_0800b1dc @ 0800b1dc ====

void FUN_0800b1dc(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x21;
  if (param_1 == DAT_0800b390) {
    *DAT_0800b394 = 0x3d;
  }
  else if (param_1 == DAT_0800b398) {
    *DAT_0800b394 = 0xf40;
  }
  else if (param_1 == DAT_0800b39c) {
    *DAT_0800b394 = 0x3d0000;
  }
  else if (param_1 == DAT_0800b3a0) {
    *DAT_0800b394 = 0xf400000;
  }
  else if (param_1 == DAT_0800b3a4) {
    *DAT_0800b3a8 = DAT_0800b3ac;
  }
  else if (param_1 == DAT_0800b3b0) {
    *DAT_0800b3a8 = DAT_0800b3b4;
  }
  else if (param_1 == DAT_0800b3b8) {
    *DAT_0800b3a8 = DAT_0800b3bc;
  }
  else if (param_1 == DAT_0800b3c0) {
    *DAT_0800b3a8 = 0x2f400000;
  }
  else if (param_1 == DAT_0800b3c4) {
    *DAT_0800b3c8 = 0x3d;
  }
  else if (param_1 == DAT_0800b3cc) {
    *DAT_0800b3c8 = 0xf40;
  }
  else if (param_1 == DAT_0800b3d0) {
    *DAT_0800b3c8 = 0x3d0000;
  }
  else if (param_1 == DAT_0800b3d4) {
    *DAT_0800b3c8 = 0xf400000;
  }
  else if (param_1 == DAT_0800b3d8) {
    *DAT_0800b3dc = DAT_0800b3ac;
  }
  else if (param_1 == DAT_0800b3e0) {
    *DAT_0800b3dc = DAT_0800b3b4;
  }
  else if (param_1 == DAT_0800b3e4) {
    *DAT_0800b3dc = DAT_0800b3bc;
  }
  else if (param_1 == DAT_0800b3e8) {
    *DAT_0800b3dc = 0x2f400000;
  }
  return;
}



//==== FUNC FUN_0800b31e @ 0800b31e ====

void FUN_0800b31e(uint *param_1,uint *param_2)

{
  *param_1 = *param_1 & DAT_0800b3ec |
             *param_2 | param_2[3] | param_2[5] | param_2[6] | param_2[7] | param_2[8] | param_2[9]
             | param_2[10] | param_2[0xd] | param_2[0xe];
  param_1[5] = param_1[5] & 0xfffffff8 | param_2[0xb] | param_2[0xc];
  param_1[1] = param_2[4];
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  return;
}



//==== FUNC FUN_0800b376 @ 0800b376 ====

void FUN_0800b376(uint *param_1,char param_2)

{
  if (param_2 == '\0') {
    *param_1 = *param_1 & 0xfffffffe;
  }
  else {
    *param_1 = *param_1 | 1;
  }
  return;
}



//==== FUNC FUN_0800b3f0 @ 0800b3f0 ====

void FUN_0800b3f0(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) & DAT_0800b5d4 | *param_2 | (int)*(char *)(param_2 + 1) << 8;
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) & DAT_0800b5d8 |
       param_2[4] | param_2[3] | param_2[2] | (int)*(char *)((int)param_2 + 5) << 1;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & 0xff0fffff | (*(byte *)(param_2 + 5) - 1 & 0xff) << 0x14;
  return;
}



//==== FUNC FUN_0800b444 @ 0800b444 ====

void FUN_0800b444(uint *param_1)

{
  *DAT_0800b5dc = *DAT_0800b5dc & DAT_0800b5e0 | *param_1 | param_1[1] | param_1[2] | param_1[3];
  return;
}



//==== FUNC FUN_0800b466 @ 0800b466 ====

void FUN_0800b466(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  return;
}



//==== FUNC FUN_0800b480 @ 0800b480 ====

void FUN_0800b480(char param_1)

{
  if (param_1 == '\0') {
    *DAT_0800b5dc = *DAT_0800b5dc & 0xff7fffff;
  }
  else {
    *DAT_0800b5dc = *DAT_0800b5dc | 0x800000;
  }
  return;
}



//==== FUNC FUN_0800b4a2 @ 0800b4a2 ====

void FUN_0800b4a2(int param_1,byte param_2,byte param_3,uint param_4)

{
  if (param_2 < 10) {
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & ~(7 << (uint)(byte)(param_2 * '\x03')) |
         (param_4 & 0xff) << (uint)(byte)(param_2 * '\x03');
  }
  else {
    *(uint *)(param_1 + 0xc) =
         *(uint *)(param_1 + 0xc) & ~(7 << (uint)(byte)((param_2 - 10) * '\x03')) |
         (param_4 & 0xff) << (uint)(byte)((param_2 - 10) * '\x03');
  }
  if (param_3 < 7) {
    *(uint *)(param_1 + 0x34) =
         *(uint *)(param_1 + 0x34) & ~(0x1f << (uint)(byte)((param_3 - 1) * '\x05')) |
         (uint)param_2 << (uint)(byte)((param_3 - 1) * '\x05');
  }
  else if (param_3 < 0xd) {
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) & ~(0x1f << (uint)(byte)((param_3 - 7) * '\x05')) |
         (uint)param_2 << (uint)(byte)((param_3 - 7) * '\x05');
  }
  else {
    *(uint *)(param_1 + 0x2c) =
         *(uint *)(param_1 + 0x2c) & ~(0x1f << (uint)(byte)((param_3 - 0xd) * '\x05')) |
         (uint)param_2 << (uint)(byte)((param_3 - 0xd) * '\x05');
  }
  return;
}



//==== FUNC FUN_0800b590 @ 0800b590 ====

void FUN_0800b590(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000000;
  return;
}



//==== FUNC FUN_0800b59a @ 0800b59a ====

void FUN_0800b59a(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffeff;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100;
  }
  return;
}



//==== FUNC FUN_0800b5b6 @ 0800b5b6 ====

void FUN_0800b5b6(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffdff;
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200;
  }
  return;
}



//==== FUNC FUN_0800b5e4 @ 0800b5e4 ====

longlong FUN_0800b5e4(int param_1,undefined4 param_2,ushort param_3,uint param_4)

{
  *(uint *)(param_1 + 0x138) = (uint)param_3;
  *(uint *)(param_1 + 0x134) = (uint)param_3;
  *(undefined *)(param_1 + 0x111) = 2;
  FUN_08008b16(param_1,0,param_2,param_3);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b614 @ 0800b614 ====

longlong FUN_0800b614(undefined4 param_1,undefined4 param_2,undefined2 param_3,uint param_4)

{
  FUN_08008b16(param_1,0,param_2,param_3);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b632 @ 0800b632 ====

longlong FUN_0800b632(int param_1,undefined4 param_2,ushort param_3,uint param_4)

{
  *(uint *)(param_1 + 0x390) = (uint)param_3;
  *(uint *)(param_1 + 0x38c) = (uint)param_3;
  *(undefined *)(param_1 + 0x111) = 3;
  FUN_08008ab0(param_1,0,param_2,param_3);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b662 @ 0800b662 ====

longlong FUN_0800b662(undefined4 param_1,undefined4 param_2,undefined2 param_3,uint param_4)

{
  FUN_08008ab0(param_1,0,param_2,param_3);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b680 @ 0800b680 ====

longlong FUN_0800b680(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(undefined *)(param_1 + 0x111) = 4;
  FUN_08008b16(param_1,0,0,0);
  FUN_08009bdc(param_1);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b6a4 @ 0800b6a4 ====

longlong FUN_0800b6a4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(undefined *)(param_1 + 0x111) = 5;
  FUN_08008ab0(param_1,0,0,0);
  FUN_08009bdc(param_1);
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800b6c8 @ 0800b6c8 ====

char * FUN_0800b6c8(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



//==== FUNC FUN_0800b6e0 @ 0800b6e0 ====

char * FUN_0800b6e0(uint *param_1,char param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  while (((uint)param_1 & 3) != 0) {
    bVar7 = param_3 == 0;
    param_3 = param_3 - 1;
    bVar6 = param_3 == 0;
    if (bVar7) goto LAB_0800b730;
    puVar2 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
    param_1 = puVar2;
    if (param_2 == cVar1) goto LAB_0800b734;
  }
  uVar3 = param_3 - 8;
  if (7 < param_3) {
    uVar3 = param_3 - 4;
    puVar2 = param_1;
    do {
      param_1 = puVar2;
      bVar6 = 3 < uVar3;
      uVar3 = uVar3 - 4;
      uVar5 = uVar3;
      if (bVar6) {
        uVar5 = *param_1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
      }
      puVar2 = param_1 + 1;
    } while (uVar5 == 0);
  }
  iVar4 = uVar3 + 8;
  puVar2 = param_1;
  do {
    param_1 = (uint *)((int)puVar2 + 1);
    bVar7 = iVar4 != 0;
    iVar4 = iVar4 + -1;
    bVar6 = iVar4 == 0;
    if (bVar7) {
      bVar6 = param_2 == *(char *)puVar2;
    }
    puVar2 = param_1;
  } while (bVar7 && !bVar6);
LAB_0800b730:
  puVar2 = param_1;
  if (!bVar6) {
    puVar2 = (uint *)0x1;
  }
LAB_0800b734:
  return (char *)((int)puVar2 + -1);
}



//==== FUNC FUN_0800b74c @ 0800b74c ====

ulonglong FUN_0800b74c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_4 != 0) {
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      return 0;
    }
    uVar3 = LZCOUNT(param_4) - LZCOUNT(param_2);
    param_4 = param_4 << (uVar3 & 0xff);
LAB_0800b7ba:
    param_4 = param_4 | param_3 >> (0x20 - uVar3 & 0xff);
    param_3 = param_3 << (uVar3 & 0xff);
    uVar3 = 0x80000000 >> (uVar3 & 0xff);
    while( true ) {
      bVar1 = param_2 - param_4 < (uint)(param_3 <= param_1);
      bVar6 = param_4 < param_2 || bVar1;
      if (param_4 < param_2 || bVar1) {
        param_2 = (param_2 - param_4) - (uint)(param_3 > param_1);
        param_1 = param_1 - param_3;
      }
      uVar4 = uVar3 * 2;
      bVar1 = CARRY4(uVar3,uVar3);
      uVar3 = uVar3 * 2 + (uint)bVar6;
      if (bVar1 || CARRY4(uVar4,(uint)bVar6)) break;
      uVar4 = param_4 & 1;
      param_4 = param_4 >> 1;
      param_3 = (uint)(uVar4 != 0) << 0x1f | param_3 >> 1;
    }
    return (ulonglong)uVar3;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      return (ulonglong)(param_1 / param_3);
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 >> 0x10 == 0) {
        uVar4 = (param_2 - param_3 * (param_2 / param_3)) * 0x10000 | param_1 >> 0x10;
        uVar3 = uVar4 / param_3;
        return CONCAT44(param_2 / param_3,
                        (param_1 & 0xffff | (uVar4 - param_3 * uVar3) * 0x10000) / param_3 |
                        uVar3 << 0x10);
      }
      uVar3 = (0x20 - LZCOUNT(param_2)) + LZCOUNT(param_3);
      param_4 = 0;
      if (0x1f < uVar3) {
        param_3 = param_3 << (uVar3 - 0x20 & 0xff);
        uVar4 = 0x80000000 >> (uVar3 - 0x20 & 0xff);
        uVar5 = 0;
        uVar3 = 0;
        while( true ) {
          bVar1 = param_2 - param_3 < (uint)(uVar3 <= param_1);
          bVar6 = param_3 < param_2 || bVar1;
          if (param_3 < param_2 || bVar1) {
            param_2 = (param_2 - param_3) - (uint)(uVar3 > param_1);
            param_1 = param_1 - uVar3;
          }
          bVar7 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
          uVar4 = uVar4 * 2 + (uint)bVar6;
          uVar2 = uVar5 * 2;
          bVar1 = CARRY4(uVar5,uVar5);
          uVar5 = uVar5 * 2 + (uint)bVar7;
          if (bVar1 || CARRY4(uVar2,(uint)bVar7)) break;
          uVar2 = param_3 & 1;
          param_3 = param_3 >> 1;
          uVar3 = (uint)(uVar2 != 0) << 0x1f | uVar3 >> 1;
        }
        return CONCAT44(uVar5,uVar4);
      }
      goto LAB_0800b7ba;
    }
    if (param_3 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_0800b778 @ 0800b778 ====

int FUN_0800b778(int param_1,int param_2)

{
  int iVar1;
  uint in_r12;
  char in_CY;
  bool bVar2;
  
  if (in_CY != '\0') {
    bVar2 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar2 - param_2;
  }
  iVar1 = FUN_0800b74c(param_1,param_2);
  if ((in_r12 & 0x80000000) != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}



//==== FUNC FUN_0800b868 @ 0800b868 ====

int FUN_0800b868(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = DAT_0800b8a8;
  uVar2 = param_1[1];
  iVar3 = 1;
  uVar4 = param_1[1] & DAT_0800b8a8;
  param_1[1] = uVar4;
  if ((uVar4 != 0) || (*param_1 != 0)) {
    do {
      uVar4 = *param_1 >> 0x1f | param_1[1] << 1;
      param_1[1] = uVar4;
      *param_1 = *param_1 << 1;
      iVar3 = iVar3 + -1;
    } while (-1 < (int)(uVar4 << 0xb));
    param_1[1] = uVar1 & param_1[1];
  }
  param_1[1] = uVar2 & 0x80000000 | param_1[1];
  return iVar3;
}



//==== FUNC FUN_0800b8ac @ 0800b8ac ====

void FUN_0800b8ac(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



//==== FUNC FUN_0800b8dc @ 0800b8dc ====

void FUN_0800b8dc(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_2 * 2;
  if (uVar1 < 0xffe00001) {
    uVar1 = param_4 * 2;
  }
  if ((uVar1 < 0xffe00001) && ((int)(param_2 | param_4) < 0)) {
    return;
  }
  return;
}



//==== FUNC FUN_0800b90c @ 0800b90c ====

undefined4 FUN_0800b90c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (param_1[1] << 1) >> 0x15;
  if (uVar2 == 0x7ff) {
    if (((param_1[1] & 0xfffff) == 0) && (*param_1 == 0)) {
      return 1;
    }
    return 2;
  }
  if ((uVar2 == 0) && (uVar2 = FUN_0800b868(param_1), 0 < (int)uVar2)) {
    return 0;
  }
  if ((0 < (int)param_2) && (0x7ff - uVar2 <= param_2)) {
    uVar2 = DAT_0800ba18;
    if (-1 < (int)param_1[1]) {
      uVar2 = DAT_0800ba1c;
    }
    *param_1 = 0;
    param_1[1] = uVar2;
    return 1;
  }
  if ((int)-uVar2 < (int)param_2) {
    uVar2 = param_1[1] & DAT_0800ba20 | (uVar2 + param_2) * 0x100000;
  }
  else {
    uVar3 = param_1[1] & 0x80000000;
    param_1[1] = param_1[1] & 0xfffff | 0x100000;
    iVar4 = (uVar2 - 1) + param_2;
    if (0x34 < iVar4 + 0x35U) {
      param_1[1] = uVar3;
      *param_1 = 0;
      return 0;
    }
    uVar2 = 0;
    if (iVar4 + 0x1f < 0 != SCARRY4(iVar4,0x1f)) {
      iVar4 = iVar4 + 0x20;
      uVar2 = *param_1;
      *param_1 = param_1[1];
      param_1[1] = 0;
    }
    uVar1 = -iVar4;
    if (uVar1 != 0) {
      uVar2 = *param_1 << (iVar4 + 0x20U & 0xff) | ~-(uint)(uVar2 == 0) >> 0x1f;
      *param_1 = param_1[1] << (iVar4 + 0x20U & 0xff) | *param_1 >> (uVar1 & 0xff);
      param_1[1] = param_1[1] >> (uVar1 & 0xff);
    }
    param_1[1] = param_1[1] | uVar3;
    if (((uVar2 < 0x80000001) &&
        ((uVar2 != 0x80000000 || (-1 < (int)((uint)*(byte *)param_1 << 0x1f))))) ||
       (*param_1 = *param_1 + 1, *param_1 != 0)) {
      if (param_1[1] != uVar3) {
        return 0xffffffff;
      }
      if (*param_1 != 0) {
        return 0xffffffff;
      }
      return 0;
    }
    uVar2 = param_1[1] + 1;
  }
  param_1[1] = uVar2;
  return 0xffffffff;
}



//==== FUNC FUN_0800ba24 @ 0800ba24 ====

int FUN_0800ba24(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 0x15 | param_2 << 0xb;
  if ((param_2 & 0x80000000) != 0) {
    uVar1 = FUN_0800ba5a(uVar1,param_2 << 1);
    if (uVar1 < 0x80000001) {
      iVar2 = -uVar1;
    }
    else {
      iVar2 = -0x80000000;
    }
    return iVar2;
  }
  iVar2 = FUN_0800ba5a(uVar1,param_2 << 1);
  if (iVar2 < 0) {
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}



//==== FUNC FUN_0800ba50 @ 0800ba50 ====

uint FUN_0800ba50(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x80000000) == 0) {
    uVar1 = param_1 >> 0x15 | param_2 << 0xb | 0x80000000;
    iVar2 = ((param_2 << 1) >> 0x15) - 0x3ff;
    if (-1 < iVar2) {
      uVar3 = 0x1f - iVar2;
      if ((int)uVar3 < 0) {
        uVar1 = (int)uVar1 >> 0x1f;
      }
      else {
        uVar1 = uVar1 >> (uVar3 & 0xff);
      }
      return uVar1;
    }
  }
  return 0;
}



//==== FUNC FUN_0800ba5a @ 0800ba5a ====

uint FUN_0800ba5a(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 >> 0x15) - 0x3ff;
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = 0x1f - iVar1;
  if ((int)uVar2 < 0) {
    uVar2 = (int)(param_1 | 0x80000000) >> 0x1f;
  }
  else {
    uVar2 = (param_1 | 0x80000000) >> (uVar2 & 0xff);
  }
  return uVar2;
}



//==== FUNC FUN_0800ba7c @ 0800ba7c ====

int FUN_0800ba7c(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    iVar1 = FUN_0800ba92(-param_1);
    return iVar1;
  }
  if (param_1 != 0) {
    param_1 = (param_1 << LZCOUNT(param_1)) << 0x15;
  }
  return param_1;
}



//==== FUNC FUN_0800ba90 @ 0800ba90 ====

undefined8 FUN_0800ba90(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 << LZCOUNT(param_1);
    iVar2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(iVar2,param_1);
}



//==== FUNC FUN_0800ba92 @ 0800ba92 ====

undefined8 FUN_0800ba92(int param_1,int param_2)

{
  uint uVar1;
  char in_ZR;
  
  if (in_ZR == '\0') {
    uVar1 = param_1 << LZCOUNT(param_1);
    param_2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(param_2,param_1);
}



//==== FUNC FUN_0800baac @ 0800baac ====

longlong FUN_0800baac(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    uVar6 = param_1 - param_3;
    iVar9 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar10 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar9) - (uint)bVar10;
      bVar10 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar9 + (uint)bVar10;
    }
    bVar10 = 0xffdfffff < param_2 << 1;
    if (!bVar10) {
      bVar10 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar10;
    }
    if (bVar10) {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if ((param_3 | param_4 << 1) == 0) {
LAB_0800d736:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar10 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar10;
        goto LAB_0800d736;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar6 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar6) goto LAB_0800d736;
    }
    else {
      uVar6 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar6) goto LAB_0800d736;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    uVar3 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar7 = uVar6 - 0x20;
    if (uVar7 == 0 || (int)uVar6 < 0x20) {
      uVar4 = param_3 >> (uVar6 & 0xff);
      uVar8 = (param_3 >> (uVar6 & 0x1f) | param_3 << 0x20 - (uVar6 & 0x1f)) ^ uVar4;
      uVar7 = param_4 >> (uVar6 & 0x1f) | param_4 << 0x20 - (uVar6 & 0x1f);
      uVar5 = (uVar7 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
      uVar6 = uVar4 ^ uVar7 ^ uVar5;
      bVar10 = CARRY4(param_1,uVar6);
      uVar6 = param_1 + uVar6;
      uVar7 = uVar3 + uVar5 + (uint)bVar10;
      if (!CARRY4(uVar3,uVar5) && !CARRY4(uVar3 + uVar5,(uint)bVar10)) goto LAB_0800d6ea;
    }
    else {
      uVar4 = param_4 >> (uVar7 & 0xff);
      uVar8 = (param_4 >> (uVar7 & 0x1f) | param_4 << 0x20 - (uVar7 & 0x1f)) ^ uVar4;
      if (param_3 != 0) {
        uVar8 = uVar8 | 1;
      }
      uVar6 = param_1 + uVar4;
      uVar7 = uVar3 + CARRY4(param_1,uVar4);
      if (!CARRY4(uVar3,(uint)CARRY4(param_1,uVar4))) goto LAB_0800d6ea;
    }
    uVar3 = uVar7 & 1;
    uVar7 = uVar7 >> 1;
    bVar2 = (byte)uVar6;
    uVar6 = (uint)(uVar3 != 0) << 0x1f | uVar6 >> 1;
    uVar3 = uVar8 & 1;
    uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
    if (uVar3 != 0) {
      uVar8 = uVar8 | 1;
    }
LAB_0800d6ea:
    bVar10 = 0x80000000 < uVar8 || uVar8 + 0x80000000 < (uint)((uVar6 & 1) != 0);
    uVar3 = uVar7 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar6,(uint)bVar10);
    if (uVar3 * 2 < 0xffe00000) {
      return CONCAT44(uVar3,uVar6 + bVar10);
    }
    return (ulonglong)(uVar3 & 0xfff00000) << 0x20;
  }
  uVar6 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar3 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar10 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = (param_2 - uVar3) - (uint)bVar10;
    bVar10 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + uVar3 + (uint)bVar10;
  }
  bVar10 = 0xffdfffff < param_2 << 1;
  if (!bVar10) {
    bVar10 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar10;
  }
  uVar6 = param_2;
  if (bVar10) {
    bVar10 = 0xffdfffff < param_2 * 2;
    if (bVar10) {
      if (param_2 * 2 == 0xffe00000) {
        bVar10 = 0xffdfffff < param_4 << 1;
      }
      if (bVar10) {
        uVar6 = 0xffffffff;
      }
      goto LAB_0800bbe6;
    }
    param_4 = param_4 & 0x7fffffff;
    if ((param_3 | param_4 << 1) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar3 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar3) goto LAB_0800bbe6;
        goto LAB_0800bb7c;
      }
      bVar10 = param_1 < param_3;
      param_1 = param_1 - param_3;
      uVar6 = (param_2 - param_4) - (uint)bVar10;
    }
    if ((param_1 | uVar6 << 1) == 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar3 = (param_2 >> 0x14) - (param_4 >> 0x14);
    if (0x36 < (int)uVar3) goto LAB_0800bbe6;
    if ((int)uVar3 < 2) {
      uVar6 = param_4 << 0xb | 0x80000000 | param_3 >> 0x15;
      if (uVar3 == 1) {
        param_3 = param_3 << 10;
        uVar6 = uVar6 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar7 = param_1 >> 0x15;
      uVar3 = param_1 * 0x800;
      param_1 = uVar3 - param_3;
      uVar6 = ((param_2 << 0xb | 0x80000000 | uVar7) - uVar6) - (uint)(uVar3 < param_3);
      uVar3 = param_2 & 0xfff00000;
      if (-1 < (int)uVar6) {
        if (uVar6 == 0) {
          iVar9 = LZCOUNT(param_1);
          uVar6 = param_1 << iVar9;
          if (uVar6 == 0) goto LAB_0800bbe6;
          param_1 = 0;
          iVar9 = iVar9 + 0x20;
        }
        else {
          iVar9 = LZCOUNT(uVar6);
          uVar6 = uVar6 << iVar9 | param_1 >> (0x20U - iVar9 & 0xff);
          param_1 = param_1 << iVar9;
        }
        uVar7 = param_2 >> 0x1f | (param_2 & 0xfff00000) << 1;
        uVar3 = uVar7 + iVar9 * -0x200000;
        uVar4 = uVar3 & 0xfffffffe;
        uVar3 = uVar3 >> 1 | param_2 & 0x80000000;
        if (uVar7 < (uint)(iVar9 * 0x200000) || uVar4 == 0) {
          uVar4 = 0x200000 - uVar4 >> 0x15;
          uVar3 = uVar6 >> (uVar4 & 0x1f);
          uVar7 = uVar6 << 0x20 - (uVar4 & 0x1f);
          uVar6 = uVar6 >> (uVar4 & 0xff);
          param_1 = param_1 >> (uVar4 & 0xff) ^ (uVar3 | uVar7) ^ uVar6;
          uVar3 = param_2 & 0x80000000;
        }
      }
      bVar10 = (param_1 >> 10 & 1) != 0;
      uVar7 = param_1 >> 0xb | uVar6 << 0x15;
      if (bVar10) {
        bVar10 = (param_1 >> 0xb & 1) != 0;
      }
      param_1 = uVar7 + bVar10;
      uVar6 = uVar3 + ((uVar6 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar7,(uint)bVar10);
      goto LAB_0800bbe6;
    }
    param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
LAB_0800bb7c:
    uVar7 = param_2 >> 0x14;
    uVar6 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar4 = uVar3 - 0x20;
    if (uVar4 == 0 || (int)uVar3 < 0x20) {
      uVar4 = param_3 >> (uVar3 & 0xff);
      uVar8 = (param_3 >> (uVar3 & 0x1f) | param_3 << 0x20 - (uVar3 & 0x1f)) ^ uVar4;
      uVar5 = param_4 >> (uVar3 & 0xff);
      uVar4 = uVar4 ^ (param_4 >> (uVar3 & 0x1f) | param_4 << 0x20 - (uVar3 & 0x1f)) ^ uVar5;
      uVar3 = (param_1 - uVar4) - (uint)(uVar8 != 0);
      uVar6 = (uVar6 - uVar5) - (uint)(param_1 <= uVar4 && (uint)(uVar8 == 0) <= param_1 - uVar4);
    }
    else {
      uVar5 = param_4 >> (uVar4 & 0xff);
      uVar8 = (param_3 | param_3 << 0x10) >> 0x10 | param_4 << (0x20 - uVar4 & 0xff);
      uVar3 = (param_1 - uVar5) - (uint)(uVar8 != 0);
      uVar6 = uVar6 - (param_1 <= uVar5 && (uint)(uVar8 == 0) <= param_1 - uVar5);
    }
    uVar4 = -uVar8;
    if (((uVar6 & 0x100000) == 0) && (uVar7 = uVar7 - 1, (uVar7 & 0x7ff) != 0)) {
      bVar1 = (uVar4 & 0x80000000) != 0;
      uVar4 = uVar8 * -2;
      uVar5 = uVar3 * 2;
      bVar10 = CARRY4(uVar3,uVar3);
      uVar3 = uVar3 * 2 + (uint)bVar1;
      uVar6 = uVar6 * 2 + (uint)(bVar10 || CARRY4(uVar5,(uint)bVar1));
    }
    bVar10 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar3 & 1) != 0);
    param_1 = uVar3 + bVar10;
    uVar6 = (uVar6 & 0xffefffff) + uVar7 * 0x100000 + (uint)CARRY4(uVar3,(uint)bVar10);
  }
LAB_0800bbe6:
  return CONCAT44(uVar6,param_1);
}



//==== FUNC FUN_0800bc2c @ 0800bc2c ====

longlong FUN_0800bc2c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar11 = (param_2 ^ param_4) & 0x80000000;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar7 == 0;
  if (!bVar12) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r7 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar7 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r7 == 0x7ff;
  }
  if (bVar12) {
    uVar9 = param_4 >> 0x14 & 0x7ff;
    if (uVar7 == 0x7ff || uVar9 == 0x7ff) {
      bVar12 = (param_1 | param_2 << 1) == 0;
      if (!bVar12) {
        bVar12 = (param_3 | param_4 << 1) == 0;
      }
      if (bVar12) {
        param_2 = 0xffffffff;
      }
      uVar7 = param_4 * 2;
      if (uVar7 < 0xffe00001) {
        uVar7 = param_2 * 2;
        param_4 = param_2;
      }
      if (uVar7 < 0xffe00001) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      goto LAB_0800bcda;
    }
    bVar12 = (param_1 | param_2 << 1) == 0;
    if (!bVar12) {
      bVar12 = (param_3 | param_4 << 1) == 0;
    }
    if (!bVar12) {
      if (uVar7 != 0) {
        param_4 = param_4 & 0x7fffffff;
        iVar8 = LZCOUNT(param_4);
        if (param_4 == 0) {
          iVar8 = iVar8 + LZCOUNT(param_3);
        }
        uVar5 = iVar8 - 0xb;
        if (uVar5 < 0x20) {
          uVar4 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
        }
        else {
          uVar4 = param_3 << (iVar8 - 0x2bU & 0xff);
        }
        param_3 = param_3 << (uVar5 & 0xff);
        iVar8 = ((uVar7 + uVar9) - uVar5) + 1;
        goto LAB_0800bc54;
      }
      if (uVar9 != 0) {
        uVar7 = param_2 << 0xc;
        uVar4 = param_1;
        if (param_2 << 0xc == 0) {
          uVar4 = 0;
          uVar9 = uVar9 - 0x14;
          uVar7 = param_1;
        }
        iVar10 = LZCOUNT(uVar7);
        iVar8 = uVar9 - iVar10;
        param_1 = uVar4 << iVar10 + 0xc;
        uVar7 = uVar7 << iVar10 | uVar4 >> (0x20U - (iVar10 + 0xc) & 0xff);
        uVar4 = param_4 & 0x1fffff | 0x100000;
        goto LAB_0800bc60;
      }
    }
  }
  else {
    iVar8 = uVar7 + unaff_r7;
    uVar4 = param_4 & 0x1fffff | 0x100000;
LAB_0800bc54:
    uVar7 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    param_1 = param_1 << 0xb;
LAB_0800bc60:
    uVar2 = (ulonglong)uVar7 * (ulonglong)param_3 +
            ((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar9 = (uint)(uVar2 >> 0x20);
    lVar3 = (ulonglong)uVar4 * (ulonglong)param_1 + (uVar2 & 0xffffffff);
    uVar6 = (uint)lVar3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x20);
    if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
      uVar6 = uVar6 | 1;
    }
    uVar2 = (ulonglong)uVar4 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar9,uVar5),uVar9 + uVar5);
    uVar7 = (uint)uVar2;
    uVar4 = (uint)(uVar2 >> 0x20);
    bVar12 = (uVar2 & 0x10000000000000) != 0;
    if (!bVar12) {
      bVar1 = (uVar6 & 0x80000000) != 0;
      uVar6 = uVar6 << 1;
      bVar13 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar1);
      bVar12 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar13);
      uVar2 = CONCAT44(uVar4 * 2 + (uint)bVar13,uVar7 * 2 + (uint)bVar1);
    }
    uVar4 = (uint)(uVar2 >> 0x20);
    uVar7 = (uint)uVar2;
    iVar10 = iVar8 + -0x3ff + (uint)bVar12;
    if (iVar10 != 0 &&
        iVar10 < 0 == (SCARRY4(iVar8 + -0x400,1) != SCARRY4(iVar8 + -0x3ff,(uint)bVar12))) {
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)((uVar2 & 1) != 0);
      iVar8 = uVar4 + iVar10 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar12);
      if (iVar8 < 0) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      return CONCAT44(iVar8 - 0x100000U | uVar11,uVar7 + bVar12);
    }
    uVar9 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar9 < 0x20) {
      bVar12 = (uVar6 & 1) != 0;
      uVar6 = uVar6 >> 1;
      if (bVar12) {
        uVar6 = uVar6 | 1;
      }
      uVar5 = 0x20 - uVar9 & 0xff;
      bVar12 = uVar5 == 0 && bVar12 || uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar6 | uVar7 << uVar5;
      uVar7 = uVar7 >> (uVar9 & 0xff) | uVar4 << (0x20 - uVar9 & 0xff);
      uVar4 = uVar4 >> (uVar9 & 0xff);
LAB_0800bdc0:
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)bVar12;
      return CONCAT44(uVar4 + uVar11 + CARRY4(uVar7,(uint)bVar12),uVar7 + bVar12);
    }
    if ((int)uVar9 < 0x36) {
      uVar9 = uVar7 >> (uVar5 & 0xff);
      if ((uVar6 | uVar7 << 1) != 0) {
        uVar9 = uVar9 | 1;
      }
      uVar6 = uVar5 & 0xff;
      uVar7 = uVar4 >> uVar6;
      uVar5 = 0x20 - uVar5 & 0xff;
      bVar12 = uVar5 == 0 &&
               (uVar6 == 0 && (bool)((byte)(uVar2 >> 0x18) >> 7) ||
               uVar6 != 0 && (uVar4 >> uVar6 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar4 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar9 | uVar4 << uVar5;
      uVar4 = 0;
      goto LAB_0800bdc0;
    }
  }
  param_1 = 0;
  param_4 = uVar11;
LAB_0800bcda:
  return CONCAT44(param_4,param_1);
}



//==== FUNC FUN_0800bdd0 @ 0800bdd0 ====

ulonglong FUN_0800bdd0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined in_CY;
  bool bVar14;
  
  uVar11 = param_2 ^ param_4;
  uVar12 = uVar11 & 0x80000000;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar4 == 0;
  if (!bVar14) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r7 == 0;
  }
  if (!bVar14) {
    in_CY = 0x7fe < uVar4;
    bVar14 = uVar4 == 0x7ff;
  }
  if (!bVar14) {
    in_CY = 0x7fe < unaff_r7;
    bVar14 = unaff_r7 == 0x7ff;
  }
  if (bVar14) {
    if (uVar4 != 0x7ff) {
      unaff_r7 = param_4 >> 0x14 & 0x7ff;
    }
    if (uVar4 == 0x7ff || unaff_r7 == 0x7ff) {
      uVar4 = param_2 * 2;
      if (uVar4 < 0xffe00001) {
        uVar4 = param_4 * 2;
      }
      if (uVar4 == 0xffe00000) {
        uVar4 = param_2 << 1;
      }
      if (uVar4 < 0xffe00000) {
        if ((param_4 & 0x7fffffff) != 0x7ff00000) {
          uVar12 = uVar12 | 0x7ff00000;
        }
      }
      else {
        uVar12 = 0xffffffff;
      }
      return (ulonglong)uVar12 << 0x20;
    }
    uVar7 = param_1 | param_2 << 1;
    bVar14 = uVar7 == 0;
    if (!bVar14) {
      uVar7 = param_3 | param_4 << 1;
      bVar14 = uVar7 == 0;
    }
    if (bVar14) {
      if ((param_1 | param_2 << 1) == 0) {
        if ((param_3 | param_4 << 1) == 0) {
          uVar12 = ~uVar7;
        }
        return CONCAT44(uVar12,uVar7);
      }
      return CONCAT44(uVar11,uVar7) & 0x80000000ffffffff | 0x7ff0000000000000;
    }
    if (unaff_r7 == 0) {
      uVar2 = param_3 * 2;
      iVar3 = param_4 * 2 + (uint)CARRY4(param_3,param_3);
      iVar10 = LZCOUNT(iVar3);
      if (iVar3 == 0) {
        iVar10 = iVar10 + LZCOUNT(uVar2);
      }
      uVar7 = iVar10 - 0xb;
      if (uVar7 < 0x20) {
        param_4 = iVar3 << (uVar7 & 0xff) | uVar2 >> (0x20 - uVar7 & 0xff);
      }
      else {
        param_4 = uVar2 << (iVar10 - 0x2bU & 0xff);
      }
      param_3 = uVar2 << (uVar7 & 0xff);
      if (uVar4 != 0) {
        iVar3 = uVar4 + uVar7 + -1;
        goto LAB_0800bdf0;
      }
    }
    else {
      uVar7 = -unaff_r7;
    }
    param_2 = param_2 & 0x7fffffff;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = iVar3 + LZCOUNT(param_1);
    }
    uVar4 = iVar3 - 0xb;
    if (uVar4 < 0x20) {
      param_2 = param_2 << (uVar4 & 0xff) | param_1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      param_2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar4 & 0xff);
    iVar3 = uVar7 - uVar4;
  }
  else {
    iVar3 = (uVar4 - unaff_r7) - (uint)!(bool)in_CY;
  }
LAB_0800bdf0:
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  uVar4 = param_1 - param_3;
  iVar10 = (param_2 - param_4) - (uint)(param_3 > param_1);
  uVar7 = param_4 | 0x100000;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    iVar3 = iVar3 + -1;
    uVar2 = uVar4 & 0x80000000;
    uVar1 = uVar4 * 2;
    uVar4 = uVar1 + param_3;
    iVar10 = iVar10 * 2 + (uint)(uVar2 != 0) + uVar7 + (uint)CARRY4(uVar1,param_3);
  }
  uVar1 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar2 = uVar4 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar4) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar13 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar13;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar13);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar13 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar2) <= uVar1 - uVar5) {
    uVar13 = uVar13 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 10 | uVar4 >> 0x16;
  uVar8 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar8;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar8);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar8 >> 0x20);
  uVar4 = uVar4 * 0x400;
  uVar2 = uVar4 - uVar9;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar9 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar9 <= uVar4) <= uVar1 - uVar5) {
    uVar8 = uVar8 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar8 = uVar6 << 0x15 | uVar13 << 10 | uVar8;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar13 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar13;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar13 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar13 <= uVar2) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar2 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar5 = uVar2 / uVar7;
  uVar2 = uVar2 - uVar7 * uVar5;
  uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar5 = uVar5 - (uVar2 <= uVar1 && (uint)(uVar7 <= uVar4) <= uVar2 - uVar1);
  if (uVar2 - uVar1 != (uint)(uVar7 > uVar4) || uVar4 - uVar7 != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar4 = uVar5 & 0xffc007ff;
  uVar7 = (uVar4 | (uVar6 & 0x7ff) << 0xb) >> 2;
  iVar10 = iVar3 + 0x400;
  if (iVar10 == 0 || iVar10 < 0 != SCARRY4(iVar3,0x400)) {
    uVar1 = (uVar4 << 0x1e) >> 1;
    uVar7 = uVar7 | uVar8 << 0x14;
    uVar4 = uVar8 >> 0xc | 0x100000;
    uVar2 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar2 < 0x20) {
      uVar8 = uVar2 & 0xff;
      uVar13 = uVar2 & 0xff;
      uVar11 = uVar4 >> (uVar2 & 0xff);
      uVar6 = uVar7 >> (uVar2 & 0xff) | uVar4 << (0x20 - uVar2 & 0xff);
      uVar5 = 0x20 - uVar2 & 0xff;
      bVar14 = uVar5 == 0 &&
               (uVar13 == 0 &&
                (uVar8 == 0 && 0x1f < uVar2 || uVar8 != 0 && (uVar7 >> uVar8 - 1 & 1) != 0) ||
               uVar13 != 0 && (uVar4 >> uVar13 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar1 = uVar1 | uVar7 << uVar5;
    }
    else {
      if (0x34 < (int)uVar2) {
        return ((ulonglong)uVar11 & 0x80000000) << 0x20;
      }
      uVar6 = uVar4 >> (uVar5 & 0xff);
      uVar11 = 0x20 - uVar5 & 0xff;
      bVar14 = uVar11 != 0 && (uVar4 << uVar11 - 1 & 0x80000000) != 0;
      uVar1 = (uVar1 | uVar7 << 1) >> 1 | uVar7 >> (uVar5 & 0xff) | uVar4 << uVar11;
      uVar11 = 0;
    }
    bVar14 = 0x80000000 < uVar1 || uVar1 + 0x80000000 < (uint)bVar14;
    return CONCAT44(uVar11 + uVar12 + CARRY4(uVar6,(uint)bVar14),uVar6 + bVar14);
  }
  bVar14 = 0x80000000 < uVar4 * 0x40000000 ||
           uVar4 * 0x40000000 + 0x80000000 < (uint)((uVar5 & 4) != 0);
  uVar4 = uVar8 * 0x100000;
  uVar11 = (uVar8 >> 0xc) +
           iVar10 * 0x100000 + (uint)(CARRY4(uVar7,uVar4) || CARRY4(uVar7 + uVar4,(uint)bVar14));
  if ((int)(uVar11 + 0x100000) < 0) {
    return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar11 | uVar12,uVar7 + uVar4 + bVar14);
}



//==== FUNC FUN_0800c016 @ 0800c016 ====

void FUN_0800c016(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2 / param_3;
  param_1[1] = param_2 - (param_2 / param_3) * param_3;
  return;
}



//==== FUNC FUN_0800c024 @ 0800c024 ====

void FUN_0800c024(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  param_4 = param_4 + -1;
  while ((uVar3 < param_2 && (-1 < param_4))) {
    uVar1 = 0;
    for (uVar2 = 0; (-1 < param_4 && (uVar2 < 0x20)); uVar2 = uVar2 + 8) {
      uVar1 = (uint)*(byte *)(param_4 + param_3) << (uVar2 & 0xff) | uVar1;
      param_4 = param_4 + -1;
    }
    *(uint *)(param_1 + uVar3 * 4) = uVar1;
    uVar3 = uVar3 + 1;
  }
  for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
    *(undefined4 *)(param_1 + uVar3 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0800c07c @ 0800c07c ====

void FUN_0800c07c(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  param_2 = param_2 + -1;
  while ((uVar1 < param_4 && (-1 < param_2))) {
    uVar3 = *(uint *)(param_3 + uVar1 * 4);
    for (uVar2 = 0; (-1 < param_2 && (uVar2 < 0x20)); uVar2 = uVar2 + 8) {
      *(char *)(param_2 + param_1) = (char)(uVar3 >> (uVar2 & 0xff));
      param_2 = param_2 + -1;
    }
    uVar1 = uVar1 + 1;
  }
  for (; -1 < param_2; param_2 = param_2 + -1) {
    *(undefined *)(param_2 + param_1) = 0;
  }
  return;
}



//==== FUNC FUN_0800c0cc @ 0800c0cc ====

void FUN_0800c0cc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = *(undefined4 *)(param_2 + uVar1 * 4);
  }
  return;
}



//==== FUNC FUN_0800c0e6 @ 0800c0e6 ====

void FUN_0800c0e6(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
  }
  return;
}



//==== FUNC FUN_0800c0fa @ 0800c0fa ====

void FUN_0800c0fa(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
    uVar3 = *(int *)(param_2 + uVar2 * 4) - iVar1;
    if (-iVar1 - 1U < uVar3) {
      uVar3 = -*(int *)(param_3 + uVar2 * 4) - 1;
    }
    else {
      uVar3 = uVar3 - *(int *)(param_3 + uVar2 * 4);
      if (-*(int *)(param_3 + uVar2 * 4) - 1U < uVar3) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    *(uint *)(param_1 + uVar2 * 4) = uVar3;
  }
  return;
}



//==== FUNC FUN_0800c15a @ 0800c15a ====

void FUN_0800c15a(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_22c [131];
  
  FUN_0800c0e6(aiStack_22c,param_4 << 1);
  uVar1 = FUN_0800c586(param_2,param_4);
  iVar2 = FUN_0800c586(param_3,param_4);
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    iVar3 = FUN_0800c5a0(aiStack_22c + uVar4,aiStack_22c + uVar4,
                         *(undefined4 *)(param_2 + uVar4 * 4),param_3,iVar2);
    aiStack_22c[iVar2 + uVar4] = iVar3 + aiStack_22c[iVar2 + uVar4];
  }
  FUN_0800c0cc(param_1,aiStack_22c,param_4 << 1);
  FUN_08003a00(aiStack_22c,0,0x208);
  return;
}



//==== FUNC FUN_0800c1e2 @ 0800c1e2 ====

uint FUN_0800c1e2(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      uVar2 = *(uint *)(param_2 + uVar3 * 4);
      *(uint *)(param_1 + uVar3 * 4) = uVar2 << (param_3 & 0xff) | uVar1;
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar2 >> (0x20 - param_3 & 0xff);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_0800c226 @ 0800c226 ====

uint FUN_0800c226(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 < 0x20) {
    uVar1 = 0;
    for (param_4 = param_4 + -1; -1 < param_4; param_4 = param_4 + -1) {
      uVar2 = *(uint *)(param_2 + param_4 * 4);
      *(uint *)(param_1 + param_4 * 4) = uVar2 >> (param_3 & 0xff) | uVar1;
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar2 << (0x20 - param_3 & 0xff);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== FUNC FUN_0800c26a @ 0800c26a ====

void FUN_0800c26a(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_344;
  undefined4 local_340;
  int local_33c;
  undefined auStack_338 [256];
  undefined auStack_238 [4];
  int aiStack_234 [132];
  
  local_340 = param_2;
  local_33c = param_3;
  iVar1 = FUN_0800c586(param_5,param_6);
  if (iVar1 != 0) {
    iVar2 = FUN_0800c692(*(undefined4 *)(param_5 + iVar1 * 4 + -4));
    iVar2 = 0x20 - iVar2;
    FUN_0800c0e6(aiStack_234,iVar1);
    iVar3 = FUN_0800c1e2(aiStack_234,local_33c,iVar2,param_4);
    aiStack_234[param_4] = iVar3;
    FUN_0800c1e2(auStack_338,param_5,iVar2,iVar1);
    iVar3 = *(int *)(auStack_338 + iVar1 * 4 + -4);
    FUN_0800c0e6(param_1,param_4);
    for (param_4 = param_4 - iVar1; -1 < param_4; param_4 = param_4 + -1) {
      if (iVar3 == -1) {
        local_344 = aiStack_234[iVar1 + param_4];
      }
      else {
        FUN_0800d7c6(&local_344,auStack_238 + (iVar1 + param_4) * 4,iVar3 + 1);
      }
      iVar4 = FUN_0800c612(aiStack_234 + param_4,aiStack_234 + param_4,local_344,auStack_338,iVar1);
      aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar4;
      while ((aiStack_234[iVar1 + param_4] != 0 ||
             (iVar4 = FUN_0800c54e(aiStack_234 + param_4,auStack_338,iVar1), -1 < iVar4))) {
        local_344 = local_344 + 1;
        iVar4 = FUN_0800c0fa(aiStack_234 + param_4,aiStack_234 + param_4,auStack_338,iVar1);
        aiStack_234[iVar1 + param_4] = aiStack_234[iVar1 + param_4] - iVar4;
      }
      *(int *)(param_1 + param_4 * 4) = local_344;
    }
    FUN_0800c0e6(local_340,param_6);
    FUN_0800c226(local_340,aiStack_234,iVar2,iVar1);
    FUN_08003a00(aiStack_234,0,0x20c);
    FUN_08003a00(auStack_338,0,0x104);
  }
  return;
}



//==== FUNC FUN_0800c3d2 @ 0800c3d2 ====

void FUN_0800c3d2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined auStack_220 [520];
  
  FUN_0800c26a(auStack_220,param_1,param_2,param_3,param_4,param_5);
  FUN_08003a00(auStack_220,0,0x208);
  return;
}



//==== FUNC FUN_0800c40c @ 0800c40c ====

void FUN_0800c40c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined auStack_224 [524];
  
  FUN_0800c15a(auStack_224,param_2,param_3,param_5);
  FUN_0800c3d2(param_1,auStack_224,param_5 << 1,param_4,param_5);
  FUN_08003a00(auStack_224,0,0x208);
  return;
}



//==== FUNC FUN_0800c452 @ 0800c452 ====

void FUN_0800c452(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_438 [65];
  undefined auStack_334 [260];
  undefined auStack_230 [260];
  undefined auStack_12c [264];
  
  FUN_0800c0cc(auStack_334,param_2,param_6);
  FUN_0800c40c(auStack_230,auStack_334,param_2,param_5,param_6);
  FUN_0800c40c(auStack_12c,auStack_230,param_2,param_5,param_6);
  FUN_0800c0e6(local_438,param_6);
  local_438[0] = 1;
  iVar1 = FUN_0800c586(param_3,param_4);
  iVar3 = iVar1;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    uVar2 = *(uint *)(param_3 + iVar3 * 4);
    uVar4 = 0x20;
    if (iVar3 == iVar1 + -1) {
      for (; uVar2 >> 0x1e == 0; uVar2 = uVar2 << 2) {
        uVar4 = uVar4 - 2;
      }
    }
    for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 2) {
      FUN_0800c40c(local_438,local_438,local_438,param_5,param_6);
      FUN_0800c40c(local_438,local_438,local_438,param_5,param_6);
      if (uVar2 >> 0x1e != 0) {
        FUN_0800c40c(local_438,local_438,local_438 + (uVar2 >> 0x1e) * 0x41,param_5,param_6);
      }
      uVar2 = uVar2 << 2;
    }
  }
  FUN_0800c0cc(param_1,local_438,param_6);
  FUN_08003a00(auStack_334,0,0x30c);
  FUN_08003a00(local_438,0,0x104);
  return;
}



//==== FUNC FUN_0800c54e @ 0800c54e ====

undefined4 FUN_0800c54e(int param_1,int param_2,int param_3)

{
  param_3 = param_3 + -1;
  while( true ) {
    if (param_3 < 0) {
      return 0;
    }
    if (*(uint *)(param_2 + param_3 * 4) < *(uint *)(param_1 + param_3 * 4)) break;
    if (*(uint *)(param_1 + param_3 * 4) < *(uint *)(param_2 + param_3 * 4)) {
      return 0xffffffff;
    }
    param_3 = param_3 + -1;
  }
  return 1;
}



//==== FUNC FUN_0800c586 @ 0800c586 ====

int FUN_0800c586(int param_1,int param_2)

{
  for (param_2 = param_2 + -1; (-1 < param_2 && (*(int *)(param_1 + param_2 * 4) == 0));
      param_2 = param_2 + -1) {
  }
  return param_2 + 1;
}



//==== FUNC FUN_0800c5a0 @ 0800c5a0 ====

undefined8 FUN_0800c5a0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  int local_24;
  
  local_28 = param_3;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    local_24 = param_4;
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
      FUN_0800d73e(&local_28,param_3,*(undefined4 *)(param_4 + uVar3 * 4));
      uVar2 = uVar1 + *(int *)(param_2 + uVar3 * 4);
      *(uint *)(param_1 + uVar3 * 4) = uVar2;
      uVar1 = (uint)(uVar2 < uVar1);
      uVar2 = local_28 + *(int *)(param_1 + uVar3 * 4);
      *(uint *)(param_1 + uVar3 * 4) = uVar2;
      if (uVar2 < local_28) {
        uVar1 = uVar1 + 1;
      }
      uVar1 = local_24 + uVar1;
    }
  }
  return CONCAT44(local_28,uVar1);
}



//==== FUNC FUN_0800c612 @ 0800c612 ====

undefined8 FUN_0800c612(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_28;
  int local_24;
  
  local_28 = param_3;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    local_24 = param_4;
    for (uVar4 = 0; uVar4 < param_5; uVar4 = uVar4 + 1) {
      FUN_0800d73e(&local_28,param_3,*(undefined4 *)(param_4 + uVar4 * 4));
      uVar2 = *(int *)(param_2 + uVar4 * 4) - iVar1;
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      uVar3 = (uint)(-iVar1 - 1U < uVar2);
      uVar2 = *(int *)(param_1 + uVar4 * 4) - local_28;
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      if (-local_28 - 1U < uVar2) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = local_24 + uVar3;
    }
  }
  return CONCAT44(local_28,iVar1);
}



//==== FUNC FUN_0800c692 @ 0800c692 ====

void FUN_0800c692(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; (uVar1 < 0x20 && (param_1 != 0)); param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  return;
}



//==== FUNC FUN_0800c6a8 @ 0800c6a8 ====

undefined4 FUN_0800c6a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0800d9a8(param_1,param_3,param_2);
  return param_1;
}



//==== FUNC FUN_0800c6c0 @ 0800c6c0 ====

undefined4 FUN_0800c6c0(void)

{
  int *piVar1;
  
  piVar1 = DAT_0800cd68;
  if (*DAT_0800cd68 == 0) {
    DAT_0800cd68[2] = 0x10000;
    piVar1[1] = 0x1000;
    piVar1[3] = -1;
    piVar1[4] = -1;
    piVar1[5] = 4;
    *(undefined4 *)(DAT_0800cd6c + 0x1b8) = 4;
    *piVar1 = DAT_0800cd70;
  }
  return 1;
}



//==== FUNC FUN_0800c6f4 @ 0800c6f4 ====

void FUN_0800c6f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 + 8U & 7) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 8 - (param_2 + 8U & 7) & 7;
  }
  param_2 = uVar1 + param_2;
  uVar1 = param_3 - uVar1;
  *(int *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_2 + 4) = uVar1 | 1;
  *(undefined4 *)(uVar1 + param_2 + 4) = 0x28;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(DAT_0800cd68 + 0x10);
  return;
}



//==== FUNC FUN_0800ca36 @ 0800ca36 ====

void FUN_0800ca36(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint **ppuVar1;
  uint **ppuVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint **ppuVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar6 = (uint *)param_1[6];
  ppuVar1 = (uint **)(param_1 + 0x6f);
  do {
    if ((*ppuVar1 <= puVar6) && (puVar6 < (uint *)((int)ppuVar1[1] + (int)*ppuVar1))) break;
    ppuVar1 = (uint **)ppuVar1[2];
  } while (ppuVar1 != (uint **)0x0);
  puVar10 = (uint *)((int)ppuVar1[1] + (int)*ppuVar1);
  if (((int)puVar10 - 0x27U & 7) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 8 - ((int)puVar10 - 0x27U & 7) & 7;
  }
  puVar12 = (uint *)((int)puVar10 + (uVar3 - 0x2f));
  if (puVar12 < puVar6 + 4) {
    puVar12 = puVar6;
  }
  iVar9 = 0;
  FUN_0800c6f4(param_1,param_2,param_3 - 0x28);
  if (((uint)(puVar12 + 2) & 7) == 0) {
    puVar12[1] = 0x1b;
    uVar3 = param_1[0x70];
    uVar5 = param_1[0x71];
    uVar13 = param_1[0x72];
    puVar12[2] = param_1[0x6f];
    puVar12[3] = uVar3;
    puVar12[4] = uVar5;
    puVar12[5] = uVar13;
    param_1[0x6f] = param_2;
    param_1[0x70] = param_3;
    param_1[0x72] = param_4;
    param_1[0x71] = (uint)(puVar12 + 2);
    puVar11 = puVar12 + 6;
    do {
      puVar11[1] = 7;
      iVar9 = iVar9 + 1;
      puVar4 = puVar11 + 2;
      puVar11 = puVar11 + 1;
    } while (puVar4 < puVar10);
    if (1 < iVar9) {
      if (puVar12 != puVar6) {
        uVar3 = (int)puVar12 - (int)puVar6;
        *(uint *)((int)puVar6 + uVar3 + 4) = *(uint *)((int)puVar6 + uVar3 + 4) & 0xfffffffe;
        puVar6[1] = uVar3 | 1;
        *(uint *)(uVar3 + (int)puVar6) = uVar3;
        if (uVar3 >> 3 < 0x20) {
          uVar5 = uVar3 & 0xfffffff8;
          uVar13 = (int)param_1 + uVar5 + 0x28;
          if (uVar3 < 0x10) goto LAB_0800dad0;
          uVar3 = 1 << (uVar3 >> 3 & 0xff);
          if ((*param_1 & uVar3) == 0) {
            *param_1 = uVar3 | *param_1;
            uVar3 = uVar13;
          }
          else {
            uVar3 = *(uint *)((int)param_1 + uVar5 + 0x30);
            if (uVar3 < param_1[4]) goto LAB_0800dad0;
          }
          *(uint **)((int)param_1 + uVar5 + 0x30) = puVar6;
          *(uint **)(uVar3 + 0xc) = puVar6;
          puVar6[2] = uVar3;
          puVar6[3] = uVar13;
        }
        else {
          uVar5 = uVar3 >> 8;
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else if (uVar5 < 0x10000) {
            uVar13 = uVar5 - 0x100 >> 0x10 & 8;
            iVar9 = uVar5 << uVar13;
            uVar5 = iVar9 - 0x1000U >> 0x10 & 4;
            iVar9 = iVar9 << uVar5;
            uVar7 = iVar9 - 0x4000U >> 0x10 & 2;
            iVar9 = (((0xe - uVar13) - uVar5) - uVar7) + ((uint)(iVar9 << uVar7) >> 0xf);
            uVar5 = (uVar3 >> (iVar9 + 7U & 0xff) & 1) + iVar9 * 2;
          }
          else {
            uVar5 = 0x1f;
          }
          ppuVar1 = (uint **)(param_1 + uVar5 + 0x4c);
          puVar6[7] = uVar5;
          puVar6[5] = 0;
          puVar6[4] = 0;
          uVar13 = 1 << (uVar5 & 0xff);
          if ((param_1[1] & uVar13) == 0) {
            param_1[1] = uVar13 | param_1[1];
            *ppuVar1 = puVar6;
          }
          else {
            if (uVar5 == 0x1f) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0x19 - (uVar5 >> 1);
            }
            iVar9 = uVar3 << (uVar5 & 0xff);
            ppuVar2 = (uint **)*ppuVar1;
            do {
              ppuVar1 = ppuVar2;
              if (((uint)ppuVar1[1] & 0xfffffff8) == uVar3) {
                ppuVar2 = (uint **)ppuVar1[2];
                if (((uint **)param_1[4] <= ppuVar1) && ((uint **)param_1[4] <= ppuVar2)) {
                  ppuVar2[3] = puVar6;
                  ppuVar1[2] = puVar6;
                  puVar6[2] = (uint)ppuVar2;
                  puVar6[3] = (uint)ppuVar1;
                  puVar6[6] = 0;
                  return;
                }
                goto LAB_0800dad0;
              }
              ppuVar8 = ppuVar1 + (4 - (iVar9 >> 0x1f));
              iVar9 = iVar9 << 1;
              ppuVar2 = (uint **)*ppuVar8;
            } while ((uint **)*ppuVar8 != (uint **)0x0);
            if (ppuVar8 < (uint **)param_1[4]) goto LAB_0800dad0;
            *ppuVar8 = puVar6;
          }
          puVar6[6] = (uint)ppuVar1;
          puVar6[3] = (uint)puVar6;
          puVar6[2] = (uint)puVar6;
        }
      }
      return;
    }
  }
LAB_0800dad0:
  FUN_0800daec(1);
  do {
    software_bkpt(0xab);
  } while( true );
}



//==== FUNC FUN_0800cc28 @ 0800cc28 ====

longlong FUN_0800cc28(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  uint uVar10;
  uint uVar11;
  uint **ppuVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  puVar3 = DAT_0800cd68;
  if (*DAT_0800cd68 == 0) {
    FUN_0800c6c0();
  }
  puVar2 = (uint *)FUN_0800da18();
  if ((puVar2 != (uint *)0x0) && (uVar5 = *puVar2, puVar2 != (uint *)0xffffffff)) {
    param_1[0x6c] = uVar5 + param_1[0x6c];
    uVar4 = param_1[0x6d];
    if (param_1[0x6d] < param_1[0x6c]) {
      uVar4 = param_1[0x6c];
    }
    param_1[0x6d] = uVar4;
    if (param_1[6] == 0) {
      if (((uint *)param_1[4] == (uint *)0x0) || (puVar2 < (uint *)param_1[4])) {
        param_1[4] = (uint)puVar2;
      }
      param_1[0x6f] = (uint)puVar2;
      param_1[0x70] = uVar5;
      param_1[0x72] = 0;
      param_1[9] = *puVar3;
      param_1[8] = 0xffffffff;
      iVar7 = 0x20;
      puVar3 = param_1;
      do {
        puVar3[0xd] = (uint)(puVar3 + 10);
        puVar3[0xc] = (uint)(puVar3 + 10);
        puVar3 = puVar3 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (param_1 == DAT_0800cd6c) {
        iVar7 = uVar5 - 0x28;
        puVar3 = puVar2;
      }
      else {
        puVar3 = (uint *)((int)param_1 + ((param_1[-1] & 0xfffffff8) - 8));
        iVar7 = (int)puVar2 + (uVar5 - (int)puVar3) + -0x28;
      }
LAB_0800cca8:
      FUN_0800c6f4(param_1,puVar3,iVar7);
    }
    else {
      ppuVar9 = (uint **)(param_1 + 0x6f);
      for (ppuVar8 = ppuVar9; ppuVar8 != (uint **)0x0; ppuVar8 = (uint **)ppuVar8[2]) {
        puVar3 = *ppuVar8;
        if (puVar2 == (uint *)((int)ppuVar8[1] + (int)puVar3)) {
          if (((-1 < (int)((uint)*(byte *)(ppuVar8 + 3) << 0x1c)) && (puVar3 <= (uint *)param_1[6]))
             && (param_1[6] < (uint)((int)ppuVar8[1] + (int)puVar3))) {
            ppuVar8[1] = (uint *)(uVar5 + (int)ppuVar8[1]);
            iVar7 = uVar5 + param_1[3];
            puVar3 = (uint *)param_1[6];
            goto LAB_0800cca8;
          }
          break;
        }
      }
      if (puVar2 < (uint *)param_1[4]) {
        param_1[4] = (uint)puVar2;
      }
      for (; ppuVar9 != (uint **)0x0; ppuVar9 = (uint **)ppuVar9[2]) {
        puVar3 = *ppuVar9;
        if (puVar3 == (uint *)(uVar5 + (int)puVar2)) {
          if (-1 < (int)((uint)*(byte *)(ppuVar9 + 3) << 0x1c)) {
            *ppuVar9 = puVar2;
            ppuVar9[1] = (uint *)(uVar5 + (int)ppuVar9[1]);
            if (((uint)(puVar2 + 2) & 7) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 8 - ((uint)(puVar2 + 2) & 7) & 7;
            }
            iVar7 = uVar5 + (int)puVar2;
            if (((uint)(puVar3 + 2) & 7) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 8 - ((uint)(puVar3 + 2) & 7) & 7;
            }
            uVar5 = uVar5 + (int)puVar3;
            puVar3 = (uint *)(param_2 + iVar7);
            uVar4 = (uVar5 - iVar7) - param_2;
            *(uint *)(iVar7 + 4) = param_2 | 3;
            if (((uVar5 <= puVar3) || (uVar10 = *(uint *)(uVar5 + 4), -1 < (int)(uVar10 << 0x1f)))
               || (uVar4 < 0x10)) goto LAB_0800c784;
            if (uVar5 == param_1[6]) {
              uVar5 = param_1[3];
              param_1[3] = uVar4 + uVar5;
              param_1[6] = (uint)puVar3;
              puVar3[1] = uVar4 + uVar5 | 1;
              goto LAB_0800ca2e;
            }
            if (uVar5 == param_1[5]) {
              uVar4 = uVar4 + param_1[2];
              param_1[2] = uVar4;
              param_1[5] = (uint)puVar3;
              puVar3[1] = uVar4 | 1;
              *(uint *)(uVar4 + (int)puVar3) = uVar4;
              goto LAB_0800ca2e;
            }
            if ((uVar10 & 3) != 1) goto LAB_0800c90a;
            if (0x1f < uVar10 >> 3) {
              uVar13 = *(uint *)(uVar5 + 0x18);
              uVar11 = *(uint *)(uVar5 + 0xc);
              if (uVar11 == uVar5) {
                puVar2 = (uint *)(uVar5 + 0x14);
                uVar11 = *puVar2;
                if (uVar11 != 0) goto LAB_0800c860;
                puVar2 = (uint *)(uVar5 + 0x10);
                uVar11 = *puVar2;
                if (uVar11 != 0) goto LAB_0800c860;
              }
              else {
                uVar14 = *(uint *)(uVar5 + 8);
                if (uVar14 < param_1[4]) goto LAB_0800c784;
                *(uint *)(uVar14 + 0xc) = uVar11;
                *(uint *)(uVar11 + 8) = uVar14;
              }
              goto LAB_0800c88e;
            }
            uVar11 = *(uint *)(uVar5 + 8);
            uVar13 = *(uint *)(uVar5 + 0xc);
            if ((uVar5 == uVar13) || (uVar5 == uVar11)) goto LAB_0800c784;
            if (uVar11 == uVar13) {
              *param_1 = *param_1 & ~(1 << (uVar10 >> 3 & 0xff));
              goto LAB_0800c906;
            }
            if (((uVar11 != (int)param_1 + (uVar10 & 0xfffffff8) + 0x28) && (uVar11 < param_1[4]))
               || ((uVar13 != (int)param_1 + (uVar10 & 0xfffffff8) + 0x28 && (uVar13 < param_1[4])))
               ) goto LAB_0800c784;
            *(uint *)(uVar11 + 0xc) = uVar13;
            *(uint *)(uVar13 + 8) = uVar11;
            goto LAB_0800c906;
          }
          break;
        }
      }
      FUN_0800ca36(param_1,puVar2,uVar5,0);
    }
    if (param_2 < param_1[3]) {
      uVar5 = param_1[3] - param_2;
      param_1[3] = uVar5;
      uVar4 = param_1[6];
      param_1[6] = param_2 + uVar4;
      *(uint *)(param_2 + uVar4 + 4) = uVar5 | 1;
      *(uint *)(uVar4 + 4) = param_2 | 3;
      return CONCAT44(param_4,uVar4 + 8);
    }
  }
  return (ulonglong)param_4 << 0x20;
LAB_0800c860:
  while ((puVar1 = (uint *)(uVar11 + 0x14), *(uint *)(uVar11 + 0x14) != 0 ||
         (puVar1 = (uint *)(uVar11 + 0x10), *(uint *)(uVar11 + 0x10) != 0))) {
    puVar2 = puVar1;
    uVar11 = *puVar2;
  }
  if (puVar2 < (uint *)param_1[4]) goto LAB_0800c784;
  *puVar2 = 0;
LAB_0800c88e:
  if (uVar13 != 0) {
    if (uVar5 == param_1[*(int *)(uVar5 + 0x1c) + 0x4c]) {
      param_1[*(int *)(uVar5 + 0x1c) + 0x4c] = uVar11;
      if (uVar11 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(uVar5 + 0x1c) & 0xff));
        goto LAB_0800c906;
      }
    }
    else {
      if (uVar13 < param_1[4]) goto LAB_0800c784;
      bVar15 = *(uint *)(uVar13 + 0x10) == uVar5;
      if (bVar15) {
        *(uint *)(uVar13 + 0x10) = uVar11;
      }
      if (!bVar15) {
        *(uint *)(uVar13 + 0x14) = uVar11;
      }
    }
    if (uVar11 != 0) {
      if (uVar11 < param_1[4]) goto LAB_0800c784;
      *(uint *)(uVar11 + 0x18) = uVar13;
      uVar13 = *(uint *)(uVar5 + 0x10);
      if (uVar13 != 0) {
        if (uVar13 < param_1[4]) goto LAB_0800c784;
        *(uint *)(uVar11 + 0x10) = uVar13;
        *(uint *)(uVar13 + 0x18) = uVar11;
      }
      uVar13 = *(uint *)(uVar5 + 0x14);
      if (uVar13 != 0) {
        if (uVar13 < param_1[4]) goto LAB_0800c784;
        *(uint *)(uVar11 + 0x14) = uVar13;
        *(uint *)(uVar13 + 0x18) = uVar11;
      }
    }
  }
LAB_0800c906:
  uVar5 = (uVar10 & 0xfffffff8) + uVar5;
  uVar4 = (uVar10 & 0xfffffff8) + uVar4;
LAB_0800c90a:
  *(uint *)(uVar5 + 4) = *(uint *)(uVar5 + 4) & 0xfffffffe;
  puVar3[1] = uVar4 | 1;
  *(uint *)(uVar4 + (int)puVar3) = uVar4;
  if (uVar4 >> 3 < 0x20) {
    uVar5 = uVar4 & 0xfffffff8;
    uVar10 = (int)param_1 + uVar5 + 0x28;
    if (uVar4 < 0x10) {
LAB_0800c784:
      FUN_0800daec(1);
      do {
        software_bkpt(0xab);
      } while( true );
    }
    uVar4 = 1 << (uVar4 >> 3 & 0xff);
    if ((*param_1 & uVar4) == 0) {
      *param_1 = uVar4 | *param_1;
      uVar4 = uVar10;
    }
    else {
      uVar4 = *(uint *)((int)param_1 + uVar5 + 0x30);
      if (uVar4 < param_1[4]) goto LAB_0800c784;
    }
    *(uint **)((int)param_1 + uVar5 + 0x30) = puVar3;
    *(uint **)(uVar4 + 0xc) = puVar3;
    puVar3[2] = uVar4;
    puVar3[3] = uVar10;
  }
  else {
    uVar5 = uVar4 >> 8;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else if (uVar5 < 0x10000) {
      uVar10 = uVar5 - 0x100 >> 0x10 & 8;
      iVar6 = uVar5 << uVar10;
      uVar5 = iVar6 - 0x1000U >> 0x10 & 4;
      iVar6 = iVar6 << uVar5;
      uVar11 = iVar6 - 0x4000U >> 0x10 & 2;
      iVar6 = (((0xe - uVar10) - uVar5) - uVar11) + ((uint)(iVar6 << uVar11) >> 0xf);
      uVar5 = (uVar4 >> (iVar6 + 7U & 0xff) & 1) + iVar6 * 2;
    }
    else {
      uVar5 = 0x1f;
    }
    ppuVar8 = (uint **)(param_1 + uVar5 + 0x4c);
    puVar3[7] = uVar5;
    puVar3[5] = 0;
    puVar3[4] = 0;
    uVar10 = 1 << (uVar5 & 0xff);
    if ((param_1[1] & uVar10) == 0) {
      param_1[1] = uVar10 | param_1[1];
      *ppuVar8 = puVar3;
    }
    else {
      if (uVar5 == 0x1f) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x19 - (uVar5 >> 1);
      }
      iVar6 = uVar4 << (uVar5 & 0xff);
      ppuVar9 = (uint **)*ppuVar8;
      do {
        ppuVar8 = ppuVar9;
        if (((uint)ppuVar8[1] & 0xfffffff8) == uVar4) {
          ppuVar9 = (uint **)ppuVar8[2];
          if ((ppuVar8 < (uint **)param_1[4]) || (ppuVar9 < (uint **)param_1[4])) goto LAB_0800c784;
          ppuVar9[3] = puVar3;
          ppuVar8[2] = puVar3;
          puVar3[2] = (uint)ppuVar9;
          puVar3[3] = (uint)ppuVar8;
          puVar3[6] = 0;
          goto LAB_0800ca2e;
        }
        ppuVar12 = ppuVar8 + (4 - (iVar6 >> 0x1f));
        iVar6 = iVar6 << 1;
        ppuVar9 = (uint **)*ppuVar12;
      } while ((uint **)*ppuVar12 != (uint **)0x0);
      if (ppuVar12 < (uint **)param_1[4]) goto LAB_0800c784;
      *ppuVar12 = puVar3;
    }
    puVar3[6] = (uint)ppuVar8;
    puVar3[3] = (uint)puVar3;
    puVar3[2] = (uint)puVar3;
  }
LAB_0800ca2e:
  return CONCAT44(iVar7,iVar7 + 8);
}



//==== FUNC FUN_0800cd74 @ 0800cd74 ====

uint * FUN_0800cd74(uint *param_1,uint param_2)

{
  uint uVar1;
  uint **ppuVar2;
  uint *puVar3;
  uint **ppuVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint **ppuVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  puVar3 = (uint *)0x0;
  uVar1 = -param_2;
  uVar5 = param_2 >> 8;
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else if (uVar5 < 0x10000) {
    uVar7 = uVar5 - 0x100 >> 0x10 & 8;
    iVar6 = uVar5 << uVar7;
    uVar5 = iVar6 - 0x1000U >> 0x10 & 4;
    iVar6 = iVar6 << uVar5;
    uVar11 = iVar6 - 0x4000U >> 0x10 & 2;
    iVar6 = (((0xe - uVar7) - uVar5) - uVar11) + ((uint)(iVar6 << uVar11) >> 0xf);
    uVar5 = (param_2 >> (iVar6 + 7U & 0xff) & 1) + iVar6 * 2;
  }
  else {
    uVar5 = 0x1f;
  }
  if ((uint *)param_1[uVar5 + 0x4c] == (uint *)0x0) {
LAB_0800ce2c:
    iVar6 = 1 << (uVar5 & 0xff);
    uVar5 = (iVar6 * 2 | iVar6 * -2) & param_1[1];
    if (uVar5 == 0) {
      return (uint *)0x0;
    }
    uVar7 = (uVar5 & -uVar5) - 1;
    uVar5 = uVar7 >> 0xc & 0x10;
    uVar7 = uVar7 >> uVar5;
    uVar11 = uVar7 >> 5 & 8;
    uVar7 = uVar7 >> uVar11;
    uVar12 = uVar7 >> 2 & 4;
    uVar7 = uVar7 >> uVar12;
    uVar15 = uVar7 >> 1 & 2;
    uVar7 = uVar7 >> uVar15;
    uVar16 = -((int)(uVar7 << 0x1e) >> 0x1f);
    puVar9 = (uint *)param_1[(uVar7 >> (uVar16 & 0xff)) + uVar12 + uVar11 + uVar5 + uVar15 + uVar16
                             + 0x4c];
joined_r0x0800ce86:
    while (puVar9 != (uint *)0x0) {
      do {
        puVar8 = puVar9;
        uVar5 = (puVar8[1] & 0xfffffff8) - param_2;
        if (uVar5 < uVar1) {
          puVar3 = puVar8;
          uVar1 = uVar5;
        }
        puVar9 = (uint *)puVar8[4];
      } while ((uint *)puVar8[4] != (uint *)0x0);
      puVar9 = (uint *)puVar8[5];
    }
  }
  else {
    if (uVar5 == 0x1f) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x19 - (uVar5 >> 1);
    }
    iVar6 = param_2 << (uVar7 & 0xff);
    puVar8 = (uint *)param_1[uVar5 + 0x4c];
    puVar10 = (uint *)0x0;
    while ((puVar9 = puVar8, uVar7 = (puVar9[1] & 0xfffffff8) - param_2, uVar1 <= uVar7 ||
           (puVar3 = puVar9, uVar1 = uVar7, uVar7 != 0))) {
      puVar14 = (uint *)puVar9[5];
      puVar8 = (uint *)puVar9[4 - (iVar6 >> 0x1f)];
      puVar9 = puVar10;
      if ((puVar14 != (uint *)0x0) && (puVar14 != puVar8)) {
        puVar9 = puVar14;
      }
      if (puVar8 == (uint *)0x0) break;
      iVar6 = iVar6 << 1;
      puVar10 = puVar9;
    }
    if (puVar9 != (uint *)0x0) goto joined_r0x0800ce86;
    if (puVar3 == (uint *)0x0) goto LAB_0800ce2c;
  }
  if ((puVar3 == (uint *)0x0) || (param_1[2] - param_2 <= uVar1)) {
    return (uint *)0x0;
  }
  if (puVar3 < (uint *)param_1[4]) goto LAB_0800dad0;
  puVar8 = (uint *)(param_2 + (int)puVar3);
  uVar5 = param_2 + uVar1;
  if (((puVar3[1] & 0xfffffff8) != uVar5) || (puVar8 <= puVar3)) goto LAB_0800dad0;
  uVar7 = puVar3[6];
  puVar10 = (uint *)puVar3[3];
  if (puVar10 == puVar3) {
    ppuVar2 = (uint **)(puVar3 + 5);
    puVar10 = *ppuVar2;
    if (puVar10 == (uint *)0x0) {
      ppuVar2 = (uint **)(puVar3 + 4);
      puVar10 = *ppuVar2;
      if (puVar10 == (uint *)0x0) goto LAB_0800cf3c;
    }
    while ((ppuVar4 = (uint **)(puVar10 + 5), (uint *)puVar10[5] != (uint *)0x0 ||
           (ppuVar4 = (uint **)(puVar10 + 4), (uint *)puVar10[4] != (uint *)0x0))) {
      ppuVar2 = ppuVar4;
      puVar10 = *ppuVar2;
    }
    if (ppuVar2 < (uint **)param_1[4]) goto LAB_0800dad0;
    *ppuVar2 = (uint *)0x0;
  }
  else {
    uVar11 = puVar3[2];
    if (uVar11 < param_1[4]) goto LAB_0800dad0;
    *(uint **)(uVar11 + 0xc) = puVar10;
    puVar10[2] = uVar11;
  }
LAB_0800cf3c:
  if (uVar7 != 0) {
    if (puVar3 == (uint *)param_1[puVar3[7] + 0x4c]) {
      param_1[puVar3[7] + 0x4c] = (uint)puVar10;
      if (puVar10 == (uint *)0x0) {
        param_1[1] = param_1[1] & ~(1 << (puVar3[7] & 0xff));
        goto LAB_0800cfac;
      }
    }
    else {
      if (uVar7 < param_1[4]) goto LAB_0800dad0;
      bVar17 = *(uint **)(uVar7 + 0x10) == puVar3;
      if (bVar17) {
        *(uint **)(uVar7 + 0x10) = puVar10;
      }
      if (!bVar17) {
        *(uint **)(uVar7 + 0x14) = puVar10;
      }
    }
    if (puVar10 != (uint *)0x0) {
      if (puVar10 < (uint *)param_1[4]) goto LAB_0800dad0;
      puVar10[6] = uVar7;
      uVar7 = puVar3[4];
      if (uVar7 != 0) {
        if (uVar7 < param_1[4]) goto LAB_0800dad0;
        puVar10[4] = uVar7;
        *(uint **)(uVar7 + 0x18) = puVar10;
      }
      uVar7 = puVar3[5];
      if (uVar7 != 0) {
        if (uVar7 < param_1[4]) goto LAB_0800dad0;
        puVar10[5] = uVar7;
        *(uint **)(uVar7 + 0x18) = puVar10;
      }
    }
  }
LAB_0800cfac:
  if (uVar1 < 0x10) {
    puVar3[1] = uVar5 | 3;
    *(uint *)((int)puVar3 + uVar5 + 4) = *(uint *)((int)puVar3 + uVar5 + 4) | 1;
  }
  else {
    puVar3[1] = param_2 | 3;
    puVar8[1] = uVar1 | 1;
    *(uint *)(uVar1 + (int)puVar8) = uVar1;
    if (uVar1 >> 3 < 0x20) {
      uVar5 = uVar1 & 0xfffffff8;
      uVar7 = (int)param_1 + uVar5 + 0x28;
      uVar1 = 1 << (uVar1 >> 3 & 0xff);
      if ((*param_1 & uVar1) == 0) {
        *param_1 = uVar1 | *param_1;
        uVar1 = uVar7;
      }
      else {
        uVar1 = *(uint *)((int)param_1 + uVar5 + 0x30);
        if (uVar1 < param_1[4]) {
LAB_0800dad0:
          FUN_0800daec(1);
          do {
            software_bkpt(0xab);
          } while( true );
        }
      }
      *(uint **)((int)param_1 + uVar5 + 0x30) = puVar8;
      *(uint **)(uVar1 + 0xc) = puVar8;
      puVar8[2] = uVar1;
      puVar8[3] = uVar7;
    }
    else {
      uVar5 = uVar1 >> 8;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (uVar5 < 0x10000) {
        uVar7 = uVar5 - 0x100 >> 0x10 & 8;
        iVar6 = uVar5 << uVar7;
        uVar5 = iVar6 - 0x1000U >> 0x10 & 4;
        iVar6 = iVar6 << uVar5;
        uVar11 = iVar6 - 0x4000U >> 0x10 & 2;
        iVar6 = (((0xe - uVar7) - uVar5) - uVar11) + ((uint)(iVar6 << uVar11) >> 0xf);
        uVar5 = (uVar1 >> (iVar6 + 7U & 0xff) & 1) + iVar6 * 2;
      }
      else {
        uVar5 = 0x1f;
      }
      ppuVar2 = (uint **)(param_1 + uVar5 + 0x4c);
      puVar8[7] = uVar5;
      puVar8[5] = 0;
      puVar8[4] = 0;
      uVar7 = 1 << (uVar5 & 0xff);
      if ((param_1[1] & uVar7) == 0) {
        param_1[1] = param_1[1] | uVar7;
        *ppuVar2 = puVar8;
      }
      else {
        if (uVar5 == 0x1f) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x19 - (uVar5 >> 1);
        }
        iVar6 = uVar1 << (uVar5 & 0xff);
        ppuVar4 = (uint **)*ppuVar2;
        do {
          ppuVar2 = ppuVar4;
          if (((uint)ppuVar2[1] & 0xfffffff8) == uVar1) {
            ppuVar4 = (uint **)ppuVar2[2];
            if ((ppuVar2 < (uint **)param_1[4]) || (ppuVar4 < (uint **)param_1[4]))
            goto LAB_0800dad0;
            ppuVar4[3] = puVar8;
            ppuVar2[2] = puVar8;
            puVar8[2] = (uint)ppuVar4;
            puVar8[3] = (uint)ppuVar2;
            puVar8[6] = 0;
            goto LAB_0800d0dc;
          }
          ppuVar13 = ppuVar2 + (4 - (iVar6 >> 0x1f));
          iVar6 = iVar6 << 1;
          ppuVar4 = (uint **)*ppuVar13;
        } while ((uint **)*ppuVar13 != (uint **)0x0);
        if (ppuVar13 < (uint **)param_1[4]) goto LAB_0800dad0;
        *ppuVar13 = puVar8;
      }
      puVar8[6] = (uint)ppuVar2;
      puVar8[3] = (uint)puVar8;
      puVar8[2] = (uint)puVar8;
    }
  }
LAB_0800d0dc:
  return puVar3 + 2;
}



//==== FUNC FUN_0800d0e8 @ 0800d0e8 ====

int FUN_0800d0e8(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  
  uVar3 = (param_1[1] & -param_1[1]) - 1;
  uVar2 = uVar3 >> 0xc & 0x10;
  uVar3 = uVar3 >> uVar2;
  uVar4 = uVar3 >> 5 & 8;
  uVar3 = uVar3 >> uVar4;
  uVar5 = uVar3 >> 2 & 4;
  uVar3 = uVar3 >> uVar5;
  uVar6 = uVar3 >> 1 & 2;
  uVar3 = uVar3 >> uVar6;
  uVar7 = -((int)(uVar3 << 0x1e) >> 0x1f);
  uVar3 = param_1[(uVar3 >> (uVar7 & 0xff)) + uVar7 + uVar6 + uVar5 + uVar4 + uVar2 + 0x4c];
  uVar2 = (*(uint *)(uVar3 + 4) & 0xfffffff8) - param_2;
  uVar4 = uVar3;
  while( true ) {
    uVar5 = *(uint *)(uVar4 + 0x10);
    if (uVar5 == 0) {
      uVar5 = *(uint *)(uVar4 + 0x14);
    }
    if (uVar5 == 0) break;
    uVar6 = (*(uint *)(uVar5 + 4) & 0xfffffff8) - param_2;
    uVar4 = uVar5;
    if (uVar6 < uVar2) {
      uVar2 = uVar6;
      uVar3 = uVar5;
    }
  }
  if (uVar3 < param_1[4]) goto LAB_0800dad0;
  uVar4 = param_2 + uVar3;
  uVar5 = param_2 + uVar2;
  if (((*(uint *)(uVar3 + 4) & 0xfffffff8) != uVar5) || (uVar4 <= uVar3)) goto LAB_0800dad0;
  uVar7 = *(uint *)(uVar3 + 0x18);
  uVar6 = *(uint *)(uVar3 + 0xc);
  if (uVar6 == uVar3) {
    puVar9 = (uint *)(uVar3 + 0x14);
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      puVar9 = (uint *)(uVar3 + 0x10);
      uVar6 = *puVar9;
      if (uVar6 == 0) goto LAB_0800d1dc;
    }
    while ((puVar1 = (uint *)(uVar6 + 0x14), *(uint *)(uVar6 + 0x14) != 0 ||
           (puVar1 = (uint *)(uVar6 + 0x10), *(uint *)(uVar6 + 0x10) != 0))) {
      puVar9 = puVar1;
      uVar6 = *puVar9;
    }
    if (puVar9 < (uint *)param_1[4]) goto LAB_0800dad0;
    *puVar9 = 0;
  }
  else {
    uVar8 = *(uint *)(uVar3 + 8);
    if (uVar8 < param_1[4]) goto LAB_0800dad0;
    *(uint *)(uVar8 + 0xc) = uVar6;
    *(uint *)(uVar6 + 8) = uVar8;
  }
LAB_0800d1dc:
  if (uVar7 != 0) {
    if (uVar3 == param_1[*(int *)(uVar3 + 0x1c) + 0x4c]) {
      param_1[*(int *)(uVar3 + 0x1c) + 0x4c] = uVar6;
      if (uVar6 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(uVar3 + 0x1c) & 0xff));
        goto LAB_0800d24c;
      }
    }
    else {
      if (uVar7 < param_1[4]) goto LAB_0800dad0;
      bVar10 = *(uint *)(uVar7 + 0x10) == uVar3;
      if (bVar10) {
        *(uint *)(uVar7 + 0x10) = uVar6;
      }
      if (!bVar10) {
        *(uint *)(uVar7 + 0x14) = uVar6;
      }
    }
    if (uVar6 != 0) {
      if (uVar6 < param_1[4]) goto LAB_0800dad0;
      *(uint *)(uVar6 + 0x18) = uVar7;
      uVar7 = *(uint *)(uVar3 + 0x10);
      if (uVar7 != 0) {
        if (uVar7 < param_1[4]) goto LAB_0800dad0;
        *(uint *)(uVar6 + 0x10) = uVar7;
        *(uint *)(uVar7 + 0x18) = uVar6;
      }
      uVar7 = *(uint *)(uVar3 + 0x14);
      if (uVar7 != 0) {
        if (uVar7 < param_1[4]) goto LAB_0800dad0;
        *(uint *)(uVar6 + 0x14) = uVar7;
        *(uint *)(uVar7 + 0x18) = uVar6;
      }
    }
  }
LAB_0800d24c:
  if (uVar2 < 0x10) {
    *(uint *)(uVar3 + 4) = uVar5 | 3;
    *(uint *)(uVar5 + uVar3 + 4) = *(uint *)(uVar5 + uVar3 + 4) | 1;
  }
  else {
    *(uint *)(uVar3 + 4) = param_2 | 3;
    *(uint *)(uVar4 + 4) = uVar2 | 1;
    *(uint *)(uVar2 + uVar4) = uVar2;
    uVar5 = param_1[2];
    if (uVar5 != 0) {
      uVar6 = param_1[5];
      if (0x1f < uVar5 >> 3) {
LAB_0800dad0:
        FUN_0800daec(1);
        do {
          software_bkpt(0xab);
        } while( true );
      }
      uVar7 = uVar5 & 0xfffffff8;
      uVar8 = (int)param_1 + uVar7 + 0x28;
      if (uVar5 < 0x10) goto LAB_0800dad0;
      uVar5 = 1 << (uVar5 >> 3 & 0xff);
      if ((*param_1 & uVar5) == 0) {
        *param_1 = uVar5 | *param_1;
        uVar5 = uVar8;
      }
      else {
        uVar5 = *(uint *)((int)param_1 + uVar7 + 0x30);
        if (uVar5 < param_1[4]) goto LAB_0800dad0;
      }
      *(uint *)((int)param_1 + uVar7 + 0x30) = uVar6;
      *(uint *)(uVar5 + 0xc) = uVar6;
      *(uint *)(uVar6 + 8) = uVar5;
      *(uint *)(uVar6 + 0xc) = uVar8;
    }
    param_1[2] = uVar2;
    param_1[5] = uVar4;
  }
  return uVar3 + 8;
}



//==== FUNC FUN_0800d2d2 @ 0800d2d2 ====

undefined8 FUN_0800d2d2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  
  FUN_0800da70(1);
  puVar6 = DAT_0800d524;
  if (param_1 < 0xf5) {
    if (param_1 < 0xb) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = param_1 + 0xb & 0xfffffff8;
    }
    uVar3 = uVar4 >> 3;
    uVar1 = *DAT_0800d524;
    uVar5 = uVar1 >> (uVar3 & 0xff);
    if ((uVar5 & 3) == 0) {
      if (uVar4 <= DAT_0800d524[2]) goto LAB_0800d4ae;
      if (uVar5 != 0) {
        iVar9 = 1 << (uVar3 & 0xff);
        uVar3 = uVar5 << (uVar3 & 0xff) & (iVar9 * -2 | iVar9 * 2);
        uVar5 = (uVar3 & -uVar3) - 1;
        uVar3 = uVar5 >> 0xc & 0x10;
        uVar5 = uVar5 >> uVar3;
        uVar7 = uVar5 >> 5 & 8;
        uVar5 = uVar5 >> uVar7;
        uVar10 = uVar5 >> 2 & 4;
        uVar5 = uVar5 >> uVar10;
        uVar11 = uVar5 >> 1 & 2;
        uVar5 = uVar5 >> uVar11;
        uVar13 = -((int)(uVar5 << 0x1e) >> 0x1f);
        uVar3 = (uVar5 >> (uVar13 & 0xff)) + uVar10 + uVar7 + uVar3 + uVar11 + uVar13;
        puVar8 = DAT_0800d524 + uVar3 * 2 + 10;
        puVar2 = (uint *)DAT_0800d524[uVar3 * 2 + 0xc];
        if ((((puVar2[1] & 0xfffffff8) != uVar3 * 8) ||
            (puVar12 = (uint *)puVar2[2], puVar2 == puVar8)) || (puVar2 == puVar12))
        goto LAB_0800d322;
        if (puVar8 == puVar12) {
          *DAT_0800d524 = uVar1 & ~(1 << (uVar3 & 0xff));
        }
        else {
          if (puVar12 < (uint *)DAT_0800d524[4]) goto LAB_0800d322;
          DAT_0800d524[uVar3 * 2 + 0xc] = (uint)puVar12;
          puVar12[3] = (uint)puVar8;
        }
        uVar1 = uVar3 * 8 - uVar4;
        puVar2[1] = uVar4 | 3;
        uVar4 = uVar4 + (int)puVar2;
        *(uint *)(uVar4 + 4) = uVar1 | 1;
        *(uint *)(uVar1 + uVar4) = uVar1;
        uVar3 = puVar6[2];
        if (uVar3 != 0) {
          uVar5 = puVar6[5];
          if (0x1f < uVar3 >> 3) {
LAB_0800d322:
            FUN_0800daec(1);
            do {
              software_bkpt(0xab);
            } while( true );
          }
          uVar7 = uVar3 & 0xfffffff8;
          uVar10 = (int)puVar6 + uVar7 + 0x28;
          if (uVar3 < 0x10) goto LAB_0800d322;
          uVar3 = 1 << (uVar3 >> 3 & 0xff);
          if ((*puVar6 & uVar3) == 0) {
            *puVar6 = uVar3 | *puVar6;
            uVar3 = uVar10;
          }
          else {
            uVar3 = *(uint *)((int)puVar6 + uVar7 + 0x30);
            if (uVar3 < puVar6[4]) goto LAB_0800d322;
          }
          *(uint *)((int)puVar6 + uVar7 + 0x30) = uVar5;
          *(uint *)(uVar3 + 0xc) = uVar5;
          *(uint *)(uVar5 + 8) = uVar3;
          *(uint *)(uVar5 + 0xc) = uVar10;
        }
        puVar6[2] = uVar1;
        puVar6[5] = uVar4;
        puVar2 = puVar2 + 2;
        goto LAB_0800d518;
      }
      if (DAT_0800d524[1] != 0) {
        puVar2 = (uint *)FUN_0800d0e8(DAT_0800d524,uVar4);
        goto joined_r0x0800d4ac;
      }
      goto LAB_0800d4f2;
    }
    uVar3 = (~uVar5 & 1) + uVar3;
    puVar6 = DAT_0800d524 + uVar3 * 2 + 10;
    puVar2 = (uint *)DAT_0800d524[uVar3 * 2 + 0xc];
    uVar4 = uVar3 * 8;
    if ((((puVar2[1] & 0xfffffff8) != uVar4) || (puVar8 = (uint *)puVar2[2], puVar2 == puVar6)) ||
       ((puVar2 == puVar8 || ((puVar2[1] & 0xfffffff8) != uVar4)))) goto LAB_0800d322;
    if (puVar6 == puVar8) {
      *DAT_0800d524 = uVar1 & ~(1 << (uVar3 & 0xff));
    }
    else {
      if (puVar8 < (uint *)DAT_0800d524[4]) goto LAB_0800d322;
      DAT_0800d524[uVar3 * 2 + 0xc] = (uint)puVar8;
      puVar8[3] = (uint)puVar6;
    }
    puVar2[1] = uVar4 | 3;
    puVar2[uVar3 * 2 + 1] = puVar2[uVar3 * 2 + 1] | 1;
  }
  else {
    if (param_1 < 0xffffffc0) {
      uVar4 = param_1 + 0xb & 0xfffffff8;
      if (DAT_0800d524[1] != 0) {
        puVar2 = (uint *)FUN_0800cd74(DAT_0800d524,uVar4);
joined_r0x0800d4ac:
        if (puVar2 != (uint *)0x0) goto LAB_0800d518;
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
LAB_0800d4ae:
    puVar6 = DAT_0800d524;
    uVar1 = DAT_0800d524[2];
    if (uVar4 <= uVar1) {
      uVar5 = uVar1 - uVar4;
      uVar3 = DAT_0800d524[5];
      if (uVar5 < 0x10) {
        DAT_0800d524[2] = 0;
        puVar6[5] = 0;
        *(uint *)(uVar3 + 4) = uVar1 | 3;
        *(uint *)(uVar1 + uVar3 + 4) = *(uint *)(uVar1 + uVar3 + 4) | 1;
      }
      else {
        uVar1 = uVar4 + uVar3;
        DAT_0800d524[5] = uVar1;
        puVar6[2] = uVar5;
        *(uint *)(uVar1 + 4) = uVar5 | 1;
        *(uint *)(uVar5 + uVar1) = uVar5;
        *(uint *)(uVar3 + 4) = uVar4 | 3;
      }
      puVar2 = (uint *)(uVar3 + 8);
      goto LAB_0800d518;
    }
LAB_0800d4f2:
    puVar6 = DAT_0800d524;
    if (DAT_0800d524[3] <= uVar4) {
      puVar2 = (uint *)FUN_0800cc28(DAT_0800d524,uVar4);
      goto LAB_0800d518;
    }
    uVar1 = DAT_0800d524[3] - uVar4;
    DAT_0800d524[3] = uVar1;
    puVar2 = (uint *)puVar6[6];
    puVar6[6] = uVar4 + (int)puVar2;
    *(uint *)(uVar4 + (int)puVar2 + 4) = uVar1 | 1;
    puVar2[1] = uVar4 | 3;
  }
  puVar2 = puVar2 + 2;
LAB_0800d518:
  FUN_0800dab4(1);
  return CONCAT44(param_4,puVar2);
}



//==== FUNC FUN_0800d528 @ 0800d528 ====

void FUN_0800d528(undefined *param_1,short param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}



//==== FUNC FUN_0800d53a @ 0800d53a ====

undefined4 * FUN_0800d53a(undefined4 *param_1,int param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)*DAT_0800d5f8;
  if (*DAT_0800d5f8 != 0) {
    *DAT_0800d5f8 = *(int *)(*DAT_0800d5f8 + 4);
  }
  if (puVar1 == (undefined4 *)0x0) {
    *param_4 = 0x5a;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1;
    for (uVar3 = 0; uVar3 < param_2 - 1U; uVar3 = uVar3 + 1) {
      *puVar2 = (undefined4 *)(param_3 + (int)puVar2);
      puVar2 = (undefined4 *)(param_3 + (int)puVar2);
    }
    *puVar2 = 0;
    *puVar1 = param_1;
    puVar1[1] = param_1;
    puVar1[4] = param_2;
    puVar1[3] = param_2;
    puVar1[2] = param_3;
    *param_4 = 0;
  }
  return puVar1;
}



//==== FUNC FUN_0800d5a0 @ 0800d5a0 ====

undefined4 FUN_0800d5a0(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  uint uVar3;
  
  FUN_0800d528(DAT_0800d5fc,0xf0);
  for (uVar2 = 0; uVar3 = uVar2 & 0xffff, uVar3 < 9; uVar2 = (uVar2 & 0xffff) + 1) {
    iVar1 = uVar3 * 0x18 + DAT_0800d5fc;
    *(uint *)(iVar1 + 4) = (uVar2 & 0xffff) * 0x18 + DAT_0800d5fc + 0x18;
    *(undefined **)(iVar1 + 0x14) = &DAT_0800d5f4;
  }
  iVar1 = uVar3 * 0x18 + DAT_0800d5fc;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined **)(iVar1 + 0x14) = &DAT_0800d5f4;
  *DAT_0800d5f8 = DAT_0800d5fc;
  return in_r3;
}



//==== FUNC FUN_0800d600 @ 0800d600 ====

void FUN_0800d600(byte param_1,byte param_2)

{
  *(uint *)(DAT_0800d650 + ((int)(uint)param_2 >> 2) * 4) =
       *(uint *)(DAT_0800d650 + ((int)(uint)param_2 >> 2) * 4) &
       ~(0xf << ((uint)(param_2 & 3) << 2));
  *(uint *)(DAT_0800d650 + ((int)(uint)param_2 >> 2) * 4) =
       *(uint *)(DAT_0800d650 + ((int)(uint)param_2 >> 2) * 4) |
       (uint)param_1 << ((param_2 & 3) << 2);
  return;
}



//==== FUNC FUN_0800d73e @ 0800d73e ====

void FUN_0800d73e(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = (param_3 & 0xffff) * (param_2 & 0xffff);
  uVar2 = (param_3 & 0xffff) * (param_2 >> 0x10);
  param_1[1] = (param_3 >> 0x10) * (param_2 >> 0x10);
  uVar1 = uVar2 + (param_3 >> 0x10) * (param_2 & 0xffff);
  if (uVar1 < uVar2) {
    param_1[1] = param_1[1] + 0x10000;
  }
  uVar2 = uVar1 * 0x10000 + *param_1;
  *param_1 = uVar2;
  if (uVar2 < uVar1 * 0x10000) {
    param_1[1] = param_1[1] + 1;
  }
  param_1[1] = param_1[1] + (uVar1 >> 0x10);
  return;
}



//==== FUNC FUN_0800d7c6 @ 0800d7c6 ====

uint FUN_0800d7c6(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  
  local_1c = param_2[1];
  if (param_3 >> 0x10 == 0xffff) {
    uVar4 = (ushort)(local_1c >> 0x10);
  }
  else {
    uVar4 = (ushort)(local_1c / ((param_3 >> 0x10) + 1));
  }
  uVar3 = param_3 >> 0x10;
  uVar1 = param_3 & 0xffff;
  uVar2 = uVar1 * uVar4;
  uVar5 = (uint)uVar4;
  local_20 = *param_2 + uVar2 * -0x10000;
  if (uVar2 * -0x10000 - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_1c = (local_1c - (uVar2 >> 0x10)) - uVar3 * uVar5;
  while ((uVar3 < local_1c || ((local_1c == uVar3 && (uVar1 << 0x10 <= local_20))))) {
    local_20 = local_20 + uVar1 * -0x10000;
    if (uVar1 * -0x10000 - 1 < local_20) {
      local_1c = local_1c - 1;
    }
    local_1c = local_1c - uVar3;
    uVar5 = uVar5 + 1;
  }
  if (uVar3 == 0xffff) {
    uVar4 = (ushort)local_1c;
  }
  else {
    uVar4 = (ushort)(((local_20 >> 0x10) + local_1c * 0x10000) / (uVar3 + 1));
  }
  uVar2 = (uint)uVar4;
  uVar3 = uVar3 * uVar2;
  local_20 = local_20 - uVar1 * uVar4;
  if (-(uVar1 * uVar4) - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_20 = local_20 + uVar3 * -0x10000;
  if (uVar3 * -0x10000 - 1 < local_20) {
    local_1c = local_1c - 1;
  }
  local_1c = local_1c - (uVar3 >> 0x10);
  while ((local_1c != 0 || (param_3 <= local_20))) {
    local_20 = local_20 - param_3;
    if (-param_3 - 1 < local_20) {
      local_1c = local_1c + -1;
    }
    uVar2 = uVar2 + 1;
  }
  *param_1 = (uVar2 & 0xffff) + uVar5 * 0x10000;
  return local_20;
}



//==== FUNC FUN_0800d9a8 @ 0800d9a8 ====

uint * FUN_0800d9a8(int param_1,uint param_2,uint param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (param_3 & 0xff) << 8;
  uVar5 = param_3 & 0xff | uVar6;
  uVar6 = uVar5 | (param_3 & 0xffff00ff | uVar6) << 0x10;
  puVar4 = (uint *)(param_1 + param_2);
  uVar7 = (uint)puVar4 & 3;
  uVar1 = (undefined)param_3;
  uVar2 = (undefined2)uVar5;
  if (uVar7 != 0) {
    uVar5 = param_2 - uVar7;
    if (param_2 < uVar7) {
      if (uVar5 + uVar7 != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined *)puVar4 = uVar1;
      }
      if ((uVar5 + uVar7 & 2) != 0) {
        puVar4 = (uint *)((int)puVar4 + -1);
        *(undefined *)puVar4 = uVar1;
      }
      return puVar4;
    }
    uVar3 = (uint)puVar4 & 2;
    if ((int)(uVar7 << 0x1f) < 0) {
      puVar4 = (uint *)((int)puVar4 + -1);
      *(undefined *)puVar4 = uVar1;
    }
    param_2 = uVar5;
    if (uVar3 != 0) {
      puVar4 = (uint *)((int)puVar4 + -2);
      *(undefined2 *)puVar4 = uVar2;
    }
  }
  do {
    uVar5 = param_2;
    param_2 = uVar5 - 0x10;
    if (0xf < uVar5) {
      puVar4[-1] = uVar6;
      puVar4[-2] = uVar6;
      puVar4[-3] = uVar6;
      puVar4 = puVar4 + -4;
      *puVar4 = uVar6;
    }
  } while (0xf < uVar5 && param_2 != 0);
  if ((param_2 & 8) != 0) {
    puVar4[-1] = uVar6;
    puVar4 = puVar4 + -2;
    *puVar4 = uVar6;
  }
  if ((int)(uVar5 * 0x20000000) < 0) {
    puVar4 = puVar4 + -1;
    *puVar4 = uVar6;
  }
  if ((uVar5 * 0x20000000 & 0x40000000) != 0) {
    puVar4 = (uint *)((int)puVar4 + -2);
    *(undefined2 *)puVar4 = uVar2;
  }
  if ((int)(uVar5 * -0x80000000) < 0) {
    puVar4 = (uint *)((int)puVar4 + -1);
    *(undefined *)puVar4 = uVar1;
  }
  return puVar4;
}



//==== FUNC FUN_0800da18 @ 0800da18 ====

int * FUN_0800da18(void)

{
  int *piVar1;
  
  piVar1 = DAT_0800da38;
  if (*DAT_0800da34 != (int *)0x0) {
    return (int *)0x0;
  }
  *DAT_0800da34 = DAT_0800da38;
  *piVar1 = (DAT_0800da3c & 0xfffffff8) - (int)piVar1;
  return piVar1;
}



//==== FUNC FUN_0800da40 @ 0800da40 ====

void FUN_0800da40(void)

{
  int *piVar1;
  
  piVar1 = DAT_0800dacc;
  if (*DAT_0800dacc != 0) {
    FUN_0800dae6(DAT_0800dacc + 1);
    FUN_0800dae6(piVar1 + 2);
    FUN_0800dae6(piVar1 + 3);
    FUN_0800dae6(piVar1 + 4);
    FUN_0800dae6(piVar1 + 5);
  }
  return;
}



//==== FUNC FUN_0800da70 @ 0800da70 ====

undefined4 FUN_0800da70(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = DAT_0800dacc;
  if (*DAT_0800dacc == 0) {
    FUN_0800dae4(DAT_0800dacc + 1);
    FUN_0800dae4(piVar1 + 2);
    FUN_0800dae4(piVar1 + 3);
    FUN_0800dae4(piVar1 + 4);
    FUN_0800dae4(piVar1 + 5);
  }
  *piVar1 = 1;
  if (param_1 < 5) {
    FUN_0800dae8(piVar1 + param_1 + 1);
  }
  return param_4;
}



//==== FUNC FUN_0800dab4 @ 0800dab4 ====

uint FUN_0800dab4(uint param_1)

{
  uint unaff_r7;
  
  if (4 < param_1) {
    return param_1;
  }
  FUN_0800daea(DAT_0800dacc + param_1 * 4 + 4);
  return unaff_r7;
}



//==== FUNC FUN_0800dae4 @ 0800dae4 ====

void FUN_0800dae4(void)

{
  return;
}



//==== FUNC FUN_0800dae6 @ 0800dae6 ====

void FUN_0800dae6(void)

{
  return;
}



//==== FUNC FUN_0800dae8 @ 0800dae8 ====

void FUN_0800dae8(void)

{
  return;
}



//==== FUNC FUN_0800daea @ 0800daea ====

void FUN_0800daea(void)

{
  return;
}



//==== FUNC FUN_0800daec @ 0800daec ====

undefined4 FUN_0800daec(void)

{
  int *piVar1;
  undefined4 unaff_r7;
  
  piVar1 = (int *)FUN_0800db1c();
  if (*piVar1 != -1) {
    software_bkpt(0xab);
    *piVar1 = 0;
  }
  if (piVar1[1] != -1) {
    software_bkpt(0xab);
    piVar1[1] = 0;
  }
  return unaff_r7;
}



//==== FUNC FUN_0800db1c @ 0800db1c ====

undefined4 FUN_0800db1c(void)

{
  return DAT_0800db20;
}



//==== FUNC sub_0800db24 @ 0800db24 ====

undefined4 sub_0800db24(int param_1)

{
  int iVar1;
  
  FUN_080089e2(param_1,0x81,*(undefined2 *)(*(int *)(param_1 + 0x5ec) + 0x39),2);
  FUN_080089e2(param_1,1,*(undefined2 *)(*(int *)(param_1 + 0x5ec) + 0x40),2);
  FUN_080089e2(param_1,0x82,8,3);
  iVar1 = DAT_0800de60;
  *(undefined *)(DAT_0800de60 + 4) = 2;
  *(undefined *)(iVar1 + 5) = 0;
  (**DAT_0800de64)();
  FUN_08008ab0(param_1,1,DAT_0800de68,*(undefined2 *)(*(int *)(param_1 + 0x5ec) + 0x40));
  return 0;
}



//==== FUNC FUN_0800db82 @ 0800db82 ====

longlong FUN_0800db82(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  FUN_08008a62(param_1,0x81);
  FUN_08008a62(param_1,1);
  FUN_08008a62(param_1,0x82);
  (**(code **)(DAT_0800de64 + 4))();
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC FUN_0800dbaa @ 0800dbaa ====

undefined8 FUN_0800dbaa(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  
  if ((*param_2 & 0x60) == 0) {
    bVar1 = param_2[1];
    if (bVar1 == 6) {
      if ((char)((ushort)*(undefined2 *)(param_2 + 2) >> 8) == '!') {
        unaff_r7 = DAT_0800de78;
        if (*(ushort *)(param_2 + 6) < 0x3b) {
          unaff_r6 = *(undefined2 *)(param_2 + 6);
        }
        else {
          unaff_r6 = 0x3a;
        }
      }
      FUN_0800b5e4(param_1,unaff_r7,unaff_r6);
    }
    else if (bVar1 == 10) {
      FUN_0800b5e4(param_1,DAT_0800de7c,1);
    }
    else if (bVar1 == 0xb) {
      if ((char)*(undefined2 *)(param_2 + 2) == '\0') {
        *DAT_0800de7c = (uint)param_2[2];
      }
      else {
        FUN_0800434c(param_1,param_2);
      }
    }
    uVar2 = 0;
  }
  else if ((*param_2 & 0x60) == 0x20) {
    if (*(short *)(param_2 + 6) == 0) {
      (**(code **)(DAT_0800de64 + 8))(param_2[1],0,0);
    }
    else if ((int)((uint)*param_2 << 0x18) < 0) {
      (**(code **)(DAT_0800de64 + 8))(param_2[1],DAT_0800de6c,*(undefined2 *)(param_2 + 6));
      FUN_0800b5e4(param_1,DAT_0800de6c,*(undefined2 *)(param_2 + 6));
    }
    else {
      *DAT_0800de70 = (uint)param_2[1];
      *DAT_0800de74 = (uint)*(ushort *)(param_2 + 6);
      FUN_0800b632(param_1,DAT_0800de6c,*(undefined2 *)(param_2 + 6));
    }
    uVar2 = 0;
  }
  else {
    FUN_0800434c(param_1,param_2);
    uVar2 = 2;
  }
  return CONCAT44(param_4,uVar2);
}



//==== FUNC sub_0800dc7a @ 0800dc7a ====

undefined4 sub_0800dc7a(void)

{
  if (*DAT_0800de70 != 0xff) {
    (**(code **)(DAT_0800de64 + 8))(*DAT_0800de70,DAT_0800de6c,*DAT_0800de74);
    *DAT_0800de70 = 0xff;
  }
  return 0;
}



//==== FUNC sub_0800dca0 @ 0800dca0 ====

longlong sub_0800dca0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*DAT_0800de80 == '\x01') {
    if (*DAT_0800de84 == 0) {
      *DAT_0800de80 = '\0';
    }
    else {
      if ((uint)*(ushort *)(*(int *)(param_1 + 0x5ec) + 0x39) < *DAT_0800de84) {
        uVar1 = (ushort)*DAT_0800de88;
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x5ec) + 0x39);
      }
      else {
        uVar1 = (ushort)*DAT_0800de88;
        uVar2 = (ushort)*DAT_0800de84;
      }
      FUN_08008b16(param_1,0x81,(uint)uVar1 + DAT_0800de8c,uVar2);
      *DAT_0800de88 = (uint)uVar2 + *DAT_0800de88;
      *DAT_0800de84 = *DAT_0800de84 - (uint)uVar2;
    }
  }
  return (ulonglong)param_4 << 0x20;
}



//==== FUNC sub_0800dd20 @ 0800dd20 ====

undefined4 sub_0800dd20(int param_1,byte param_2)

{
  (**(code **)(DAT_0800de64 + 0x10))
            (DAT_0800de68,*(uint *)((uint)param_2 * 0x28 + param_1 + 0x388) & 0xffff);
  FUN_08008ab0(param_1,1,DAT_0800de68,*(undefined2 *)(*(int *)(param_1 + 0x5ec) + 0x40));
  return 0;
}



//==== FUNC sub_0800dd56 @ 0800dd56 ====

undefined4 sub_0800dd56(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_0800de90;
  *DAT_0800de90 = iVar1 + 1;
  if (iVar1 == 1) {
    *DAT_0800de90 = 0;
    FUN_0800dd78(param_1);
  }
  return 0;
}



//==== FUNC FUN_0800dd78 @ 0800dd78 ====

void FUN_0800dd78(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*DAT_0800de80 != '\x01') {
    if (*DAT_0800de88 == 0x1012) {
      *DAT_0800de88 = 0;
    }
    if (*DAT_0800de88 == *DAT_0800de94) {
      if (*DAT_0800de98 != '\0') {
        FUN_08008b16(param_1,0x81,0,0);
        *DAT_0800de98 = '\0';
      }
      *DAT_0800de80 = '\0';
    }
    else {
      if (*DAT_0800de94 < *DAT_0800de88) {
        *DAT_0800de84 = 0x1012 - *DAT_0800de88;
      }
      else {
        *DAT_0800de84 = *DAT_0800de94 - *DAT_0800de88;
      }
      if ((uint)*(ushort *)(*(int *)(param_1 + 0x5ec) + 0x39) < *DAT_0800de84) {
        uVar1 = (ushort)*DAT_0800de88;
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x5ec) + 0x39);
      }
      else {
        uVar1 = (ushort)*DAT_0800de88;
        uVar2 = (ushort)*DAT_0800de84;
      }
      *DAT_0800de88 = (uint)uVar2 + *DAT_0800de88;
      *DAT_0800de84 = *DAT_0800de84 - (uint)uVar2;
      *DAT_0800de80 = '\x01';
      *DAT_0800de98 = '\x01';
      FUN_08008b16(param_1,0x81,(uint)uVar1 + DAT_0800de8c,uVar2);
    }
  }
  return;
}



//==== FUNC sub_0800de54 @ 0800de54 ====

undefined4 sub_0800de54(undefined4 param_1,undefined2 *param_2)

{
  *param_2 = 0x43;
  return DAT_0800de9c;
}



//==== FUNC sub_0800dfdc @ 0800dfdc ====

void sub_0800dfdc(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800dfe4 @ 0800dfe4 ====

void sub_0800dfe4(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800dfec @ 0800dfec ====

void sub_0800dfec(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800dff4 @ 0800dff4 ====

void sub_0800dff4(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800dffc @ 0800dffc ====

void sub_0800dffc(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800e004 @ 0800e004 ====

void sub_0800e004(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800e00c @ 0800e00c ====

void sub_0800e00c(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800e014 @ 0800e014 ====

void sub_0800e014(void)

{
  *DAT_0800e0d8 = DAT_0800e0dc;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800e01c @ 0800e01c ====

void sub_0800e01c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== FUNC sub_0800e01e @ 0800e01e ====

void sub_0800e01e(void)

{
  return;
}



//==== FUNC sub_0800e020 @ 0800e020 ====

void sub_0800e020(void)

{
  return;
}



//==== FUNC sub_0800e022 @ 0800e022 ====

void sub_0800e022(void)

{
  return;
}



//==== FUNC sub_0800e024 @ 0800e024 ====

void sub_0800e024(void)

{
  return;
}



//==== FUNC sub_0800e026 @ 0800e026 ====

void sub_0800e026(void)

{
  return;
}



//==== FUNC sub_0800e028 @ 0800e028 ====

void sub_0800e028(void)

{
  return;
}



//==== FUNC sub_0800e02a @ 0800e02a ====

void sub_0800e02a(void)

{
  return;
}



//==== FUNC sub_0800e02c @ 0800e02c ====

void sub_0800e02c(void)

{
  return;
}



//==== FUNC sub_0800e02e @ 0800e02e ====

void sub_0800e02e(void)

{
  return;
}



//==== FUNC sub_0800e030 @ 0800e030 ====

void sub_0800e030(void)

{
  return;
}



//==== FUNC sub_0800e032 @ 0800e032 ====

void sub_0800e032(void)

{
  return;
}



//==== FUNC sub_0800e034 @ 0800e034 ====

void sub_0800e034(void)

{
  return;
}



//==== FUNC sub_0800e036 @ 0800e036 ====

void sub_0800e036(void)

{
  return;
}



//==== FUNC sub_0800e038 @ 0800e038 ====

void sub_0800e038(void)

{
  return;
}



//==== FUNC sub_0800e03a @ 0800e03a ====

void sub_0800e03a(void)

{
  return;
}



//==== FUNC sub_0800e03c @ 0800e03c ====

void sub_0800e03c(void)

{
  return;
}



//==== FUNC sub_0800e03e @ 0800e03e ====

void sub_0800e03e(void)

{
  return;
}



//==== FUNC sub_0800e040 @ 0800e040 ====

void sub_0800e040(void)

{
  return;
}



//==== FUNC sub_0800e042 @ 0800e042 ====

void sub_0800e042(void)

{
  return;
}



//==== FUNC sub_0800e044 @ 0800e044 ====

void sub_0800e044(void)

{
  return;
}



//==== FUNC sub_0800e046 @ 0800e046 ====

void sub_0800e046(void)

{
  return;
}



//==== FUNC sub_0800e048 @ 0800e048 ====

void sub_0800e048(void)

{
  return;
}



//==== FUNC sub_0800e04a @ 0800e04a ====

void sub_0800e04a(void)

{
  return;
}



//==== FUNC sub_0800e04c @ 0800e04c ====

void sub_0800e04c(void)

{
  return;
}



//==== FUNC sub_0800e04e @ 0800e04e ====

void sub_0800e04e(void)

{
  return;
}



//==== FUNC sub_0800e050 @ 0800e050 ====

void sub_0800e050(void)

{
  return;
}



//==== FUNC sub_0800e052 @ 0800e052 ====

void sub_0800e052(void)

{
  return;
}



//==== FUNC sub_0800e054 @ 0800e054 ====

void sub_0800e054(void)

{
  return;
}



//==== FUNC sub_0800e056 @ 0800e056 ====

void sub_0800e056(void)

{
  return;
}



//==== FUNC sub_0800e058 @ 0800e058 ====

void sub_0800e058(void)

{
  return;
}



//==== FUNC sub_0800e05a @ 0800e05a ====

void sub_0800e05a(void)

{
  return;
}



//==== FUNC sub_0800e05c @ 0800e05c ====

void sub_0800e05c(void)

{
  return;
}



//==== FUNC sub_0800e05e @ 0800e05e ====

void sub_0800e05e(void)

{
  return;
}



//==== FUNC sub_0800e060 @ 0800e060 ====

void sub_0800e060(void)

{
  return;
}



//==== FUNC sub_0800e062 @ 0800e062 ====

void sub_0800e062(void)

{
  return;
}



//==== FUNC sub_0800e064 @ 0800e064 ====

void sub_0800e064(void)

{
  return;
}



//==== FUNC sub_0800e066 @ 0800e066 ====

void sub_0800e066(void)

{
  return;
}



//==== FUNC sub_0800e068 @ 0800e068 ====

void sub_0800e068(void)

{
  return;
}



//==== FUNC sub_0800e06a @ 0800e06a ====

void sub_0800e06a(void)

{
  return;
}



//==== FUNC sub_0800e06c @ 0800e06c ====

void sub_0800e06c(void)

{
  return;
}



//==== FUNC sub_0800e06e @ 0800e06e ====

void sub_0800e06e(void)

{
  return;
}



//==== FUNC sub_0800e070 @ 0800e070 ====

void sub_0800e070(void)

{
  return;
}



//==== FUNC sub_0800e072 @ 0800e072 ====

void sub_0800e072(void)

{
  return;
}



//==== FUNC sub_0800e074 @ 0800e074 ====

void sub_0800e074(void)

{
  return;
}



//==== FUNC sub_0800e076 @ 0800e076 ====

void sub_0800e076(void)

{
  return;
}



//==== FUNC sub_0800e078 @ 0800e078 ====

void sub_0800e078(void)

{
  return;
}



//==== FUNC sub_0800e07a @ 0800e07a ====

void sub_0800e07a(void)

{
  return;
}



//==== FUNC sub_0800e07c @ 0800e07c ====

void sub_0800e07c(void)

{
  return;
}



//==== FUNC sub_0800e07e @ 0800e07e ====

void sub_0800e07e(void)

{
  return;
}



//==== FUNC sub_0800e080 @ 0800e080 ====

void sub_0800e080(void)

{
  return;
}



//==== FUNC sub_0800e082 @ 0800e082 ====

void sub_0800e082(void)

{
  return;
}



//==== FUNC sub_0800e084 @ 0800e084 ====

void sub_0800e084(void)

{
  return;
}



//==== FUNC sub_0800e086 @ 0800e086 ====

void sub_0800e086(void)

{
  return;
}



//==== FUNC sub_0800e088 @ 0800e088 ====

void sub_0800e088(void)

{
  return;
}



//==== FUNC sub_0800e08a @ 0800e08a ====

void sub_0800e08a(void)

{
  return;
}



//==== FUNC sub_0800e08c @ 0800e08c ====

void sub_0800e08c(void)

{
  return;
}



//==== FUNC sub_0800e08e @ 0800e08e ====

void sub_0800e08e(void)

{
  return;
}



//==== FUNC sub_0800e090 @ 0800e090 ====

void sub_0800e090(void)

{
  return;
}



//==== FUNC sub_0800e092 @ 0800e092 ====

void sub_0800e092(void)

{
  return;
}



//==== FUNC sub_0800e094 @ 0800e094 ====

void sub_0800e094(void)

{
  return;
}



//==== FUNC sub_0800e096 @ 0800e096 ====

void sub_0800e096(void)

{
  return;
}



//==== FUNC sub_0800e098 @ 0800e098 ====

void sub_0800e098(void)

{
  return;
}



//==== FUNC sub_0800e09a @ 0800e09a ====

void sub_0800e09a(void)

{
  return;
}



//==== FUNC sub_0800e09c @ 0800e09c ====

void sub_0800e09c(void)

{
  return;
}



//==== FUNC sub_0800e09e @ 0800e09e ====

void sub_0800e09e(void)

{
  return;
}



//==== FUNC sub_0800e0a0 @ 0800e0a0 ====

void sub_0800e0a0(void)

{
  return;
}



//==== FUNC sub_0800e0a2 @ 0800e0a2 ====

void sub_0800e0a2(void)

{
  return;
}



//==== FUNC sub_0800e0a4 @ 0800e0a4 ====

void sub_0800e0a4(void)

{
  return;
}



//==== FUNC sub_0800e0a6 @ 0800e0a6 ====

void sub_0800e0a6(void)

{
  return;
}



//==== FUNC sub_0800e0a8 @ 0800e0a8 ====

void sub_0800e0a8(void)

{
  return;
}



//==== FUNC sub_0800e0aa @ 0800e0aa ====

void sub_0800e0aa(void)

{
  return;
}



//==== FUNC sub_0800e0ac @ 0800e0ac ====

void sub_0800e0ac(void)

{
  return;
}



//==== FUNC sub_0800e0ae @ 0800e0ae ====

void sub_0800e0ae(void)

{
  return;
}



//==== FUNC sub_0800e0b0 @ 0800e0b0 ====

undefined4 sub_0800e0b0(void)

{
  undefined4 unaff_r7;
  
  FUN_08008f14();
  *DAT_0800e0e0 = DAT_0800e0e4;
  FUN_0800e0e8();
  FUN_0800e0ec();
  FUN_08008802();
  FUN_08008912();
  return unaff_r7;
}



//==== FUNC FUN_0800e0e8 @ 0800e0e8 ====

undefined4 FUN_0800e0e8(void)

{
  return 1;
}



//==== FUNC FUN_0800e0ec @ 0800e0ec ====

void FUN_0800e0ec(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_0800e114 + DAT_0800e114);
  for (piVar1 = (int *)((int)&DAT_0800e110 + DAT_0800e110); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)(*piVar1 + (int)piVar1))(piVar1 + 1)) {
  }
  return;
}



//==== FUNC FUN_0800e118 @ 0800e118 ====

undefined8 FUN_0800e118(void)

{
  char cVar1;
  undefined4 unaff_r7;
  
  if (*DAT_0800e1b8 == 1) {
    *DAT_0800e1ac = 0;
    *DAT_0800e1b0 = 0x44c;
    cVar1 = FUN_0800e170(0xc);
    *DAT_0800e198 = cVar1;
  }
  else {
    *DAT_0800e198 = '\0';
  }
  FUN_0800e1de(0x100);
  FUN_0800e1c0(0x100,0);
  *DAT_0800e19c = 1;
  return CONCAT44(unaff_r7,(int)*DAT_0800e198);
}



//==== FUNC FUN_0800e170 @ 0800e170 ====

undefined8 FUN_0800e170(undefined4 param_1)

{
  do {
  } while ((*DAT_0800e1a8 & 0x45) == 0);
  *DAT_0800e1bc = 0x5ff;
  return CONCAT44(param_1,(int)(char)((byte)*DAT_0800e1b4 & 8));
}



//==== FUNC sub_0800e1a0 @ 0800e1a0 ====

undefined4 sub_0800e1a0(void)

{
  undefined4 unaff_r7;
  
  FUN_0800e118();
  return unaff_r7;
}



//==== FUNC FUN_0800e1c0 @ 0800e1c0 ====

void FUN_0800e1c0(uint param_1,char param_2)

{
  if (param_2 == '\0') {
    *DAT_0800e1e8 = *DAT_0800e1e8 & ~param_1;
  }
  else {
    *DAT_0800e1e8 = *DAT_0800e1e8 | param_1;
  }
  return;
}



//==== FUNC FUN_0800e1de @ 0800e1de ====

void FUN_0800e1de(undefined4 param_1)

{
  *DAT_0800e1ec = param_1;
  return;
}



//==== FUNC FUN_0800e1f0 @ 0800e1f0 ====

void FUN_0800e1f0(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char **ppcVar4;
  int *piVar5;
  int *piVar6;
  char **ppcVar7;
  char **ppcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int unaff_r9;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  
  piVar6 = param_1 + 2;
  ppcVar7 = (char **)(piVar6 + *param_1);
  uVar3 = param_1[1];
  ppcVar4 = ppcVar7 + (uVar3 & 0xfffffffe);
  pcVar12 = (char *)0x0;
  pcVar14 = (char *)0x0;
  iVar9 = 0;
  bVar2 = true;
  do {
    if (ppcVar7 == ppcVar4) {
      return;
    }
    ppcVar8 = ppcVar7 + 1;
    pcVar10 = *ppcVar7;
    if ((uVar3 & 1) != 0) {
      pcVar10 = pcVar10 + unaff_r9;
    }
    ppcVar7 = ppcVar7 + 2;
    pcVar11 = *ppcVar8 + (int)pcVar10;
LAB_0800e22e:
  } while (pcVar10 == pcVar11);
  while (pcVar12 == pcVar14) {
    pcVar12 = (char *)(*piVar6 + (int)piVar6);
    piVar5 = piVar6 + 1;
    piVar6 = piVar6 + 2;
    pcVar14 = pcVar12 + *piVar5;
  }
  pcVar13 = pcVar12;
  if (bVar2) {
    pcVar13 = pcVar12 + 1;
    iVar9 = (int)*pcVar12;
    bVar2 = false;
    while (pcVar13 == pcVar14) {
      pcVar13 = (char *)(*piVar6 + (int)piVar6);
      piVar5 = piVar6 + 1;
      piVar6 = piVar6 + 2;
      pcVar14 = pcVar13 + *piVar5;
    }
  }
  pcVar12 = pcVar13;
  if (iVar9 < 0) {
    pcVar12 = pcVar13 + 1;
    cVar1 = *pcVar13;
    do {
      if (pcVar10 == pcVar11) goto LAB_0800e22e;
      pcVar13 = pcVar10 + 1;
      *pcVar10 = cVar1;
      iVar9 = (int)(short)((short)iVar9 + 1);
      pcVar10 = pcVar13;
    } while (iVar9 < 0);
  }
  else {
    for (; iVar9 = (int)(short)iVar9, -1 < iVar9; iVar9 = iVar9 + -1) {
      if (pcVar10 == pcVar11 || pcVar12 == pcVar14) goto LAB_0800e22e;
      *pcVar10 = *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  bVar2 = true;
  goto LAB_0800e22e;
}



//==== FUNC sub_0800e298 @ 0800e298 ====

undefined8 sub_0800e298(void)

{
  uint local_10;
  uint local_c;
  
  FUN_08007ac4();
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    FUN_08007b08(1);
    for (local_10 = 0; local_10 < DAT_0800e2f4; local_10 = local_10 + 1) {
    }
    FUN_08007b08(0);
    for (local_10 = 0; local_10 < DAT_0800e2f4; local_10 = local_10 + 1) {
    }
  }
  FUN_0800847e(0x400);
  return CONCAT44(local_c,local_10);
}



