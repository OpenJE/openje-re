#include "../include/cls_0x505540.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
cls_0x505540::meth_0x505540
          (cls_0x505540 *this,int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  dword dVar2;
  dword *unaff_EBP;
  dword dVar3;
  int unaff_EDI;
  int iVar4;
  
  dVar2 = this->mbr_0x10;
  dVar3 = this->mbr_0x14;
  iVar4 = this->mbr_0xc * param_1;
  if ((param_4 == '\0') && (iVar4 + dVar2 < this->mbr_0x8)) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))
                      ((int *)this->mbr_0x4,dVar2,iVar4,param_2,0x1800);
    if (iVar1 < 0) {
      return;
    }
  }
  else {
    dVar3 = 0;
    dVar2 = 0;
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))((int *)this->mbr_0x4,0,iVar4,param_2,0x2800)
    ;
    if (iVar1 < 0) {
      return;
    }
  }
  *unaff_EBP = dVar3;
  this->mbr_0x14 = dVar3 + unaff_EDI;
  this->mbr_0x10 = iVar4 + dVar2;
  _DAT_007083bc = _DAT_007083bc + unaff_EDI;
  return;
}


