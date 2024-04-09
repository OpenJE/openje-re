#include "../include/GameMap.h"

GameMap * __thiscall GameMap::GameMap(GameMap *this)

{
  Map::Map(&this->Map);
  (this->Map).vftptr_0x0 = (Map__vftable_699fa4 *)&GameMap__vftable_6670c4_006670c4;
  return this;
}



GameMap * __thiscall GameMap::~GameMap(GameMap *this)

{
  Map *pMVar1;
  
  (this->Map).vftptr_0x0 = (Map__vftable_699fa4 *)&GameMap__vftable_6670c4_006670c4;
  pMVar1 = Map::~Map(&this->Map);
  return (GameMap *)pMVar1;
}



void __thiscall GameMap::virt_meth_0x46cae0(GameMap *this,int *param_1)

{
  int iVar1;
  
  Map::virt_meth_0x56df50(&this->Map,param_1);
  if (param_1[0x77] == *(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xe4)) {
    iVar1 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                         &GamePlayer::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      (this->Map).mbr_0x4 = 0;
    }
  }
  return;
}



undefined4 * __thiscall GameMap::virt_meth_0x46cb90(GameMap *this,byte param_1)

{
  ~GameMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameMap.h"
