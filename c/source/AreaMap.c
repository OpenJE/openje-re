#include "../include/AreaMap.h"

void __thiscall AreaMap::fwrite_file_from_mbrs(AreaMap *this,FILE *param_1)

{
  FILE *_File;
  int *piVar1;
  
  _File = param_1;
  _fwrite(&this->mbr_0x28,4,1,param_1);
  _fwrite(&this->mbr_0x2c,4,1,_File);
  _fwrite(&this->mbr_0x30,4,1,_File);
  _fwrite(&this->mbr_0x34,4,1,_File);
  _fwrite(&this->mbr_0x38,4,1,_File);
  _fwrite(&this->mbr_0x3c,4,1,_File);
  if (this->mbr_0x4c == 0) {
    param_1 = (FILE *)0x0;
  }
  else {
    param_1 = (FILE *)((int)(this->mbr_0x50 - this->mbr_0x4c) / 0x6c);
  }
  _fwrite(&param_1,4,1,_File);
  piVar1 = (int *)this->mbr_0x4c;
  if (piVar1 != (int *)this->mbr_0x50) {
    do {
      (**(code **)(*piVar1 + 4))(_File);
      piVar1 = piVar1 + 0x1b;
    } while (piVar1 != (int *)this->mbr_0x50);
  }
  cls_0x5ad850::meth_0x5ad850((cls_0x5ad850 *)&this->mbr_0x40,_File);
  return;
}



void __thiscall AreaMap::meth_0x57ece0(AreaMap *this)

{
  AreaMap *local_4;
  
  local_4 = this;
  if ((void *)this->mbr_0x6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x6c);
  }
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  if ((void *)this->mbr_0x9c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x9c);
  }
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  cls_0x57bf40::meth_0x57c210((cls_0x57bf40 *)&this->mbr_0x7c);
  *(dword *)(this->mbr_0x80 + 4) = this->mbr_0x80;
  this->mbr_0x84 = 0;
  *(dword *)this->mbr_0x80 = this->mbr_0x80;
  *(dword *)(this->mbr_0x80 + 8) = this->mbr_0x80;
  cls_0x55dc80::meth_0x57e920((cls_0x55dc80 *)&this->mbr_0x88);
  *(dword *)(this->mbr_0x8c + 4) = this->mbr_0x8c;
  this->mbr_0x90 = 0;
  *(dword *)this->mbr_0x8c = this->mbr_0x8c;
  *(dword *)(this->mbr_0x8c + 8) = this->mbr_0x8c;
  cls_0x4542d0::meth_0x57e230((cls_0x4542d0 *)&this->mbr_0xa8);
  *(dword *)(this->mbr_0xac + 4) = this->mbr_0xac;
  this->mbr_0xb0 = 0;
  *(dword *)this->mbr_0xac = this->mbr_0xac;
  *(dword *)(this->mbr_0xac + 8) = this->mbr_0xac;
  this->mbr_0x94 = 1;
  if ((0 < (int)this->mbr_0x38) && (0 < (int)this->mbr_0x3c)) {
    local_4 = (AreaMap *)0x0;
    cls_0x57d040::meth_0x57d040
              ((cls_0x57d040 *)&this->mbr_0x68,(undefined4 *)this->mbr_0x6c,
               (undefined4 *)(this->mbr_0x3c * this->mbr_0x38),&local_4);
  }
  return;
}



AreaMap * __thiscall AreaMap::~AreaMap(AreaMap *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006397ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &AreaMap__vftable_69a52c_0069a52c;
  local_4 = 7;
  cls_0x4542d0::meth_0x57e9f0
            ((cls_0x4542d0 *)&this->mbr_0xa8,&local_10,*(int ***)(int **)this->mbr_0xac,
             (int **)this->mbr_0xac);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xac);
}



AreaMap * __thiscall
AreaMap::AreaMap(AreaMap *this,dword param_1,dword param_2,_String_base *param_3,dword param_4,
                dword param_5,dword param_6,dword param_7,dword param_8,dword param_9)

{
  dword dVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  ulonglong uVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063984c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &AreaMap__vftable_69a52c_0069a52c;
  this->mbr_0x24 = 0xf;
  this->mbr_0x20 = 0;
  *(undefined *)&this->mbr_0x10 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  *(undefined *)&this->mbr_0x7c = (undefined)param_6;
  dVar1 = FUN_0057c250();
  this->mbr_0x80 = dVar1;
  *(undefined *)(dVar1 + 0x25) = 1;
  *(dword *)(this->mbr_0x80 + 4) = this->mbr_0x80;
  *(dword *)this->mbr_0x80 = this->mbr_0x80;
  *(dword *)(this->mbr_0x80 + 8) = this->mbr_0x80;
  this->mbr_0x84 = 0;
  *(undefined *)&this->mbr_0x88 = (undefined)param_6;
  local_4._0_1_ = 5;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x8c = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x8c + 4) = this->mbr_0x8c;
  *(dword *)this->mbr_0x8c = this->mbr_0x8c;
  *(dword *)(this->mbr_0x8c + 8) = this->mbr_0x8c;
  this->mbr_0x90 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  local_4._0_1_ = 7;
  *(undefined *)&this->mbr_0xa8 = (undefined)param_6;
  dVar1 = FUN_0057c360();
  this->mbr_0xac = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  *(dword *)(this->mbr_0xac + 4) = this->mbr_0xac;
  *(dword *)this->mbr_0xac = this->mbr_0xac;
  *(dword *)(this->mbr_0xac + 8) = this->mbr_0xac;
  this->mbr_0xb0 = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  this->mbr_0x8 = param_2;
  this->mbr_0x4 = param_1;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0xc,param_3,0,0xffffffff);
  this->mbr_0x28 = param_4;
  this->mbr_0x2c = param_5;
  this->mbr_0x30 = param_6;
  this->mbr_0x34 = param_7;
  this->mbr_0x58 = param_8;
  this->mbr_0x5c = param_9;
  fVar2 = (float10)FUN_0061702a(param_8);
  uVar3 = FUN_00616e24();
  this->mbr_0x38 = (uint)((NAN(fVar2) || NAN((float10)0.0)) == (fVar2 == (float10)0.0)) - (int)uVar3
  ;
  fVar2 = (float10)FUN_0061702a(extraout_ECX);
  uVar3 = FUN_00616e24();
  this->mbr_0x3c = (uint)((NAN(fVar2) || NAN((float10)0.0)) == (fVar2 == (float10)0.0)) - (int)uVar3
  ;
  this->mbr_0x78 = 0;
  this->mbr_0x94 = 0;
  ExceptionList = pvStack_c;
  return this;
}



undefined4 * __thiscall AreaMap::virt_meth_0x57fcd0(AreaMap *this,byte param_1)

{
  ~AreaMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall AreaMap::fread_file_into_mbrs(AreaMap *this,FILE *param_1)

{
  FILE *_File;
  int iVar1;
  uint unaff_retaddr;
  AreaMapNote local_7c;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  _File = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639868;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  _fread(&this->mbr_0x28,4,1,param_1);
  _fread(&this->mbr_0x2c,4,1,_File);
  _fread(&this->mbr_0x30,4,1,_File);
  _fread(&this->mbr_0x34,4,1,_File);
  _fread(&this->mbr_0x38,4,1,_File);
  _fread(&this->mbr_0x3c,4,1,_File);
  _fread(&param_1,4,1,_File);
  cls_0x41d500::meth_0x57d9b0((cls_0x41d500 *)&this->mbr_0x48);
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      AreaMapNote::AreaMapNote(&local_7c);
      local_4 = 0;
      AreaMapNote::virt_meth_0x57d440(&local_7c,_File);
      cls_0x41d500::meth_0x57f8c0((cls_0x41d500 *)&this->mbr_0x48,&local_7c);
      local_4 = 0xffffffff;
      AreaMapNote::~AreaMapNote(&local_7c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  cls_0x5ad7e0::meth_0x5ad7e0((cls_0x5ad7e0 *)&this->mbr_0x40,_File);
  cls_0x5ad7b0::meth_0x5ad7b0((cls_0x5ad7b0 *)&this->mbr_0x60);
  meth_0x57ece0(this);
  this->mbr_0x78 = 1;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/AreaMap.h"
