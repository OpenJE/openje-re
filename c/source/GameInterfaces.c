#include "../include/GameInterfaces.h"

GameInterfaces * __thiscall GameInterfaces::~GameInterfaces(GameInterfaces *this)

{
  GameInterfaces *pGVar1;
  
  (this->Interfaces).vftptr_0x0 =
       (Interfaces__vftable_69f3ec *)&GameInterfaces__vftable_656650_00656650;
  pGVar1 = (GameInterfaces *)Interfaces::meth_0x596830(&this->Interfaces);
  return pGVar1;
}



void __thiscall GameInterfaces::virt_meth_0x4396c0(GameInterfaces *this)

{
  if ((cls_0x558740 *)this->mbr_0xc != (cls_0x558740 *)0x0) {
    cls_0x558740::meth_0x434910((cls_0x558740 *)this->mbr_0xc,0x118,(int *)0x84);
    cls_0x558740::meth_0x434120((cls_0x558740 *)this->mbr_0xc,10,0x26c);
  }
  return;
}



void __thiscall GameInterfaces::virt_meth_0x439720(GameInterfaces *this,char param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x20;
  if (piVar1 != (int *)0x0) {
    if (param_1 != '\0') {
      CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),0)
      ;
      GUI::Window::virt_meth_0x5a9320((Window *)this);
      return;
    }
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
    GUI::Window::virt_meth_0x5a9320((Window *)this);
  }
  return;
}



void __thiscall GameInterfaces::virt_meth_0x4397e0(GameInterfaces *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x10;
  if (piVar1 != (int *)0x0) {
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
    FUN_00416b20();
  }
  DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  return;
}



void __thiscall GameInterfaces::virt_meth_0x439810(GameInterfaces *this)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)this->mbr_0x10;
  if (piVar1 != (int *)0x0) {
    cVar2 = GameActionOperateContainer::Get_mbr_0x20
                      ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
    if (cVar2 == '\0') {
      cls_0x41a2b0::meth_0x41c9d0
                ((cls_0x41a2b0 *)this->mbr_0x10,*(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xe0));
    }
  }
  return;
}



undefined4 * __thiscall GameInterfaces::virt_meth_0x4398c0(GameInterfaces *this,byte param_1)

{
  ~GameInterfaces(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->Interfaces;
}



/* WARNING: Removing unreachable block (ram,0x00439e8c) */
/* WARNING: Removing unreachable block (ram,0x00439ea3) */
/* WARNING: Removing unreachable block (ram,0x0043a3ea) */
/* WARNING: Removing unreachable block (ram,0x0043a3f1) */

GameInterfaces * __thiscall GameInterfaces::GameInterfaces(GameInterfaces *this)

{
  bool bVar1;
  char *pcVar2;
  cls_0x440990 *pcVar3;
  CLoadMapInterface *pCVar4;
  cls_0x42a780 *pcVar5;
  cls_0x41a2b0 *pcVar6;
  cls_0x434f70 *pcVar7;
  cls_0x43cd50 *pcVar8;
  cls_0x433a90 *pcVar9;
  cls_0x455e40 *pcVar10;
  cls_0x4407c0 *pcVar11;
  cls_0x442340 *pcVar12;
  cls_0x4436d0 *pcVar13;
  cls_0x448c40 *pcVar14;
  cls_0x444530 *pcVar15;
  cls_0x4468c0 *pcVar16;
  cls_0x4491f0 *pcVar17;
  cls_0x4496a0 *pcVar18;
  CWorldContainerInterface *pCVar19;
  char *pcVar20;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e025;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar1 = false;
  ExceptionList = &local_c;
  Interfaces::Interfaces(&this->Interfaces);
  local_4 = 0;
  (this->Interfaces).vftptr_0x0 =
       (Interfaces__vftable_69f3ec *)&GameInterfaces__vftable_656650_00656650;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  pcVar3 = (cls_0x440990 *)FUN_004a7680(0x44);
  local_4._0_1_ = 1;
  if (pcVar3 == (cls_0x440990 *)0x0) {
    pcVar3 = (cls_0x440990 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Mainmenu";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Mainmenu",(uint)(pcVar20 + -0x653e80));
    local_4 = CONCAT31(local_4._1_3_,2);
    bVar1 = true;
    pcVar3 = cls_0x440990::cls_0x440990(pcVar3,local_28,1);
  }
  this->mbr_0x4 = (dword)pcVar3;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)(*(int *)(*(int *)this->mbr_0x4 + 4) + (int)(int *)this->mbr_0x4),
             1);
  pCVar4 = (CLoadMapInterface *)FUN_004a7680(0x40);
  local_4._0_1_ = 4;
  if (pCVar4 == (CLoadMapInterface *)0x0) {
    pCVar4 = (CLoadMapInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "LoadMap";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"LoadMap",(uint)(pcVar20 + -0x656720));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,5);
    pCVar4 = CLoadMapInterface::CLoadMapInterface(pCVar4,local_28);
  }
  this->mbr_0x8 = (dword)pCVar4;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this->mbr_0x8,1);
  pcVar5 = (cls_0x42a780 *)FUN_004a7680(0x15c);
  local_4._0_1_ = 7;
  if (pcVar5 == (cls_0x42a780 *)0x0) {
    pcVar5 = (cls_0x42a780 *)0x0;
  }
  else {
    pcVar5 = cls_0x42a780::cls_0x42a780(pcVar5,1);
  }
  this->mbr_0x38 = (dword)pcVar5;
  local_4._0_1_ = 0;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             ((int)&(pcVar5->cls_0x4395a0).mbr_0x0 + *(int *)((pcVar5->cls_0x4395a0).mbr_0x0 + 4)),1
            );
  pcVar6 = (cls_0x41a2b0 *)FUN_004a7680(0x2d0);
  local_4._0_1_ = 8;
  if (pcVar6 == (cls_0x41a2b0 *)0x0) {
    pcVar6 = (cls_0x41a2b0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Actionbar";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Actionbar",(uint)(pcVar20 + -0x656714));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,9);
    pcVar6 = cls_0x41a2b0::cls_0x41a2b0(pcVar6,local_28,1);
  }
  this->mbr_0x10 = (dword)pcVar6;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x10 + 4) + (int)(int *)this->mbr_0x10),1);
  pcVar7 = (cls_0x434f70 *)FUN_004a7680(0xe4);
  local_4._0_1_ = 0xb;
  if (pcVar7 == (cls_0x434f70 *)0x0) {
    pcVar7 = (cls_0x434f70 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Feedback";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Feedback",(uint)(pcVar20 + -0x656708));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    pcVar7 = cls_0x434f70::cls_0x434f70(pcVar7,local_28,1);
  }
  this->mbr_0xc = (dword)pcVar7;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)(*(int *)(*(int *)this->mbr_0xc + 4) + (int)(int *)this->mbr_0xc),
             1);
  pcVar8 = (cls_0x43cd50 *)FUN_004a7680(0x2f4);
  local_4._0_1_ = 0xe;
  if (pcVar8 == (cls_0x43cd50 *)0x0) {
    pcVar8 = (cls_0x43cd50 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Inventory";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Inventory",(uint)(pcVar20 + -0x6566fc));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0xf);
    pcVar8 = cls_0x43cd50::cls_0x43cd50(pcVar8,local_28,1);
  }
  this->mbr_0x18 = (dword)pcVar8;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x18 + 4) + (int)(int *)this->mbr_0x18),1);
  pcVar9 = (cls_0x433a90 *)FUN_004a7680(0x40);
  local_4._0_1_ = 0x11;
  if (pcVar9 == (cls_0x433a90 *)0x0) {
    pcVar9 = (cls_0x433a90 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "EscapeMenu";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"EscapeMenu",(uint)(pcVar20 + -0x6566f0))
    ;
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x12);
    pcVar9 = cls_0x433a90::cls_0x433a90(pcVar9,local_28,1);
  }
  this->mbr_0x1c = (dword)pcVar9;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x1c + 4) + (int)(int *)this->mbr_0x1c),1);
  pcVar10 = (cls_0x455e40 *)FUN_004a7680(0x214);
  local_4._0_1_ = 0x14;
  if (pcVar10 == (cls_0x455e40 *)0x0) {
    pcVar10 = (cls_0x455e40 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "PipBoy";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"PipBoy",(uint)(pcVar20 + -0x650b10));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x15);
    pcVar10 = cls_0x455e40::cls_0x455e40(pcVar10,local_28,1);
  }
  this->mbr_0x44 = (dword)pcVar10;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x44 + 4) + (int)(int *)this->mbr_0x44),1);
  pcVar11 = (cls_0x4407c0 *)FUN_004a7680(0x40);
  local_4._0_1_ = 0x17;
  if (pcVar11 == (cls_0x4407c0 *)0x0) {
    pcVar11 = (cls_0x4407c0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "LoadingBar";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"LoadingBar",(uint)(pcVar20 + -0x6566e4))
    ;
    local_4 = CONCAT31(local_4._1_3_,0x18);
    pcVar11 = cls_0x4407c0::cls_0x4407c0(pcVar11,local_28,1);
  }
  this->mbr_0x20 = (dword)pcVar11;
  local_4 = 0;
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x20 + 4) + (int)(int *)this->mbr_0x20),1);
  pcVar12 = (cls_0x442340 *)FUN_004a7680(0x68);
  local_4._0_1_ = 0x1a;
  if (pcVar12 == (cls_0x442340 *)0x0) {
    pcVar12 = (cls_0x442340 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "MiniMap";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"MiniMap",(uint)(pcVar20 + -0x6566dc));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    pcVar12 = cls_0x442340::cls_0x442340(pcVar12,local_28,1);
  }
  this->mbr_0x48 = (dword)pcVar12;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x48 + 4) + (int)(int *)this->mbr_0x48),1);
  pcVar13 = (cls_0x4436d0 *)FUN_004a7680(0x68);
  local_4._0_1_ = 0x1d;
  if (pcVar13 == (cls_0x4436d0 *)0x0) {
    pcVar13 = (cls_0x4436d0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Options";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Options",(uint)(pcVar20 + -0x6566d4));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    pcVar13 = cls_0x4436d0::cls_0x4436d0(pcVar13,local_28,1);
  }
  this->mbr_0x4c = (dword)pcVar13;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x4c + 4) + (int)(int *)this->mbr_0x4c),1);
  pcVar14 = (cls_0x448c40 *)FUN_004a7680(0xa8);
  local_4._0_1_ = 0x20;
  if (pcVar14 == (cls_0x448c40 *)0x0) {
    pcVar14 = (cls_0x448c40 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "OptionsLoad";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"OptionsLoad",(uint)(pcVar20 + -0x6566c8));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x21);
    pcVar14 = cls_0x448c40::cls_0x448c40(pcVar14,local_28,(int *)0x1);
  }
  this->mbr_0x50 = (dword)pcVar14;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x50 + 4) + (int)(int *)this->mbr_0x50),1);
  pcVar15 = (cls_0x444530 *)FUN_004a7680(0x140);
  local_4._0_1_ = 0x23;
  if (pcVar15 == (cls_0x444530 *)0x0) {
    pcVar15 = (cls_0x444530 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "OptionsGame";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"OptionsGame",(uint)(pcVar20 + -0x6566bc));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x24);
    pcVar15 = cls_0x444530::cls_0x444530(pcVar15,local_28,1);
  }
  this->mbr_0x54 = (dword)pcVar15;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x54 + 4) + (int)(int *)this->mbr_0x54),1);
  pcVar16 = (cls_0x4468c0 *)FUN_004a7680(0x1cc);
  local_4._0_1_ = 0x26;
  if (pcVar16 == (cls_0x4468c0 *)0x0) {
    pcVar16 = (cls_0x4468c0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "OptionsHotKeys";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"OptionsHotKeys",(uint)(pcVar20 + -0x6566ac));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x27);
    pcVar16 = cls_0x4468c0::cls_0x4468c0(pcVar16,local_28,1);
  }
  this->mbr_0x58 = (dword)pcVar16;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x58 + 4) + (int)(int *)this->mbr_0x58),1);
  pcVar17 = (cls_0x4491f0 *)FUN_004a7680(0x40);
  local_4._0_1_ = 0x29;
  if (pcVar17 == (cls_0x4491f0 *)0x0) {
    pcVar17 = (cls_0x4491f0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "OptionsMultiplayer";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"OptionsMultiplayer",(uint)(pcVar20 + -0x656698));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x2a);
    pcVar17 = cls_0x4491f0::cls_0x4491f0(pcVar17,local_28,1);
  }
  this->mbr_0x5c = (dword)pcVar17;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  bVar1 = false;
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x5c + 4) + (int)(int *)this->mbr_0x5c),1);
  pcVar18 = (cls_0x4496a0 *)FUN_004a7680(0x100);
  local_4._0_1_ = 0x2c;
  if (pcVar18 == (cls_0x4496a0 *)0x0) {
    pcVar18 = (cls_0x4496a0 *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "OptionsVideo";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,"OptionsVideo",(uint)(pcVar20 + -0x656688));
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0x2d);
    pcVar18 = cls_0x4496a0::cls_0x4496a0(pcVar18,local_28,1);
  }
  this->mbr_0x60 = (dword)pcVar18;
  local_4 = 0;
  if ((bVar1) && (0xf < local_10)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0x60 + 4) + (int)(int *)this->mbr_0x60),1);
  pCVar19 = (CWorldContainerInterface *)FUN_004a7680(0x1b8);
  local_4._0_1_ = 0x2f;
  if (pCVar19 == (CWorldContainerInterface *)0x0) {
    pCVar19 = (CWorldContainerInterface *)0x0;
  }
  else {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "Container";
    do {
      pcVar20 = pcVar2;
      pcVar2 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Container",(uint)(pcVar20 + -0x65667c));
    local_4 = CONCAT31(local_4._1_3_,0x30);
    pCVar19 = CWorldContainerInterface::CWorldContainerInterface(pCVar19,local_28);
  }
  this->mbr_0x28 = (dword)pCVar19;
  local_4 = 0;
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this->mbr_0x28,1);
  ExceptionList = local_c;
  return this;
}


#include "../include/GameInterfaces.h"
