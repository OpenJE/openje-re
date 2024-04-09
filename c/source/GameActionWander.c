#include "../include/GameActionWander.h"

GameActionWander * __thiscall GameActionWander::GameActionWander(GameActionWander *this)

{
  ActionWander::ActionWander(&this->ActionWander);
  (this->ActionWander).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionWander__vftable_668454_00668454;
  return this;
}


#include "../include/GameActionWander.h"
