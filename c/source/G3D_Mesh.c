#include "../include/G3D_Mesh.h"

void __thiscall G3D_Mesh::meth_0x4ccc10(G3D_Mesh *this)

{
  void *pvVar1;
  int iVar2;
  dword *pdVar3;
  uint local_4;
  
  *(undefined *)&this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  if ((void *)this->mbr_0x54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x54);
  }
  *(undefined *)&this->mbr_0x70 = 0;
  pdVar3 = &this->mbr_0x74;
  iVar2 = 4;
  do {
    if ((void *)*pdVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*pdVar3);
    }
    pdVar3 = pdVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this->mbr_0x88 != 0) {
    local_4 = 0;
    if (this->mbr_0x84 != 0) {
      iVar2 = 0;
      do {
        pvVar1 = *(void **)(this->mbr_0x88 + 0x140 + iVar2);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        local_4 = local_4 + 1;
        iVar2 = iVar2 + 0x144;
      } while (local_4 < this->mbr_0x84);
    }
    pvVar1 = (void *)this->mbr_0x88;
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x144,*(int *)((int)pvVar1 + -4),FUN_004cc170);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar1 + -4));
    }
    this->mbr_0x88 = 0;
  }
  pvVar1 = (void *)this->mbr_0x8c;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)this->mbr_0x90 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x90);
  }
  if ((void *)this->mbr_0x94 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x94);
  }
  if (this->mbr_0x98 != 0) {
    if (this->mbr_0x84 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this->mbr_0x98);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x98);
  }
  this->mbr_0x84 = 0;
  return;
}



void __thiscall G3D_Mesh::virt_meth_0x4d2e80(G3D_Mesh *this,FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)&this->mbr_0x24 == '\x0f') {
    FUN_004c8b00(param_1);
    FID_conflict__fwprintf(param_1,L"敍桳");
  }
  FUN_004c8b30(param_1);
  cls_0x4ca8c0::meth_0x4ca8c0((cls_0x4ca8c0 *)&(this->G3D_BaseAttribute).field_0x4,param_1,'\x01');
  iVar2 = 0;
  iVar3 = 0;
  while( true ) {
    if (this->mbr_0x2c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x30 - this->mbr_0x2c) / 0x90;
    }
    if (iVar1 <= iVar2) break;
    FUN_004c9ce0((void *)(this->mbr_0x2c + iVar3),param_1);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x90;
  }
  iVar2 = 0;
  while( true ) {
    if (this->mbr_0x3c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x40 - this->mbr_0x3c) >> 2;
    }
    if (iVar3 <= iVar2) break;
    FUN_004d2c70(*(void **)(this->mbr_0x3c + iVar2 * 4),param_1);
    iVar2 = iVar2 + 1;
  }
  FUN_004c8b70(param_1);
  return;
}



void __thiscall G3D_Mesh::virt_meth_0x4d2f40(G3D_Mesh *this,FILE *param_1)

{
  dword *_Str;
  FILE *_File;
  uint uVar1;
  dword unaff_EDI;
  _String_base *p_Var2;
  uint uVar3;
  int iVar4;
  dword *_Str_00;
  _String_base *_Str_01;
  undefined4 *puVar5;
  int local_10;
  undefined *local_c;
  uint local_8;
  undefined *local_4;
  
  _File = param_1;
  _fwrite(&this->mbr_0x24,1,1,param_1);
  G3D_DirectionalLight::meth_0x4ce980((G3D_DirectionalLight *)this,(char)_File,unaff_EDI);
  uVar1 = 0;
  if (**(char **)(this->mbr_0x20 + 0x104) != '\0') {
    if (*(char *)&this->mbr_0x48 != '\0') {
      _fwrite(&this->mbr_0x48,1,1,_File);
      _Str = &this->mbr_0x4c;
      _fwrite(_Str,4,1,_File);
      _fwrite(&this->mbr_0x50,4,1,_File);
      _fwrite((void *)this->mbr_0x54,this->mbr_0x50,*_Str,_File);
      _fwrite(&this->mbr_0x58,4,3,_File);
      _Str_00 = &this->mbr_0x64;
      puVar5 = (undefined4 *)0x0;
      _fwrite(_Str_00,4,3,_File);
      _fwrite(&this->mbr_0x70,1,1,_File);
      if (*(char *)&this->mbr_0x70 != '\0') {
        _fwrite(&DAT_00671474,4,1,_File);
        param_1 = (FILE *)&this->mbr_0x74;
        local_c = (undefined *)0x4;
        do {
          _fwrite(param_1->_ptr,8,*_Str,_File);
          param_1 = (FILE *)&param_1->_cnt;
          local_c = local_c + -1;
        } while (local_c != (undefined *)0x0);
      }
      _fwrite(&this->mbr_0x84,4,1,_File);
      local_8 = 0;
      if (this->mbr_0x84 != 0) {
        local_10 = 0;
        do {
          param_1 = (FILE *)&stack0xffffffc0;
          p_Var2 = (_String_base *)(this->mbr_0x88 + local_10);
          puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffffc0,p_Var2,0,0xffffffff);
          FUN_004cb420(_Str_00,puVar5);
          param_1 = (FILE *)&stack0xffffffc0;
          puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffffc0,p_Var2 + 0x1c,0,0xffffffff)
          ;
          FUN_004cb420(_Str_00,puVar5);
          _fwrite(p_Var2 + 0x38,4,4,_File);
          _fwrite(p_Var2 + 0x48,4,4,_File);
          _fwrite(p_Var2 + 0x58,4,4,_File);
          _Str_01 = p_Var2 + 0x68;
          uVar3 = 0;
          _fwrite(_Str_01,4,4,_File);
          _fwrite(p_Var2 + 0x78,4,1,_File);
          puVar5 = (undefined4 *)(uVar3 & 0xffffff00);
          param_1 = (FILE *)&stack0xffffffc0;
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffffc0,p_Var2 + 0x7c,0,0xffffffff)
          ;
          FUN_004cb420(_Str_01,puVar5);
          puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
          param_1 = (FILE *)&stack0xffffffc0;
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffffc0,p_Var2 + 0x98,0,0xffffffff)
          ;
          FUN_004cb420(_Str_01,puVar5);
          _fwrite(p_Var2 + 0xb4,1,1,_File);
          _fwrite(p_Var2 + 0xb5,1,1,_File);
          _fwrite(p_Var2 + 0xb6,1,1,_File);
          _fwrite(p_Var2 + 0xb8,4,1,_File);
          _fwrite(p_Var2 + 0xbc,1,1,_File);
          _fwrite(p_Var2 + 0xc0,4,1,_File);
          _fwrite(p_Var2 + 0xc4,1,1,_File);
          _fwrite(p_Var2 + 200,4,1,_File);
          _fwrite(p_Var2 + 0xcc,4,1,_File);
          _fwrite(p_Var2 + 0xd0,1,1,_File);
          _fwrite(p_Var2 + 0xd4,4,1,_File);
          _fwrite(p_Var2 + 0xd8,4,1,_File);
          _fwrite(p_Var2 + 0xdc,1,1,_File);
          _fwrite(p_Var2 + 0xe0,4,1,_File);
          _fwrite(p_Var2 + 0xe4,4,1,_File);
          _fwrite(p_Var2 + 0xe8,4,1,_File);
          _fwrite(p_Var2 + 0xec,1,1,_File);
          _fwrite(p_Var2 + 0xf0,4,1,_File);
          _fwrite(p_Var2 + 0xf4,4,1,_File);
          _Str_00 = (dword *)(p_Var2 + 0xf8);
          puVar5 = (undefined4 *)0x0;
          _fwrite(_Str_00,4,1,_File);
          _fwrite(p_Var2 + 0xfc,4,1,_File);
          param_1 = (FILE *)(p_Var2 + 0x100);
          _fwrite(param_1,4,1,_File);
          if (param_1->_ptr != (char *)0x0) {
            puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
            local_c = &stack0xffffffc0;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&stack0xffffffc0,p_Var2 + 0x104,0,0xffffffff);
            FUN_004cb420(_Str_00,puVar5);
            if ((char *)0x1 < param_1->_ptr) {
              puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
              param_1 = (FILE *)&stack0xffffffc0;
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)&stack0xffffffc0,p_Var2 + 0x120,0,0xffffffff);
              FUN_004cb420(_Str_00,puVar5);
            }
          }
          _fwrite(p_Var2 + 0x13c,4,1,_File);
          if ((*(int *)(p_Var2 + 0x13c) != 0) &&
             (local_c = (undefined *)0x0, *(int *)(p_Var2 + 0x13c) != 0)) {
            param_1 = (FILE *)0x0;
            do {
              local_4 = &stack0xffffffc0;
              puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)&stack0xffffffc0,
                         (_String_base *)((int)&param_1->_ptr + *(int *)(p_Var2 + 0x140)),0,
                         0xffffffff);
              FUN_004cb420(_Str_00,puVar5);
              local_c = local_c + 1;
              param_1 = (FILE *)&param_1->_tmpfname;
            } while (local_c < *(undefined **)(p_Var2 + 0x13c));
          }
          local_8 = local_8 + 1;
          local_10 = local_10 + 0x144;
        } while (local_8 < this->mbr_0x84);
      }
      uVar3 = 0;
      if (this->mbr_0x84 != 0) {
        param_1 = (FILE *)0x0;
        do {
          local_4 = &stack0xffffffc0;
          puVar5 = (undefined4 *)((uint)puVar5 & 0xffffff00);
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&stack0xffffffc0,
                     (_String_base *)((int)&param_1->_ptr + this->mbr_0x8c),0,0xffffffff);
          FUN_004cb420(_Str_00,puVar5);
          uVar3 = uVar3 + 1;
          param_1 = (FILE *)&param_1->_tmpfname;
        } while (uVar3 < this->mbr_0x84);
      }
      _fwrite((void *)this->mbr_0x90,4,this->mbr_0x84,_File);
      _fwrite((void *)this->mbr_0x94,4,this->mbr_0x84,_File);
      if (this->mbr_0x84 == 0) {
        return;
      }
      do {
        _fwrite(*(void **)(this->mbr_0x98 + uVar1 * 4),2,*(size_t *)(this->mbr_0x90 + uVar1 * 4),
                _File);
        uVar1 = uVar1 + 1;
      } while (uVar1 < this->mbr_0x84);
      return;
    }
    param_1 = (FILE *)((uint)param_1 & 0xffffff00);
    _fwrite(&param_1,1,1,_File);
  }
  if (this->mbr_0x2c == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (int)(this->mbr_0x30 - this->mbr_0x2c) / 0x90;
  }
  _fwrite(&local_10,4,1,_File);
  iVar4 = 0;
  if (0 < local_10) {
    local_c = (undefined *)0x0;
    do {
      FUN_004ca150(local_c + this->mbr_0x2c,_File);
      iVar4 = iVar4 + 1;
      local_c = local_c + 0x90;
    } while (iVar4 < local_10);
  }
  if (this->mbr_0x3c == 0) {
    local_10 = 0;
  }
  else {
    local_10 = (int)(this->mbr_0x40 - this->mbr_0x3c) >> 2;
  }
  _fwrite(&local_10,4,1,_File);
  if (0 < local_10) {
    do {
      FUN_004d2da0(*(void **)(this->mbr_0x3c + uVar1 * 4),_File);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < local_10);
  }
  return;
}



G3D_Mesh * __thiscall G3D_Mesh::G3D_Mesh(G3D_Mesh *this)

{
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Mesh__vftable_671fb8_00671fb8;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x24 = 0xf;
  *(undefined *)&this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x70 = 0;
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
  return this;
}



void __thiscall G3D_Mesh::meth_0x4d8c10(G3D_Mesh *this)

{
  dword dVar1;
  cls_0x4d7ac0 *this_00;
  cls_0x4c9b30 *pcVar2;
  int iVar3;
  dword *pdVar4;
  dword adStack_12c [34];
  undefined4 uStack_a4;
  cls_0x4c9b30 local_90;
  
  pcVar2 = cls_0x4c9b30::cls_0x4c9b30(&local_90);
  pdVar4 = adStack_12c;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar4 = pcVar2->mbr_0x0;
    pcVar2 = (cls_0x4c9b30 *)&pcVar2->mbr_0x4;
    pdVar4 = pdVar4 + 1;
  }
  cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&this->mbr_0x28,0);
  while( true ) {
    dVar1 = this->mbr_0x3c;
    if ((dVar1 == 0) || ((int)(this->mbr_0x40 - dVar1) >> 2 == 0)) {
      meth_0x4ccc10(this);
      return;
    }
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x40 - dVar1) >> 2;
    }
    this_00 = *(cls_0x4d7ac0 **)((this->mbr_0x3c - 4) + iVar3 * 4);
    if (this_00 != (cls_0x4d7ac0 *)0x0) break;
    if ((this->mbr_0x3c != 0) && ((int)(this->mbr_0x40 - this->mbr_0x3c) >> 2 != 0)) {
      this->mbr_0x40 = this->mbr_0x40 - 4;
    }
  }
  cls_0x4d7ac0::meth_0x4d7ac0(this_00);
                    /* WARNING: Subroutine does not return */
  uStack_a4 = 0x4d8c7b;
  _free(this_00);
}



G3D_Mesh * __thiscall G3D_Mesh::~G3D_Mesh(G3D_Mesh *this)

{
  G3D_Mesh *_Memory;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063377e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Mesh__vftable_671fb8_00671fb8;
  local_4 = 2;
  meth_0x4d8c10(this);
  if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x3c);
  }
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  _Memory = (G3D_Mesh *)this->mbr_0x2c;
  if (_Memory != (G3D_Mesh *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  ExceptionList = local_c;
  return _Memory;
}



undefined4 * __thiscall G3D_Mesh::virt_meth_0x4d9d30(G3D_Mesh *this,byte param_1)

{
  ~G3D_Mesh(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall G3D_Mesh::meth_0x4d9d50(G3D_Mesh *this,undefined4 *param_1)

{
  void *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006337db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x90);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)FUN_004d91d0(this_00,param_1);
  }
  local_4 = 0xffffffff;
  cls_0x4d3d90::meth_0x4d7df0((cls_0x4d3d90 *)&this->mbr_0x38,&param_1);
  ExceptionList = local_c;
  return;
}



G3D_Mesh * __thiscall G3D_Mesh::~G3D_Mesh(G3D_Mesh *this)

{
  G3D_Mesh *_Memory;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0063377e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Mesh__vftable_671fb8_00671fb8;
  uStack_4 = 2;
  meth_0x4d8c10(this);
  if ((void *)this->mbr_0x3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x3c);
  }
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  _Memory = (G3D_Mesh *)this->mbr_0x2c;
  if (_Memory != (G3D_Mesh *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  ExceptionList = pvStack_c;
  return _Memory;
}



void __thiscall G3D_Mesh::virt_meth_0x4db040(G3D_Mesh *this)

{
  int **ppiVar1;
  dword *pdVar2;
  char *pcVar3;
  cls_0x4c9b30 *pcVar4;
  int **ppiVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *****pppppuVar11;
  int **ppiVar12;
  byte *pbVar13;
  int **ppiVar14;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  uint unaff_retaddr;
  dword adStack_2e4 [31];
  undefined4 uStack_268;
  cls_0x50db20 *pcVar18;
  G3D_Mesh *local_244;
  undefined local_240 [16];
  undefined4 *****local_230 [4];
  char *local_220;
  uint local_21c;
  undefined local_218 [8];
  dword local_210;
  dword local_20c;
  undefined local_208 [8];
  dword local_200;
  dword local_1fc;
  void *local_1f4;
  uint local_1e4;
  uint local_1e0;
  undefined local_1dc [4];
  void *local_1d8;
  undefined4 local_1c8;
  uint local_1c4;
  undefined local_1c0 [4];
  void *local_1bc;
  dword local_1ac;
  uint local_1a8;
  undefined local_1a4 [4];
  void *local_1a0;
  undefined4 local_190;
  uint local_18c;
  undefined local_188 [4];
  void *local_184;
  undefined4 local_174;
  uint local_170;
  undefined local_16c [124];
  undefined4 local_f0;
  void *local_e8;
  dword local_e4;
  dword local_e0;
  int local_dc [4];
  int local_cc [4];
  undefined local_bc [172];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633a19;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  local_244 = this;
  local_240._4_4_ = FUN_004cad50();
  local_240._8_4_ = 0;
  local_4 = 0;
  cls_0x4c9b30::meth_0x4d79b0((cls_0x4c9b30 *)local_16c);
  local_16c._116_4_ = (void *)0x0;
  local_16c._120_4_ = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e4 = 0;
  local_e0 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0052ba00('{');
  pdVar2 = (dword *)FUN_0052b940(local_cc);
  local_208._4_4_ = pdVar2[1];
  local_208._0_4_ = *pdVar2;
  local_200 = pdVar2[2];
  local_1fc = pdVar2[3];
  do {
    if (local_208._0_4_ == 0x7d) {
      pcVar4 = cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)(local_bc + 0x1c));
      pdVar2 = adStack_2e4;
      for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pdVar2 = pcVar4->mbr_0x0;
        pcVar4 = (cls_0x4c9b30 *)&pcVar4->mbr_0x4;
        pdVar2 = pdVar2 + 1;
      }
      cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&local_244->mbr_0x28,local_240._8_4_);
      ppiVar1 = (int **)local_240._4_4_;
      if ((int **)local_240._4_4_ == (int **)0x0) {
        ppiVar5 = (int **)0x0;
      }
      else {
        ppiVar5 = *(int ***)local_240._4_4_;
      }
      if (ppiVar5 != (int **)local_240._4_4_) {
        iVar8 = 0;
        do {
          ppiVar12 = ppiVar5 + 2;
          ppiVar14 = (int **)(local_244->mbr_0x2c + iVar8);
          for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
            *ppiVar14 = *ppiVar12;
            ppiVar12 = ppiVar12 + 1;
            ppiVar14 = ppiVar14 + 1;
          }
          ppiVar5 = (int **)*ppiVar5;
          iVar8 = iVar8 + 0x90;
        } while (ppiVar5 != (int **)local_240._4_4_);
      }
      local_4 = local_4 & 0xffffff00;
      if (local_e8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_e8);
      }
      local_e8 = (void *)0x0;
      local_e4 = 0;
      local_e0 = 0;
      if ((void *)local_16c._116_4_ != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_16c._116_4_);
      }
      local_16c._116_4_ = 0;
      local_16c._120_4_ = 0;
      local_f0 = 0;
      cls_0x4c9b30::meth_0x4d6c70((cls_0x4c9b30 *)local_16c);
      if (ppiVar1 == (int **)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *ppiVar1;
      }
      GUI::Interface::meth_0x4b9d60((Interface *)local_240,(int **)&local_244,piVar6,(int *)ppiVar1)
      ;
                    /* WARNING: Subroutine does not return */
      _free((void *)local_240._4_4_);
    }
    if (local_208._0_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)(local_240 + 0xc));
      local_4._0_1_ = 4;
      pcVar7 = "Name";
      do {
        pcVar3 = pcVar7;
        pcVar7 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = pcVar3 + -0x65cbe0;
      if (local_220 == (char *)0x0) {
LAB_004db17e:
        if (pcVar3 <= local_220) {
          uVar10 = (uint)(local_220 != pcVar3);
          goto LAB_004db189;
        }
LAB_004db1b2:
        pcVar7 = "Vertex";
        do {
          pcVar3 = pcVar7;
          pcVar7 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        uStack_268 = 0x4db1da;
        uVar10 = ::cls_0x50db20::meth_0x41e4b0
                           ((cls_0x50db20 *)(local_240 + 0xc),0,(uint)local_220,
                            (_String_base *)"Vertex",(uint)(pcVar3 + -0x671a24));
        if (uVar10 == 0) {
          cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)(local_bc + 0x1c));
          cls_0x4c9b30::meth_0x4cc620((cls_0x4c9b30 *)(local_bc + 0x1c));
          ppiVar1 = (int **)(local_240._4_4_ + 4);
          piVar6 = (int *)FUN_004cad90(local_240._4_4_,*(int **)(local_240._4_4_ + 4),
                                       (undefined4 *)(local_bc + 0x1c));
          GUI::Interface::meth_0x4cf7c0((Interface *)local_240,1);
          *ppiVar1 = piVar6;
          *(int **)piVar6[1] = piVar6;
        }
        else {
          pcVar7 = "Material";
          do {
            pcVar3 = pcVar7;
            pcVar7 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          uStack_268 = 0x4db25e;
          uVar10 = ::cls_0x50db20::meth_0x41e4b0
                             ((cls_0x50db20 *)(local_240 + 0xc),0,(uint)local_220,
                              (_String_base *)"Material",(uint)(pcVar3 + -0x67195c));
          if (uVar10 == 0) {
            pcVar18 = (cls_0x50db20 *)0x28;
            FUN_0052ba00('(');
            FUN_0052baf0((float10 *)pcVar18);
            uVar17 = FUN_00616e24();
            local_16c._0_4_ = (undefined4)uVar17;
            pcVar18 = FUN_0052ba50(local_1c0,pcVar18);
            local_4._0_1_ = 5;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)(local_16c + 0x40),(_String_base *)pcVar18,0,0xffffffff);
            local_4._0_1_ = 4;
            if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1bc);
            }
            local_1a8 = 0xf;
            local_1ac = 0;
            local_1bc = (void *)((uint)local_1bc & 0xffffff00);
            FUN_0052ba00(')');
          }
          else {
            pcVar7 = "Texture";
            do {
              pcVar3 = pcVar7;
              pcVar7 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            uStack_268 = 0x4db311;
            uVar10 = ::cls_0x50db20::meth_0x41e4b0
                               ((cls_0x50db20 *)(local_240 + 0xc),0,(uint)local_220,
                                (_String_base *)"Texture",(uint)(pcVar3 + -0x6719ec));
            if (uVar10 == 0) {
              pcVar18 = (cls_0x50db20 *)0x28;
              FUN_0052ba00('(');
              local_16c._4_4_ = 1;
              pcVar18 = FUN_0052ba50(local_1a4,pcVar18);
              local_4._0_1_ = 6;
              ::cls_0x50db20::meth_0x401b20
                        ((cls_0x50db20 *)(local_16c + 8),(_String_base *)pcVar18,0,0xffffffff);
              local_4._0_1_ = 4;
              if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
                _free(local_1a0);
              }
              local_18c = 0xf;
              local_190 = 0;
              local_1a0 = (void *)((uint)local_1a0 & 0xffffff00);
              FUN_0052ba00(')');
            }
            else {
              pcVar7 = "Lightmap";
              do {
                pcVar3 = pcVar7;
                pcVar7 = pcVar3 + 1;
              } while (*pcVar3 != '\0');
              uStack_268 = 0x4db3be;
              uVar10 = ::cls_0x50db20::meth_0x41e4b0
                                 ((cls_0x50db20 *)(local_240 + 0xc),0,(uint)local_220,
                                  (_String_base *)"Lightmap",(uint)(pcVar3 + -0x6719e0));
              if (uVar10 == 0) {
                pcVar18 = (cls_0x50db20 *)0x28;
                FUN_0052ba00('(');
                local_16c._4_4_ = 2;
                pcVar18 = FUN_0052ba50(local_1dc,pcVar18);
                local_4._0_1_ = 7;
                ::cls_0x50db20::meth_0x401b20
                          ((cls_0x50db20 *)(local_16c + 0x24),(_String_base *)pcVar18,0,0xffffffff);
                local_4._0_1_ = 4;
                if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
                  _free(local_1d8);
                }
                local_1c4 = 0xf;
                local_1c8 = 0;
                local_1d8 = (void *)((uint)local_1d8 & 0xffffff00);
                FUN_0052ba00(')');
              }
              else {
                pcVar7 = "OcclusionZones";
                do {
                  pcVar3 = pcVar7;
                  pcVar7 = pcVar3 + 1;
                } while (*pcVar3 != '\0');
                uStack_268 = 0x4db465;
                uVar10 = ::cls_0x50db20::meth_0x41e4b0
                                   ((cls_0x50db20 *)(local_240 + 0xc),0,(uint)local_220,
                                    (_String_base *)"OcclusionZones",(uint)(pcVar3 + -0x671adc));
                if (uVar10 == 0) {
                  FUN_004d46c0((int)local_16c);
                  FUN_0052ba00('{');
                  pdVar2 = (dword *)FUN_0052b940(local_dc);
                  local_218._4_4_ = pdVar2[1];
                  local_218._0_4_ = *pdVar2;
                  local_210 = pdVar2[2];
                  local_20c = pdVar2[3];
                  if (local_218._0_4_ != 0x7d) {
                    do {
                      if (local_218._0_4_ == 0x100) {
                        FUN_0052afe0((cls_0x50db20 *)&stack0xfffffe08);
                        local_4._0_1_ = 8;
                        pcVar7 = "Zone";
                        do {
                          pcVar3 = pcVar7;
                          pcVar7 = pcVar3 + 1;
                        } while (*pcVar3 != '\0');
                        uStack_268 = 0x4db4fe;
                        uVar10 = ::cls_0x50db20::meth_0x41e4b0
                                           ((cls_0x50db20 *)&stack0xfffffe08,0,local_1e4,
                                            (_String_base *)&DAT_00671ad4,(uint)(pcVar3 + -0x671ad4)
                                           );
                        if (uVar10 == 0) {
                          pcVar18 = (cls_0x50db20 *)0x28;
                          FUN_0052ba00('(');
                          pcVar18 = FUN_0052ba50(local_188,pcVar18);
                          local_4._0_1_ = 9;
                          ::cls_0x50db20::meth_0x4c60a0
                                    ((cls_0x50db20 *)(local_16c + 0x5c),(_String_base *)pcVar18);
                          local_4._0_1_ = 8;
                          if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
                            _free(local_184);
                          }
                          local_170 = 0xf;
                          local_174 = 0;
                          local_184 = (void *)((uint)local_184 & 0xffffff00);
                          FUN_0052ba00(')');
                        }
                        else {
                          cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_218);
                        }
                        local_4._0_1_ = 4;
                        if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
                          _free(local_1f4);
                        }
                        local_1e0 = 0xf;
                        local_1e4 = 0;
                        local_1f4 = (void *)((uint)local_1f4 & 0xffffff00);
                      }
                      else {
                        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_218);
                      }
                      pdVar2 = (dword *)FUN_0052b940(local_dc);
                      local_218._4_4_ = pdVar2[1];
                      local_218._0_4_ = *pdVar2;
                      local_210 = pdVar2[2];
                      local_20c = pdVar2[3];
                    } while (local_218._0_4_ != 0x7d);
                    local_218._0_4_ = 0x7d;
                  }
                }
                else {
                  bVar15 = FUN_0043ffd0((cls_0x50db20 *)(local_240 + 0xc),
                                        (_String_base *)"Triangles");
                  if (bVar15) {
                    local_16c._108_4_ = 0;
                    FUN_004d8780((int)local_16c);
                    meth_0x4d9d50(local_244,(undefined4 *)local_16c);
                    FUN_004d46c0((int)local_16c);
                  }
                  else {
                    bVar15 = FUN_0043ffd0((cls_0x50db20 *)(local_240 + 0xc),
                                          (_String_base *)"TextureSlot");
                    if (bVar15) {
                      pcVar18 = (cls_0x50db20 *)0x28;
                      FUN_0052ba00('(');
                      FUN_0052ba50(local_bc,pcVar18);
                      local_4._0_1_ = 10;
                      FUN_0052ba00(')');
                      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_bc);
                    }
                    else {
                      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_208);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar7 = local_220;
        if (pcVar3 <= local_220) {
          pcVar7 = pcVar3;
        }
        pppppuVar11 = local_230[0];
        if (local_21c < 0x10) {
          pppppuVar11 = local_230;
        }
        bVar15 = false;
        uVar10 = 0;
        bVar16 = true;
        pbVar13 = &DAT_0065cbe0;
        do {
          if (pcVar7 == (char *)0x0) break;
          pcVar7 = pcVar7 + -1;
          bVar15 = *(byte *)pppppuVar11 < *pbVar13;
          bVar16 = *(byte *)pppppuVar11 == *pbVar13;
          pppppuVar11 = (undefined4 *****)((int)pppppuVar11 + 1);
          pbVar13 = pbVar13 + 1;
        } while (bVar16);
        if (!bVar16) {
          uVar10 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        }
        if (uVar10 == 0) goto LAB_004db17e;
LAB_004db189:
        if (uVar10 != 0) goto LAB_004db1b2;
        ::cls_0x50db20::meth_0x4d05e0((cls_0x50db20 *)&(local_244->G3D_BaseAttribute).field_0x4);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0xf < local_21c) {
                    /* WARNING: Subroutine does not return */
        _free(local_230[0]);
      }
      local_21c = 0xf;
      local_220 = (char *)0x0;
      local_230[0] = (undefined4 *****)((uint)local_230[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_208);
    }
    pdVar2 = (dword *)FUN_0052b940(local_cc);
    local_208._4_4_ = pdVar2[1];
    local_208._0_4_ = *pdVar2;
    local_200 = pdVar2[2];
    local_1fc = pdVar2[3];
  } while( true );
}



void __thiscall G3D_Mesh::virt_meth_0x4db810(G3D_Mesh *this,FILE *param_1)

{
  G3D_BaseAttribute__vftable_671ce0 *pGVar1;
  void *pvVar2;
  undefined *puVar3;
  int **ppiVar4;
  int *piVar5;
  cls_0x4c9b30 *pcVar6;
  int **ppiVar7;
  G3D_LightmapSurfaceAttribute *extraout_ECX;
  G3D_LightmapSurfaceAttribute *this_00;
  G3D_LightmapSurfaceAttribute *this_01;
  G3D_LightmapSurfaceAttribute *extraout_ECX_00;
  G3D_LightmapSurfaceAttribute *extraout_ECX_01;
  G3D_LightmapSurfaceAttribute *pGVar8;
  int iVar9;
  int iVar10;
  dword *pdVar11;
  int **ppiVar12;
  FILE *pFVar13;
  uint uVar14;
  dword *pdVar15;
  int **ppiVar16;
  uint unaff_retaddr;
  dword adStack_160 [18];
  undefined4 uStack_118;
  int local_c0;
  G3D_LightmapSurfaceAttribute *local_bc;
  int **local_b8;
  G3D_LightmapSurfaceAttribute *local_b4;
  int **local_b0;
  uint local_ac;
  G3D_LightmapSurfaceAttribute *local_a4;
  undefined local_a0 [68];
  void *local_5c;
  dword local_4c;
  uint local_48;
  int **local_40;
  int **local_3c;
  dword local_38;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  dword local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633aac;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  meth_0x4d8c10(this);
  G3D_DirectionalLight::meth_0x4d06b0((G3D_DirectionalLight *)this,param_1);
  if (**(char **)(this->mbr_0x20 + 0x104) == '\0') {
    local_b0 = (int **)FUN_004cad50();
    local_ac = 0;
    local_4 = 7;
    _fread(&local_bc,4,1,param_1);
    local_c0 = 0;
    if (0 < (int)local_bc) {
      do {
        cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
        cls_0x4c9b30::meth_0x4c9e00((cls_0x4c9b30 *)local_a0,param_1);
        ppiVar4 = local_b0 + 1;
        piVar5 = (int *)FUN_004cad90(local_b0,local_b0[1],(undefined4 *)local_a0);
        GUI::Interface::meth_0x4cf7c0((Interface *)&local_b4,1);
        *ppiVar4 = piVar5;
        *(int **)piVar5[1] = piVar5;
        local_c0 = local_c0 + 1;
      } while (local_c0 < (int)local_bc);
    }
    _fread(&local_bc,4,1,param_1);
    piVar5 = (int *)0x0;
    local_c0 = 0;
    if (0 < (int)local_bc) {
      do {
        cls_0x4c9b30::meth_0x4d79b0((cls_0x4c9b30 *)local_a0);
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        local_4._0_1_ = 10;
        cls_0x4c9b30::meth_0x4d9bb0((cls_0x4c9b30 *)local_a0,param_1);
        meth_0x4d9d50(this,(undefined4 *)local_a0);
        local_4 = CONCAT31(local_4._1_3_,7);
        if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c);
        }
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        if (local_40 != (int **)0x0) {
          local_b8 = local_3c;
          ppiVar4 = local_40;
          if (local_40 != local_3c) {
            do {
              FUN_00430980((int)ppiVar4);
              ppiVar4 = ppiVar4 + 7;
            } while (ppiVar4 != local_b8);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_40 = (int **)0x0;
        local_3c = (int **)0x0;
        local_38 = 0;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_5c);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        _eh_vector_destructor_iterator_(local_a0 + 8,0x1c,2,cls_0x4d8d70::meth_0x4b2dd0);
        local_c0 = local_c0 + 1;
      } while (local_c0 < (int)local_bc);
    }
    pcVar6 = cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
    uVar14 = local_ac;
    pdVar15 = adStack_160;
    for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pdVar15 = pcVar6->mbr_0x0;
      pcVar6 = (cls_0x4c9b30 *)&pcVar6->mbr_0x4;
      pdVar15 = pdVar15 + 1;
    }
    cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&this->mbr_0x28,uVar14);
    if (local_b0 == (int **)0x0) {
      ppiVar4 = (int **)0x0;
    }
    else {
      ppiVar4 = (int **)*local_b0;
    }
    if (ppiVar4 != local_b0) {
      iVar9 = 0;
      do {
        ppiVar7 = ppiVar4 + 2;
        ppiVar12 = (int **)(this->mbr_0x2c + iVar9);
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppiVar12 = *ppiVar7;
          ppiVar7 = ppiVar7 + 1;
          ppiVar12 = ppiVar12 + 1;
        }
        ppiVar4 = (int **)*ppiVar4;
        iVar9 = iVar9 + 0x90;
      } while (ppiVar4 != local_b0);
    }
    if (local_b0 != (int **)0x0) {
      piVar5 = *local_b0;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&local_b4,(int **)&local_a4,piVar5,(int *)local_b0);
  }
  else {
    _fread(&this->mbr_0x48,1,1,param_1);
    if (*(char *)&this->mbr_0x48 != '\0') {
      pdVar15 = &this->mbr_0x4c;
      _fread(pdVar15,4,1,param_1);
      pdVar11 = &this->mbr_0x50;
      _fread(pdVar11,4,1,param_1);
      pvVar2 = operator_new(*pdVar11 * *pdVar15);
      this->mbr_0x54 = (dword)pvVar2;
      _fread(pvVar2,*pdVar11,*pdVar15,param_1);
      uStack_118 = 0x4db8cb;
      _fread(&this->mbr_0x58,4,3,param_1);
      _fread(&this->mbr_0x64,4,3,param_1);
      _fread(&this->mbr_0x70,1,1,param_1);
      if (*(char *)&this->mbr_0x70 != '\0') {
        _fread(&local_b8,4,1,param_1);
        if (local_b8 != (int **)0x4) {
          handle_fatal_error("G3D_Mesh::ReadB3D - Bone counts different - Need to re-export!!!\n");
        }
        pdVar11 = &this->mbr_0x74;
        local_bc = (G3D_LightmapSurfaceAttribute *)0x4;
        do {
          pvVar2 = operator_new(*pdVar15 << 3);
          *pdVar11 = (dword)pvVar2;
          _fread(pvVar2,8,*pdVar15,param_1);
          pdVar11 = pdVar11 + 1;
          local_bc = (G3D_LightmapSurfaceAttribute *)((int)&local_bc[-1].mbr_0x58 + 3);
        } while (local_bc != (G3D_LightmapSurfaceAttribute *)0x0);
      }
      pdVar15 = &this->mbr_0x84;
      _fread(pdVar15,4,1,param_1);
      pGVar1 = (G3D_BaseAttribute__vftable_671ce0 *)*pdVar15;
      local_a4 = (G3D_LightmapSurfaceAttribute *)operator_new((int)pGVar1 * 0x144 + 4);
      if (local_a4 == (G3D_LightmapSurfaceAttribute *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        (local_a4->G3D_BaseAttribute).vftptr_0x0 = pGVar1;
        local_b4 = (G3D_LightmapSurfaceAttribute *)&(local_a4->G3D_BaseAttribute).field_0x4;
        _eh_vector_constructor_iterator_
                  (local_b4,0x144,(int)pGVar1,cls_0x4cc100::cls_0x4cc100,FUN_004cc170);
        puVar3 = (undefined *)local_b4;
      }
      pGVar1 = (G3D_BaseAttribute__vftable_671ce0 *)*pdVar15;
      this->mbr_0x88 = (dword)puVar3;
      local_a4 = (G3D_LightmapSurfaceAttribute *)operator_new((int)pGVar1 * 0x1c + 4);
      if (local_a4 == (G3D_LightmapSurfaceAttribute *)0x0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        (local_a4->G3D_BaseAttribute).vftptr_0x0 = pGVar1;
        local_b4 = (G3D_LightmapSurfaceAttribute *)&(local_a4->G3D_BaseAttribute).field_0x4;
        _eh_vector_constructor_iterator_
                  (local_b4,0x1c,(int)pGVar1,::cls_0x50db20::cls_0x50db20,
                   cls_0x4d8d70::meth_0x4b2dd0);
        puVar3 = (undefined *)local_b4;
      }
      this->mbr_0x8c = (dword)puVar3;
      pvVar2 = operator_new(*pdVar15 << 2);
      this->mbr_0x94 = (dword)pvVar2;
      pvVar2 = operator_new(*pdVar15 << 2);
      this->mbr_0x90 = (dword)pvVar2;
      pvVar2 = operator_new(*pdVar15 << 2);
      this->mbr_0x98 = (dword)pvVar2;
      local_b4 = (G3D_LightmapSurfaceAttribute *)0x0;
      pGVar8 = extraout_ECX;
      if (*pdVar15 != 0) {
        local_b8 = (int **)0x0;
        do {
          pFVar13 = (FILE *)(this->mbr_0x88 + (int)local_b8);
          G3D_LightmapSurfaceAttribute::meth_0x4d0450(pGVar8,pFVar13);
          G3D_LightmapSurfaceAttribute::meth_0x4d0450
                    ((G3D_LightmapSurfaceAttribute *)&pFVar13->_tmpfname,(FILE *)&pFVar13->_tmpfname
                    );
          _fread(&pFVar13[1]._bufsiz,4,4,param_1);
          _fread(&pFVar13[2]._base,4,4,param_1);
          _fread(&pFVar13[2]._bufsiz,4,4,param_1);
          _fread(&pFVar13[3]._base,4,4,param_1);
          _fread(&pFVar13[3]._bufsiz,4,1,param_1);
          G3D_LightmapSurfaceAttribute::meth_0x4d0450
                    ((G3D_LightmapSurfaceAttribute *)&pFVar13[3]._tmpfname,
                     (FILE *)&pFVar13[3]._tmpfname);
          G3D_LightmapSurfaceAttribute::meth_0x4d0450(this_00,(FILE *)&pFVar13[4]._bufsiz);
          _fread(&pFVar13[5]._charbuf,1,1,param_1);
          _fread((void *)((int)&pFVar13[5]._charbuf + 1),1,1,param_1);
          _fread((void *)((int)&pFVar13[5]._charbuf + 2),1,1,param_1);
          _fread(&pFVar13[5]._bufsiz,4,1,param_1);
          _fread(&pFVar13[5]._tmpfname,1,1,param_1);
          _fread(pFVar13 + 6,4,1,param_1);
          _fread(&pFVar13[6]._cnt,1,1,param_1);
          _fread(&pFVar13[6]._base,4,1,param_1);
          _fread(&pFVar13[6]._flag,4,1,param_1);
          _fread(&pFVar13[6]._file,1,1,param_1);
          _fread(&pFVar13[6]._charbuf,4,1,param_1);
          _fread(&pFVar13[6]._bufsiz,4,1,param_1);
          _fread(&pFVar13[6]._tmpfname,1,1,param_1);
          _fread(pFVar13 + 7,4,1,param_1);
          _fread(&pFVar13[7]._cnt,4,1,param_1);
          _fread(&pFVar13[7]._base,4,1,param_1);
          _fread(&pFVar13[7]._flag,1,1,param_1);
          _fread(&pFVar13[7]._file,4,1,param_1);
          _fread(&pFVar13[7]._charbuf,4,1,param_1);
          _fread(&pFVar13[7]._bufsiz,4,1,param_1);
          _fread(&pFVar13[7]._tmpfname,4,1,param_1);
          local_bc = (G3D_LightmapSurfaceAttribute *)(pFVar13 + 8);
          _fread(local_bc,4,1,param_1);
          if (((local_bc->G3D_BaseAttribute).vftptr_0x0 != (G3D_BaseAttribute__vftable_671ce0 *)0x0)
             && (G3D_LightmapSurfaceAttribute::meth_0x4d0450
                           ((G3D_LightmapSurfaceAttribute *)&pFVar13[8]._cnt,
                            (FILE *)&pFVar13[8]._cnt),
                (G3D_BaseAttribute__vftable_671ce0 *)0x1 < (local_bc->G3D_BaseAttribute).vftptr_0x0)
             ) {
            G3D_LightmapSurfaceAttribute::meth_0x4d0450(this_01,pFVar13 + 9);
          }
          _fread(&pFVar13[9]._tmpfname,4,1,param_1);
          local_bc = (G3D_LightmapSurfaceAttribute *)pFVar13[9]._tmpfname;
          pFVar13[10]._ptr = (char *)0x0;
          if (local_bc != (G3D_LightmapSurfaceAttribute *)0x0) {
            local_a0._0_4_ = operator_new((int)local_bc * 0x1c + 4);
            if ((G3D_LightmapSurfaceAttribute **)local_a0._0_4_ ==
                (G3D_LightmapSurfaceAttribute **)0x0) {
              local_a4 = (G3D_LightmapSurfaceAttribute *)0x0;
              pGVar8 = extraout_ECX_00;
            }
            else {
              *(G3D_LightmapSurfaceAttribute **)local_a0._0_4_ = local_bc;
              local_a4 = (G3D_LightmapSurfaceAttribute *)(local_a0._0_4_ + 4);
              _eh_vector_constructor_iterator_
                        (local_a4,0x1c,(int)local_bc,::cls_0x50db20::cls_0x50db20,
                         cls_0x4d8d70::meth_0x4b2dd0);
              pGVar8 = extraout_ECX_01;
            }
            pFVar13[10]._ptr = (char *)local_a4;
            local_a4 = (G3D_LightmapSurfaceAttribute *)0x0;
            if (pFVar13[9]._tmpfname != (char *)0x0) {
              local_bc = (G3D_LightmapSurfaceAttribute *)0x0;
              do {
                G3D_LightmapSurfaceAttribute::meth_0x4d0450
                          (pGVar8,(FILE *)(pFVar13[10]._ptr +
                                          (int)&(local_bc->G3D_BaseAttribute).vftptr_0x0));
                pGVar8 = (G3D_LightmapSurfaceAttribute *)pFVar13[9]._tmpfname;
                local_a4 = (G3D_LightmapSurfaceAttribute *)
                           ((int)&(local_a4->G3D_BaseAttribute).vftptr_0x0 + 1);
                local_bc = (G3D_LightmapSurfaceAttribute *)&(local_bc->G3D_BaseAttribute).mbr_0x1c;
              } while (local_a4 < pGVar8);
            }
          }
          pGVar8 = (G3D_LightmapSurfaceAttribute *)*pdVar15;
          local_b4 = (G3D_LightmapSurfaceAttribute *)
                     ((int)&(local_b4->G3D_BaseAttribute).vftptr_0x0 + 1);
          local_b8 = local_b8 + 0x51;
        } while (local_b4 < pGVar8);
      }
      uVar14 = 0;
      if (*pdVar15 != 0) {
        local_bc = (G3D_LightmapSurfaceAttribute *)0x0;
        do {
          G3D_LightmapSurfaceAttribute::meth_0x4d0450
                    (pGVar8,(FILE *)((int)&(local_bc->G3D_BaseAttribute).vftptr_0x0 + this->mbr_0x8c
                                    ));
          uVar14 = uVar14 + 1;
          pGVar8 = (G3D_LightmapSurfaceAttribute *)&(local_bc->G3D_BaseAttribute).mbr_0x1c;
          local_bc = pGVar8;
        } while (uVar14 < *pdVar15);
      }
      _fread((void *)this->mbr_0x90,4,*pdVar15,param_1);
      _fread((void *)this->mbr_0x94,4,*pdVar15,param_1);
      uVar14 = 0;
      if (*pdVar15 != 0) {
        do {
          pvVar2 = operator_new(*(int *)(this->mbr_0x90 + uVar14 * 4) << 1);
          *(void **)(this->mbr_0x98 + uVar14 * 4) = pvVar2;
          _fread(*(void **)(this->mbr_0x98 + uVar14 * 4),2,*(size_t *)(this->mbr_0x90 + uVar14 * 4),
                 param_1);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *pdVar15);
      }
      ExceptionList = puStack_8;
      FUN_00616e15((uint)pvStack_c ^ (uint)param_1);
      return;
    }
    FUN_00497120((byte *)"G3D_Mesh::ReadB3D - Version is %d but G3D_Mesh is not converted!\n");
    ppiVar4 = (int **)FUN_004cad50();
    local_ac = 0;
    local_4 = 3;
    local_b0 = ppiVar4;
    _fread(&local_c0,4,1,param_1);
    local_bc = (G3D_LightmapSurfaceAttribute *)0x0;
    if (0 < local_c0) {
      do {
        cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
        cls_0x4c9b30::meth_0x4c9e00((cls_0x4c9b30 *)local_a0,param_1);
        local_b8 = ppiVar4 + 1;
        piVar5 = (int *)FUN_004cad90(ppiVar4,*local_b8,(undefined4 *)local_a0);
        GUI::Interface::meth_0x4cf7c0((Interface *)&local_b4,1);
        *local_b8 = piVar5;
        *(int **)piVar5[1] = piVar5;
        local_bc = (G3D_LightmapSurfaceAttribute *)
                   ((int)&(local_bc->G3D_BaseAttribute).vftptr_0x0 + 1);
        ppiVar4 = local_b0;
      } while ((int)local_bc < local_c0);
    }
    _fread(&local_c0,4,1,param_1);
    local_bc = (G3D_LightmapSurfaceAttribute *)0x0;
    if (0 < local_c0) {
      do {
        cls_0x4c9b30::meth_0x4d79b0((cls_0x4c9b30 *)local_a0);
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        local_4._0_1_ = 6;
        cls_0x4c9b30::meth_0x4d9bb0((cls_0x4c9b30 *)local_a0,param_1);
        meth_0x4d9d50(this,(undefined4 *)local_a0);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c);
        }
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        cls_0x4c9b30::meth_0x4d6c70((cls_0x4c9b30 *)local_a0);
        local_bc = (G3D_LightmapSurfaceAttribute *)
                   ((int)&(local_bc->G3D_BaseAttribute).vftptr_0x0 + 1);
      } while ((int)local_bc < local_c0);
    }
    pcVar6 = cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
    pdVar15 = adStack_160;
    for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pdVar15 = pcVar6->mbr_0x0;
      pcVar6 = (cls_0x4c9b30 *)&pcVar6->mbr_0x4;
      pdVar15 = pdVar15 + 1;
    }
    cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&this->mbr_0x28,local_ac);
    if (ppiVar4 == (int **)0x0) {
      ppiVar7 = (int **)0x0;
    }
    else {
      ppiVar7 = (int **)*ppiVar4;
    }
    if (ppiVar7 != ppiVar4) {
      iVar9 = 0;
      do {
        ppiVar12 = ppiVar7 + 2;
        ppiVar16 = (int **)(this->mbr_0x2c + iVar9);
        for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppiVar16 = *ppiVar12;
          ppiVar12 = ppiVar12 + 1;
          ppiVar16 = ppiVar16 + 1;
        }
        ppiVar7 = (int **)*ppiVar7;
        iVar9 = iVar9 + 0x90;
      } while (ppiVar7 != ppiVar4);
    }
    if (ppiVar4 == (int **)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *ppiVar4;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&local_b4,(int **)&local_a4,piVar5,(int *)ppiVar4);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b0);
}



void __thiscall G3D_Mesh::virt_meth_0x4dc330(G3D_Mesh *this,uint param_1,int *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  cls_0x4c9b30 *pcVar7;
  uint uVar8;
  uint uVar9;
  dword *pdVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  cls_0x50db20 *pcVar14;
  int **ppiVar15;
  int **ppiVar16;
  uint unaff_retaddr;
  dword adStack_164 [24];
  undefined4 uStack_104;
  int local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  undefined4 *local_b4;
  int **local_b0;
  uint local_ac;
  int *local_a4;
  undefined local_a0 [68];
  void *local_5c;
  dword local_4c;
  uint local_48;
  void *local_40;
  void *local_3c;
  dword local_38;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  dword local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633b3c;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  meth_0x4d8c10(this);
  G3D_DirectionalLight::meth_0x4d0750((G3D_DirectionalLight *)this,param_1,param_2);
  if (**(char **)(this->mbr_0x20 + 0x104) == '\0') {
    local_b0 = (int **)FUN_004cad50();
    local_ac = 0;
    local_c4 = *(int *)(*param_2 + param_1);
    local_4 = 7;
    *param_2 = *param_2 + 4;
    if (0 < local_c4) {
      do {
        ppiVar6 = local_b0;
        cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
        cls_0x4c9b30::meth_0x4c9fb0((cls_0x4c9b30 *)local_a0,param_1,param_2);
        piVar3 = (int *)FUN_004cad90(ppiVar6,ppiVar6[1],(undefined4 *)local_a0);
        GUI::Interface::meth_0x4cf7c0((Interface *)&local_b4,1);
        ppiVar6[1] = piVar3;
        *(int **)piVar3[1] = piVar3;
        local_c4 = local_c4 + -1;
      } while (local_c4 != 0);
    }
    local_c4 = *(int *)(*param_2 + param_1);
    *param_2 = *param_2 + 4;
    if (0 < local_c4) {
      do {
        cls_0x4c9b30::meth_0x4d79b0((cls_0x4c9b30 *)local_a0);
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        local_4._0_1_ = 10;
        cls_0x4c9b30::meth_0x4d9c90((cls_0x4c9b30 *)local_a0,param_1,param_2);
        meth_0x4d9d50(this,(undefined4 *)local_a0);
        pvVar4 = local_3c;
        local_4 = CONCAT31(local_4._1_3_,7);
        if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c);
        }
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        pvVar1 = local_40;
        if (local_40 != (void *)0x0) {
          for (; pvVar1 != pvVar4; pvVar1 = (void *)((int)pvVar1 + 0x1c)) {
            FUN_00430980((int)pvVar1);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_40 = (void *)0x0;
        local_3c = (void *)0x0;
        local_38 = 0;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_5c);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        _eh_vector_destructor_iterator_(local_a0 + 8,0x1c,2,cls_0x4d8d70::meth_0x4b2dd0);
        local_c4 = local_c4 + -1;
      } while (local_c4 != 0);
    }
    pcVar7 = cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
    uVar9 = local_ac;
    pdVar10 = adStack_164;
    for (iVar12 = 0x24; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pdVar10 = pcVar7->mbr_0x0;
      pcVar7 = (cls_0x4c9b30 *)&pcVar7->mbr_0x4;
      pdVar10 = pdVar10 + 1;
    }
    cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&this->mbr_0x28,uVar9);
    if (local_b0 == (int **)0x0) {
      ppiVar6 = (int **)0x0;
    }
    else {
      ppiVar6 = (int **)*local_b0;
    }
    if (ppiVar6 != local_b0) {
      iVar12 = 0;
      do {
        ppiVar15 = ppiVar6 + 2;
        ppiVar16 = (int **)(this->mbr_0x2c + iVar12);
        for (iVar13 = 0x24; iVar13 != 0; iVar13 = iVar13 + -1) {
          *ppiVar16 = *ppiVar15;
          ppiVar15 = ppiVar15 + 1;
          ppiVar16 = ppiVar16 + 1;
        }
        ppiVar6 = (int **)*ppiVar6;
        iVar12 = iVar12 + 0x90;
      } while (ppiVar6 != local_b0);
    }
    if (local_b0 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *local_b0;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&local_b4,&local_a4,piVar3,(int *)local_b0);
  }
  else {
    *(undefined *)&this->mbr_0x48 = *(undefined *)(param_1 + *param_2);
    iVar12 = *param_2;
    *param_2 = iVar12 + 1;
    if (*(char *)&this->mbr_0x48 != '\0') {
      this->mbr_0x4c = *(dword *)(iVar12 + 1 + param_1);
      iVar12 = *param_2;
      *param_2 = iVar12 + 4;
      this->mbr_0x50 = *(dword *)(iVar12 + 4 + param_1);
      *param_2 = *param_2 + 4;
      puVar2 = (undefined4 *)operator_new(this->mbr_0x4c * this->mbr_0x50);
      uVar8 = this->mbr_0x4c * this->mbr_0x50;
      this->mbr_0x54 = (dword)puVar2;
      puVar5 = (undefined4 *)(*param_2 + param_1);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar2 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      iVar12 = *param_2 + this->mbr_0x4c * this->mbr_0x50;
      *param_2 = iVar12;
      pdVar10 = (dword *)(iVar12 + param_1);
      this->mbr_0x58 = *pdVar10;
      this->mbr_0x5c = pdVar10[1];
      this->mbr_0x60 = pdVar10[2];
      iVar12 = *param_2;
      *param_2 = iVar12 + 0xc;
      pdVar10 = (dword *)(iVar12 + 0xc + param_1);
      this->mbr_0x64 = *pdVar10;
      this->mbr_0x68 = pdVar10[1];
      this->mbr_0x6c = pdVar10[2];
      iVar12 = *param_2;
      *param_2 = iVar12 + 0xc;
      *(undefined *)&this->mbr_0x70 = *(undefined *)(iVar12 + 0xc + param_1);
      iVar12 = *param_2;
      iVar13 = iVar12 + 1;
      *param_2 = iVar13;
      if (*(char *)&this->mbr_0x70 != '\0') {
        iVar13 = *(int *)(iVar13 + param_1);
        *param_2 = iVar12 + 5;
        if (iVar13 != 4) {
          handle_fatal_error("G3D_Mesh::ReadB3D - Bone counts different - Need to re-export!!!\n");
        }
        local_b4 = (undefined4 *)(local_b8 + 0x74);
        local_bc = 4;
        do {
          puVar2 = (undefined4 *)operator_new(*(int *)(local_b8 + 0x4c) << 3);
          *local_b4 = puVar2;
          puVar5 = (undefined4 *)(*param_2 + param_1);
          for (uVar9 = (uint)(*(int *)(local_b8 + 0x4c) << 3) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined *)puVar2 = *(undefined *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
          local_b4 = local_b4 + 1;
          local_bc = local_bc + -1;
          *param_2 = *param_2 + *(int *)(local_b8 + 0x4c) * 8;
        } while (local_bc != 0);
      }
      *(undefined4 *)(local_b8 + 0x84) = *(undefined4 *)(param_1 + *param_2);
      *param_2 = *param_2 + 4;
      iVar12 = *(int *)(local_b8 + 0x84);
      piVar3 = (int *)operator_new(iVar12 * 0x144 + 4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar12;
        piVar3 = piVar3 + 1;
        _eh_vector_constructor_iterator_
                  (piVar3,0x144,iVar12,cls_0x4cc100::cls_0x4cc100,FUN_004cc170);
      }
      iVar12 = *(int *)(local_b8 + 0x84);
      *(int **)(local_b8 + 0x88) = piVar3;
      piVar3 = (int *)operator_new(iVar12 * 0x1c + 4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar12;
        piVar3 = piVar3 + 1;
        _eh_vector_constructor_iterator_
                  (piVar3,0x1c,iVar12,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
      }
      *(int **)(local_b8 + 0x8c) = piVar3;
      pvVar4 = operator_new(*(int *)(local_b8 + 0x84) << 2);
      *(void **)(local_b8 + 0x94) = pvVar4;
      pvVar4 = operator_new(*(int *)(local_b8 + 0x84) << 2);
      *(void **)(local_b8 + 0x90) = pvVar4;
      pvVar4 = operator_new(*(int *)(local_b8 + 0x84) << 2);
      *(void **)(local_b8 + 0x98) = pvVar4;
      local_b4 = (undefined4 *)0x0;
      if (*(int *)(local_b8 + 0x84) != 0) {
        local_bc = 0;
        do {
          pcVar14 = (cls_0x50db20 *)(*(int *)(local_b8 + 0x88) + local_bc);
          FUN_004d0510(pcVar14,param_1,param_2);
          FUN_004d0510((cls_0x50db20 *)&pcVar14->VFX_Parameter,param_1,param_2);
          pdVar10 = (dword *)(*param_2 + param_1);
          (pcVar14->VFX_Parameter).mbr_0x1c = *pdVar10;
          (pcVar14->VFX_Parameter).mbr_0x20 = pdVar10[1];
          (pcVar14->VFX_Parameter).mbr_0x24 = pdVar10[2];
          (pcVar14->VFX_Parameter).mbr_0x28 = pdVar10[3];
          iVar12 = *param_2;
          *param_2 = iVar12 + 0x10;
          pdVar10 = (dword *)(iVar12 + 0x10 + param_1);
          (pcVar14->VFX_Parameter).mbr_0x2c = *pdVar10;
          (pcVar14->VFX_Parameter).mbr_0x30 = pdVar10[1];
          *(dword *)&pcVar14->field_0x50 = pdVar10[2];
          *(dword *)&pcVar14->field_0x54 = pdVar10[3];
          iVar12 = *param_2;
          *param_2 = iVar12 + 0x10;
          puVar5 = (undefined4 *)(iVar12 + 0x10 + param_1);
          *(undefined4 *)&pcVar14->field_0x58 = *puVar5;
          *(undefined4 *)&pcVar14->field_0x5c = puVar5[1];
          *(undefined4 *)&pcVar14->field_0x60 = puVar5[2];
          *(undefined4 *)&pcVar14->field_0x64 = puVar5[3];
          iVar12 = *param_2;
          *param_2 = iVar12 + 0x10;
          puVar5 = (undefined4 *)(iVar12 + 0x10 + param_1);
          *(undefined4 *)&pcVar14->field_0x68 = *puVar5;
          *(undefined4 *)&pcVar14->field_0x6c = puVar5[1];
          *(undefined4 *)&pcVar14->field_0x70 = puVar5[2];
          *(undefined4 *)&pcVar14->field_0x74 = puVar5[3];
          iVar12 = *param_2;
          *param_2 = iVar12 + 0x10;
          *(undefined4 *)&pcVar14->field_0x78 = *(undefined4 *)(iVar12 + 0x10 + param_1);
          *param_2 = *param_2 + 4;
          FUN_004d0510((cls_0x50db20 *)&pcVar14->field_0x7c,param_1,param_2);
          uStack_104 = 0x4dc714;
          FUN_004d0510((cls_0x50db20 *)&pcVar14->field_0x98,param_1,param_2);
          pcVar14->field_0xb4 = *(undefined *)(param_1 + *param_2);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          pcVar14->field_0xb5 = *(undefined *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          pcVar14->field_0xb6 = *(undefined *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          *(undefined4 *)&pcVar14->field_0xb8 = *(undefined4 *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->field_0xbc = *(undefined *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          *(undefined4 *)&pcVar14->field_0xc0 = *(undefined4 *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->field_0xc4 = *(undefined *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          *(undefined4 *)&pcVar14->field_0xc8 = *(undefined4 *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          *(undefined4 *)&pcVar14->field_0xcc = *(undefined4 *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->field_0xd0 = *(undefined *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          *(undefined4 *)&pcVar14->field_0xd4 = *(undefined4 *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xd8 = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          *(undefined *)&pcVar14->mbr_0xdc = *(undefined *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          pcVar14->mbr_0xe0 = *(dword *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xe4 = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xe8 = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          *(undefined *)&pcVar14->mbr_0xec = *(undefined *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 1;
          pcVar14->mbr_0xf0 = *(dword *)(iVar12 + 1 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xf4 = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xf8 = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0xfc = *(dword *)(iVar12 + 4 + param_1);
          iVar12 = *param_2;
          *param_2 = iVar12 + 4;
          pcVar14->mbr_0x100 = *(dword *)(iVar12 + 4 + param_1);
          *param_2 = *param_2 + 4;
          if ((pcVar14->mbr_0x100 != 0) &&
             (FUN_004d0510((cls_0x50db20 *)&pcVar14->mbr_0x104,param_1,param_2),
             1 < pcVar14->mbr_0x100)) {
            FUN_004d0510((cls_0x50db20 *)&pcVar14->mbr_0x120,param_1,param_2);
          }
          pcVar14->mbr_0x13c = *(dword *)(param_1 + *param_2);
          *param_2 = *param_2 + 4;
          local_a4 = (int *)pcVar14->mbr_0x13c;
          pcVar14->mbr_0x140 = 0;
          if (local_a4 != (int *)0x0) {
            local_a0._0_4_ = operator_new((int)local_a4 * 0x1c + 4);
            if ((int **)local_a0._0_4_ == (int **)0x0) {
              ppiVar6 = (int **)0x0;
            }
            else {
              *(int **)local_a0._0_4_ = local_a4;
              ppiVar6 = (int **)(local_a0._0_4_ + 4);
              _eh_vector_constructor_iterator_
                        (ppiVar6,0x1c,(int)local_a4,::cls_0x50db20::cls_0x50db20,
                         cls_0x4d8d70::meth_0x4b2dd0);
            }
            pcVar14->mbr_0x140 = (dword)ppiVar6;
            local_c0 = 0;
            if (pcVar14->mbr_0x13c != 0) {
              local_a4 = (int *)0x0;
              do {
                FUN_004d0510((cls_0x50db20 *)(pcVar14->mbr_0x140 + (int)local_a4),param_1,param_2);
                local_c0 = local_c0 + 1;
                local_a4 = local_a4 + 7;
              } while (local_c0 < pcVar14->mbr_0x13c);
            }
          }
          local_b4 = (undefined4 *)((int)local_b4 + 1);
          local_bc = local_bc + 0x144;
        } while (local_b4 < *(uint *)(local_b8 + 0x84));
      }
      uVar9 = 0;
      if (*(int *)(local_b8 + 0x84) != 0) {
        local_bc = 0;
        do {
          FUN_004d0510((cls_0x50db20 *)(*(int *)(local_b8 + 0x8c) + local_bc),param_1,param_2);
          uVar9 = uVar9 + 1;
          local_bc = local_bc + 0x1c;
        } while (uVar9 < *(uint *)(local_b8 + 0x84));
      }
      puVar5 = (undefined4 *)(*param_2 + param_1);
      puVar2 = *(undefined4 **)(local_b8 + 0x90);
      for (uVar9 = *(uint *)(local_b8 + 0x84) & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar2 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      iVar12 = *param_2 + *(int *)(local_b8 + 0x84) * 4;
      *param_2 = iVar12;
      puVar5 = (undefined4 *)(iVar12 + param_1);
      puVar2 = *(undefined4 **)(local_b8 + 0x94);
      for (uVar9 = *(uint *)(local_b8 + 0x84) & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar2 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *param_2 = *param_2 + *(int *)(local_b8 + 0x84) * 4;
      local_b4 = (undefined4 *)0x0;
      if (*(int *)(local_b8 + 0x84) != 0) {
        do {
          uVar9 = (uint)local_b4;
          pvVar4 = operator_new(*(int *)(*(int *)(local_b8 + 0x90) + (int)local_b4 * 4) << 1);
          *(void **)(*(int *)(local_b8 + 0x98) + uVar9 * 4) = pvVar4;
          uVar11 = *(int *)(*(int *)(local_b8 + 0x90) + uVar9 * 4) << 1;
          puVar5 = (undefined4 *)(*param_2 + param_1);
          puVar2 = *(undefined4 **)(*(int *)(local_b8 + 0x98) + uVar9 * 4);
          for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined *)puVar2 = *(undefined *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
          *param_2 = *param_2 + *(int *)(*(int *)(local_b8 + 0x90) + (int)local_b4 * 4) * 2;
          local_b4 = (undefined4 *)((int)local_b4 + 1);
        } while (local_b4 < *(uint *)(local_b8 + 0x84));
      }
      ExceptionList = puStack_8;
      FUN_00616e15((uint)pvStack_c ^ param_1);
      return;
    }
    FUN_00497120((byte *)"G3D_Mesh::ReadB3D - Version is %d but G3D_Mesh is not converted!\n");
    local_b0 = (int **)FUN_004cad50();
    local_ac = 0;
    local_c4 = *(int *)(*param_2 + param_1);
    local_4 = 3;
    *param_2 = *param_2 + 4;
    if (0 < local_c4) {
      do {
        ppiVar6 = local_b0;
        cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
        cls_0x4c9b30::meth_0x4c9fb0((cls_0x4c9b30 *)local_a0,param_1,param_2);
        piVar3 = (int *)FUN_004cad90(ppiVar6,ppiVar6[1],(undefined4 *)local_a0);
        GUI::Interface::meth_0x4cf7c0((Interface *)&local_b4,1);
        ppiVar6[1] = piVar3;
        *(int **)piVar3[1] = piVar3;
        local_c4 = local_c4 + -1;
      } while (local_c4 != 0);
    }
    local_c4 = *(int *)(*param_2 + param_1);
    *param_2 = *param_2 + 4;
    if (0 < local_c4) {
      do {
        cls_0x4c9b30::meth_0x4d79b0((cls_0x4c9b30 *)local_a0);
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        local_4._0_1_ = 6;
        cls_0x4c9b30::meth_0x4d9c90((cls_0x4c9b30 *)local_a0,param_1,param_2);
        meth_0x4d9d50(this,(undefined4 *)local_a0);
        local_4 = CONCAT31(local_4._1_3_,3);
        if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c);
        }
        local_1c = (void *)0x0;
        local_18 = 0;
        local_14 = 0;
        if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_2c = (void *)0x0;
        local_28 = 0;
        local_24 = 0;
        cls_0x4c9b30::meth_0x4d6c70((cls_0x4c9b30 *)local_a0);
        local_c4 = local_c4 + -1;
      } while (local_c4 != 0);
    }
    pcVar7 = cls_0x4c9b30::cls_0x4c9b30((cls_0x4c9b30 *)local_a0);
    pdVar10 = adStack_164;
    for (iVar12 = 0x24; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pdVar10 = pcVar7->mbr_0x0;
      pcVar7 = (cls_0x4c9b30 *)&pcVar7->mbr_0x4;
      pdVar10 = pdVar10 + 1;
    }
    cls_0x4c8df0::meth_0x4d6e90((cls_0x4c8df0 *)&this->mbr_0x28,local_ac);
    if (local_b0 == (int **)0x0) {
      ppiVar6 = (int **)0x0;
    }
    else {
      ppiVar6 = (int **)*local_b0;
    }
    if (ppiVar6 != local_b0) {
      iVar12 = 0;
      do {
        ppiVar15 = ppiVar6 + 2;
        ppiVar16 = (int **)(this->mbr_0x2c + iVar12);
        for (iVar13 = 0x24; iVar13 != 0; iVar13 = iVar13 + -1) {
          *ppiVar16 = *ppiVar15;
          ppiVar15 = ppiVar15 + 1;
          ppiVar16 = ppiVar16 + 1;
        }
        ppiVar6 = (int **)*ppiVar6;
        iVar12 = iVar12 + 0x90;
      } while (ppiVar6 != local_b0);
    }
    if (local_b0 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *local_b0;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&local_b4,&local_a4,piVar3,(int *)local_b0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b0);
}


#include "../include/G3D_Mesh.h"
