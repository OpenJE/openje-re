#include "../include/cls_0x5a4310.h"

int __thiscall cls_0x5a4310::meth_0x5a4310(cls_0x5a4310 *this)

{
  if (this->mbr_0x0 != 0) {
    this->mbr_0x8 = 3;
    return this->mbr_0x4;
  }
  FUN_00497120((byte *)
               "A call was made to Cutscene::StopCutscene but cutscene state was already invalid.");
  return this->mbr_0x4;
}


