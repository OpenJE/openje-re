#include "../include/cls_0x5b1620.h"

void __thiscall cls_0x5b1620::meth_0x5b1620(cls_0x5b1620 *this,int param_1)

{
  char cVar1;
  dword unaff_ESI;
  
  cVar1 = (**(code **)(this->mbr_0x0 + 0x18))(param_1 + 4);
  if (cVar1 != '\0') {
    GUI::Interface::meth_0x56ec50
              ((Interface *)&this->mbr_0x18,(int *)&stack0xfffffff8,(uint *)&stack0x00000000);
    if (unaff_ESI == this->mbr_0x1c) {
      (**(code **)(this->mbr_0x0 + 0x1c))(param_1);
      (**(code **)(this->mbr_0x0 + 0xc))(param_1);
    }
  }
  return;
}


