#include "../include/VFXEFFECTTYPE_RAIN_Struct.h"

VFXEFFECTTYPE_RAIN_Struct * __thiscall
VFXEFFECTTYPE_RAIN_Struct::VFXEFFECTTYPE_RAIN_Struct(VFXEFFECTTYPE_RAIN_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_RAIN_Struct__vftable_672f64_00672f64;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28)
  ;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64);
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80);
  ExceptionList = local_c;
  return this;
}



void * __thiscall
VFXEFFECTTYPE_RAIN_Struct::meth_0x4e6330(VFXEFFECTTYPE_RAIN_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 = *(dword *)(param_1 + 0x70)
  ;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 = *(dword *)(param_1 + 0x74)
  ;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28 = *(dword *)(param_1 + 0x78)
  ;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c = *(dword *)(param_1 + 0x7c)
  ;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 = *(dword *)(param_1 + 0x80)
  ;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50 =
       *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 =
       *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58 =
       *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c =
       *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60 =
       *(undefined4 *)(param_1 + 0x94);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64 =
       *(undefined2 *)(param_1 + 0x98);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x66 = *(undefined *)(param_1 + 0x9a);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x67 = *(undefined *)(param_1 + 0x9b);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x68 = *(undefined *)(param_1 + 0x9c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x69 = *(undefined *)(param_1 + 0x9d);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6a = *(undefined *)(param_1 + 0x9e);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c =
       *(undefined4 *)(param_1 + 0xa0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 = *(undefined *)(param_1 + 0xa4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 =
       *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 =
       *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7c =
       *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80 =
       *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84 =
       *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 =
       *(undefined4 *)(param_1 + 0xbc);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c = *(undefined *)(param_1 + 0xc0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x90 =
       *(undefined4 *)(param_1 + 0xc4);
  return this;
}


#include "../include/VFXEFFECTTYPE_RAIN_Struct.h"
