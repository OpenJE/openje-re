#include "../include/OCTREE_Camera_.h"

OCTREE_Camera_ * __thiscall OCTREE_Camera_::OCTREE_Camera_(OCTREE_Camera_ *this)

{
  this->vftptr_0x0 = &OCTREE_Camera___vftable_6a86b0_006a86b0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x10 = 0x3f800000;
  this->mbr_0x24 = 0x3f800000;
  this->mbr_0x38 = 0x3f800000;
  this->mbr_0x4c = 0x3f800000;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x130 = 0;
  this->mbr_0x134 = 0;
  this->mbr_0x138 = 0;
  this->mbr_0x13c = 0;
  this->mbr_0x140 = 0;
  this->mbr_0x144 = 0;
  this->mbr_0x148 = 0;
  this->mbr_0x14c = 0;
  this->mbr_0x150 = 0;
  this->mbr_0x154 = 0;
  this->mbr_0x158 = 0;
  this->mbr_0x15c = 0;
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x16c = 0;
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 0;
  this->mbr_0x178 = 0;
  this->mbr_0x17c = 0;
  this->mbr_0x180 = 0;
  this->mbr_0x184 = 0;
  this->mbr_0x188 = 0;
  this->mbr_0x18c = 0;
  this->mbr_0x190 = 0;
  this->mbr_0x194 = 0;
  this->mbr_0x198 = 0;
  this->mbr_0x19c = 0;
  this->mbr_0x1a0 = 0;
  this->mbr_0x1a4 = 0;
  this->mbr_0x1a8 = 1;
  this->mbr_0x1ac = 0;
  this->mbr_0x1b0 = 0;
  return this;
}



void __thiscall OCTREE_Camera_::virt_meth_0x5bbcb0(OCTREE_Camera_ *this)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  
  if ((void **)this->mbr_0x1ac != (void **)0x0) {
    pvVar2 = *(void **)this->mbr_0x1ac;
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1ac);
  }
  if ((void *)this->mbr_0x1a4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1a4);
  }
  piVar3 = (int *)this->mbr_0x1b0;
  if (piVar3 != (int *)0x0) {
    if (*piVar3 != 0) {
      iVar4 = 0;
      do {
        piVar3 = (int *)(*(int *)(iVar4 + (int)piVar3) + 0x30);
        *piVar3 = *piVar3 + -1;
        pvVar2 = *(void **)(iVar4 + this->mbr_0x1b0);
        if (*(int *)((int)pvVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar2);
        }
        *(uint *)((int)pvVar2 + 0x18) = *(uint *)((int)pvVar2 + 0x18) & 0xfffffffd;
        piVar3 = (int *)this->mbr_0x1b0;
        iVar1 = iVar4 + 4;
        iVar4 = iVar4 + 4;
      } while (*(int *)(iVar1 + (int)piVar3) != 0);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1b0);
  }
                    /* WARNING: Subroutine does not return */
  _free(this);
}


#include "../include/OCTREE_Camera_.h"
