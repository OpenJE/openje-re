#include "../include/CEngineInterface.h"

void __thiscall CEngineInterface::meth_0x416a70(CEngineInterface *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062bf4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(CActionbarInterface__vftable_6505b8 **)
   (*(int *)(*(int *)&this[-0xe].Interface.field_0x12 + 4) + -0x29c + (int)this) =
       &CActionbarInterface__vftable_6505b8_006505b8;
  iVar1 = *(int *)(*(int *)&this[-0xe].Interface.field_0x12 + 4);
  *(int *)(iVar1 + -0x2a0 + (int)this) = iVar1 + -0x29c;
  puVar2 = *(undefined4 **)((int)&this[-0xb].Interface.mbr_0xc + 3);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = *(undefined4 **)&this[-0xb].Interface.field_0x13;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  puVar2 = *(undefined4 **)&this[-0xb].Interface.field_0x17;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)((int)&this[-0xe].Interface.mbr_0x18 + 2));
  ExceptionList = local_c;
  return;
}



int * __thiscall CEngineInterface::meth_0x417330(CEngineInterface *this,byte param_1)

{
  undefined *puVar1;
  
  puVar1 = &this[-0xe].Interface.field_0x12;
  meth_0x416a70(this);
  meth_0x580350(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)puVar1);
  }
  return (int *)puVar1;
}



void __thiscall CEngineInterface::meth_0x425450(CEngineInterface *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c906;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(CNASInterface__vftable_651b80 **)
   (*(int *)(*(int *)((int)&this[-2].Interface.mbr_0x28 + 2) + 4) + -0x38 + (int)this) =
       &CNASInterface__vftable_651b80_00651b80;
  iVar1 = *(int *)(*(int *)((int)&this[-2].Interface.mbr_0x28 + 2) + 4);
  *(int *)(iVar1 + -0x3c + (int)this) = iVar1 + -0x38;
  puVar2 = *(undefined4 **)&this[-1].Interface.field_0x1;
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  if (0xf < *(uint *)&this[-1].Interface.field_0x21) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)&this[-1].Interface.mbr_0xc + 1));
  }
  *(undefined4 *)&this[-1].Interface.field_0x21 = 0xf;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x1c + 1) = 0;
  *(undefined *)((int)&this[-1].Interface.mbr_0xc + 1) = 0;
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)&this[-1].Interface.field_0x1);
  ExceptionList = local_c;
  return;
}



void __thiscall CEngineInterface::meth_0x42ca70(CEngineInterface *this)

{
  undefined4 *puVar1;
  cls_0x4296c0 *this_00;
  cls_0x42a710 *this_01;
  void *pvVar2;
  int iVar3;
  cls_0x42a710 **ppcVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d122;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CCharacterGenerationInterface__vftable_65286c **)
   (*(int *)(*(int *)((int)&this[-7].Interface.mbr_0x2c + 3) + 4) + -0x128 + (int)this) =
       &CCharacterGenerationInterface__vftable_65286c_0065286c;
  iVar3 = *(int *)(*(int *)((int)&this[-7].Interface.mbr_0x2c + 3) + 4);
  *(int *)(iVar3 + -300 + (int)this) = iVar3 + -0x128;
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0xc + 2);
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&this[-6].Interface.field_0x12;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&this[-6].Interface.field_0x16;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x18 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x1c + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)&this[-6].Interface.field_0x22;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x24 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x28 + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x2c + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  this_00 = *(cls_0x4296c0 **)&this[-3].Interface.field_0x23;
  if (this_00 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  puVar1 = *(undefined4 **)((int)&this[-3].Interface.mbr_0x24 + 3);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = *(undefined4 **)((int)&this[-2].Interface.mbr_0xc + 2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)((int)&this[-2].Interface.mbr_0xc + 2) = 0;
  }
  iVar3 = *(int *)&this[-6].Interface.field_0x2;
  if (iVar3 != 0) {
    (***(code ***)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3))(1);
  }
  ppcVar4 = (cls_0x42a710 **)&this[-5].Interface.field_0x1;
  iVar3 = 7;
  do {
    this_01 = *ppcVar4;
    if (this_01 != (cls_0x42a710 *)0x0) {
      cls_0x42a710::meth_0x42a710(this_01);
                    /* WARNING: Subroutine does not return */
      _free(this_01);
    }
    ppcVar4 = ppcVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pvVar2 = *(void **)&this[-1].Interface.field_0x15;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)&this[-1].Interface.field_0x15 = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x18 + 1) = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x1c + 1) = 0;
  pvVar2 = *(void **)((int)&this[-1].Interface.mbr_0x4 + 1);
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x4 + 1) = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x8 + 1) = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0xc + 1) = 0;
  if (0xf < this[-4].Interface.mbr_0x4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-5].Interface.field_0x21);
  }
  this[-4].Interface.mbr_0x4 = 0xf;
  *(undefined4 *)&this[-4].Interface = 0;
  this[-5].Interface.field_0x21 = 0;
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)((int)&this[-6].Interface.mbr_0x4 + 2));
  ExceptionList = pvStack_c;
  return;
}



void __thiscall CEngineInterface::meth_0x4338e0(CEngineInterface *this)

{
  int iVar1;
  
  *(CEscapeMenuInterface__vftable_653e3c **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4) + -0xc + (int)this) =
       &CEscapeMenuInterface__vftable_653e3c_00653e3c;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4);
  *(int *)(iVar1 + -0x10 + (int)this) = iVar1 + -0xc;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  return;
}



int * __thiscall CEngineInterface::meth_0x433980(CEngineInterface *this,byte param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)&this[-1].Interface.mbr_0x24 + 1);
  meth_0x4338e0(this);
  meth_0x580350(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540(piVar1);
  }
  return piVar1;
}



void __thiscall CEngineInterface::meth_0x434340(CEngineInterface *this)

{
  undefined *this_00;
  int **ppiVar1;
  int *piVar2;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d6ca;
  pvStack_c = ExceptionList;
  this_00 = &this[-4].Interface.field_0x14;
  ExceptionList = &pvStack_c;
  *(CFeedbackInterface__vftable_654304 **)
   (*(int *)(*(int *)&this[-4].Interface.field_0x14 + 4) + -0xb0 + (int)this) =
       &CFeedbackInterface__vftable_654304_00654304;
  *(int *)(*(int *)(*(int *)this_00 + 4) + -0xb4 + (int)this) =
       *(int *)(*(int *)this_00 + 4) + -0xb0;
  local_4 = 4;
  local_10 = this;
  cls_0x558740::meth_0x434250((cls_0x558740 *)this_00);
  cls_0x558740::meth_0x4342c0((cls_0x558740 *)this_00);
  ppiVar1 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this[-1].Interface.field_0x21,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-1].Interface.mbr_0x24 + 1));
}



void __thiscall CEngineInterface::meth_0x4353c0(CEngineInterface *this)

{
  undefined *puVar1;
  CEngineInterface *this_00;
  int iVar2;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062d891;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)&this[-0x47].Interface.field_0x3;
  puVar1 = &this[-0x47].Interface.field_0x3;
  ExceptionList = &pvStack_c;
  *(GameCSMenuInterface__vftable_6547a8 **)((int)&this[-0x8d].Interface.mbr_0x18 + 1) =
       &GameCSMenuInterface__vftable_6547a8_006547a8;
  *(undefined ***)(*(int *)(iVar2 + 4) + -0xd94 + (int)this) = &PTR_virt_meth_0x435800_0065478c;
  iVar2 = *(int *)(*(int *)puVar1 + 4);
  *(int *)(iVar2 + -0xd98 + (int)this) = iVar2 + -0xd94;
  this_00 = (CEngineInterface *)((int)&this[-2].Interface.mbr_0x28 + 2);
  local_4 = 1;
  meth_0x435d50(this_00);
  meth_0x580350(this_00);
  local_4 = local_4 & 0xffffff00;
  meth_0x568a70((CEngineInterface *)((int)&this[-0x47].Interface.mbr_0x4 + 3));
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)
                ((-(uint)(this != (CEngineInterface *)0x1ae4) & (uint)puVar1) + 8));
  ExceptionList = pvStack_c;
  return;
}



void __thiscall CEngineInterface::meth_0x435d50(CEngineInterface *this)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d9d0;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)&this[-1].Interface.mbr_0x28 + 1);
  piVar1 = (int *)((int)&this[-1].Interface.mbr_0x28 + 1);
  ExceptionList = &pvStack_c;
  *(GameCSSkillMenuInterface__vftable_654c18 **)((int)&this[-0x46].Interface.mbr_0xc + 2) =
       &GameCSSkillMenuInterface__vftable_654c18_00654c18;
  *(GameCSSkillMenuInterface__vftable_654bfc **)(*(int *)(iVar2 + 4) + -8 + (int)this) =
       &GameCSSkillMenuInterface__vftable_654bfc_00654bfc;
  iVar2 = *(int *)(*piVar1 + 4);
  *(int *)(iVar2 + -0xc + (int)this) = iVar2 + -8;
  local_4 = 0;
  meth_0x568a70((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)
                ((-(uint)(this != (CEngineInterface *)0xd58) & (uint)piVar1) + 8));
  ExceptionList = pvStack_c;
  return;
}



void __thiscall CEngineInterface::meth_0x438e80(CEngineInterface *this)

{
  undefined *puVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062dd00;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  meth_0x593530((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  local_4 = 0xffffffff;
  if (this == (CEngineInterface *)0x27c) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)((int)&this[-1].Interface.mbr_0x28 + 1);
  }
  meth_0x4395f0((CEngineInterface *)(puVar1 + 8));
  ExceptionList = pvStack_c;
  return;
}



void __thiscall CEngineInterface::meth_0x438ee0(CEngineInterface *this)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062dd40;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)&this[-1].Interface.mbr_0x28 + 1);
  piVar1 = (int *)((int)&this[-1].Interface.mbr_0x28 + 1);
  ExceptionList = &pvStack_c;
  *(CGameFloatingTextInterface__vftable_655d88 **)((int)&this[-0x1212].Interface.mbr_0x1c + 2) =
       &CGameFloatingTextInterface__vftable_655d88_00655d88;
  *(CGameFloatingTextInterface__vftable_655d6c **)(*(int *)(iVar2 + 4) + -8 + (int)this) =
       &CGameFloatingTextInterface__vftable_655d6c_00655d6c;
  iVar2 = *(int *)(*piVar1 + 4);
  *(int *)(iVar2 + -0xc + (int)this) = iVar2 + -8;
  local_4 = 0;
  meth_0x58ffe0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)
                ((-(uint)(this != (CEngineInterface *)0x37554) & (uint)piVar1) + 8));
  ExceptionList = pvStack_c;
  return;
}



void __thiscall CEngineInterface::meth_0x4395f0(CEngineInterface *this)

{
  int iVar1;
  
  *(CGameInterface__vftable_6561cc **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x28 + 1) + 4) + -8 + (int)this) =
       &CGameInterface__vftable_6561cc_006561cc;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x28 + 1) + 4);
  *(int *)(iVar1 + -0xc + (int)this) = iVar1 + -8;
  return;
}



void __thiscall CEngineInterface::meth_0x43b000(CEngineInterface *this)

{
  cls_0x4296c0 *this_00;
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  void **ppvVar5;
  int iStack_14;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e0c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CInventoryInterface__vftable_656c58 **)
   (*(int *)(*(int *)((int)&this[-0xf].Interface.mbr_0x1c + 3) + 4) + -0x2c0 + (int)this) =
       &CInventoryInterface__vftable_656c58_00656c58;
  iVar3 = *(int *)(*(int *)((int)&this[-0xf].Interface.mbr_0x1c + 3) + 4);
  *(int *)(iVar3 + -0x2c4 + (int)this) = iVar3 + -0x2c0;
  this_00 = *(cls_0x4296c0 **)&this[-1].Interface.field_0x1;
  local_4 = 1;
  local_10 = this;
  if (this_00 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  puVar1 = *(undefined4 **)((int)&this[-1].Interface.mbr_0x4 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)((int)&this[-1].Interface.mbr_0x4 + 1) = 0;
  }
  ppvVar5 = (void **)&this[-10].Interface.field_0x16;
  iVar3 = 6;
  do {
    _Memory = *ppvVar5;
    if (_Memory != (void *)0x0) {
      FUN_004e2020((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    ppvVar5 = ppvVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ppiVar4 = (int **)((int)&this[-10].Interface.mbr_0x2c + 2);
  iStack_14 = 0x21;
  do {
    iVar3 = 3;
    do {
      if (*ppiVar4 != (int *)0x0) {
        puVar1 = (undefined4 *)**ppiVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        piVar2 = *ppiVar4;
        if (piVar2 != (int *)0x0) {
          FUN_004e2020((int)piVar2);
                    /* WARNING: Subroutine does not return */
          _free(piVar2);
        }
        *ppiVar4 = (int *)0x0;
      }
      ppiVar4 = ppiVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iStack_14 = iStack_14 + -1;
    if (iStack_14 == 0) {
      puVar1 = *(undefined4 **)((int)&this[-10].Interface.mbr_0x8 + 2);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      ppiVar4 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
      if (ppiVar4 == (int **)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *ppiVar4;
      }
      GUI::Interface::meth_0x4b9d60
                ((Interface *)&this[-1].Interface.field_0x21,(int **)&local_10,piVar2,(int *)ppiVar4
                );
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)&this[-1].Interface.mbr_0x24 + 1));
    }
  } while( true );
}



void __thiscall CEngineInterface::meth_0x440730(CEngineInterface *this)

{
  int iVar1;
  
  *(CLoadingBarInterface__vftable_657d1c **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4) + -0xc + (int)this) =
       &CLoadingBarInterface__vftable_657d1c_00657d1c;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4);
  *(int *)(iVar1 + -0x10 + (int)this) = iVar1 + -0xc;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  return;
}



void __thiscall CEngineInterface::meth_0x440910(CEngineInterface *this)

{
  int iVar1;
  
  *(CMainmenuInterface__vftable_65816c **)
   (*(int *)(*(int *)&this[-1].Interface.field_0x21 + 4) + -0x10 + (int)this) =
       &CMainmenuInterface__vftable_65816c_0065816c;
  iVar1 = *(int *)(*(int *)&this[-1].Interface.field_0x21 + 4);
  *(int *)(iVar1 + -0x14 + (int)this) = iVar1 + -0x10;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x28 + 1));
  return;
}



void __thiscall CEngineInterface::meth_0x441320(CEngineInterface *this)

{
  undefined *this_00;
  int iVar1;
  CSound *pCVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(CMessageBoxInterface__vftable_65863c **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x8 + 1) + 4) + -0x28 + (int)this) =
       &CMessageBoxInterface__vftable_65863c_0065863c;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x8 + 1) + 4);
  *(int *)(iVar1 + -0x2c + (int)this) = iVar1 + -0x28;
  pCVar2 = *(CSound **)((int)&this[-1].Interface.mbr_0xc + 1);
  local_4 = 0;
  if (pCVar2 != (CSound *)0x0) {
    CSound::~CSound(pCVar2);
                    /* WARNING: Subroutine does not return */
    _free(pCVar2);
  }
  this_00 = &this[-1].Interface.field_0x11;
  pCVar2 = *(CSound **)this_00;
  if (pCVar2 != (CSound *)0x0) {
    CSound::~CSound(pCVar2);
                    /* WARNING: Subroutine does not return */
    _free(pCVar2);
  }
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)this_00);
  ExceptionList = local_c;
  return;
}



void __thiscall CEngineInterface::meth_0x442290(CEngineInterface *this)

{
  int iVar1;
  
  *(CMiniMapInterface__vftable_658b5c **)
   (*(int *)(*(int *)((int)&this[-2].Interface.mbr_0x2c + 2) + 4) + -0x34 + (int)this) =
       &CMiniMapInterface__vftable_658b5c_00658b5c;
  iVar1 = *(int *)(*(int *)((int)&this[-2].Interface.mbr_0x2c + 2) + 4);
  *(int *)(iVar1 + -0x38 + (int)this) = iVar1 + -0x34;
  if (0xf < *(uint *)((int)&this[-1].Interface.mbr_0x24 + 1)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].Interface.field_0x11);
  }
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x24 + 1) = 0xf;
  *(undefined4 *)&this[-1].Interface.field_0x21 = 0;
  this[-1].Interface.field_0x11 = 0;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x4 + 1));
  return;
}



void __thiscall CEngineInterface::meth_0x442bc0(CEngineInterface *this)

{
  int iVar1;
  
  *(COptionsInterface__vftable_658fcc **)
   (*(int *)(*(int *)((int)&this[-2].Interface.mbr_0x2c + 2) + 4) + -0x34 + (int)this) =
       &COptionsInterface__vftable_658fcc_00658fcc;
  iVar1 = *(int *)(*(int *)((int)&this[-2].Interface.mbr_0x2c + 2) + 4);
  *(int *)(iVar1 + -0x38 + (int)this) = iVar1 + -0x34;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x4 + 1));
  return;
}



void __thiscall CEngineInterface::meth_0x444190(CEngineInterface *this)

{
  int iVar1;
  undefined *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062eb04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(COptionsGameInterface__vftable_659604 **)
   (*(int *)(*(int *)((int)&this[-6].Interface.mbr_0x18 + 2) + 4) + -0x10c + (int)this) =
       &COptionsGameInterface__vftable_659604_00659604;
  iVar1 = *(int *)(*(int *)((int)&this[-6].Interface.mbr_0x18 + 2) + 4);
  *(int *)(iVar1 + -0x110 + (int)this) = iVar1 + -0x10c;
  local_4 = 3;
  _eh_vector_destructor_iterator_
            ((void *)((int)&this[-2].Interface.mbr_0x1c + 2),8,8,OptionScrollBar::~OptionScrollBar);
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_
            ((void *)((int)&this[-2].Interface.mbr_0xc + 2),0x10,1,OptionCheckBox::~OptionCheckBox);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(&this[-4].Interface.field_0x10,0x10,6,OptionSwitch::~OptionSwitch)
  ;
  this_00 = &this[-6].Interface.field_0x22;
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(this_00,0x10,5,OptionDial::~OptionDial);
  local_4 = 0xffffffff;
  meth_0x4395f0((CEngineInterface *)this_00);
  ExceptionList = local_c;
  return;
}



void __thiscall CEngineInterface::meth_0x445740(CEngineInterface *this)

{
  Interface *this_00;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ecd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(COptionsHotKeysInterface__vftable_659db0 **)
   (*(int *)(*(int *)&this[-9].Interface.field_0x21 + 4) + -0x198 + (int)this) =
       &COptionsHotKeysInterface__vftable_659db0_00659db0;
  iVar1 = *(int *)(*(int *)&this[-9].Interface.field_0x21 + 4);
  *(int *)(iVar1 + -0x19c + (int)this) = iVar1 + -0x198;
  ppiVar2 = *(int ***)((int)&this[-9].Interface.mbr_0x2c + 1);
  this_00 = (Interface *)((int)&this[-9].Interface.mbr_0x28 + 1);
  local_4 = 4;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  local_10 = this;
  if (piVar3 != *(int **)((int)&this[-9].Interface.mbr_0x2c + 1)) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)&this[-9].Interface.mbr_0x2c + 1));
  }
  ppiVar2 = *(int ***)((int)&this[-9].Interface.mbr_0x2c + 1);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60(this_00,(int **)&local_10,piVar3,(int *)ppiVar2);
  HotKeyWindowFormat::~HotKeyWindowFormat
            ((HotKeyWindowFormat *)((int)&this[-3].Interface.mbr_0xc + 3));
  HotKeyWindowFormat::~HotKeyWindowFormat((HotKeyWindowFormat *)&this[-6].Interface.field_0x22);
  HotKeyWindowFormat::~HotKeyWindowFormat((HotKeyWindowFormat *)&this[-8].Interface.mbr_0x4);
  ppiVar2 = *(int ***)((int)&this[-9].Interface.mbr_0x2c + 1);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60(this_00,(int **)&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-9].Interface.mbr_0x2c + 1));
}



void __thiscall CEngineInterface::meth_0x445880(CEngineInterface *this,uint param_1)

{
  dword dVar1;
  char *pcVar2;
  char *pcVar3;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ece8;
  local_c = ExceptionList;
  dVar1 = (this->Interface).mbr_0x8;
  if (0x3fffffff - dVar1 < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar2 = "list<T> too long";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"list<T> too long",(uint)(pcVar3 + -0x647948));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  (this->Interface).mbr_0x8 = dVar1 + param_1;
  return;
}



void __thiscall CEngineInterface::meth_0x4486e0(CEngineInterface *this)

{
  undefined *this_00;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f1ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(COptionsLoadInterface__vftable_65a6d8 **)
   (*(int *)(*(int *)((int)&this[-3].Interface.mbr_0x1c + 3) + 4) + -0x74 + (int)this) =
       &COptionsLoadInterface__vftable_65a6d8_0065a6d8;
  iVar1 = *(int *)(*(int *)((int)&this[-3].Interface.mbr_0x1c + 3) + 4);
  *(int *)(iVar1 + -0x78 + (int)this) = iVar1 + -0x74;
  ppiVar2 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  this_00 = &this[-1].Interface.field_0x21;
  local_4 = 3;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  local_10 = this;
  if (piVar3 != *(int **)((int)&this[-1].Interface.mbr_0x24 + 1)) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)&this[-1].Interface.mbr_0x24 + 1));
  }
  ppiVar2 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_10,piVar3,(int *)ppiVar2);
  ppiVar2 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-1].Interface.mbr_0x24 + 1));
}



void __thiscall CEngineInterface::meth_0x449100(CEngineInterface *this)

{
  int iVar1;
  
  *(COptionsMultiplayerInterface__vftable_65ab94 **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4) + -0xc + (int)this) =
       &COptionsMultiplayerInterface__vftable_65ab94_0065ab94;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4);
  *(int *)(iVar1 + -0x10 + (int)this) = iVar1 + -0xc;
  meth_0x4395f0((CEngineInterface *)((int)&this[-1].Interface.mbr_0x2c + 1));
  return;
}



void __thiscall CEngineInterface::meth_0x449340(CEngineInterface *this)

{
  int iVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f37e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(COptionsVideoInterface__vftable_65afec **)
   (*(int *)(*(int *)((int)&this[-5].Interface.mbr_0x28 + 1) + 4) + -0xcc + (int)this) =
       &COptionsVideoInterface__vftable_65afec_0065afec;
  iVar1 = *(int *)(*(int *)((int)&this[-5].Interface.mbr_0x28 + 1) + 4);
  *(int *)(iVar1 + -0xd0 + (int)this) = iVar1 + -0xcc;
  local_4 = 2;
  _eh_vector_destructor_iterator_
            ((void *)((int)&this[-2].Interface.mbr_0x1c + 2),8,8,OptionScrollBar::~OptionScrollBar);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(&this[-4].Interface.mbr_0x20,0x10,6,OptionSwitch::~OptionSwitch);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(this + -4,0x10,2,OptionDial::~OptionDial);
  local_4 = 0xffffffff;
  meth_0x4395f0(this + -4);
  ExceptionList = local_c;
  return;
}



void __thiscall CEngineInterface::meth_0x44a560(CEngineInterface *this)

{
  int iVar1;
  
  *(CPipBoyAddNoteInterface__vftable_65bb74 **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x18 + 1) + 4) + -0x18 + (int)this) =
       &CPipBoyAddNoteInterface__vftable_65bb74_0065bb74;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x18 + 1) + 4);
  *(int *)(iVar1 + -0x1c + (int)this) = iVar1 + -0x18;
  meth_0x4395f0((CEngineInterface *)&this[-1].Interface.field_0x21);
  return;
}



void __thiscall CEngineInterface::meth_0x455b90(CEngineInterface *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062fc4a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CPipBoyInterface__vftable_65bdfc **)
   (*(int *)(*(int *)((int)&this[-10].Interface.mbr_0x8 + 2) + 4) + -0x1e0 + (int)this) =
       &CPipBoyInterface__vftable_65bdfc_0065bdfc;
  iVar1 = *(int *)(*(int *)((int)&this[-10].Interface.mbr_0x8 + 2) + 4);
  *(int *)(iVar1 + -0x1e4 + (int)this) = iVar1 + -0x1e0;
  pvVar2 = (void *)this[-8].Interface.mbr_0x1c;
  local_4 = 7;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  puVar3 = *(undefined4 **)((int)&this[-6].Interface.mbr_0x8 + 2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)((int)&this[-6].Interface.mbr_0xc + 2);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)((int)&this[-1].Interface.mbr_0x1c + 1);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)&this[-1].Interface.field_0x21;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)((int)&this[-1].Interface.mbr_0x24 + 1);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = *(undefined4 **)((int)&this[-1].Interface.mbr_0x28 + 1);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  iVar1 = *(int *)((int)&this[-3].Interface.mbr_0x2c + 3);
  if (iVar1 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(iVar1);
  }
  if (0xf < *(uint *)&this[-2].Interface.field_0x22) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)&this[-2].Interface.mbr_0xc + 2));
  }
  *(undefined4 *)&this[-2].Interface.field_0x22 = 0xf;
  *(undefined4 *)((int)&this[-2].Interface.mbr_0x1c + 2) = 0;
  *(undefined *)((int)&this[-2].Interface.mbr_0xc + 2) = 0;
  pvVar2 = *(void **)&this[-3].Interface.field_0x23;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)&this[-3].Interface.field_0x23 = 0;
  *(undefined4 *)((int)&this[-3].Interface.mbr_0x24 + 3) = 0;
  *(undefined4 *)((int)&this[-3].Interface.mbr_0x28 + 3) = 0;
  pvVar2 = *(void **)&this[-3].Interface.field_0x13;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)&this[-3].Interface.field_0x13 = 0;
  *(undefined4 *)&this[-3].Interface.field_0x17 = 0;
  *(undefined4 *)((int)&this[-3].Interface.mbr_0x18 + 3) = 0;
  local_4._0_1_ = 3;
  AreaMapNote::~AreaMapNote((AreaMapNote *)((int)&this[-6].Interface.mbr_0x2c + 2));
  ppiVar4 = *(int ***)((int)&this[-7].Interface.mbr_0x4 + 3);
  local_4 = CONCAT31(local_4._1_3_,2);
  GameActionEquip::meth_0x454b70
            ((GameActionEquip *)&this[-7].Interface.field_0x3,&local_10,(int **)*ppiVar4,ppiVar4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-7].Interface.mbr_0x4 + 3));
}



void __thiscall CEngineInterface::meth_0x557bf0(CEngineInterface *this)

{
  cls_0x558740 *this_00;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637db7;
  pvStack_c = ExceptionList;
  this_00 = (cls_0x558740 *)(this + -4);
  ExceptionList = &pvStack_c;
  *(CDebugInterface__vftable_692e84 **)
   (&this[-4].Interface.HeapTracker + *(int *)(*(int *)&this[-4].Interface + 4)) =
       &CDebugInterface__vftable_692e84_00692e84;
  iVar1 = *(int *)(this_00->mbr_0x0 + 4);
  *(int *)(iVar1 + -200 + (int)this) = iVar1 + -0xc4;
  local_4 = 4;
  local_10 = this;
  cls_0x558740::meth_0x434250(this_00);
  cls_0x558740::meth_0x557a50(this_00);
  iVar1 = *(int *)&this[-1].Interface.field_0x21;
  if (iVar1 != 0) {
    FUN_004310a0(iVar1,*(int *)((int)&this[-1].Interface.mbr_0x24 + 1));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this[-1].Interface.field_0x21);
  }
  *(undefined4 *)&this[-1].Interface.field_0x21 = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x24 + 1) = 0;
  *(undefined4 *)((int)&this[-1].Interface.mbr_0x28 + 1) = 0;
  ppiVar2 = *(int ***)&this[-1].Interface.field_0x11;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)((int)&this[-1].Interface.mbr_0xc + 1),(int **)&local_10,piVar3,
             (int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&this[-1].Interface.field_0x11);
}



void __thiscall CEngineInterface::meth_0x568a70(CEngineInterface *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006388a9;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)&this[-0x46].Interface.field_0x16;
  ExceptionList = &pvStack_c;
  *(CSMenuInterface__vftable_698020 **)&this[-0x46].Interface.field_0x12 =
       &CSMenuInterface__vftable_698020_00698020;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0xd50 + (int)this) = &PTR_virt_meth_0x568b40_00698004;
  iVar1 = *(int *)(*(int *)&this[-0x46].Interface.field_0x16 + 4);
  *(int *)(iVar1 + -0xd54 + (int)this) = iVar1 + -0xd50;
  local_4 = 1;
  local_10 = this;
  FUN_00568900((int *)&this[-0x46].Interface.field_0x12);
  ppiVar2 = *(int ***)((int)&this[-1].Interface.mbr_0x8 + 1);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)((int)&this[-1].Interface.mbr_0x4 + 1),(int **)&local_10,piVar3,
             (int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-1].Interface.mbr_0x8 + 1));
}



CEngineInterface * __thiscall
CEngineInterface::CEngineInterface(CEngineInterface *this,_String_base *param_1)

{
  GUI::Interface::Interface(&this->Interface,param_1);
  *(CEngineInterface__vftable_69a95c **)&this->Interface =
       &CEngineInterface__vftable_69a95c_0069a95c;
  return this;
}



void __thiscall CEngineInterface::meth_0x580350(CEngineInterface *this)

{
  *(CEngineInterface__vftable_69a95c **)&this->Interface =
       &CEngineInterface__vftable_69a95c_0069a95c;
  GUI::Interface::meth_0x495500(&this->Interface);
  return;
}



int * __thiscall CEngineInterface::virt_meth_0x5803c0(CEngineInterface *this,byte param_1)

{
  meth_0x580350(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall CEngineInterface::virt_meth_0x5803e0(CEngineInterface *this,int *param_1)

{
  int iVar1;
  CSound *pCVar2;
  dword *pdVar3;
  uint unaff_retaddr;
  int *in_stack_00000008;
  cls_0x4d8d70 local_48;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063990c;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *in_stack_00000008;
  if ((iVar1 == 4) || (iVar1 == 7)) {
    ExceptionList = &pvStack_c;
    if (param_1[0x346] == 1) {
      local_48.mbr_0x18 = 0xf;
      local_48.mbr_0x14 = 0;
      local_48.mbr_0x4 = local_48.mbr_0x4 & 0xffffff00;
      ExceptionList = &pvStack_c;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&local_48,(_String_base *)(param_1 + 0x349),0,0xffffffff);
      local_4 = 0;
      if (local_48.mbr_0x14 != 0) {
        pCVar2 = (CSound *)operator_new(0xf8);
        local_4._0_1_ = 1;
        if (pCVar2 == (CSound *)0x0) {
          pCVar2 = (CSound *)0x0;
        }
        else {
          pCVar2 = CSound::CSound(pCVar2);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (pCVar2 != (CSound *)0x0) {
          pdVar3 = (dword *)local_48.mbr_0x4;
          if (local_48.mbr_0x18 < 0x10) {
            pdVar3 = &local_48.mbr_0x4;
          }
          (*pCVar2->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar2,(int *)pdVar3,0);
          CSound::meth_0x4c7eb0(pCVar2,2,0,0);
        }
      }
      local_4 = 0xffffffff;
      if (0xf < local_48.mbr_0x18) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_48.mbr_0x4);
      }
    }
  }
  else if (iVar1 == 5) {
    ExceptionList = &pvStack_c;
    if ((param_1[0x346] == 1) &&
       (ExceptionList = &pvStack_c, iVar1 = (**(code **)(*param_1 + 300))(), iVar1 == 2)) {
      ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_48,(_String_base *)(param_1 + 0x350));
      local_4 = 2;
      if (local_48.mbr_0x14 != 0) {
        pCVar2 = (CSound *)operator_new(0xf8);
        local_4._0_1_ = 3;
        if (pCVar2 == (CSound *)0x0) {
          pCVar2 = (CSound *)0x0;
        }
        else {
          pCVar2 = CSound::CSound(pCVar2);
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (pCVar2 != (CSound *)0x0) {
          pdVar3 = (dword *)local_48.mbr_0x4;
          if (local_48.mbr_0x18 < 0x10) {
            pdVar3 = &local_48.mbr_0x4;
          }
          (*pCVar2->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar2,(int *)pdVar3,0);
          CSound::meth_0x4c7eb0(pCVar2,2,0,0);
        }
      }
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0(&local_48);
    }
  }
  else if (iVar1 == 1) {
    ExceptionList = &pvStack_c;
    if (param_1[0x346] == 1) {
      ExceptionList = &pvStack_c;
      GUI::Interface::virt_meth_0x4958d0(&this->Interface,param_1);
      (**(code **)(*param_1 + 0x11c))();
      iVar1 = (**(code **)(*param_1 + 300))();
      if (iVar1 == 2) {
        ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&local_48,(_String_base *)(param_1 + 0x349));
        local_4 = 4;
        if (local_48.mbr_0x14 != 0) {
          pCVar2 = (CSound *)operator_new(0xf8);
          local_4._0_1_ = 5;
          if (pCVar2 == (CSound *)0x0) {
            pCVar2 = (CSound *)0x0;
          }
          else {
            pCVar2 = CSound::CSound(pCVar2);
          }
          local_4 = CONCAT31(local_4._1_3_,4);
          if (pCVar2 != (CSound *)0x0) {
            pdVar3 = (dword *)local_48.mbr_0x4;
            if (local_48.mbr_0x18 < 0x10) {
              pdVar3 = &local_48.mbr_0x4;
            }
            (*pCVar2->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar2,(int *)pdVar3,0);
            CSound::meth_0x4c7eb0(pCVar2,2,0,0);
          }
        }
        cls_0x4d8d70::meth_0x4b2dd0(&local_48);
      }
      goto LAB_00580707;
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if (((iVar1 == 3) && (ExceptionList = &pvStack_c, param_1[0x346] == 1)) &&
       (ExceptionList = &pvStack_c, iVar1 = (**(code **)(*param_1 + 300))(), iVar1 == 2)) {
      ::cls_0x50db20::cls_0x50db20
                ((cls_0x50db20 *)&local_48.mbr_0x1c,(_String_base *)(param_1 + 0x350));
      local_4 = 6;
      if (local_48.mbr_0x30 != 0) {
        pCVar2 = (CSound *)operator_new(0xf8);
        local_4._0_1_ = 7;
        if (pCVar2 == (CSound *)0x0) {
          pCVar2 = (CSound *)0x0;
        }
        else {
          pCVar2 = CSound::CSound(pCVar2);
        }
        local_4 = CONCAT31(local_4._1_3_,6);
        if (pCVar2 != (CSound *)0x0) {
          if (local_48.mbr_0x34 < 0x10) {
            local_48.mbr_0x20 = (dword)&local_48.mbr_0x20;
          }
          (*pCVar2->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar2,(int *)local_48.mbr_0x20,0);
          CSound::meth_0x4c7eb0(pCVar2,2,0,0);
        }
      }
      local_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_48.mbr_0x1c);
    }
  }
  GUI::Interface::virt_meth_0x4958d0(&this->Interface,param_1);
LAB_00580707:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CEngineInterface::meth_0x58ffe0(CEngineInterface *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  CEngineInterface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639eda;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)&this[-0x1212].Interface.mbr_0x24 + 2);
  ExceptionList = &pvStack_c;
  *(CFloatingTextInterface__vftable_69de90 **)&this[-0x1212].Interface.field_0x22 =
       &CFloatingTextInterface__vftable_69de90_0069de90;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x3754c + (int)this) = &PTR_virt_meth_0x5900c0_0069de74;
  iVar1 = *(int *)(*(int *)((int)&this[-0x1212].Interface.mbr_0x24 + 2) + 4);
  *(int *)(iVar1 + -0x37550 + (int)this) = iVar1 + -0x3754c;
  local_4 = 2;
  local_10 = this;
  _eh_vector_destructor_iterator_
            (&this[-0x120b].Interface.field_0x17,0x1ba0,0x20,CFloatingLabel::~CFloatingLabel);
  ppiVar2 = *(int ***)((int)&this[-0x120b].Interface.mbr_0xc + 3);
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)((int)&this[-0x120b].Interface.mbr_0x8 + 3),(int **)&local_10,piVar3,
             (int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-0x120b].Interface.mbr_0xc + 3));
}



void __thiscall CEngineInterface::meth_0x593530(CEngineInterface *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a1d7;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)&this[-0xd].Interface.mbr_0x8 + 1);
  ExceptionList = &pvStack_c;
  *(DialogueInterface__vftable_69edbc **)((int)&this[-0xd].Interface.mbr_0x4 + 1) =
       &DialogueInterface__vftable_69edbc_0069edbc;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x274 + (int)this) = &PTR_virt_meth_0x593620_0069eda0;
  iVar1 = *(int *)(*(int *)((int)&this[-0xd].Interface.mbr_0x8 + 1) + 4);
  *(int *)(iVar1 + -0x278 + (int)this) = iVar1 + -0x274;
  local_4 = 2;
  if (*(int *)((int)&this[-1].Interface.mbr_0x28 + 1) != 0) {
    do {
      ppiVar2 = (int **)**(undefined4 **)((int)&this[-1].Interface.mbr_0x24 + 1);
      piVar3 = ppiVar2[4];
      cls_0x50dbb0::meth_0x592a40((cls_0x50dbb0 *)&this[-1].Interface.field_0x21,&local_10,ppiVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(1);
      }
    } while (*(int *)((int)&this[-1].Interface.mbr_0x28 + 1) != 0);
  }
  ppiVar2 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x50dbb0::meth_0x592ef0
            ((cls_0x50dbb0 *)&this[-1].Interface.field_0x21,&local_10,(int **)*ppiVar2,ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-1].Interface.mbr_0x24 + 1));
}



void __thiscall CEngineInterface::meth_0x59dbc0(CEngineInterface *this)

{
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  undefined1 unaff_DI;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a960;
  pvStack_c = ExceptionList;
  piVar3 = (int *)((int)&this[-0x3d5].Interface.mbr_0x8 + 1);
  ExceptionList = &pvStack_c;
  *(CConsoleInterface__vftable_6a2164 **)
   (*(int *)(*(int *)((int)&this[-0x3d5].Interface.mbr_0x8 + 1) + 4) + -0xbbbc + (int)this) =
       &CConsoleInterface__vftable_6a2164_006a2164;
  *(int *)(*(int *)(*piVar3 + 4) + -0xbbc0 + (int)this) = *(int *)(*piVar3 + 4) + -0xbbbc;
  local_4 = 4;
  if (this == (CEngineInterface *)0xbbbc) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (char)*(undefined4 *)(*piVar3 + 4) + 'D' + (char)this;
  }
  cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,cVar2,unaff_DI);
  FUN_0059db40(piVar3);
  ppiVar1 = *(int ***)((int)&this[-1].Interface.mbr_0x24 + 1);
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this[-1].Interface.field_0x21,&local_10,piVar3,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)&this[-1].Interface.mbr_0x24 + 1));
}



void __thiscall CEngineInterface::meth_0x5b4f00(CEngineInterface *this)

{
  int iVar1;
  
  *(VideoInterface__vftable_6ac08c **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4) + -0xc + (int)this) =
       &VideoInterface__vftable_6ac08c_006ac08c;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x24 + 1) + 4);
  *(int *)(iVar1 + -0x10 + (int)this) = iVar1 + -0xc;
  return;
}



void __thiscall CEngineInterface::meth_0x5b5ce0(CEngineInterface *this)

{
  int iVar1;
  CSound *this_00;
  
  *(CDebugToolsInterface__vftable_6ac504 **)
   (*(int *)(*(int *)((int)&this[-2].Interface.mbr_0x24 + 2) + 4) + -0x3c + (int)this) =
       &CDebugToolsInterface__vftable_6ac504_006ac504;
  iVar1 = *(int *)(*(int *)((int)&this[-2].Interface.mbr_0x24 + 2) + 4);
  *(int *)(iVar1 + -0x40 + (int)this) = iVar1 + -0x3c;
  this_00 = *(CSound **)&this[-1].Interface.field_0x21;
  if (this_00 != (CSound *)0x0) {
    CSound::~CSound(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  return;
}



void __thiscall CEngineInterface::meth_0x5b7760(CEngineInterface *this)

{
  int iVar1;
  
  *(CFontTestInterface__vftable_6acb94 **)
   (*(int *)(*(int *)&this[-1].Interface.field_0x11 + 4) + -0x20 + (int)this) =
       &CFontTestInterface__vftable_6acb94_006acb94;
  iVar1 = *(int *)(*(int *)&this[-1].Interface.field_0x11 + 4);
  *(int *)(iVar1 + -0x24 + (int)this) = iVar1 + -0x20;
  return;
}



void __thiscall CEngineInterface::meth_0x5b7780(CEngineInterface *this)

{
  int iVar1;
  
  *(CTextEditInterface__vftable_6acbb0 **)
   (*(int *)(*(int *)((int)&this[-1].Interface.mbr_0x18 + 1) + 4) + -0x18 + (int)this) =
       &CTextEditInterface__vftable_6acbb0_006acbb0;
  iVar1 = *(int *)(*(int *)((int)&this[-1].Interface.mbr_0x18 + 1) + 4);
  *(int *)(iVar1 + -0x1c + (int)this) = iVar1 + -0x18;
  return;
}


#include "../include/CEngineInterface.h"
