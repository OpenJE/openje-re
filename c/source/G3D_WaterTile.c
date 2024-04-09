#include "../include/G3D_WaterTile.h"

G3D_WaterTile * __thiscall G3D_WaterTile::G3D_WaterTile(G3D_WaterTile *this)

{
  G3D_Mesh::G3D_Mesh(&this->G3D_Mesh);
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  (this->G3D_Mesh).G3D_BaseAttribute.vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_WaterTile__vftable_671ff0_00671ff0;
  *(undefined *)&(this->G3D_Mesh).mbr_0x24 = 0x1a;
  return this;
}



void * __thiscall G3D_WaterTile::meth_0x4d9dd0(G3D_WaterTile *this,int param_1)

{
  dword dVar1;
  int iVar2;
  dword *pdVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  cls_0x50db20 *this_00;
  int iVar9;
  undefined4 *puVar10;
  dword *pdVar11;
  _String_base *p_Var12;
  int local_14;
  int local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633806;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  G3D_Mesh::meth_0x4d8c10(&this->G3D_Mesh);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_Mesh).G3D_BaseAttribute.field_0x4,
             (_String_base *)(param_1 + 4),0,0xffffffff);
  (this->G3D_Mesh).mbr_0x20 = *(dword *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0x90;
  }
  if (0 < iVar8) {
    iVar9 = 0;
    do {
      cls_0x4c8df0::meth_0x4d7d60
                ((cls_0x4c8df0 *)&(this->G3D_Mesh).mbr_0x28,
                 (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar9));
      iVar9 = iVar9 + 0x90;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      G3D_Mesh::meth_0x4d9d50
                (&this->G3D_Mesh,*(undefined4 **)(*(int *)(param_1 + 0x3c) + iVar9 * 4));
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  G3D_Mesh::meth_0x4ccc10(&this->G3D_Mesh);
  *(undefined *)&(this->G3D_Mesh).mbr_0x48 = *(undefined *)(param_1 + 0x48);
  (this->G3D_Mesh).mbr_0x4c = *(dword *)(param_1 + 0x4c);
  (this->G3D_Mesh).mbr_0x50 = *(dword *)(param_1 + 0x50);
  (this->G3D_Mesh).mbr_0x58 = *(dword *)(param_1 + 0x58);
  (this->G3D_Mesh).mbr_0x64 = *(dword *)(param_1 + 100);
  (this->G3D_Mesh).mbr_0x5c = *(dword *)(param_1 + 0x5c);
  (this->G3D_Mesh).mbr_0x68 = *(dword *)(param_1 + 0x68);
  (this->G3D_Mesh).mbr_0x60 = *(dword *)(param_1 + 0x60);
  (this->G3D_Mesh).mbr_0x6c = *(dword *)(param_1 + 0x6c);
  *(undefined *)&(this->G3D_Mesh).mbr_0x70 = *(undefined *)(param_1 + 0x70);
  dVar1 = *(dword *)(param_1 + 0x84);
  (this->G3D_Mesh).mbr_0x84 = dVar1;
  if (dVar1 != 0) {
    pdVar3 = (dword *)operator_new(dVar1 * 0x144 + 4);
    local_4 = 0;
    if (pdVar3 == (dword *)0x0) {
      pdVar11 = (dword *)0x0;
    }
    else {
      pdVar11 = pdVar3 + 1;
      *pdVar3 = dVar1;
      _eh_vector_constructor_iterator_(pdVar11,0x144,dVar1,cls_0x4cc100::cls_0x4cc100,FUN_004cc170);
    }
    dVar1 = (this->G3D_Mesh).mbr_0x84;
    (this->G3D_Mesh).mbr_0x88 = (dword)pdVar11;
    local_4 = 0xffffffff;
    pdVar3 = (dword *)operator_new(dVar1 * 0x1c + 4);
    local_4 = 1;
    if (pdVar3 == (dword *)0x0) {
      pdVar11 = (dword *)0x0;
    }
    else {
      pdVar11 = pdVar3 + 1;
      *pdVar3 = dVar1;
      _eh_vector_constructor_iterator_
                (pdVar11,0x1c,dVar1,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
    }
    local_4 = 0xffffffff;
    (this->G3D_Mesh).mbr_0x8c = (dword)pdVar11;
    pvVar4 = operator_new((this->G3D_Mesh).mbr_0x84 << 2);
    (this->G3D_Mesh).mbr_0x94 = (dword)pvVar4;
    pvVar4 = operator_new((this->G3D_Mesh).mbr_0x84 << 2);
    (this->G3D_Mesh).mbr_0x90 = (dword)pvVar4;
    pvVar4 = operator_new((this->G3D_Mesh).mbr_0x84 << 2);
    (this->G3D_Mesh).mbr_0x98 = (dword)pvVar4;
    iVar8 = 0;
    if (0 < (int)(this->G3D_Mesh).mbr_0x84) {
      local_10 = 0;
      local_14 = 0;
      do {
        p_Var12 = (_String_base *)(*(int *)(param_1 + 0x88) + local_14);
        this_00 = (cls_0x50db20 *)((this->G3D_Mesh).mbr_0x88 + local_14);
        ::cls_0x50db20::cls_0x50db20(this_00,p_Var12);
        this_00->mbr_0x100 = *(dword *)(p_Var12 + 0x100);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->mbr_0x104,p_Var12 + 0x104,0,0xffffffff);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->mbr_0x120,p_Var12 + 0x120,0,0xffffffff);
        this_00->mbr_0x13c = *(dword *)(p_Var12 + 0x13c);
        this_00->mbr_0x140 = *(dword *)(p_Var12 + 0x140);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)((this->G3D_Mesh).mbr_0x8c + local_10),
                   (_String_base *)(*(int *)(param_1 + 0x8c) + local_10),0,0xffffffff);
        *(undefined4 *)((this->G3D_Mesh).mbr_0x94 + iVar8 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar8 * 4);
        *(undefined4 *)((this->G3D_Mesh).mbr_0x90 + iVar8 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar8 * 4);
        pvVar4 = operator_new(*(int *)((this->G3D_Mesh).mbr_0x90 + iVar8 * 4) << 1);
        *(void **)((this->G3D_Mesh).mbr_0x98 + iVar8 * 4) = pvVar4;
        iVar9 = 0;
        if (0 < *(int *)((this->G3D_Mesh).mbr_0x90 + iVar8 * 4)) {
          do {
            *(undefined *)(iVar9 + *(int *)((this->G3D_Mesh).mbr_0x98 + iVar8 * 4)) =
                 *(undefined *)(iVar9 + *(int *)(*(int *)(param_1 + 0x98) + iVar8 * 4));
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((this->G3D_Mesh).mbr_0x90 + iVar8 * 4));
        }
        local_10 = local_10 + 0x1c;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 0x144;
      } while (iVar8 < (int)(this->G3D_Mesh).mbr_0x84);
    }
  }
  uVar5 = (this->G3D_Mesh).mbr_0x4c * (this->G3D_Mesh).mbr_0x50;
  if ((uVar5 != 0) && (*(int *)(param_1 + 0x54) != 0)) {
    puVar6 = (undefined4 *)operator_new(uVar5);
    uVar7 = (this->G3D_Mesh).mbr_0x4c * (this->G3D_Mesh).mbr_0x50;
    (this->G3D_Mesh).mbr_0x54 = (dword)puVar6;
    puVar10 = *(undefined4 **)(param_1 + 0x54);
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined *)puVar6 = *(undefined *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if ((this->G3D_Mesh).mbr_0x4c != 0) {
    pdVar3 = &(this->G3D_Mesh).mbr_0x74;
    iVar8 = param_1 - (int)this;
    param_1 = 4;
    do {
      if (*(int *)((int)pdVar3 + iVar8) != 0) {
        pvVar4 = operator_new((this->G3D_Mesh).mbr_0x4c << 3);
        *pdVar3 = (dword)pvVar4;
        iVar9 = 0;
        if (0 < (int)(this->G3D_Mesh).mbr_0x4c) {
          do {
            iVar2 = *(int *)((int)pdVar3 + iVar8);
            pvVar4 = (void *)*pdVar3;
            *(undefined4 *)((int)pvVar4 + iVar9 * 8) = *(undefined4 *)(iVar2 + iVar9 * 8);
            *(undefined4 *)((int)pvVar4 + iVar9 * 8 + 4) = *(undefined4 *)(iVar2 + 4 + iVar9 * 8);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(this->G3D_Mesh).mbr_0x4c);
        }
      }
      pdVar3 = pdVar3 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall G3D_WaterTile::virt_meth_0x4db010(G3D_WaterTile *this,byte param_1)

{
  G3D_Mesh::~G3D_Mesh(&this->G3D_Mesh);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall G3D_WaterTile::virt_meth_0x4dd120(G3D_WaterTile *this,uint param_1,int *param_2)

{
  int iVar1;
  
  G3D_Mesh::virt_meth_0x4dc330(&this->G3D_Mesh,param_1,param_2);
  this->mbr_0x9c = *(dword *)(param_1 + *param_2);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  this->mbr_0xa0 = *(dword *)(iVar1 + 4 + param_1);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  this->mbr_0xa4 = *(dword *)(iVar1 + 4 + param_1);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  this->mbr_0xa8 = *(dword *)(iVar1 + 4 + param_1);
  *param_2 = *param_2 + 4;
  return;
}


#include "../include/G3D_WaterTile.h"
