#include "../include/cls_0x40a220.h"

cls_0x40a220 * __thiscall cls_0x40a220::cls_0x40a220(cls_0x40a220 *this)

{
  *(undefined4 *)&(this->cls_0x496bd0).field_0x18 = 0xf;
  *(undefined4 *)&(this->cls_0x496bd0).field_0x14 = 0;
  *(undefined *)&(this->cls_0x496bd0).mbr_0x4 = 0;
  *(undefined4 *)&this->field_0x34 = 0xf;
  (this->cls_0x496bd0).mbr_0x30 = 0;
  (this->cls_0x496bd0).field_0x20 = 0;
  return this;
}



cls_0x40a220 * __thiscall cls_0x40a220::cls_0x40a220(cls_0x40a220 *this,int param_1)

{
  dword *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631345;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x496bd0).mbr_0x0 = (dword)&DAT_00669eb4;
    (this->cls_0x496bd0).mbr_0x8 = (dword)&DAT_00669eac;
    (this->cls_0x4d8d70).mbr_0x30 = 0;
    (this->cls_0x4d8d70).mbr_0xc =
         (dword)&basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    local_4 = 0;
  }
  this_00 = &(this->cls_0x496bd0).mbr_0xc;
  cls_0x496bd0::cls_0x496bd0(&this->cls_0x496bd0,this_00,0);
  *(basic_fstream<char,_struct_std::char_traits<char>_>__vftable_669ea8 **)
   ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)) =
       &basic_fstream<char,_struct_std::char_traits<char>_>__vftable_669ea8_00669ea8;
  local_4 = 1;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::
  basic_streambuf<char,_struct_std::char_traits<char>_>
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  *this_00 = (dword)&basic_filebuf<char,_struct_std::char_traits<char>_>__vftable_669e64_00669e64;
  *(undefined4 *)&this->field_0x54 = 0;
  std::locale::locale((locale *)&(this->cls_0x4d8d70).mbr_0x4);
  *(undefined *)&(this->cls_0x4d8d70).mbr_0x0 = 0;
  this->field_0x58 = 0;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x496850
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  (this->cls_0x4d8d70).mbr_0x8 = 0;
  *(undefined4 *)&this->field_0x5c = DAT_00707d9c;
  *(undefined4 *)&this->field_0x4c = DAT_00707d9c;
  *(undefined4 *)&this->field_0x48 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x40a220::meth_0x497fb0(cls_0x40a220 *this,char *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x497e90
                     ((basic_streambuf<char,_struct_std::char_traits<char>_> *)
                      &(this->cls_0x496bd0).mbr_0xc,param_1,param_2);
  if (pvVar3 == (void *)0x0) {
    iVar1 = *(int *)((this->cls_0x496bd0).mbr_0x0 + 4);
    uVar2 = *(uint *)((int)&(this->cls_0x496bd0).mbr_0x4 + iVar1);
    uVar4 = uVar2 | 2;
    if (*(int *)(&(this->cls_0x496bd0).field_0x28 + iVar1) == 0) {
      uVar4 = uVar2 | 6;
    }
    std::ios_base::clear((ios_base *)((int)&(this->cls_0x496bd0).mbr_0x0 + iVar1),uVar4,false);
    return;
  }
  return;
}



int * __thiscall cls_0x40a220::meth_0x498120(cls_0x40a220 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  iVar1 = **(int **)&(this->cls_0x496bd0).field_0x20;
  *param_1 = iVar1;
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  cls_0x4d8d70::meth_0x605760((cls_0x4d8d70 *)&param_1);
  return piVar2;
}



int * __thiscall cls_0x40a220::meth_0x4984e0(cls_0x40a220 *this,int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined local_18 [24];
  
  iVar1 = *(int *)((this->cls_0x496bd0).mbr_0x0 + 4);
  if ((*(byte *)((int)&(this->cls_0x496bd0).mbr_0x4 + iVar1) & 6) == 0) {
    (**(code **)(**(int **)(&(this->cls_0x496bd0).field_0x28 + iVar1) + 0x20))
              (local_18,param_1,param_2);
    if (param_1 == -2) {
      iVar1 = *(int *)((this->cls_0x496bd0).mbr_0x0 + 4);
      uVar2 = *(uint *)((int)&(this->cls_0x496bd0).mbr_0x4 + iVar1);
      uVar3 = uVar2 | 2;
      if (*(int *)(&(this->cls_0x496bd0).field_0x28 + iVar1) == 0) {
        uVar3 = uVar2 | 6;
      }
      std::ios_base::clear((ios_base *)((int)&(this->cls_0x496bd0).mbr_0x0 + iVar1),uVar3,false);
    }
  }
  return (int *)this;
}



undefined4 * __thiscall cls_0x40a220::meth_0x498550(cls_0x40a220 *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((this->cls_0x496bd0).mbr_0x0 + 4);
  if ((*(byte *)((int)&(this->cls_0x496bd0).mbr_0x4 + iVar1) & 6) == 0) {
    (**(code **)(**(int **)(&(this->cls_0x496bd0).field_0x28 + iVar1) + 0x20))(param_1,0,1,1);
    return param_1;
  }
  *param_1 = 0xffffffff;
  param_1[2] = DAT_0070f680;
  param_1[3] = DAT_0070f684;
  param_1[4] = DAT_00707d98;
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x004990f1) */
/* WARNING: Removing unreachable block (ram,0x004990fd) */
/* WARNING: Removing unreachable block (ram,0x00499100) */

int * __thiscall cls_0x40a220::meth_0x499040(cls_0x40a220 *this,undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *local_24;
  char local_20;
  undefined4 local_1c;
  cls_0x40a220 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00631478;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  (this->cls_0x496bd0).mbr_0x4 = 0;
  local_18 = this;
  FUN_00498df0(&local_24,(int *)this,1);
  if (local_20 != '\0') {
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(&(this->cls_0x496bd0).field_0x28 +
                                   *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)) + 0x18))
                      (param_1,param_2);
    (this->cls_0x496bd0).mbr_0x4 = (this->cls_0x496bd0).mbr_0x4 + iVar1;
    if (iVar1 != param_2) {
      piVar2 = (int *)FUN_004990df();
      return piVar2;
    }
  }
  iVar1 = *(int *)(*(int *)(*local_24 + 4) + 0x28 + (int)local_24);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    cls_0x605e31::meth_0x605e31((cls_0x605e31 *)(iVar1 + 4));
  }
  ExceptionList = pvStack_10;
  return (int *)this;
}



cls_0x40a220 * __thiscall cls_0x40a220::cls_0x40a220(cls_0x40a220 *this,int param_1)

{
  dword *this_00;
  ios_base *this_01;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006314d5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x496bd0).mbr_0x0 = (dword)&DAT_0066a854;
    *(undefined4 *)&(this->cls_0x4d8d70).field_0x2c = 0;
    (this->cls_0x4d8d70).mbr_0x8 =
         (dword)&basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    local_4 = 0;
  }
  *(basic_istream<char,_struct_std::char_traits<char>_>__vftable_669df0 **)
   ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)) =
       &basic_istream<char,_struct_std::char_traits<char>_>__vftable_669df0_00669df0;
  (this->cls_0x496bd0).mbr_0x4 = 0;
  this_01 = (ios_base *)
            ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4));
  this_00 = &(this->cls_0x496bd0).mbr_0x8;
  this_01[1].vftptr_0x0 = (ios_base__vftable_669dd8 *)this_00;
  *(undefined4 *)&this_01[1].field_0x4 = 0;
  this_01[1].field_0x8 = 0x20;
  std::ios_base::_Init(this_01);
  if (this_01[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
    std::ios_base::clear(this_01,*(uint *)&this_01->field_0x4 | 4,false);
  }
  *(basic_ifstream<char,_struct_std::char_traits<char>_>__vftable_66a850 **)
   ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)) =
       &basic_ifstream<char,_struct_std::char_traits<char>_>__vftable_66a850_0066a850;
  local_4 = 2;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::
  basic_streambuf<char,_struct_std::char_traits<char>_>
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  *this_00 = (dword)&basic_filebuf<char,_struct_std::char_traits<char>_>__vftable_669e64_00669e64;
  *(undefined4 *)&this->field_0x50 = 0;
  std::locale::locale((locale *)&this->cls_0x4d8d70);
  this->field_0x5c = 0;
  this->field_0x54 = 0;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x496850
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  (this->cls_0x4d8d70).mbr_0x4 = 0;
  *(undefined4 *)&this->field_0x58 = DAT_00707d9c;
  *(undefined4 *)&this->field_0x48 = DAT_00707d9c;
  *(undefined4 *)&this->field_0x44 = 0;
  ExceptionList = local_c;
  return this;
}



void * __thiscall cls_0x40a220::meth_0x4e3260(cls_0x40a220 *this,_String_base *param_1)

{
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this,param_1,0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->cls_0x496bd0).field_0x1c,param_1 + 0x1c,0,0xffffffff);
  return this;
}



int * __thiscall
cls_0x40a220::meth_0x5a4b80(cls_0x40a220 *this,undefined *param_1,int param_2,byte param_3)

{
  dword *pdVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  ios_base *this_00;
  uint uVar5;
  int *local_24;
  char local_20;
  cls_0x40a220 *local_1c;
  undefined4 local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ae18;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  uVar5 = 0;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  (this->cls_0x496bd0).mbr_0x4 = 0;
  local_1c = this;
  FUN_00498df0(&local_24,(int *)this,1);
  if ((local_20 != '\0') && (0 < param_2)) {
    piVar4 = *(int **)(&(this->cls_0x496bd0).field_0x28 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)
                      );
    pbVar2 = *(byte **)piVar4[8];
    local_8 = 1;
    if ((pbVar2 == (byte *)0x0) || (pbVar2 + *(int *)piVar4[0xc] <= pbVar2)) {
      uVar5 = (**(code **)(*piVar4 + 0x10))();
    }
    else {
      uVar5 = (uint)*pbVar2;
    }
    while( true ) {
      if (uVar5 == 0xffffffff) {
        piVar4 = (int *)FUN_005a4ca5();
        return piVar4;
      }
      if (uVar5 == param_3) break;
      param_2 = param_2 + -1;
      if (param_2 < 1) {
        piVar4 = (int *)FUN_005a4ca5();
        return piVar4;
      }
      pdVar1 = &(this->cls_0x496bd0).mbr_0x4;
      *pdVar1 = *pdVar1 + 1;
      *param_1 = (char)uVar5;
      param_1 = param_1 + 1;
      uVar5 = cls_0x498b20::meth_0x498b20
                        (*(cls_0x498b20 **)
                          (&(this->cls_0x496bd0).field_0x28 +
                          *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)));
    }
    (this->cls_0x496bd0).mbr_0x4 = (this->cls_0x496bd0).mbr_0x4 + 1;
    piVar4 = *(int **)(&(this->cls_0x496bd0).field_0x28 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)
                      );
    uVar5 = *(uint *)piVar4[8];
    if (uVar5 != 0) {
      iVar3 = *(int *)piVar4[0xc];
      if (uVar5 < iVar3 + uVar5) {
        *(int *)piVar4[0xc] = iVar3 + -1;
        *(int *)piVar4[8] = *(int *)piVar4[8] + 1;
        piVar4 = (int *)FUN_005a4ca5();
        return piVar4;
      }
    }
    (**(code **)(*piVar4 + 0x14))();
    piVar4 = (int *)FUN_005a4ca5();
    return piVar4;
  }
  *param_1 = 0;
  local_8 = 0;
  if ((this->cls_0x496bd0).mbr_0x4 == 0) {
    uVar5 = 2;
  }
  this_00 = (ios_base *)
            ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4));
  if (uVar5 != 0) {
    uVar5 = uVar5 | *(uint *)&this_00->field_0x4;
    if (this_00[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
      uVar5 = uVar5 | 4;
    }
    std::ios_base::clear(this_00,uVar5,false);
  }
  iVar3 = *(int *)(*(int *)(*local_24 + 4) + 0x28 + (int)local_24);
  local_8 = 0xffffffff;
  if (iVar3 != 0) {
    cls_0x605e31::meth_0x605e31((cls_0x605e31 *)(iVar3 + 4));
  }
  ExceptionList = pvStack_10;
  return (int *)this;
}


