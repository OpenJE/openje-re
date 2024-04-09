#include "../include/cls_0x5b3350.h"

void __thiscall cls_0x5b3350::meth_0x5b3350(cls_0x5b3350 *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0063b660;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)this->mbr_0x4;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_005457b0(puVar1,param_1,param_2);
  this->mbr_0x8 = (dword)(puVar1 + param_1);
  ExceptionList = local_10;
  return;
}


