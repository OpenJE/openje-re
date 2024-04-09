#include "../include/VFXEFFECTTYPE_SNOW_Struct.h"

VFXEFFECTTYPE_SNOW_Struct * __thiscall
VFXEFFECTTYPE_SNOW_Struct::VFXEFFECTTYPE_SNOW_Struct(VFXEFFECTTYPE_SNOW_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634153;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_SNOW_Struct__vftable_672ee4_00672ee4;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20)
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74);
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c);
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x98);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac);
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc8);
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_SNOW_Struct::meth_0x4e4070(VFXEFFECTTYPE_SNOW_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 = 0xf;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 = 0;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFXEFFECTTYPE_SNOW_Struct::virt_meth_0x4e40e0(VFXEFFECTTYPE_SNOW_Struct *this,byte param_1)

{
  meth_0x4e4070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_SNOW_Struct::meth_0x4e4480(VFXEFFECTTYPE_SNOW_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20,
             (_String_base *)(param_1 + 0x70),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58,
             (_String_base *)(param_1 + 0x8c),0,0xffffffff);
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
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c =
       *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x90 =
       *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x94 =
       *(undefined4 *)(param_1 + 200);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x98 =
       *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9c =
       *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0 =
       *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4 =
       *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8 =
       *(undefined4 *)(param_1 + 0xdc);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac =
       *(undefined2 *)(param_1 + 0xe0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xae = *(undefined *)(param_1 + 0xe2);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xaf = *(undefined *)(param_1 + 0xe3);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0 = *(undefined *)(param_1 + 0xe4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb4 =
       *(undefined4 *)(param_1 + 0xe8);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 = *(undefined *)(param_1 + 0xec);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc =
       *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc0 =
       *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc4 =
       *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc8 =
       *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xcc =
       *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xd0 =
       *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xd4 =
       *(undefined4 *)(param_1 + 0x108);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xd8 = *(dword *)(param_1 + 0x10c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xdc = *(dword *)(param_1 + 0x110);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0 = *(dword *)(param_1 + 0x114);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 = *(dword *)(param_1 + 0x118);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 = *(dword *)(param_1 + 0x11c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec = *(dword *)(param_1 + 0x120);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf0 = *(dword *)(param_1 + 0x124);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 = *(dword *)(param_1 + 0x128);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf8 = *(dword *)(param_1 + 300);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc = *(dword *)(param_1 + 0x130);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 = *(dword *)(param_1 + 0x134);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x104 =
       *(undefined *)(param_1 + 0x138);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x108 =
       *(undefined4 *)(param_1 + 0x13c);
  return this;
}


#include "../include/VFXEFFECTTYPE_SNOW_Struct.h"
