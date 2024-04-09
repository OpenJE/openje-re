#include "../include/cls_0x56d7f0.h"

void __thiscall cls_0x56d7f0::PackState(cls_0x56d7f0 *this,void *param_1)

{
  char cVar1;
  dword *pdVar2;
  undefined4 *puVar3;
  dword *pdVar4;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  if (this->mbr_0xb8 == 3) {
    if (this->mbr_0x24 < 0x10) {
      pdVar4 = &this->mbr_0x10;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x10;
    }
    pdVar2 = pdVar4;
    do {
      cVar1 = *(char *)pdVar2;
      pdVar2 = (dword *)((int)pdVar2 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)param_1,pdVar4,(uint)((int)pdVar2 + (1 - (int)((int)pdVar4 + 1))));
    net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x28);
    if (this->mbr_0x44 < 0x10) {
      pdVar4 = &this->mbr_0x30;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x30;
    }
    pdVar2 = pdVar4;
    do {
      cVar1 = *(char *)pdVar2;
      pdVar2 = (dword *)((int)pdVar2 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)param_1,pdVar4,(uint)((int)pdVar2 + (1 - (int)((int)pdVar4 + 1))));
    if (this->mbr_0x64 < 0x10) {
      pdVar4 = &this->mbr_0x50;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x50;
    }
    pdVar2 = pdVar4;
    do {
      cVar1 = *(char *)pdVar2;
      pdVar2 = (dword *)((int)pdVar2 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)param_1,pdVar4,(uint)((int)pdVar2 + (1 - (int)((int)pdVar4 + 1))));
    if (this->mbr_0x80 < 0x10) {
      pdVar4 = &this->mbr_0x6c;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x6c;
    }
    pdVar2 = pdVar4;
    do {
      cVar1 = *(char *)pdVar2;
      pdVar2 = (dword *)((int)pdVar2 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)param_1,pdVar4,(uint)((int)pdVar2 + (1 - (int)((int)pdVar4 + 1))));
    if (this->mbr_0xa8 < 0x10) {
      pdVar4 = &this->mbr_0x94;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x94;
    }
    pdVar2 = pdVar4;
    do {
      cVar1 = *(char *)pdVar2;
      pdVar2 = (dword *)((int)pdVar2 + 1);
    } while (cVar1 != '\0');
    net::packet::meth_0x45f1b0
              ((packet *)param_1,pdVar4,(uint)((int)pdVar2 + (1 - (int)((int)pdVar4 + 1))));
    net::packet::meth_0x45f130((packet *)param_1,this->mbr_0x118);
    puVar3 = (undefined4 *)this->mbr_0x12c;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 != (undefined4 *)this->mbr_0x12c) {
      do {
        net::packet::meth_0x45f130((packet *)param_1,*(undefined4 *)(puVar3[2] + 0x1dc));
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)this->mbr_0x12c);
    }
    net::packet::meth_0x45f0b0((packet *)param_1,0);
    return;
  }
  local_8 = &Exception__vftable_64787c_0064787c;
  local_4 = "PackState() method may only be called on normal maps.";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_006d8834);
}


