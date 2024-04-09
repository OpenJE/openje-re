#include "../include/GameWorldMap.h"

int * __thiscall GameWorldMap::virt_meth_0x46f160(GameWorldMap *this,byte param_1)

{
  ~GameWorldMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



GameWorldMap * __thiscall GameWorldMap::~GameWorldMap(GameWorldMap *this)

{
  WorldMap *pWVar1;
  
  (this->WorldMap).vftptr_0x0 = (WorldMap__vftable_6a017c *)&GameWorldMap__vftable_668480_00668480;
  pWVar1 = WorldMap::~WorldMap(&this->WorldMap);
  return (GameWorldMap *)pWVar1;
}


#include "../include/GameWorldMap.h"
