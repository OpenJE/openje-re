#include "../include/cls_0x4134a0.h"

void __thiscall cls_0x4134a0::meth_0x4134a0(cls_0x4134a0 *this)

{
  char cVar1;
  dword *pdVar2;
  dword dVar3;
  cls_0x4134a0 *extraout_ECX;
  char extraout_DL;
  char cVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if (this->mbr_0x408 == 0) {
      pdVar2 = (dword *)this->mbr_0x41c;
      if (pdVar2 != (dword *)0x0) goto LAB_004134c1;
      dVar3 = 0;
    }
    else {
      pdVar2 = (dword *)this->mbr_0x408;
LAB_004134c1:
      dVar3 = *pdVar2;
    }
    this->mbr_0x408 = dVar3;
    if (dVar3 == this->mbr_0x41c) {
LAB_004134ee:
      this->mbr_0x408 = 0;
      return;
    }
    cVar1 = net::client::virt_meth_0x409bb0((client *)this);
    cVar4 = extraout_DL;
    if (cVar1 != '\0') {
      cVar4 = '\x01';
    }
    uVar5 = uVar5 + 1;
    this = extraout_ECX;
    if (extraout_ECX->mbr_0x420 < uVar5) goto LAB_004134ee;
    if (cVar4 != '\0') {
      return;
    }
  } while( true );
}


