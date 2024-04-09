#include "../include/VFX_ParameterHolder.h"

uint __thiscall
VFX_ParameterHolder::virt_meth_0x4f9d40(VFX_ParameterHolder *this,int param_1,int *param_2)

{
  uint uVar1;
  VFX_ParameterInfo **ppVVar2;
  int *unaff_EBP;
  int unaff_ESI;
  VFX_ParameterInfo **ppVVar3;
  uint unaff_EDI;
  int local_4;
  
  if (this->mbr_0x14 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 2;
  }
  FUN_004b8130(&local_4,4,1,param_1,param_2);
  ppVVar3 = (VFX_ParameterInfo **)this->mbr_0x14;
  ppVVar2 = (VFX_ParameterInfo **)this->mbr_0x18;
  if (ppVVar3 != ppVVar2) {
    do {
      uVar1 = VFX_ParameterInfo::meth_0x501000
                        (*ppVVar3,param_1,param_2,unaff_EDI,unaff_ESI,unaff_EBP);
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      ppVVar2 = (VFX_ParameterInfo **)this->mbr_0x18;
      ppVVar3 = ppVVar3 + 1;
    } while (ppVVar3 != ppVVar2);
  }
  return CONCAT31((int3)((uint)ppVVar2 >> 8),1);
}



void __thiscall VFX_ParameterHolder::meth_0x4fa3c0(VFX_ParameterHolder *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint unaff_retaddr;
  undefined local_20 [4];
  void *local_1c;
  dword local_c;
  uint local_8;
  VFX_Parameter__vftable_673a20 *local_4;
  
  local_4 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if (param_1 != (undefined4 *)0x0) {
    local_8 = 0xf;
    local_c = 0;
    local_1c = (void *)((uint)local_1c & 0xffffff00);
    puVar2 = param_1;
    do {
      cVar1 = *(char *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_20,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
    cls_0x4f9b90::meth_0x4f9ee0((cls_0x4f9b90 *)&this->mbr_0x4,&param_1,(int)local_20);
    if (param_1 != (undefined4 *)this->mbr_0x8) {
      if (0xf < local_8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c);
      }
      FUN_00616e15((uint)local_4 ^ unaff_retaddr);
      return;
    }
    if (0xf < local_8) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
  }
  FUN_00616e15((uint)local_4 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterHolder::meth_0x4fa880(VFX_ParameterHolder *this)

{
  cls_0x4f9b90::meth_0x4fa300((cls_0x4f9b90 *)&this->mbr_0x4);
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  this->mbr_0xc = 0;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  return;
}



VFX_ParameterHolder * __thiscall
VFX_ParameterHolder::~VFX_ParameterHolder(VFX_ParameterHolder *this)

{
  VFX_ParameterHolder *local_4;
  
  this->vftptr_0x0 = &VFX_ParameterHolder__vftable_67390c_0067390c;
  local_4 = this;
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  cls_0x4f9b90::meth_0x4fa480
            ((cls_0x4f9b90 *)&this->mbr_0x4,(int **)&local_4,*(int ***)(int **)this->mbr_0x8,
             (int **)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



VFX_ParameterHolder * __thiscall VFX_ParameterHolder::VFX_ParameterHolder(VFX_ParameterHolder *this)

{
  dword dVar1;
  undefined local_d;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00634dbb;
  local_c = ExceptionList;
  local_d = (undefined)((uint)this >> 0x18);
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFX_ParameterHolder__vftable_67390c_0067390c;
  *(undefined *)&this->mbr_0x4 = local_d;
  dVar1 = FUN_004f9e20();
  this->mbr_0x8 = dVar1;
  *(undefined *)(dVar1 + 0x5d) = 1;
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  this->mbr_0xc = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  ExceptionList = local_c;
  return this;
}



int * __thiscall VFX_ParameterHolder::virt_meth_0x4fadb0(VFX_ParameterHolder *this,byte param_1)

{
  ~VFX_ParameterHolder(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
VFX_ParameterHolder::meth_0x4fadd0(VFX_ParameterHolder *this,undefined4 *param_1,int param_2)

{
  dword *this_00;
  bool bVar1;
  undefined4 **ppuVar2;
  VFX_Parameter *this_01;
  uint unaff_retaddr;
  undefined4 *puVar3;
  undefined4 *local_30;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634dd8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_2c,(_String_base *)(param_1 + 1),0,0xffffffff)
  ;
  this_00 = &this->mbr_0x4;
  local_4 = 0;
  param_1 = cls_0x4f9b90::meth_0x4f9db0((cls_0x4f9b90 *)this_00,(int)local_2c);
  if ((param_1 == (undefined4 *)this->mbr_0x8) ||
     (bVar1 = FUN_00433930((int)local_2c,(int)(param_1 + 3)), bVar1)) {
    local_30 = (undefined4 *)this->mbr_0x8;
    ppuVar2 = &local_30;
  }
  else {
    ppuVar2 = &param_1;
  }
  if (*ppuVar2 == (undefined4 *)this->mbr_0x8) {
    this_01 = (VFX_Parameter *)cls_0x4f9b90::meth_0x4faca0((cls_0x4f9b90 *)this_00,local_2c);
    VFX_Parameter::meth_0x4ffcc0(this_01,(int)puVar3);
    param_2 = cls_0x4f9b90::meth_0x4faca0((cls_0x4f9b90 *)this_00,local_2c);
    cls_0x4fa540::meth_0x4faab0((cls_0x4fa540 *)&this->mbr_0x10,&param_2);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else if ((char)param_2 == '\0') {
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else {
    VFX_Parameter::meth_0x4ffcc0((VFX_Parameter *)(*ppuVar2 + 10),(int)puVar3);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterHolder::virt_meth_0x4faf20(VFX_ParameterHolder *this,int param_1,int *param_2)

{
  char cVar1;
  int unaff_ESI;
  int iVar2;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  int local_48;
  VFX_Parameter local_44;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634df8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  meth_0x4fa880(this);
  FUN_004b80e0(&local_48,4,1,param_1,param_2);
  iVar2 = 0;
  if (0 < local_48) {
    do {
      VFX_Parameter::VFX_Parameter(&local_44);
      local_4 = 0;
      cVar1 = VFX_Parameter::meth_0x500580(&local_44,param_1,param_2,unaff_EDI,unaff_ESI);
      if (cVar1 == '\0') {
        local_4 = 0xffffffff;
        VFX_Parameter::~VFX_Parameter(&local_44);
        break;
      }
      meth_0x4fadd0(this,&local_44.vftptr_0x0,1);
      local_4 = 0xffffffff;
      VFX_Parameter::~VFX_Parameter(&local_44);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_48);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterHolder::meth_0x5011a0(VFX_ParameterHolder *this)

{
  bool bVar1;
  void *pvVar2;
  VFX_ParameterInfo *pVVar3;
  float10 fVar4;
  
  if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  pvVar2 = operator_new(0xc);
  this->mbr_0x30 = (dword)pvVar2;
  pVVar3 = (VFX_ParameterInfo *)meth_0x4fa3c0(this,(undefined4 *)&DAT_00673938);
  if (pVVar3 == (VFX_ParameterInfo *)0x0) {
    *(undefined *)this->mbr_0x30 = 0;
  }
  else {
    bVar1 = FUN_004ffb60(pVVar3);
    *(bool *)this->mbr_0x30 = bVar1;
  }
  pVVar3 = (VFX_ParameterInfo *)meth_0x4fa3c0(this,(undefined4 *)"MinStartTime");
  if (pVVar3 == (VFX_ParameterInfo *)0x0) {
    *(undefined4 *)(this->mbr_0x30 + 4) = 0;
  }
  else {
    fVar4 = (float10)VFX_ParameterInfo::meth_0x4fe280(pVVar3);
    *(float *)(this->mbr_0x30 + 4) = (float)fVar4;
  }
  pVVar3 = (VFX_ParameterInfo *)meth_0x4fa3c0(this,(undefined4 *)"MaxStartTime");
  if (pVVar3 != (VFX_ParameterInfo *)0x0) {
    fVar4 = (float10)VFX_ParameterInfo::meth_0x4fe280(pVVar3);
    *(float *)(this->mbr_0x30 + 8) = (float)fVar4;
    return;
  }
  *(undefined4 *)(this->mbr_0x30 + 8) = 0;
  return;
}


#include "../include/VFX_ParameterHolder.h"
