#include "../include/GameStoreManager.h"

int * __thiscall GameStoreManager::virt_meth_0x46f110(GameStoreManager *this,byte param_1)

{
  ~GameStoreManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



GameStoreManager * __thiscall GameStoreManager::~GameStoreManager(GameStoreManager *this)

{
  StoreManager *pSVar1;
  
  (this->StoreManager).vftptr_0x0 =
       (StoreManager__vftable_6a37a4 *)&GameStoreManager__vftable_668448_00668448;
  pSVar1 = StoreManager::~StoreManager(&this->StoreManager);
  return (GameStoreManager *)pSVar1;
}


#include "../include/GameStoreManager.h"
