#include "../include/cls_0x6b84f0.h"

void __thiscall cls_0x6b84f0::virt_meth_0x5d1c3e(cls_0x6b84f0 *this)

{
  return;
}



cls_0x6b84f0 * __thiscall cls_0x6b84f0::cls_0x6b84f0(cls_0x6b84f0 *this)

{
  uint uVar1;
  void *pvVar2;
  dword dVar3;
  cls_0x6b848c *this_00;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6b848c **)(unaff_EBP + -0x14) = this_00;
  cls_0x6b848c::cls_0x6b848c(this_00,*(undefined4 **)(unaff_EBP + 8),0,1);
  uVar4 = this_00->mbr_0x1030 & 0xfffffffe;
  uVar1 = this_00->mbr_0x1038 + 1 & 0xfffffffe;
  iVar5 = uVar1 - uVar4;
  this_00->mbr_0x1078 = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_00->vftptr_0x0 = (cls_0x6b848c__vftable_6b848c *)&cls_0x6b84f0__vftable_6b84f0_006b84f0;
  this_00->mbr_0x1070 = uVar4;
  this_00->mbr_0x1074 = 0;
  this_00->mbr_0x1080 = 0;
  this_00->mbr_0x107c = 0;
  this_00->mbr_0x1084 = 0;
  *(int *)&this_00->field_0x1088 = iVar5;
  this_00->mbr_0x108c = 0;
  this_00->mbr_0x1090 = 1;
  pvVar2 = operator_new(iVar5 * 0x10);
  *(void **)(unaff_EBP + -0x10) = pvVar2;
  *(undefined *)(unaff_EBP + -4) = 1;
  if (pvVar2 == (void *)0x0) {
    dVar3 = 0;
  }
  else {
    FUN_004010a0(pvVar2,0x10,iVar5,&LAB_00474d39);
    dVar3 = *(dword *)(unaff_EBP + -0x10);
  }
  this_00->mbr_0x106c = dVar3;
  if (dVar3 == 0) {
    this_00->mbr_0x1090 = 0;
  }
  if (*(int *)(*(int *)(unaff_EBP + 8) + 4) == 0x59565955) {
    this_00->mbr_0x1094 = 8;
    this_00->mbr_0x1098 = 0;
  }
  else {
    this_00->mbr_0x1094 = 0;
    this_00->mbr_0x1098 = 8;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (cls_0x6b84f0 *)this_00;
}



void __thiscall
cls_0x6b84f0::virt_meth_0x5dae9d(cls_0x6b84f0 *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = (undefined4 *)cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,(int)param_3);
  }
  iVar1 = cls_0x6b848c::meth_0x5dab24
                    (&this->cls_0x6b848c,param_1 + (this->cls_0x6b848c).mbr_0x1034,
                     param_2 + (this->cls_0x6b848c).mbr_0x1040,
                     (uint)(*(dword *)&(this->cls_0x6b848c).field_0x1088 !=
                           (this->cls_0x6b848c).mbr_0x1058));
  if (-1 < iVar1) {
    puVar3 = (undefined4 *)
             (((this->cls_0x6b848c).mbr_0x1030 - (this->cls_0x6b848c).mbr_0x1070) * 0x10 +
             (this->cls_0x6b848c).mbr_0x106c);
    for (uVar2 = ((this->cls_0x6b848c).mbr_0x1058 << 4) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined *)puVar3 = *(undefined *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    (this->cls_0x6b848c).mbr_0x108c = 1;
  }
  return;
}



cls_0x6b84f0 * __thiscall cls_0x6b84f0::~cls_0x6b84f0(cls_0x6b84f0 *this)

{
  cls_0x6b848c *pcVar1;
  cls_0x6b848c *this_00;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6b848c **)(unaff_EBP + -0x10) = this_00;
  this_00->vftptr_0x0 = (cls_0x6b848c__vftable_6b848c *)&cls_0x6b84f0__vftable_6b84f0_006b84f0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cls_0x6b848c::meth_0x5da900(this_00);
  if ((void *)this_00->mbr_0x106c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_00->mbr_0x106c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcVar1 = cls_0x6b848c::~cls_0x6b848c(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (cls_0x6b84f0 *)pcVar1;
}



cls_0x6b84f0 * __thiscall cls_0x6b84f0::~cls_0x6b84f0(cls_0x6b84f0 *this)

{
  cls_0x6b848c *pcVar1;
  cls_0x6b848c *this_00;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6b848c **)(unaff_EBP + -0x10) = this_00;
  this_00->vftptr_0x0 = (cls_0x6b848c__vftable_6b848c *)&cls_0x6b84f0__vftable_6b84f0_006b84f0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cls_0x6b848c::meth_0x5da900(this_00);
  if ((void *)this_00->mbr_0x106c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_00->mbr_0x106c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcVar1 = cls_0x6b848c::~cls_0x6b848c(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (cls_0x6b84f0 *)pcVar1;
}


#include "../include/cls_0x6b84f0.h"
