#include "../include/cls_0x4950d0.h"

cls_0x4950d0 * __thiscall cls_0x4950d0::cls_0x4950d0(cls_0x4950d0 *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = param_1;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x4,0xc,1,cls_0x495090::cls_0x495090,cls_0x490450::meth_0x494f00);
  local_4 = 0;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x10,0xc,1,cls_0x492240::cls_0x492240,cls_0x494780::meth_0x494b00);
  local_4._0_1_ = 1;
  *(undefined *)&this->mbr_0x1c = (undefined)param_1;
  dVar1 = FUN_004c6640();
  this->mbr_0x20 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x20 + 4) = this->mbr_0x20;
  *(dword *)this->mbr_0x20 = this->mbr_0x20;
  *(dword *)(this->mbr_0x20 + 8) = this->mbr_0x20;
  this->mbr_0x24 = 0;
  *(undefined *)&this->mbr_0x28 = (undefined)param_1;
  local_4._0_1_ = 2;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x2c = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x2c + 4) = this->mbr_0x2c;
  *(dword *)this->mbr_0x2c = this->mbr_0x2c;
  *(dword *)(this->mbr_0x2c + 8) = this->mbr_0x2c;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x49 = 0;
  this->mbr_0x4c = 0;
  local_4._0_1_ = 3;
  *(undefined *)&this->mbr_0x50 = (undefined)param_1;
  dVar1 = FUN_004c6640();
  this->mbr_0x54 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x54 + 4) = this->mbr_0x54;
  *(dword *)this->mbr_0x54 = this->mbr_0x54;
  *(dword *)(this->mbr_0x54 + 8) = this->mbr_0x54;
  this->mbr_0x58 = 0;
  local_4._0_1_ = 4;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x60 = dVar1;
  this->mbr_0x64 = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  dVar1 = FUN_0056e0b0();
  this->mbr_0x6c = dVar1;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x3c = 0x80000000;
  ExceptionList = local_c;
  return this;
}


