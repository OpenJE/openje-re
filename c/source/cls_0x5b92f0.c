#include "../include/cls_0x5b92f0.h"

void __thiscall cls_0x5b92f0::meth_0x5b92f0(cls_0x5b92f0 *this)

{
  void *_Memory;
  uint uVar1;
  
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  if (this->mbr_0xc != 0) {
    uVar1 = 0;
    if (this->mbr_0x0 != 0) {
      do {
        _Memory = *(void **)(this->mbr_0xc + uVar1 * 4);
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < this->mbr_0x0);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  return;
}


