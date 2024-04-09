#include "../include/Interfaces.h"

Interfaces * __thiscall Interfaces::Interfaces(Interfaces *this)

{
  this->vftptr_0x0 = &Interfaces__vftable_69f3ec_0069f3ec;
  return this;
}



void __thiscall Interfaces::meth_0x596830(Interfaces *this)

{
  this->vftptr_0x0 = &Interfaces__vftable_69f3ec_0069f3ec;
  return;
}



undefined4 * __thiscall Interfaces::virt_meth_0x596840(Interfaces *this,byte param_1)

{
  meth_0x596830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/Interfaces.h"
