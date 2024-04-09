#include "../include/VFXEFFECTTYPE_TRAIL_Struct.h"

VFXEFFECTTYPE_TRAIL_Struct * __thiscall
VFXEFFECTTYPE_TRAIL_Struct::VFXEFFECTTYPE_TRAIL_Struct(VFXEFFECTTYPE_TRAIL_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006347a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_TRAIL_Struct__vftable_673260_00673260;
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20)
  ;
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28)
  ;
  cls_0x502110::cls_0x502110
            ((cls_0x502110 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30)
  ;
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54);
  local_4._0_1_ = 1;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74);
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88);
  local_4 = CONCAT31(local_4._1_3_,2);
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc0);
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_TRAIL_Struct::meth_0x4f1770(VFXEFFECTTYPE_TRAIL_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8 = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9c = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x68 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c = 0xf;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58 = 0;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFXEFFECTTYPE_TRAIL_Struct::virt_meth_0x4f1810(VFXEFFECTTYPE_TRAIL_Struct *this,byte param_1)

{
  meth_0x4f1770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/VFXEFFECTTYPE_TRAIL_Struct.h"
