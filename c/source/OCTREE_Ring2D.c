#include "../include/OCTREE_Ring2D.h"

undefined4 __thiscall
OCTREE_Ring2D::virt_meth_0x53b290(OCTREE_Ring2D *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined uVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint uVar6;
  dword dVar7;
  
  *param_3 = 0;
  if (this->mbr_0x14 != 0) {
    dVar7 = this->mbr_0x18;
    if (((dVar7 != 0) &&
        (**(int **)(*(int *)(dVar7 + 0x14) + (0U >> ((byte)*(undefined4 *)(dVar7 + 0xc) & 0x1f)) * 4
                   ) != 0)) && (this->mbr_0x10 == 0)) {
      uVar1 = *(undefined4 *)(dVar7 + 0xc);
      iVar2 = *(int *)(dVar7 + 0x14);
      uVar5 = *(uint *)(dVar7 + 8);
      uVar6 = 0;
      iVar3 = **(int **)(iVar2 + (0U >> ((byte)uVar1 & 0x1f)) * 4);
      while (iVar3 != 0) {
        for (iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + (uVar6 >> ((byte)uVar1 & 0x1f)) * 4) +
                                      (uVar5 & uVar6) * 4) + 0x58); iVar2 != 0;
            iVar2 = *(int *)(iVar2 + 0x24)) {
          uVar4 = (*this->vftptr_0x0->virt_meth_0x5ba2b0_12)(this);
          if (CONCAT31(extraout_var,uVar4) != 0) {
            *(int *)(this->mbr_0x14 + this->mbr_0x10 * 4) = iVar2;
            this->mbr_0x10 = this->mbr_0x10 + 1;
            *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
          }
        }
        uVar1 = *(undefined4 *)(dVar7 + 0xc);
        iVar2 = *(int *)(dVar7 + 0x14);
        uVar5 = *(uint *)(dVar7 + 8);
        uVar6 = uVar6 + 1;
        iVar3 = *(int *)(*(int *)(iVar2 + (uVar6 >> ((byte)uVar1 & 0x1f)) * 4) + (uVar5 & uVar6) * 4
                        );
      }
      *(undefined4 *)(this->mbr_0x14 + this->mbr_0x10 * 4) = 0;
      this->mbr_0x10 = 0;
    }
    iVar2 = *(int *)(this->mbr_0x14 + this->mbr_0x10 * 4);
    for (uVar5 = 0; (iVar2 != 0 && (uVar5 < param_1 - 1U)); uVar5 = uVar5 + 1) {
      *(undefined4 *)(param_2 + uVar5 * 4) = *(undefined4 *)(iVar2 + 0x2c);
      dVar7 = this->mbr_0x10 + 1;
      this->mbr_0x10 = dVar7;
      iVar2 = *(int *)(this->mbr_0x14 + dVar7 * 4);
    }
    *(undefined4 *)(param_2 + uVar5 * 4) = 0;
    if (iVar2 != 0) {
      *param_3 = 1;
    }
    return 0;
  }
  return 5;
}



void __thiscall OCTREE_Ring2D::meth_0x5ba0e0(OCTREE_Ring2D *this,float param_1,float param_2)

{
  this->mbr_0x28 = (dword)param_1;
  this->mbr_0x30 = (dword)param_2;
  *(float *)&this->field_0x2c = param_1 * param_1;
  this[1].vftptr_0x0 = (OCTREE_Ring2D__vftable_6adafc *)(param_2 * param_2);
  return;
}



OCTREE_Ring2D * __thiscall OCTREE_Ring2D::OCTREE_Ring2D(OCTREE_Ring2D *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x1c = local_1;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x20 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x20 + 4) = this->mbr_0x20;
  *(dword *)this->mbr_0x20 = this->mbr_0x20;
  *(dword *)(this->mbr_0x20 + 8) = this->mbr_0x20;
  this->mbr_0x24 = 0;
  this->vftptr_0x0 = &OCTREE_Ring2D__vftable_6adafc_006adafc;
  return this;
}


#include "../include/OCTREE_Ring2D.h"
