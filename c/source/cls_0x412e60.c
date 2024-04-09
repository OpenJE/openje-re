#include "../include/cls_0x412e60.h"

void __thiscall cls_0x412e60::meth_0x412e60(cls_0x412e60 *this,int **param_1)

{
  dword dVar1;
  bool bVar2;
  char cVar3;
  cls_0x412e60 *extraout_ECX;
  dword *pdVar4;
  dword dVar5;
  dword *extraout_EDX;
  uint uVar6;
  
  pdVar4 = (dword *)this->mbr_0x408;
  dVar1 = this->mbr_0x41c;
  bVar2 = false;
  uVar6 = 0;
  while( true ) {
    if (pdVar4 == (dword *)0x0) {
      if ((dword *)this->mbr_0x41c == (dword *)0x0) {
        dVar5 = 0;
      }
      else {
        dVar5 = *(dword *)this->mbr_0x41c;
      }
    }
    else {
      dVar5 = *pdVar4;
    }
    if (dVar5 == dVar1) break;
    cVar3 = net::client::virt_meth_0x409bb0((client *)this);
    if (cVar3 != '\0') {
      bVar2 = true;
    }
    uVar6 = uVar6 + 1;
    if (extraout_ECX->mbr_0x420 < uVar6) break;
    this = extraout_ECX;
    pdVar4 = extraout_EDX;
    if (bVar2) {
      *param_1 = (int *)extraout_EDX;
      return;
    }
  }
  *param_1 = (int *)0x0;
  return;
}



void __thiscall cls_0x412e60::meth_0x412ed0(cls_0x412e60 *this,int **param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  cls_0x412e60 *extraout_ECX;
  dword dVar3;
  dword *extraout_EDX;
  dword *pdVar4;
  uint uVar5;
  int iVar6;
  
  pdVar4 = (dword *)this->mbr_0x408;
  iVar6 = 0;
  if (0 < param_2) {
    do {
      bVar1 = false;
      uVar5 = 0;
      do {
        if (pdVar4 == (dword *)0x0) {
          if ((dword *)this->mbr_0x41c == (dword *)0x0) {
            dVar3 = 0;
          }
          else {
            dVar3 = *(dword *)this->mbr_0x41c;
          }
        }
        else {
          dVar3 = *pdVar4;
        }
        if (dVar3 == this->mbr_0x41c) {
          pdVar4 = (dword *)0x0;
          break;
        }
        cVar2 = net::client::virt_meth_0x409bb0((client *)this);
        if (cVar2 != '\0') {
          bVar1 = true;
        }
        uVar5 = uVar5 + 1;
        if (extraout_ECX->mbr_0x420 < uVar5) {
          *param_1 = (int *)0x0;
          return;
        }
        this = extraout_ECX;
        pdVar4 = extraout_EDX;
      } while (!bVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  *param_1 = (int *)pdVar4;
  return;
}



void __thiscall cls_0x412e60::meth_0x413500(cls_0x412e60 *this,int *param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  
  puVar1 = (undefined4 *)meth_0x412ed0(this,&param_1,(int)param_1);
  *(undefined4 *)(extraout_ECX + 0x408) = *puVar1;
  return;
}


