#include "../include/Gfx_AfterImageInfo.h"

undefined4 * __thiscall
Gfx_AfterImageInfo::virt_meth_0x512d40(Gfx_AfterImageInfo *this,byte param_1)

{
  Gfx_ParticleInfoBase::~Gfx_ParticleInfoBase(&this->Gfx_ParticleInfoBase);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_AfterImageInfo.h"
