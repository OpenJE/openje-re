#include "../include/GameParty.h"

GameParty * __thiscall GameParty::GameParty(GameParty *this)

{
  Party::Party(&this->Party);
  (this->Party).vftptr_0x0 = (Party__vftable_6a2e74 *)&GameParty__vftable_667564_00667564;
  this->mbr_0x14 = 0;
  return this;
}


#include "../include/GameParty.h"
