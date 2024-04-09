#include "../include/Journal.h"

Journal * __thiscall Journal::Journal(Journal *this)

{
  int **ppiVar1;
  int *piVar2;
  Journal *local_4;
  
  this->vftptr_0x0 = &Journal__vftable_6a2a50_006a2a50;
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



Journal * __thiscall Journal::~Journal(Journal *this)

{
  int **ppiVar1;
  int *piVar2;
  Journal *local_4;
  
  this->vftptr_0x0 = &Journal__vftable_6a2a50_006a2a50;
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,piVar2,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



void __thiscall Journal::virt_meth_0x5a05c0(Journal *this)

{
  int **ppiVar1;
  Journal *local_4;
  
  ppiVar1 = (int **)this->mbr_0x8;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x4,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x4,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



int * __thiscall Journal::virt_meth_0x5a05f0(Journal *this,byte param_1)

{
  ~Journal(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Journal.h"
