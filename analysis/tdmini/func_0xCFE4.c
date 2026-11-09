// FUN_0800cfe4 @ 0800cfe4

void FUN_0800cfe4(char *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_13ac [2];
  undefined1 uStack_13aa;
  undefined1 uStack_13a9;
  undefined1 uStack_13a8;
  undefined1 uStack_13a7;
  undefined1 uStack_13a6;
  int iStack_13a4;
  undefined1 auStack_13a0 [5004];
  
  FUN_080067d8(auStack_13a0,5000);
  iStack_13a4 = 0;
  FUN_08000348(auStack_13ac,uRam0800d254,7);
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_2 + 2);
  bVar3 = *(byte *)(param_2 + 3);
  bVar4 = *(byte *)(param_2 + 4);
  if (*param_1 == '\0') {
    if (*DAT_0800d248 == '\0') {
      iVar6 = FUN_08007ab6(*DAT_0800d23c,param_2 + 7,
                           CONCAT11(*(undefined1 *)(param_2 + 5),*(undefined1 *)(param_2 + 6)),
                           auStack_13a0,&iStack_13a4);
      if (iVar6 == 0) {
        uVar5 = ((uint)bVar4 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8) -
                0x1000;
        if (uVar5 < *(uint *)(param_1 + 0x206a)) {
          iVar6 = func_0x0800d3c4(uVar5 + *(int *)(param_1 + 0x206e),auStack_13a0,iStack_13a4);
          if (iVar6 == 0) {
            *(int *)(param_1 + 0x2098) = iStack_13a4 + *(int *)(param_1 + 0x2098);
            uStack_13aa = 0;
            (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
          }
          else {
            uStack_13aa = 0xe;
            (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
          }
        }
        else {
          uStack_13aa = 0xb;
          (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
        }
      }
      else {
        uStack_13aa = 0x13;
        uStack_13a9 = (undefined1)((uint)iVar6 >> 0x18);
        uStack_13a8 = (undefined1)((uint)iVar6 >> 0x10);
        uStack_13a7 = (undefined1)((uint)iVar6 >> 8);
        uStack_13a6 = (undefined1)iVar6;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
      }
    }
    else {
      iVar6 = func_0x080075dc(*DAT_0800d23c,param_2 + 7,0x1000);
      if (iVar6 == 0) {
        *DAT_0800d248 = '\0';
        uStack_13aa = 0;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,3);
      }
      else {
        uStack_13aa = 0xb;
        uStack_13a9 = (undefined1)((uint)iVar6 >> 0x18);
        uStack_13a8 = (undefined1)((uint)iVar6 >> 0x10);
        uStack_13a7 = (undefined1)((uint)iVar6 >> 8);
        uStack_13a6 = (undefined1)iVar6;
        (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
      }
    }
  }
  else {
    for (uVar5 = 0; uVar5 < uRam0800d258; uVar5 = uVar5 + 1) {
    }
    uStack_13aa = 0;
    (**(code **)(param_1 + 0x20b8))(param_1,auStack_13ac,7);
  }
  return;
}

