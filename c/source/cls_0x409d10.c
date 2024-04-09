#include "../include/cls_0x409d10.h"

void __thiscall cls_0x409d10::meth_0x409d10(cls_0x409d10 *this,undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  cls_0x409d10 *extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar4;
  
  uVar1 = this->mbr_0x70c;
  bVar2 = false;
  uVar4 = 0;
  if (uVar1 == 0) {
    *param_1 = 0;
    return;
  }
  while( true ) {
    cVar3 = net::client::virt_meth_0x409bb0((client *)this);
    if (cVar3 != '\0') {
      bVar2 = true;
    }
    uVar4 = uVar4 + 1;
    if (uVar1 < uVar4) break;
    this = extraout_ECX;
    if (bVar2) {
      *param_1 = extraout_EDX;
      return;
    }
  }
  *param_1 = 0;
  return;
}


