#include "../include/VFX_ParameterInfo.h"

VFX_ParameterInfo * __thiscall VFX_ParameterInfo::VFX_ParameterInfo(VFX_ParameterInfo *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634e87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter);
  (this->VFX_Parameter).vftptr_0x0 =
       (VFX_Parameter__vftable_673a20 *)&VFX_ParameterInfo__vftable_673944_00673944;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  this->mbr_0x68 = 0xf;
  this->mbr_0x64 = 0;
  *(undefined *)&this->mbr_0x54 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter);
  local_4._0_1_ = 3;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter);
  local_4 = CONCAT31(local_4._1_3_,4);
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter);
  this->mbr_0x110 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xa0 = 0;
  ExceptionList = local_c;
  return this;
}



VFX_ParameterInfo * __thiscall VFX_ParameterInfo::~VFX_ParameterInfo(VFX_ParameterInfo *this)

{
  VFX_ParameterInfo *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634e87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_Parameter).vftptr_0x0 =
       (VFX_Parameter__vftable_673a20 *)&VFX_ParameterInfo__vftable_673944_00673944;
  local_4 = 4;
  VFX_Parameter::~VFX_Parameter(&this->VFX_Parameter);
  local_4._0_1_ = 3;
  VFX_Parameter::~VFX_Parameter(&this->VFX_Parameter);
  local_4 = CONCAT31(local_4._1_3_,2);
  VFX_Parameter::~VFX_Parameter(&this->VFX_Parameter);
  if (0xf < this->mbr_0x68) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x54);
  }
  this->mbr_0x68 = 0xf;
  this->mbr_0x64 = 0;
  *(undefined *)&this->mbr_0x54 = 0;
  if (0xf < this->mbr_0x4c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  local_4 = 0xffffffff;
  pVVar1 = (VFX_ParameterInfo *)VFX_Parameter::~VFX_Parameter(&this->VFX_Parameter);
  ExceptionList = local_c;
  return pVVar1;
}



undefined4 * __thiscall VFX_ParameterInfo::virt_meth_0x4fb430(VFX_ParameterInfo *this,byte param_1)

{
  ~VFX_ParameterInfo(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



VFX_ParameterInfo * __thiscall
VFX_ParameterInfo::VFX_ParameterInfo(VFX_ParameterInfo *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634e87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,param_1);
  (this->VFX_Parameter).vftptr_0x0 =
       (VFX_Parameter__vftable_673a20 *)&VFX_ParameterInfo__vftable_673944_00673944;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x34,(_String_base *)(param_1 + 0x34),0,0xffffffff);
  this->mbr_0x68 = 0xf;
  this->mbr_0x64 = 0;
  local_4._0_1_ = 1;
  *(undefined *)&this->mbr_0x54 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x50,(_String_base *)(param_1 + 0x50),0,0xffffffff);
  local_4._0_1_ = 2;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,param_1 + 0x6c);
  this->mbr_0xa0 = *(byte *)(param_1 + 0xa0);
  local_4._0_1_ = 3;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,param_1 + 0xa4);
  local_4 = CONCAT31(local_4._1_3_,4);
  this->mbr_0xd8 = *(byte *)(param_1 + 0xd8);
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,param_1 + 0xdc);
  this->mbr_0x110 = *(byte *)(param_1 + 0x110);
  ExceptionList = local_c;
  return this;
}



void * __thiscall
VFX_ParameterInfo::meth_0x4fdfb0(VFX_ParameterInfo *this,undefined param_1,undefined param_2)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,(undefined4 *)&param_1,4);
  (this->VFX_Parameter).mbr_0x20 = 0;
  return this;
}



void * __thiscall
VFX_ParameterInfo::meth_0x4fdfd0(VFX_ParameterInfo *this,undefined param_1,undefined param_2)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,(undefined4 *)&param_1,1);
  (this->VFX_Parameter).mbr_0x20 = 1;
  return this;
}



void * __thiscall
VFX_ParameterInfo::meth_0x4fdff0(VFX_ParameterInfo *this,undefined param_1,undefined param_2)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,(undefined4 *)&param_1,4);
  (this->VFX_Parameter).mbr_0x20 = 2;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe010(VFX_ParameterInfo *this,undefined param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,(undefined4 *)&param_1,1);
  (this->VFX_Parameter).mbr_0x20 = 3;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe040(VFX_ParameterInfo *this,undefined4 *param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,0xc);
  (this->VFX_Parameter).mbr_0x20 = 6;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe060(VFX_ParameterInfo *this,undefined4 *param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,8);
  (this->VFX_Parameter).mbr_0x20 = 7;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe080(VFX_ParameterInfo *this,undefined4 *param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,0xc);
  (this->VFX_Parameter).mbr_0x20 = 8;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe0a0(VFX_ParameterInfo *this,undefined4 *param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,3);
  (this->VFX_Parameter).mbr_0x20 = 9;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe0c0(VFX_ParameterInfo *this,void *param_1)

{
  void *this_00;
  undefined4 *_Memory;
  uint local_4;
  
  this_00 = param_1;
  local_4 = 0;
  cls_0x4d8d70::meth_0x52e440((cls_0x4d8d70 *)param_1,0,(int *)&local_4);
  if (0 < (int)local_4) {
    _Memory = (undefined4 *)operator_new(local_4);
    if (_Memory != (undefined4 *)0x0) {
      param_1 = (void *)0x0;
      cls_0x4d8d70::meth_0x52e440((cls_0x4d8d70 *)this_00,(int)_Memory,(int *)&param_1);
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,_Memory,local_4);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  (this->VFX_Parameter).mbr_0x20 = 10;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe140(VFX_ParameterInfo *this,undefined4 *param_1)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,0x10);
  (this->VFX_Parameter).mbr_0x20 = 0xc;
  return this;
}



void * __thiscall
VFX_ParameterInfo::meth_0x4fe160(VFX_ParameterInfo *this,undefined param_1,undefined param_2)

{
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,(undefined4 *)&param_1,4);
  (this->VFX_Parameter).mbr_0x20 = 0xe;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe180(VFX_ParameterInfo *this,int param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,puVar1,*(int *)(param_1 + 0x14) + 1);
  (this->VFX_Parameter).mbr_0x20 = 5;
  return this;
}



void * __thiscall VFX_ParameterInfo::meth_0x4fe1b0(VFX_ParameterInfo *this,int param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,puVar1,*(int *)(param_1 + 0x14) + 1);
  (this->VFX_Parameter).mbr_0x20 = 0xd;
  return this;
}



/* WARNING: Removing unreachable block (ram,0x004fe342) */

void __thiscall VFX_ParameterInfo::meth_0x4fe280(VFX_ParameterInfo *this)

{
  uint unaff_retaddr;
  cls_0x4d8d70 local_3c;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 4:
  case 0xe:
    break;
  case 1:
    FUN_00616e15(DAT_007062c0);
    return;
  case 2:
  case 8:
    FUN_00616e15(DAT_007062c0);
    return;
  case 3:
    FUN_00616e15(DAT_007062c0);
    return;
  case 5:
  case 0xd:
    _atof((char *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 6:
    FUN_00616e15(DAT_007062c0);
    return;
  case 7:
  case 0xc:
    FUN_00616e15(DAT_007062c0);
    return;
  case 9:
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_3c,(this->VFX_Parameter).mbr_0x30);
    if (local_3c.mbr_0x34 < 0x10) {
      local_3c.mbr_0x20 = (dword)&local_3c.mbr_0x20;
    }
    _atof((char *)local_3c.mbr_0x20);
    cls_0x4d8d70::meth_0x56ee40(&local_3c);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 0xb:
    cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  }
  FUN_00616e15(DAT_007062c0);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x4fe450
          (VFX_ParameterInfo *this,float *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  cls_0x523b20 *pcVar2;
  int iVar3;
  float *pfVar4;
  uint unaff_retaddr;
  undefined4 *puVar5;
  undefined local_84 [36];
  float local_60 [3];
  float local_54 [3];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006351e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)local_84);
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
    local_84._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 1:
    local_84._0_4_ = (undefined4)(uint)*(byte *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 2:
    local_84._0_4_ = *(float *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 3:
    local_84._0_4_ = (undefined4)(uint)(*(char *)(this->VFX_Parameter).mbr_0x30 != '\0');
    break;
  case 4:
  case 0xe:
    local_84._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 5:
    puVar5 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    pfVar4 = (float *)(local_84 + 0xc);
    goto LAB_004fe5e3;
  case 6:
  case 8:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_84._0_4_ = *pfVar4;
    local_84._4_4_ = pfVar4[1];
    local_84._8_4_ = pfVar4[2];
    break;
  case 9:
    pbVar1 = (byte *)(this->VFX_Parameter).mbr_0x30;
    pcVar2 = cls_0x523b20::cls_0x523b20
                       ((cls_0x523b20 *)(local_84 + 0x18),(float)(uint)*pbVar1,
                        (float)(uint)pbVar1[1],(float)(uint)pbVar1[2]);
    local_84._0_4_ = (pcVar2->cls_0x52f780).mbr_0x0;
    local_84._4_4_ = (pcVar2->cls_0x52f780).mbr_0x4;
    local_84._8_4_ = pcVar2->mbr_0x8;
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_48,(this->VFX_Parameter).mbr_0x30);
    local_4 = 0;
    if (local_48.mbr_0x34 < 0x10) {
      local_48.mbr_0x20 = (dword)&local_48.mbr_0x20;
    }
    pfVar4 = (float *)FUN_00523d00(local_60,(undefined4 *)local_48.mbr_0x20);
    local_84._0_4_ = *pfVar4;
    local_84._4_4_ = pfVar4[1];
    local_84._8_4_ = pfVar4[2];
    cls_0x4d8d70::meth_0x56ee40(&local_48);
    break;
  case 0xb:
    iVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_84._0_4_ = (undefined4)iVar3;
    break;
  case 0xc:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_84._0_4_ = *pfVar4;
    local_84._4_4_ = pfVar4[1];
    local_84._8_4_ = pfVar4[2];
    break;
  case 0xd:
    puVar5 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    pfVar4 = local_54;
LAB_004fe5e3:
    pfVar4 = (float *)FUN_00523d00(pfVar4,puVar5);
    local_84._0_4_ = *pfVar4;
    local_84._4_4_ = pfVar4[1];
    local_84._8_4_ = pfVar4[2];
  }
  *param_1 = (float)local_84._0_4_;
  param_1[1] = (float)local_84._4_4_;
  param_1[2] = (float)local_84._8_4_;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x4fe690
          (VFX_ParameterInfo *this,float *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  cls_0x52f780 *pcVar2;
  float *pfVar3;
  uint unaff_retaddr;
  float local_70 [2];
  undefined local_68 [16];
  float local_58 [2];
  float local_50 [2];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006351e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_68);
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    local_68._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 1:
    local_70[0] = (float)(uint)*(byte *)(this->VFX_Parameter).mbr_0x30;
    local_68._0_4_ = (undefined4)(int)local_70[0];
    break;
  case 2:
    local_68._0_4_ = *(float *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 3:
    local_70[0] = (float)(uint)(*(char *)(this->VFX_Parameter).mbr_0x30 != '\0');
    local_68._0_4_ = (undefined4)(int)local_70[0];
    break;
  case 4:
    local_68._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 5:
    pfVar3 = local_70;
    goto LAB_004fe7e7;
  case 6:
  case 7:
    pfVar3 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_68._0_4_ = *pfVar3;
    local_68._4_4_ = pfVar3[1];
    break;
  case 8:
  case 0xc:
    pfVar3 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_68._0_4_ = *pfVar3;
    local_68._4_4_ = pfVar3[1];
    break;
  case 9:
    pbVar1 = (byte *)(this->VFX_Parameter).mbr_0x30;
    local_70[0] = (float)(uint)*pbVar1;
    pcVar2 = cls_0x52f780::cls_0x52f780
                       ((cls_0x52f780 *)(local_68 + 8),(float)(int)local_70[0],
                        (float)(uint)pbVar1[1]);
    local_68._0_4_ = pcVar2->mbr_0x0;
    local_68._4_4_ = pcVar2->mbr_0x4;
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_48,(this->VFX_Parameter).mbr_0x30);
    local_4 = 0;
    if (local_48.mbr_0x34 < 0x10) {
      local_48.mbr_0x20 = (dword)&local_48.mbr_0x20;
    }
    pfVar3 = (float *)FUN_0052f8f0(local_58,(undefined4 *)local_48.mbr_0x20);
    local_68._0_4_ = *pfVar3;
    local_68._4_4_ = pfVar3[1];
    cls_0x4d8d70::meth_0x56ee40(&local_48);
    break;
  case 0xb:
    local_70[0] = (float)cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_68._0_4_ = (undefined4)(int)local_70[0];
    break;
  case 0xd:
    pfVar3 = local_50;
LAB_004fe7e7:
    pfVar3 = (float *)FUN_0052f8f0(pfVar3,(undefined4 *)(this->VFX_Parameter).mbr_0x30);
    local_68._0_4_ = *pfVar3;
    local_68._4_4_ = pfVar3[1];
  }
  *param_1 = (float)local_68._0_4_;
  param_1[1] = (float)local_68._4_4_;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x4fe880(VFX_ParameterInfo *this,float *param_1)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  cls_0x52c270 *pcVar4;
  float *pfVar5;
  uint unaff_retaddr;
  float fVar6;
  float fVar7;
  undefined local_90 [44];
  undefined4 *******local_64 [5];
  uint local_50;
  cls_0x52c270 local_4c;
  cls_0x52c270 local_40;
  float local_34 [3];
  float local_28 [3];
  float local_1c [3];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006351ab;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_90);
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    local_90._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 1:
    local_90._0_4_ = (undefined4)(uint)*(byte *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 2:
    local_90._0_4_ = *(float *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 3:
    local_90._0_4_ = (undefined4)(uint)(*(char *)(this->VFX_Parameter).mbr_0x30 != '\0');
    break;
  case 4:
    local_90._0_4_ = (undefined4)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 5:
    pcVar4 = (cls_0x52c270 *)FUN_0052c290(local_1c,(undefined4 *)(this->VFX_Parameter).mbr_0x30);
    goto LAB_004fea4b;
  case 6:
    pfVar5 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_90._0_4_ = *pfVar5;
    local_90._4_4_ = pfVar5[1];
    local_90._8_4_ = pfVar5[2];
    break;
  case 7:
    pfVar5 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_90._0_4_ = *pfVar5;
    local_90._4_4_ = pfVar5[1];
    break;
  case 8:
    pfVar5 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_90._0_4_ = *pfVar5;
    local_90._4_4_ = pfVar5[1];
    local_90._8_4_ = pfVar5[2];
    break;
  case 9:
    pbVar1 = (byte *)(this->VFX_Parameter).mbr_0x30;
    fVar7 = (float)(uint)pbVar1[2];
    pcVar4 = &local_4c;
    fVar6 = (float)(uint)pbVar1[1];
    fVar2 = (float)(uint)*pbVar1;
    goto LAB_004fea43;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)(local_90 + 0xc),(this->VFX_Parameter).mbr_0x30);
    local_4 = 0;
    if (local_50 < 0x10) {
      local_64[0] = local_64;
    }
    pfVar5 = (float *)FUN_0052c290(local_28,local_64[0]);
    local_90._0_4_ = *pfVar5;
    local_90._4_4_ = pfVar5[1];
    local_90._8_4_ = pfVar5[2];
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)(local_90 + 0xc));
    break;
  case 0xb:
    iVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_90._0_4_ = (undefined4)iVar3;
    break;
  case 0xc:
    pfVar5 = (float *)(this->VFX_Parameter).mbr_0x30;
    fVar7 = pfVar5[2] * 360.0;
    pcVar4 = &local_40;
    fVar6 = pfVar5[1] * 360.0;
    fVar2 = *pfVar5 * 360.0;
LAB_004fea43:
    pcVar4 = cls_0x52c270::cls_0x52c270(pcVar4,fVar2,fVar6,fVar7);
LAB_004fea4b:
    local_90._0_4_ = pcVar4->mbr_0x0;
    local_90._4_4_ = pcVar4->mbr_0x4;
    local_90._8_4_ = pcVar4->mbr_0x8;
    break;
  case 0xd:
    pfVar5 = (float *)FUN_0052c290(local_34,(undefined4 *)(this->VFX_Parameter).mbr_0x30);
    local_90._0_4_ = *pfVar5;
    local_90._4_4_ = pfVar5[1];
    local_90._8_4_ = pfVar5[2];
  }
  *param_1 = (float)local_90._0_4_;
  param_1[1] = (float)local_90._4_4_;
  param_1[2] = (float)local_90._8_4_;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x4feb20
          (VFX_ParameterInfo *this,undefined2 *param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint unaff_retaddr;
  undefined4 *puVar6;
  undefined2 local_55;
  undefined2 local_52;
  undefined2 local_4f;
  undefined2 local_4c;
  undefined local_4a;
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006351e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&local_4c);
  uVar1 = (this->VFX_Parameter).mbr_0x20;
  uVar2 = local_4a;
  if (0xe < uVar1) goto LAB_004fecee;
  switch(uVar1) {
  default:
    puVar4 = (undefined2 *)(this->VFX_Parameter).mbr_0x30;
    local_4c = *puVar4;
    uVar2 = *(undefined *)(puVar4 + 1);
    break;
  case 1:
  case 0xe:
    local_4c = CONCAT11(local_4c._1_1_,*(undefined *)(this->VFX_Parameter).mbr_0x30);
    break;
  case 2:
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11(local_4c._1_1_,(char)uVar5);
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11((char)(uVar5 >> 8),(undefined)local_4c);
    uVar5 = FUN_00616e24();
    uVar2 = (char)(uVar5 >> 0x10);
    break;
  case 3:
    local_4c = CONCAT11(local_4c._1_1_,*(undefined *)(this->VFX_Parameter).mbr_0x30);
    break;
  case 5:
    puVar6 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    puVar4 = &local_55;
    goto LAB_004feccc;
  case 6:
  case 8:
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11(local_4c._1_1_,(char)uVar5);
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11((char)uVar5,(undefined)local_4c);
    uVar5 = FUN_00616e24();
    uVar2 = (char)uVar5;
    break;
  case 7:
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11(local_4c._1_1_,(char)uVar5);
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11((char)uVar5,(undefined)local_4c);
    uVar2 = local_4a;
    break;
  case 9:
    puVar4 = (undefined2 *)(this->VFX_Parameter).mbr_0x30;
    local_4c = *puVar4;
    uVar2 = *(undefined *)(puVar4 + 1);
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_48,(this->VFX_Parameter).mbr_0x30);
    local_4 = 0;
    if (local_48.mbr_0x34 < 0x10) {
      local_48.mbr_0x20 = (dword)&local_48.mbr_0x20;
    }
    puVar4 = (undefined2 *)FUN_0052e920(&local_52,(undefined4 *)local_48.mbr_0x20);
    local_4c = *puVar4;
    local_4a = *(undefined *)(puVar4 + 1);
    cls_0x4d8d70::meth_0x56ee40(&local_48);
    uVar2 = local_4a;
    break;
  case 0xb:
    uVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_4c = CONCAT11(local_4c._1_1_,(char)uVar3);
    uVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_4c = CONCAT11((char)((uint)uVar3 >> 8),(undefined)local_4c);
    uVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    uVar2 = (char)((uint)uVar3 >> 0x10);
    break;
  case 0xc:
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11(local_4c._1_1_,(char)uVar5);
    uVar5 = FUN_00616e24();
    local_4c = CONCAT11((char)uVar5,(undefined)local_4c);
    uVar5 = FUN_00616e24();
    uVar2 = (char)uVar5;
    break;
  case 0xd:
    puVar6 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    puVar4 = &local_4f;
LAB_004feccc:
    puVar4 = (undefined2 *)FUN_0052e920(puVar4,puVar6);
    local_4c = *puVar4;
    uVar2 = *(undefined *)(puVar4 + 1);
  }
LAB_004fecee:
  *param_1 = local_4c;
  *(undefined *)(param_1 + 1) = uVar2;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x4feef0(VFX_ParameterInfo *this,float *param_1,uint param_2,float *param_3)

{
  byte *pbVar1;
  cls_0x52eaa0 *pcVar2;
  int iVar3;
  float *pfVar4;
  uint unaff_retaddr;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  cls_0x4d8d70 local_88;
  CRect local_50 [16];
  float local_40 [4];
  float local_30 [4];
  float local_20 [4];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006351cb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_98);
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    local_98 = (float)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 1:
    local_98 = (float)(uint)*(byte *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 2:
    local_98 = *(float *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 3:
    local_98 = (float)(uint)(*(char *)(this->VFX_Parameter).mbr_0x30 != '\0');
    break;
  case 4:
    local_98 = (float)*(int *)(this->VFX_Parameter).mbr_0x30;
    break;
  case 5:
    pfVar4 = local_20;
    goto LAB_004ff0ee;
  case 6:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_98 = *pfVar4;
    local_94 = pfVar4[1];
    local_90 = pfVar4[2];
    break;
  case 7:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_98 = *pfVar4;
    local_94 = pfVar4[1];
    break;
  case 8:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_98 = *pfVar4 * 0.002777778;
    local_94 = pfVar4[1] * 0.002777778;
    local_90 = pfVar4[2] * 0.002777778;
    break;
  case 9:
    pbVar1 = (byte *)(this->VFX_Parameter).mbr_0x30;
    pcVar2 = CRect::CRect(local_50,(int)((float)(uint)*pbVar1 * 0.003921569),
                          (int)((float)(uint)pbVar1[1] * 0.003921569),
                          (int)((float)(uint)pbVar1[2] * 0.003921569),0);
    local_98 = (float)pcVar2->mbr_0x0;
    local_94 = (float)pcVar2->mbr_0x4;
    local_90 = (float)pcVar2->mbr_0x8;
    local_8c = (float)pcVar2->mbr_0xc;
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_88,(this->VFX_Parameter).mbr_0x30);
    local_4 = 0;
    if (local_88.mbr_0x34 < 0x10) {
      local_88.mbr_0x20 = (dword)&local_88.mbr_0x20;
    }
    pfVar4 = (float *)FUN_0052ece0(local_30,(undefined4 *)local_88.mbr_0x20);
    local_98 = *pfVar4;
    local_94 = pfVar4[1];
    local_90 = pfVar4[2];
    local_8c = pfVar4[3];
    cls_0x4d8d70::meth_0x56ee40(&local_88);
    break;
  case 0xb:
    iVar3 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_98 = (float)iVar3;
    break;
  case 0xc:
    pfVar4 = (float *)(this->VFX_Parameter).mbr_0x30;
    local_98 = *pfVar4;
    local_94 = pfVar4[1];
    local_90 = pfVar4[2];
    local_8c = pfVar4[3];
    break;
  case 0xd:
    pfVar4 = local_40;
LAB_004ff0ee:
    pfVar4 = (float *)FUN_0052ece0(pfVar4,(undefined4 *)(this->VFX_Parameter).mbr_0x30);
    local_98 = *pfVar4;
    local_94 = pfVar4[1];
    local_90 = pfVar4[2];
    local_8c = pfVar4[3];
  }
  *param_1 = local_98;
  param_1[1] = local_94;
  param_1[2] = local_90;
  param_1[3] = local_8c;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x4ff1b0
          (VFX_ParameterInfo *this,undefined4 *param_1,dword param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  double dVar5;
  uint unaff_retaddr;
  float local_58 [4];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006351e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  (this->VFX_Parameter).mbr_0x20 = param_2;
  switch(param_2) {
  case 0:
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    else {
      param_1 = (undefined4 *)_atol((char *)param_1);
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    break;
  case 1:
    if (param_1 != (undefined4 *)0x0) {
      lVar3 = _atol((char *)param_1);
      param_1 = (undefined4 *)CONCAT31(param_1._1_3_,(char)lVar3);
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,1);
      break;
    }
    goto LAB_004ff25b;
  case 2:
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0x0;
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    else {
      dVar5 = _atof((char *)param_1);
      param_1 = (undefined4 *)(float)dVar5;
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    break;
  case 3:
    if (param_1 != (undefined4 *)0x0) {
      iVar2 = VFX_Parameter::meth_0x619e6e(&this->VFX_Parameter,(byte *)param_1);
      if (iVar2 == 0) {
        param_1 = (undefined4 *)CONCAT31(param_1._1_3_,1);
        VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,1);
      }
      else {
        lVar3 = _atol((char *)puVar4);
        param_1 = (undefined4 *)CONCAT31(param_1._1_3_,lVar3 != 0);
        VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,1);
      }
      break;
    }
LAB_004ff25b:
    param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,1);
    break;
  case 4:
    param_1 = (undefined4 *)FUN_0052fab0(param_3,(byte *)param_1);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    break;
  case 5:
    if (param_1 != (undefined4 *)0x0) {
      do {
        cVar1 = *(char *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (cVar1 != '\0');
      VFX_Parameter::meth_0x4fdf50
                (&this->VFX_Parameter,param_1,(uint)((int)puVar4 + (1 - ((int)param_1 + 1))));
      break;
    }
    goto LAB_004ff4cc;
  case 6:
    FUN_00523d00(local_58,param_1);
    goto LAB_004ff3a4;
  case 7:
    FUN_0052f8f0(local_58,param_1);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,local_58,8);
    break;
  case 8:
    FUN_0052c290(local_58,param_1);
LAB_004ff3a4:
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,local_58,0xc);
    break;
  case 9:
    FUN_0052e920((undefined2 *)&param_1,param_1);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,3);
    break;
  case 10:
    FUN_0052e5b0(&local_48,param_1);
    uStack_4 = 0;
    param_1 = (undefined4 *)0x0;
    cls_0x4d8d70::meth_0x52e440(&local_48,0,(int *)&param_1);
    if ((0 < (int)param_1) &&
       (puVar4 = (undefined4 *)operator_new((uint)param_1), puVar4 != (undefined4 *)0x0)) {
      param_2 = 0;
      cls_0x4d8d70::meth_0x52e440(&local_48,(int)puVar4,(int *)&param_2);
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,puVar4,(uint)param_1);
                    /* WARNING: Subroutine does not return */
      _free(puVar4);
    }
    cls_0x4d8d70::meth_0x56ee40(&local_48);
    break;
  case 0xb:
    FUN_00502170((dword *)&param_1,param_1);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    break;
  case 0xc:
    FUN_0052ece0(local_58,param_1);
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,local_58,0x10);
    break;
  case 0xd:
    if (param_1 != (undefined4 *)0x0) {
      do {
        cVar1 = *(char *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (cVar1 != '\0');
      VFX_Parameter::meth_0x4fdf50
                (&this->VFX_Parameter,param_1,(uint)((int)puVar4 + (1 - ((int)param_1 + 1))));
      break;
    }
LAB_004ff4cc:
    VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,param_1,0);
    break;
  case 0xe:
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)0xffffffff;
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    else {
      param_1 = (undefined4 *)_atol((char *)param_1);
      VFX_Parameter::meth_0x4fdf50(&this->VFX_Parameter,&param_1,4);
    }
    break;
  default:
    (this->VFX_Parameter).mbr_0x20 = 0xffffffff;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x4ff970(VFX_ParameterInfo *this)

{
  uint unaff_retaddr;
  cls_0x4d8d70 local_3c;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
    FUN_00616e15(DAT_007062c0);
    return;
  case 1:
    FUN_00616e15(DAT_007062c0);
    return;
  case 2:
  case 8:
    FUN_00616e24();
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 3:
    FUN_00616e15(DAT_007062c0);
    return;
  case 4:
    FUN_00616e15(DAT_007062c0);
    return;
  case 5:
  case 0xd:
    _atol((char *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 6:
  case 0xc:
    FUN_00616e24();
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 7:
    FUN_00616e24();
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 9:
    FUN_00616e15(DAT_007062c0);
    return;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&local_3c,(this->VFX_Parameter).mbr_0x30);
    if (local_3c.mbr_0x34 < 0x10) {
      local_3c.mbr_0x20 = (dword)&local_3c.mbr_0x20;
    }
    _atol((char *)local_3c.mbr_0x20);
    cls_0x4d8d70::meth_0x56ee40(&local_3c);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 0xb:
    cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  case 0xe:
  }
  FUN_00616e15(DAT_007062c0);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x4ff970(VFX_ParameterInfo *this)

{
  uint unaff_retaddr;
  cls_0x4d8d70 cStack_3c;
  uint uStack_4;
  
  uStack_4 = DAT_007062c0 ^ unaff_retaddr;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
    FUN_00616e15(DAT_007062c0);
    return;
  case 1:
    FUN_00616e15(DAT_007062c0);
    return;
  case 2:
  case 8:
    FUN_00616e24();
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 3:
    FUN_00616e15(DAT_007062c0);
    return;
  case 4:
    FUN_00616e15(DAT_007062c0);
    return;
  case 5:
  case 0xd:
    _atol((char *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 6:
  case 0xc:
    FUN_00616e24();
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 7:
    FUN_00616e24();
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 9:
    FUN_00616e15(DAT_007062c0);
    return;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70(&cStack_3c,(this->VFX_Parameter).mbr_0x30);
    if (cStack_3c.mbr_0x34 < 0x10) {
      cStack_3c.mbr_0x20 = (dword)&cStack_3c.mbr_0x20;
    }
    _atol((char *)cStack_3c.mbr_0x20);
    cls_0x4d8d70::meth_0x56ee40(&cStack_3c);
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 0xb:
    cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    FUN_00616e15(uStack_4 ^ unaff_retaddr);
    return;
  case 0xe:
  }
  FUN_00616e15(DAT_007062c0);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x4ffd10(VFX_ParameterInfo *this,void *param_1)

{
  float *pfVar1;
  cls_0x50db20 *pcVar2;
  _String_base *p_Var3;
  undefined4 *puVar4;
  undefined uVar5;
  uint unaff_retaddr;
  _String_base local_164 [4];
  void *local_160;
  dword local_150;
  uint local_14c;
  VFX_Parameter__vftable_673a20 *local_148;
  undefined local_144 [56];
  undefined local_10c [56];
  undefined local_d4 [56];
  undefined local_9c [56];
  undefined local_64 [84];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006352d0;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_148 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_14c = 0xf;
  local_150 = 0;
  local_160 = (void *)((uint)local_160 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    uVar5 = (undefined)*(undefined4 *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_0050009b;
  case 1:
    uVar5 = *(undefined *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_0050009b;
  case 2:
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)
             FUN_004a1a40((cls_0x50db20 *)local_d4,*(float *)(this->VFX_Parameter).mbr_0x30,3);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_d4);
    break;
  case 3:
    uVar5 = *(char *)(this->VFX_Parameter).mbr_0x30 != '\0';
LAB_0050009b:
    ExceptionList = &pvStack_c;
    FUN_004a1a30((cls_0x50db20 *)local_164,&DAT_00650668,uVar5);
    break;
  case 4:
    ExceptionList = &pvStack_c;
    pcVar2 = FUN_0052fba0((cls_0x50db20 *)local_10c,(this->VFX_Parameter).mbr_0x24,
                          *(int *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 2;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_10c);
    break;
  case 5:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    ExceptionList = &pvStack_c;
    FUN_00401c70(local_164,puVar4);
    break;
  case 6:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)FUN_00523b50((cls_0x50db20 *)local_9c,*pfVar1,pfVar1[1],pfVar1[2],3);
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_9c);
    break;
  case 7:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)FUN_0052f7a0((cls_0x50db20 *)local_144,*pfVar1,pfVar1[1],3);
    local_4._0_1_ = 4;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_144);
    break;
  case 8:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &pvStack_c;
    pcVar2 = FUN_0052c2f0((cls_0x50db20 *)local_64,*puVar4,puVar4[1],puVar4[2],3);
    local_4._0_1_ = 5;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_64);
    break;
  case 9:
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)FUN_0052e860((cls_0x50db20 *)(local_144 + 0x1c));
    local_4._0_1_ = 6;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_144 + 0x1c));
    break;
  case 10:
    ExceptionList = &pvStack_c;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)(local_64 + 0x1c),(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 7;
    p_Var3 = (_String_base *)FUN_0052e4e0((cls_0x50db20 *)(local_10c + 0x1c));
    local_4._0_1_ = 8;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_10c + 0x1c));
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)(local_64 + 0x1c));
    break;
  case 0xb:
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)
             FUN_00502380((cls_0x50db20 *)(local_d4 + 0x1c),
                          (cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 9;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_d4 + 0x1c));
    break;
  case 0xc:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &pvStack_c;
    p_Var3 = (_String_base *)
             FUN_0052eac0((cls_0x50db20 *)(local_9c + 0x1c),*pfVar1,pfVar1[1],pfVar1[2],pfVar1[3],5)
    ;
    local_4._0_1_ = 10;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_9c + 0x1c));
    break;
  case 0xd:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    ExceptionList = &pvStack_c;
    FUN_00401c70(local_164,puVar4);
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_164,0,0xffffffff);
  if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_160);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x500150(VFX_ParameterInfo *this,void *param_1)

{
  float *pfVar1;
  cls_0x50db20 *pcVar2;
  _String_base *p_Var3;
  undefined4 *puVar4;
  undefined uVar5;
  uint unaff_retaddr;
  _String_base local_164 [4];
  void *local_160;
  dword local_150;
  uint local_14c;
  VFX_Parameter__vftable_673a20 *local_148;
  undefined local_144 [56];
  undefined local_10c [56];
  undefined local_d4 [56];
  undefined local_9c [56];
  undefined local_64 [84];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006352d0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_148 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_14c = 0xf;
  local_150 = 0;
  local_160 = (void *)((uint)local_160 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    uVar5 = (undefined)*(undefined4 *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_005004db;
  case 1:
    uVar5 = *(undefined *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_005004db;
  case 2:
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)
             FUN_004a1a40((cls_0x50db20 *)local_d4,*(float *)(this->VFX_Parameter).mbr_0x30,3);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_d4);
    break;
  case 3:
    uVar5 = *(char *)(this->VFX_Parameter).mbr_0x30 != '\0';
LAB_005004db:
    ExceptionList = &local_c;
    FUN_004a1a30((cls_0x50db20 *)local_164,&DAT_00650668,uVar5);
    break;
  case 4:
    ExceptionList = &local_c;
    pcVar2 = FUN_0052fba0((cls_0x50db20 *)local_10c,(this->VFX_Parameter).mbr_0x24,
                          *(int *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 2;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_10c);
    break;
  case 5:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    ExceptionList = &local_c;
    FUN_00401c70(local_164,puVar4);
    break;
  case 6:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)FUN_00523b50((cls_0x50db20 *)local_9c,*pfVar1,pfVar1[1],pfVar1[2],3);
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_9c);
    break;
  case 7:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)FUN_0052f7a0((cls_0x50db20 *)local_144,*pfVar1,pfVar1[1],3);
    local_4._0_1_ = 4;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_144);
    break;
  case 8:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &local_c;
    pcVar2 = FUN_0052c2f0((cls_0x50db20 *)local_64,*puVar4,puVar4[1],puVar4[2],3);
    local_4._0_1_ = 5;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_64);
    break;
  case 9:
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)FUN_0052e860((cls_0x50db20 *)(local_144 + 0x1c));
    local_4._0_1_ = 6;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_144 + 0x1c));
    break;
  case 10:
    ExceptionList = &local_c;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)(local_64 + 0x1c),(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 7;
    p_Var3 = (_String_base *)FUN_0052e4e0((cls_0x50db20 *)(local_10c + 0x1c));
    local_4._0_1_ = 8;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_10c + 0x1c));
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)(local_64 + 0x1c));
    break;
  case 0xb:
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)
             FUN_00502380((cls_0x50db20 *)(local_d4 + 0x1c),
                          (cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 9;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_d4 + 0x1c));
    break;
  case 0xc:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    ExceptionList = &local_c;
    p_Var3 = (_String_base *)
             FUN_0052eac0((cls_0x50db20 *)(local_9c + 0x1c),*pfVar1,pfVar1[1],pfVar1[2],pfVar1[3],5)
    ;
    local_4._0_1_ = 10;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_9c + 0x1c));
    break;
  case 0xd:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    ExceptionList = &local_c;
    FUN_00401c70(local_164,puVar4);
  }
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)param_1,local_164);
  if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_160);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x500760(VFX_ParameterInfo *this,void *param_1)

{
  float *pfVar1;
  cls_0x50db20 *pcVar2;
  _String_base *p_Var3;
  undefined4 *puVar4;
  undefined uVar5;
  uint unaff_retaddr;
  undefined local_180 [28];
  undefined local_164 [4];
  void *local_160;
  dword local_150;
  uint local_14c;
  VFX_Parameter__vftable_673a20 *local_148;
  undefined local_144 [56];
  undefined local_10c [56];
  undefined local_d4 [56];
  undefined local_9c [56];
  undefined local_64 [28];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635370;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_148 = (VFX_Parameter__vftable_673a20 *)0x0;
  ExceptionList = &local_c;
  cls_0x40a220::cls_0x40a220((cls_0x40a220 *)local_180);
  local_4 = 0;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
  case 0xe:
    uVar5 = (undefined)*(undefined4 *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_00500b00;
  case 1:
    uVar5 = *(undefined *)(this->VFX_Parameter).mbr_0x30;
    goto LAB_00500b00;
  case 2:
    p_Var3 = (_String_base *)
             FUN_004a1a40((cls_0x50db20 *)local_d4,*(float *)(this->VFX_Parameter).mbr_0x30,3);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_d4);
    break;
  case 3:
    uVar5 = *(char *)(this->VFX_Parameter).mbr_0x30 != '\0';
LAB_00500b00:
    FUN_004a1a30((cls_0x50db20 *)local_164,&DAT_00650668,uVar5);
    break;
  case 4:
    pcVar2 = FUN_0052fb30((cls_0x50db20 *)(local_9c + 0x1c),(this->VFX_Parameter).mbr_0x24);
    local_4._0_1_ = 2;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_180,(_String_base *)pcVar2,0,0xffffffff);
    local_4._0_1_ = 0;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_9c + 0x1c));
    pcVar2 = FUN_0052fba0((cls_0x50db20 *)local_10c,(this->VFX_Parameter).mbr_0x24,
                          *(int *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_10c);
    break;
  case 5:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    FUN_00401c70(local_164,puVar4);
    break;
  case 6:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    p_Var3 = (_String_base *)FUN_00523b50((cls_0x50db20 *)local_9c,*pfVar1,pfVar1[1],pfVar1[2],3);
    local_4._0_1_ = 4;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_9c);
    break;
  case 7:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    p_Var3 = (_String_base *)FUN_0052f7a0((cls_0x50db20 *)local_144,*pfVar1,pfVar1[1],3);
    local_4._0_1_ = 5;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_144);
    break;
  case 8:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    pcVar2 = FUN_0052c2f0((cls_0x50db20 *)local_64,*puVar4,puVar4[1],puVar4[2],3);
    local_4._0_1_ = 6;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,(_String_base *)pcVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_64);
    break;
  case 9:
    p_Var3 = (_String_base *)FUN_0052e860((cls_0x50db20 *)(local_144 + 0x1c));
    local_4._0_1_ = 7;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_144 + 0x1c));
    break;
  case 10:
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)(local_64 + 0x1c),(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 8;
    cls_0x40a220::meth_0x4e3260((cls_0x40a220 *)local_180,(_String_base *)(local_64 + 0x1c));
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)(local_64 + 0x1c));
    break;
  case 0xb:
    p_Var3 = (_String_base *)
             FUN_00502380((cls_0x50db20 *)(local_10c + 0x1c),
                          (cls_0x502110 *)(this->VFX_Parameter).mbr_0x30);
    local_4._0_1_ = 9;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_10c + 0x1c));
    break;
  case 0xc:
    pfVar1 = (float *)(this->VFX_Parameter).mbr_0x30;
    p_Var3 = (_String_base *)
             FUN_0052eac0((cls_0x50db20 *)(local_d4 + 0x1c),*pfVar1,pfVar1[1],pfVar1[2],pfVar1[3],5)
    ;
    local_4._0_1_ = 10;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_164,p_Var3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_d4 + 0x1c));
    break;
  case 0xd:
    puVar4 = (undefined4 *)(this->VFX_Parameter).mbr_0x30;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_0064d7d8;
    }
    FUN_00401c70(local_164,puVar4);
  }
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)param_1,(_String_base *)local_180);
  if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_160);
  }
  local_14c = 0xf;
  local_150 = 0;
  local_160 = (void *)((uint)local_160 & 0xffffff00);
  if (0xf < (uint)local_180._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_180._4_4_);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall VFX_ParameterInfo::meth_0x500bc0(VFX_ParameterInfo *this,int param_1,int *param_2)

{
  cls_0x4d8d70 *pcVar1;
  uint unaff_retaddr;
  int iVar2;
  uint in_stack_fffffef4;
  float *in_stack_fffffef8;
  undefined local_f7 [3];
  cls_0x4d8d70 local_f4;
  undefined auStack_bc [4];
  undefined local_b8 [28];
  undefined local_9c [28];
  undefined local_80 [28];
  undefined local_64 [28];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006353e5;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  switch((this->VFX_Parameter).mbr_0x20) {
  case 0:
    ExceptionList = &local_c;
    meth_0x4ff970(this);
    iVar2 = 4;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 1:
    ExceptionList = &local_c;
    meth_0x4ff970(this);
    goto LAB_00500c61;
  case 2:
    ExceptionList = &local_c;
    meth_0x4fe280(this);
    iVar2 = 4;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 3:
    ExceptionList = &local_c;
    FUN_004ffb60(this);
LAB_00500c61:
    iVar2 = 1;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef7;
    break;
  case 4:
    ExceptionList = &local_c;
    meth_0x4ffd10(this,local_64);
    local_4 = 0;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_f4,(_String_base *)local_64);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar1 = (cls_0x4d8d70 *)local_64;
    goto LAB_00500e92;
  case 5:
    ExceptionList = &local_c;
    meth_0x4ffd10(this,local_b8);
    local_4 = 3;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_f4,(_String_base *)local_b8);
    local_4 = CONCAT31(local_4._1_3_,5);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_b8);
    goto LAB_00500eac;
  case 6:
    ExceptionList = &local_c;
    meth_0x4fe450(this,&local_f4,in_stack_fffffef4,in_stack_fffffef8);
    iVar2 = 0xc;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 7:
    ExceptionList = &local_c;
    meth_0x4fe690(this,&stack0xfffffef8,in_stack_fffffef4,in_stack_fffffef8);
    iVar2 = 8;
    pcVar1 = &local_f4;
    break;
  case 8:
    ExceptionList = &local_c;
    meth_0x4fe880(this,(float *)&local_f4);
    iVar2 = 0xc;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 9:
    ExceptionList = &local_c;
    meth_0x4feb20(this,local_f7,in_stack_fffffef4,(undefined2 *)in_stack_fffffef8);
    iVar2 = 3;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 10:
    ExceptionList = &local_c;
    meth_0x500760(this,local_64 + 0x1c);
    local_4 = 6;
    cls_0x4d8d70::cls_0x4d8d70(&local_f4,(_String_base *)(local_64 + 0x1c));
    local_4 = CONCAT31(local_4._1_3_,8);
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)(local_64 + 0x1c));
    cls_0x4d8d70::meth_0x52e440(&local_f4,param_1,param_2);
    cls_0x4d8d70::meth_0x56ee40(&local_f4);
    goto switchD_00500bfa_caseD_f;
  case 0xb:
    ExceptionList = &local_c;
    meth_0x4ffd10(this,local_9c);
    local_4 = 9;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_f4,(_String_base *)local_9c);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    pcVar1 = (cls_0x4d8d70 *)local_9c;
LAB_00500e92:
    cls_0x4d8d70::meth_0x4b2dd0(pcVar1);
LAB_00500eac:
    FUN_004b8340((uint)&local_f4,param_1,param_2);
    cls_0x4d8d70::meth_0x4b2dd0(&local_f4);
    goto switchD_00500bfa_caseD_f;
  case 0xc:
    ExceptionList = &local_c;
    meth_0x4feef0(this,&local_f4,in_stack_fffffef4,in_stack_fffffef8);
    iVar2 = 0x10;
    pcVar1 = (cls_0x4d8d70 *)&stack0xfffffef8;
    break;
  case 0xd:
    ExceptionList = &local_c;
    meth_0x500150(this,local_80);
    local_4 = 0xc;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_f4,(_String_base *)local_80);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
    FUN_004b8340((uint)&local_f4,param_1,param_2);
    cls_0x4d8d70::meth_0x4b2dd0(&local_f4);
    goto switchD_00500bfa_caseD_f;
  case 0xe:
    ExceptionList = &local_c;
    auStack_bc = (undefined  [4])meth_0x4ff970(this);
    iVar2 = 4;
    pcVar1 = (cls_0x4d8d70 *)auStack_bc;
    break;
  default:
    goto switchD_00500bfa_caseD_f;
  }
  FUN_004b8130(&pcVar1->mbr_0x0,iVar2,1,param_1,param_2);
switchD_00500bfa_caseD_f:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_ParameterInfo::meth_0x501000
          (VFX_ParameterInfo *this,int param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  int *piVar1;
  uint unaff_retaddr;
  dword dStack_4c;
  undefined local_48 [4];
  void *pvStack_44;
  dword dStack_34;
  uint uStack_30;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006352f0;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)local_2c,(_String_base *)&(this->VFX_Parameter).mbr_0x4,0,0xffffffff);
  local_4 = 0;
  FUN_004ffb70((cls_0x50db20 *)local_48,(this->VFX_Parameter).mbr_0x20,
               (this->VFX_Parameter).mbr_0x24);
  piVar1 = param_2;
  dStack_4c = (this->VFX_Parameter).mbr_0x28;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004b8340((uint)local_2c,param_1,param_2);
  FUN_004b8340((uint)local_48,param_1,piVar1);
  FUN_004b8130(&dStack_4c,4,1,param_1,piVar1);
  param_2 = (int *)0x0;
  if (param_1 == 0) {
    FUN_004b8130(&param_2,4,1,0,piVar1);
    param_1 = 0;
  }
  else {
    meth_0x500bc0(this,0,(int *)&param_2);
    FUN_004b8130(&param_2,4,1,param_1,piVar1);
  }
  meth_0x500bc0(this,param_1,piVar1);
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  dStack_34 = 0;
  pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
  uStack_30 = 0xf;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}


#include "../include/VFX_ParameterInfo.h"
