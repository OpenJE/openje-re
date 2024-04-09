#include "../include/cls_0x538f30.h"

int __thiscall cls_0x538f30::meth_0x538f30(cls_0x538f30 *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (int)this->mbr_0x2c)) {
    return param_1 * 9 + this->mbr_0x50;
  }
  return 0;
}



int __thiscall cls_0x538f30::meth_0x538f50(cls_0x538f30 *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((((-1 < param_1) && (param_1 < (int)this->mbr_0x30)) && (-1 < param_2)) &&
     (iVar1 = this->mbr_0x2c * 2 + 2, param_2 < iVar1)) {
    return (iVar1 * param_1 + param_2) * 9 + this->mbr_0x54;
  }
  return 0;
}



int __thiscall cls_0x538f30::meth_0x538f90(cls_0x538f30 *this,char *param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str2;
  
  iVar2 = 0;
  if (0 < (int)this->mbr_0x2c) {
    do {
      _Str2 = param_1;
      _Str1 = (char *)meth_0x538f30(this,iVar2);
      iVar1 = __stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this->mbr_0x2c);
  }
  return -1;
}



int __thiscall cls_0x538f30::meth_0x538fe0(cls_0x538f30 *this,char *param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str2;
  
  iVar2 = 0;
  if (0 < (int)this->mbr_0x30) {
    do {
      _Str2 = param_1;
      _Str1 = (char *)meth_0x538f50(this,iVar2,0);
      iVar1 = __stricmp(_Str1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this->mbr_0x30);
  }
  return -1;
}


