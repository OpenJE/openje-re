#include "../include/StoreManager.h"

StoreManager * __thiscall StoreManager::StoreManager(StoreManager *this)

{
  int **ppiVar1;
  int *piVar2;
  StoreManager *local_4;
  
  this->vftptr_0x0 = &StoreManager__vftable_6a37a4_006a37a4;
  local_4 = this;
  ppiVar1 = (int **)FUN_0056e0b0();
  piVar2 = (int *)0x0;
  this->mbr_0x8 = (dword)ppiVar1;
  this->mbr_0xc = 0;
  if (ppiVar1 != (int **)0x0) {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,piVar2,(int *)ppiVar1);
  return this;
}



void __thiscall StoreManager::virt_meth_0x5a1ff0(StoreManager *this)

{
  int **ppiVar1;
  int *piVar2;
  StoreManager *local_4;
  
  if ((int **)this->mbr_0x8 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x8;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x8) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x8);
  }
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x4,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,(int *)0x0,(int *)0x0);
  return;
}



StoreManager * __thiscall StoreManager::~StoreManager(StoreManager *this)

{
  int **ppiVar1;
  int *piVar2;
  StoreManager *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063acbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &StoreManager__vftable_6a37a4_006a37a4;
  local_4 = 0;
  local_10 = this;
  virt_meth_0x5a1ff0(this);
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_10,piVar2,(int *)ppiVar1)
  ;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}


#include "../include/StoreManager.h"
