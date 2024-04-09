#include "../include/VFXEFFECTTYPE_SPRITE_Struct.h"

VFXEFFECTTYPE_SPRITE_Struct * __thiscall
VFXEFFECTTYPE_SPRITE_Struct::VFXEFFECTTYPE_SPRITE_Struct(VFXEFFECTTYPE_SPRITE_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634ab3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_SPRITE_Struct__vftable_673788_00673788;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24)
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  ::cls_0x50db20::cls_0x50db20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x96);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9b);
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_SPRITE_Struct::meth_0x4f5050(VFXEFFECTTYPE_SPRITE_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60 = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58 = 0xf;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28 = 0;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFXEFFECTTYPE_SPRITE_Struct::virt_meth_0x4f50c0(VFXEFFECTTYPE_SPRITE_Struct *this,byte param_1)

{
  meth_0x4f5050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_SPRITE_Struct::meth_0x4f5fc0(VFXEFFECTTYPE_SPRITE_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 =
       *(undefined *)(param_1 + 0x70);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x24,
             (_String_base *)(param_1 + 0x74),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c,
             (_String_base *)(param_1 + 0x90),0,0xffffffff);
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
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x94 = *(undefined *)(param_1 + 200);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x95 = *(undefined *)(param_1 + 0xc9);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x96 =
       *(undefined2 *)(param_1 + 0xca);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x98 = *(undefined *)(param_1 + 0xcc);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x99 = *(undefined *)(param_1 + 0xcd);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9a = *(undefined *)(param_1 + 0xce);
  *(undefined2 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9b =
       *(undefined2 *)(param_1 + 0xcf);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x9d = *(undefined *)(param_1 + 0xd1);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa0 =
       *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4 =
       *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8 =
       *(undefined4 *)(param_1 + 0xdc);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac = *(undefined *)(param_1 + 0xe0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xad = *(undefined *)(param_1 + 0xe1);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xae = *(undefined *)(param_1 + 0xe2);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xaf = *(undefined *)(param_1 + 0xe3);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0 =
       *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb4 =
       *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb8 =
       *(undefined4 *)(param_1 + 0xec);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbc = *(undefined *)(param_1 + 0xf0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xbd = *(undefined *)(param_1 + 0xf1);
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
  return this;
}


#include "../include/VFXEFFECTTYPE_SPRITE_Struct.h"
