#include "../include/VFXEFFECTTYPE_BASE_Struct.h"

VFXEFFECTTYPE_BASE_Struct * __thiscall
VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(VFXEFFECTTYPE_BASE_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633ea6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFXEFFECTTYPE_BASE_Struct__vftable_672548_00672548;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  cls_0x502110::cls_0x502110(&this->cls_0x502110);
  ::cls_0x50db20::cls_0x50db20(&this->cls_0x50db20);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)&(this->cls_0x50db20).VFX_Parameter.mbr_0x4);
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&(this->cls_0x50db20).VFX_Parameter.field_0x10);
  ExceptionList = local_c;
  return this;
}



VFXEFFECTTYPE_BASE_Struct * __thiscall
VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(VFXEFFECTTYPE_BASE_Struct *this)

{
  VFXEFFECTTYPE_BASE_Struct *in_EAX;
  
  this->vftptr_0x0 = &VFXEFFECTTYPE_BASE_Struct__vftable_672548_00672548;
  if (0xf < (this->cls_0x50db20).mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->cls_0x50db20).mbr_0x4);
  }
  (this->cls_0x50db20).mbr_0x18 = 0xf;
  (this->cls_0x50db20).mbr_0x14 = 0;
  *(undefined *)&(this->cls_0x50db20).mbr_0x4 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  return in_EAX;
}



undefined4 * __thiscall
VFXEFFECTTYPE_BASE_Struct::virt_meth_0x4e17a0(VFXEFFECTTYPE_BASE_Struct *this,byte param_1)

{
  ~VFXEFFECTTYPE_BASE_Struct(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void * __thiscall
VFXEFFECTTYPE_BASE_Struct::meth_0x4e3d10(VFXEFFECTTYPE_BASE_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x20 = *(dword *)(param_1 + 0x70);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x24 = *(dword *)(param_1 + 0x74);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x28 = *(dword *)(param_1 + 0x78);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x2c = *(dword *)(param_1 + 0x7c);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x30 = *(dword *)(param_1 + 0x80);
  (this->cls_0x50db20).field_0x50 = *(undefined *)(param_1 + 0x84);
  (this->cls_0x50db20).field_0x51 = *(undefined *)(param_1 + 0x85);
  *(undefined4 *)&(this->cls_0x50db20).field_0x54 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&(this->cls_0x50db20).field_0x58 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)&(this->cls_0x50db20).field_0x5c = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)&(this->cls_0x50db20).field_0x60 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)&(this->cls_0x50db20).field_0x64 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)&(this->cls_0x50db20).field_0x68 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)&(this->cls_0x50db20).field_0x6c = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)&(this->cls_0x50db20).field_0x70 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)&(this->cls_0x50db20).field_0x74 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&(this->cls_0x50db20).field_0x78 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)&(this->cls_0x50db20).field_0x7c = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)&(this->cls_0x50db20).field_0x80 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&(this->cls_0x50db20).field_0x84 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&(this->cls_0x50db20).field_0x88 = *(undefined4 *)(param_1 + 0xbc);
  return this;
}



VFXEFFECTTYPE_BASE_Struct * __thiscall
VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(VFXEFFECTTYPE_BASE_Struct *this)

{
  VFXEFFECTTYPE_BASE_Struct *in_EAX;
  
  this->vftptr_0x0 = &VFXEFFECTTYPE_BASE_Struct__vftable_672548_00672548;
  if (0xf < (this->cls_0x50db20).mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->cls_0x50db20).mbr_0x4);
  }
  (this->cls_0x50db20).mbr_0x18 = 0xf;
  (this->cls_0x50db20).mbr_0x14 = 0;
  *(undefined *)&(this->cls_0x50db20).mbr_0x4 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  return in_EAX;
}



void * __thiscall
VFXEFFECTTYPE_BASE_Struct::meth_0x4f10c0(VFXEFFECTTYPE_BASE_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x20 = *(dword *)(param_1 + 0x70);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x24 = *(dword *)(param_1 + 0x74);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x28 = *(dword *)(param_1 + 0x78);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x2c = *(dword *)(param_1 + 0x7c);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x30 = *(dword *)(param_1 + 0x80);
  *(undefined4 *)&(this->cls_0x50db20).field_0x50 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)&(this->cls_0x50db20).field_0x54 = *(undefined4 *)(param_1 + 0x88);
  (this->cls_0x50db20).field_0x58 = *(undefined *)(param_1 + 0x8c);
  return this;
}



void * __thiscall
VFXEFFECTTYPE_BASE_Struct::meth_0x4f2ab0(VFXEFFECTTYPE_BASE_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  *(undefined2 *)&(this->cls_0x50db20).VFX_Parameter.mbr_0x20 = *(undefined2 *)(param_1 + 0x70);
  *(undefined *)((int)&(this->cls_0x50db20).VFX_Parameter.mbr_0x20 + 2) =
       *(undefined *)(param_1 + 0x72);
  *(undefined *)((int)&(this->cls_0x50db20).VFX_Parameter.mbr_0x20 + 3) =
       *(undefined *)(param_1 + 0x73);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x24 = *(dword *)(param_1 + 0x74);
  *(undefined2 *)&(this->cls_0x50db20).VFX_Parameter.mbr_0x28 = *(undefined2 *)(param_1 + 0x78);
  *(undefined *)((int)&(this->cls_0x50db20).VFX_Parameter.mbr_0x28 + 2) =
       *(undefined *)(param_1 + 0x7a);
  *(undefined *)((int)&(this->cls_0x50db20).VFX_Parameter.mbr_0x28 + 3) =
       *(undefined *)(param_1 + 0x7b);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x2c = *(dword *)(param_1 + 0x7c);
  (this->cls_0x50db20).VFX_Parameter.mbr_0x30 = *(dword *)(param_1 + 0x80);
  *(undefined4 *)&(this->cls_0x50db20).field_0x50 = *(undefined4 *)(param_1 + 0x84);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->cls_0x50db20).field_0x54,(_String_base *)(param_1 + 0x88),0,
             0xffffffff);
  (this->cls_0x50db20).field_0x70 = *(undefined *)(param_1 + 0xa4);
  *(undefined4 *)&(this->cls_0x50db20).field_0x74 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&(this->cls_0x50db20).field_0x78 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)&(this->cls_0x50db20).field_0x7c = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)&(this->cls_0x50db20).field_0x80 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&(this->cls_0x50db20).field_0x84 = *(undefined4 *)(param_1 + 0xb8);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->cls_0x50db20).field_0x88,(_String_base *)(param_1 + 0xbc),0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->cls_0x50db20).field_0xa4,(_String_base *)(param_1 + 0xd8),0,
             0xffffffff);
  *(undefined4 *)&(this->cls_0x50db20).field_0xc0 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)&(this->cls_0x50db20).field_0xc4 = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)&(this->cls_0x50db20).field_0xc8 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)&(this->cls_0x50db20).field_0xcc = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)&(this->cls_0x50db20).field_0xd0 = *(undefined4 *)(param_1 + 0x104);
  (this->cls_0x50db20).field_0xd4 = *(undefined *)(param_1 + 0x108);
  return this;
}


#include "../include/VFXEFFECTTYPE_BASE_Struct.h"
