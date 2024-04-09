#include "../include/VFXEFFECTTYPE_LIGHT_Struct.h"

VFXEFFECTTYPE_LIGHT_Struct * __thiscall
VFXEFFECTTYPE_LIGHT_Struct::VFXEFFECTTYPE_LIGHT_Struct(VFXEFFECTTYPE_LIGHT_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_LIGHT_Struct__vftable_672fe8_00672fe8;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24)
  ;
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30)
  ;
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x57);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x92);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa6);
  ExceptionList = local_c;
  return this;
}



void * __thiscall
VFXEFFECTTYPE_LIGHT_Struct::meth_0x4e8160(VFXEFFECTTYPE_LIGHT_Struct *this,int param_1)

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
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 =
       *(undefined2 *)(param_1 + 0x80);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 + 2) =
       *(undefined *)(param_1 + 0x82);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50 =
       *(undefined4 *)(param_1 + 0x84);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 =
       *(undefined2 *)(param_1 + 0x88);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x56 = *(undefined *)(param_1 + 0x8a);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x57 =
       *(undefined2 *)(param_1 + 0x8b);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x59 = *(undefined *)(param_1 + 0x8d);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c =
       *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60 =
       *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64 =
       *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x68 =
       *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c =
       *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 =
       *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 =
       *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 =
       *(undefined4 *)(param_1 + 0xac);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7c = *(undefined *)(param_1 + 0xb0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7d = *(undefined *)(param_1 + 0xb1);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7e = *(undefined *)(param_1 + 0xb2);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7f = *(undefined *)(param_1 + 0xb3);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80 =
       *(undefined2 *)(param_1 + 0xb4);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x82 = *(undefined *)(param_1 + 0xb6);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84 =
       *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 =
       *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c =
       *(undefined4 *)(param_1 + 0xc0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x90 = *(undefined *)(param_1 + 0xc4);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x91 = *(undefined *)(param_1 + 0xc5);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x92 =
       *(undefined2 *)(param_1 + 0xc6);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x94 = *(undefined *)(param_1 + 200);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x98 =
       *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9c =
       *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0 =
       *(undefined4 *)(param_1 + 0xd4);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4 = *(undefined *)(param_1 + 0xd8);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa5 = *(undefined *)(param_1 + 0xd9);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa6 =
       *(undefined2 *)(param_1 + 0xda);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8 = *(undefined *)(param_1 + 0xdc);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac =
       *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0 =
       *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb4 =
       *(undefined4 *)(param_1 + 0xe8);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 = *(undefined *)(param_1 + 0xec);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb9 = *(undefined *)(param_1 + 0xed);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc =
       *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc0 =
       *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc4 =
       *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc8 =
       *(undefined4 *)(param_1 + 0xfc);
  return this;
}


#include "../include/VFXEFFECTTYPE_LIGHT_Struct.h"
