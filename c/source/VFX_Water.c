#include "../include/VFX_Water.h"

void __thiscall VFX_Water::meth_0x4ed0e0(VFX_Water *this,int param_1,int param_2)

{
  VFX_EffectInstance__vftable_672554 *pVVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  void *unaff_retaddr;
  
  VFX_Sound::meth_0x4e1d50((VFX_Sound *)this,param_1,param_2);
  if (param_1 != 0) {
    pVVar1 = (this->VFX_EffectInstance).vftptr_0x0;
    *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 = param_2
    ;
    (*pVVar1[2].virt_meth_0x4e19b0_4)
              (&this->VFX_EffectInstance,param_1,unaff_EDI,unaff_ESI,unaff_retaddr,
               (undefined4 *)param_1,(undefined4 *)param_2);
  }
  return;
}



void __thiscall VFX_Water::virt_meth_0x4edce0(VFX_Water *this)

{
  void *_Memory;
  cls_0x51cc60 *this_00;
  
  _Memory = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234
  ;
  *(undefined *)
   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x28 = 0;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this_00 = *(cls_0x51cc60 **)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  if (this_00 != (cls_0x51cc60 *)0x0) {
    cls_0x51cc60::meth_0x51cc60(this_00);
    return;
  }
  return;
}



VFX_Water * __thiscall VFX_Water::~VFX_Water(VFX_Water *this)

{
  undefined4 *puVar1;
  void *_Memory;
  VFX_Water *pVVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006346e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Water__vftable_673164_00673164;
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  _Memory = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234
  ;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  VFXEFFECTTYPE_WATER_Struct::meth_0x4ee220
            ((VFXEFFECTTYPE_WATER_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94);
  local_4 = 0xffffffff;
  pVVar2 = (VFX_Water *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = local_c;
  return pVVar2;
}



VFX_Water * __thiscall VFX_Water::VFX_Water(VFX_Water *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006346f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Water__vftable_673164_00673164;
  VFXEFFECTTYPE_WATER_Struct::VFXEFFECTTYPE_WATER_Struct
            ((VFXEFFECTTYPE_WATER_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 =
       0x3f800000;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall VFX_Water::virt_meth_0x4ee400(VFX_Water *this,byte param_1)

{
  ~VFX_Water(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void * __thiscall VFX_Water::meth_0x4ee6f0(VFX_Water *this,int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  puVar1 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  puVar2 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_WATER_Struct::meth_0x4ee420
            ((VFXEFFECTTYPE_WATER_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94,
             param_1 + 0xcc);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)puVar2 = 0;
  FUN_004edd20((Gfx_Water **)puVar1,(Gfx_WaterTile **)puVar2,
               (int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 =
       *(undefined4 *)(param_1 + 0x270);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc4) + 0x30);
  if (iVar4 != 0) {
    FUN_0051d9c0(*(void **)puVar1,iVar4,0);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 200) + 0xf4);
  if (iVar4 != 0) {
    Gfx_WaterTile::meth_0x511430(*(Gfx_WaterTile **)puVar2,iVar4,0);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 200) + 0x128);
  if (iVar4 != 0) {
    Gfx_WaterTile::meth_0x5114a0(*(Gfx_WaterTile **)puVar2,iVar4,0);
  }
  return this;
}



void __thiscall VFX_Water::virt_meth_0x4ee7c0(VFX_Water *this,int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  VFX_Sound::meth_0x4e1d00((VFX_Sound *)this,param_1);
  VFXEFFECTTYPE_WATER_Struct::meth_0x4ee420
            ((VFXEFFECTTYPE_WATER_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94,param_1);
  puVar3 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  puVar1 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
    *(undefined4 *)puVar1 = 0;
  }
  puVar3 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  puVar2 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
    *(undefined4 *)puVar2 = 0;
  }
  FUN_004edd20((Gfx_Water **)puVar1,(Gfx_WaterTile **)puVar2,param_1);
  if ((*(int *)puVar1 != 0) && (*(int *)puVar2 != 0)) {
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar4 = FUN_004b8180();
      Gfx_WaterTile::meth_0x511430(*(Gfx_WaterTile **)puVar2,uVar4,1);
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      iVar5 = FUN_004b8180();
      Gfx_WaterTile::meth_0x5114a0(*(Gfx_WaterTile **)puVar2,iVar5,1);
    }
  }
  return;
}


#include "../include/VFX_Water.h"
