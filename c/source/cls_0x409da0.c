#include "../include/cls_0x409da0.h"

void __thiscall cls_0x409da0::meth_0x409da0(cls_0x409da0 *this)

{
  char cVar1;
  dword *pdVar2;
  dword **ppdVar3;
  cls_0x409da0 *extraout_ECX;
  dword **ppdVar4;
  dword **extraout_EDX;
  char cVar5;
  uint uVar6;
  
  ppdVar4 = (dword **)0x0;
  if (this->mbr_0x70c == 0) {
    this->mbr_0x6f4 = 0;
    return;
  }
  cVar5 = '\0';
  uVar6 = 0;
  do {
    if ((dword **)this->mbr_0x6f4 == ppdVar4) {
      ppdVar3 = (dword **)this->mbr_0x708;
      if (ppdVar3 != ppdVar4) goto LAB_00409ddc;
      pdVar2 = (dword *)0x0;
    }
    else {
      ppdVar3 = (dword **)this->mbr_0x6f4;
LAB_00409ddc:
      pdVar2 = *ppdVar3;
    }
    this->mbr_0x6f4 = (dword)pdVar2;
    ppdVar3 = (dword **)this->mbr_0x708;
    if ((dword **)pdVar2 == ppdVar3) {
      if (ppdVar3 == ppdVar4) {
        pdVar2 = (dword *)0x0;
      }
      else {
        pdVar2 = *ppdVar3;
      }
      this->mbr_0x6f4 = (dword)pdVar2;
    }
    cVar1 = net::client::virt_meth_0x409bb0((client *)this);
    if (cVar1 != '\0') {
      cVar5 = '\x01';
    }
    uVar6 = uVar6 + 1;
    if (extraout_ECX->mbr_0x70c < uVar6) {
      extraout_ECX->mbr_0x6f4 = (dword)extraout_EDX;
      return;
    }
    this = extraout_ECX;
    ppdVar4 = extraout_EDX;
    if (cVar5 != (char)extraout_EDX) {
      return;
    }
  } while( true );
}


