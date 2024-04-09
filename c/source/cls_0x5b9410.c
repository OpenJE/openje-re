#include "../include/cls_0x5b9410.h"

undefined4 __thiscall cls_0x5b9410::meth_0x5b9410(cls_0x5b9410 *this,int param_1)

{
  if (this->mbr_0x4 == this->mbr_0x0) {
    return 0x32;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this->mbr_0x8 + this->mbr_0x4 * 4);
  this->mbr_0x4 = this->mbr_0x4 + 1;
  *(int *)(this->mbr_0xc + *(int *)(param_1 + 0x1c) * 4) = param_1;
  return 0;
}



undefined4 __thiscall cls_0x5b9410::meth_0x5b9440(cls_0x5b9410 *this,int param_1)

{
  dword dVar1;
  
  if (((param_1 != 0) && (*(uint *)(param_1 + 0x1c) < this->mbr_0x0)) &&
     (*(int *)(this->mbr_0xc + *(uint *)(param_1 + 0x1c) * 4) != 0)) {
    dVar1 = this->mbr_0x4 - 1;
    this->mbr_0x4 = dVar1;
    *(undefined4 *)(this->mbr_0x8 + dVar1 * 4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this->mbr_0xc + *(int *)(param_1 + 0x1c) * 4) = 0;
    return 0;
  }
  return 2;
}


