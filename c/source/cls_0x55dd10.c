#include "../include/cls_0x55dd10.h"

cls_0x55dd10 * __thiscall cls_0x55dd10::cls_0x55dd10(cls_0x55dd10 *this)

{
  dword dVar1;
  byte local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638181;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (this->cls_0x50dbb0).mbr_0x0 = local_11;
  dVar1 = FUN_004c6640();
  (this->cls_0x50dbb0).mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x50dbb0).mbr_0x8 = 0;
  (this->cls_0x50dbb0).mbr_0xc = local_11;
  local_4 = CONCAT31(local_4._1_3_,2);
  dVar1 = FUN_0057c2e0();
  (this->cls_0x50dbb0).mbr_0x10 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x10;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x10;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x50dbb0).mbr_0x10;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x50dbb0).mbr_0x14 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x55dd10::meth_0x55ddd0(cls_0x55dd10 *this)

{
  int **ppiVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638151;
  pvStack_c = ExceptionList;
  ppiVar1 = (int **)(this->cls_0x50dbb0).mbr_0x10;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  cls_0x55dc80::meth_0x55d850
            ((cls_0x55dc80 *)&(this->cls_0x50dbb0).mbr_0xc,&local_10,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x50dbb0).mbr_0x10);
}



cls_0x55dd10 * __thiscall cls_0x55dd10::cls_0x55dd10(cls_0x55dd10 *this,undefined4 *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638181;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = *param_1;
  this->mbr_0x4 = *(byte *)(param_1 + 1);
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x8,(_String_base *)(param_1 + 2),0,0xffffffff);
  this->mbr_0x3c = 0xf;
  this->mbr_0x38 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x28 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x24,(_String_base *)(param_1 + 9),0,0xffffffff);
  local_4._0_1_ = 1;
  cls_0x50dbb0::cls_0x50dbb0(&this->cls_0x50dbb0,(undefined *)(param_1 + 0x10));
  local_4 = CONCAT31(local_4._1_3_,2);
  cls_0x55dc80::cls_0x55dc80
            ((cls_0x55dc80 *)&(this->cls_0x50dbb0).mbr_0xc,(undefined *)(param_1 + 0x13));
  *(undefined *)&(this->cls_0x50dbb0).mbr_0x18 = *(undefined *)(param_1 + 0x16);
  ExceptionList = local_c;
  return this;
}


