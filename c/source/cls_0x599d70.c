#include "../include/cls_0x599d70.h"

void __thiscall
cls_0x599d70::meth_0x599d70(cls_0x599d70 *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = this->mbr_0x4;
  *param_2 = this->mbr_0x8;
  return;
}



uint __thiscall cls_0x599d70::meth_0x599d90(cls_0x599d70 *this)

{
  if ((this->mbr_0x0 >> 2 & 1) != 0) {
    return this->mbr_0x10;
  }
  return this->mbr_0x18;
}



void __thiscall cls_0x599d70::meth_0x59a1a0(cls_0x599d70 *this,void *param_1)

{
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)param_1,(_String_base *)&this[1].mbr_0x4,0,0xffffffff);
  return;
}


