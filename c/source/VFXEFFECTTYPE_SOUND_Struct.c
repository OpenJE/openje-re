#include "../include/VFXEFFECTTYPE_SOUND_Struct.h"

int __thiscall
VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60(VFXEFFECTTYPE_SOUND_Struct *this,int param_1)

{
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x4,
             (_String_base *)(param_1 + 4),0,0xffffffff);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x20 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x24 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x28 = *(undefined4 *)(param_1 + 0x28);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x502110.mbr_0x0 = *(dword *)(param_1 + 0x2c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x30 = *(undefined4 *)(param_1 + 0x30);
  ::cls_0x50db20::meth_0x401b20
            (&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20,(_String_base *)(param_1 + 0x34),0,
             0xffffffff);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.vftptr_0x0 =
       *(undefined *)(param_1 + 0x50);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.vftptr_0x0 + 1)
       = *(undefined *)(param_1 + 0x51);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x4 = *(dword *)(param_1 + 0x54);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x8 = *(dword *)(param_1 + 0x58);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.field_0xc =
       *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.field_0x10 =
       *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.field_0x14 =
       *(undefined4 *)(param_1 + 100);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x18 = *(dword *)(param_1 + 0x68)
  ;
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x1c =
       *(undefined *)(param_1 + 0x6c);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x1c + 1) =
       *(undefined *)(param_1 + 0x6d);
  return (int)this;
}



VFXEFFECTTYPE_SOUND_Struct * __thiscall
VFXEFFECTTYPE_SOUND_Struct::VFXEFFECTTYPE_SOUND_Struct(VFXEFFECTTYPE_SOUND_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634043;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_SOUND_Struct__vftable_672df4_00672df4;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20)
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74);
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_SOUND_Struct::meth_0x4e3060(VFXEFFECTTYPE_SOUND_Struct *this)

{
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x94);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa8 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xa4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x94 = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x8c = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 = 0;
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
VFXEFFECTTYPE_SOUND_Struct::virt_meth_0x4e3120(VFXEFFECTTYPE_SOUND_Struct *this,byte param_1)

{
  meth_0x4e3060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_SOUND_Struct::meth_0x4e3430(VFXEFFECTTYPE_SOUND_Struct *this,int param_1)

{
  meth_0x4e1c60(this,param_1);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20,
             (_String_base *)(param_1 + 0x70),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58,
             (_String_base *)(param_1 + 0x8c),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74,
             (_String_base *)(param_1 + 0xa8),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x90,
             (_String_base *)(param_1 + 0xc4),0,0xffffffff);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac = *(undefined *)(param_1 + 0xe0);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xad = *(undefined *)(param_1 + 0xe1);
  return this;
}


#include "../include/VFXEFFECTTYPE_SOUND_Struct.h"
