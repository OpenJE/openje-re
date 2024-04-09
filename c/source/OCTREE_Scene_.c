#include "../include/OCTREE_Scene_.h"

void __thiscall OCTREE_Scene_::virt_meth_0x5bd690(OCTREE_Scene_ *this)

{
  void *_Memory;
  
  if ((void **)this->mbr_0x28 == (void **)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  _Memory = *(void **)this->mbr_0x28;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x28);
}


#include "../include/OCTREE_Scene_.h"
