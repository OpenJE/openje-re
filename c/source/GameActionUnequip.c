#include "../include/GameActionUnequip.h"

GameActionUnequip * __thiscall GameActionUnequip::GameActionUnequip(GameActionUnequip *this)

{
  ActionUnequip::ActionUnequip(&this->ActionUnequip);
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  (this->ActionUnequip).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionUnequip__vftable_64b3fc_0064b3fc;
  return this;
}



GameActionUnequip * __thiscall GameActionUnequip::~GameActionUnequip(GameActionUnequip *this)

{
  GameActionUnequip *pGVar1;
  
  (this->ActionUnequip).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionUnequip__vftable_64b3fc_0064b3fc;
  pGVar1 = (GameActionUnequip *)Action::~Action((Action *)this);
  return pGVar1;
}



void __thiscall GameActionUnequip::meth_0x407bc0(GameActionUnequip *this)

{
  cls_0x616328 *pcVar1;
  int iVar2;
  
  if (this->mbr_0x24 == 0) {
    pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    if (pcVar1 != (cls_0x616328 *)0x0) {
      iVar2 = FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0)
      ;
      if (iVar2 != 0) {
        GameServer::meth_0x46ec30
                  (*(GameServer **)(DAT_0070bd90 + 0x18),*(int *)&(this->ActionUnequip).field_0x14,
                   *(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2);
      }
    }
    this->mbr_0x24 = 1;
  }
  return;
}



void __thiscall GameActionUnequip::virt_meth_0x407c20(GameActionUnequip *this)

{
  meth_0x407bc0(this);
  DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  return;
}



undefined4 * __thiscall GameActionUnequip::virt_meth_0x407c30(GameActionUnequip *this,byte param_1)

{
  ~GameActionUnequip(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall GameActionUnequip::virt_meth_0x407c50(GameActionUnequip *this,uint param_1)

{
  undefined4 uVar1;
  
  if (this->mbr_0x20 == 0) {
    (this->ActionUnequip).mbr_0x18 = 1;
    return 0;
  }
  if ((this->mbr_0x1c != 0) && (this->mbr_0x1c <= param_1)) {
    meth_0x407bc0(this);
    (this->ActionUnequip).mbr_0x18 = 1;
  }
  uVar1 = ActionDie::virt_meth_0x5638d0((ActionDie *)this);
  return uVar1;
}


#include "../include/GameActionUnequip.h"
