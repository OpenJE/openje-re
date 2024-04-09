#include "../include/VFX_System.h"

VFX_System * __thiscall VFX_System::VFX_System(VFX_System *this)

{
  this->vftptr_0x0 = &VFX_System__vftable_66fc3c_0066fc3c;
  return this;
}



VFX_System * __thiscall VFX_System::~VFX_System(VFX_System *this)

{
  VFX_System *pVVar1;
  
  this->vftptr_0x0 = &VFX_System__vftable_66fc3c_0066fc3c;
  pVVar1 = (VFX_System *)FUN_004b83d0();
  return pVVar1;
}



undefined4 * __thiscall VFX_System::virt_meth_0x4b8460(VFX_System *this,byte param_1)

{
  ~VFX_System(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/VFX_System.h"
