#include "../include/GameActionWait.h"

GameActionWait * __thiscall GameActionWait::GameActionWait(GameActionWait *this)

{
  ActionWait::ActionWait(&this->ActionWait);
  (this->ActionWait).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionWait__vftable_64bc6c_0064bc6c;
  return this;
}



GameActionWait * __thiscall GameActionWait::~GameActionWait(GameActionWait *this)

{
  Action *pAVar1;
  
  (this->ActionWait).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionWait__vftable_64bc6c_0064bc6c;
  pAVar1 = Action::~Action((Action *)this);
  return (GameActionWait *)pAVar1;
}



undefined4 * __thiscall GameActionWait::virt_meth_0x407f60(GameActionWait *this,byte param_1)

{
  ~GameActionWait(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameActionWait.h"
