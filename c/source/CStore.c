#include "../include/CStore.h"

void __thiscall CStore::meth_0x5a1f10(CStore *this)

{
  int **ppiVar1;
  int *piVar2;
  CStore *local_4;
  
  if ((int **)this->mbr_0x34 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x34;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x34) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x34);
  }
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x30,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x30,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



CStore * __thiscall CStore::~CStore(CStore *this)

{
  int **ppiVar1;
  int *piVar2;
  CStore *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ad06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &CStore__vftable_6a37ac_006a37ac;
  local_4 = 1;
  local_10 = this;
  meth_0x5a1f10(this);
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x30,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x34);
}



int * __thiscall CStore::virt_meth_0x5a21b0(CStore *this,byte param_1)

{
  ~CStore(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



CStore * __thiscall CStore::CStore(CStore *this)

{
  int **ppiVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  int *piVar5;
  CStore *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ad06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CStore__vftable_6a37ac_006a37ac;
  piVar5 = (int *)0x0;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  local_10 = this;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x34 = dVar3;
  this->mbr_0x38 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  pcVar2 = "";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4,"",(uint)(pcVar4 + -0x64d7d8));
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)0x0) {
    piVar5 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x30,(int **)&local_10,piVar5,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



void __thiscall CStore::virt_meth_0x5a24a0(CStore *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  dword dVar5;
  CStoreItem *pCVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint unaff_EDI;
  int local_34;
  CStoreItem *local_30;
  void *local_2c;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ad63;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  meth_0x5a1f10(this);
  puVar2 = param_1;
  pvVar3 = (void *)ResourceSystem::Demand(DAT_00707da8,param_1,(int *)0x1,unaff_EDI);
  if (pvVar3 != (void *)0x0) {
    puVar4 = puVar2;
    do {
      cVar1 = *(char *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (cVar1 != '\0');
    local_2c = pvVar3;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&this->mbr_0x4,(char *)puVar2,(int)puVar4 - ((int)puVar2 + 1));
    param_1 = *(undefined4 **)((int)pvVar3 + 0x2c);
    dVar5 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x20 = dVar5;
    dVar5 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x24 = dVar5;
    dVar5 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x28 = dVar5;
    dVar5 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x2c = dVar5;
    local_34 = 0;
    if (0 < (int)dVar5) {
      do {
        local_30 = (CStoreItem *)operator_new(0x34);
        local_4 = 0;
        if (local_30 == (CStoreItem *)0x0) {
          pCVar6 = (CStoreItem *)0x0;
        }
        else {
          pCVar6 = CStoreItem::CStoreItem(local_30);
        }
        local_4 = 0xffffffff;
        local_30 = pCVar6;
        pcVar7 = (char *)FUN_005a1e60((char **)&param_1);
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        pcVar9 = pcVar7;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_28,pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
        local_4 = 1;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&pCVar6->mbr_0x4,local_28,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        dVar5 = FUN_005a1e50((int *)&param_1);
        pCVar6->mbr_0x20 = dVar5;
        dVar5 = FUN_005a1e50((int *)&param_1);
        pCVar6->mbr_0x24 = dVar5;
        dVar5 = FUN_005a1e50((int *)&param_1);
        pCVar6->mbr_0x28 = dVar5;
        dVar5 = FUN_005a1e50((int *)&param_1);
        pCVar6->mbr_0x2c = dVar5;
        dVar5 = FUN_005a1e50((int *)&param_1);
        pCVar6->mbr_0x28 = dVar5;
        dVar5 = this->mbr_0x34;
        iVar8 = FUN_00433760(dVar5,*(undefined4 *)(dVar5 + 4),&local_30);
        cls_0x5a21d0::meth_0x5a21d0((cls_0x5a21d0 *)&this->mbr_0x30,1);
        *(int *)(dVar5 + 4) = iVar8;
        **(int **)(iVar8 + 4) = iVar8;
        local_34 = local_34 + 1;
        pvVar3 = local_2c;
      } while (local_34 < (int)this->mbr_0x2c);
    }
    ResourceSystem::Release(DAT_00707da8,pvVar3);
  }
  ExceptionList = local_c;
  return;
}


#include "../include/CStore.h"
