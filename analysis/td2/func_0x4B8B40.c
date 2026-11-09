// func @ 0x4B8B40

uint FUN_004b8b40(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 auStack_12c [260];
  int local_28;
  
  local_148 = 0;
  local_144 = 0;
  local_130 = 0x100;
  local_134 = 0;
  local_28 = param_2;
  FUN_004b09c0(auStack_12c,0x100,0);
  local_148 = (param_3 / 0x100) * 5 + local_28;
  cVar1 = *(char *)(param_1 + local_148);
  local_138 = local_148 + param_1 + 1;
  FUN_004b27ac(&local_148,local_138,2);
  local_13c = local_148 + param_1;
  FUN_004b27ac(&local_144,local_13c,2);
  local_140 = local_148 + param_1 + 2;
  FUN_004b27ac(auStack_12c,local_140,local_144);
  FUN_004b84a0(auStack_12c);
  uVar2 = FUN_004b8b1e(auStack_12c,param_3 % 0x100 & 0xff);
  if (cVar1 == '\x02') {
    uVar2 = uVar2 & 0xffff;
  }
  return uVar2;
}

