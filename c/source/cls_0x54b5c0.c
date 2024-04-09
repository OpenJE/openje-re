#include "../include/cls_0x54b5c0.h"

void __thiscall
cls_0x54b5c0::meth_0x54b5c0
          (cls_0x54b5c0 *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  dword dVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  dVar2 = this->mbr_0xc;
  uVar3 = param_2 - dVar2;
  iVar4 = this->mbr_0x10 + dVar2;
  iVar5 = param_4 - param_2;
  if (uVar3 < (uint)(iVar4 - param_4)) {
    FUN_0054a4b0(&param_2,dVar2,(int)this,param_2,param_3,param_4,param_5);
    if (iVar5 != 0) {
      dVar2 = this->mbr_0x10;
      do {
        if (dVar2 != 0) {
          uVar1 = this->mbr_0xc + 1;
          this->mbr_0xc = uVar1;
          if (this->mbr_0x8 << 2 <= uVar1) {
            this->mbr_0xc = 0;
          }
          dVar2 = dVar2 - 1;
          if (dVar2 == 0) {
            this->mbr_0xc = 0;
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      this->mbr_0x10 = dVar2;
    }
  }
  else {
    FUN_0054a550(&param_2,param_4,param_5,iVar4,(int)this,param_2,param_3);
    if (iVar5 != 0) {
      dVar2 = this->mbr_0x10;
      do {
        if ((dVar2 != 0) && (dVar2 = dVar2 - 1, dVar2 == 0)) {
          this->mbr_0xc = 0;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      this->mbr_0x10 = dVar2;
    }
  }
  if (uVar3 == 0) {
    param_2 = this->mbr_0xc;
  }
  else {
    param_2 = this->mbr_0xc + uVar3;
  }
  *param_1 = param_2;
  param_1[1] = (int)this;
  return;
}


