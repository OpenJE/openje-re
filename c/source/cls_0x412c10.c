#include "../include/cls_0x412c10.h"

void __thiscall cls_0x412c10::meth_0x412c10(cls_0x412c10 *this,int param_1,int param_2)

{
  dword dVar1;
  
  this->mbr_0x3b8 = param_1;
  this->mbr_0x3ec = param_2;
  if (param_2 == 0) {
    this->mbr_0x424 = 0;
  }
  else {
    dVar1 = FUN_00408110(this->mbr_0x3b4,param_1);
    this->mbr_0x424 = dVar1;
    if (dVar1 == 0) {
      handle_fatal_error("Unable to look up ammo: Caliber: %d, modifier: %d");
      return;
    }
  }
  return;
}


