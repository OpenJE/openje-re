#include "../include/VFXEFFECTTYPE_WIND_Struct.h"

VFXEFFECTTYPE_WIND_Struct * __thiscall
VFXEFFECTTYPE_WIND_Struct::VFXEFFECTTYPE_WIND_Struct(VFXEFFECTTYPE_WIND_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006340d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_WIND_Struct__vftable_672e6c_00672e6c;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24)
  ;
  ExceptionList = local_c;
  return this;
}


#include "../include/VFXEFFECTTYPE_WIND_Struct.h"
