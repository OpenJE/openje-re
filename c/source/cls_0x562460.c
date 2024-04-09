#include "../include/cls_0x562460.h"

cls_0x562460 * __thiscall cls_0x562460::cls_0x562460(cls_0x562460 *this,undefined *param_1)

{
  dword dVar1;
  void *pvVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006383cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = *param_1;
  dVar1 = FUN_0056e0f0();
  this->mbr_0x8 = dVar1;
  this->mbr_0xc = 0;
  param_1 = (undefined *)this->mbr_0x8;
  local_4 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  pvVar2 = operator_new(0x24);
  this->mbr_0x14 = (dword)pvVar2;
  this->mbr_0x18 = (dword)pvVar2;
  this->mbr_0x1c = (int)pvVar2 + 0x24;
  cls_0x560dc0::meth_0x560dc0((cls_0x560dc0 *)&this->mbr_0x10,9,&param_1);
  this->mbr_0x20 = 1;
  this->mbr_0x24 = 1;
  ExceptionList = local_c;
  return this;
}


