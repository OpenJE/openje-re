#include "../include/GameWorld.h"

GameWorld * __thiscall GameWorld::~GameWorld(GameWorld *this)

{
  GameActionOperateContainer *this_00;
  char cVar1;
  int iVar2;
  GameWorld *pGVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->World).vftptr_0x0 = (World__vftable_691a1c *)&GameWorld__vftable_6685a4_006685a4;
  (this->World).mbr_0x4 = (dword)&PTR_Get_mbr_0x3c_0066856c;
  (this->World).mbr_0xc = (dword)&PTR_virt_meth_0x544b30_00668548;
  *(undefined ***)((int)&(this->World).mbr_0x8 + *(int *)((this->World).mbr_0x8 + 4)) =
       &PTR_virt_meth_0x46fd20_00668494;
  iVar2 = *(int *)((this->World).mbr_0x8 + 4);
  *(int *)((int)&(this->World).mbr_0x4 + iVar2) = iVar2 + -0x390;
  local_4 = 0;
  iVar2 = FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                       &GameClient::RTTI_Type_Descriptor,0);
  if (((iVar2 != 0) &&
      (this_00 = *(GameActionOperateContainer **)(*(int *)(iVar2 + 0xa0) + 0x24),
      this_00 != (GameActionOperateContainer *)0x0)) &&
     (cVar1 = GameActionOperateContainer::Get_mbr_0x20(this_00), cVar1 == '\0')) {
    GameActionOperateContainer::meth_0x430760(this_00);
  }
  local_4 = 0xffffffff;
  pGVar3 = (GameWorld *)World::meth_0x5483a0(&this->World);
  ExceptionList = pvStack_c;
  return pGVar3;
}



undefined4 * __thiscall GameWorld::virt_meth_0x46f820(GameWorld *this)

{
  GameParty *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameParty *)operator_new(0x18);
  local_4 = 0;
  if (pGVar1 != (GameParty *)0x0) {
    pGVar1 = GameParty::GameParty(pGVar1);
    ExceptionList = local_c;
    return (undefined4 *)pGVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



int * __thiscall GameWorld::virt_meth_0x46f880(GameWorld *this)

{
  GameJournal *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameJournal *)operator_new(0x1c);
  local_4 = 0;
  if (pGVar1 != (GameJournal *)0x0) {
    pGVar1 = GameJournal::GameJournal(pGVar1);
    ExceptionList = local_c;
    return (int *)pGVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}



int * __thiscall GameWorld::virt_meth_0x46f8e0(GameWorld *this)

{
  Encyclopedia *this_00;
  Encyclopedia *pEVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (Encyclopedia *)operator_new(0x10);
  local_4 = 0;
  pEVar1 = (Encyclopedia *)0x0;
  if (this_00 != (Encyclopedia *)0x0) {
    Encyclopedia::Encyclopedia(this_00);
    this_00->vftptr_0x0 = (Encyclopedia__vftable_69d88c *)&GameEncyclopedia__vftable_668430_00668430
    ;
    pEVar1 = this_00;
  }
  ExceptionList = local_c;
  return (int *)pEVar1;
}



int * __thiscall GameWorld::virt_meth_0x46f930(GameWorld *this)

{
  StoreManager *this_00;
  StoreManager *pSVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (StoreManager *)operator_new(0x10);
  local_4 = 0;
  pSVar1 = (StoreManager *)0x0;
  if (this_00 != (StoreManager *)0x0) {
    StoreManager::StoreManager(this_00);
    this_00->vftptr_0x0 = (StoreManager__vftable_6a37a4 *)&GameStoreManager__vftable_668448_00668448
    ;
    pSVar1 = this_00;
  }
  ExceptionList = local_c;
  return (int *)pSVar1;
}



int * __thiscall GameWorld::virt_meth_0x46f980(GameWorld *this)

{
  WorldMap *this_00;
  WorldMap *pWVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (WorldMap *)operator_new(0x80);
  local_4 = 0;
  pWVar1 = (WorldMap *)0x0;
  if (this_00 != (WorldMap *)0x0) {
    WorldMap::WorldMap(this_00);
    this_00->vftptr_0x0 = (WorldMap__vftable_6a017c *)&GameWorldMap__vftable_668480_00668480;
    pWVar1 = this_00;
  }
  ExceptionList = local_c;
  return (int *)pWVar1;
}



undefined4 * __thiscall GameWorld::virt_meth_0x46f9e0(GameWorld *this)

{
  GamePathManager *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GamePathManager *)operator_new(0x10);
  local_4 = 0;
  if (pGVar1 != (GamePathManager *)0x0) {
    pGVar1 = GamePathManager::GamePathManager(pGVar1);
    ExceptionList = local_c;
    return (undefined4 *)pGVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall GameWorld::virt_meth_0x470200(GameWorld *this,byte param_1)

{
  ~GameWorld(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall GameWorld::meth_0x470220(GameWorld *this)

{
  GameAmmo *pGVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  dword *pdVar4;
  undefined **ppuVar5;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630a8b;
  local_c = ExceptionList;
  pdVar4 = &this->mbr_0x164;
  ExceptionList = &local_c;
  for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar4 = 0;
    pdVar4 = pdVar4 + 1;
  }
  ppuVar5 = (undefined **)&DAT_006f7e14;
  do {
    pGVar1 = (GameAmmo *)operator_new(0x7b0);
    local_4 = 0;
    if (pGVar1 == (GameAmmo *)0x0) {
      pGVar1 = (GameAmmo *)0x0;
    }
    else {
      pGVar1 = GameAmmo::GameAmmo(pGVar1,1);
    }
    local_4 = 0xffffffff;
    ppuVar2 = ppuVar5;
    if ((undefined *)0xf < ppuVar5[5]) {
      ppuVar2 = (undefined **)*ppuVar5;
    }
    net::critical_section::meth_0x551880
              ((critical_section *)
               ((int)&(pGVar1->GameItem).GameEntity.mbr_0x4 +
               *(int *)((pGVar1->GameItem).GameEntity.mbr_0x4 + 4)),ppuVar2,0,0,(char)unaff_EDI,
               unaff_ESI);
    iVar3 = *(int *)((pGVar1->GameItem).GameEntity.mbr_0x4 + 4);
    ppuVar5 = ppuVar5 + 7;
    (&this->mbr_0x164)
    [*(int *)&(pGVar1->GameItem).GameEntity.Entity.DynamicObject.field_0x30c * 7 +
     *(int *)&(pGVar1->GameItem).GameEntity.Entity.DynamicObject.field_0x310] =
         *(dword *)((int)&(pGVar1->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.mbr_0xfc
                   + iVar3);
  } while ((int)ppuVar5 < 0x6f8044);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



GameWorld * __thiscall GameWorld::GameWorld(GameWorld *this,int param_1)

{
  DialogueManager *this_00;
  int iVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->World).mbr_0x8 = (dword)&DAT_00668644;
    (this->World).mbr_0x10 = (dword)&DAT_0066863c;
  }
  World::World(&this->World,(int *)0x0);
  (this->World).vftptr_0x0 = (World__vftable_691a1c *)&GameWorld__vftable_6685a4_006685a4;
  (this->World).mbr_0x4 = (dword)&PTR_Get_mbr_0x3c_0066856c;
  (this->World).mbr_0xc = (dword)&PTR_virt_meth_0x544b30_00668548;
  *(undefined ***)((int)&(this->World).mbr_0x8 + *(int *)((this->World).mbr_0x8 + 4)) =
       &PTR_virt_meth_0x46fd20_00668494;
  iVar1 = *(int *)((this->World).mbr_0x8 + 4);
  this_00 = (DialogueManager *)(iVar1 + -0x390);
  local_4 = 0;
  *(DialogueManager **)((int)&(this->World).mbr_0x4 + iVar1) = this_00;
  DialogueManager::CommandAttackModeSelect(this_00);
  meth_0x470220(this);
  ExceptionList = local_c;
  return this;
}


#include "../include/GameWorld.h"
