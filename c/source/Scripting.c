#include "../include/Scripting.h"

Scripting * __thiscall Scripting::~Scripting(Scripting *this)

{
  Scripting *in_EAX;
  
  this->vftptr_0x0 = &Scripting__vftable_6a1044_006a1044;
  DAT_0070c65c = 0;
  return in_EAX;
}



Scripting * __thiscall Scripting::Scripting(Scripting *this)

{
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  this->vftptr_0x0 = &Scripting__vftable_6a1044_006a1044;
  if (DAT_0070c65c != (Scripting *)0x0) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Scripting object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  DAT_0070c65c = this;
  return this;
}



undefined4 * __thiscall Scripting::virt_meth_0x59c080(Scripting *this,byte param_1)

{
  ~Scripting(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



void __thiscall Scripting::virt_meth_0x5b1510(Scripting *this)

{
                    /* WARNING: Could not recover jumptable at 0x005b1512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vftptr_0x0->virt_meth_0x404b70_20)((DialogueManager *)this);
  return;
}


#include "../include/Scripting.h"
