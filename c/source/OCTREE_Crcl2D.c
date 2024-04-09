#include "../include/OCTREE_Crcl2D.h"

void __thiscall OCTREE_Crcl2D::meth_0x52ee80(OCTREE_Crcl2D *this,float param_1)

{
  this->mbr_0x28 = (dword)param_1;
  this[1].vftptr_0x0 = (OCTREE_Crcl2D__vftable_6791d0 *)(param_1 * param_1);
  return;
}



undefined4 __thiscall
OCTREE_Crcl2D::virt_meth_0x52f010(OCTREE_Crcl2D *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 uVar6;
  float local_2c;
  float local_24 [6];
  float local_c;
  float local_8;
  float local_4;
  
  bVar4 = true;
  local_2c = 0.0;
  pfVar5 = (float *)FUN_00521eb0(local_24,param_1,param_2);
  local_c = *pfVar5;
  local_8 = pfVar5[1];
  local_4 = pfVar5[2];
  pfVar5 = (float *)FUN_00521f00(local_24,param_1,param_2);
  fVar2 = *pfVar5;
  fVar3 = pfVar5[2];
  if ((float)this->mbr_0x4 < fVar2 == (NAN((float)this->mbr_0x4) || NAN(fVar2))) {
    if ((float)this->mbr_0x4 <= local_c) {
      if (((float)this->mbr_0x28 < (float)this->mbr_0x4 - fVar2) ||
         ((float)this->mbr_0x28 < local_c - (float)this->mbr_0x4)) {
        bVar4 = false;
      }
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)this->mbr_0x4 - local_c;
      fVar1 = fVar1 * fVar1;
      fVar2 = fVar2 - (float)this->mbr_0x4;
      local_2c = fVar2 * fVar2;
    }
  }
  else {
    fVar2 = fVar2 - (float)this->mbr_0x4;
    fVar1 = fVar2 * fVar2;
    local_c = (float)this->mbr_0x4 - local_c;
    local_2c = local_c * local_c;
  }
  if (*(float *)&this->field_0xc < fVar3 == (NAN(*(float *)&this->field_0xc) || NAN(fVar3))) {
    if (*(float *)&this->field_0xc <= local_4) {
      if (((float)this->mbr_0x28 < *(float *)&this->field_0xc - fVar3) ||
         ((float)this->mbr_0x28 < local_4 - *(float *)&this->field_0xc)) {
        bVar4 = false;
      }
    }
    else {
      local_4 = *(float *)&this->field_0xc - local_4;
      fVar1 = local_4 * local_4 + fVar1;
      fVar3 = fVar3 - *(float *)&this->field_0xc;
      local_2c = fVar3 * fVar3 + local_2c;
    }
  }
  else {
    fVar3 = fVar3 - *(float *)&this->field_0xc;
    fVar1 = fVar3 * fVar3 + fVar1;
    local_4 = *(float *)&this->field_0xc - local_4;
    local_2c = local_4 * local_4 + local_2c;
  }
  if ((float)this[1].vftptr_0x0 < fVar1) {
    return 0;
  }
  if ((!bVar4) ||
     (uVar6 = 2, local_2c < (float)this[1].vftptr_0x0 == (local_2c == (float)this[1].vftptr_0x0))) {
    uVar6 = 1;
  }
  return uVar6;
}



OCTREE_Crcl2D * __thiscall OCTREE_Crcl2D::OCTREE_Crcl2D(OCTREE_Crcl2D *this)

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
  this->vftptr_0x0 = &OCTREE_Crcl2D__vftable_6791d0_006791d0;
  return this;
}


#include "../include/OCTREE_Crcl2D.h"
