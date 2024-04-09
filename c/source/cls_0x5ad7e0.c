#include "../include/cls_0x5ad7e0.h"

void __thiscall cls_0x5ad7e0::meth_0x5ad7e0(cls_0x5ad7e0 *this,FILE *param_1)

{
  size_t sVar1;
  int *_DstBuf;
  
  sVar1 = _fread(this,4,1,param_1);
  if (sVar1 == 1) {
    if ((uint *)this->mbr_0x0 == (uint *)0x0) {
      if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x4);
      }
    }
    else {
      _DstBuf = FUN_0061aba0((int *)this->mbr_0x4,(uint *)this->mbr_0x0);
      this->mbr_0x4 = (dword)_DstBuf;
      sVar1 = _fread(_DstBuf,this->mbr_0x0,1,param_1);
      if (sVar1 == 1) {
        return;
      }
    }
  }
  handle_fatal_error("Error loading bit array\n");
  return;
}


