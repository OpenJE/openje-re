#include "../include/VFX_ModelEffect.h"

VFX_ModelEffect * __thiscall VFX_ModelEffect::~VFX_ModelEffect(VFX_ModelEffect *this)

{
  VFX_ModelEffect *pVVar1;
  
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_ModelEffect__vftable_67306c_0067306c;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  pVVar1 = (VFX_ModelEffect *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  return pVVar1;
}



VFX_ModelEffect * __thiscall VFX_ModelEffect::VFX_ModelEffect(VFX_ModelEffect *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006343f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_ModelEffect__vftable_67306c_0067306c;
  VFXEFFECTTYPE_MODELEFFECT_Struct::VFXEFFECTTYPE_MODELEFFECT_Struct
            ((VFXEFFECTTYPE_MODELEFFECT_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150 = 0;
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_ModelEffect::virt_meth_0x4e8c60(VFX_ModelEffect *this,byte param_1)

{
  ~VFX_ModelEffect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall VFX_ModelEffect::meth_0x4e8e00(VFX_ModelEffect *this,int param_1)

{
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_MODELEFFECT_Struct::meth_0x4e8c80
            ((VFXEFFECTTYPE_MODELEFFECT_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c =
       *(undefined *)(param_1 + 0x184);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150 =
       *(dword *)(param_1 + 0x188);
  return this;
}


#include "../include/VFX_ModelEffect.h"
