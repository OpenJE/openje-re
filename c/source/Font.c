#include "../include/Font.h"

Font * __thiscall GUI::Font::Font(Font *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063242b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Font__vftable_66f2d4_0066f2d4;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x2c = local_11;
  dVar1 = FUN_004c6640();
  this->mbr_0x30 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x30 + 4) = this->mbr_0x30;
  *(dword *)this->mbr_0x30 = this->mbr_0x30;
  *(dword *)(this->mbr_0x30 + 8) = this->mbr_0x30;
  this->mbr_0x34 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall GUI::Font::virt_meth_0x4b5580(Font *this,byte param_1)

{
  ~Font(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



Font * __thiscall GUI::Font::~Font(Font *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00632456;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Font__vftable_66f2d4_0066f2d4;
  local_4 = 1;
  meth_0x51e970(this);
  local_4 = local_4 & 0xffffff00;
  cls_0x50dbb0::meth_0x4b43f0
            ((cls_0x50dbb0 *)&this->mbr_0x2c,&local_10,*(int ***)(int **)this->mbr_0x30,
             (int **)this->mbr_0x30);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x30);
}



void __thiscall GUI::Font::meth_0x51e970(Font *this)

{
  void *_Memory;
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x30;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x30) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x10))(1);
      }
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x30);
  }
  _Memory = *(void **)(this->mbr_0x30 + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    cls_0x50dbb0::meth_0x4b2e80((cls_0x50dbb0 *)&this->mbr_0x2c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(dword *)(this->mbr_0x30 + 4) = this->mbr_0x30;
  this->mbr_0x34 = 0;
  *(dword *)this->mbr_0x30 = this->mbr_0x30;
  *(dword *)(this->mbr_0x30 + 8) = this->mbr_0x30;
  return;
}



void __thiscall
GUI::Font::meth_0x51ebd0(Font *this,_String_base *param_1,dword param_2,dword param_3,dword param_4)

{
  meth_0x51e970(this);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x4,param_1,0,0xffffffff);
  this->mbr_0x20 = param_2;
  this->mbr_0x24 = param_3;
  this->mbr_0x28 = param_4;
  return;
}


#include "../include/Font.h"
