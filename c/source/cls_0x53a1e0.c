#include "../include/cls_0x53a1e0.h"

HRESULT __thiscall cls_0x53a1e0::meth_0x539ef0(cls_0x53a1e0 *this,undefined4 param_1)

{
  int *piVar1;
  HRESULT HVar2;
  
  HVar2 = CoInitialize((LPVOID)0x0);
  if ((-1 < HVar2) &&
     (HVar2 = CoCreateInstance((IID *)&rclsid_006b79b4,(LPUNKNOWN)0x0,3,(IID *)&riid_006b79a4,
                               (LPVOID *)this), -1 < HVar2)) {
    HVar2 = CoCreateInstance((IID *)&rclsid_006b79c4,(LPUNKNOWN)0x0,3,(IID *)&riid_006b7994,
                             (LPVOID *)&this->mbr_0x4);
    if (-1 < HVar2) {
      piVar1 = (int *)this->mbr_0x4;
      (**(code **)(*piVar1 + 0xb0))(piVar1,0,0,param_1,1,0x80,0x3f,0);
      HVar2 = 0;
    }
  }
  return HVar2;
}



void __thiscall cls_0x53a1e0::meth_0x539f60(cls_0x53a1e0 *this)

{
  int *piVar1;
  
  (**(code **)(*(int *)this->mbr_0x4 + 0x14))((int *)this->mbr_0x4,0,0,0,0);
  (**(code **)(*(int *)this->mbr_0x4 + 0x98))((int *)this->mbr_0x4);
  piVar1 = (int *)this->mbr_0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x0 = 0;
  }
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00539fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}



void __thiscall cls_0x53a1e0::meth_0x53a180(cls_0x53a1e0 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x53a1e0 *local_4;
  
  ppiVar1 = (int **)this->mbr_0xc;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x8,(int **)&local_4,piVar2,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0xc;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x8,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xc);
}



cls_0x53a1e0 * __thiscall cls_0x53a1e0::cls_0x53a1e0(cls_0x53a1e0 *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  cls_0x53a1e0 *local_4;
  
  local_4 = this;
  dVar2 = FUN_0056e0b0();
  piVar3 = (int *)0x0;
  this->mbr_0xc = dVar2;
  this->mbr_0x10 = 0;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  ppiVar1 = (int **)this->mbr_0xc;
  if (ppiVar1 != (int **)0x0) {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x8,(int **)&local_4,piVar3,(int *)ppiVar1);
  return this;
}


