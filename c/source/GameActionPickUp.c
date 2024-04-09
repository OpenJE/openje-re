#include "../include/GameActionPickUp.h"

void __thiscall GameActionPickUp::meth_0x406a30(GameActionPickUp *this,int param_1)

{
  (this->ActionPickUp).mbr_0x18 = param_1;
  if (param_1 != 0) {
    (this->ActionPickUp).mbr_0x1c = *(dword *)(param_1 + 0x1dc);
  }
  return;
}



GameActionPickUp * __thiscall GameActionPickUp::GameActionPickUp(GameActionPickUp *this)

{
  ActionPickUp::ActionPickUp(&this->ActionPickUp);
  (this->ActionPickUp).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionPickUp__vftable_64a54c_0064a54c;
  return this;
}



GameActionPickUp * __thiscall GameActionPickUp::~GameActionPickUp(GameActionPickUp *this)

{
  Action *pAVar1;
  
  (this->ActionPickUp).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionPickUp__vftable_64a54c_0064a54c;
  pAVar1 = Action::~Action((Action *)this);
  return (GameActionPickUp *)pAVar1;
}



int __thiscall GameActionPickUp::meth_0x406ec0(GameActionPickUp *this)

{
  GameEntity *this_00;
  int iVar1;
  
  this_00 = (GameEntity *)
            FUN_006165e0((cls_0x616328 *)(this->ActionPickUp).mbr_0x14,0,
                         &Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
  if (this_00 != (GameEntity *)0x0) {
    net::critical_section::meth_0x548f90
              ((critical_section *)((int)&this_00->mbr_0x4 + *(int *)(this_00->mbr_0x4 + 4)));
    iVar1 = GameEntity::QueueAnimEvent(this_00,0x8d,0);
    return iVar1;
  }
  return 0;
}



undefined4 * __thiscall GameActionPickUp::virt_meth_0x4071a0(GameActionPickUp *this,byte param_1)

{
  ~GameActionPickUp(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameActionPickUp.h"
