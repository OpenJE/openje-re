#include "../include/cls_0x443200.h"

void __thiscall cls_0x443200::meth_0x443200(cls_0x443200 *this)

{
  int iVar1;
  
  iVar1 = this->mbr_0x4 + 1;
  if ((int)this->mbr_0x8 <= iVar1) {
    iVar1 = 0;
  }
  (**(code **)(this->mbr_0x0 + 4))(iVar1);
                    /* WARNING: Could not recover jumptable at 0x0044321d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->mbr_0x0 + 8))();
  return;
}


