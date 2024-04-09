#include "../include/Polygon.h"

Polygon * __thiscall Common::Polygon::~Polygon(Polygon *this)

{
  Polygon *_Memory;
  
  this->vftptr_0x0 = &Polygon__vftable_6a0174_006a0174;
  _Memory = (Polygon *)this->mbr_0x8;
  if (_Memory != (Polygon *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return _Memory;
}



undefined4 * __thiscall Common::Polygon::virt_meth_0x599f00(Polygon *this,byte param_1)

{
  ~Polygon(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Polygon.h"
