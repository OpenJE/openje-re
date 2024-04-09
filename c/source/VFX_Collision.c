#include "../include/VFX_Collision.h"

VFX_Collision * __thiscall VFX_Collision::~VFX_Collision(VFX_Collision *this)

{
  void *pvVar1;
  VFX_Collision *pVVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Collision__vftable_6731ec_006731ec;
  pvVar1 = (void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x11c;
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x12c;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x130;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  Gfx_LineSystem::~Gfx_LineSystem
            ((Gfx_LineSystem *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134);
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = 0xffffffff;
  pVVar2 = (VFX_Collision *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = local_c;
  return pVVar2;
}



VFX_Collision * __thiscall VFX_Collision::VFX_Collision(VFX_Collision *this)

{
  undefined *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063476e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  this_00 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Collision__vftable_6731ec_006731ec;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct((VFXEFFECTTYPE_BASE_Struct *)this_00);
  local_4._0_1_ = 1;
  *(VFXEFFECTTYPE_COLLISION_Struct__vftable_6731e4 **)this_00 =
       &VFXEFFECTTYPE_COLLISION_Struct__vftable_6731e4_006731e4;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104);
  local_4 = CONCAT31(local_4._1_3_,2);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x120 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x124 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x128 = 0;
  Gfx_LineSystem::Gfx_LineSystem
            ((Gfx_LineSystem *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x80 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x7c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x78 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x74 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x6c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x68 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x64 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x60 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x58 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x54 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x50 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x30 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x84 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x70 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x5c =
       0x3f800000;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c =
       0x3f800000;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x11c = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x12c = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x130 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_Collision::virt_meth_0x4f10a0(VFX_Collision *this,byte param_1)

{
  ~VFX_Collision(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall VFX_Collision::meth_0x4f1120(VFX_Collision *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_BASE_Struct::meth_0x4f10c0
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  pdVar2 = (dword *)(param_1 + 0x80);
  pdVar3 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return this;
}


#include "../include/VFX_Collision.h"
