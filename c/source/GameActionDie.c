#include "../include/GameActionDie.h"

GameActionDie * __thiscall GameActionDie::GameActionDie(GameActionDie *this)

{
  ActionDie::ActionDie(&this->ActionDie);
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  (this->ActionDie).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionDie__vftable_648694_00648694;
  this->mbr_0x1c = 7;
  return this;
}



GameActionDie * __thiscall GameActionDie::~GameActionDie(GameActionDie *this)

{
  GameActionDie *pGVar1;
  
  (this->ActionDie).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionDie__vftable_648694_00648694;
  pGVar1 = (GameActionDie *)Action::~Action((Action *)this);
  return pGVar1;
}



undefined4 * __thiscall GameActionDie::virt_meth_0x405040(GameActionDie *this,byte param_1)

{
  ~GameActionDie(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameActionDie.h"
