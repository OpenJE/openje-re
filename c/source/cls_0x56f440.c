#include "../include/cls_0x56f440.h"

void __thiscall cls_0x56f440::meth_0x5612b0(cls_0x56f440 *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638378;
  local_c = ExceptionList;
  if (0x15555555 - this->mbr_0x8 < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar1 = "list<T> too long";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"list<T> too long",(uint)(pcVar2 + -0x647948));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  this->mbr_0x8 = this->mbr_0x8 + param_1;
  return;
}



void __thiscall cls_0x56f440::meth_0x5619d0(cls_0x56f440 *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int *)this->mbr_0x4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)this->mbr_0x4;
  }
  iVar1 = FUN_00560900(iVar2,*(undefined4 *)(iVar2 + 4),param_1);
  meth_0x5612b0(this,1);
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}



cls_0x56f440 * __thiscall cls_0x56f440::cls_0x56f440(cls_0x56f440 *this)

{
  dword dVar1;
  
  dVar1 = FUN_0056e0f0();
  this->mbr_0x4 = dVar1;
  this->mbr_0x8 = 0;
  return this;
}


