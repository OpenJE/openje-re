#include "../include/Gfx_ModelMeshPkt.h"

Gfx_ModelMeshPkt * __thiscall Gfx_ModelMeshPkt::Gfx_ModelMeshPkt(Gfx_ModelMeshPkt *this,int param_1)

{
  dword *this_00;
  Gfx_BasePacketData *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006318d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  this_00 = &this->mbr_0x28;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ModelMeshPkt__vftable_66b4ac_0066b4ac;
  *this_00 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x45 = 0;
  this->mbr_0x46 = 0;
  this->mbr_0x47 = 0;
  this->mbr_0x48 = 0x3d4ccccd;
  this->mbr_0x4c = 0xffff0000;
  this->mbr_0x24 = param_1;
  local_4 = 1;
  pGVar1 = FUN_0051c870();
  this->mbr_0x50 = (dword)pGVar1;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_00,param_1 + 0x34);
  this->mbr_0x34 = this->mbr_0x50;
  if ((*(uint *)(this->mbr_0x24 + 0x24) & 6) == 0) {
    cls_0x505880::meth_0x4abb70((cls_0x505880 *)this_00);
  }
  this->mbr_0x54 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall Gfx_ModelMeshPkt::virt_meth_0x49ebe0(Gfx_ModelMeshPkt *this,byte param_1)

{
  ~Gfx_ModelMeshPkt(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



Gfx_ModelMeshPkt * __thiscall Gfx_ModelMeshPkt::~Gfx_ModelMeshPkt(Gfx_ModelMeshPkt *this)

{
  cls_0x4abc60 *this_00;
  Gfx_ModelMeshPkt *pGVar1;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006318d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ModelMeshPkt__vftable_66b4ac_0066b4ac;
  local_4 = 1;
  if ((undefined4 *)this->mbr_0x50 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x50)(1);
    this->mbr_0x50 = 0;
  }
  this_00 = (cls_0x4abc60 *)this->mbr_0x54;
  if (this_00 != (cls_0x4abc60 *)0x0) {
    cls_0x4abc60::meth_0x41fbd0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  local_4 = local_4 & 0xffffff00;
  pGVar1 = (Gfx_ModelMeshPkt *)cls_0x420270::meth_0x420270((cls_0x420270 *)&this->mbr_0x28);
  (this->Gfx_NodeAttribute).vftptr_0x0 = &Gfx_NodeAttribute__vftable_66b488_0066b488;
  if (0xf < (this->Gfx_NodeAttribute).mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->Gfx_NodeAttribute).mbr_0xc);
  }
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  ExceptionList = pvStack_c;
  return pGVar1;
}


#include "../include/Gfx_ModelMeshPkt.h"
