#include "../include/cls_0x5e8a30.h"

cls_0x5e8a30 * __thiscall cls_0x5e8a30::cls_0x5e8a30(cls_0x5e8a30 *this,byte param_1)

{
  dword *_Memory;
  
  if ((param_1 & 2) == 0) {
    meth_0x5ec81a(this);
    _Memory = (dword *)this;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
  }
  else {
    _Memory = &this[-1].mbr_0xc;
    _eh_vector_destructor_iterator_(this,0x10,*_Memory,meth_0x5ec81a);
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return (cls_0x5e8a30 *)_Memory;
}



void __thiscall cls_0x5e8a30::meth_0x5ec81a(cls_0x5e8a30 *this)

{
  if ((cls_0x5f427b *)this->mbr_0xc != (cls_0x5f427b *)0x0) {
    cls_0x5f427b::meth_0x5f427b((cls_0x5f427b *)this->mbr_0xc);
    this->mbr_0xc = 0;
  }
  return;
}


