// func @ 0x4C9D30

int FUN_004c9d30(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *unaff_r5;
  undefined4 in_stack_00000010;
  undefined1 uStack00000018;
  undefined1 uStack00000028;
  undefined1 uStack000000a8;
  
  FUN_004cb690();
  sVar1 = FUN_004cbebc(&uStack00000028);
  if (in_stack_00000010._2_2_ == sVar1) {
    *puRam004ca048 = 1;
    FUN_004b26e8(uRam004ca04c,&uStack00000028,0x40);
    FUN_004cbf38(&uStack000000a8);
    FUN_004cc054(&uStack00000028,&uStack000000a8,&uStack00000018);
    FUN_004cc5f2(&uStack00000018,0xc,*puRam004ca044,*puRam004ca050);
    FUN_004cc5f2(&uStack00000018,0xd,puRam004ca044[1],puRam004ca050[1]);
    FUN_004cc5f2(&uStack00000018,0xe,puRam004ca044[2],puRam004ca050[2]);
    FUN_004cc5f2(&uStack00000018,0xf,puRam004ca044[3],puRam004ca050[3]);
    uVar2 = FUN_004bb6d8(&uStack00000028);
    FUN_004cb666(&uStack00000028,uVar2,&uStack00000018,unaff_r5 + 1);
    uVar3 = FUN_004bb6d8(&uStack00000028);
    uVar3 = uVar3 & 0xff;
    if (uVar3 % 0x10 != 0) {
      uVar3 = (uVar3 / 0x10 + 1) * 0x10;
    }
    *unaff_r5 = 0;
    iVar4 = uVar3 + 1;
  }
  else {
    *unaff_r5 = 0xff;
    unaff_r5[1] = 2;
    iVar4 = 2;
  }
  return iVar4;
}

