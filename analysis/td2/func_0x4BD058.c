// func @ 0x4BD058

void FUN_004bd058(char *param_1,char *param_2,int param_3)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return;
}

