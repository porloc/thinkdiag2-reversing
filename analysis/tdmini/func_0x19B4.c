// FUN_080019b4 @ 080019b4

void FUN_080019b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_080006ee(param_1,param_2,auStack_20);
  FUN_0800105c(auStack_20,param_2 + 8,auStack_30);
  FUN_080006ee(auStack_30,param_2,param_3);
  return;
}

