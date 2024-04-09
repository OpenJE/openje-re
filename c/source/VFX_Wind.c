#include "../include/VFX_Wind.h"

VFX_Wind * __thiscall VFX_Wind::~VFX_Wind(VFX_Wind *this)

{
  int **ppiVar1;
  int *piVar2;
  VFX_Wind *local_4;
  
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Wind__vftable_672e74_00672e74;
  ppiVar1 = (int **)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60
            ((Interface *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150,
             (int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154);
}



VFX_Wind * __thiscall VFX_Wind::VFX_Wind(VFX_Wind *this)

{
  undefined *this_00;
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063410e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  this_00 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Wind__vftable_672e74_00672e74;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct((VFXEFFECTTYPE_BASE_Struct *)this_00);
  local_4._0_1_ = 1;
  *(VFXEFFECTTYPE_WIND_Struct__vftable_672e6c **)this_00 =
       &VFXEFFECTTYPE_WIND_Struct__vftable_672e6c_00672e6c;
  cls_0x4dff90::cls_0x4dff90
            ((cls_0x4dff90 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100);
  local_4 = CONCAT31(local_4._1_3_,2);
  dVar1 = FUN_0049db90();
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154 = dVar1;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158 = 0;
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x15c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x160 = 0;
  ExceptionList = local_c;
  return this;
}



int * __thiscall VFX_Wind::virt_meth_0x4e3870(VFX_Wind *this,byte param_1)

{
  ~VFX_Wind(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void * __thiscall VFX_Wind::meth_0x4e3e10(VFX_Wind *this,int param_1)

{
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_BASE_Struct::meth_0x4e3d10
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c =
       *(undefined *)(param_1 + 0x184);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x15c =
       *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x160 =
       *(undefined4 *)(param_1 + 0x198);
  return this;
}


#include "../include/VFX_Wind.h"
