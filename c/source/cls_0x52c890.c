#include "../include/cls_0x52c890.h"

int __thiscall cls_0x52c890::meth_0x52c890(cls_0x52c890 *this,int *param_1)

{
  cls_0x52c420 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  Gregorian *this_01;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_EDX;
  int iVar9;
  
  this_00 = *(cls_0x52c420 **)(DAT_0070b250 + 0x1ec);
  iVar9 = 100;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)&this->mbr_0xc);
  iVar1 = param_1[8];
  puVar2 = (undefined4 *)this->mbr_0x4;
  iVar3 = *(int *)(iVar1 + 0x48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*puVar2;
  }
  for (; iVar6 = iVar9, puVar5 != puVar2; puVar5 = (undefined4 *)*puVar5) {
    this_01 = (Gregorian *)puVar5[2];
    iVar6 = Gregorian::meth_0x52c5d0(this_01);
    if ((iVar6 != 0) && (this_01 != (Gregorian *)param_1)) {
      iVar6 = *(int *)(this_01->mbr_0x20 + 0x58);
      iVar4 = *(int *)(iVar1 + 0x58);
      if (iVar6 == iVar4) {
        uVar7 = Gregorian::Get_mbr_0x24(this_01);
        uVar8 = Gregorian::Get_mbr_0x24((Gregorian *)param_1);
        iVar6 = extraout_EDX;
        if (uVar8 < uVar7) goto LAB_0052c91f;
      }
      else {
LAB_0052c91f:
        iVar6 = cls_0x52c420::meth_0x52c420(this_00,iVar6,iVar4);
        iVar9 = iVar9 - iVar6;
      }
      iVar6 = iVar3;
      if (iVar9 <= iVar3) break;
    }
  }
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)&this->mbr_0xc);
  return iVar6;
}


