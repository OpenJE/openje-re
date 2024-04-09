#include "../include/VFX_MotionBlur.h"

VFX_MotionBlur * __thiscall VFX_MotionBlur::~VFX_MotionBlur(VFX_MotionBlur *this)

{
  VFX_MotionBlur *pVVar1;
  
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_MotionBlur__vftable_67380c_0067380c;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  pVVar1 = (VFX_MotionBlur *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  return pVVar1;
}



VFX_MotionBlur * __thiscall VFX_MotionBlur::VFX_MotionBlur(VFX_MotionBlur *this)

{
  undefined *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  this_00 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_MotionBlur__vftable_67380c_0067380c;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct((VFXEFFECTTYPE_BASE_Struct *)this_00);
  *(VFXEFFECTTYPE_MOTIONBLUR_Struct__vftable_673804 **)this_00 =
       &VFXEFFECTTYPE_MOTIONBLUR_Struct__vftable_673804_00673804;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x10c = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_MotionBlur::virt_meth_0x4f68f0(VFX_MotionBlur *this,byte param_1)

{
  ~VFX_MotionBlur(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall VFX_MotionBlur::meth_0x4f6910(VFX_MotionBlur *this,int param_1)

{
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc =
       *(dword *)(param_1 + 0x134);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 =
       *(dword *)(param_1 + 0x138);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104 =
       *(dword *)(param_1 + 0x13c);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x108 =
       *(byte *)(param_1 + 0x140);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x10c =
       *(undefined *)(param_1 + 0x144);
  return this;
}



void __thiscall VFX_MotionBlur::virt_meth_0x4f6970(VFX_MotionBlur *this,int param_1)

{
  VFX_Sound::meth_0x4e1d00((VFX_Sound *)this,param_1);
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60
            ((VFXEFFECTTYPE_SOUND_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,param_1);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc =
       *(dword *)(param_1 + 0x70);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 =
       *(dword *)(param_1 + 0x74);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104 =
       *(dword *)(param_1 + 0x78);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x108 =
       *(byte *)(param_1 + 0x7c);
  return;
}


#include "../include/VFX_MotionBlur.h"
