// FUN_080232e2 @ 080232e2

undefined4 FUN_080232e2(int param_1,ushort param_2,undefined4 param_3,short *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_474 [16];
  undefined1 auStack_464 [1024];
  undefined1 auStack_64 [64];
  
  FUN_0801a924(auStack_64,0x40);
  if (param_2 < 0x41) {
    uVar2 = *(undefined1 *)(param_1 + (uint)param_2);
    uVar1 = *(undefined1 *)(param_1 + (uint)param_2 + 1);
    FUN_0801f388(auStack_64,param_1 + 2,param_2);
    FUN_080283fc(auStack_64,param_2 - 2,DAT_08023708,DAT_08023704);
    sVar3 = FUN_08028434(DAT_08023704);
    if (CONCAT11(uVar2,uVar1) == sVar3) {
      FUN_080284b2(auStack_464);
      FUN_080285cc(DAT_08023704,auStack_464,auStack_474);
      FUN_08028bb0(auStack_474,0xc,*DAT_08023708,*DAT_08023710);
      FUN_08028bb0(auStack_474,0xd,DAT_08023708[1],DAT_08023710[1]);
      FUN_08028bb0(auStack_474,0xe,DAT_08023708[2],DAT_08023710[2]);
      FUN_08028bb0(auStack_474,0xf,DAT_08023708[3],DAT_08023710[3]);
      uVar4 = FUN_08027a14(DAT_08023704);
      FUN_080283c4(DAT_08023704,uVar4,auStack_474,param_3);
      uVar5 = FUN_08027a14(DAT_08023704);
      uVar5 = uVar5 & 0xff;
      if (uVar5 % 0x10 == 0) {
        *param_4 = (short)uVar5;
      }
      else {
        *param_4 = ((short)(uVar5 / 0x10) + 1) * 0x10;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

