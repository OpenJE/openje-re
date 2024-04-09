#include "../include/cls_0x6bcbc0.h"

cls_0x6bcbc0 * __thiscall cls_0x6bcbc0::cls_0x6bcbc0(cls_0x6bcbc0 *this)

{
  int *piVar1;
  cls_0x6bcbc0 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcbc0 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX->mbr_0x4 = 1;
  extraout_ECX->mbr_0x10 = 1;
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX->vftptr_0x0 = &cls_0x6bcbc0__vftable_6bcbc0_006bcbc0;
  extraout_ECX->mbr_0x14 = 0;
  extraout_ECX->mbr_0x18 = 0;
  extraout_ECX->mbr_0x1c = 0;
  extraout_ECX->mbr_0x20 = (dword)piVar1;
  (**(code **)(*piVar1 + 0x1c))(piVar1,unaff_EBP + -0xe4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX->mbr_0xc = *(dword *)(unaff_EBP + -0x18);
  return extraout_ECX;
}



cls_0x6bcbc0 * __thiscall cls_0x6bcbc0::~cls_0x6bcbc0(cls_0x6bcbc0 *this)

{
  cls_0x6bcbc0__vftable_6bcbc0 *pcVar1;
  cls_0x6bcbc0__vftable_6bcbc0 **extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcbc0__vftable_6bcbc0 ***)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &cls_0x6bcbc0__vftable_6bcbc0_006bcbc0;
  pcVar1 = extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((pcVar1 != (cls_0x6bcbc0__vftable_6bcbc0 *)0x0) &&
     (pcVar1 != (cls_0x6bcbc0__vftable_6bcbc0 *)0xffffffff)) {
    (**(code **)(extraout_ECX[8]->virt_meth_0x5f55c7_0 + 0x168))(extraout_ECX[8],pcVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(extraout_ECX[7]);
}



void __thiscall cls_0x6bcbc0::virt_meth_0x5f4d17(cls_0x6bcbc0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x14;
  if ((dVar1 != 0) && (dVar1 != 0xffffffff)) {
    (**(code **)(*(int *)this->mbr_0x20 + 0x168))((int *)this->mbr_0x20,dVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x1c);
}



undefined4 __thiscall cls_0x6bcbc0::virt_meth_0x5f4d53(cls_0x6bcbc0 *this,undefined4 *param_1)

{
  int *piVar1;
  dword dVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  iVar4 = param_1[4];
  piVar1 = param_1 + 1;
  param_1 = (undefined4 *)0x0;
  uVar3 = (*piVar1 - iVar4) * 4 - 8;
  if (uVar3 != 0) {
    param_1 = (undefined4 *)operator_new(uVar3);
    if (param_1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
  }
  puVar5 = puVar5 + iVar4 + 5;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined *)param_1 = *(undefined *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  dVar2 = this->mbr_0x14;
  if ((dVar2 != 0) && (dVar2 != 0xffffffff)) {
    (**(code **)(*(int *)this->mbr_0x20 + 0x168))((int *)this->mbr_0x20,dVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x1c);
}



int __thiscall cls_0x6bcbc0::virt_meth_0x5f4dfc(cls_0x6bcbc0 *this,int param_1,int *param_2)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *_Memory;
  
  piVar2 = param_2;
  dVar1 = this->mbr_0x14;
  if (param_1 == dVar1) {
    iVar3 = 0;
  }
  else {
    if ((param_1 == 0) || (dVar1 == 0xffffffff)) {
      if ((dVar1 != 0) && (dVar1 != 0xffffffff)) {
        (**(code **)(*(int *)this->mbr_0x20 + 0x168))((int *)this->mbr_0x20,dVar1);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x1c);
    }
    iVar3 = (**(code **)(*param_2 + 0x174))(param_2,param_1,0,&param_2);
    if (-1 < iVar3) {
      _Memory = operator_new((uint)param_2);
      if (_Memory != (void *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x174))(piVar2,param_1,_Memory,&param_2);
        if (-1 < iVar3) {
          dVar1 = this->mbr_0x14;
          if ((dVar1 != 0) && (dVar1 != 0xffffffff)) {
            (**(code **)(*(int *)this->mbr_0x20 + 0x168))((int *)this->mbr_0x20,dVar1);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x1c);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar3 = -0x7ff8fff2;
    }
  }
  return iVar3;
}



undefined4 __thiscall cls_0x6bcbc0::virt_meth_0x5f4f47(cls_0x6bcbc0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x14;
  if ((dVar1 != 0) && (dVar1 != 0xffffffff)) {
    (**(code **)(*(int *)this->mbr_0x20 + 0x168))((int *)this->mbr_0x20,dVar1);
    this->mbr_0x10 = 0;
    this->mbr_0x14 = 0xffffffff;
  }
  return 0;
}



void * __thiscall cls_0x6bcbc0::virt_meth_0x5f55c7(cls_0x6bcbc0 *this,byte param_1)

{
  ~cls_0x6bcbc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/cls_0x6bcbc0.h"
