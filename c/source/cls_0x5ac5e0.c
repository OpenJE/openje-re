#include "../include/cls_0x5ac5e0.h"

int __thiscall cls_0x5ac5e0::meth_0x5ac5e0(cls_0x5ac5e0 *this,byte param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 1) != 0) {
    iVar1 = 6;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 2;
  }
  if ((param_1 & 3) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x10) != 0) {
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0x20) != 0) {
    iVar1 = iVar1 + 2;
  }
  if ((param_1 & 0x40) != 0) {
    iVar1 = iVar1 + this->mbr_0x10;
  }
  return iVar1;
}



void __thiscall cls_0x5ac5e0::meth_0x5ac690(cls_0x5ac5e0 *this,void *param_1,byte param_2)

{
  uint uVar1;
  overflow local_8;
  
  if (*(int *)((int)param_1 + 8) == *(int *)((int)param_1 + 0x10)) {
    net::buffer::overflow::overflow(&local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006ddff0);
  }
  *(byte *)(*(int *)((int)param_1 + 0x14) + *(int *)((int)param_1 + 0xc)) = param_2;
  uVar1 = *(int *)((int)param_1 + 0xc) + 1;
  *(uint *)((int)param_1 + 0xc) = uVar1;
  if (*(uint *)((int)param_1 + 0x10) < uVar1) {
    *(uint *)((int)param_1 + 0x10) = uVar1;
  }
  if ((param_2 & 1) != 0) {
    net::packet::meth_0x46cfb0((packet *)param_1,this->mbr_0x1c);
    net::packet::meth_0x46cfb0((packet *)param_1,this->mbr_0x1d);
    net::packet::meth_0x46cfb0((packet *)param_1,this->mbr_0x1e);
    net::packet::meth_0x46cfb0((packet *)param_1,this->mbr_0x1f);
    net::packet::meth_0x588d30((packet *)param_1,this->mbr_0x20);
  }
  if ((param_2 & 2) != 0) {
    net::packet::meth_0x588d30((packet *)param_1,this->mbr_0x24);
  }
  if ((param_2 & 3) != 0) {
    net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x28);
    if (this->mbr_0x28 != 0xffffffff) {
      net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x2c);
    }
  }
  if ((param_2 & 4) != 0) {
    net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x30);
  }
  if ((param_2 & 0x10) != 0) {
    net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x34);
  }
  if ((param_2 & 0x40) != 0) {
    if ((param_2 & 0x20) != 0) {
      net::packet::meth_0x588d30((packet *)param_1,*(undefined2 *)&this->mbr_0x10);
    }
    net::packet::meth_0x45f1b0((packet *)param_1,(undefined4 *)this->mbr_0x14,this->mbr_0x10);
  }
  return;
}


