#include "../include/cls_0x581110.h"

void __thiscall cls_0x581110::meth_0x581110(cls_0x581110 *this)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)this->mbr_0x8;
  cVar2 = (**(code **)(iVar1 + 0x13c))(0,0);
  (**(code **)(iVar1 + 0x138))('\x01' - (cVar2 != '\0'));
  return;
}


