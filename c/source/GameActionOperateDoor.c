#include "../include/GameActionOperateDoor.h"

GameActionOperateDoor * __thiscall
GameActionOperateDoor::GameActionOperateDoor(GameActionOperateDoor *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionOperateDoor__vftable_64a074_0064a074;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 1;
  this->mbr_0x25 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



void __thiscall GameActionOperateDoor::meth_0x406700(GameActionOperateDoor *this,int param_1)

{
  this->mbr_0x18 = param_1;
  if (param_1 != 0) {
    this->mbr_0x1c = *(dword *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x1e0 + param_1);
  }
  return;
}



int __thiscall GameActionOperateDoor::meth_0x406730(GameActionOperateDoor *this)

{
  GameEntity *this_00;
  int iVar1;
  
  this_00 = (GameEntity *)
            FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,
                         &GameEntity::RTTI_Type_Descriptor,0);
  if (this_00 != (GameEntity *)0x0) {
    net::critical_section::meth_0x548f90
              ((critical_section *)((int)&this_00->mbr_0x4 + *(int *)(this_00->mbr_0x4 + 4)));
    iVar1 = GameEntity::QueueAnimEvent(this_00,0x79,0);
    return iVar1;
  }
  return 0;
}


#include "../include/GameActionOperateDoor.h"
