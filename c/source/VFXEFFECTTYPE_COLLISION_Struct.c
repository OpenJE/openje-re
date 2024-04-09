#include "../include/VFXEFFECTTYPE_COLLISION_Struct.h"

VFXEFFECTTYPE_COLLISION_Struct * __thiscall
VFXEFFECTTYPE_COLLISION_Struct::VFXEFFECTTYPE_COLLISION_Struct(VFXEFFECTTYPE_COLLISION_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_COLLISION_Struct__vftable_6731e4_006731e4;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28)
  ;
  ExceptionList = local_c;
  return this;
}


#include "../include/VFXEFFECTTYPE_COLLISION_Struct.h"
