#include "../include/cls_0x4bc5f0.h"

void __thiscall cls_0x4bc5f0::meth_0x4bc500(cls_0x4bc5f0 *this)

{
  int **ppiVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063280b;
  pvStack_c = ExceptionList;
  ppiVar1 = (int **)(this->cls_0x4542d0).cls_0x454210.mbr_0x4;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cls_0x4542d0::meth_0x4bb390(&this->cls_0x4542d0,&local_10,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x4542d0).cls_0x454210.mbr_0x4);
}



cls_0x4bc5f0 * __thiscall cls_0x4bc5f0::cls_0x4bc5f0(cls_0x4bc5f0 *this,undefined4 *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063282b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = *param_1;
  cls_0x4bbc60::cls_0x4bbc60(&this->cls_0x4bbc60,(int)(param_1 + 1));
  this->mbr_0x10 = param_1[4];
  local_4 = 0;
  this->mbr_0x14 = param_1[5];
  cls_0x4542d0::cls_0x4542d0(&this->cls_0x4542d0,(undefined *)(param_1 + 6));
  ExceptionList = local_c;
  return this;
}



cls_0x4bc5f0 * __thiscall cls_0x4bc5f0::cls_0x4bc5f0(cls_0x4bc5f0 *this)

{
  dword dVar1;
  byte local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063282b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = 0;
  dVar1 = FUN_00401690();
  (this->cls_0x4bbc60).mbr_0x4 = dVar1;
  (this->cls_0x4bbc60).mbr_0x8 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  local_4 = 0;
  (this->cls_0x4542d0).cls_0x454210.mbr_0x0 = local_11;
  dVar1 = FUN_0057c360();
  (this->cls_0x4542d0).cls_0x454210.mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  dVar1 = (this->cls_0x4542d0).cls_0x454210.mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x4542d0).cls_0x454210.mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x4542d0).cls_0x454210.mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x4542d0).cls_0x454210.mbr_0x8 = 0;
  ExceptionList = local_c;
  return this;
}


