#include "../include/cls_0x56a4c0.h"

cls_0x56a4c0 * __thiscall cls_0x56a4c0::cls_0x56a4c0(cls_0x56a4c0 *this)

{
  dword dVar1;
  int iVar2;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  dVar1 = FUN_0056e0b0();
  (this->cls_0x401b00).mbr_0x4 = dVar1;
  (this->cls_0x401b00).mbr_0x8 = 0;
  local_4 = 0;
  *(undefined *)&(this->cls_0x401b00).mbr_0xc = local_11;
  iVar2 = FUN_004c6640();
  *(int *)&this->field_0x10 = iVar2;
  *(undefined *)(iVar2 + 0x15) = 1;
  *(int *)(*(int *)&this->field_0x10 + 4) = *(int *)&this->field_0x10;
  *(undefined4 *)*(undefined4 *)&this->field_0x10 = *(undefined4 *)&this->field_0x10;
  *(int *)(*(int *)&this->field_0x10 + 8) = *(int *)&this->field_0x10;
  *(undefined4 *)&this->field_0x14 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x56a4c0::meth_0x56a540(cls_0x56a4c0 *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638a68;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cls_0x50dbb0::meth_0x55ab20
            ((cls_0x50dbb0 *)&(this->cls_0x401b00).mbr_0xc,&local_10,
             (int **)**(int ***)&this->field_0x10,*(int ***)&this->field_0x10);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&this->field_0x10);
}



cls_0x56a4c0 * __thiscall cls_0x56a4c0::cls_0x56a4c0(cls_0x56a4c0 *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cls_0x401b00::cls_0x401b00(&this->cls_0x401b00,param_1);
  local_4 = 0;
  cls_0x50dbb0::cls_0x50dbb0
            ((cls_0x50dbb0 *)&(this->cls_0x401b00).mbr_0xc,(undefined *)(param_1 + 0xc));
  ExceptionList = local_c;
  return this;
}


