// func @ 0x4B907E

void FUN_004b907e(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_40 [20];
  int local_2c;
  undefined4 local_28;
  
  uVar3 = 0;
  uVar2 = 0;
  local_2c = param_2;
  local_28 = param_4;
  FUN_004b2824(local_40,0x14);
  uVar4 = 0;
  do {
    if ((param_3 & 0xff) <= (uVar4 & 0xff)) {
      return;
    }
    local_40[uVar3 & 0xff] = *(undefined1 *)(param_1 + (uVar4 & 0xff));
    uVar3 = (uVar3 & 0xff) + 1;
    if ((ushort)*(byte *)(param_1 + (uVar4 & 0xff) + 1) == (short)(char)local_28) {
      uVar4 = (uVar4 & 0xff) + 1;
      uVar1 = FUN_004bd050(local_40);
      *(undefined1 *)(local_2c + (uVar2 & 0xff)) = uVar1;
      uVar3 = 0;
      FUN_004b09c0(local_40,0x14,0);
      uVar2 = (uVar2 & 0xff) + 1;
    }
    else {
      param_3 = param_3 & 0xff;
      uVar4 = uVar4 & 0xff;
      if (param_3 == uVar4 + 1) {
        uVar1 = FUN_004bd050(local_40);
        *(undefined1 *)(local_2c + (uVar2 & 0xff)) = uVar1;
        return;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

