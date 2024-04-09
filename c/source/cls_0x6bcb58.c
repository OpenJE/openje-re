#include "../include/cls_0x6bcb58.h"

cls_0x6bcb58 * __thiscall cls_0x6bcb58::cls_0x6bcb58(cls_0x6bcb58 *this)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  cls_0x6bcb58 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcb58 **)(unaff_EBP + -0x20) = extraout_ECX;
  extraout_ECX->mbr_0x4 = 1;
  extraout_ECX->mbr_0x14 = 0xffffffff;
  extraout_ECX->mbr_0x20 = 0xffffffff;
  extraout_ECX->mbr_0x10 = 1;
  extraout_ECX->mbr_0x1c = 1;
  piVar1 = *(int **)(unaff_EBP + 8);
  extraout_ECX->vftptr_0x0 = &cls_0x6bcb58__vftable_6bcb58_006bcb58;
  extraout_ECX->mbr_0x24 = 0;
  extraout_ECX->mbr_0x28 = 0;
  extraout_ECX->mbr_0x2c = 0;
  extraout_ECX->mbr_0x30 = 0;
  extraout_ECX->mbr_0x34 = (dword)piVar1;
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar2 + 0x24))(piVar1,unaff_EBP + -0x1c);
  if ((*(byte *)(unaff_EBP + -0x10) & 0x20) == 0) {
    piVar1 = (int *)extraout_ECX->mbr_0x34;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x40) != 0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,unaff_EBP + -0xf4);
      dVar3 = *(dword *)(unaff_EBP + -0x30);
      extraout_ECX->mbr_0xc = 0;
      extraout_ECX->mbr_0x18 = dVar3;
      goto LAB_005f473b;
    }
    (**(code **)(*piVar1 + 0x18))(piVar1,unaff_EBP + 8);
    (**(code **)(**(int **)(unaff_EBP + 8) + 0x34))
              (*(int **)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
               *(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0xf4);
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))(*(int **)(unaff_EBP + 8));
    extraout_ECX->mbr_0x18 = *(dword *)(unaff_EBP + -0x30);
  }
  else {
    extraout_ECX->mbr_0x18 = 0;
  }
  extraout_ECX->mbr_0xc = 0xfffe0101;
LAB_005f473b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



cls_0x6bcb58 * __thiscall cls_0x6bcb58::~cls_0x6bcb58(cls_0x6bcb58 *this)

{
  cls_0x6bcb58__vftable_6bcb58 *pcVar1;
  cls_0x6bcb58__vftable_6bcb58 **extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcb58__vftable_6bcb58 ***)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &cls_0x6bcb58__vftable_6bcb58_006bcb58;
  pcVar1 = extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((pcVar1 != (cls_0x6bcb58__vftable_6bcb58 *)0xffffffff) && (((uint)pcVar1 & 1) != 0)) {
    (**(code **)(extraout_ECX[0xd]->virt_meth_0x5f55ab_0 + 0x138))(extraout_ECX[0xd],pcVar1);
  }
  pcVar1 = extraout_ECX[8];
  if ((pcVar1 != (cls_0x6bcb58__vftable_6bcb58 *)0xffffffff) && (((uint)pcVar1 & 1) != 0)) {
    (**(code **)(extraout_ECX[0xd]->virt_meth_0x5f55ab_0 + 0x138))(extraout_ECX[0xd],pcVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(extraout_ECX[10]);
}



void __thiscall cls_0x6bcb58::virt_meth_0x5f47c1(cls_0x6bcb58 *this)

{
  uint uVar1;
  
  uVar1 = this->mbr_0x14;
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
  }
  uVar1 = this->mbr_0x20;
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x28);
}



void __thiscall cls_0x6bcb58::virt_meth_0x5f482b(cls_0x6bcb58 *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *local_10;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = uVar1 * 4;
  uVar3 = (*(int *)(param_1 + 4) - uVar1) * 4 - 8;
  if (uVar5 != 0) {
    local_8 = (undefined4 *)operator_new(uVar5);
    if (local_8 == (undefined4 *)0x0) goto LAB_005f4883;
  }
  if (uVar3 != 0) {
    local_10 = (undefined4 *)operator_new(uVar3);
    if (local_10 == (undefined4 *)0x0) {
LAB_005f4883:
                    /* WARNING: Subroutine does not return */
      _free(local_8);
    }
  }
  puVar4 = (undefined4 *)(param_1 + 0x14);
  for (uVar1 = uVar1 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *local_8 = *puVar4;
    puVar4 = puVar4 + 1;
    local_8 = local_8 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined *)local_8 = *(undefined *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    local_8 = (undefined4 *)((int)local_8 + 1);
  }
  puVar4 = (undefined4 *)(param_1 + 0x14 + uVar5);
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *local_10 = *puVar4;
    puVar4 = puVar4 + 1;
    local_10 = local_10 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined *)local_10 = *(undefined *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    local_10 = (undefined4 *)((int)local_10 + 1);
  }
  uVar3 = this->mbr_0x14;
  if ((uVar3 != 0xffffffff) && ((uVar3 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar3);
  }
  uVar3 = this->mbr_0x20;
  if ((uVar3 != 0xffffffff) && ((uVar3 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x28);
}



int __thiscall cls_0x6bcb58::virt_meth_0x5f495e(cls_0x6bcb58 *this,uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  void *local_8;
  
  piVar3 = param_2;
  uVar2 = param_1;
  uVar1 = this->mbr_0x14;
  if ((param_1 == uVar1) || (param_1 == this->mbr_0x20)) {
    iVar4 = 0;
  }
  else {
    if ((param_1 == 0xffffffff) || ((param_1 & 1) == 0)) {
      if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
        (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
      }
      uVar1 = this->mbr_0x20;
      if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
        (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x28);
    }
    local_8 = (void *)0x0;
    local_c = (void *)0x0;
    iVar4 = (**(code **)(*param_2 + 0x144))(param_2,param_1,0,&param_1);
    if ((-1 < iVar4) &&
       (iVar4 = (**(code **)(*piVar3 + 0x148))(piVar3,uVar2,0,&param_2), -1 < iVar4)) {
      if ((((param_1 == 0) || (local_8 = operator_new(param_1), local_8 != (void *)0x0)) &&
          ((param_2 == (int *)0x0 || (local_c = operator_new((uint)param_2), local_c != (void *)0x0)
           ))) && ((iVar4 = (**(code **)(*piVar3 + 0x144))(piVar3,uVar2,local_8,&param_1),
                   -1 < iVar4 &&
                   (iVar4 = (**(code **)(*piVar3 + 0x148))(piVar3,uVar2,local_c,&param_2),
                   -1 < iVar4)))) {
        uVar1 = this->mbr_0x14;
        if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
          (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
        }
        uVar1 = this->mbr_0x20;
        if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
          (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x28);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8);
    }
  }
  return iVar4;
}



undefined4 __thiscall cls_0x6bcb58::virt_meth_0x5f4c02(cls_0x6bcb58 *this)

{
  uint uVar1;
  
  uVar1 = this->mbr_0x14;
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
    this->mbr_0x10 = 0;
    this->mbr_0x14 = 0xffffffff;
  }
  uVar1 = this->mbr_0x20;
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) != 0)) {
    (**(code **)(*(int *)this->mbr_0x34 + 0x138))((int *)this->mbr_0x34,uVar1);
    this->mbr_0x1c = 0;
    this->mbr_0x20 = 0xffffffff;
  }
  return 0;
}



void * __thiscall cls_0x6bcb58::virt_meth_0x5f55ab(cls_0x6bcb58 *this,byte param_1)

{
  ~cls_0x6bcb58(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/cls_0x6bcb58.h"
