#include "../include/cls_0x537ca0.h"

/* WARNING: Removing unreachable block (ram,0x00498ffb) */
/* WARNING: Removing unreachable block (ram,0x00499007) */
/* WARNING: Removing unreachable block (ram,0x0049900a) */

int * __thiscall cls_0x537ca0::meth_0x498f50(cls_0x537ca0 *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  cls_0x4cc1e0 *local_24;
  char local_20;
  undefined4 local_1c;
  cls_0x537ca0 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00631458;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_18 = this;
  FUN_004969f0(&local_24,(int *)this);
  local_8 = 0;
  if (local_20 == '\0') {
    piVar1 = (int *)FUN_00498fe9();
    return piVar1;
  }
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(&this->field_0x28 + *(int *)(this->mbr_0x0 + 4)) + 0x1c))
                    (param_1,param_2);
  if (iVar2 == param_2) {
    local_8 = 0xffffffff;
    FUN_00496b60(&local_24);
    ExceptionList = pvStack_10;
    return (int *)this;
  }
  piVar1 = (int *)FUN_00498fe9();
  return piVar1;
}



void __thiscall cls_0x537ca0::meth_0x537c60(cls_0x537ca0 *this)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = std::basic_filebuf<char,_struct_std::char_traits<char>_>::meth_0x497930
                     ((basic_filebuf<char,_struct_std::char_traits<char>_> *)&this->field_0x4);
  if (piVar2 == (int *)0x0) {
    iVar1 = *(int *)(this->mbr_0x0 + 4);
    uVar3 = *(uint *)(&this->field_0x4 + iVar1) | 2;
    if (*(int *)(&this->field_0x28 + iVar1) == 0) {
      uVar3 = *(uint *)(&this->field_0x4 + iVar1) | 6;
    }
    std::ios_base::clear((ios_base *)((int)&this->mbr_0x0 + iVar1),uVar3,false);
  }
  return;
}



cls_0x537ca0 * __thiscall cls_0x537ca0::cls_0x537ca0(cls_0x537ca0 *this,int param_1)

{
  undefined *this_00;
  ios_base *this_01;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637255;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    this->mbr_0x0 = (dword)&DAT_00669eac;
    *(undefined4 *)&this->field_0x88 = 0;
    *(basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8 **)&this->field_0x64 =
         &basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    local_4 = 0;
  }
  *(basic_ostream<char,_struct_std::char_traits<char>_>__vftable_669de0 **)
   ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &basic_ostream<char,_struct_std::char_traits<char>_>__vftable_669de0_00669de0;
  this_01 = (ios_base *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
  this_00 = &this->field_0x4;
  this_01[1].vftptr_0x0 = (ios_base__vftable_669dd8 *)this_00;
  *(undefined4 *)&this_01[1].field_0x4 = 0;
  this_01[1].field_0x8 = 0x20;
  std::ios_base::_Init(this_01);
  if (this_01[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
    std::ios_base::clear(this_01,*(uint *)&this_01->field_0x4 | 4,false);
  }
  *(basic_ofstream<char,_struct_std::char_traits<char>_>__vftable_67c918 **)
   ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &basic_ofstream<char,_struct_std::char_traits<char>_>__vftable_67c918_0067c918;
  local_4 = 2;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::
  basic_streambuf<char,_struct_std::char_traits<char>_>
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  *(basic_filebuf<char,_struct_std::char_traits<char>_>__vftable_669e64 **)this_00 =
       &basic_filebuf<char,_struct_std::char_traits<char>_>__vftable_669e64_00669e64;
  *(undefined4 *)&this->field_0x4c = 0;
  std::locale::locale((locale *)&this->field_0x5c);
  this->field_0x58 = 0;
  this->field_0x50 = 0;
  std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x496850
            ((basic_streambuf<char,_struct_std::char_traits<char>_> *)this_00);
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x54 = DAT_00707d9c;
  *(undefined4 *)&this->field_0x44 = DAT_00707d9c;
  *(undefined4 *)&this->field_0x40 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x537ca0::meth_0x537e50(cls_0x537ca0 *this,char *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  pvVar2 = std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x497e90
                     ((basic_streambuf<char,_struct_std::char_traits<char>_> *)&this->field_0x4,
                      param_1,param_2 | 2);
  if (pvVar2 == (void *)0x0) {
    iVar1 = *(int *)(this->mbr_0x0 + 4);
    uVar3 = *(uint *)(&this->field_0x4 + iVar1) | 2;
    if (*(int *)(&this->field_0x28 + iVar1) == 0) {
      uVar3 = *(uint *)(&this->field_0x4 + iVar1) | 6;
    }
    std::ios_base::clear((ios_base *)((int)&this->mbr_0x0 + iVar1),uVar3,false);
    return;
  }
  return;
}


