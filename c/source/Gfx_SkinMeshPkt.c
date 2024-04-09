#include "../include/Gfx_SkinMeshPkt.h"

Gfx_SkinMeshPkt * __thiscall Gfx_SkinMeshPkt::Gfx_SkinMeshPkt(Gfx_SkinMeshPkt *this,int param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631811;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_SkinMeshPkt__vftable_66b4a0_0066b4a0;
  this->mbr_0x24 = param_1;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x90 = dVar1;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x99 = 0;
  this->mbr_0x9c = 0x3f800000;
  this->mbr_0xa0 = 0x3f800000;
  this->mbr_0xa4 = 0x3f800000;
  this->mbr_0xa8 = 1;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 1;
  this->mbr_0xb4 = 0;
  this->mbr_0xbc = 1;
  this->mbr_0xc0 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x64 = 0x3f800000;
  this->mbr_0x50 = 0x3f800000;
  this->mbr_0x3c = 0x3f800000;
  this->mbr_0x28 = 0x3f800000;
  local_4._0_1_ = 1;
  this->mbr_0x68 = *(dword *)(this->mbr_0x24 + 0x58);
  this->mbr_0xb8 = (dword)this;
  puVar2 = (undefined4 *)operator_new(0x4c);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 6;
    puVar2 = puVar2 + 1;
    _eh_vector_constructor_iterator_
              (puVar2,0xc,6,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
  }
  this->mbr_0x78 = (dword)puVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar3 = operator_new(*(uint *)(param_1 + 0x58));
  this->mbr_0x74 = (dword)pvVar3;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      *(undefined *)(uVar4 + this->mbr_0x74) = 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x58));
  }
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0x3f800000;
  this->mbr_0xc4 = 0x808080;
  meth_0x507b30(this);
  ExceptionList = local_c;
  return this;
}



int * __thiscall Gfx_SkinMeshPkt::virt_meth_0x49e2a0(Gfx_SkinMeshPkt *this,byte param_1)

{
  ~Gfx_SkinMeshPkt(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



Gfx_SkinMeshPkt * __thiscall Gfx_SkinMeshPkt::~Gfx_SkinMeshPkt(Gfx_SkinMeshPkt *this)

{
  void *pvVar1;
  int **ppiVar2;
  int *piVar3;
  Gfx_SkinMeshPkt *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631856;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_SkinMeshPkt__vftable_66b4a0_0066b4a0;
  local_4 = 1;
  local_10 = this;
  meth_0x49e3d0(this);
  if ((void *)this->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x74);
  }
  pvVar1 = (void *)this->mbr_0x70;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  pvVar1 = (void *)this->mbr_0x78;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0xc,*(int *)((int)pvVar1 + -4),GUI::Interface::meth_0x4f6d40);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  ppiVar2 = (int **)this->mbr_0x90;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x8c,(int **)&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x90);
}



void __thiscall Gfx_SkinMeshPkt::meth_0x49e3d0(Gfx_SkinMeshPkt *this)

{
  cls_0x4ac210 *this_00;
  
  if ((this->mbr_0xa8 != 0) &&
     (this_00 = (cls_0x4ac210 *)this->mbr_0xac, this_00 != (cls_0x4ac210 *)0x0)) {
    cls_0x4ac210::meth_0x4ac210(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  return;
}



void __thiscall Gfx_SkinMeshPkt::meth_0x507b30(Gfx_SkinMeshPkt *this)

{
  cls_0x4ac210 *this_00;
  cls_0x4abe60 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006356db;
  local_c = ExceptionList;
  if ((this->mbr_0xa8 != 0) &&
     (this_00 = (cls_0x4ac210 *)this->mbr_0xac, this_00 != (cls_0x4ac210 *)0x0)) {
    ExceptionList = &local_c;
    cls_0x4ac210::meth_0x4ac210(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = &local_c;
  pcVar1 = (cls_0x4abe60 *)operator_new(0x18);
  local_4 = 0;
  if (pcVar1 == (cls_0x4abe60 *)0x0) {
    pcVar1 = (cls_0x4abe60 *)0x0;
  }
  else {
    pcVar1 = cls_0x4abe60::cls_0x4abe60(pcVar1);
  }
  this->mbr_0xac = (dword)pcVar1;
  local_4 = 0xffffffff;
  cls_0x4abe60::meth_0x4ac240(pcVar1,*(uint *)(this->mbr_0x24 + 0x88));
  this->mbr_0xa8 = 1;
  ExceptionList = local_c;
  return;
}


#include "../include/Gfx_SkinMeshPkt.h"
