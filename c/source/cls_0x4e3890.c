#include "../include/cls_0x4e3890.h"

void __thiscall cls_0x4e3890::meth_0x4e3890(cls_0x4e3890 *this,uint param_1)

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
  puStack_8 = &LAB_00634128;
  local_c = ExceptionList;
  if (0xccccccc - this->mbr_0x8 < param_1) {
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



void __thiscall cls_0x4e3890::meth_0x4e3940(cls_0x4e3890 *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_004e36b0(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x4e3890(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


