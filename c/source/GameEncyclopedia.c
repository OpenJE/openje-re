#include "../include/GameEncyclopedia.h"

void __thiscall GameEncyclopedia::virt_meth_0x462950(GameEncyclopedia *this)

{
  Encyclopedia::virt_meth_0x58f2a0(&this->Encyclopedia);
  (*((this->Encyclopedia).vftptr_0x0)->virt_meth_0x58f750_12)
            (&this->Encyclopedia,(undefined4 *)"index.enc");
  return;
}



int * __thiscall GameEncyclopedia::virt_meth_0x46f0e0(GameEncyclopedia *this,byte param_1)

{
  ~GameEncyclopedia(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



GameEncyclopedia * __thiscall GameEncyclopedia::~GameEncyclopedia(GameEncyclopedia *this)

{
  Encyclopedia *pEVar1;
  
  (this->Encyclopedia).vftptr_0x0 =
       (Encyclopedia__vftable_69d88c *)&GameEncyclopedia__vftable_668430_00668430;
  pEVar1 = Encyclopedia::~Encyclopedia(&this->Encyclopedia);
  return (GameEncyclopedia *)pEVar1;
}


#include "../include/GameEncyclopedia.h"
