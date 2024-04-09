#include "../include/cls_0x4203c0.h"

void __thiscall cls_0x4203c0::meth_0x4203c0(cls_0x4203c0 *this)

{
  void *pvVar1;
  dword dVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint unaff_retaddr;
  int *piVar6;
  undefined local_254 [580];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c5fb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->mbr_0xf4 = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xf8 = 0x3f800000;
  this->mbr_0xe4 = 0x3f800000;
  this->mbr_0xd0 = 0x3f800000;
  this->mbr_0xbc = 0x3f800000;
  iVar5 = 0;
  this->mbr_0x10c = 0;
  if (0 < (int)this->mbr_0x108) {
    iVar3 = 0;
    do {
      if ((this->mbr_0x30 & 1) == 0) {
        if ((this->mbr_0x30 & 2) == 0) {
          *(undefined4 *)(this->mbr_0x100 + 0x10 + iVar3) = 0xff808080;
        }
        else {
          *(undefined4 *)(this->mbr_0x100 + 0x10 + iVar3) = 0xffffffff;
        }
      }
      else {
        *(undefined4 *)(this->mbr_0x100 + 0x10 + iVar3) = 0xffffffff;
      }
      *(undefined4 *)(this->mbr_0x100 + 0xc + iVar3) = 0x3f800000;
      *(dword *)(this->mbr_0x100 + 8 + iVar3) = this->mbr_0x2c;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar5 < (int)this->mbr_0x108);
  }
  *(float *)this->mbr_0x100 = (float)*(int *)&this->field_0xc - 0.5;
  *(float *)(this->mbr_0x100 + 4) = (float)*(int *)&this->field_0x10 - 0.5;
  *(float *)(this->mbr_0x100 + 0x1c) =
       (((float)*(int *)&this->field_0xc + (float)*(int *)&this->field_0x14) - 1.0) + 0.5;
  *(float *)(this->mbr_0x100 + 0x20) = (float)*(int *)&this->field_0x10 - 0.5;
  *(float *)(this->mbr_0x100 + 0x38) = (float)*(int *)&this->field_0xc - 0.5;
  *(float *)(this->mbr_0x100 + 0x3c) =
       (((float)*(int *)&this->field_0x18 + (float)*(int *)&this->field_0x10) - 1.0) + 0.5;
  *(float *)(this->mbr_0x100 + 0x54) =
       (((float)*(int *)&this->field_0xc + (float)*(int *)&this->field_0x14) - 1.0) + 0.5;
  *(float *)(this->mbr_0x100 + 0x58) =
       (((float)*(int *)&this->field_0x18 + (float)*(int *)&this->field_0x10) - 1.0) + 0.5;
  *(dword *)(this->mbr_0x100 + 0x14) = this->mbr_0x1c;
  *(dword *)(this->mbr_0x100 + 0x18) = this->mbr_0x20;
  *(float *)(this->mbr_0x100 + 0x30) = *(float *)&this->field_0x24 + (float)this->mbr_0x1c;
  *(dword *)(this->mbr_0x100 + 0x34) = this->mbr_0x20;
  *(dword *)(this->mbr_0x100 + 0x4c) = this->mbr_0x1c;
  *(float *)(this->mbr_0x100 + 0x50) = *(float *)&this->field_0x28 + (float)this->mbr_0x20;
  *(float *)(this->mbr_0x100 + 0x68) = *(float *)&this->field_0x24 + (float)this->mbr_0x1c;
  *(float *)(this->mbr_0x100 + 0x6c) = *(float *)&this->field_0x28 + (float)this->mbr_0x20;
  piVar6 = (int *)this->mbr_0x104;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0xffffffff;
  this->mbr_0x54 = this->mbr_0x100;
  iVar5 = FUN_0047460d(0x144);
  Gregorian::meth_0x4ab680((Gregorian *)&this->mbr_0x48,0x144,iVar5,piVar6);
  this->mbr_0x70 = 0;
  cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)&this->mbr_0x70);
  pvVar1 = (void *)this->mbr_0x7c;
  if (pvVar1 == (void *)0x0) {
    puVar4 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)&this->mbr_0x48,1);
    *puVar4 = 0;
    puVar4[8] = 5;
    puVar4[9] = 0;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)local_254);
    local_254._304_4_ = this->mbr_0x4;
    local_4 = 0;
    local_254._28_4_ = 0x14;
    local_254._32_4_ = 0x14;
    local_254._308_4_ = 0;
    local_254._40_4_ = 1;
    local_254[188] = 0;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this->mbr_0x7c,(_String_base *)local_254);
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 2;
    dVar2 = this->mbr_0xb8;
    *(undefined4 *)(dVar2 + 0x10) = 1;
    *(dword **)(dVar2 + 0x14) = &this->mbr_0xbc;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&this->mbr_0x70);
    this->mbr_0x4c = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this->mbr_0xb4,(int)&this->mbr_0x48);
    *(dword *)(this->mbr_0xb4 + 0xc) = this->mbr_0xb8;
    this->mbr_0x10c = 1;
    local_4 = 0xffffffff;
    cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)local_254);
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  _eh_vector_destructor_iterator_
            (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
  _free((void *)((int)pvVar1 + -4));
}



void __thiscall cls_0x4203c0::meth_0x4216b0(cls_0x4203c0 *this)

{
  if (this->mbr_0x44 == 0) {
    if (this->mbr_0x45 != 0) {
      meth_0x4203c0(this);
      this->mbr_0x45 = 0;
    }
    if (this->mbr_0x10c != 0) {
      if (*(int *)((int)DAT_00707ef8 + 4) == 0) {
        (**(code **)(*DAT_00707ce4 + 0xe8))(this->mbr_0xb4,DAT_00707ed4,this->mbr_0xfc);
        return;
      }
      FUN_004b6750(DAT_00707ef8,(int *)this->mbr_0xb4,DAT_00707ed4,1);
    }
  }
  return;
}


