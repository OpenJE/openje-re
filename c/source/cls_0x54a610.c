#include "../include/cls_0x54a610.h"

void __thiscall cls_0x54a610::meth_0x54a610(cls_0x54a610 *this,void *param_1)

{
  char cVar1;
  dword *pdVar2;
  dword *pdVar3;
  uint uVar4;
  overflow local_8;
  
  if (this->mbr_0x1d8 < 0x10) {
    pdVar3 = &this->mbr_0x1c4;
  }
  else {
    pdVar3 = (dword *)this->mbr_0x1c4;
  }
  pdVar2 = pdVar3;
  do {
    cVar1 = *(char *)pdVar2;
    pdVar2 = (dword *)((int)pdVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)param_1,pdVar3,(uint)((int)pdVar2 + (1 - (int)((int)pdVar3 + 1))));
  net::packet::meth_0x45f0b0((packet *)param_1,this->mbr_0x1e0);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x1e4);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x1ec);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x4);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x8);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0xc);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x1f0);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x1f4);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x1f8);
  if (this->mbr_0x230 < 0x10) {
    pdVar3 = &this->mbr_0x21c;
  }
  else {
    pdVar3 = (dword *)this->mbr_0x21c;
  }
  pdVar2 = pdVar3;
  do {
    cVar1 = *(char *)pdVar2;
    pdVar2 = (dword *)((int)pdVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)param_1,pdVar3,(uint)((int)pdVar2 + (1 - (int)((int)pdVar3 + 1))));
  if (this->mbr_0x24c < 0x10) {
    pdVar3 = &this->mbr_0x238;
  }
  else {
    pdVar3 = (dword *)this->mbr_0x238;
  }
  pdVar2 = pdVar3;
  do {
    cVar1 = *(char *)pdVar2;
    pdVar2 = (dword *)((int)pdVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)param_1,pdVar3,(uint)((int)pdVar2 + (1 - (int)((int)pdVar3 + 1))));
  if (this->mbr_0x268 < 0x10) {
    pdVar3 = &this->mbr_0x254;
  }
  else {
    pdVar3 = (dword *)this->mbr_0x254;
  }
  pdVar2 = pdVar3;
  do {
    cVar1 = *(char *)pdVar2;
    pdVar2 = (dword *)((int)pdVar2 + 1);
  } while (cVar1 != '\0');
  net::packet::meth_0x45f1b0
            ((packet *)param_1,pdVar3,(uint)((int)pdVar2 + (1 - (int)((int)pdVar3 + 1))));
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x28c);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x290);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x180);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x184);
  if (*(int *)((int)param_1 + 8) == *(int *)((int)param_1 + 0x10)) {
    net::buffer::overflow::overflow(&local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006ddff0);
  }
  *(byte *)(*(int *)((int)param_1 + 0xc) + *(int *)((int)param_1 + 0x14)) = this->mbr_0x296;
  uVar4 = *(int *)((int)param_1 + 0xc) + 1;
  *(uint *)((int)param_1 + 0xc) = uVar4;
  if (*(uint *)((int)param_1 + 0x10) < uVar4) {
    *(uint *)((int)param_1 + 0x10) = uVar4;
  }
  if (*(int *)((int)param_1 + 8) == *(int *)((int)param_1 + 0x10)) {
    net::buffer::overflow::overflow(&local_8);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006ddff0);
  }
  *(byte *)(uVar4 + *(int *)((int)param_1 + 0x14)) = this->mbr_0x297;
  uVar4 = *(int *)((int)param_1 + 0xc) + 1;
  *(uint *)((int)param_1 + 0xc) = uVar4;
  if (*(uint *)((int)param_1 + 0x10) < uVar4) {
    *(uint *)((int)param_1 + 0x10) = uVar4;
  }
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x298);
  net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x29c);
  if (this->mbr_0x168 != 0) {
    net::packet::meth_0x46cfb0((packet *)param_1,1);
    (**(code **)(*(int *)this->mbr_0x168 + 0x20))(param_1);
    return;
  }
  net::packet::meth_0x46cfb0((packet *)param_1,0);
  return;
}


