#include "../include/GameActionGive.h"

GameActionGive * __thiscall GameActionGive::GameActionGive(GameActionGive *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&GameActionGive__vftable_649344_00649344;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



void __thiscall GameActionGive::meth_0x4052d0(GameActionGive *this,int param_1)

{
  this->mbr_0x24 = param_1;
  if (param_1 != 0) {
    this->mbr_0x28 = *(dword *)(param_1 + 0x1dc);
  }
  return;
}



void __thiscall GameActionGive::meth_0x4052f0(GameActionGive *this,dword param_1)

{
  this->mbr_0x2c = param_1;
  return;
}



undefined4 __thiscall GameActionGive::OnCreate(GameActionGive *this)

{
  dword dVar1;
  
  dVar1 = FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,
                       &GameCreature::RTTI_Type_Descriptor,0);
  this->mbr_0x1c = dVar1;
  if (dVar1 == 0) {
    handle_fatal_error("GameActionGive::OnCreate() - Giver is not a GameCreature.");
    return 0;
  }
  this->mbr_0x20 = *(dword *)(*(int *)(*(int *)(dVar1 + 4) + 4) + 0x1e0 + dVar1);
  return 0;
}


#include "../include/GameActionGive.h"
