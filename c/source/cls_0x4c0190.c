#include "../include/cls_0x4c0190.h"

void __thiscall cls_0x4c0190::meth_0x424880(cls_0x4c0190 *this,int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  dword *pdVar4;
  cls_0x4c0190 *pcVar5;
  
  pdVar4 = (dword *)param_1;
  pcVar5 = this;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5->mbr_0x0 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pcVar5 = (cls_0x4c0190 *)&pcVar5->mbr_0x4;
  }
  fVar1 = (float)param_1[2];
  if (param_1[2] < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  fVar2 = (float)param_1[3];
  if (param_1[3] < 0) {
    fVar2 = fVar2 + 4.294967e+09;
  }
  this->mbr_0x18 = (dword)(fVar1 / fVar2);
  (this->Gfx_Camera).mbr_0x10c = (dword)(fVar1 / fVar2);
  (this->Gfx_Camera).mbr_0x4a = 1;
  meth_0x4bffd0(this);
  FUN_004901d0(this->mbr_0x164);
  return;
}



void __thiscall
cls_0x4c0190::meth_0x4248f0
          (cls_0x4c0190 *this,int param_1,undefined4 param_2,int param_3,int param_4,
          undefined4 param_5,undefined4 param_6)

{
  int local_18;
  undefined4 local_14;
  dword local_10;
  dword local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == 0) {
    param_3 = this->mbr_0x8;
  }
  if (param_4 == 0) {
    param_4 = this->mbr_0xc;
  }
  local_8 = param_5;
  local_18 = param_1;
  local_14 = param_2;
  local_4 = param_6;
  local_10 = param_3;
  local_c = param_4;
  meth_0x424880(this,&local_18);
  return;
}



void __thiscall
cls_0x4c0190::meth_0x424db0
          (cls_0x4c0190 *this,undefined param_1,undefined param_2,undefined param_3,
          undefined param_4)

{
  dword dVar1;
  
  dVar1 = CONCAT31(CONCAT21(CONCAT11(param_4,param_1),param_2),param_3);
  this->mbr_0x24 = dVar1;
  this->mbr_0x1e0 = dVar1;
  this->mbr_0x1c4 = dVar1;
  this->mbr_0x1a8 = dVar1;
  this->mbr_0x18c = dVar1;
  return;
}



void __thiscall cls_0x4c0190::meth_0x429d20(cls_0x4c0190 *this,int param_1)

{
  int *piVar1;
  int *local_10;
  undefined local_c;
  undefined4 local_8 [2];
  
  if (param_1 != 0) {
    local_10 = (int *)this->mbr_0x15c;
    if (local_10 != (int *)0x0) {
      local_c = 0;
      piVar1 = (int *)cls_0x50dbb0::meth_0x429220((cls_0x50dbb0 *)(param_1 + 8),local_8,&local_10);
      *(undefined *)(*piVar1 + 0x10) = 0;
    }
    *(undefined *)(param_1 + 4) = 1;
    this->mbr_0x160 = param_1;
    return;
  }
  if ((void *)this->mbr_0x160 != (void *)0x0) {
    FUN_004264d0((void *)this->mbr_0x160,(uint)&this->Gfx_Camera);
    if ((Gfx_Camera *)(undefined *)this->mbr_0x15c != &this->Gfx_Camera) {
      FUN_004264d0((void *)this->mbr_0x160,(uint)(undefined *)this->mbr_0x15c);
    }
  }
  this->mbr_0x160 = 0;
  return;
}



void __thiscall cls_0x4c0190::meth_0x4bffd0(cls_0x4c0190 *this)

{
  dword *this_00;
  dword dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  
  fVar2 = (float)this->mbr_0x0;
  if ((int)this->mbr_0x0 < 0) {
    fVar2 = fVar2 + 4.294967e+09;
  }
  this->mbr_0x17c = (dword)fVar2;
  fVar3 = (float)this->mbr_0x4;
  if ((int)this->mbr_0x4 < 0) {
    fVar3 = fVar3 + 4.294967e+09;
  }
  *(float *)&this->field_0x180 = fVar3;
  this->mbr_0x190 = 0;
  this->mbr_0x194 = 0;
  iVar5 = this->mbr_0x8 + this->mbr_0x0;
  this->mbr_0x184 = this->mbr_0x14;
  dVar1 = this->mbr_0x24;
  fVar4 = (float)iVar5;
  this->mbr_0x188 = 0x3f800000;
  this->mbr_0x18c = dVar1;
  if (iVar5 < 0) {
    fVar4 = fVar4 + 4.294967e+09;
  }
  *(float *)&this->field_0x198 = fVar4;
  this->mbr_0x1a0 = this->mbr_0x14;
  *(float *)&this->field_0x19c = fVar3;
  iVar5 = this->mbr_0xc + this->mbr_0x4;
  *(float *)&this->field_0x1b4 = fVar2;
  fVar2 = (float)iVar5;
  this->mbr_0x1a4 = 0x3f800000;
  this->mbr_0x1a8 = dVar1;
  this->mbr_0x1ac = 0x3f800000;
  this->mbr_0x1b0 = 0;
  if (iVar5 < 0) {
    fVar2 = fVar2 + 4.294967e+09;
  }
  *(float *)&this->field_0x1b8 = fVar2;
  this->mbr_0x1bc = this->mbr_0x14;
  *(float *)&this->field_0x1d4 = fVar2;
  this->mbr_0x1d0 = (dword)fVar4;
  this->mbr_0x1c0 = 0x3f800000;
  this->mbr_0x1cc = 0x3f800000;
  this->mbr_0x1dc = 0x3f800000;
  this->mbr_0x1e4 = 0x3f800000;
  this->mbr_0x1e8 = 0x3f800000;
  this_00 = &this->mbr_0x1ec;
  this->mbr_0x1c4 = dVar1;
  this->mbr_0x1c8 = 0;
  this->mbr_0x1d8 = this->mbr_0x14;
  this->mbr_0x1e0 = dVar1;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)this_00);
  iVar5 = cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
  *(undefined4 *)(iVar5 + 0x20) = 5;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 2;
  dVar1 = (this->cls_0x4abc60).mbr_0xc;
  *(undefined4 *)(dVar1 + 0x1c) = 0xe;
  *(undefined4 *)(dVar1 + 0x20) = 0xe;
  *(undefined4 *)(dVar1 + 0x28) = 1;
  *(undefined4 *)(dVar1 + 0x24) = 1;
  *(undefined4 *)(dVar1 + 0x130) = 0;
  piVar6 = (int *)0x4;
  this->mbr_0x1f8 = (dword)&this->mbr_0x17c;
  *this_00 = 0;
  this->mbr_0x1f0 = 0xffffffff;
  iVar5 = FUN_0047460d(0x144);
  Gregorian::meth_0x4ab680((Gregorian *)this_00,0x144,iVar5,piVar6);
  cls_0x4abc60::meth_0x4abdd0(&this->cls_0x4abc60);
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)&this->mbr_0x258,(int)this_00);
  return;
}



cls_0x4c0190 * __thiscall cls_0x4c0190::cls_0x4c0190(cls_0x4c0190 *this)

{
  cls_0x4950d0 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632a32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 3;
  this->mbr_0x24 = 0xff000100;
  this->mbr_0x28 = 0x3f800000;
  this->mbr_0x2c = 0;
  Gfx_Camera::Gfx_Camera(&this->Gfx_Camera);
  local_4 = 0;
  this->mbr_0x160 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x16c = 0;
  this->mbr_0x170 = 0x3f800000;
  this->mbr_0x174 = 0;
  this->mbr_0x178 = 0x3f800000;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x1ec = 0;
  this->mbr_0x1f0 = 0;
  this->mbr_0x1f4 = 0;
  this->mbr_0x1f8 = 0;
  this->mbr_0x1fc = 0;
  this->mbr_0x200 = 0;
  this->mbr_0x204 = 0;
  this->mbr_0x208 = 0;
  this->mbr_0x20c = 0;
  this->mbr_0x210 = 0;
  this->mbr_0x224 = 0;
  this->mbr_0x228 = 0;
  this->mbr_0x22c = 0;
  this->mbr_0x230 = 0;
  this->mbr_0x234 = 0;
  this->mbr_0x238 = 0;
  this->mbr_0x23c = 0;
  this->mbr_0x258 = 0;
  this->mbr_0x25c = 0;
  this->mbr_0x260 = 0;
  this->mbr_0x264 = 0;
  this->mbr_0x268 = 0;
  this->mbr_0x26c = 0;
  this->mbr_0x270 = 0;
  this->mbr_0x274 = 0;
  this->mbr_0x275 = 0;
  this->mbr_0x276 = 0;
  this->mbr_0x277 = 0;
  this->mbr_0x278 = 0x3d4ccccd;
  this->mbr_0x27c = 0xffff0000;
  local_4._0_1_ = 2;
  pcVar1 = (cls_0x4950d0 *)operator_new(0x78);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pcVar1 == (cls_0x4950d0 *)0x0) {
    pcVar1 = (cls_0x4950d0 *)0x0;
  }
  else {
    pcVar1 = cls_0x4950d0::cls_0x4950d0(pcVar1,this);
  }
  this->mbr_0x15c = (dword)&this->Gfx_Camera;
  this->mbr_0x164 = (dword)pcVar1;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0x3f800000;
  this->mbr_0x18 = 0x3f800000;
  ExceptionList = local_c;
  return this;
}


