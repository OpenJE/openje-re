#include "../include/VFXEFFECTTYPE_MOTIONBLUR_Struct.h"

undefined4 * __thiscall
VFXEFFECTTYPE_MOTIONBLUR_Struct::virt_meth_0x4e8020
          (VFXEFFECTTYPE_MOTIONBLUR_Struct *this,byte param_1)

{
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



VFXEFFECTTYPE_MOTIONBLUR_Struct * __thiscall
VFXEFFECTTYPE_MOTIONBLUR_Struct::VFXEFFECTTYPE_MOTIONBLUR_Struct
          (VFXEFFECTTYPE_MOTIONBLUR_Struct *this)

{
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_MOTIONBLUR_Struct__vftable_673804_00673804;
  return this;
}


#include "../include/VFXEFFECTTYPE_MOTIONBLUR_Struct.h"
