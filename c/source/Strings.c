#include "../include/Strings.h"

Strings * __thiscall Strings::~Strings(Strings *this)

{
  Strings *in_EAX;
  
  this->vftptr_0x0 = &Strings__vftable_6a18f4_006a18f4;
  DAT_0070c664 = 0;
  return in_EAX;
}



Strings * __thiscall Strings::Strings(Strings *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  this->vftptr_0x0 = &Strings__vftable_6a18f4_006a18f4;
  if (DAT_0070c664 != (Strings *)0x0) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Strings object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  DAT_0070c664 = this;
  puVar1 = (undefined4 *)FUN_0056af30();
  puVar2 = (undefined4 *)FUN_0056af20();
  SS::EngineStringSystem::virt_meth_0x56bca0((EngineStringSystem *)&DAT_0070c2d8,puVar2,puVar1);
  return this;
}



undefined4 * __thiscall Strings::virt_meth_0x59c2a0(Strings *this,byte param_1)

{
  ~Strings(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/Strings.h"
