#include "../include/cls_0x4abc60.h"

void __thiscall cls_0x4abc60::meth_0x41f1c0(cls_0x4abc60 *this)

{
  void *pvVar1;
  
  this->mbr_0x0 = 0;
  meth_0x4abc10(this);
  pvVar1 = (void *)this->mbr_0xc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}



void __thiscall cls_0x4abc60::meth_0x41f570(cls_0x4abc60 *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c55b;
  local_c = ExceptionList;
  pvVar1 = (void *)this->mbr_0xc;
  ExceptionList = &local_c;
  this->mbr_0x0 = param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  piVar2 = (int *)operator_new(param_1 * 0x244 + 4);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    _eh_vector_constructor_iterator_
              (piVar2 + 1,0x244,param_1,cls_0x4b60b0::cls_0x4b60b0,cls_0x4b60b0::meth_0x401720);
    this->mbr_0xc = (dword)(piVar2 + 1);
    ExceptionList = local_c;
    return;
  }
  this->mbr_0xc = 0;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4abc60::meth_0x41fbd0(cls_0x4abc60 *this)

{
  void *pvVar1;
  
  this->mbr_0x0 = 0;
  meth_0x4abc10(this);
  pvVar1 = (void *)this->mbr_0xc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  pvVar1 = (void *)this->mbr_0x8;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0xc,*(int *)((int)pvVar1 + -4),GUI::Interface::meth_0x4f6d40);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}



void __thiscall cls_0x4abc60::meth_0x49c9a0(cls_0x4abc60 *this)

{
  dword dVar1;
  undefined4 uVar2;
  cls_0x50db20 *this_00;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (this->mbr_0x0 != 0) {
    iVar3 = 0;
    do {
      dVar1 = this->mbr_0xc;
      uVar2 = *(undefined4 *)(dVar1 + 0x24 + iVar3);
      this_00 = (cls_0x50db20 *)(dVar1 + iVar3);
      (this_00->VFX_Parameter).mbr_0x4 = *(dword *)(dVar1 + 0x1c + iVar3);
      *(undefined4 *)&(this_00->VFX_Parameter).field_0xc = uVar2;
      ::cls_0x50db20::meth_0x4b6010(this_00);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x244;
    } while (uVar4 < this->mbr_0x0);
  }
  return;
}



void __thiscall
cls_0x4abc60::meth_0x4ab600(cls_0x4abc60 *this,char param_1,char param_2,uint param_3,uint *param_4)

{
  int iVar1;
  cls_0x50db20 *this_00;
  uint local_8;
  uint local_4;
  
  iVar1 = 0;
  if (param_4 != (uint *)0x0) {
    local_4 = *param_4;
  }
  local_8 = 0;
  if (this->mbr_0x0 != 0) {
    do {
      this_00 = (cls_0x50db20 *)(this->mbr_0xc + iVar1);
      if ((param_1 != '\0') || (param_2 != '\0')) {
        ::cls_0x50db20::meth_0x4b5eb0(this_00,param_3,param_1,param_2);
      }
      if (param_4 != (uint *)0x0) {
        ::cls_0x50db20::meth_0x4b5f90(this_00,local_4);
      }
      local_8 = local_8 + 1;
      iVar1 = iVar1 + 0x244;
    } while (local_8 < this->mbr_0x0);
  }
  return;
}



void __thiscall cls_0x4abc60::meth_0x4abc10(cls_0x4abc60 *this)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  cls_0x4abc60 *local_4;
  
  iVar4 = 0;
  iVar3 = 0;
  local_4 = this;
  do {
    ppiVar1 = *(int ***)(this->mbr_0x8 + 4 + iVar3);
    if (ppiVar1 == (int **)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *ppiVar1;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)(this->mbr_0x8 + iVar3),(int **)&local_4,piVar2,(int *)ppiVar1);
    *(undefined4 *)(iVar4 + this->mbr_0x4) = 0;
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 0x48);
  return;
}



cls_0x4abc60 * __thiscall cls_0x4abc60::cls_0x4abc60(cls_0x4abc60 *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631fbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = 0;
  pvVar1 = operator_new(0x18);
  this->mbr_0x4 = (dword)pvVar1;
  puVar2 = (undefined4 *)operator_new(0x4c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 6;
    _eh_vector_constructor_iterator_
              (puVar3,0xc,6,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
  }
  this->mbr_0x8 = (dword)puVar3;
  this->mbr_0xc = 0;
  meth_0x4abc10(this);
  ExceptionList = local_c;
  return this;
}



cls_0x4abc60 * __thiscall cls_0x4abc60::cls_0x4abc60(cls_0x4abc60 *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (this != (cls_0x4abc60 *)param_1) {
    meth_0x41f570(this,*param_1);
    uVar1 = 0;
    if (this->mbr_0x0 != 0) {
      iVar2 = 0;
      do {
        ::cls_0x50db20::cls_0x50db20
                  ((cls_0x50db20 *)(this->mbr_0xc + iVar2),(_String_base *)(param_1[3] + iVar2));
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x244;
      } while (uVar1 < this->mbr_0x0);
    }
  }
  return this;
}



cls_0x4abc60 * __thiscall cls_0x4abc60::cls_0x4abc60(cls_0x4abc60 *this,uint *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631fdb;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  this->mbr_0x0 = 0;
  this->mbr_0xc = 0;
  cls_0x4abc60(this,param_1);
  pvVar1 = operator_new(0x18);
  this->mbr_0x4 = (dword)pvVar1;
  puVar2 = (undefined4 *)operator_new(0x4c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2 + 1;
    *puVar2 = 6;
    _eh_vector_constructor_iterator_
              (puVar3,0xc,6,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
  }
  this->mbr_0x8 = (dword)puVar3;
  meth_0x4abc10(this);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x4abc60::meth_0x4abdd0(cls_0x4abc60 *this)

{
  int iVar1;
  dword dVar2;
  int iVar3;
  uint local_8;
  int local_4;
  
  meth_0x4abc10(this);
  local_8 = 0;
  if (this->mbr_0x0 != 0) {
    do {
      iVar1 = *(int *)(local_8 * 0x244 + 0x28 + this->mbr_0xc);
      dVar2 = this->mbr_0x8;
      iVar3 = *(int *)(dVar2 + 4 + iVar1 * 0xc);
      local_4 = FUN_00433760(iVar3,*(undefined4 *)(iVar3 + 4),&local_8);
      cls_0x401b00::meth_0x436410((cls_0x401b00 *)(dVar2 + iVar1 * 0xc),1);
      *(int *)(iVar3 + 4) = local_4;
      **(int **)(local_4 + 4) = local_4;
      *(int *)(this->mbr_0x4 + iVar1 * 4) = *(int *)(this->mbr_0x4 + iVar1 * 4) + 1;
      local_8 = local_8 + 1;
    } while (local_8 < this->mbr_0x0);
  }
  return;
}


