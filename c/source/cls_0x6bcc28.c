#include "../include/cls_0x6bcc28.h"

cls_0x6bcc28 * __thiscall cls_0x6bcc28::cls_0x6bcc28(cls_0x6bcc28 *this)

{
  this->mbr_0x4 = 1;
  this->vftptr_0x0 = &cls_0x6bcc28__vftable_6bcc28_006bcc28;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



cls_0x6bcc28 * __thiscall cls_0x6bcc28::~cls_0x6bcc28(cls_0x6bcc28 *this)

{
  cls_0x6bcc28__vftable_6bcc28 *_Memory;
  cls_0x6bcc28__vftable_6bcc28 **extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcc28__vftable_6bcc28 ***)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &cls_0x6bcc28__vftable_6bcc28_006bcc28;
  _Memory = extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



undefined4 __thiscall
cls_0x6bcc28::virt_meth_0x5f507e(cls_0x6bcc28 *this,undefined param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if (this->mbr_0x10 < 4) {
    pvVar1 = operator_new(0x40);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x14);
    }
    uVar2 = 0x8007000e;
  }
  else {
    this->mbr_0xc = 4;
    thunk_FUN_00471b8c();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 __thiscall cls_0x6bcc28::virt_meth_0x5f50c6(cls_0x6bcc28 *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (this->mbr_0x10 < 4) {
    pvVar1 = operator_new(0x40);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x14);
    }
    uVar2 = 0x8007000e;
  }
  else {
    this->mbr_0xc = 4;
    puVar4 = (undefined4 *)this->mbr_0x14;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



void * __thiscall cls_0x6bcc28::virt_meth_0x5f55e3(cls_0x6bcc28 *this,byte param_1)

{
  ~cls_0x6bcc28(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



undefined4 __thiscall cls_0x6bcc28::virt_meth_0x5f55ff(cls_0x6bcc28 *this,uint param_1)

{
  float *pfVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  if (this->mbr_0x10 == 0) {
    pvVar2 = operator_new(0x10);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x14);
    }
    uVar3 = 0x8007000e;
  }
  else {
    this->mbr_0xc = 1;
    pfVar1 = (float *)this->mbr_0x14;
    uVar3 = 0;
    *pfVar1 = (float)(param_1 >> 0x10 & 0xff) * 0.003921569;
    pfVar1[1] = (float)(param_1 >> 8 & 0xff) * 0.003921569;
    pfVar1[2] = (float)(param_1 & 0xff) * 0.003921569;
    pfVar1[3] = (float)(param_1 >> 0x18) * 0.003921569;
  }
  return uVar3;
}


#include "../include/cls_0x6bcc28.h"
