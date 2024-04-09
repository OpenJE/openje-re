#include "../include/cls_0x4a1f30.h"

void __thiscall cls_0x4a1f30::meth_0x4a1f30(cls_0x4a1f30 *this)

{
  if (this->granny_local_pose != (granny_local_pose *)0x0) {
    _GrannyFreeLocalPose_4(this->granny_local_pose);
    this->granny_local_pose = (granny_local_pose *)0x0;
  }
  if (this->granny_mesh_binding != (granny_mesh_binding *)0x0) {
    _GrannyFreeMeshBinding_4(this->granny_mesh_binding);
    this->granny_mesh_binding = (granny_mesh_binding *)0x0;
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  if (this->granny_file != (granny_file *)0x0) {
    _GrannyFreeFile_4(this->granny_file);
    this->granny_file = (granny_file *)0x0;
    this->mbr_0x4 = 0;
    this->mbr_0x18 = 0x3f800000;
  }
  return;
}



void __thiscall cls_0x4a1f30::meth_0x4a4ba0(cls_0x4a1f30 *this)

{
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x374;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x374) {
    do {
      Gfx_AnimationObject::DestroyAnimationGroup(this,*(int **)(local_4.mbr_0x0 + 0xc));
      cls_0x41d550::meth_0x41d550(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x374);
  }
  cls_0x4542d0::meth_0x4a3250((cls_0x4542d0 *)&this->mbr_0x370);
  *(dword *)(this->mbr_0x374 + 4) = this->mbr_0x374;
  this->mbr_0x378 = 0;
  *(dword *)this->mbr_0x374 = this->mbr_0x374;
  *(dword *)(this->mbr_0x374 + 8) = this->mbr_0x374;
  return;
}



void __thiscall cls_0x4a1f30::meth_0x4a4c10(cls_0x4a1f30 *this)

{
  cls_0x4a1f30 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631cbe;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  meth_0x4a4ba0(this);
  meth_0x4a1f30(this);
  local_4 = 0xffffffff;
  cls_0x4542d0::meth_0x4a3a30
            ((cls_0x4542d0 *)&this->mbr_0x370,(int **)&local_10,*(int ***)(int **)this->mbr_0x374,
             (int **)this->mbr_0x374);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x374);
}


