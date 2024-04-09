#include "../include/OCTREE_Rect2D.h"

void __thiscall OCTREE_Rect2D::meth_0x5b9490(OCTREE_Rect2D *this,float param_1,dword param_2)

{
  this->mbr_0x48 = param_2;
  this->mbr_0x60 = 0x3f800000;
  this->mbr_0x64 = 0x3f800000;
  this->mbr_0x28 = (dword)-(param_1 * 0.5);
  this->mbr_0x2c = 0;
  this->mbr_0x40 = (dword)(param_1 * 0.5);
  this->mbr_0x30 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x70 = 0xbf800000;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0xbf800000;
  this->mbr_0xb0 = 0;
  return;
}



undefined4 __thiscall OCTREE_Rect2D::virt_meth_0x5b9df0(OCTREE_Rect2D *this,float *param_1)

{
  float fVar1;
  float fVar2;
  dword *pdVar3;
  dword *pdVar4;
  int iVar5;
  
  fVar1 = param_1[8];
  fVar2 = *param_1;
  this->mbr_0x4 = (dword)param_1[0xc];
  this->mbr_0x8 = (dword)param_1[0xd];
  this->mbr_0xc = (dword)param_1[0xe];
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x58,fVar2,fVar1,(float *)&this->mbr_0x88);
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x64,fVar2,fVar1,(float *)&this->mbr_0x94);
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x70,fVar2,fVar1,(float *)&this->mbr_0xa0);
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x7c,fVar2,fVar1,(float *)&this->mbr_0xac);
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x28,fVar2,fVar1,(float *)&this->mbr_0x34);
  cls_0x5220a0::meth_0x5220a0((cls_0x5220a0 *)&this->mbr_0x40,fVar2,fVar1,(float *)&this->mbr_0x4c);
  pdVar3 = &this->mbr_0xb8;
  pdVar4 = &this->mbr_0x90;
  iVar5 = 4;
  do {
    fVar1 = (float)*pdVar4;
    if ((float)pdVar4[-2] <= 0.0) {
      if ((float)pdVar4[-1] <= 0.0) {
        if (fVar1 <= 0.0) {
          *pdVar3 = 7;
        }
        else {
          *pdVar3 = 6;
        }
      }
      else if (fVar1 <= 0.0) {
        *pdVar3 = 5;
      }
      else {
        *pdVar3 = 4;
      }
    }
    else if ((float)pdVar4[-1] <= 0.0) {
      if (fVar1 <= 0.0) {
        *pdVar3 = 3;
      }
      else {
        *pdVar3 = 2;
      }
    }
    else if (fVar1 <= 0.0) {
      *pdVar3 = 1;
    }
    else {
      *pdVar3 = 0;
    }
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((undefined4 *)this->mbr_0x18 != (undefined4 *)0x0) {
    *(undefined4 *)this->mbr_0x18 = 0;
    **(undefined4 **)
      (*(int *)(this->mbr_0x18 + 0x14) +
      (0U >> ((byte)*(undefined4 *)(this->mbr_0x18 + 0xc) & 0x1f)) * 4) = 0;
  }
  return 0;
}



OCTREE_Rect2D * __thiscall OCTREE_Rect2D::OCTREE_Rect2D(OCTREE_Rect2D *this)

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
  this->vftptr_0x0 = &OCTREE_Rect2D__vftable_6adad8_006adad8;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
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
  return this;
}


#include "../include/OCTREE_Rect2D.h"
