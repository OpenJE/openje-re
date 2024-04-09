#include "../include/GameActionIdle.h"

GameActionIdle * __thiscall GameActionIdle::GameActionIdle(GameActionIdle *this)

{
  ActionIdle::ActionIdle(&this->ActionIdle);
  (this->ActionIdle).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionIdle__vftable_6497c4_006497c4;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 1;
  return this;
}



GameActionIdle * __thiscall GameActionIdle::~GameActionIdle(GameActionIdle *this)

{
  GameActionIdle *pGVar1;
  
  (this->ActionIdle).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionIdle__vftable_6497c4_006497c4;
  pGVar1 = (GameActionIdle *)Action::~Action((Action *)this);
  return pGVar1;
}



undefined4 * __thiscall GameActionIdle::virt_meth_0x405690(GameActionIdle *this,byte param_1)

{
  ~GameActionIdle(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameActionIdle.h"
