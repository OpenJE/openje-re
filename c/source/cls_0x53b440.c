#include "../include/cls_0x53b440.h"

bool __thiscall cls_0x53b440::meth_0x53b440(cls_0x53b440 *this,uint param_1)

{
  cls_0x53b180 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063739b;
  local_c = ExceptionList;
  if (this->mbr_0x18 != 0) {
    return false;
  }
  ExceptionList = &local_c;
  pcVar1 = (cls_0x53b180 *)operator_new(0x18);
  local_4 = 0;
  if (pcVar1 == (cls_0x53b180 *)0x0) {
    pcVar1 = (cls_0x53b180 *)0x0;
  }
  else {
    pcVar1 = cls_0x53b180::cls_0x53b180(pcVar1,(param_1 >> 7) + 1,0x80);
  }
  this->mbr_0x18 = (dword)pcVar1;
  ExceptionList = local_c;
  return pcVar1 == (cls_0x53b180 *)0x0;
}


