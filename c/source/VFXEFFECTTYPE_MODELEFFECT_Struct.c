#include "../include/VFXEFFECTTYPE_MODELEFFECT_Struct.h"

VFXEFFECTTYPE_MODELEFFECT_Struct * __thiscall
VFXEFFECTTYPE_MODELEFFECT_Struct::VFXEFFECTTYPE_MODELEFFECT_Struct
          (VFXEFFECTTYPE_MODELEFFECT_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006343d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_MODELEFFECT_Struct__vftable_673064_00673064;
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)
             ((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c + 2));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)
             ((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 + 3));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x61);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x66);
  ExceptionList = local_c;
  return this;
}



void * __thiscall
VFXEFFECTTYPE_MODELEFFECT_Struct::meth_0x4e8c80(VFXEFFECTTYPE_MODELEFFECT_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 =
       *(undefined *)(param_1 + 0x70);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 + 1) =
       *(undefined *)(param_1 + 0x71);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 = *(dword *)(param_1 + 0x74)
  ;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28 = *(dword *)(param_1 + 0x78)
  ;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c =
       *(undefined *)(param_1 + 0x7c);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c + 1) =
       *(undefined *)(param_1 + 0x7d);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c + 2) =
       *(undefined2 *)(param_1 + 0x7e);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 =
       *(undefined *)(param_1 + 0x80);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 + 1) =
       *(undefined *)(param_1 + 0x81);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 + 2) =
       *(undefined *)(param_1 + 0x82);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 + 3) =
       *(undefined2 *)(param_1 + 0x83);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x51 = *(undefined *)(param_1 + 0x85);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 =
       *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58 =
       *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c =
       *(undefined4 *)(param_1 + 0x90);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60 = *(undefined *)(param_1 + 0x94);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x61 =
       *(undefined2 *)(param_1 + 0x95);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x63 = *(undefined *)(param_1 + 0x97);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64 = *(undefined *)(param_1 + 0x98);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x65 = *(undefined *)(param_1 + 0x99);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x66 =
       *(undefined2 *)(param_1 + 0x9a);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x68 = *(undefined *)(param_1 + 0x9c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c =
       *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 =
       *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 =
       *(undefined4 *)(param_1 + 0xa8);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 = *(undefined *)(param_1 + 0xac);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x79 = *(undefined *)(param_1 + 0xad);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7a = *(undefined *)(param_1 + 0xae);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7b = *(undefined *)(param_1 + 0xaf);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7c = *(undefined *)(param_1 + 0xb0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80 =
       *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84 =
       *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 =
       *(undefined4 *)(param_1 + 0xbc);
  return this;
}


#include "../include/VFXEFFECTTYPE_MODELEFFECT_Struct.h"
