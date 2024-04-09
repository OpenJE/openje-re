#include "../include/cls_0x507810.h"

cls_0x507810 * __thiscall cls_0x507810::cls_0x507810(cls_0x507810 *this)

{
  dword dVar1;
  Gfx_StreamingVertexBuffer *pGVar2;
  Gfx_StreamingIndexBuffer *pGVar3;
  undefined local_15;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006356bf;
  local_c = ExceptionList;
  DAT_00707ce0 = this;
  ExceptionList = &local_c;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined *)&this->mbr_0x1c = local_15;
  dVar1 = FUN_004c6640();
  this->mbr_0x20 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x20 + 4) = this->mbr_0x20;
  *(dword *)this->mbr_0x20 = this->mbr_0x20;
  *(dword *)(this->mbr_0x20 + 8) = this->mbr_0x20;
  this->mbr_0x24 = 0;
  local_4._0_1_ = 2;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x38 = dVar1;
  this->mbr_0x3c = 0;
  local_4._0_1_ = 3;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 1;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  pGVar2 = (Gfx_StreamingVertexBuffer *)operator_new(0x18);
  local_4._0_1_ = 4;
  if (pGVar2 == (Gfx_StreamingVertexBuffer *)0x0) {
    pGVar2 = (Gfx_StreamingVertexBuffer *)0x0;
  }
  else {
    pGVar2 = Gfx_StreamingVertexBuffer::Gfx_StreamingVertexBuffer(pGVar2);
  }
  local_4._0_1_ = 3;
  this->mbr_0x28 = (dword)pGVar2;
  pGVar3 = (Gfx_StreamingIndexBuffer *)operator_new(0x18);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pGVar3 != (Gfx_StreamingIndexBuffer *)0x0) {
    pGVar3 = Gfx_StreamingIndexBuffer::Gfx_StreamingIndexBuffer(pGVar3);
    this->mbr_0x30 = (dword)pGVar3;
    ExceptionList = local_c;
    return this;
  }
  this->mbr_0x30 = 0;
  ExceptionList = local_c;
  return this;
}


