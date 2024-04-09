#include "../include/Gfx_ModelMesh.h"

Gfx_ModelMesh * __thiscall Gfx_ModelMesh::Gfx_ModelMesh(Gfx_ModelMesh *this,dword param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006317d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ModelMesh__vftable_66b494_0066b494;
  this->mbr_0x24 = param_1;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
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
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x29 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall Gfx_ModelMesh::virt_meth_0x49de80(Gfx_ModelMesh *this,byte param_1)

{
  ~Gfx_ModelMesh(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



Gfx_ModelMesh * __thiscall Gfx_ModelMesh::~Gfx_ModelMesh(Gfx_ModelMesh *this)

{
  Gfx_ModelMesh *pGVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  dword local_14;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635ade;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ModelMesh__vftable_66b494_0066b494;
  local_4 = 1;
  FUN_005077a0(DAT_00707ce0,this->mbr_0x38);
  local_14 = (this->cls_0x4abc60).mbr_0x0;
  if (local_14 != 0) {
    iVar2 = 0;
    do {
      uVar4 = 0;
      piVar3 = (int *)((this->cls_0x4abc60).mbr_0xc + iVar2 + 0x130);
      do {
        if (*piVar3 != 0) {
          (**(code **)(*DAT_00707ce4 + 0xd0))(*piVar3);
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 < 4);
      iVar2 = iVar2 + 0x244;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  if ((void *)this->mbr_0x2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x2c);
  }
  if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  local_4._0_1_ = 2;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0x34);
  local_4 = (uint)local_4._1_3_ << 8;
  pGVar1 = (Gfx_ModelMesh *)cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  (this->Gfx_NodeAttribute).vftptr_0x0 = &Gfx_NodeAttribute__vftable_66b488_0066b488;
  if (0xf < (this->Gfx_NodeAttribute).mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->Gfx_NodeAttribute).mbr_0xc);
  }
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  ExceptionList = local_c;
  return pGVar1;
}



undefined4 __thiscall
Gfx_ModelMesh::meth_0x50e4f0
          (Gfx_ModelMesh *this,uint param_1,undefined4 *param_2,_String_base *param_3,int param_4,
          int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_20;
  int local_1c;
  _String_base *local_18;
  uint local_14;
  int local_8;
  
  iVar1 = DAT_0070839c;
  iVar8 = 0;
  uVar2 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    do {
      iVar8 = iVar8 + *(int *)(param_4 + uVar2 * 4);
      uVar2 = uVar2 + 1;
      local_8 = iVar8;
    } while (uVar2 < param_1);
  }
  pvVar3 = operator_new(DAT_0070839c * local_8);
  this->mbr_0x30 = (dword)pvVar3;
  if (pvVar3 != (void *)0x0) {
    iVar8 = cls_0x515040::meth_0x41f630((cls_0x515040 *)&this->mbr_0x34,param_1);
    if (iVar8 == 0) {
      return 0;
    }
    local_20 = 0;
    local_1c = 0;
    local_14 = 0;
    if (param_1 != 0) {
      puVar9 = (undefined4 *)(iVar8 + 0x24);
      local_18 = param_3;
      iVar7 = param_6 - (int)param_2;
      iVar8 = param_5 - (int)param_2;
      iVar5 = param_4 - (int)param_2;
      do {
        uVar2 = *(int *)(iVar5 + (int)param_2) * iVar1;
        puVar10 = *(undefined4 **)(iVar7 + (int)param_2);
        puVar11 = (undefined4 *)(this->mbr_0x30 + local_1c);
        for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar11 = *(undefined *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        puVar9[-1] = *param_2;
        *puVar9 = 1;
        puVar9[1] = 0;
        puVar9[2] = local_20;
        puVar9[3] = *(undefined4 *)(iVar8 + (int)param_2);
        if (param_3 != (_String_base *)0x0) {
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar9 + -8),local_18,0,0xffffffff);
        }
        puVar9[-9] = local_14;
        local_20 = local_20 + *(int *)(iVar5 + (int)param_2);
        local_1c = local_1c + uVar2;
        local_18 = local_18 + 0x1c;
        local_14 = local_14 + 1;
        puVar9 = puVar9 + 0xd;
        param_2 = param_2 + 1;
      } while (local_14 < param_1);
    }
    this->mbr_0x44 = this->mbr_0x30;
    uVar4 = Gregorian::meth_0x4ab6c0((Gregorian *)&this->mbr_0x34,iVar1,local_8);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return 0;
}



undefined4 __thiscall
Gfx_ModelMesh::meth_0x50e760
          (Gfx_ModelMesh *this,undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  Gfx_BasePacketData local_5c;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635af8;
  pvStack_c = ExceptionList;
  uVar3 = 0;
  ExceptionList = &pvStack_c;
  Gfx_BasePacketData::Gfx_BasePacketData(&local_5c,0);
  local_5c.vftptr_0x0 =
       (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  uVar4 = param_2 * (int)param_3;
  local_4 = 0;
  puVar1 = (undefined4 *)operator_new(uVar4);
  this->mbr_0x2c = (dword)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_4;
      param_4 = param_4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar1 = *(undefined *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    this->mbr_0x40 = this->mbr_0x2c;
    Gregorian::meth_0x4ab680((Gregorian *)&this->mbr_0x34,param_1,param_2,param_3);
    uVar3 = 1;
  }
  local_4 = 0xffffffff;
  local_5c.vftptr_0x0 =
       (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  Gfx_BasePacketData::~Gfx_BasePacketData(&local_5c);
  ExceptionList = pvStack_c;
  return uVar3;
}


#include "../include/Gfx_ModelMesh.h"
