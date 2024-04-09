#include "../include/VFXEFFECTTYPE_WATER_Struct.h"

VFXEFFECTTYPE_WATER_Struct * __thiscall
VFXEFFECTTYPE_WATER_Struct::VFXEFFECTTYPE_WATER_Struct(VFXEFFECTTYPE_WATER_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006346c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_WATER_Struct__vftable_67315c_0067315c;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20)
  ;
  local_4._0_1_ = 1;
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74);
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84);
  local_4 = CONCAT31(local_4._1_3_,2);
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xd8);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x104);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x11c);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x134);
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_WATER_Struct::meth_0x4ee220(VFXEFFECTTYPE_WATER_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4 = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9c = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x98 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 = 0;
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
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50 = 0;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 = 0;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFXEFFECTTYPE_WATER_Struct::virt_meth_0x4ee2e0(VFXEFFECTTYPE_WATER_Struct *this,byte param_1)

{
  meth_0x4ee220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_WATER_Struct::meth_0x4ee420(VFXEFFECTTYPE_WATER_Struct *this,int param_1)

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
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84,
             (_String_base *)(param_1 + 0xb8),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0,
             (_String_base *)(param_1 + 0xd4),0,0xffffffff);
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
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xd8 =
       *(undefined2 *)(param_1 + 0x10c);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xd8 + 2) =
       *(undefined *)(param_1 + 0x10e);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xdc = *(dword *)(param_1 + 0x110);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0 =
       *(undefined *)(param_1 + 0x114);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0 + 1) =
       *(undefined *)(param_1 + 0x115);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0 + 2) =
       *(undefined *)(param_1 + 0x116);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 = *(dword *)(param_1 + 0x118);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 =
       *(undefined *)(param_1 + 0x11c);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 1) =
       *(undefined *)(param_1 + 0x11d);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 2) =
       *(undefined *)(param_1 + 0x11e);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 3) =
       *(undefined *)(param_1 + 0x11f);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec = *(dword *)(param_1 + 0x120);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf0 = *(dword *)(param_1 + 0x124);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 = *(dword *)(param_1 + 0x128);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf8 = *(dword *)(param_1 + 300);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc = *(dword *)(param_1 + 0x130);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 = *(dword *)(param_1 + 0x134);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x104 = *(dword *)(param_1 + 0x138);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x108 =
       *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x10c =
       *(undefined4 *)(param_1 + 0x140);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 = *(dword *)(param_1 + 0x144);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 = *(dword *)(param_1 + 0x148);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 = *(dword *)(param_1 + 0x14c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x11c = *(dword *)(param_1 + 0x150);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x120 = *(dword *)(param_1 + 0x154);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124 = *(dword *)(param_1 + 0x158);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x128 = *(dword *)(param_1 + 0x15c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c = *(dword *)(param_1 + 0x160);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x130 = *(dword *)(param_1 + 0x164);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x134 = *(dword *)(param_1 + 0x168);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x138 = *(dword *)(param_1 + 0x16c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x13c = *(dword *)(param_1 + 0x170);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x140 = *(dword *)(param_1 + 0x174);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x144 = *(dword *)(param_1 + 0x178);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x148 = *(dword *)(param_1 + 0x17c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x14c = *(dword *)(param_1 + 0x180);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x150 = *(dword *)(param_1 + 0x184);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x154 = *(dword *)(param_1 + 0x188);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x158 = *(dword *)(param_1 + 0x18c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x15c =
       *(undefined4 *)(param_1 + 400);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x160 =
       *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x164 =
       *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x168 =
       *(undefined4 *)(param_1 + 0x19c);
  return this;
}


#include "../include/VFXEFFECTTYPE_WATER_Struct.h"
