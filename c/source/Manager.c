#include "../include/Manager.h"

void __thiscall GUI::Manager::meth_0x4b2900(Manager *this)

{
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  return;
}



void __thiscall GUI::Manager::meth_0x4b4920(Manager *this)

{
  Manager *pMVar1;
  int **ppiVar2;
  char *pcVar3;
  Manager *_Memory;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  cls_0x41d550 local_4;
  
  this->mbr_0x4 = 1;
  this->mbr_0xc = 0;
  this->mbr_0xb8 = 0;
  if ((Manager **)this->mbr_0x20 == (Manager **)0x0) {
    _Memory = (Manager *)0x0;
  }
  else {
    _Memory = *(Manager **)this->mbr_0x20;
  }
  local_4.mbr_0x0 = (dword)this;
  if (_Memory != (Manager *)this->mbr_0x20) {
    do {
      pMVar1 = (Manager *)_Memory->vftptr_0x0;
      puVar5 = *(undefined4 **)&_Memory->field_0x8;
      local_4.mbr_0x0 = (dword)pMVar1;
      if (_Memory != (Manager *)this->mbr_0x20) {
        **(Manager ***)&_Memory->mbr_0x4 = pMVar1;
        _Memory->vftptr_0x0[1].virt_meth_0x4b58b0_0 = *(virt_meth_0x4b58b0 **)&_Memory->mbr_0x4;
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uVar4 = FUN_004a75a0((int)puVar5);
      if (((char)uVar4 != '\0') && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      _Memory = pMVar1;
    } while ((Manager *)local_4.mbr_0x0 != (Manager *)this->mbr_0x20);
  }
  ppiVar2 = (int **)this->mbr_0x20;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x1c,(int **)&local_4,piVar7,(int *)ppiVar2);
  meth_0x4b2900(this);
  cls_0x50dbb0::meth_0x522ff0((cls_0x50dbb0 *)&this->mbr_0x48);
  local_4.mbr_0x0 = *(int *)this->mbr_0x40;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x40) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x28) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x28))(1);
      }
      cls_0x41d550::meth_0x4c8eb0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x40);
  }
  cls_0x4d8d70::meth_0x4b39d0((cls_0x4d8d70 *)&this->mbr_0x3c);
  *(dword *)(this->mbr_0x40 + 4) = this->mbr_0x40;
  this->mbr_0x44 = 0;
  *(dword *)this->mbr_0x40 = this->mbr_0x40;
  *(dword *)(this->mbr_0x40 + 8) = this->mbr_0x40;
  puVar5 = (undefined4 *)this->mbr_0x58;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar5;
  }
  if (puVar5 != (undefined4 *)this->mbr_0x58) {
    do {
      if ((undefined4 *)puVar5[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)puVar5[2])(1);
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)this->mbr_0x58);
  }
  ppiVar2 = (int **)this->mbr_0x58;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x54,(int **)&local_4,piVar7,(int *)ppiVar2);
  this->mbr_0x60 = 0x400;
  this->mbr_0x64 = 0x300;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x6c = 0x3f800000;
  FUN_004b6450((int *)this->mbr_0xb0);
  cls_0x4b61d0::meth_0x4b61d0((cls_0x4b61d0 *)this->mbr_0xb4);
  ppiVar2 = (int **)this->mbr_0x98;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x94,(int **)&local_4,piVar7,(int *)ppiVar2);
  ppiVar2 = (int **)this->mbr_0xa4;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0xa0,(int **)&local_4,piVar7,(int *)ppiVar2);
  pcVar3 = "";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x70,"",(uint)(pcVar6 + -0x64d7d8));
  return;
}



Manager * __thiscall GUI::Manager::~Manager(Manager *this)

{
  cls_0x4296c0 *this_00;
  cls_0x4b6a00 *this_01;
  int **ppiVar1;
  int *piVar2;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632413;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Manager__vftable_66f2cc_0066f2cc;
  local_4 = 6;
  meth_0x4b4920(this);
  this_00 = (cls_0x4296c0 *)this->mbr_0x8c;
  if (this_00 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if ((undefined4 *)this->mbr_0x90 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x90)(1);
    this->mbr_0x90 = 0;
  }
  if ((undefined4 *)this->mbr_0xb0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xb0)(1);
    this->mbr_0xb0 = 0;
  }
  this_01 = (cls_0x4b6a00 *)this->mbr_0xb4;
  if (this_01 != (cls_0x4b6a00 *)0x0) {
    cls_0x4b6a00::meth_0x4b6a00(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  ppiVar1 = (int **)this->mbr_0xa4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0xa0,&piStack_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xa4);
}



Manager * __thiscall GUI::Manager::Manager(Manager *this)

{
  int **ppiVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  void *pvVar5;
  CPktManager *pCVar6;
  cls_0x4c0190 *pcVar7;
  Gfx_CamCtrl_Orbit *pGVar8;
  int *piVar9;
  int *piVar10;
  undefined local_15;
  cls_0x4c0190 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006324df;
  local_c = ExceptionList;
  piVar10 = (int *)0x0;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Manager__vftable_66f2cc_0066f2cc;
  this->mbr_0x4 = 1;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x20 = dVar3;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x3c = local_15;
  dVar3 = FUN_0059ec40();
  this->mbr_0x40 = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0x40 + 4) = this->mbr_0x40;
  *(dword *)this->mbr_0x40 = this->mbr_0x40;
  *(dword *)(this->mbr_0x40 + 8) = this->mbr_0x40;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x48 = local_15;
  local_4._0_1_ = 1;
  dVar3 = FUN_004c6640();
  this->mbr_0x4c = dVar3;
  *(undefined *)(dVar3 + 0x15) = 1;
  *(dword *)(this->mbr_0x4c + 4) = this->mbr_0x4c;
  *(dword *)this->mbr_0x4c = this->mbr_0x4c;
  *(dword *)(this->mbr_0x4c + 8) = this->mbr_0x4c;
  this->mbr_0x50 = 0;
  local_4._0_1_ = 2;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x58 = dVar3;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0x400;
  this->mbr_0x64 = 0x300;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x6c = 0x3f800000;
  this->mbr_0x88 = 0xf;
  this->mbr_0x84 = 0;
  *(undefined *)&this->mbr_0x74 = 0;
  local_4._0_1_ = 4;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x98 = dVar3;
  this->mbr_0x9c = 0;
  local_4._0_1_ = 5;
  dVar3 = FUN_0056e0b0();
  this->mbr_0xa4 = dVar3;
  this->mbr_0xa8 = 0;
  local_4._0_1_ = 6;
  this->mbr_0xb8 = 0;
  pcVar2 = "";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x70,"",(uint)(pcVar4 + -0x64d7d8));
  ppiVar1 = (int **)this->mbr_0xa4;
  if (ppiVar1 == (int **)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0xa0,(int **)&local_10,piVar9,(int *)ppiVar1);
  this->mbr_0xac = 0;
  local_10 = (cls_0x4c0190 *)operator_new(0x28);
  local_4._0_1_ = 7;
  if (local_10 == (cls_0x4c0190 *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = FUN_004b6910(local_10,(int *)0x80000);
  }
  local_4._0_1_ = 6;
  this->mbr_0xb4 = (dword)pvVar5;
  local_10 = (cls_0x4c0190 *)operator_new(0x44);
  local_4._0_1_ = 8;
  if (local_10 == (cls_0x4c0190 *)0x0) {
    pCVar6 = (CPktManager *)0x0;
  }
  else {
    pCVar6 = CPktManager::CPktManager((CPktManager *)local_10);
  }
  local_4._0_1_ = 6;
  this->mbr_0xb0 = (dword)pCVar6;
  local_10 = (cls_0x4c0190 *)operator_new(0x280);
  local_4._0_1_ = 9;
  if (local_10 == (cls_0x4c0190 *)0x0) {
    pcVar7 = (cls_0x4c0190 *)0x0;
  }
  else {
    pcVar7 = cls_0x4c0190::cls_0x4c0190(local_10);
  }
  local_4._0_1_ = 6;
  this->mbr_0x8c = (dword)pcVar7;
  local_10 = (cls_0x4c0190 *)operator_new(0xb8);
  local_4 = CONCAT31(local_4._1_3_,10);
  if (local_10 == (cls_0x4c0190 *)0x0) {
    pGVar8 = (Gfx_CamCtrl_Orbit *)0x0;
  }
  else {
    pGVar8 = Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit((Gfx_CamCtrl_Orbit *)local_10);
  }
  this->mbr_0x90 = (dword)pGVar8;
  ppiVar1 = (int **)this->mbr_0x98;
  if (ppiVar1 != (int **)0x0) {
    piVar10 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x94,(int **)&local_10,piVar10,(int *)ppiVar1);
  meth_0x4b2900(this);
  ExceptionList = local_c;
  return this;
}



int ** __thiscall GUI::Manager::virt_meth_0x4b58b0(Manager *this,byte param_1)

{
  ~Manager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int **)this;
}


#include "../include/Manager.h"
