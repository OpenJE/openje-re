#include "../include/Gfx_SkinMesh.h"

void __thiscall Gfx_SkinMesh::meth_0x508830(Gfx_SkinMesh *this,int param_1)

{
  int *piVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006356fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x58 = param_1;
  piVar1 = (int *)operator_new(param_1 * 0x244 + 4);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    _eh_vector_constructor_iterator_
              (piVar1 + 1,0x244,param_1,cls_0x4b60b0::cls_0x4b60b0,cls_0x4b60b0::meth_0x401720);
    this->mbr_0x5c = (dword)(piVar1 + 1);
    ExceptionList = local_c;
    return;
  }
  this->mbr_0x5c = 0;
  ExceptionList = local_c;
  return;
}



Gfx_SkinMesh * __thiscall Gfx_SkinMesh::Gfx_SkinMesh(Gfx_SkinMesh *this)

{
  dword dVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063572e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  local_4 = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_SkinMesh__vftable_6747e8_006747e8;
  this->mbr_0x24 = 1;
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
  this->mbr_0x6c = 0;
  dVar1 = FUN_00491150();
  this->mbr_0x74 = dVar1;
  this->mbr_0x78 = 0;
  local_4._0_1_ = 1;
  this->mbr_0x7e = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0x7d = 1;
  this->mbr_0x7c = 0;
  puVar2 = (undefined4 *)operator_new(0x4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 6;
    _eh_vector_constructor_iterator_
              (puVar2 + 1,0xc,6,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
    this->mbr_0x68 = (dword)(puVar2 + 1);
    ExceptionList = local_c;
    return this;
  }
  this->mbr_0x68 = 0;
  ExceptionList = local_c;
  return this;
}



Gfx_SkinMesh * __thiscall Gfx_SkinMesh::~Gfx_SkinMesh(Gfx_SkinMesh *this)

{
  dword dVar1;
  void *pvVar2;
  int **ppiVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack_14;
  Gfx_SkinMesh *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635753;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_SkinMesh__vftable_6747e8_006747e8;
  local_4 = 1;
  local_10 = this;
  FUN_0050b740(DAT_00707ce8);
  piVar4 = (int *)this->mbr_0x80;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    this->mbr_0x80 = 0;
  }
  if ((void *)this->mbr_0x9c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x9c);
  }
  dVar1 = this->mbr_0xa0;
  if (dVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(dVar1 - *(byte *)(dVar1 - 1)));
  }
  if ((void *)this->mbr_0x8c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8c);
  }
  if ((void *)this->mbr_0x94 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x94);
  }
  pvVar2 = (void *)this->mbr_0x68;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar2,0xc,*(int *)((int)pvVar2 + -4),GUI::Interface::meth_0x4f6d40);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  if ((void *)this->mbr_0x40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x40);
  }
  pvVar2 = (void *)this->mbr_0x64;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar2,0x1c,*(int *)((int)pvVar2 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  if ((void *)this->mbr_0x60 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x60);
  }
  uVar5 = 0;
  if (this->mbr_0x58 != 0) {
    iStack_14 = 0x4c;
    do {
      uVar6 = 0;
      do {
        iVar7 = *(int *)(this->mbr_0x5c + (iStack_14 + uVar6) * 4);
        if (iVar7 != 0) {
          (**(code **)(*DAT_00707ce4 + 0xd0))(iVar7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
      if ((this->mbr_0x6c != 0) &&
         (pvVar2 = *(void **)(this->mbr_0x6c + 4 + uVar5 * 8), pvVar2 != (void *)0x0)) {
        _eh_vector_destructor_iterator_
                  (pvVar2,0x1c,*(int *)((int)pvVar2 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar2 + -4));
      }
      uVar5 = uVar5 + 1;
      iStack_14 = iStack_14 + 0x91;
    } while (uVar5 < this->mbr_0x58);
  }
  if ((void *)this->mbr_0x6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x6c);
  }
  pvVar2 = (void *)this->mbr_0x5c;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar2,0x244,*(int *)((int)pvVar2 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  if ((void *)this->mbr_0x50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x50);
  }
  uVar5 = 0;
  if (this->mbr_0x3c != 0) {
    iVar7 = 0;
    do {
      pvVar2 = *(void **)(iVar7 + 8 + this->mbr_0x38);
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
      pvVar2 = *(void **)(iVar7 + 0xc + this->mbr_0x38);
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 0x10;
    } while (uVar5 < this->mbr_0x3c);
  }
  if ((void *)this->mbr_0x38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  if ((void *)this->mbr_0x34 == (void *)0x0) {
    piVar4 = (int *)this->mbr_0x48;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      this->mbr_0x48 = 0;
    }
    piVar4 = (int *)this->mbr_0x30;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      this->mbr_0x30 = 0;
    }
    piVar4 = (int *)this->mbr_0x2c;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      this->mbr_0x2c = 0;
    }
    ppiVar3 = (int **)this->mbr_0x74;
    if (ppiVar3 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar3;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x70,(int **)&local_10,piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x74);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x34);
}



int * __thiscall Gfx_SkinMesh::virt_meth_0x508dc0(Gfx_SkinMesh *this,byte param_1)

{
  ~Gfx_SkinMesh(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
Gfx_SkinMesh::CreateSkinMeshFVF
          (Gfx_SkinMesh *this,uint param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5
          ,int param_6,uint *param_7,undefined4 *param_8,uint *param_9,int param_10,int param_11)

{
  dword *pdVar1;
  int **ppiVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  ushort uVar13;
  ushort uVar14;
  undefined *puVar15;
  float fVar16;
  uint *puVar17;
  dword dVar18;
  uint uVar19;
  void *pvVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  void *pvVar25;
  int *piVar26;
  cls_0x5096b0 *pcVar27;
  char *pcVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  short *psVar31;
  short *psVar32;
  byte bVar33;
  uint uVar34;
  float *pfVar35;
  undefined4 *puVar36;
  float *pfVar37;
  int *unaff_EBX;
  short sVar38;
  undefined4 *puVar39;
  dword dVar40;
  char *pcVar41;
  int iVar42;
  cls_0x668cd8 *unaff_EDI;
  cls_0x668cd8 *pcVar43;
  byte *pbVar44;
  bool bVar45;
  bool bVar46;
  uint unaff_retaddr;
  float *pfVar47;
  uint uStack_208;
  int iStack_204;
  uint uStack_200;
  uint uStack_1f0;
  int iStack_1ec;
  int **_Memory;
  uint *puStack_1c4;
  int *piStack_1c0;
  uint *puStack_1bc;
  cls_0x668cd8 *pcVar48;
  int *piVar49;
  cls_0x668cd8 *pcVar50;
  float fVar51;
  cls_0x668cd8 *local_194;
  undefined4 local_18c;
  cls_0x668cd8 *pcStack_188;
  dword dStack_184;
  undefined4 uStack_180;
  undefined4 *puStack_178;
  undefined auStack_174 [16];
  dword dStack_164;
  dword dStack_160;
  byte abStack_150 [208];
  dword dStack_80;
  undefined4 uStack_3c;
  uint local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00635844;
  pvStack_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  pcVar43 = (cls_0x668cd8 *)0x0;
  local_194 = (cls_0x668cd8 *)0x0;
  ExceptionList = &pvStack_14;
  auStack_174._4_4_ = operator_new(param_4 * 0x1c + 4);
  local_c = 0;
  if ((uint *)auStack_174._4_4_ == (uint *)0x0) {
    puVar17 = (uint *)0x0;
  }
  else {
    *(uint *)auStack_174._4_4_ = param_4;
    local_18c = (uint *)(auStack_174._4_4_ + 4);
    _eh_vector_constructor_iterator_
              (local_18c,0x1c,param_4,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
    puVar17 = local_18c;
  }
  this->mbr_0x64 = (dword)puVar17;
  local_c = 0xffffffff;
  dVar18 = (**(code **)(*DAT_00707ce4 + 0x58))();
  this->mbr_0x54 = dVar18;
  uVar19 = 0;
  if (param_4 != 0) {
    do {
      pcVar43 = (cls_0x668cd8 *)((int)&pcVar43->vftptr_0x0 + param_7[uVar19]);
      uVar19 = uVar19 + 1;
      local_194 = pcVar43;
    } while (uVar19 < param_4);
  }
  pvVar20 = operator_new((int)local_194 * 4);
  this->mbr_0x60 = (dword)pvVar20;
  auStack_174._0_4_ = (cls_0x668cd8 *)0x0;
  auStack_174._4_4_ = -(uint)(*(char *)(DAT_0070838c + 0xdd) != '\0') & 2 | 0x220;
  puStack_1bc = (uint *)0x50a705;
  iVar21 = FUN_0047d284((uint)local_194,param_2,auStack_174._4_4_,param_1,DAT_00708300,
                        (cls_0x668cd8 **)auStack_174);
  if (iVar21 < 0) {
    ExceptionList = pvStack_14;
    FUN_00616e15(local_1c ^ unaff_retaddr);
    return;
  }
  piVar23 = (int *)(auStack_174 + 8);
  auStack_174._8_4_ = 0;
  pcVar43 = (cls_0x668cd8 *)auStack_174._0_4_;
  iVar21 = (*(code *)(*(cls_0x668cd8__vftable_668cd8 **)auStack_174._0_4_)->_6)();
  if (-1 < iVar21) {
    iVar21 = FUN_0047460d(param_1);
    for (uVar19 = iVar21 * param_2 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puStack_178 = *param_3;
      param_3 = param_3 + 1;
      puStack_178 = puStack_178 + 1;
    }
    for (uVar19 = iVar21 * param_2 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined *)puStack_178 = *(undefined *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puStack_178 = (undefined4 *)((int)puStack_178 + 1);
    }
    (*(code *)uStack_180->vftptr_0x0->_0)();
    local_194 = unaff_EDI;
  }
  pvVar20 = (void *)0x0;
  puStack_1bc = (uint *)0x50a770;
  pcVar48 = uStack_180;
  iVar22 = (*(code *)uStack_180->vftptr_0x0->_4)();
  iVar21 = DAT_0070839c;
  if (-1 < iVar22) {
    dVar18 = 0;
    if (param_4 != 0) {
      piVar23 = (int *)(param_6 - (int)param_8);
      uVar19 = param_4;
      do {
        uVar24 = *(int *)((int)piVar23 + (int)param_8) * iVar21;
        puVar39 = (undefined4 *)*param_8;
        puVar36 = (undefined4 *)(dVar18 + dStack_184);
        for (uVar34 = uVar24 >> 2; uVar34 != 0; uVar34 = uVar34 - 1) {
          *puVar36 = *puVar39;
          puVar39 = puVar39 + 1;
          puVar36 = puVar36 + 1;
        }
        dVar18 = dVar18 + uVar24;
        param_8 = param_8 + 1;
        uVar19 = uVar19 - 1;
        for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
          *(undefined *)puVar36 = *(undefined *)puVar39;
          puVar39 = (undefined4 *)((int)puVar39 + 1);
          puVar36 = (undefined4 *)((int)puVar36 + 1);
        }
      } while (uVar19 != 0);
    }
    puStack_1bc = local_18c;
    piStack_1c0 = (int *)0x50a7fe;
    local_194 = pcVar43;
    (**(code **)(*local_18c + 0x44))();
    pcVar43 = local_194;
  }
  puStack_1bc = (uint *)(auStack_174 + 0x10);
  piStack_1c0 = (int *)0x0;
  dStack_164 = 0;
  puStack_1c4 = local_18c;
  iVar21 = (**(code **)(*local_18c + 0x58))();
  if (-1 < iVar21) {
    uVar19 = 0;
    iVar21 = 0;
    local_194 = pcVar48;
    if (param_4 != 0) {
      pvVar20 = (void *)0x0;
      pcVar43 = (cls_0x668cd8 *)param_7;
      do {
        uVar24 = 0;
        if (*(uint *)pcVar43 != 0) {
          do {
            *(uint *)(auStack_174._4_4_ + iVar21 * 4) = uVar19;
            *(uint *)(this->mbr_0x60 + iVar21 * 4) = uVar19;
            iVar21 = iVar21 + 1;
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)pcVar43);
        }
        if (param_5 != 0) {
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)(this->mbr_0x64 + (int)pvVar20),
                     (_String_base *)((int)pvVar20 + param_5),0,0xffffffff);
        }
        uVar19 = uVar19 + 1;
        pcVar43 = (cls_0x668cd8 *)((int)pcVar43 + 4);
        pvVar20 = (void *)((int)pvVar20 + 0x1c);
      } while (uVar19 < param_4);
    }
    (**(code **)(*unaff_EBX + 0x5c))();
    pcVar48 = local_194;
  }
  pvVar25 = operator_new((int)local_194 * 0xc);
  _Memory = (int **)0x0;
  (**(code **)(*unaff_EBX + 0x54))();
  local_18c = (uint *)CONCAT31(local_18c._1_3_,uStack_180._3_1_);
  pcStack_188 = (cls_0x668cd8 *)FUN_0057c2e0();
  *(undefined *)((int)&pcStack_188->mbr_0x1c + 1) = 1;
  pcStack_188->mbr_0x4 = (dword)pcStack_188;
  pcStack_188->vftptr_0x0 = (cls_0x668cd8__vftable_668cd8 *)pcStack_188;
  pcStack_188->mbr_0x8 = (dword)pcStack_188;
  dStack_184 = 0;
  uStack_3c = 1;
  if (this->mbr_0x7c == 0) {
    this->mbr_0x34 = (dword)pvVar25;
    uVar19 = 0;
    if (param_2 != 0) {
      do {
        piStack_1c0 = (int *)0x0;
        puStack_1c4 = (uint *)0x0;
        uVar24 = uVar19;
        do {
          iVar21 = *(int *)(param_11 + (int)puStack_1c4 * 4);
          ppiVar2 = (int **)(iVar21 + uVar19 * 8);
          if (*(int *)(iVar21 + uVar19 * 8) != -1) {
            pcVar27 = (cls_0x5096b0 *)
                      cls_0x55dc80::meth_0x50a4f0((cls_0x55dc80 *)&local_18c,ppiVar2);
            dVar18 = pcVar27->mbr_0x4;
            piStack_1c0 = (int *)((float)ppiVar2[1] + (float)piStack_1c0);
            puStack_1bc = (uint *)FUN_005b3290(dVar18,*(undefined4 *)(dVar18 + 4),
                                               (undefined4 *)&stack0xfffffe68);
            uVar19 = uVar24;
            cls_0x5096b0::meth_0x508de0(pcVar27,1);
            *(uint **)(dVar18 + 4) = puStack_1bc;
            **(undefined4 **)((int)puStack_1bc + 4) = puStack_1bc;
            uVar24 = uVar19;
          }
          puStack_1c4 = (uint *)((int)puStack_1c4 + 1);
        } while (puStack_1c4 < (uint *)0x2);
        if (0.001 < ABS(1.0 - (float)piStack_1c0) != NAN(ABS(1.0 - (float)piStack_1c0))) {
          FUN_00616d8c(auStack_174 + 0x24,
                       (byte *)
                       "Gfx_SkinMesh::CreateSkinMeshFVF - [WARNING] Vertex #%d\'s weights do NOT add up to 1.0 (%f)!\n"
                      );
          MessageBoxA((HWND)0x0,auStack_174 + 0x24,"WARNING - Incorrect vertex weight",0x30);
          FUN_00497120(auStack_174 + 0x24);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < param_2);
    }
  }
  else {
    pvVar25 = operator_new((int)local_194 * 0xc);
    this->mbr_0x34 = (dword)pvVar25;
    iVar21 = (**(code **)(*piVar23 + 100))();
    if (-1 < iVar21) {
      uVar19 = (**(code **)(*piStack_1c0 + 0x10))();
      piVar26 = (int *)(**(code **)(*puStack_1c4 + 0xc))();
      pcVar50 = (cls_0x668cd8 *)0x0;
      if (uVar19 >> 2 != 0) {
        do {
          fVar51 = 0.0;
          puStack_1c4 = (uint *)0x0;
          piVar49 = piVar26;
          do {
            iVar21 = *(int *)(param_11 + (int)puStack_1c4 * 4);
            ppiVar2 = (int **)(iVar21 + *piVar26 * 8);
            if (*(int *)(iVar21 + *piVar26 * 8) != -1) {
              pcVar27 = (cls_0x5096b0 *)
                        cls_0x55dc80::meth_0x50a4f0((cls_0x55dc80 *)&local_18c,ppiVar2);
              dVar18 = pcVar27->mbr_0x4;
              fVar51 = (float)ppiVar2[1] + fVar51;
              puStack_1bc = (uint *)FUN_005b3290(dVar18,*(undefined4 *)(dVar18 + 4),
                                                 (undefined4 *)&stack0xfffffe68);
              piVar26 = piVar49;
              cls_0x5096b0::meth_0x508de0(pcVar27,1);
              *(uint **)(dVar18 + 4) = puStack_1bc;
              **(undefined4 **)((int)puStack_1bc + 4) = puStack_1bc;
              piVar49 = piVar26;
            }
            puStack_1c4 = (uint *)((int)puStack_1c4 + 1);
          } while (puStack_1c4 < (uint *)0x2);
          if (0.001 < ABS(1.0 - fVar51) != NAN(ABS(1.0 - fVar51))) {
            FUN_00616d8c(auStack_174 + 0x24,
                         (byte *)
                         "Gfx_SkinMesh::CreateSkinMeshFVF - [WARNING] Vertex #%d\'s weights do NOT add up to 1.0 (%f)!\n"
                        );
            MessageBoxA((HWND)0x0,auStack_174 + 0x24,"WARNING - Incorrect vertex weight",0x30);
            FUN_00497120(auStack_174 + 0x24);
          }
          pcVar50 = (cls_0x668cd8 *)((int)&pcVar50->vftptr_0x0 + 1);
          piVar26 = piVar26 + 1;
          pcVar48 = (cls_0x668cd8 *)piVar26;
        } while (pcVar50 < pcVar43);
      }
      if (piStack_1c0 != (int *)0x0) {
        (**(code **)(*piStack_1c0 + 8))();
        piStack_1c0 = (int *)0x0;
      }
    }
    if (pvVar20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar20);
    }
  }
  this->mbr_0x3c = (dword)param_9;
  pvVar20 = operator_new((int)param_9 << 4);
  this->mbr_0x38 = (dword)pvVar20;
  pvVar20 = operator_new((int)param_9 * 4);
  this->mbr_0x40 = (dword)pvVar20;
  pvVar20 = operator_new((int)param_9 * 0x40 + 0x10);
  if (pvVar20 == (void *)0x0) {
    dVar18 = 0;
  }
  else {
    bVar33 = 0x10 - ((byte)pvVar20 & 0xf);
    dVar18 = (int)pvVar20 + (uint)bVar33;
    *(byte *)(dVar18 - 1) = bVar33;
  }
  this->mbr_0xa0 = dVar18;
  puStack_1c4 = (uint *)0x0;
  if (param_9 != (uint *)0x0) {
    do {
      puVar17 = puStack_1c4;
      *(undefined4 *)(this->mbr_0x40 + (int)puStack_1c4 * 4) = 0xd4;
      cls_0x55dc80::meth_0x51f080
                ((cls_0x55dc80 *)&local_18c,(int *)&stack0xfffffe48,(uint *)&puStack_1c4);
      if (pcVar48 == pcStack_188) {
        iVar21 = (int)puVar17 * 0x10;
        *(uint **)(iVar21 + this->mbr_0x38) = puVar17;
        *(undefined4 *)(iVar21 + 4 + this->mbr_0x38) = 0;
        *(undefined4 *)(iVar21 + 8 + this->mbr_0x38) = 0;
        *(undefined4 *)(iVar21 + 0xc + this->mbr_0x38) = 0;
      }
      else {
        dVar18 = pcVar48->mbr_0x18;
        dVar40 = (int)puVar17 * 0x10;
        *(dword *)(dVar40 + this->mbr_0x38) = pcVar48->mbr_0xc;
        uVar19 = dVar18 * 4;
        *(dword *)(dVar40 + 4 + this->mbr_0x38) = dVar18;
        puStack_1bc = (uint *)dVar40;
        pvVar20 = operator_new(uVar19);
        *(void **)(dVar40 + 8 + this->mbr_0x38) = pvVar20;
        pvVar20 = operator_new(uVar19);
        *(void **)(dVar40 + 0xc + this->mbr_0x38) = pvVar20;
        iVar21 = *(int *)(dVar40 + this->mbr_0x38) * 100 + *(int *)(param_10 + 0x138);
        if (*(uint *)(iVar21 + 0x5c) < 0x10) {
          pcVar41 = (char *)(iVar21 + 0x48);
        }
        else {
          pcVar41 = *(char **)(iVar21 + 0x48);
        }
        dStack_160 = 0xf;
        dStack_164 = 0;
        auStack_174._0_4_ = auStack_174._0_4_ & 0xffffff00;
        pcVar28 = pcVar41;
        do {
          cVar12 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        } while (cVar12 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&puStack_178,pcVar41,(int)pcVar28 - (int)(pcVar41 + 1));
        uStack_3c._0_1_ = 2;
        piStack_1c0 = (int *)0x0;
        do {
          pbVar44 = (&PTR_s____none____006fc0c0)[(int)piStack_1c0];
          pbVar29 = pbVar44;
          do {
            bVar33 = *pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (bVar33 != 0);
          uVar19 = (int)pbVar29 - (int)(pbVar44 + 1);
          if (dStack_164 == 0) {
LAB_0050ad49:
            if ((uVar19 <= dStack_164) && (dStack_164 == uVar19)) {
              *(int **)(this->mbr_0x40 + (int)puStack_1c4 * 4) = piStack_1c0;
              goto LAB_0050ad89;
            }
          }
          else {
            uVar24 = dStack_164;
            if (uVar19 <= dStack_164) {
              uVar24 = uVar19;
            }
            pcVar43 = (cls_0x668cd8 *)auStack_174._0_4_;
            if (dStack_160 < 0x10) {
              pcVar43 = (cls_0x668cd8 *)auStack_174;
            }
            bVar45 = false;
            iVar21 = 0;
            bVar46 = true;
            do {
              if (uVar24 == 0) break;
              uVar24 = uVar24 - 1;
              bVar45 = *(byte *)&pcVar43->vftptr_0x0 < *pbVar44;
              bVar46 = *(byte *)&pcVar43->vftptr_0x0 == *pbVar44;
              pcVar43 = (cls_0x668cd8 *)((int)&pcVar43->vftptr_0x0 + 1);
              pbVar44 = pbVar44 + 1;
            } while (bVar46);
            if (!bVar46) {
              iVar21 = (1 - (uint)bVar45) - (uint)(bVar45 != 0);
            }
            if (iVar21 == 0) goto LAB_0050ad49;
          }
          piStack_1c0 = (int *)((int)piStack_1c0 + 1);
        } while ((int)piStack_1c0 < 0xd4);
        handle_fatal_error("Gfx_SkinMesh::CreateSkinMeshFVF - CANNOT FIND BONE: %s\n");
LAB_0050ad89:
        puVar39 = (undefined4 *)pcVar48->mbr_0x14;
        puVar15 = *(undefined **)(this->mbr_0x38 + 8 + (int)puStack_1bc);
        puVar36 = *(undefined4 **)(this->mbr_0x38 + (int)puStack_1bc + 0xc);
        if (puVar39 == (undefined4 *)0x0) {
          puVar30 = (undefined4 *)0x0;
        }
        else {
          puVar30 = (undefined4 *)*puVar39;
        }
        if (puVar30 != puVar39) {
          iVar21 = (int)puVar15 - (int)puVar36;
          do {
            *(undefined4 *)(iVar21 + (int)puVar36) = puVar30[2];
            *puVar36 = puVar30[3];
            puVar30 = (undefined4 *)*puVar30;
            puVar36 = puVar36 + 1;
          } while (puVar30 != (undefined4 *)pcVar48->mbr_0x14);
        }
        uStack_3c = CONCAT31(uStack_3c._1_3_,1);
        puStack_1bc = (uint *)puVar15;
        if (0xf < dStack_160) {
                    /* WARNING: Subroutine does not return */
          _free((void *)auStack_174._0_4_);
        }
        dStack_160 = 0xf;
        dStack_164 = 0;
        auStack_174._0_4_ = auStack_174._0_4_ & 0xffffff00;
      }
      puStack_1c4 = (uint *)((int)puStack_1c4 + 1);
    } while (puStack_1c4 < param_9);
  }
  FUN_0047d1ec(piVar23,this->mbr_0x3c,(cls_0x668d50 **)&this->mbr_0x2c);
  uVar19 = 0;
  if (piVar23 != (int *)0x0) {
    (**(code **)(*piVar23 + 8))();
  }
  if (this->mbr_0x3c != 0) {
    do {
      (**(code **)(*(int *)this->mbr_0x2c + 0x4c))();
      uVar19 = uVar19 + 1;
    } while (uVar19 < this->mbr_0x3c);
  }
  if (this->mbr_0x54 < 4) {
    this->mbr_0x7e = 1;
  }
  iVar21 = (**(code **)(*(int *)this->mbr_0x2c + 0x60))();
  if (-1 < iVar21) {
    (**(code **)(*(int *)this->mbr_0x30 + 0x18))();
    (**(code **)(*(int *)this->mbr_0x48 + 0x10))();
    dVar18 = (**(code **)(*(int *)this->mbr_0x48 + 0xc))();
    this->mbr_0x4c = dVar18;
    pvVar20 = operator_new(this->mbr_0x44 << 2);
    this->mbr_0x50 = (dword)pvVar20;
    uVar19 = 0;
    if (this->mbr_0x44 != 0) {
      iVar21 = 0;
      do {
        piVar23 = *(int **)(iVar21 + 0x14 + this->mbr_0x4c);
        iVar22 = 0;
        iVar42 = 4;
        do {
          if (*piVar23 != -1) {
            iVar22 = iVar22 + 1;
          }
          piVar23 = piVar23 + 1;
          iVar42 = iVar42 + -1;
        } while (iVar42 != 0);
        if (iVar22 != 0) {
          iVar22 = iVar22 + -1;
        }
        *(int *)(this->mbr_0x50 + uVar19 * 4) = iVar22;
        uVar19 = uVar19 + 1;
        iVar21 = iVar21 + 0x18;
      } while (uVar19 < this->mbr_0x44);
    }
  }
  piVar23 = (int *)this->mbr_0x2c;
  pdVar1 = &this->mbr_0x80;
  iStack_204 = 0;
  iVar21 = (**(code **)(*piVar23 + 0x68))();
  if (-1 < iVar21) {
    (**(code **)(*(int *)*pdVar1 + 0x48))();
    pvVar20 = operator_new(this->mbr_0x98 * 0x14);
    this->mbr_0x9c = (dword)pvVar20;
    (**(code **)(*(int *)*pdVar1 + 0x48))((int *)*pdVar1,pvVar20,&this->mbr_0x98);
    dVar18 = (**(code **)(*(int *)*pdVar1 + 0x10))((int *)*pdVar1);
    this->mbr_0x88 = dVar18;
    pvVar20 = operator_new(dVar18 * 0x34);
    this->mbr_0x8c = (dword)pvVar20;
    iVar21 = (**(code **)(*(int *)*pdVar1 + 0x38))((int *)*pdVar1,0x10,&stack0xfffffde0);
    if (-1 < iVar21) {
      uVar19 = (**(code **)(*(int *)*pdVar1 + 0x18))();
      dVar18 = FUN_0047460d(uVar19);
      this->mbr_0x84 = dVar18;
      pfVar47 = (float *)*pdVar1;
      iVar21 = 0x10;
      iVar22 = (**(code **)((int)*pfVar47 + 0x40))(pfVar47);
      if (-1 < iVar22) {
        if ((DAT_0070839c == 2) && (uVar19 = 0, this->mbr_0x88 != 0)) {
          iVar22 = 0;
          do {
            pfVar47 = (float *)this->mbr_0x8c;
            *(undefined *)(pfVar47 + 0xc) =
                 *(undefined *)
                  (*(int *)(this->mbr_0x60 + uVar19 * 4) * 0x244 + 0xb9 + this->mbr_0x5c);
            *(undefined *)((int)pfVar47 + 0x31) =
                 *(undefined *)
                  (*(int *)(this->mbr_0x60 + uVar19 * 4) * 0x244 + 0xba + this->mbr_0x5c);
            *(undefined2 *)(pfVar47 + 3) = *(undefined2 *)(iStack_204 + iVar22);
            uVar13 = *(ushort *)(iStack_204 + 2 + iVar22);
            *(ushort *)((int)pfVar47 + 0xe) = uVar13;
            *(ushort *)(pfVar47 + 6) = uVar13;
            pfVar47[4] = -NAN;
            pfVar47[5] = -NAN;
            uVar14 = *(ushort *)(iStack_204 + 4 + iVar22);
            *(ushort *)((int)pfVar47 + 0x1a) = uVar14;
            pfVar47[7] = -NAN;
            pfVar47[8] = -NAN;
            pfVar47[10] = -NAN;
            pfVar47[0xb] = -NAN;
            *(ushort *)(pfVar47 + 9) = uVar14;
            *(ushort *)((int)pfVar47 + 0x26) = *(ushort *)(pfVar47 + 3);
            dVar18 = this->mbr_0x84;
            pfVar37 = (float *)(uVar13 * dVar18 + (int)piVar23);
            fVar51 = pfVar37[2];
            pfVar35 = (float *)(*(ushort *)(pfVar47 + 3) * dVar18 + (int)piVar23);
            fVar3 = pfVar35[2];
            fVar4 = pfVar37[1];
            fVar5 = pfVar35[1];
            fVar6 = *pfVar37;
            fVar7 = *pfVar35;
            pfVar37 = (float *)(uVar14 * dVar18 + (int)piVar23);
            fVar8 = pfVar37[2];
            fVar9 = pfVar35[2];
            fVar16 = pfVar37[1] - pfVar35[1];
            fVar10 = *pfVar37;
            fVar11 = *pfVar35;
            *pfVar47 = (fVar8 - fVar9) * (fVar4 - fVar5) - fVar16 * (fVar51 - fVar3);
            pfVar47[1] = (fVar10 - fVar11) * (fVar51 - fVar3) - (fVar8 - fVar9) * (fVar6 - fVar7);
            pfVar47[2] = fVar16 * (fVar6 - fVar7) - (fVar10 - fVar11) * (fVar4 - fVar5);
            thunk_FUN_0047103a();
            uVar19 = (int)fVar16 + 1;
            iStack_204 = iStack_204 + 0x34;
            iVar22 = iVar21 + 6;
            iVar21 = iVar22;
          } while (uVar19 < this->mbr_0x88);
        }
        (**(code **)(*(int *)this->mbr_0x80 + 0x44))((int *)this->mbr_0x80,pfVar47);
      }
      (**(code **)(*(int *)this->mbr_0x80 + 0x3c))((int *)this->mbr_0x80);
      uStack_208 = 0;
      if (this->mbr_0x88 != 0) {
        iVar21 = 0;
        do {
          iVar22 = this->mbr_0x8c + iVar21;
          puVar17 = (uint *)(iVar22 + 0x14);
          uStack_200 = 3;
          do {
            if (((puVar17[-1] == 0xffffffff) &&
                (*puVar17 = uStack_208, *(char *)(iVar22 + 0x31) != '\0')) &&
               (uStack_1f0 = 0, this->mbr_0x88 != 0)) {
              iStack_1ec = 0;
              do {
                if (uStack_1f0 != uStack_208) {
                  sVar38 = *(short *)(puVar17 + -2);
                  uVar19 = 0;
                  psVar31 = (short *)(this->mbr_0x8c + 0xc + iStack_1ec);
                  do {
                    if (((sVar38 == *psVar31) && (*(short *)((int)puVar17 + -6) == psVar31[1])) ||
                       ((sVar38 = *(short *)(puVar17 + -2), sVar38 == psVar31[1] &&
                        (*(short *)((int)puVar17 + -6) == *psVar31)))) {
                      puVar17[-1] = uStack_1f0;
                      *(uint *)(psVar31 + 2) = uStack_208;
                      *(uint *)(psVar31 + 4) = uStack_1f0;
                      goto LAB_0050b2c8;
                    }
                    uVar19 = uVar19 + 1;
                    psVar31 = psVar31 + 6;
                  } while (uVar19 < 3);
                }
                uStack_1f0 = uStack_1f0 + 1;
                iStack_1ec = iStack_1ec + 0x34;
              } while (uStack_1f0 < this->mbr_0x88);
            }
LAB_0050b2c8:
            puVar17 = puVar17 + 3;
            uStack_200 = uStack_200 + -1;
          } while (uStack_200 != 0);
          uStack_208 = uStack_208 + 1;
          iVar21 = iVar21 + 0x34;
        } while (uStack_208 < this->mbr_0x88);
      }
      psVar31 = (short *)operator_new(this->mbr_0x88 * 0x24);
      this->mbr_0x90 = 0;
      uStack_208 = 0;
      if (this->mbr_0x88 != 0) {
        iVar21 = 0;
        do {
          uStack_1f0 = 3;
          puVar39 = (undefined4 *)(this->mbr_0x8c + iVar21);
          do {
            puVar36 = puVar39 + 3;
            if (puVar39[4] == -1) {
              puVar30 = (undefined4 *)(psVar31 + this->mbr_0x90 * 6);
              *puVar30 = *puVar36;
              puVar30[1] = puVar39[4];
              puVar30[2] = puVar39[5];
              this->mbr_0x90 = this->mbr_0x90 + 1;
            }
            else {
              uVar19 = 0;
              psVar32 = psVar31;
              if (this->mbr_0x90 != 0) {
                do {
                  if (((*psVar32 == *(short *)puVar36) &&
                      (psVar32[1] == *(short *)((int)puVar39 + 0xe))) ||
                     ((*psVar32 == *(short *)((int)puVar39 + 0xe) &&
                      (psVar32[1] == *(short *)puVar36)))) goto LAB_0050b3dd;
                  uVar19 = uVar19 + 1;
                  psVar32 = psVar32 + 6;
                } while (uVar19 < this->mbr_0x90);
              }
              puVar30 = (undefined4 *)(psVar31 + this->mbr_0x90 * 6);
              *puVar30 = *puVar36;
              puVar30[1] = puVar39[4];
              puVar30[2] = puVar39[5];
              this->mbr_0x90 = this->mbr_0x90 + 1;
            }
LAB_0050b3dd:
            uStack_1f0 = uStack_1f0 + -1;
            puVar39 = puVar36;
          } while (uStack_1f0 != 0);
          uStack_208 = uStack_208 + 1;
          iVar21 = iVar21 + 0x34;
        } while (uStack_208 < this->mbr_0x88);
      }
      pvVar20 = operator_new(this->mbr_0x90 * 0xc);
      this->mbr_0x94 = (dword)pvVar20;
      iVar21 = 0;
      uStack_200 = 0;
      if (this->mbr_0x90 != 0) {
        do {
          puVar36 = (undefined4 *)(this->mbr_0x94 + iVar21);
          puVar39 = (undefined4 *)((int)psVar31 + iVar21);
          *puVar36 = *puVar39;
          puVar36[1] = puVar39[1];
          puVar36[2] = puVar39[2];
          uStack_200 = uStack_200 + 1;
          iVar21 = iVar21 + 0xc;
        } while (uStack_200 < this->mbr_0x90);
      }
      if (psVar31 != (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(psVar31);
      }
    }
  }
  dStack_80 = 0xffffffff;
  cls_0x55dc80::meth_0x50a190
            ((cls_0x55dc80 *)&stack0xfffffe30,(int **)&stack0xfffffe1c,(int **)*_Memory,_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall Gfx_SkinMesh::meth_0x524450(Gfx_SkinMesh *this)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      if ((this->mbr_0x6c != 0) &&
         (pvVar1 = *(void **)(this->mbr_0x6c + 4 + uVar2 * 8), pvVar1 != (void *)0x0)) {
        _eh_vector_destructor_iterator_
                  (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0x58);
  }
  if ((void *)this->mbr_0x6c == (void *)0x0) {
    pvVar1 = operator_new(this->mbr_0x58 << 3);
    this->mbr_0x6c = (dword)pvVar1;
    uVar2 = 0;
    if (this->mbr_0x58 != 0) {
      do {
        *(undefined4 *)(this->mbr_0x6c + uVar2 * 8) = 0;
        *(undefined4 *)(this->mbr_0x6c + 4 + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < this->mbr_0x58);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x6c);
}


#include "../include/Gfx_SkinMesh.h"
