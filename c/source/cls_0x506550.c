#include "../include/cls_0x506550.h"

int __thiscall
cls_0x506550::meth_0x506550
          (cls_0x506550 *this,int *param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  undefined uVar1;
  Gfx_VertexBuffer *pGVar2;
  int3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *unaff_EDI;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063560b;
  piStack_c = (int *)ExceptionList;
  uVar6 = (int)param_1 * (int)param_2;
  ExceptionList = &piStack_c;
  this->mbr_0x8 = (dword)param_1;
  this->mbr_0xc = (dword)param_2;
  this->mbr_0x10 = (dword)param_3;
  this->mbr_0x14 = (dword)param_5;
  pGVar2 = (Gfx_VertexBuffer *)operator_new(0x14);
  local_4 = 0;
  if (pGVar2 == (Gfx_VertexBuffer *)0x0) {
    pGVar2 = (Gfx_VertexBuffer *)0x0;
  }
  else {
    pGVar2 = Gfx_VertexBuffer::Gfx_VertexBuffer(pGVar2);
  }
  uVar8 = 1;
  uVar4 = param_4 | 8;
  this->mbr_0x0 = (dword)pGVar2;
  local_4 = 0xffffffff;
  uVar5 = uVar6;
  uVar1 = (*pGVar2->vftptr_0x0->virt_meth_0x505330_4)(pGVar2);
  iVar3 = CONCAT31(extraout_var,uVar1);
  if (extraout_var < 0) {
    if ((undefined4 *)this->mbr_0x0 == (undefined4 *)0x0) {
      ExceptionList = unaff_EDI;
      return iVar3;
    }
    (***(code ***)(undefined4 *)this->mbr_0x0)(1,uVar5,uVar4,param_3,uVar8);
  }
  else {
    piStack_c = (int *)0x0;
    piVar7 = *(int **)(this->mbr_0x0 + 4);
    iVar3 = (**(code **)(*piVar7 + 0x2c))(piVar7,0,0,&piStack_c,0);
    if (-1 < iVar3) {
      piVar7 = piStack_c;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar7 = *param_5;
        param_5 = param_5 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)piVar7 = *(undefined *)param_5;
        param_5 = (int *)((int)param_5 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      piVar7 = *(int **)(this->mbr_0x0 + 4);
      (**(code **)(*piVar7 + 0x30))(piVar7);
      *(undefined **)(this->mbr_0x0 + 0x10) = puStack_8;
      ExceptionList = unaff_EDI;
      return iVar3;
    }
    if ((undefined4 *)this->mbr_0x0 == (undefined4 *)0x0) {
      ExceptionList = unaff_EDI;
      return iVar3;
    }
    (***(code ***)(undefined4 *)this->mbr_0x0)(1);
  }
  this->mbr_0x0 = 0;
  ExceptionList = unaff_EDI;
  return iVar3;
}



int __thiscall
cls_0x506550::meth_0x506660(cls_0x506550 *this,int param_1,uint param_2,dword param_3)

{
  int *piVar1;
  undefined uVar2;
  Gfx_IndexBuffer *pGVar3;
  int3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *unaff_EDI;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puStack_c;
  undefined *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_0063560b;
  puStack_c = (undefined4 *)ExceptionList;
  uVar8 = DAT_0070839c * param_1;
  ExceptionList = &puStack_c;
  this->mbr_0x18 = param_1;
  this->mbr_0x1c = param_3;
  pGVar3 = (Gfx_IndexBuffer *)operator_new(0x10);
  local_4 = (undefined4 *)0x0;
  if (pGVar3 == (Gfx_IndexBuffer *)0x0) {
    pGVar3 = (Gfx_IndexBuffer *)0x0;
  }
  else {
    pGVar3 = Gfx_IndexBuffer::Gfx_IndexBuffer(pGVar3);
  }
  this->mbr_0x4 = (dword)pGVar3;
  uVar11 = 1;
  uVar5 = param_2 | 8;
  local_4 = (undefined4 *)0xffffffff;
  uVar6 = uVar8;
  uVar10 = DAT_007083a4;
  uVar2 = (*pGVar3->vftptr_0x0->virt_meth_0x5054c0_4)(pGVar3);
  iVar4 = CONCAT31(extraout_var,uVar2);
  if (extraout_var < 0) {
    if ((undefined4 *)this->mbr_0x4 == (undefined4 *)0x0) {
      ExceptionList = unaff_EDI;
      return iVar4;
    }
    (***(code ***)(undefined4 *)this->mbr_0x4)(1,uVar6,uVar5,uVar10,uVar11);
  }
  else {
    puStack_c = (undefined4 *)0x0;
    piVar1 = *(int **)(this->mbr_0x4 + 4);
    iVar4 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&puStack_c,0);
    if (-1 < iVar4) {
      puVar7 = local_4;
      puVar9 = puStack_c;
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      piVar1 = *(int **)(this->mbr_0x4 + 4);
      (**(code **)(*piVar1 + 0x30))(piVar1);
      ExceptionList = unaff_EDI;
      return iVar4;
    }
    if ((undefined4 *)this->mbr_0x4 == (undefined4 *)0x0) {
      ExceptionList = unaff_EDI;
      return iVar4;
    }
    (***(code ***)(undefined4 *)this->mbr_0x4)(1);
  }
  this->mbr_0x4 = 0;
  ExceptionList = unaff_EDI;
  return iVar4;
}


