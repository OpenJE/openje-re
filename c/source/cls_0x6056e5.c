#include "../include/cls_0x6056e5.h"

cls_0x6056e5 * __thiscall cls_0x6056e5::cls_0x6056e5(cls_0x6056e5 *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&lpAddend_00705814);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_0070f600;
    do {
      FUN_00607fff(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x70f660);
  }
  return this;
}


