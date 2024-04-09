#include "../include/VFX_Light.h"

VFX_Light * __thiscall VFX_Light::~VFX_Light(VFX_Light *this)

{
  undefined4 *puVar1;
  VFX_Light *pVVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006343a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Light__vftable_672ff4_00672ff4;
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x190;
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x194;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)();
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  Gfx_LineSystem::~Gfx_LineSystem
            ((Gfx_LineSystem *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x198);
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = 0xffffffff;
  pVVar2 = (VFX_Light *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = local_c;
  return pVVar2;
}



VFX_Light * __thiscall VFX_Light::VFX_Light(VFX_Light *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006343c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Light__vftable_672ff4_00672ff4;
  VFXEFFECTTYPE_LIGHT_Struct::VFXEFFECTTYPE_LIGHT_Struct
            ((VFXEFFECTTYPE_LIGHT_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = CONCAT31(local_4._1_3_,1);
  Gfx_LineSystem::Gfx_LineSystem
            ((Gfx_LineSystem *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x198);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x190 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x194 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_Light::virt_meth_0x4e8140(VFX_Light *this,byte param_1)

{
  ~VFX_Light(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall VFX_Light::meth_0x4e83b0(VFX_Light *this,int param_1)

{
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_LIGHT_Struct::meth_0x4e8160
            ((VFXEFFECTTYPE_LIGHT_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c =
       *(dword *)(param_1 + 0x1c4);
  return this;
}


#include "../include/VFX_Light.h"
