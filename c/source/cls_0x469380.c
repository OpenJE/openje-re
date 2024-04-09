#include "../include/cls_0x469380.h"

void __thiscall cls_0x469380::meth_0x469380(cls_0x469380 *this,int param_1,int param_2)

{
  char cVar1;
  
  if (this[param_2 + 5].mbr_0x0 != 0) {
    (**(code **)(this->mbr_0x0 + 0x3c))(this[param_2 + 5].mbr_0x0);
  }
  if (param_1 != 0) {
    cVar1 = (**(code **)(this->mbr_0x0 + 0x10))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(this->mbr_0x0 + 4))(param_1);
    }
  }
  this[param_2 + 5].mbr_0x0 = param_1;
  return;
}


