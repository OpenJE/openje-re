#include "../include/cls_0x6bc9d8.h"

undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f4421(cls_0x6bc9d8 *this,int param_1)

{
  this->mbr_0xc = *(dword *)(param_1 + 0x10);
  this[1].vftptr_0x0 = *(cls_0x6bc9d8__vftable_6bc9d8 **)(param_1 + 0x14);
  *(undefined4 *)&this[1].field_0x4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)&this[1].field_0x8 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}



undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f444d(cls_0x6bc9d8 *this,undefined4 *param_1)

{
  this->mbr_0xc = *param_1;
  this[1].vftptr_0x0 = (cls_0x6bc9d8__vftable_6bc9d8 *)param_1[1];
  *(undefined4 *)&this[1].field_0x4 = param_1[2];
  *(undefined4 *)&this[1].field_0x8 = param_1[3];
  return 0;
}



undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f4483(cls_0x6bc9d8 *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  pdVar2 = (dword *)(param_1 + 0x10);
  pdVar3 = &this->mbr_0xc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f449b(cls_0x6bc9d8 *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  pdVar2 = &this->mbr_0xc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  return 0;
}



undefined4 * __thiscall cls_0x6bc9d8::virt_meth_0x5f5209(cls_0x6bc9d8 *this,byte param_1)

{
  meth_0x5f5225(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall cls_0x6bc9d8::meth_0x5f5225(cls_0x6bc9d8 *this)

{
  this->vftptr_0x0 = &cls_0x6bc9d8__vftable_6bc9d8_006bc9d8;
  return;
}



ulonglong __thiscall
cls_0x6bc9d8::virt_meth_0x5f522c(cls_0x6bc9d8 *this,uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint in_EDX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  longlong lVar10;
  ulonglong uVar11;
  
  fVar6 = (float10)*(float *)(param_1 + 0xc);
  fVar7 = (float10)1.0;
  fVar1 = *(float *)(param_1 + 4);
  fVar8 = (float10)(float)(LPCWSTR)0x0;
  fVar2 = *(float *)(param_1 + 8);
  if ((float10)*(float *)param_1 < fVar7) {
    fVar9 = (float10)*(float *)param_1;
    if (fVar9 < fVar8 == (fVar9 == fVar8)) {
      fVar6 = fVar7;
      lVar10 = __ftol();
      in_EDX = (uint)((ulonglong)lVar10 >> 0x20);
      param_1 = (uint)lVar10;
      fVar8 = extraout_ST0;
      fVar7 = extraout_ST1;
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0xff;
  }
  lVar10 = (ulonglong)in_EDX << 0x20;
  if ((float10)fVar1 < fVar7) {
    fVar9 = (float10)fVar1;
    lVar10 = (ulonglong)in_EDX << 0x20;
    if (fVar9 < fVar8 == (fVar9 == fVar8)) {
      fVar6 = fVar7;
      lVar10 = __ftol();
      uVar4 = (uint)lVar10;
      fVar8 = extraout_ST0_00;
      fVar7 = extraout_ST1_00;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  uVar5 = (uint)((ulonglong)lVar10 >> 0x20);
  lVar10 = (ulonglong)uVar5 << 0x20;
  if ((float10)fVar2 < fVar7) {
    fVar9 = (float10)fVar2;
    lVar10 = (ulonglong)uVar5 << 0x20;
    if (fVar9 < fVar8 == (fVar9 == fVar8)) {
      lVar10 = __ftol();
      uVar5 = (uint)lVar10;
      fVar7 = extraout_ST0_01;
      fVar6 = extraout_ST1_01;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xff;
  }
  uVar3 = (uint)((ulonglong)lVar10 >> 0x20);
  if (fVar6 < fVar7) {
    if (fVar6 < (float10)(float)(LPCWSTR)0x0 == (fVar6 == (float10)(float)(LPCWSTR)0x0)) {
      uVar11 = __ftol();
    }
    else {
      uVar11 = (ulonglong)uVar3 << 0x20;
    }
  }
  else {
    uVar11 = CONCAT44(uVar3,0xff);
  }
  this->mbr_0xc = (((int)uVar11 << 8 | param_1) << 8 | uVar4) << 8 | uVar5;
  return uVar11 & 0xffffffff00000000;
}



undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f535c(cls_0x6bc9d8 *this,float *param_1)

{
  uint uVar1;
  
  uVar1 = this->mbr_0xc;
  *param_1 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(uVar1 & 0xff) * 0.003921569;
  param_1[3] = (float)(uVar1 >> 0x18) * 0.003921569;
  return 0;
}



undefined4 __thiscall cls_0x6bc9d8::virt_meth_0x5f53c3(cls_0x6bc9d8 *this,uint param_1)

{
  this->mbr_0xc = (dword)((float)(param_1 >> 0x10 & 0xff) * 0.003921569);
  this[1].vftptr_0x0 = (cls_0x6bc9d8__vftable_6bc9d8 *)((float)(param_1 >> 8 & 0xff) * 0.003921569);
  *(float *)&this[1].field_0x4 = (float)(param_1 & 0xff) * 0.003921569;
  *(float *)&this[1].field_0x8 = (float)(param_1 >> 0x18) * 0.003921569;
  return 0;
}


#include "../include/cls_0x6bc9d8.h"
