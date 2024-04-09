#include "../include/Inventory.h"

undefined __thiscall Inventory::virt_meth_0x436230(Inventory *this)

{
  return 0;
}



void __thiscall Inventory::virt_meth_0x55fcd0(Inventory *this,int *param_1)

{
  int iVar1;
  
  FUN_0054ed50(param_1,(int *)this->mbr_0x4);
  iVar1 = GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x4);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x3c))(*(undefined4 *)(iVar1 + 0x1ec));
  }
  return;
}



void __thiscall Inventory::virt_meth_0x55fd10(Inventory *this)

{
  int *in_stack_00000004;
  
  FUN_0054ed50(in_stack_00000004,(int *)0x0);
  (**(code **)(*in_stack_00000004 + 0x3c))(0);
  return;
}



undefined __thiscall Inventory::virt_meth_0x55fd30(Inventory *this,int param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0xc;
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0xc) {
    while (puVar2[2] != param_1) {
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)this->mbr_0xc) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined __thiscall Inventory::virt_meth_0x55fd60(Inventory *this,int param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0xc;
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0xc) {
    while (*(int *)(puVar2[2] + 0x1dc) != param_1) {
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)this->mbr_0xc) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



void __thiscall Inventory::virt_meth_0x55fee0(Inventory *this,int *param_1)

{
  int **ppiVar1;
  int **_Memory;
  
  ppiVar1 = (int **)this->mbr_0xc;
  _Memory = ppiVar1;
  if (ppiVar1 != (int **)0x0) {
    _Memory = (int **)*ppiVar1;
  }
  if (_Memory != ppiVar1) {
    do {
      if (_Memory[2] == param_1) break;
      _Memory = (int **)*_Memory;
    } while (_Memory != ppiVar1);
    if (_Memory != ppiVar1) {
      if (_Memory != (int **)this->mbr_0xc) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      (*this->vftptr_0x0->virt_meth_0x55fd10_52)(this);
    }
  }
  return;
}



uint __thiscall Inventory::virt_meth_0x55ff40(Inventory *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint3 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  puVar5 = (undefined4 *)this->mbr_0xc;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar5;
  }
  if (puVar5 == (undefined4 *)this->mbr_0xc) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  do {
    iVar7 = puVar5[2];
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      pbVar8 = (byte *)(param_1 + 4);
    }
    else {
      pbVar8 = *(byte **)(param_1 + 4);
    }
    uVar2 = *(uint *)(iVar7 + 0x1d4);
    uVar3 = (uint3)(uVar1 >> 8);
    if (uVar2 == 0) {
LAB_0055ffbd:
      if ((uVar1 <= uVar2) && (uVar2 == uVar1)) {
        return CONCAT31(uVar3,1);
      }
    }
    else {
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar1;
      }
      if (*(uint *)(iVar7 + 0x1d8) < 0x10) {
        pbVar6 = (byte *)(iVar7 + 0x1c4);
      }
      else {
        pbVar6 = *(byte **)(iVar7 + 0x1c4);
      }
      bVar9 = false;
      iVar7 = 0;
      bVar10 = true;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar9 = *pbVar6 < *pbVar8;
        bVar10 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar7 == 0) goto LAB_0055ffbd;
    }
    puVar5 = (undefined4 *)*puVar5;
    if (puVar5 == (undefined4 *)this->mbr_0xc) {
      return (uint)uVar3 << 8;
    }
  } while( true );
}



Inventory * __thiscall Inventory::Inventory(Inventory *this)

{
  dword dVar1;
  
  this->vftptr_0x0 = &Inventory__vftable_6956a4_006956a4;
  dVar1 = FUN_0056e0b0();
  this->mbr_0xc = dVar1;
  this->mbr_0x10 = 0;
  this->mbr_0x4 = 0;
  return this;
}



void __thiscall Inventory::meth_0x560020(Inventory *this)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  Inventory *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063834b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Inventory__vftable_6956a4_006956a4;
  piVar3 = (int *)0x0;
  local_4 = 0;
  if ((int **)this->mbr_0xc != (int **)0x0) {
    piVar3 = *(int **)this->mbr_0xc;
  }
  local_10 = this;
  if (piVar3 != (int *)this->mbr_0xc) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar3 != (int *)this->mbr_0xc) {
        *(int **)piVar3[1] = piVar1;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar3);
      }
      net::critical_section::meth_0x551b60((critical_section *)piVar3[2]);
      piVar3 = piVar1;
    } while (piVar1 != (int *)this->mbr_0xc);
  }
  ppiVar2 = (int **)this->mbr_0xc;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x8,(int **)&local_10,piVar3,(int *)ppiVar2)
  ;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xc);
}



int * __thiscall Inventory::virt_meth_0x5600e0(Inventory *this,byte param_1)

{
  meth_0x560020(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall Inventory::virt_meth_0x560100(Inventory *this,int param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if (this->mbr_0x4 != *(dword *)(param_1 + 0x2dc)) {
    if (*(dword *)(param_1 + 0x2dc) != 0) {
      iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
      (**(code **)(**(int **)(iVar3 + 0x168) + 8))(iVar2);
    }
    dVar1 = this->mbr_0xc;
    iVar3 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&param_1);
    cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&this->mbr_0x8,1);
    iVar2 = param_1;
    *(int *)(dVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    (*this->vftptr_0x0->virt_meth_0x55fcd0_48)(this,(int *)param_1);
    Entity::meth_0x568220((Entity *)iVar2);
  }
  return;
}


#include "../include/Inventory.h"
