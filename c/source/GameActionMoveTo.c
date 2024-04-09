#include "../include/GameActionMoveTo.h"

GameActionMoveTo * __thiscall GameActionMoveTo::GameActionMoveTo(GameActionMoveTo *this)

{
  ActionMoveTo::ActionMoveTo(&this->ActionMoveTo);
  (this->ActionMoveTo).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionMoveTo__vftable_649c1c_00649c1c;
  return this;
}



GameActionMoveTo * __thiscall GameActionMoveTo::~GameActionMoveTo(GameActionMoveTo *this)

{
  ActionMoveTo *pAVar1;
  
  (this->ActionMoveTo).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionMoveTo__vftable_649c1c_00649c1c;
  pAVar1 = ActionMoveTo::~ActionMoveTo(&this->ActionMoveTo);
  return (GameActionMoveTo *)pAVar1;
}



undefined4 * __thiscall GameActionMoveTo::virt_meth_0x4058b0(GameActionMoveTo *this,byte param_1)

{
  ~GameActionMoveTo(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall GameActionMoveTo::virt_meth_0x406780(GameActionMoveTo *this)

{
  GameEntity *this_00;
  
  this_00 = (GameEntity *)
            FUN_006165e0((cls_0x616328 *)(this->ActionMoveTo).mbr_0x14,0,
                         &Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
  if (this_00 != (GameEntity *)0x0) {
    net::critical_section::meth_0x548f90
              ((critical_section *)((int)&this_00->mbr_0x4 + *(int *)(this_00->mbr_0x4 + 4)));
    GameEntity::QueueAnimEvent(this_00,1,0);
  }
  return;
}



void __thiscall GameActionMoveTo::meth_0x55b350(GameActionMoveTo *this,int param_1)

{
  (this->ActionMoveTo).mbr_0x1c = param_1;
  if (param_1 != 0) {
    (this->ActionMoveTo).mbr_0x20 = *(dword *)(param_1 + 0x1dc);
  }
  return;
}



void __thiscall GameActionMoveTo::meth_0x55b420(GameActionMoveTo *this,char param_1)

{
  (this->ActionMoveTo).mbr_0x3d = param_1;
  *(bool *)((this->ActionMoveTo).mbr_0x14 + 0x3a2) = param_1 == '\0';
  return;
}


#include "../include/GameActionMoveTo.h"
