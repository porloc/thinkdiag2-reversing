// func @ 0x4BD234

void FUN_004bd234(int param_1,char *param_2)

{
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\b'; cVar1 = cVar1 + '\x01') {
    FUN_004bd324(param_1,DAT_004bd490 + (short)cVar1 * 0x40 +
                         (char)(*param_2 * '\x02' + param_2[5]) * 0x10 +
                         (int)(char)(param_2[4] +
                                    param_2[2] * '\x04' + param_2[1] * '\b' + param_2[3] * '\x02'),4
                );
    param_2 = param_2 + 6;
    param_1 = param_1 + 4;
  }
  return;
}

