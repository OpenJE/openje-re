#include "../include/cls_0x4a6ce0.h"

void __thiscall cls_0x4a6ce0::meth_0x4a6ce0(cls_0x4a6ce0 *this,char param_1)

{
  switch(this->mbr_0xd1c) {
  case 0:
  case 1:
  case 2:
    if (param_1 == '\0') {
      this->mbr_0xd1c = 3;
    }
    break;
  case 3:
    if (param_1 != '\0') {
      this->mbr_0xd1c = 0;
    }
    break;
  case 4:
  case 5:
  case 6:
    if (param_1 == '\0') {
      this->mbr_0xd1c = 7;
    }
    break;
  case 7:
    if (param_1 != '\0') {
      this->mbr_0xd1c = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004a6d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->mbr_0x0 + 0xcc))();
  return;
}


