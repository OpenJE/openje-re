#include "../include/cls_0x412c70.h"

void __thiscall cls_0x412c70::meth_0x412c70(cls_0x412c70 *this,int param_1,dword param_2)

{
  dword dVar1;
  
  this->mbr_0x3c4 = param_1;
  this->mbr_0x3f4 = param_2;
  dVar1 = FUN_00408110(this->mbr_0x3c0,param_1);
  this->mbr_0x428 = dVar1;
  if (dVar1 == 0) {
    handle_fatal_error("Unable to look up ammo: Caliber: %d, modifier: %d");
  }
  if (this->mbr_0x3f4 == 0) {
    this->mbr_0x428 = 0;
  }
  return;
}


