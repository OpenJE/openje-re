#include "../include/VFX_EffectInstance.h"

VFX_EffectInstance * __thiscall VFX_EffectInstance::VFX_EffectInstance(VFX_EffectInstance *this)

{
  this->vftptr_0x0 = &VFX_EffectInstance__vftable_672554_00672554;
  VFXEFFECTTYPE_BASE_Struct::VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  *(undefined *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x28 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20 = 0x3f800000;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x80 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x7c = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x78 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x74 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x6c = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x68 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x64 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x60 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x58 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x54 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x50 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x30 = 0;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x84 = 0x3f800000;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x70 = 0x3f800000;
  *(undefined4 *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x5c = 0x3f800000;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x2c = 0x3f800000;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x88 = 0;
  (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.field_0x89 = 1;
  return this;
}



void __thiscall VFX_EffectInstance::meth_0x4e18d0(VFX_EffectInstance *this)

{
  this->vftptr_0x0 = &VFX_EffectInstance__vftable_672554_00672554;
  VFXEFFECTTYPE_BASE_Struct::~VFXEFFECTTYPE_BASE_Struct(&this->VFXEFFECTTYPE_BASE_Struct);
  return;
}



undefined4 * __thiscall
VFX_EffectInstance::virt_meth_0x4e18e0(VFX_EffectInstance *this,byte param_1)

{
  meth_0x4e18d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall
VFX_EffectInstance::virt_meth_0x4e19b0
          (VFX_EffectInstance *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          void *param_4,undefined4 *param_5,undefined4 *param_6)

{
  cls_0x502110 *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  dword in_stack_ffffff0c;
  uint in_stack_ffffff10;
  VFX_Parameter *pVVar5;
  void *local_b4;
  dword local_b0;
  dword local_ac;
  _String_base local_a8 [4];
  undefined local_a4;
  uint uStack_a0;
  dword local_94;
  dword local_90;
  undefined4 local_8c [16];
  undefined local_4c [48];
  void *pvStack_1c;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633efb;
  pvStack_c = ExceptionList;
  local_b4 = (void *)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x4;
  local_b0 = (this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x8;
  local_ac = *(dword *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.field_0xc;
  iVar2 = *(int *)&(this->VFXEFFECTTYPE_BASE_Struct).field_0x30;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = 0;
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)local_a8,
             (_String_base *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20,0,0xffffffff);
  cVar1 = *(char *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x1c;
  this_00 = &(this->VFXEFFECTTYPE_BASE_Struct).cls_0x502110;
  local_4 = 0;
  iVar3 = cls_0x502110::Get_mbr_0x0(this_00);
  if ((iVar3 == 1) && (param_5 != (undefined4 *)0x0)) {
    FUN_004e0b90(param_5,local_8c,(float *)&local_b4,cVar1,
                 (float)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20);
  }
  else {
    iVar3 = cls_0x502110::Get_mbr_0x0(this_00);
    if ((iVar3 == 2) && (param_6 != (undefined4 *)0x0)) {
      FUN_004e0b90(param_6,local_8c,(float *)&local_b4,cVar1,
                   (float)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x20);
    }
    else {
      pvVar4 = (void *)FUN_004e0b20(this_00->mbr_0x0,param_2,param_3,(cls_0x48ddc0 *)param_4);
      pVVar5 = (VFX_Parameter *)(in_stack_ffffff10 & 0xffffff00);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffff0c,local_a8,0,0xffffffff);
      FUN_004e0f70(pvVar4,iVar2,in_stack_ffffff0c,pVVar5);
    }
  }
  thunk_FUN_004726fd(local_4c,*(float *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.
                                         VFX_Parameter.field_0x10 * 0.01745329,
                     *(float *)&(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.
                                field_0x14 * 0.01745329,
                     (float)(this->VFXEFFECTTYPE_BASE_Struct).cls_0x50db20.VFX_Parameter.mbr_0x18 *
                     0.01745329);
  thunk_FUN_00471943();
  (*this->vftptr_0x0[1].virt_meth_0x591690_12)(this);
  if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  ExceptionList = pvStack_1c;
  return;
}


#include "../include/VFX_EffectInstance.h"
