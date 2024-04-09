#include "../include/Gfx_LineSystem.h"

Gfx_LineSystem * __thiscall Gfx_LineSystem::~Gfx_LineSystem(Gfx_LineSystem *this)

{
  void *pvVar1;
  Gfx_LineSystem *pGVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635b6c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_LineSystem__vftable_675d48_00675d48;
  local_4 = 2;
  if ((void *)this->mbr_0xdc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdc);
  }
  if ((void *)this->mbr_0xe8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xe8);
  }
  pvVar1 = (void *)this->mbr_0x90;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0x94 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x94)(1);
    this->mbr_0x94 = 0;
  }
  if ((void *)this->mbr_0x10c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10c);
  }
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  local_4._0_1_ = 3;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0x24);
  local_4 = (uint)local_4._1_3_ << 8;
  pGVar2 = (Gfx_LineSystem *)cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  (this->Gfx_NodeAttribute).vftptr_0x0 = &Gfx_NodeAttribute__vftable_66b488_0066b488;
  if (0xf < (this->Gfx_NodeAttribute).mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->Gfx_NodeAttribute).mbr_0xc);
  }
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  ExceptionList = pvStack_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_LineSystem::virt_meth_0x50f760(Gfx_LineSystem *this,byte param_1)

{
  ~Gfx_LineSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



int __thiscall Gfx_LineSystem::meth_0x50f780(Gfx_LineSystem *this,int param_1)

{
  this->mbr_0xf4 = *(dword *)(param_1 + 0xf4);
  this->mbr_0xf8 = *(dword *)(param_1 + 0xf8);
  this->mbr_0xfc = *(dword *)(param_1 + 0xfc);
  this->mbr_0x100 = *(dword *)(param_1 + 0x100);
  this->mbr_0x104 = *(dword *)(param_1 + 0x104);
  cls_0x49d180::meth_0x50f560((cls_0x49d180 *)&this->mbr_0x108,param_1 + 0x108);
  return (int)this;
}



Gfx_LineSystem * __thiscall Gfx_LineSystem::Gfx_LineSystem(Gfx_LineSystem *this)

{
  undefined4 *puVar1;
  Gfx_BasePacketData *this_00;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635bd7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_LineSystem__vftable_675d48_00675d48;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xd4 = 0x3f800000;
  this->mbr_0xc0 = 0x3f800000;
  this->mbr_0xac = 0x3f800000;
  this->mbr_0x98 = 0x3f800000;
  local_4._0_1_ = 2;
  this->mbr_0xfc = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0x100 = 0xff;
  this->mbr_0x104 = 1;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0x118 = 1;
  this->mbr_0xd8 = 1;
  puVar1 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar1 + 1;
    *puVar1 = 1;
    _eh_vector_constructor_iterator_
              (puVar4,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  iVar3 = 0;
  local_4._0_1_ = 2;
  this->mbr_0x90 = (dword)puVar4;
  if (0 < (int)this->mbr_0xd8) {
    iVar2 = 0;
    do {
      *(undefined *)(this->mbr_0x90 + iVar2 + 0x1d) = 1;
      *(undefined *)(this->mbr_0x90 + iVar2 + 0x1e) = 1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < (int)this->mbr_0xd8);
  }
  this_00 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (this_00 != (Gfx_BasePacketData *)0x0) {
    Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
    this_00->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
    this->mbr_0x94 = (dword)this_00;
    ExceptionList = local_c;
    return this;
  }
  this->mbr_0x94 = 0;
  ExceptionList = local_c;
  return this;
}



Gfx_LineSystem * __thiscall Gfx_LineSystem::Gfx_LineSystem(Gfx_LineSystem *this,int param_1)

{
  undefined4 *puVar1;
  Gfx_BasePacketData *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635bd7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_LineSystem__vftable_675d48_00675d48;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xd4 = 0x3f800000;
  this->mbr_0xc0 = 0x3f800000;
  this->mbr_0xac = 0x3f800000;
  this->mbr_0x98 = 0x3f800000;
  local_4._0_1_ = 2;
  this->mbr_0xfc = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0x100 = 0xff;
  this->mbr_0x104 = 1;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0x118 = 1;
  this->mbr_0xd8 = 1;
  puVar1 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 1;
    _eh_vector_constructor_iterator_
              (puVar2,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4._0_1_ = 2;
  this->mbr_0x90 = (dword)puVar2;
  this_00 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4._0_1_ = 4;
  if (this_00 == (Gfx_BasePacketData *)0x0) {
    this_00 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
    this_00->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  this->mbr_0x94 = (dword)this_00;
  meth_0x50f780(this,param_1);
  ExceptionList = local_c;
  return this;
}


#include "../include/Gfx_LineSystem.h"
