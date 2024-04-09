#include "../include/VFXEFFECTTYPE_LIGHTNING_Struct.h"

VFXEFFECTTYPE_LIGHTNING_Struct * __thiscall
VFXEFFECTTYPE_LIGHTNING_Struct::VFXEFFECTTYPE_LIGHTNING_Struct(VFXEFFECTTYPE_LIGHTNING_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_LIGHTNING_Struct__vftable_6730e0_006730e0;
  cls_0x502110::cls_0x502110
            ((cls_0x502110 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58);
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 + 3));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 2));
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_LIGHTNING_Struct::meth_0x4e9110(VFXEFFECTTYPE_LIGHTNING_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64 = 0;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFXEFFECTTYPE_LIGHTNING_Struct::virt_meth_0x4e9150
          (VFXEFFECTTYPE_LIGHTNING_Struct *this,byte param_1)

{
  meth_0x4e9110(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_LIGHTNING_Struct::meth_0x4e9780(VFXEFFECTTYPE_LIGHTNING_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 = *(dword *)(param_1 + 0x70)
  ;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 =
       *(undefined *)(param_1 + 0x74);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24 + 1) =
       *(undefined *)(param_1 + 0x75);
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
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60,
             (_String_base *)(param_1 + 0x94),0,0xffffffff);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7c = *(undefined *)(param_1 + 0xb0);
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
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac = *(undefined *)(param_1 + 0xe0);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0 =
       *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb4 =
       *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 =
       *(undefined4 *)(param_1 + 0xec);
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
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 =
       *(undefined2 *)(param_1 + 0x118);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 + 2) =
       *(undefined *)(param_1 + 0x11a);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 + 3) =
       *(undefined2 *)(param_1 + 0x11b);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 1) =
       *(undefined *)(param_1 + 0x11d);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 2) =
       *(undefined *)(param_1 + 0x11e);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 + 3) =
       *(undefined *)(param_1 + 0x11f);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec =
       *(undefined2 *)(param_1 + 0x120);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec + 2) =
       *(undefined *)(param_1 + 0x122);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf0 = *(dword *)(param_1 + 0x124);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 = *(dword *)(param_1 + 0x128);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf8 = *(dword *)(param_1 + 300);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc =
       *(undefined *)(param_1 + 0x130);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 1) =
       *(undefined *)(param_1 + 0x131);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 2) =
       *(undefined2 *)(param_1 + 0x132);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 =
       *(undefined *)(param_1 + 0x134);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x104 = *(dword *)(param_1 + 0x138);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x108 =
       *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x10c =
       *(undefined4 *)(param_1 + 0x140);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 =
       *(undefined *)(param_1 + 0x144);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 + 1) =
       *(undefined *)(param_1 + 0x145);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 + 2) =
       *(undefined *)(param_1 + 0x146);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 + 3) =
       *(undefined *)(param_1 + 0x147);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 =
       *(undefined *)(param_1 + 0x148);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 = *(dword *)(param_1 + 0x14c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x11c = *(dword *)(param_1 + 0x150);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x120 = *(dword *)(param_1 + 0x154);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124 =
       *(undefined *)(param_1 + 0x158);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124 + 1) =
       *(undefined *)(param_1 + 0x159);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124 + 2) =
       *(undefined *)(param_1 + 0x15a);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x128 = *(dword *)(param_1 + 0x15c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c = *(dword *)(param_1 + 0x160);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x130 = *(dword *)(param_1 + 0x164);
  return this;
}


#include "../include/VFXEFFECTTYPE_LIGHTNING_Struct.h"
