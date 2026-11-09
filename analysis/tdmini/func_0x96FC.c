// FUN_080096fc @ 080096fc

undefined4 FUN_080096fc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_a8;
  char local_a7;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [132];
  
  local_a8 = 1;
  local_a7 = '\x02';
  local_a4 = param_1;
  FUN_0800a358(auStack_90,0x80,DAT_08009ad4,param_1);
  local_a6 = 1;
  local_98 = 0x400;
  local_94 = 0x400;
  if ((local_a7 == '\x02') || (local_a7 == '\x01')) {
    DAT_08009adc[2] = DAT_08009ad8;
    DAT_08009adc[3] = DAT_08009ae0;
    DAT_08009adc[4] = DAT_08009ae4;
    DAT_08009adc[5] = DAT_08009ae8;
    DAT_08009adc[6] = DAT_08009aec;
    iVar1 = FUN_0800a39c(&local_a8);
    DAT_08009adc[1] = iVar1;
    FUN_08000368(DAT_08009adc + 10,&local_a8,0x98);
    *DAT_08009adc = (int)(DAT_08009adc + 10);
    FUN_08000368(DAT_08009af0 + 0x1050,DAT_08009adc,0xc0);
    FUN_08000368(DAT_08009af0 + 0x1110,&local_a8,0x98);
    *DAT_08009af4 = DAT_08009af0;
    DAT_08009af4[1] = DAT_08009af0;
    DAT_08009af4[2] = DAT_08009af0 + 4;
    DAT_08009af4[3] = DAT_08009af0 + 0x1048;
    *DAT_08009af8 = DAT_08009af4;
    *DAT_08009afc = DAT_08009af0;
    *DAT_08009b00 = (int)DAT_08009adc;
    uVar2 = *DAT_08009af8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

