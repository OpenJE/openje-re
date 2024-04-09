#include "../include/cls_0x4a6c10.h"

void __thiscall cls_0x4a6c10::meth_0x4a6c10(cls_0x4a6c10 *this,char param_1)

{
  if (this->mbr_0xd20 == param_1) {
    return;
  }
  this->mbr_0xd20 = param_1;
  if (param_1 == '\0') {
    switch(this->mbr_0xd1c) {
    case 4:
      this->mbr_0xd1c = 0;
      break;
    case 5:
      this->mbr_0xd1c = 1;
      break;
    case 6:
      this->mbr_0xd1c = 2;
      break;
    case 7:
      this->mbr_0xd1c = 3;
    }
  }
  else {
    switch(this->mbr_0xd1c) {
    case 0:
      this->mbr_0xd1c = 4;
      break;
    case 1:
      this->mbr_0xd1c = 5;
      break;
    case 2:
      this->mbr_0xd1c = 6;
      break;
    case 3:
      this->mbr_0xd1c = 7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004a6cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->mbr_0x0 + 0xcc))();
  return;
}


