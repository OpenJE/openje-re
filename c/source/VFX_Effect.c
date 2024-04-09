#include "../include/VFX_Effect.h"

VFX_Effect * __thiscall VFX_Effect::VFX_Effect(VFX_Effect *this)

{
  VFX_ParameterHolder::VFX_ParameterHolder(&this->VFX_ParameterHolder);
  (this->VFX_ParameterHolder).vftptr_0x0 =
       (VFX_ParameterHolder__vftable_67390c *)&VFX_Effect__vftable_6738ec_006738ec;
  *(undefined4 *)&(this->VFX_ParameterHolder).field_0x20 = 0;
  return this;
}



VFX_Effect * __thiscall VFX_Effect::~VFX_Effect(VFX_Effect *this)

{
  undefined4 *puVar1;
  VFX_ParameterHolder *pVVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634d08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_ParameterHolder).vftptr_0x0 =
       (VFX_ParameterHolder__vftable_67390c *)&VFX_Effect__vftable_6738ec_006738ec;
  puVar1 = *(undefined4 **)&(this->VFX_ParameterHolder).field_0x20;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)&(this->VFX_ParameterHolder).field_0x20 = 0;
  }
  local_4 = 0xffffffff;
  pVVar2 = VFX_ParameterHolder::~VFX_ParameterHolder(&this->VFX_ParameterHolder);
  ExceptionList = pvStack_c;
  return (VFX_Effect *)pVVar2;
}



void __thiscall VFX_Effect::meth_0x4f9940(VFX_Effect *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&(this->VFX_ParameterHolder).field_0x20;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)&(this->VFX_ParameterHolder).field_0x20 = 0;
  }
  return;
}



void __thiscall VFX_Effect::virt_meth_0x4f9960(VFX_Effect *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint unaff_retaddr;
  undefined4 local_c [2];
  uint local_4;
  
  piVar2 = param_2;
  iVar1 = param_1;
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  FUN_004b80e0(&param_2,4,1,param_1,param_2);
  if ((param_2 == (int *)0x20584656) &&
     (FUN_004b80e0(&param_1,4,1,iVar1,piVar2), param_1 == 0x302e3156)) {
    FUN_004b80e0(local_c,8,1,iVar1,piVar2);
    VFX_ParameterHolder::virt_meth_0x4faf20(&this->VFX_ParameterHolder,iVar1,piVar2);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



int * __thiscall VFX_Effect::virt_meth_0x4f9a70(VFX_Effect *this,byte param_1)

{
  ~VFX_Effect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall VFX_Effect::meth_0x4f9a90(VFX_Effect *this)

{
  VFXEFFECTTYPE_PARTICLESYSTEM_Struct *pVVar1;
  
  meth_0x4f9940(this);
  pVVar1 = FUN_00534890(&this->VFX_ParameterHolder);
  *(VFXEFFECTTYPE_PARTICLESYSTEM_Struct **)&(this->VFX_ParameterHolder).field_0x20 = pVVar1;
  return;
}



void * __thiscall VFX_Effect::meth_0x4f9ab0(VFX_Effect *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&(this->VFX_ParameterHolder).field_0x20;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)&(this->VFX_ParameterHolder).field_0x20 = 0;
  }
  meth_0x4fb000(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    meth_0x4f9a90(this);
  }
  return this;
}



VFX_Effect * __thiscall VFX_Effect::VFX_Effect(VFX_Effect *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_ParameterHolder::VFX_ParameterHolder(&this->VFX_ParameterHolder);
  local_4 = 0;
  *(undefined4 *)&(this->VFX_ParameterHolder).field_0x20 = 0;
  (this->VFX_ParameterHolder).vftptr_0x0 =
       (VFX_ParameterHolder__vftable_67390c *)&VFX_Effect__vftable_6738ec_006738ec;
  meth_0x4f9ab0(this,param_1);
  ExceptionList = local_c;
  return this;
}



void * __thiscall VFX_Effect::meth_0x4fb000(VFX_Effect *this,int param_1)

{
  undefined4 *puVar1;
  
  VFX_ParameterHolder::meth_0x4fa880(&this->VFX_ParameterHolder);
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      VFX_ParameterHolder::meth_0x4fadd0(&this->VFX_ParameterHolder,(undefined4 *)*puVar1,1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x18));
  }
  return this;
}


#include "../include/VFX_Effect.h"
