#include "../include/cls_0x5b3bc0.h"

void __thiscall cls_0x5b3bc0::meth_0x5b31f0(cls_0x5b3bc0 *this)

{
  cls_0x5b3180 *pcVar1;
  uint uVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b64b;
  local_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_c;
  if (this->mbr_0x2c != 0) {
    do {
      local_4 = 0xffffffff;
      pcVar1 = (cls_0x5b3180 *)operator_new(8);
      local_4 = 0;
      if (pcVar1 == (cls_0x5b3180 *)0x0) {
        pcVar1 = (cls_0x5b3180 *)0x0;
      }
      else {
        pcVar1 = cls_0x5b3180::cls_0x5b3180(pcVar1,this->mbr_0x30);
      }
      pcVar1->mbr_0x4 = this->mbr_0x28;
      this->mbr_0x28 = (dword)pcVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0x2c);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x5b3bc0::meth_0x5b32c0(cls_0x5b3bc0 *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = (this->cls_0x5b38a0).mbr_0x20;
  uVar3 = *param_2;
  uVar5 = uVar3 & uVar2;
  if ((this->cls_0x5b38a0).mbr_0x24 <= uVar5) {
    uVar5 = uVar5 + (-1 - (uVar2 >> 1));
  }
  puVar1 = (undefined4 *)((this->cls_0x5b38a0).mbr_0x14 + uVar5 * 4);
  puVar4 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar4 == (undefined4 *)puVar1[1]) {
      *param_1 = (this->cls_0x5b38a0).mbr_0x8;
      return;
    }
    if ((int)uVar3 <= (int)puVar4[2]) break;
    puVar4 = (undefined4 *)*puVar4;
  }
  if ((int)uVar3 < (int)puVar4[2]) {
    *param_1 = (this->cls_0x5b38a0).mbr_0x8;
    return;
  }
  *param_1 = puVar4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b3aa8) */

void __thiscall cls_0x5b3bc0::meth_0x5b3990(cls_0x5b3bc0 *this,int *param_1,uint *param_2)

{
  dword *pdVar1;
  undefined4 *puVar2;
  dword dVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  uVar10 = (this->cls_0x5b38a0).mbr_0x24;
  if (uVar10 <= (this->cls_0x5b38a0).mbr_0xc >> 2) {
    dVar3 = (this->cls_0x5b38a0).mbr_0x14;
    if (dVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((this->cls_0x5b38a0).mbr_0x18 - dVar3) >> 2;
    }
    if (uVar10 < iVar6 - 1U) {
      uVar7 = (this->cls_0x5b38a0).mbr_0x20;
      if (uVar7 < uVar10) {
        (this->cls_0x5b38a0).mbr_0x20 = uVar7 * 2 + 1;
      }
    }
    else {
      dVar3 = (this->cls_0x5b38a0).mbr_0x14;
      if (dVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((this->cls_0x5b38a0).mbr_0x18 - dVar3) >> 2;
      }
      (this->cls_0x5b38a0).mbr_0x20 = iVar6 * 2 - 3;
      cls_0x40cc80::meth_0x5b37f0((cls_0x40cc80 *)&(this->cls_0x5b38a0).mbr_0x10,iVar6 * 2 - 1);
    }
    dVar3 = (this->cls_0x5b38a0).mbr_0x14;
    uVar10 = ((this->cls_0x5b38a0).mbr_0x24 - ((this->cls_0x5b38a0).mbr_0x20 >> 1)) - 1;
    puVar11 = *(undefined4 **)(dVar3 + uVar10 * 4);
    if (puVar11 != *(undefined4 **)(dVar3 + uVar10 * 4 + 4)) {
      do {
        if ((puVar11[2] & (this->cls_0x5b38a0).mbr_0x20) == uVar10) {
          puVar12 = (undefined4 *)*puVar11;
        }
        else {
          for (uVar7 = (this->cls_0x5b38a0).mbr_0x24;
              (uVar10 < uVar7 &&
              (dVar3 = (this->cls_0x5b38a0).mbr_0x14,
              *(dword *)(dVar3 + uVar7 * 4) == (this->cls_0x5b38a0).mbr_0x8)); uVar7 = uVar7 - 1) {
            *(undefined4 **)(dVar3 + uVar7 * 4) = puVar11;
          }
          puVar12 = (undefined4 *)*puVar11;
          if (puVar12 == (undefined4 *)(this->cls_0x5b38a0).mbr_0x8) break;
          puVar2 = *(undefined4 **)((this->cls_0x5b38a0).mbr_0x14 + uVar10 * 4);
          for (uVar7 = uVar10;
              (puVar11 == puVar2 &&
              (dVar3 = (this->cls_0x5b38a0).mbr_0x14,
              *(undefined4 *)(dVar3 + uVar7 * 4) = **(undefined4 **)(dVar3 + uVar7 * 4), uVar7 != 0)
              ); uVar7 = uVar7 - 1) {
            puVar2 = *(undefined4 **)(((this->cls_0x5b38a0).mbr_0x14 - 4) + uVar7 * 4);
          }
          puVar2 = (undefined4 *)(this->cls_0x5b38a0).mbr_0x8;
          if (((puVar11 != (undefined4 *)(this->cls_0x5b38a0).mbr_0x8) && (puVar2 != puVar11)) &&
             (puVar4 = (undefined4 *)*puVar11, puVar2 != puVar4)) {
            *(undefined4 **)puVar11[1] = puVar4;
            *(undefined4 **)puVar4[1] = puVar2;
            *(undefined4 **)puVar2[1] = puVar11;
            uVar5 = puVar2[1];
            puVar2[1] = puVar4[1];
            puVar4[1] = puVar11[1];
            puVar11[1] = uVar5;
          }
          *(dword *)((this->cls_0x5b38a0).mbr_0x14 + 4 + (this->cls_0x5b38a0).mbr_0x24 * 4) =
               (this->cls_0x5b38a0).mbr_0x8;
        }
        puVar11 = puVar12;
      } while (puVar12 != *(undefined4 **)((this->cls_0x5b38a0).mbr_0x14 + 4 + uVar10 * 4));
    }
    pdVar1 = &(this->cls_0x5b38a0).mbr_0x24;
    *pdVar1 = *pdVar1 + 1;
  }
  uVar10 = *param_2;
  uVar7 = (this->cls_0x5b38a0).mbr_0x20;
  uVar8 = uVar10 & uVar7;
  if ((this->cls_0x5b38a0).mbr_0x24 <= uVar8) {
    uVar8 = uVar8 + (-1 - (uVar7 >> 1));
  }
  dVar3 = (this->cls_0x5b38a0).mbr_0x14;
  iVar6 = uVar8 * 4;
  puVar11 = *(undefined4 **)(dVar3 + 4 + iVar6);
  if (puVar11 != *(undefined4 **)(dVar3 + iVar6)) {
    do {
      puVar11 = (undefined4 *)puVar11[1];
      if ((int)puVar11[2] <= (int)uVar10) {
        if ((int)uVar10 <= (int)puVar11[2]) {
          *param_1 = (int)puVar11;
          *(undefined *)(param_1 + 1) = 0;
          return;
        }
        puVar11 = (undefined4 *)*puVar11;
        break;
      }
    } while (puVar11 != *(undefined4 **)(iVar6 + (this->cls_0x5b38a0).mbr_0x14));
  }
  iVar9 = FUN_005b3290(puVar11,puVar11[1],param_2);
  FUN_005b33d0(&(this->cls_0x5b38a0).mbr_0x4,1);
  puVar11[1] = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  puVar12 = *(undefined4 **)(iVar6 + (this->cls_0x5b38a0).mbr_0x14);
  iVar9 = puVar11[1];
  while ((puVar11 == puVar12 &&
         (*(int *)(iVar6 + (this->cls_0x5b38a0).mbr_0x14) = iVar9, uVar8 != 0))) {
    uVar8 = uVar8 - 1;
    iVar6 = uVar8 * 4;
    puVar12 = *(undefined4 **)(iVar6 + (this->cls_0x5b38a0).mbr_0x14);
  }
  *param_1 = iVar9;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



cls_0x5b3bc0 * __thiscall cls_0x5b3bc0::cls_0x5b3bc0(cls_0x5b3bc0 *this,dword param_1,int *param_2)

{
  int **ppiVar1;
  int *piVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cls_0x5b38a0::cls_0x5b38a0(&this->cls_0x5b38a0,(undefined *)&param_2);
  local_4 = 0;
  this->mbr_0x30 = (dword)param_2;
  this->mbr_0x2c = param_1;
  this->mbr_0x28 = 0;
  meth_0x5b31f0(this);
  ppiVar1 = (int **)(this->cls_0x5b38a0).mbr_0x8;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&(this->cls_0x5b38a0).mbr_0x4,&param_2,piVar2,(int *)ppiVar1);
  param_2 = (int *)(this->cls_0x5b38a0).mbr_0x8;
  cls_0x5b3940::meth_0x5b3940
            ((cls_0x5b3940 *)&(this->cls_0x5b38a0).mbr_0x10,(undefined4 *)0x9,&param_2);
  (this->cls_0x5b38a0).mbr_0x20 = 1;
  (this->cls_0x5b38a0).mbr_0x24 = 1;
  ExceptionList = local_c;
  return this;
}



undefined4 __thiscall cls_0x5b3bc0::meth_0x5b3cf0(cls_0x5b3bc0 *this)

{
  uint *puVar1;
  int *piVar2;
  uint local_10;
  undefined4 local_c;
  int local_8 [2];
  
  if (this->mbr_0x28 == 0) {
    meth_0x5b31f0(this);
  }
  puVar1 = (uint *)this->mbr_0x28;
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  this->mbr_0x28 = puVar1[1];
  local_10 = *puVar1;
  local_c = 0;
  piVar2 = (int *)meth_0x5b3990(this,local_8,&local_10);
  *(uint **)(*piVar2 + 0xc) = puVar1;
  return *puVar1;
}



void __thiscall cls_0x5b3bc0::meth_0x5b3d50(cls_0x5b3bc0 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int *piVar3;
  dword local_10;
  undefined4 local_c;
  int local_8 [2];
  
  uVar2 = param_1;
  meth_0x5b32c0(this,&local_10,&param_1);
  if (local_10 != (this->cls_0x5b38a0).mbr_0x8) {
    dVar1 = *(dword *)(local_10 + 0xc);
    local_10 = uVar2;
    local_c = 0;
    piVar3 = (int *)meth_0x5b3990(this,local_8,&local_10);
    *(undefined4 *)(*piVar3 + 0xc) = 0;
    *(dword *)(dVar1 + 4) = this->mbr_0x28;
    this->mbr_0x28 = dVar1;
  }
  return;
}


