// func @ 0x408FBC

ulonglong FUN_00408fbc(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 in_r3;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  iVar4 = DAT_00409098;
  iVar3 = DAT_00409094;
  pcVar2 = DAT_00409090;
  piVar5 = (int *)(DAT_00409090 + 4);
  pbVar6 = (byte *)(DAT_00409090 + 8);
  piVar7 = (int *)(DAT_00409090 + 0xc);
  if (*DAT_00409090 == '\0') {
    iVar8 = DAT_00409098 * *piVar5 + DAT_00409094;
    *piVar5 = iVar8;
    iVar11 = 8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    iVar8 = iVar4 * iVar8 + iVar3;
    *piVar5 = iVar8;
    *piVar5 = iVar4 * iVar8 + iVar3;
    piVar9 = piVar7;
    do {
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      *piVar9 = iVar8;
      iVar11 = iVar11 + -1;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar9[1] = iVar8;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar10 = piVar9 + 3;
      piVar9[2] = iVar8;
      iVar8 = iVar4 * *piVar5 + iVar3;
      *piVar5 = iVar8;
      piVar9 = piVar9 + 4;
      *piVar10 = iVar8;
    } while (iVar11 != 0);
    *(undefined4 *)pbVar6 = *(undefined4 *)(pcVar2 + 0x88);
    *pcVar2 = '\x01';
  }
  *piVar5 = iVar4 * *piVar5 + iVar3;
  bVar1 = *pbVar6;
  *(int *)pbVar6 = piVar7[bVar1 & 0x1f];
  piVar7[bVar1 & 0x1f] = *piVar5;
  return CONCAT44(in_r3,*(undefined4 *)pbVar6) & 0xffffffff3fffffff;
}

