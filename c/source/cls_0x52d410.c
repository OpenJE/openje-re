#include "../include/cls_0x52d410.h"

void __thiscall cls_0x52d410::meth_0x52d410(cls_0x52d410 *this,uint param_1)

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
  puStack_8 = &LAB_00636c18;
  local_c = ExceptionList;
  if (0x3fffffff - this->mbr_0x8 < param_1) {
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



void __thiscall cls_0x52d410::meth_0x52e260(cls_0x52d410 *this,undefined param_1,undefined param_2)

{
  dword dVar1;
  int iVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)&this->mbr_0xc);
  dVar1 = this->mbr_0x4;
  local_4 = 0;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),(undefined4 *)&param_1);
  meth_0x52d410(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  local_4 = 0xffffffff;
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)&this->mbr_0xc);
  ExceptionList = local_c;
  return;
}


