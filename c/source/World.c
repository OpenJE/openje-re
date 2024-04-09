#include "../include/World.h"

dword __thiscall World::Get_mbr_0x3c(World *this)

{
  return this->mbr_0x3c;
}



World * __thiscall World::~World(World *this)

{
  this->mbr_0x4 = (dword)"Buffer underflow.";
  this->vftptr_0x0 = (World__vftable_691a1c *)&underflow__vftable_6647a8_006647a8;
  return this;
}



void __thiscall World::virt_meth_0x544a90(World *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  char cVar3;
  undefined uVar4;
  undefined3 extraout_var;
  dword dVar5;
  
  if (this->mbr_0x34 != 4) {
    dVar5 = this->mbr_0x44 + (param_1 - this->mbr_0x48);
    this->mbr_0x44 = dVar5;
    if (this->mbr_0x58 != 0) {
      this->mbr_0x44 = dVar5 - this->mbr_0x58;
      this->mbr_0x58 = 0;
    }
    dVar5 = this->mbr_0x44;
    this->mbr_0x48 = param_1;
    cVar3 = (*this->vftptr_0x0->virt_meth_0x546b50_20)(this);
    if (cVar3 != '\0') {
      dVar1 = this->mbr_0x34;
      if (dVar1 == 0) {
        handle_fatal_error("Trying to update world when state is invalid");
      }
      else {
        dVar2 = this[-1].mbr_0x160;
        if (dVar1 == 1) {
          (**(code **)(dVar2 + 0x38))(this->mbr_0x44,dVar5);
        }
        else if (dVar1 == 2) {
          (**(code **)(dVar2 + 0x3c))(this->mbr_0x44);
        }
        else {
          (**(code **)(dVar2 + 0x40))();
        }
      }
      this->mbr_0x64 = this->mbr_0x44;
      uVar4 = (*this->vftptr_0x0->FUN_00404b70_12)();
      this->mbr_0x68 = this->mbr_0x68 + CONCAT31(extraout_var,uVar4);
    }
  }
  return;
}



undefined4 * __thiscall World::virt_meth_0x544b80(World *this)

{
  Script_Small *pSVar1;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pSVar1 = (Script_Small *)operator_new(0xe0);
  local_4 = 0;
  if (pSVar1 != (Script_Small *)0x0) {
    pSVar1 = Script_Small::Script_Small(pSVar1,in_stack_00000004);
    ExceptionList = local_c;
    return &pSVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall World::CreateEffect(World *this)

{
  Condition *pCVar1;
  int in_stack_00000004;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375db;
  local_c = ExceptionList;
  if (in_stack_00000004 != 0) {
    ExceptionList = &local_c;
    handle_fatal_error("World::CreateEffect() - Unknown effect type %d.\n");
    ExceptionList = puStack_8;
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  pCVar1 = (Condition *)operator_new(0x70);
  local_4 = 0;
  if (pCVar1 != (Condition *)0x0) {
    pCVar1 = Condition::Condition(pCVar1,0);
    ExceptionList = local_c;
    return (undefined4 *)pCVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 World::GetTypeFromFilename(char *param_1)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    handle_fatal_error("World::GetTypeFromFilename() - Unknown entity type.");
  }
  return 0;
}



ActionMoveTo * World::CreateAction(undefined4 param_1)

{
  ActionDie *this;
  ActionIdle *this_00;
  ActionPickUp *this_01;
  ActionWander *this_02;
  ActionWait *this_03;
  ActionAnim *this_04;
  ActionMessage *this_05;
  ActionEquip *this_06;
  ActionUnequip *this_07;
  ActionSetActiveWeapon *this_08;
  ActionMoveTo *pAVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637669;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_c;
    this = (ActionDie *)operator_new(0x1c);
    local_4 = 0;
    if (this != (ActionDie *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionDie::ActionDie(this);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    this_00 = (ActionIdle *)operator_new(0x1c);
    local_4 = 1;
    if (this_00 != (ActionIdle *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionIdle::ActionIdle(this_00);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pAVar1 = (ActionMoveTo *)operator_new(0x48);
    local_4 = 2;
    if (pAVar1 != (ActionMoveTo *)0x0) {
      pAVar1 = ActionMoveTo::ActionMoveTo(pAVar1);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    this_01 = (ActionPickUp *)operator_new(0x30);
    local_4 = 3;
    if (this_01 != (ActionPickUp *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionPickUp::ActionPickUp(this_01);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    this_02 = (ActionWander *)operator_new(0x44);
    local_4 = 4;
    if (this_02 != (ActionWander *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionWander::ActionWander(this_02);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    this_03 = (ActionWait *)operator_new(0x24);
    local_4 = 5;
    if (this_03 != (ActionWait *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionWait::ActionWait(this_03);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    this_04 = (ActionAnim *)operator_new(0x28);
    local_4 = 6;
    if (this_04 != (ActionAnim *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionAnim::ActionAnim(this_04);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    this_05 = (ActionMessage *)operator_new(0x34);
    local_4 = 7;
    if (this_05 != (ActionMessage *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionMessage::ActionMessage(this_05);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  default:
    ExceptionList = &local_c;
    handle_fatal_error("Unknown action sent to World::CreateAction() factory.");
    ExceptionList = puStack_8;
    return (ActionMoveTo *)0x0;
  case 9:
    ExceptionList = &local_c;
    this_06 = (ActionEquip *)operator_new(0x1c);
    local_4 = 8;
    if (this_06 != (ActionEquip *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionEquip::ActionEquip(this_06);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    this_07 = (ActionUnequip *)operator_new(0x1c);
    local_4 = 9;
    if (this_07 != (ActionUnequip *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionUnequip::ActionUnequip(this_07);
      ExceptionList = local_c;
      return pAVar1;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    this_08 = (ActionSetActiveWeapon *)operator_new(0x1c);
    local_4 = 10;
    if (this_08 != (ActionSetActiveWeapon *)0x0) {
      pAVar1 = (ActionMoveTo *)ActionSetActiveWeapon::ActionSetActiveWeapon(this_08);
      ExceptionList = local_c;
      return pAVar1;
    }
  }
  ExceptionList = local_c;
  return (ActionMoveTo *)0x0;
}



undefined4 * __thiscall World::virt_meth_0x545100(World *this)

{
  Combat *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (Combat *)operator_new(0x24);
  local_4 = 0;
  if (pCVar1 != (Combat *)0x0) {
    pCVar1 = Combat::Combat(pCVar1);
    ExceptionList = local_c;
    return &pCVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



Entity * World::CreateEntity(int param_1)

{
  Entity *pEVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375db;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    handle_fatal_error("World::CreateEntity() - Unknown entity type %d.\n");
    ExceptionList = puStack_8;
    return (Entity *)0x0;
  }
  ExceptionList = &local_c;
  pEVar1 = (Entity *)operator_new(0x3d8);
  local_4 = 0;
  if (pEVar1 != (Entity *)0x0) {
    pEVar1 = Entity::Entity(pEVar1);
    ExceptionList = local_c;
    return pEVar1;
  }
  ExceptionList = local_c;
  return (Entity *)0x0;
}



undefined4 * __thiscall World::virt_meth_0x545250(World *this)

{
  PathManager *pPVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pPVar1 = (PathManager *)operator_new(0x10);
  local_4 = 0;
  if (pPVar1 != (PathManager *)0x0) {
    pPVar1 = PathManager::PathManager(pPVar1);
    ExceptionList = local_c;
    return &pPVar1->vftptr_0x0;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



Party * __thiscall World::virt_meth_0x5452b0(World *this)

{
  Party *pPVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pPVar1 = (Party *)operator_new(0x14);
  local_4 = 0;
  if (pPVar1 != (Party *)0x0) {
    pPVar1 = Party::Party(pPVar1);
    ExceptionList = local_c;
    return pPVar1;
  }
  ExceptionList = local_c;
  return (Party *)0;
}



int * __thiscall World::virt_meth_0x545310(World *this)

{
  Journal *pJVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pJVar1 = (Journal *)operator_new(0x10);
  local_4 = 0;
  if (pJVar1 != (Journal *)0x0) {
    pJVar1 = Journal::Journal(pJVar1);
    ExceptionList = local_c;
    return (int *)pJVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



int * __thiscall World::virt_meth_0x545370(World *this)

{
  Encyclopedia *pEVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pEVar1 = (Encyclopedia *)operator_new(0x10);
  local_4 = 0;
  if (pEVar1 != (Encyclopedia *)0x0) {
    pEVar1 = Encyclopedia::Encyclopedia(pEVar1);
    ExceptionList = local_c;
    return (int *)pEVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



int * __thiscall World::virt_meth_0x5453d0(World *this)

{
  StoreManager *pSVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pSVar1 = (StoreManager *)operator_new(0x10);
  local_4 = 0;
  if (pSVar1 != (StoreManager *)0x0) {
    pSVar1 = StoreManager::StoreManager(pSVar1);
    ExceptionList = local_c;
    return (int *)pSVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



cls_0x5a42b0 * __thiscall World::virt_meth_0x545430(World *this)

{
  cls_0x5a42b0 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = (cls_0x5a42b0 *)operator_new(0x14);
  local_4 = 0;
  if (pcVar1 != (cls_0x5a42b0 *)0x0) {
    pcVar1 = cls_0x5a42b0::cls_0x5a42b0(pcVar1);
    ExceptionList = local_c;
    return pcVar1;
  }
  ExceptionList = local_c;
  return (cls_0x5a42b0 *)0;
}



int * __thiscall World::virt_meth_0x545490(World *this)

{
  WorldMap *pWVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pWVar1 = (WorldMap *)operator_new(0x80);
  local_4 = 0;
  if (pWVar1 != (WorldMap *)0x0) {
    pWVar1 = WorldMap::WorldMap(pWVar1);
    ExceptionList = local_c;
    return (int *)pWVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



void __thiscall World::ChangeState(World *this,int param_1)

{
  dword dVar1;
  int iVar2;
  
  if (((this->mbr_0x38 == 0) && (param_1 != 1)) && (param_1 != 2)) {
    handle_fatal_error("Invalid state change in World::ChangeState().");
  }
  if (((this->mbr_0x38 == 1) || (this->mbr_0x38 == 2)) && (param_1 != 3)) {
    handle_fatal_error("Invalid state change in World::ChangeState().");
  }
  if ((this->mbr_0x38 == 3) && (param_1 != 4)) {
    handle_fatal_error("Invalid state change in World::ChangeState().");
  }
  if ((this->mbr_0x38 == 4) && (param_1 != 3)) {
    handle_fatal_error("Invalid state change in Entity::ChangeState().");
  }
  if (param_1 == 4) {
    dVar1 = FUN_0056af50();
    this->mbr_0x38 = 4;
    this->mbr_0x58 = dVar1;
    return;
  }
  if (this->mbr_0x38 == 4) {
    iVar2 = FUN_0056af50();
    dVar1 = iVar2 - this->mbr_0x58;
    this->mbr_0x60 = dVar1;
    this->mbr_0x5c = dVar1;
  }
  this->mbr_0x38 = param_1;
  return;
}



void __thiscall World::virt_meth_0x5455b0(World *this)

{
  StoreManager *this_00;
  Encyclopedia *this_01;
  Party *this_02;
  PathManager__vftable_696388 **_Memory;
  DialogueManager *this_03;
  
  (*this->vftptr_0x0->FUN_00404b70_24)();
  (**(code **)(*(int *)((int)&this->mbr_0x8 + *(int *)(this->mbr_0x8 + 4)) + 0x50))();
  this_00 = (StoreManager *)this->mbr_0x100;
  if (this_00 != (StoreManager *)0x0) {
    StoreManager::~StoreManager(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  this_01 = (Encyclopedia *)this->mbr_0xfc;
  if (this_01 != (Encyclopedia *)0x0) {
    Encyclopedia::~Encyclopedia(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  if ((undefined4 *)this->mbr_0xf8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xf8)(1);
  }
  this_02 = (Party *)this->mbr_0xf4;
  if (this_02 != (Party *)0x0) {
    Party::~Party(this_02);
                    /* WARNING: Subroutine does not return */
    _free(this_02);
  }
  _Memory = (PathManager__vftable_696388 **)this->mbr_0xf0;
  if (_Memory != (PathManager__vftable_696388 **)0x0) {
    FUN_00560bb0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x3c);
  }
  if ((undefined4 *)this->mbr_0x8c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x8c)(1);
  }
  this_03 = (DialogueManager *)this->mbr_0x154;
  if (this_03 != (DialogueManager *)0x0) {
    DialogueManager::CommandAttackModeSelect(this_03);
                    /* WARNING: Subroutine does not return */
    _free(this_03);
  }
  if ((void *)this->mbr_0x128 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x128);
  }
  return;
}



void __thiscall World::virt_meth_0x546fd0(World *this)

{
  undefined4 *puVar1;
  World *pWVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  VFX_Parameter *this_00;
  undefined4 **ppuVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *****pppppuVar9;
  uint unaff_retaddr;
  undefined4 *local_70;
  undefined4 *local_6c;
  World *local_68 [2];
  undefined4 *****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006376a8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  local_68[0] = this;
  ChangeState(this,3);
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined4 *****)((uint)local_60[0] & 0xffffff00);
  pcVar3 = "none.map";
  do {
    pcVar7 = pcVar3;
    pcVar3 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)(local_68 + 1),"none.map",(uint)(pcVar7 + -0x653e8c));
  local_4 = 0;
  this_00 = (VFX_Parameter *)FUN_0056af40();
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar3 = "Mainmenu";
  do {
    pcVar7 = pcVar3;
    pcVar3 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"Mainmenu",(uint)(pcVar7 + -0x653e80));
  local_70 = VFX_Parameter::meth_0x4339b0(this_00,(int)local_48);
  if (local_70 != (undefined4 *)this_00->mbr_0x4) {
    bVar4 = FUN_00433930((int)local_48,(int)(local_70 + 3));
    if (!bVar4) {
      ppuVar6 = &local_70;
      goto LAB_005470a9;
    }
  }
  local_6c = (undefined4 *)this_00->mbr_0x4;
  ppuVar6 = &local_6c;
LAB_005470a9:
  puVar1 = *ppuVar6;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (puVar1 != (undefined4 *)this_00->mbr_0x4) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    pcVar3 = "Map Name";
    do {
      pcVar7 = pcVar3;
      pcVar3 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_2c,"Map Name",(uint)(pcVar7 + -0x653e74));
    piVar8 = (int *)FUN_004df070(puVar1 + 10,&local_6c,(int)local_2c);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (*piVar8 != puVar1[0xb]) {
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(local_68 + 1),(_String_base *)(*piVar8 + 0x28),0,0xffffffff);
    }
  }
  pppppuVar9 = local_60[0];
  if (local_4c < 0x10) {
    pppppuVar9 = local_60;
  }
  cVar5 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,pppppuVar9);
  pWVar2 = local_68[0];
  if (cVar5 != '\0') {
    pppppuVar9 = local_60[0];
    if (local_4c < 0x10) {
      pppppuVar9 = local_60;
    }
    (**(code **)(*(int *)((int)&local_68[0]->mbr_0x8 + *(int *)(local_68[0]->mbr_0x8 + 4)) + 0x58))
              (pppppuVar9);
    (**(code **)(pWVar2->mbr_0xc + 4))(local_68);
  }
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_60[0]);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall World::meth_0x5483a0(World *this)

{
  int iVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063781b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &World__vftable_691a1c_00691a1c;
  this->mbr_0x4 = (dword)&PTR_Get_mbr_0x3c_006919e4;
  this->mbr_0xc = (dword)&PTR_virt_meth_0x544b30_006919c0;
  *(undefined ***)((int)&this->mbr_0x8 + *(int *)(this->mbr_0x8 + 4)) =
       &PTR_virt_meth_0x548580_0069190c;
  iVar1 = *(int *)(this->mbr_0x8 + 4);
  *(int *)((int)&this->mbr_0x4 + iVar1) = iVar1 + -0x160;
  DAT_0070bd98 = 0;
  local_4 = 8;
  cls_0x4d8d70::meth_0x5479a0
            ((cls_0x4d8d70 *)&this->mbr_0x158,&local_10,*(int ***)(int **)this->mbr_0x15c,
             (int **)this->mbr_0x15c);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x15c);
}



void __thiscall World::virt_meth_0x548840(World *this)

{
  cls_0x616328 **ppcVar1;
  int **ppiVar2;
  cls_0x616328 *pcVar3;
  undefined4 *puVar4;
  undefined uVar5;
  undefined3 extraout_var;
  VisualEffect *this_00;
  undefined4 uVar7;
  void *this_01;
  int *piVar8;
  int iVar9;
  World *pWVar10;
  cls_0x616328 **ppcVar11;
  cls_0x616328 *pcStack_64;
  World *local_60;
  int iStack_5c;
  Interface *pIStack_58;
  Interface *pIStack_54;
  cls_0x616328 *apcStack_50 [20];
  Interface *pIVar6;
  
  local_60 = this;
  uVar5 = (*this->vftptr_0x0->FUN_00404b70_12)();
  pIVar6 = (Interface *)CONCAT31(extraout_var,uVar5);
  if (pIVar6 != (Interface *)0x0) {
    pIStack_58 = pIVar6;
    if (*(void **)&this->field_0x124 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)&this->field_0x124);
    }
    *(undefined4 *)&this->field_0x124 = 0;
    this->mbr_0x128 = 0;
    this->mbr_0x12c = 0;
    ppiVar2 = (int **)this->mbr_0x134;
    if (ppiVar2 == (int **)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x130,(int **)&pIStack_54,piVar8,(int *)ppiVar2);
    ppiVar2 = (int **)this->mbr_0x140;
    pIStack_54 = (Interface *)&this->mbr_0x13c;
    if (ppiVar2 == (int **)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60(pIStack_54,(int **)&pcStack_64,piVar8,(int *)ppiVar2);
    (**(code **)(*(int *)pIVar6 + 0x88))();
    ppcVar11 = apcStack_50;
    for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppcVar11 = (cls_0x616328 *)0x0;
      ppcVar11 = ppcVar11 + 1;
    }
    iStack_5c = 0;
    pWVar10 = this;
    do {
      (**(code **)(*(int *)pIVar6 + 0x60))(0x14,apcStack_50,0,&iStack_5c);
      if (apcStack_50[0] != (cls_0x616328 *)0x0) {
        ppcVar11 = apcStack_50;
        do {
          pcVar3 = *ppcVar11;
          pcStack_64 = pcVar3;
          if (pcVar3 != (cls_0x616328 *)0x0) {
            iVar9 = *(int *)&this->field_0x124;
            if ((iVar9 == 0) ||
               ((uint)((int)(this->mbr_0x12c - iVar9) >> 2) <=
                (uint)((int)(this->mbr_0x128 - iVar9) >> 2))) {
              cls_0x547290::meth_0x547290
                        ((cls_0x547290 *)&this->field_0x120,(undefined4 *)this->mbr_0x128,
                         (undefined4 *)0x1,&pcStack_64);
            }
            else {
              puVar4 = (undefined4 *)this->mbr_0x128;
              FUN_005457b0(puVar4,1,&pcStack_64);
              this->mbr_0x128 = (dword)(puVar4 + 1);
            }
            this_00 = (VisualEffect *)
                      FUN_006165e0(pcVar3,0,&DynamicObject::RTTI_Type_Descriptor,
                                   &VisualEffect::RTTI_Type_Descriptor,0);
            if (this_00 != (VisualEffect *)0x0) {
              VisualEffect::meth_0x59f8d0(this_00);
              VisualEffect::meth_0x59ff20(this_00,&local_60->mbr_0x130);
            }
          }
          ppcVar1 = ppcVar11 + 1;
          ppcVar11 = ppcVar11 + 1;
          pWVar10 = local_60;
          pIVar6 = pIStack_58;
        } while (*ppcVar1 != (cls_0x616328 *)0x0);
      }
    } while (iStack_5c != 0);
    FUN_00548130((undefined *)&pWVar10->mbr_0x130);
    if ((int **)pWVar10->mbr_0x134 == (int **)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)pWVar10->mbr_0x134;
    }
    if (piVar8 != (int *)pWVar10->mbr_0x134) {
      do {
        FUN_004e7bf0((void *)piVar8[2],(int *)pIVar6);
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)pWVar10->mbr_0x134);
    }
    if (DAT_0070bd98 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = DAT_0070bd98 + 3;
    }
    uVar7 = (**(code **)(*(int *)(*(int *)(piVar8[1] + 4) + 4 + (int)piVar8) + 0x5c))();
    piVar8 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar8 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    this_01 = (void *)(**(code **)(*piVar8 + 0x54))(uVar7);
    if (this_01 != (void *)0x0) {
      FUN_00573550(this_01,pIStack_58);
    }
  }
  return;
}



World * __thiscall World::World(World *this,int *param_1)

{
  int iVar1;
  int **ppiVar2;
  dword dVar3;
  int *piVar4;
  Exception__vftable_64787c *local_14;
  char *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    this->mbr_0x8 = (dword)&DAT_00691a94;
    this->mbr_0x10 = (dword)&DAT_00691a8c;
  }
  this->vftptr_0x0 = &World__vftable_691a1c_00691a1c;
  this->mbr_0x4 = (dword)&PTR_Get_mbr_0x3c_006919e4;
  this->mbr_0xc = (dword)&PTR_virt_meth_0x544b30_006919c0;
  *(undefined ***)((int)&this->mbr_0x8 + *(int *)(this->mbr_0x8 + 4)) =
       &PTR_virt_meth_0x548580_0069190c;
  iVar1 = *(int *)(this->mbr_0x8 + 4);
  *(int *)((int)&this->mbr_0x4 + iVar1) = iVar1 + -0x160;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 1;
  this->mbr_0x1c = 1;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x30 = dVar3;
  this->mbr_0x34 = 0;
  local_4 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 6;
  this->mbr_0x44 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0x1e;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0x3f800000;
  this->mbr_0x78 = 10;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  cls_0x5aa3d0::cls_0x5aa3d0((cls_0x5aa3d0 *)&this->field_0x90);
  local_4._0_1_ = 1;
  cls_0x5aa3d0::cls_0x5aa3d0((cls_0x5aa3d0 *)&this->field_0xb8);
  this->mbr_0xe0 = 0;
  local_4._0_1_ = 2;
  *(undefined *)&this->mbr_0xe4 = param_1._0_1_;
  dVar3 = FUN_0059ec40();
  this->mbr_0xe8 = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0xe8 + 4) = this->mbr_0xe8;
  *(dword *)this->mbr_0xe8 = this->mbr_0xe8;
  *(dword *)(this->mbr_0xe8 + 8) = this->mbr_0xe8;
  this->mbr_0xec = 0;
  local_4._0_1_ = 3;
  this->mbr_0xf0 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0xfc = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  cls_0x56ae70::cls_0x56ae70((cls_0x56ae70 *)&this->field_0x108);
  local_4._0_1_ = 4;
  cls_0x569f10::cls_0x569f10((cls_0x569f10 *)&this->field_0x118);
  this->mbr_0x128 = 0;
  this->mbr_0x130 = 0;
  this->mbr_0x134 = 0;
  this->mbr_0x138 = 0;
  local_4._0_1_ = 6;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x140 = dVar3;
  this->mbr_0x144 = 0;
  local_4._0_1_ = 7;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x14c = dVar3;
  this->mbr_0x150 = 0;
  this->mbr_0x154 = 0;
  local_4._0_1_ = 8;
  *(undefined *)&this->mbr_0x158 = param_1._0_1_;
  dVar3 = FUN_0059ec40();
  this->mbr_0x15c = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0x15c + 4) = this->mbr_0x15c;
  *(dword *)this->mbr_0x15c = this->mbr_0x15c;
  *(dword *)(this->mbr_0x15c + 8) = this->mbr_0x15c;
  this->mbr_0x160 = 0;
  ppiVar2 = (int **)this->mbr_0x30;
  local_4 = CONCAT31(local_4._1_3_,9);
  if (ppiVar2 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x2c,&param_1,piVar4,(int *)ppiVar2);
  if (DAT_0070bd98 != (World *)0x0) {
    local_14 = &Exception__vftable_64787c_0064787c;
    local_10 = "World object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_14,&DAT_006d8834);
  }
  DAT_0070bd98 = this;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall World::virt_meth_0x548cf0(World *this,byte param_1)

{
  meth_0x5483a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/World.h"
