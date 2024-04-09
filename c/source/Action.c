#include "../include/Action.h"

Action * __thiscall Action::~Action(Action *this)

{
  byte in_stack_00000004;
  
  this->vftptr_0x0 = &Action__vftable_647888_00647888;
  if ((in_stack_00000004 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



Action * __thiscall Action::~Action(Action *this)

{
  Action *in_EAX;
  
  this->vftptr_0x0 = &Action__vftable_647888_00647888;
  return in_EAX;
}


#include "../include/Action.h"
