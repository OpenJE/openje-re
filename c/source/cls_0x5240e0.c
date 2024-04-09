#include "../include/cls_0x5240e0.h"

void __thiscall cls_0x5240e0::meth_0x523e70(cls_0x5240e0 *this)

{
  this->mbr_0x50 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  return;
}



void __thiscall cls_0x5240e0::meth_0x523e90(cls_0x5240e0 *this,uint param_1)

{
  dword dVar1;
  dword dVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_14;
  int local_10;
  
  iVar3 = FUN_0047460d(param_1);
  pvVar4 = operator_new(iVar3 * this->mbr_0x4);
  iVar3 = 0;
  this->mbr_0x50 = (dword)pvVar4;
  if ((pvVar4 != (void *)0x0) && (local_14 = 0, this->mbr_0x4 != 0)) {
    uVar5 = param_1 & 0xe;
    uVar7 = param_1 >> 8 & 0xf;
    local_10 = 0;
    do {
      if (uVar5 == 2) {
        puVar6 = (undefined4 *)(this->mbr_0x8 + local_10);
        puVar8 = (undefined4 *)(this->mbr_0x50 + iVar3);
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        iVar3 = iVar3 + 0xc;
      }
      else if (uVar5 == 6) {
        puVar6 = (undefined4 *)(this->mbr_0x8 + local_10);
        puVar8 = (undefined4 *)(this->mbr_0x50 + iVar3);
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        *(undefined4 *)(iVar3 + 0xc + this->mbr_0x50) =
             *(undefined4 *)(*(int *)this->mbr_0x20 + 4 + local_14 * 8);
        iVar3 = iVar3 + 0x10;
      }
      else if (uVar5 == 8) {
        puVar6 = (undefined4 *)(this->mbr_0x8 + local_10);
        puVar8 = (undefined4 *)(this->mbr_0x50 + iVar3);
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        *(undefined4 *)(iVar3 + 0xc + this->mbr_0x50) =
             *(undefined4 *)(*(int *)this->mbr_0x20 + 4 + local_14 * 8);
        *(undefined4 *)(iVar3 + 0x10 + this->mbr_0x50) =
             *(undefined4 *)(*(int *)(this->mbr_0x20 + 4) + 4 + local_14 * 8);
        iVar3 = iVar3 + 0x10;
      }
      if ((param_1 & 0x10) != 0) {
        puVar6 = (undefined4 *)(this->mbr_0xc + local_10);
        puVar8 = (undefined4 *)(this->mbr_0x50 + iVar3);
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8[2] = puVar6[2];
        iVar3 = iVar3 + 0xc;
      }
      if ((param_1 & 0x40) != 0) {
        uVar9 = FUN_00616e24();
        uVar10 = FUN_00616e24();
        uVar11 = FUN_00616e24();
        uVar12 = FUN_00616e24();
        *(uint *)(iVar3 + this->mbr_0x50) =
             (((uint)uVar9 & 0xff | (int)uVar10 << 8) << 8 | (uint)uVar11 & 0xff) << 8 |
             (uint)uVar12 & 0xff;
        iVar3 = iVar3 + 4;
      }
      if ((uVar7 != 0) && ((param_1 & 0x30000) == 0)) {
        dVar1 = this->mbr_0x14;
        dVar2 = this->mbr_0x50;
        *(undefined4 *)(iVar3 + dVar2) = *(undefined4 *)(dVar1 + local_14 * 8);
        *(undefined4 *)(iVar3 + 4 + dVar2) = *(undefined4 *)(dVar1 + 4 + local_14 * 8);
        iVar3 = iVar3 + 8;
      }
      if ((1 < uVar7) && ((param_1 & 0xc0000) == 0)) {
        dVar1 = this->mbr_0x18;
        dVar2 = this->mbr_0x50;
        *(undefined4 *)(iVar3 + dVar2) = *(undefined4 *)(dVar1 + local_14 * 8);
        *(undefined4 *)(iVar3 + 4 + dVar2) = *(undefined4 *)(dVar1 + 4 + local_14 * 8);
        iVar3 = iVar3 + 8;
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 0xc;
    } while (local_14 < this->mbr_0x4);
  }
  return;
}



cls_0x5240e0 * __thiscall cls_0x5240e0::cls_0x5240e0(cls_0x5240e0 *this)

{
  dword dVar1;
  
  dVar1 = (**(code **)(*DAT_00707ce4 + 0x58))();
  this->mbr_0x0 = dVar1;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x30 = 0;
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
  return this;
}



void __thiscall cls_0x5240e0::meth_0x524140(cls_0x5240e0 *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pvVar2 = operator_new(this->mbr_0x40 << 2);
  this->mbr_0x5c = (dword)pvVar2;
  pvVar2 = operator_new(this->mbr_0x40 << 2);
  this->mbr_0x58 = (dword)pvVar2;
  pvVar2 = operator_new(this->mbr_0x40 << 2);
  this->mbr_0x60 = (dword)pvVar2;
  iVar3 = (**(code **)(*DAT_00707ce4 + 0x44))();
  uVar5 = 0;
  if (this->mbr_0x40 != 0) {
    iVar6 = 0;
    do {
      *(undefined4 *)(this->mbr_0x58 + uVar5 * 4) = *(undefined4 *)(iVar6 + 0xfc + this->mbr_0x48);
      pvVar2 = operator_new(*(int *)(iVar6 + 0xfc + this->mbr_0x48) * iVar3);
      *(void **)(this->mbr_0x60 + uVar5 * 4) = pvVar2;
      if (iVar3 == 2) {
        iVar1 = *(int *)(this->mbr_0x60 + uVar5 * 4);
        uVar4 = 0;
        if (*(int *)(iVar6 + 0xfc + this->mbr_0x48) != 0) {
          do {
            *(undefined2 *)(iVar1 + uVar4 * 2) =
                 *(undefined2 *)(*(int *)(iVar6 + 0x100 + this->mbr_0x48) + uVar4 * 4);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar6 + 0xfc + this->mbr_0x48));
        }
      }
      else if (iVar3 == 4) {
        iVar1 = *(int *)(this->mbr_0x60 + uVar5 * 4);
        uVar4 = 0;
        if (*(int *)(iVar6 + 0xfc + this->mbr_0x48) != 0) {
          do {
            *(undefined4 *)(iVar1 + uVar4 * 4) =
                 *(undefined4 *)(*(int *)(iVar6 + 0x100 + this->mbr_0x48) + uVar4 * 4);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar6 + 0xfc + this->mbr_0x48));
        }
      }
      if (*(int *)(this->mbr_0x54 + uVar5 * 4) == 4) {
        *(uint *)(this->mbr_0x5c + uVar5 * 4) = *(uint *)(this->mbr_0x58 + uVar5 * 4) / 3;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x104;
    } while (uVar5 < this->mbr_0x40);
  }
  return;
}



void __thiscall cls_0x5240e0::meth_0x524700(cls_0x5240e0 *this)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  if ((void *)this->mbr_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  if ((void *)this->mbr_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  if ((void *)this->mbr_0x18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x18);
  }
  this->mbr_0x1c = 0;
  if (this->mbr_0x20 != 0) {
    uVar3 = 0;
    if (this->mbr_0x0 != 0) {
      do {
        pvVar1 = *(void **)(this->mbr_0x20 + uVar3 * 4);
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x0);
    }
    if ((void *)this->mbr_0x20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x20);
    }
  }
  pvVar1 = (void *)this->mbr_0x44;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  iVar4 = 0;
  if (0 < (int)this->mbr_0x40) {
    iVar2 = 0;
    do {
      pvVar1 = *(void **)(this->mbr_0x48 + 0xf4 + iVar2);
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_
                  (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      pvVar1 = *(void **)(this->mbr_0x48 + 0x100 + iVar2);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      if ((this->mbr_0x60 != 0) &&
         (pvVar1 = *(void **)(this->mbr_0x60 + iVar4 * 4), pvVar1 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x104;
    } while (iVar4 < (int)this->mbr_0x40);
  }
  pvVar1 = (void *)this->mbr_0x48;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x104,*(int *)((int)pvVar1 + -4),FUN_005244f0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x60 == (void *)0x0) {
    if ((void *)this->mbr_0x50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x50);
    }
    if ((void *)this->mbr_0x54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x54);
    }
    if ((void *)this->mbr_0x58 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x58);
    }
    if ((void *)this->mbr_0x5c == (void *)0x0) {
      this->mbr_0x4 = 0;
      this->mbr_0x3c = 0;
      this->mbr_0x40 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x5c);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x60);
}



void __thiscall cls_0x5240e0::meth_0x524700(cls_0x5240e0 *this)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  if ((void *)this->mbr_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  if ((void *)this->mbr_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  if ((void *)this->mbr_0x18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x18);
  }
  this->mbr_0x1c = 0;
  if (this->mbr_0x20 != 0) {
    uVar3 = 0;
    if (this->mbr_0x0 != 0) {
      do {
        pvVar1 = *(void **)(this->mbr_0x20 + uVar3 * 4);
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x0);
    }
    if ((void *)this->mbr_0x20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x20);
    }
  }
  pvVar1 = (void *)this->mbr_0x44;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  iVar4 = 0;
  if (0 < (int)this->mbr_0x40) {
    iVar2 = 0;
    do {
      pvVar1 = *(void **)(this->mbr_0x48 + 0xf4 + iVar2);
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_
                  (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      pvVar1 = *(void **)(this->mbr_0x48 + 0x100 + iVar2);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      if ((this->mbr_0x60 != 0) &&
         (pvVar1 = *(void **)(this->mbr_0x60 + iVar4 * 4), pvVar1 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x104;
    } while (iVar4 < (int)this->mbr_0x40);
  }
  pvVar1 = (void *)this->mbr_0x48;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x104,*(int *)((int)pvVar1 + -4),FUN_005244f0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x60 == (void *)0x0) {
    if ((void *)this->mbr_0x50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x50);
    }
    if ((void *)this->mbr_0x54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x54);
    }
    if ((void *)this->mbr_0x58 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x58);
    }
    if ((void *)this->mbr_0x5c == (void *)0x0) {
      this->mbr_0x4 = 0;
      this->mbr_0x3c = 0;
      this->mbr_0x40 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x5c);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x60);
}



void __thiscall
cls_0x5240e0::meth_0x524ab0(cls_0x5240e0 *this,uint param_1,uint param_2,char param_3,char param_4)

{
  void *pvVar1;
  char cVar2;
  dword dVar3;
  dword dVar4;
  Gfx_ModelMesh *this_00;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  _String_base *p_Var12;
  uint unaff_retaddr;
  uint uStack_22c;
  int *piVar13;
  uint uStack_1ec;
  dword dStack_1e8;
  dword dStack_1e4;
  dword dStack_1e0;
  cls_0x5240e0 *local_1dc;
  dword dStack_1d8;
  Gfx_ModelMesh *local_1d4;
  void *pvStack_1d0;
  Gfx_ModelMesh *local_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  Gfx_NodeAttribute__vftable_66b488 *pGStack_1b0;
  dword dStack_1ac;
  dword dStack_1a8;
  float fStack_1a4;
  dword dStack_1a0;
  dword dStack_19c;
  dword dStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  dword dStack_158;
  dword dStack_154;
  dword dStack_150;
  dword dStack_14c;
  dword dStack_148;
  _String_base a_Stack_144 [28];
  undefined auStack_128 [28];
  undefined4 uStack_10c;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006366f4;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_1dc = this;
  local_1cc = (Gfx_ModelMesh *)operator_new(0xa0);
  local_4 = 0;
  if (local_1cc == (Gfx_ModelMesh *)0x0) {
    this_00 = (Gfx_ModelMesh *)0x0;
  }
  else {
    this_00 = Gfx_ModelMesh::Gfx_ModelMesh(local_1cc,1);
  }
  local_4 = 0xffffffff;
  local_1d4 = this_00;
  if (this_00 != (Gfx_ModelMesh *)0x0) {
    dVar3 = this->mbr_0x4c;
    if (dVar3 != 0) {
      if (dVar3 == 0x1c) {
        param_1 = 0x52;
      }
      else if (dVar3 == 0x24) {
        param_1 = 0x152;
      }
      else if (dVar3 == 0x2c) {
        param_1 = 0x252;
      }
      else {
        handle_fatal_error(
                          "Gfx_G3D_Mesh::ExportGfxModelMesh - Bad VertexSize for preconverted mesh: %d\n"
                          );
      }
    }
    puVar11 = (undefined4 *)this->mbr_0x50;
    piVar13 = (int *)this->mbr_0x4;
    iVar5 = FUN_0047460d(param_2);
    Gfx_ModelMesh::meth_0x50e760(this_00,param_2,iVar5,piVar13,puVar11);
    Gfx_ModelMesh::meth_0x50e4f0
              (this_00,this->mbr_0x40,(undefined4 *)this->mbr_0x54,(_String_base *)this->mbr_0x44,
               this->mbr_0x58,this->mbr_0x5c,this->mbr_0x60);
    dStack_1a8 = this->mbr_0x2c;
    dStack_1ac = this->mbr_0x28;
    dStack_1a0 = this->mbr_0x30;
    pGStack_1b0 = (Gfx_NodeAttribute__vftable_66b488 *)this->mbr_0x24;
    dStack_198 = this->mbr_0x38;
    dStack_19c = this->mbr_0x34;
    this_00[1].Gfx_NodeAttribute.vftptr_0x0 = pGStack_1b0;
    *(dword *)&this_00[1].Gfx_NodeAttribute.field_0x4 = dStack_1ac;
    *(dword *)&this_00[1].Gfx_NodeAttribute.field_0x8 = dStack_1a8;
    this_00[1].Gfx_NodeAttribute.mbr_0xc = dStack_1a0;
    *(dword *)&this_00[1].Gfx_NodeAttribute.field_0x10 = dStack_19c;
    *(dword *)&this_00[1].Gfx_NodeAttribute.field_0x14 = dStack_198;
    _eh_vector_constructor_iterator_
              (a_Stack_144,0x1c,2,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
    local_1cc = (Gfx_ModelMesh *)0x0;
    if (0 < (int)this->mbr_0x40) {
      local_1d4 = (Gfx_ModelMesh *)0x0;
      dStack_1e0 = 0;
      do {
        dVar4 = dStack_1d8;
        dVar3 = dStack_1e0;
        iVar5 = *(int *)(dStack_1d8 + 0x48);
        uStack_17c = *(undefined4 *)(iVar5 + 0x3c + dStack_1e0);
        uStack_188 = *(undefined4 *)(iVar5 + 0x30 + dStack_1e0);
        uStack_180 = *(undefined4 *)(iVar5 + 0x38 + dStack_1e0);
        p_Var12 = (_String_base *)(iVar5 + dStack_1e0);
        uStack_184 = *(undefined4 *)(p_Var12 + 0x34);
        uStack_178 = *(undefined4 *)(p_Var12 + 0x20);
        uStack_16c = *(undefined4 *)(p_Var12 + 0x2c);
        uStack_170 = *(undefined4 *)(p_Var12 + 0x28);
        uStack_174 = *(undefined4 *)(p_Var12 + 0x24);
        uStack_168 = *(undefined4 *)(p_Var12 + 0x50);
        uStack_15c = *(undefined4 *)(p_Var12 + 0x5c);
        uStack_160 = *(undefined4 *)(p_Var12 + 0x58);
        uStack_164 = *(undefined4 *)(p_Var12 + 0x54);
        dStack_158 = *(dword *)(p_Var12 + 0x40);
        dStack_14c = *(dword *)(p_Var12 + 0x4c);
        dStack_150 = *(dword *)(p_Var12 + 0x48);
        dStack_154 = *(dword *)(p_Var12 + 0x44);
        dStack_148 = *(dword *)(p_Var12 + 0x60);
        dStack_1e8 = 0;
        dStack_1e4 = 0;
        pcVar7 = "";
        do {
          pcVar6 = pcVar7;
          pcVar7 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_144,"",(uint)(pcVar6 + -0x64d7d8));
        pcVar7 = "";
        do {
          pcVar6 = pcVar7;
          pcVar7 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_128,"",(uint)(pcVar6 + -0x64d7d8));
        iVar5 = *(int *)(dVar4 + 0x48) + dVar3;
        uStack_1ec = 0;
        if (*(int *)(*(int *)(dVar4 + 0x48) + 0xb4 + dVar3) != 0) {
          if (param_4 == '\0') {
            if (param_3 == '\0') {
              uStack_1ec = 1;
              if (*(uint *)(iVar5 + 0xd0) < 0x10) {
                puVar11 = (undefined4 *)(iVar5 + 0xbc);
              }
              else {
                puVar11 = *(undefined4 **)(iVar5 + 0xbc);
              }
              puVar9 = puVar11;
              do {
                cVar2 = *(char *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              } while (cVar2 != '\0');
              uVar10 = (int)puVar9 - (int)((int)puVar11 + 1);
            }
            else {
              if (*(uint *)(iVar5 + 0xd0) < 0x10) {
                pcVar7 = (char *)(iVar5 + 0xbc);
              }
              else {
                pcVar7 = *(char **)(iVar5 + 0xbc);
              }
              puVar11 = &uStack_10c;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                *(char *)puVar11 = cVar2;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              puVar9 = (undefined4 *)_strrchr((char *)&uStack_10c,0x2e);
              *puVar9 = 0x7364642e;
              *(undefined *)(puVar9 + 1) = 0;
              local_1dc = (cls_0x5240e0 *)&stack0xfffffdd0;
              puVar11 = &uStack_10c;
              uStack_22c = uStack_22c & 0xffffff00;
              do {
                cVar2 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)&stack0xfffffdd0,(char *)&uStack_10c,
                         (int)puVar11 - ((int)&uStack_10c + 1));
              iVar5 = (**(code **)(*DAT_00707ce4 + 0xc0))();
              if (iVar5 < 0) {
                *puVar9 = 0x6167742e;
                local_1dc = (cls_0x5240e0 *)&stack0xfffffdd0;
                *(undefined *)(puVar9 + 1) = 0;
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdd0,(char *)&uStack_10c);
                iVar5 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                if (iVar5 < 0) {
                  FUN_00497120((byte *)"ExportGfxModelMesh - Missing texture file: %s\n");
                }
              }
              uStack_1ec = (uint)(dStack_1e8 != 0);
              puVar11 = &uStack_10c;
              do {
                cVar2 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              uVar10 = (int)puVar11 - ((int)&uStack_10c + 1);
              puVar11 = &uStack_10c;
            }
            ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_144,(char *)puVar11,uVar10);
            if (((param_2 & 0x200) != 0) &&
               (iVar5 = *(int *)(dStack_1d8 + 0x48) + dStack_1e0, *(int *)(iVar5 + 0xe8) != 0)) {
              if (param_3 == '\0') {
                uStack_1ec = 2;
                if (*(uint *)(iVar5 + 0xec) < 0x10) {
                  FUN_00401c70(auStack_128,(undefined4 *)(iVar5 + 0xd8));
                }
                else {
                  FUN_00401c70(auStack_128,*(undefined4 **)(iVar5 + 0xd8));
                }
              }
              else {
                if (*(uint *)(iVar5 + 0xec) < 0x10) {
                  pcVar7 = (char *)(iVar5 + 0xd8);
                }
                else {
                  pcVar7 = *(char **)(iVar5 + 0xd8);
                }
                puVar11 = &uStack_10c;
                do {
                  cVar2 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  *(char *)puVar11 = cVar2;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar2 != '\0');
                puVar11 = (undefined4 *)_strrchr((char *)&uStack_10c,0x2e);
                *puVar11 = 0x7364642e;
                local_1dc = (cls_0x5240e0 *)&stack0xfffffdd0;
                *(undefined *)(puVar11 + 1) = 0;
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdd0,(char *)&uStack_10c);
                iVar5 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                if (iVar5 < 0) {
                  local_1dc = (cls_0x5240e0 *)&stack0xfffffdd0;
                  *puVar11 = 0x6167742e;
                  *(undefined *)(puVar11 + 1) = 0;
                  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdd0,(char *)&uStack_10c);
                  iVar5 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                  if (iVar5 < 0) {
                    FUN_00497120((byte *)"ExportGfxModelMesh - Missing lightmap file: %s\n");
                  }
                }
                if (dStack_1e4 != 0) {
                  uStack_1ec = 2;
                }
                puVar11 = &uStack_10c;
                do {
                  cVar2 = *(char *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar2 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)auStack_128,(char *)&uStack_10c,
                           (int)puVar11 - ((int)&uStack_10c + 1));
              }
              goto LAB_0052535a;
            }
          }
          else {
            if (param_3 == '\0') {
              uStack_1ec = 1;
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)a_Stack_144,(_String_base *)(iVar5 + 0xb8),0,0xffffffff);
            }
            else {
              if (*(uint *)(iVar5 + 0xd0) < 0x10) {
                pcVar7 = (char *)(iVar5 + 0xbc);
              }
              else {
                pcVar7 = *(char **)(iVar5 + 0xbc);
              }
              puVar11 = &uStack_10c;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                *(char *)puVar11 = cVar2;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              puVar11 = (undefined4 *)_strrchr((char *)&uStack_10c,0x2e);
              *puVar11 = 0x7364642e;
              *(undefined *)(puVar11 + 1) = 0;
              ppvVar8 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&uStack_10c,(int *)0x0);
              if (ppvVar8 == (void **)0x0) {
                *puVar11 = 0x6167742e;
                *(undefined *)(puVar11 + 1) = 0;
                ppvVar8 = (void **)ResourceSystem::MemStreamOpen
                                             (DAT_00707da8,&uStack_10c,(int *)0x0);
                if (ppvVar8 != (void **)0x0) goto LAB_00524e2c;
                FUN_00497120((byte *)"ExportGfxModelMesh - Missing texture from resource: %s\n");
              }
              else {
LAB_00524e2c:
                local_1dc = (cls_0x5240e0 *)&stack0xfffffdc8;
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdc8,(char *)&uStack_10c);
                (**(code **)(*DAT_00707ce4 + 0xc4))(&dStack_1e8);
                FUN_00498f30(DAT_00707da8,ppvVar8);
              }
              uStack_1ec = (uint)(dStack_1e8 != 0);
              puVar11 = &uStack_10c;
              do {
                cVar2 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)a_Stack_144,(char *)&uStack_10c,
                         (int)puVar11 - ((int)&uStack_10c + 1));
            }
            if (((param_2 & 0x200) != 0) &&
               (iVar5 = dStack_1e0 + *(int *)(dStack_1d8 + 0x48),
               *(int *)(dStack_1e0 + 0xe8 + *(int *)(dStack_1d8 + 0x48)) != 0)) {
              if (param_3 == '\0') {
                uStack_1ec = 2;
                ::cls_0x50db20::meth_0x401b20
                          ((cls_0x50db20 *)auStack_128,(_String_base *)(iVar5 + 0xd4),0,0xffffffff);
                goto LAB_0052535a;
              }
              if (*(uint *)(iVar5 + 0xec) < 0x10) {
                pcVar7 = (char *)(iVar5 + 0xd8);
              }
              else {
                pcVar7 = *(char **)(iVar5 + 0xd8);
              }
              puVar11 = &uStack_10c;
              do {
                cVar2 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                *(char *)puVar11 = cVar2;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              puVar11 = (undefined4 *)_strrchr((char *)&uStack_10c,0x2e);
              *puVar11 = 0x7364642e;
              *(undefined *)(puVar11 + 1) = 0;
              ppvVar8 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&uStack_10c,(int *)0x0);
              if (ppvVar8 == (void **)0x0) {
                *puVar11 = 0x6167742e;
                *(undefined *)(puVar11 + 1) = 0;
                ppvVar8 = (void **)ResourceSystem::MemStreamOpen
                                             (DAT_00707da8,&uStack_10c,(int *)0x0);
                if (ppvVar8 != (void **)0x0) goto LAB_00524fb0;
                FUN_00497120((byte *)"ExportGfxModelMesh - Missing lightmap from resource: %s\n");
              }
              else {
LAB_00524fb0:
                local_1dc = (cls_0x5240e0 *)&stack0xfffffdc8;
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffdc8,(char *)&uStack_10c);
                (**(code **)(*DAT_00707ce4 + 0xc4))(&dStack_1e4);
                FUN_00498f30(DAT_00707da8,ppvVar8);
              }
              if (dStack_1e4 != 0) {
                uStack_1ec = 2;
              }
              puVar11 = &uStack_10c;
              do {
                cVar2 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar2 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)auStack_128,(char *)&uStack_10c,
                         (int)puVar11 - ((int)&uStack_10c + 1));
              goto LAB_0052535a;
            }
          }
          dStack_1e4 = 0;
        }
LAB_0052535a:
        pvVar1 = pvStack_1d0;
        uStack_22c = 0x525396;
        FUN_0050e690(pvStack_1d0,(uint)local_1cc,*(VFX_Parameter__vftable_673a20 **)(p_Var12 + 0x1c)
                     ,p_Var12,0,*(dword *)(p_Var12 + 100),&uStack_188,uStack_1ec,a_Stack_144,
                     (int)&dStack_1e8,p_Var12[0x68],1);
        iVar5 = (int)local_1d4 + *(int *)((int)pvVar1 + 0x68);
        if (iVar5 != 0) {
          if (p_Var12[0x6a] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 1;
            fStack_194 = *(float *)(p_Var12 + 0x6c);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),0,fStack_194);
          }
          if (p_Var12[0x70] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 2;
            fStack_18c = *(float *)(p_Var12 + 0x74);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),1,fStack_18c);
          }
          if (p_Var12[0x78] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 4;
            fStack_1c0 = *(float *)(p_Var12 + 0x7c);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),2,fStack_1c0);
            fStack_1b8 = *(float *)(p_Var12 + 0x80);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),3,fStack_1b8);
          }
          if (p_Var12[0x84] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 8;
            fStack_1bc = *(float *)(p_Var12 + 0x88);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),4,fStack_1bc);
            fStack_1c4 = *(float *)(p_Var12 + 0x8c);
            Gfx_TCFX_Param::SetParam((void *)(iVar5 + 0x150),5,fStack_1c4);
          }
          if (p_Var12[0x90] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 0x10;
            fStack_1b4 = *(float *)(p_Var12 + 0x94);
            pvVar1 = (void *)(iVar5 + 0x150);
            Gfx_TCFX_Param::SetParam(pvVar1,6,fStack_1b4);
            fStack_190 = *(float *)(p_Var12 + 0x98);
            Gfx_TCFX_Param::SetParam(pvVar1,7,fStack_190);
            fStack_1a4 = *(float *)(p_Var12 + 0x9c);
            Gfx_TCFX_Param::SetParam(pvVar1,8,fStack_1a4);
          }
          if (p_Var12[0xa0] != (_String_base)0x0) {
            *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x140) | 0x20;
            fStack_1c8 = *(float *)(p_Var12 + 0xa4);
            pvVar1 = (void *)(iVar5 + 0x150);
            Gfx_TCFX_Param::SetParam(pvVar1,9,fStack_1c8);
            Gfx_TCFX_Param::SetParam(pvVar1,10,(float)*(int *)(p_Var12 + 0xa8));
            Gfx_TCFX_Param::SetParam(pvVar1,0xb,(float)*(int *)(p_Var12 + 0xac));
            Gfx_TCFX_Param::SetParam(pvVar1,0xc,(float)*(int *)(p_Var12 + 0xb0));
          }
          *(undefined *)(iVar5 + 0xbd) = 1;
        }
        local_1cc = (Gfx_ModelMesh *)((int)&(local_1cc->Gfx_NodeAttribute).vftptr_0x0 + 1);
        dStack_1e0 = dStack_1e0 + 0x104;
        local_1d4 = (Gfx_ModelMesh *)((int)local_1d4 + 0x244);
      } while ((int)local_1cc < *(int *)(dStack_1d8 + 0x40));
    }
    _eh_vector_destructor_iterator_(a_Stack_144,0x1c,2,cls_0x4d8d70::meth_0x4b2dd0);
  }
  ExceptionList = puStack_8;
  FUN_00616e15((uint)local_c ^ param_1);
  return;
}



void __thiscall
cls_0x5240e0::meth_0x5255c0
          (cls_0x5240e0 *this,uint param_1,uint *param_2,int param_3,char param_4,undefined4 param_5
          ,char param_6)

{
  void *pvVar1;
  _String_base *p_Var2;
  char cVar3;
  dword dVar4;
  Gfx_SkinMesh *pGVar5;
  char *pcVar6;
  void **ppvVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint unaff_retaddr;
  dword dStack_21c;
  uint local_1d8;
  dword local_1d4;
  int local_1cc;
  int local_1c8;
  Gfx_SkinMesh *local_1c4;
  uint local_1c0;
  dword *local_1bc;
  int local_1b8;
  Gfx_SkinMesh *local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  dword local_14c;
  undefined local_148 [56];
  undefined4 local_110;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636724;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_1b4 = (Gfx_SkinMesh *)operator_new(0x130);
  local_4 = 0;
  if (local_1b4 == (Gfx_SkinMesh *)0x0) {
    pGVar5 = (Gfx_SkinMesh *)0x0;
  }
  else {
    pGVar5 = Gfx_SkinMesh::Gfx_SkinMesh(local_1b4);
  }
  local_4 = 0xffffffff;
  local_1c4 = pGVar5;
  if (pGVar5 != (Gfx_SkinMesh *)0x0) {
    Gfx_SkinMesh::meth_0x508830(pGVar5,this->mbr_0x40);
    Gfx_SkinMesh::meth_0x524450(pGVar5);
    _eh_vector_constructor_iterator_
              (local_148,0x1c,2,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
    local_4 = 1;
    local_1c0 = 0;
    if (0 < (int)this->mbr_0x40) {
      local_1b8 = 0;
      local_1d4 = 0;
      do {
        dVar4 = this->mbr_0x48;
        local_180 = *(undefined4 *)(local_1d4 + 0x3c + dVar4);
        local_18c = *(undefined4 *)(local_1d4 + 0x30 + dVar4);
        local_184 = *(undefined4 *)(local_1d4 + 0x38 + dVar4);
        p_Var2 = (_String_base *)(local_1d4 + dVar4);
        local_188 = *(undefined4 *)(p_Var2 + 0x34);
        local_17c = *(undefined4 *)(p_Var2 + 0x20);
        local_170 = *(undefined4 *)(p_Var2 + 0x2c);
        local_174 = *(undefined4 *)(p_Var2 + 0x28);
        local_178 = *(undefined4 *)(p_Var2 + 0x24);
        local_16c = *(undefined4 *)(p_Var2 + 0x50);
        local_160 = *(undefined4 *)(p_Var2 + 0x5c);
        local_164 = *(undefined4 *)(p_Var2 + 0x58);
        local_168 = *(undefined4 *)(p_Var2 + 0x54);
        local_15c = *(undefined4 *)(p_Var2 + 0x40);
        local_150 = *(undefined4 *)(p_Var2 + 0x4c);
        local_154 = *(undefined4 *)(p_Var2 + 0x48);
        local_158 = *(undefined4 *)(p_Var2 + 0x44);
        local_14c = *(dword *)(p_Var2 + 0x60);
        iVar12 = *(int *)(p_Var2 + 0xf0);
        if ((iVar12 != 0) && (FUN_00524270(local_1c4,local_1c0,iVar12), iVar12 != 0)) {
          iVar13 = 0;
          do {
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)(*(int *)(local_1c4->mbr_0x6c + 4 + local_1c0 * 8) + iVar13),
                       (_String_base *)(*(int *)(local_1d4 + 0xf4 + this->mbr_0x48) + iVar13),0,
                       0xffffffff);
            iVar13 = iVar13 + 0x1c;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        local_1cc = 0;
        local_1c8 = 0;
        pcVar6 = "";
        do {
          pcVar10 = pcVar6;
          pcVar6 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_148,"",(uint)(pcVar10 + -0x64d7d8));
        pcVar6 = "";
        do {
          pcVar10 = pcVar6;
          pcVar6 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)(local_148 + 0x1c),"",(uint)(pcVar10 + -0x64d7d8));
        iVar12 = local_1d4 + this->mbr_0x48;
        local_1d8 = 0;
        if (*(int *)(iVar12 + 0xb4) != 0) {
          if (param_6 == '\0') {
            if (param_4 == '\0') {
              local_1d8 = 1;
              if (*(uint *)(iVar12 + 0xd0) < 0x10) {
                puVar11 = (undefined4 *)(iVar12 + 0xbc);
              }
              else {
                puVar11 = *(undefined4 **)(iVar12 + 0xbc);
              }
              puVar8 = puVar11;
              do {
                cVar3 = *(char *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              } while (cVar3 != '\0');
              uVar9 = (int)puVar8 - (int)((int)puVar11 + 1);
            }
            else {
              if (*(uint *)(iVar12 + 0xd0) < 0x10) {
                pcVar6 = (char *)(iVar12 + 0xbc);
              }
              else {
                pcVar6 = *(char **)(iVar12 + 0xbc);
              }
              puVar11 = &local_110;
              do {
                cVar3 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *(char *)puVar11 = cVar3;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              puVar8 = (undefined4 *)_strrchr((char *)&local_110,0x2e);
              *puVar8 = 0x7364642e;
              *(undefined *)(puVar8 + 1) = 0;
              local_1bc = &dStack_21c;
              puVar11 = &local_110;
              do {
                cVar3 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)&dStack_21c,(char *)&local_110,
                         (int)puVar11 - ((int)&local_110 + 1));
              iVar12 = (**(code **)(*DAT_00707ce4 + 0xc0))();
              if (iVar12 < 0) {
                *puVar8 = 0x6167742e;
                *(undefined *)(puVar8 + 1) = 0;
                local_1bc = &dStack_21c;
                puVar11 = &local_110;
                do {
                  cVar3 = *(char *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar3 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)&dStack_21c,(char *)&local_110,
                           (int)puVar11 - ((int)&local_110 + 1));
                iVar12 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                if (iVar12 < 0) {
                  FUN_00497120((byte *)"ExportGfxSkinMesh - Missing texture file: %s\n");
                }
              }
              local_1d8 = (uint)(local_1cc != 0);
              puVar11 = &local_110;
              do {
                cVar3 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              uVar9 = (int)puVar11 - ((int)&local_110 + 1);
              puVar11 = &local_110;
            }
            ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_148,(char *)puVar11,uVar9);
            if (((param_1 & 0x200) != 0) &&
               (iVar12 = this->mbr_0x48 + local_1d4, *(int *)(iVar12 + 0xe8) != 0)) {
              if (param_4 == '\0') {
                local_1d8 = 2;
                if (*(uint *)(iVar12 + 0xec) < 0x10) {
                  pcVar6 = (char *)(iVar12 + 0xd8);
                }
                else {
                  pcVar6 = *(char **)(iVar12 + 0xd8);
                }
                pcVar10 = pcVar6;
                do {
                  cVar3 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar3 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)(local_148 + 0x1c),pcVar6,
                           (int)pcVar10 - (int)(pcVar6 + 1));
              }
              else {
                if (*(uint *)(iVar12 + 0xd0) < 0x10) {
                  pcVar6 = (char *)(iVar12 + 0xbc);
                }
                else {
                  pcVar6 = *(char **)(iVar12 + 0xbc);
                }
                puVar11 = &local_110;
                do {
                  cVar3 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  *(char *)puVar11 = cVar3;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar3 != '\0');
                puVar8 = (undefined4 *)_strrchr((char *)&local_110,0x2e);
                *puVar8 = 0x7364642e;
                *(undefined *)(puVar8 + 1) = 0;
                local_1bc = &dStack_21c;
                puVar11 = &local_110;
                do {
                  cVar3 = *(char *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar3 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)&dStack_21c,(char *)&local_110,
                           (int)puVar11 - ((int)&local_110 + 1));
                iVar12 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                if (iVar12 < 0) {
                  local_1bc = &dStack_21c;
                  *puVar8 = 0x6167742e;
                  *(undefined *)(puVar8 + 1) = 0;
                  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&dStack_21c,(char *)&local_110);
                  iVar12 = (**(code **)(*DAT_00707ce4 + 0xc0))();
                  if (iVar12 < 0) {
                    FUN_00497120((byte *)"ExportGfxSkinMesh - Missing lightmap file: %s\n");
                  }
                }
                if (local_1c8 != 0) {
                  local_1d8 = 2;
                }
                puVar11 = &local_110;
                do {
                  cVar3 = *(char *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar3 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)(local_148 + 0x1c),(char *)&local_110,
                           (int)puVar11 - ((int)&local_110 + 1));
              }
              goto LAB_00525e54;
            }
          }
          else {
            if (param_4 == '\0') {
              local_1d8 = 1;
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)local_148,(_String_base *)(iVar12 + 0xb8),0,0xffffffff);
            }
            else {
              if (*(uint *)(iVar12 + 0xd0) < 0x10) {
                pcVar6 = (char *)(iVar12 + 0xbc);
              }
              else {
                pcVar6 = *(char **)(iVar12 + 0xbc);
              }
              puVar11 = &local_110;
              do {
                cVar3 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *(char *)puVar11 = cVar3;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              puVar11 = (undefined4 *)_strrchr((char *)&local_110,0x2e);
              *puVar11 = 0x7364642e;
              *(undefined *)(puVar11 + 1) = 0;
              ppvVar7 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&local_110,(int *)0x0);
              if (ppvVar7 == (void **)0x0) {
                *puVar11 = 0x6167742e;
                *(undefined *)(puVar11 + 1) = 0;
                ppvVar7 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&local_110,(int *)0x0)
                ;
                if (ppvVar7 != (void **)0x0) goto LAB_005258bc;
                FUN_00497120((byte *)"ExportGfxSkinMesh - Missing texture from resource: %s\n");
              }
              else {
LAB_005258bc:
                local_1bc = (dword *)&stack0xfffffddc;
                puVar11 = &local_110;
                do {
                  cVar3 = *(char *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                } while (cVar3 != '\0');
                ::cls_0x50db20::meth_0x401bd0
                          ((cls_0x50db20 *)&stack0xfffffddc,(char *)&local_110,
                           (int)puVar11 - ((int)&local_110 + 1));
                (**(code **)(*DAT_00707ce4 + 0xc4))(&local_1cc);
                FUN_00498f30(DAT_00707da8,ppvVar7);
              }
              local_1d8 = (uint)(local_1cc != 0);
              puVar11 = &local_110;
              do {
                cVar3 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)local_148,(char *)&local_110,
                         (int)puVar11 - ((int)&local_110 + 1));
            }
            if (((param_1 & 0x200) != 0) &&
               (iVar12 = local_1d4 + this->mbr_0x48,
               *(int *)(local_1d4 + 0xe8 + this->mbr_0x48) != 0)) {
              if (param_4 == '\0') {
                local_1d8 = 2;
                ::cls_0x50db20::meth_0x401b20
                          ((cls_0x50db20 *)(local_148 + 0x1c),(_String_base *)(iVar12 + 0xd4),0,
                           0xffffffff);
                goto LAB_00525e54;
              }
              if (*(uint *)(iVar12 + 0xec) < 0x10) {
                pcVar6 = (char *)(iVar12 + 0xd8);
              }
              else {
                pcVar6 = *(char **)(iVar12 + 0xd8);
              }
              puVar11 = &local_110;
              do {
                cVar3 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                *(char *)puVar11 = cVar3;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              puVar11 = (undefined4 *)_strrchr((char *)&local_110,0x2e);
              *puVar11 = 0x7364642e;
              *(undefined *)(puVar11 + 1) = 0;
              ppvVar7 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&local_110,(int *)0x0);
              if (ppvVar7 == (void **)0x0) {
                *puVar11 = 0x6167742e;
                *(undefined *)(puVar11 + 1) = 0;
                ppvVar7 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,&local_110,(int *)0x0)
                ;
                if (ppvVar7 != (void **)0x0) goto LAB_00525a60;
                FUN_00497120((byte *)"ExportGfxSkinMesh - Missing lightmap from resource: %s\n");
              }
              else {
LAB_00525a60:
                local_1bc = (dword *)&stack0xfffffddc;
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xfffffddc,(char *)&local_110);
                (**(code **)(*DAT_00707ce4 + 0xc4))(&local_1c8);
                FUN_00498f30(DAT_00707da8,ppvVar7);
              }
              if (local_1c8 != 0) {
                local_1d8 = 2;
              }
              puVar11 = &local_110;
              do {
                cVar3 = *(char *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              } while (cVar3 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)(local_148 + 0x1c),(char *)&local_110,
                         (int)puVar11 - ((int)&local_110 + 1));
              goto LAB_00525e54;
            }
          }
          local_1c8 = 0;
        }
LAB_00525e54:
        pGVar5 = local_1c4;
        FUN_00508e90(local_1c4,local_1c0,*(undefined4 *)(p_Var2 + 0x1c),p_Var2,
                     *(undefined4 *)(p_Var2 + 100),&local_18c,local_1d8,(int)local_148,
                     (int)&local_1cc,p_Var2[0x68],p_Var2[0x69]);
        iVar12 = pGVar5->mbr_0x5c + local_1b8;
        if (iVar12 != 0) {
          if (p_Var2[0x6a] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 1;
            fStack_1a8 = *(float *)(p_Var2 + 0x6c);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),0,fStack_1a8);
          }
          if (p_Var2[0x70] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 2;
            fStack_1ac = *(float *)(p_Var2 + 0x74);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),1,fStack_1ac);
          }
          if (p_Var2[0x78] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 4;
            fStack_1a4 = *(float *)(p_Var2 + 0x7c);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),2,fStack_1a4);
            fStack_19c = *(float *)(p_Var2 + 0x80);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),3,fStack_19c);
          }
          if (p_Var2[0x84] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 8;
            fStack_1b0 = *(float *)(p_Var2 + 0x88);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),4,fStack_1b0);
            fStack_194 = *(float *)(p_Var2 + 0x8c);
            Gfx_TCFX_Param::SetParam((void *)(iVar12 + 0x150),5,fStack_194);
          }
          if (p_Var2[0x90] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 0x10;
            fStack_1a0 = *(float *)(p_Var2 + 0x94);
            pvVar1 = (void *)(iVar12 + 0x150);
            Gfx_TCFX_Param::SetParam(pvVar1,6,fStack_1a0);
            fStack_190 = *(float *)(p_Var2 + 0x98);
            Gfx_TCFX_Param::SetParam(pvVar1,7,fStack_190);
            fStack_198 = *(float *)(p_Var2 + 0x9c);
            Gfx_TCFX_Param::SetParam(pvVar1,8,fStack_198);
          }
          if (p_Var2[0xa0] != (_String_base)0x0) {
            *(uint *)(iVar12 + 0x140) = *(uint *)(iVar12 + 0x140) | 0x20;
            local_1b4 = *(Gfx_SkinMesh **)(p_Var2 + 0xa4);
            pvVar1 = (void *)(iVar12 + 0x150);
            Gfx_TCFX_Param::SetParam(pvVar1,9,(float)local_1b4);
            Gfx_TCFX_Param::SetParam(pvVar1,10,(float)*(int *)(p_Var2 + 0xa8));
            Gfx_TCFX_Param::SetParam(pvVar1,0xb,(float)*(int *)(p_Var2 + 0xac));
          }
          *(undefined *)(iVar12 + 0xbd) = 1;
        }
        local_1c0 = local_1c0 + 1;
        local_1d4 = local_1d4 + 0x104;
        local_1b8 = local_1b8 + 0x244;
      } while ((int)local_1c0 < (int)this->mbr_0x40);
    }
    dVar4 = this->mbr_0x4c;
    if (dVar4 != 0) {
      if (dVar4 == 0x24) {
        param_1 = 0x152;
      }
      else if (dVar4 == 0x2c) {
        param_1 = 0x252;
      }
      else {
        handle_fatal_error(
                          "Gfx_G3D_Mesh::ExportGfxModelMesh - Bad VertexSize for preconverted mesh: %d\n"
                          );
      }
    }
    pGVar5 = local_1c4;
    dStack_21c = 0x5260c1;
    Gfx_SkinMesh::CreateSkinMeshFVF
              (local_1c4,param_1,this->mbr_0x4,(undefined4 *)this->mbr_0x50,this->mbr_0x40,
               this->mbr_0x44,this->mbr_0x58,(uint *)this->mbr_0x5c,(undefined4 *)this->mbr_0x60,
               param_2,param_3,this->mbr_0x20);
    FUN_005093b0(pGVar5,pGVar5->mbr_0x5c,pGVar5->mbr_0x68);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_148,0x1c,2,cls_0x4d8d70::meth_0x4b2dd0);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


