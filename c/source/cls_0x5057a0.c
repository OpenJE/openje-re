#include "../include/cls_0x5057a0.h"

void __thiscall
cls_0x5057a0::meth_0x5057a0(cls_0x5057a0 *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x60 = param_1;
  this->mbr_0x64 = param_2;
  this->mbr_0x68 = param_3;
  return;
}



void __thiscall cls_0x5057a0::meth_0x5057c0(cls_0x5057a0 *this)

{
  cls_0x4abc60 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063558b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = (cls_0x4abc60 *)operator_new(0x10);
  local_4 = 0;
  if (pcVar1 == (cls_0x4abc60 *)0x0) {
    pcVar1 = (cls_0x4abc60 *)0x0;
  }
  else {
    pcVar1 = cls_0x4abc60::cls_0x4abc60(pcVar1,(uint *)&DAT_00708a00);
  }
  this->mbr_0x2c = (dword)pcVar1;
  this->mbr_0x4 = (dword)pcVar1;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x5057a0::meth_0x505840(cls_0x5057a0 *this,char param_1,char param_2,uint param_3)

{
  if (this->mbr_0x2c == 0) {
    meth_0x5057c0(this);
  }
  cls_0x4abc60::meth_0x4ab600((cls_0x4abc60 *)this->mbr_0x2c,param_1,param_2,param_3,(uint *)0x0);
  cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this->mbr_0x2c);
  this->mbr_0x74 = param_3;
  return;
}


