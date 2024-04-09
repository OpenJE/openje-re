#include "../include/cls_0x5ad850.h"

void __thiscall cls_0x5ad850::meth_0x5ad850(cls_0x5ad850 *this,FILE *param_1)

{
  size_t sVar1;
  
  sVar1 = _fwrite(this,4,1,param_1);
  if (sVar1 == 1) {
    if (this->mbr_0x0 == 0) {
      return;
    }
    sVar1 = _fwrite((void *)this->mbr_0x4,this->mbr_0x0,1,param_1);
    if (sVar1 == 1) {
      return;
    }
  }
  handle_fatal_error("Error saving bit array\n");
  return;
}


