#include "../include/VFXEFFECTTYPE_MODEL_Struct.h"

VFXEFFECTTYPE_MODEL_Struct * __thiscall
VFXEFFECTTYPE_MODEL_Struct::VFXEFFECTTYPE_MODEL_Struct(VFXEFFECTTYPE_MODEL_Struct *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063491f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  local_4 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).vftptr_0x0 =
       (VFXEFFECTTYPE_BASE_Struct__vftable_672548 *)
       &VFXEFFECTTYPE_MODEL_Struct__vftable_67370c_0067370c;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20)
  ;
  local_4._0_1_ = 1;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74);
  local_4._0_1_ = 2;
  cls_0x40a220::cls_0x40a220
            ((cls_0x40a220 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac);
  local_4 = CONCAT31(local_4._1_3_,3);
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 1));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 + 2));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 + 1));
  cls_0x4d8d70::cls_0x4d8d70
            ((cls_0x4d8d70 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 + 2));
  ExceptionList = local_c;
  return this;
}



void __thiscall VFXEFFECTTYPE_MODEL_Struct::meth_0x4f38d0(VFXEFFECTTYPE_MODEL_Struct *this)

{
  if (0xf < (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xcc);
  }
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe0 = 0xf;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xdc = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xcc = 0;
  if (0xf < *(uint *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0);
  }
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc4 = 0xf;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc0 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xb0 = 0;
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
VFXEFFECTTYPE_MODEL_Struct::virt_meth_0x4f39e0(VFXEFFECTTYPE_MODEL_Struct *this,byte param_1)

{
  meth_0x4f38d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall
VFXEFFECTTYPE_MODEL_Struct::meth_0x4f3b40(VFXEFFECTTYPE_MODEL_Struct *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60((VFXEFFECTTYPE_SOUND_Struct *)this,param_1);
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
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xac,
             (_String_base *)(param_1 + 0xe0),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0xc8,
             (_String_base *)(param_1 + 0xfc),0,0xffffffff);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe4 = *(dword *)(param_1 + 0x118);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xe8 = *(dword *)(param_1 + 0x11c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xec = *(dword *)(param_1 + 0x120);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf0 = *(dword *)(param_1 + 0x124);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 =
       *(undefined *)(param_1 + 0x128);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 + 1) =
       *(undefined *)(param_1 + 0x129);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf4 + 2) =
       *(undefined *)(param_1 + 0x12a);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xf8 = *(dword *)(param_1 + 300);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc =
       *(undefined *)(param_1 + 0x130);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 1) =
       *(undefined2 *)(param_1 + 0x131);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0xfc + 3) =
       *(undefined *)(param_1 + 0x133);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 =
       *(undefined *)(param_1 + 0x134);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 + 1) =
       *(undefined *)(param_1 + 0x135);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x100 + 2) =
       *(undefined2 *)(param_1 + 0x136);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x104 =
       *(undefined *)(param_1 + 0x138);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x108 =
       *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x10c =
       *(undefined4 *)(param_1 + 0x140);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x110 = *(dword *)(param_1 + 0x144);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 =
       *(undefined *)(param_1 + 0x148);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 + 1) =
       *(undefined2 *)(param_1 + 0x149);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x114 + 3) =
       *(undefined *)(param_1 + 0x14b);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 =
       *(undefined *)(param_1 + 0x14c);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 + 1) =
       *(undefined *)(param_1 + 0x14d);
  *(undefined2 *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x118 + 2) =
       *(undefined2 *)(param_1 + 0x14e);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x11c =
       *(undefined *)(param_1 + 0x150);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x120 = *(dword *)(param_1 + 0x154);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x124 = *(dword *)(param_1 + 0x158);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x128 = *(dword *)(param_1 + 0x15c);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c =
       *(undefined *)(param_1 + 0x160);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c + 1) =
       *(undefined *)(param_1 + 0x161);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c + 2) =
       *(undefined *)(param_1 + 0x162);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x12c + 3) =
       *(undefined *)(param_1 + 0x163);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x130 =
       *(undefined *)(param_1 + 0x164);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x134 = *(dword *)(param_1 + 0x168);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x138 = *(dword *)(param_1 + 0x16c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x13c = *(dword *)(param_1 + 0x170);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x140 =
       *(undefined *)(param_1 + 0x174);
  *(undefined *)((int)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x140 + 1) =
       *(undefined *)(param_1 + 0x175);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x144 = *(dword *)(param_1 + 0x178);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x148 = *(dword *)(param_1 + 0x17c);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x14c = *(dword *)(param_1 + 0x180);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x150 = *(dword *)(param_1 + 0x184);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x154 = *(dword *)(param_1 + 0x188);
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.mbr_0x158 = *(dword *)(param_1 + 0x18c);
  return this;
}


#include "../include/VFXEFFECTTYPE_MODEL_Struct.h"
