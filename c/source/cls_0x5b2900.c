#include "../include/cls_0x5b2900.h"

void __thiscall cls_0x5b2900::meth_0x5b2900(cls_0x5b2900 *this)

{
  if ((Gregorian *)this->mbr_0x4c != (Gregorian *)0x0) {
    Gregorian::meth_0x52cca0((Gregorian *)this->mbr_0x4c,(uint)(this->mbr_0x48 != 0),0);
  }
  return;
}



void __thiscall cls_0x5b2900::meth_0x5b2920(cls_0x5b2900 *this,int param_1)

{
  if ((Gregorian *)this->mbr_0x4c != (Gregorian *)0x0) {
    Gregorian::meth_0x52c580((Gregorian *)this->mbr_0x4c,param_1);
    return;
  }
  return;
}



void __thiscall cls_0x5b2900::meth_0x5b2930(cls_0x5b2900 *this)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if ((this->mbr_0x49 != 0) && ((Gregorian *)this->mbr_0x4c != (Gregorian *)0x0)) {
    bVar1 = Gregorian::meth_0x52cc40((Gregorian *)this->mbr_0x4c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar2 = cls_0x52c480::meth_0x52c480(*(cls_0x52c480 **)(DAT_0070b250 + 0x1f0));
      if (0 < iVar2) {
        Gregorian::meth_0x52c6c0((Gregorian *)this->mbr_0x4c,iVar2);
        meth_0x5b2900(this);
      }
    }
    else {
      iVar2 = Gregorian::meth_0x52c710((Gregorian *)this->mbr_0x4c);
      if (iVar2 < 1) {
        meth_0x5b2920(this,0);
        return;
      }
    }
  }
  return;
}



void __thiscall cls_0x5b2900::meth_0x5b2990(cls_0x5b2900 *this,char param_1)

{
  if ((this->mbr_0x49 != 0) != (param_1 != '\0')) {
    this->mbr_0x49 = param_1;
    if (param_1 == '\0') {
      meth_0x5b2920(this,0);
      return;
    }
    meth_0x5b2900(this);
  }
  return;
}


