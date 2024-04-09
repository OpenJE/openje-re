#include "../include/cls_0x52b030.h"

void __thiscall cls_0x52b030::meth_0x52b030(cls_0x52b030 *this,uint param_1)

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
  puStack_8 = &LAB_00636ae8;
  local_c = ExceptionList;
  if (0xfffffff - this->mbr_0x8 < param_1) {
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



void __thiscall
cls_0x52b030::meth_0x52b490(cls_0x52b030 *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00636ab0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = FUN_00491170(param_1,*(undefined4 *)(param_1 + 4),param_3);
    meth_0x52b030(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall cls_0x52b030::meth_0x52b690(cls_0x52b030 *this,uint param_1)

{
  uint uVar1;
  int *_Memory;
  
  uVar1 = this->mbr_0x8;
  if (uVar1 < param_1) {
    meth_0x52b490(this,this->mbr_0x4,param_1 - uVar1,(undefined4 *)&stack0x00000008);
    return;
  }
  while( true ) {
    if (uVar1 <= param_1) {
      return;
    }
    _Memory = (int *)((int *)this->mbr_0x4)[1];
    if (_Memory != (int *)this->mbr_0x4) break;
    uVar1 = this->mbr_0x8;
  }
  *(int *)_Memory[1] = *_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


