#include "../include/cls_0x50ca00.h"

cls_0x50ca00 * __thiscall cls_0x50ca00::cls_0x50ca00(cls_0x50ca00 *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x18);
  this->mbr_0x0 = (dword)lpCriticalSection;
  InitializeCriticalSection(lpCriticalSection);
  return this;
}



void __thiscall cls_0x50ca00::meth_0x50ca20(cls_0x50ca00 *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)this->mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x0);
}



void __thiscall cls_0x50ca00::meth_0x50ca40(cls_0x50ca00 *this)

{
  EnterCriticalSection((LPCRITICAL_SECTION)this->mbr_0x0);
  return;
}



void __thiscall cls_0x50ca00::meth_0x50ca50(cls_0x50ca00 *this)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)this->mbr_0x0);
  return;
}


