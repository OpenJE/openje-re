#include "../include/cls_0x43a490.h"

void __thiscall cls_0x43a490::meth_0x43a490(cls_0x43a490 *this,dword param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 != (int *)0x0) {
    this->mbr_0x2c = param_1;
    switch(param_1) {
    case 0:
      (**(code **)(*piVar1 + 100))(0);
                    /* WARNING: Could not recover jumptable at 0x0043a4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x4 + 0x74))();
      return;
    case 1:
      (**(code **)(*piVar1 + 0x5c))(0x80008000);
      (**(code **)(*(int *)this->mbr_0x4 + 100))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0043a4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x4 + 0x74))(1);
      return;
    case 2:
      (**(code **)(*piVar1 + 0x5c))(0x80800000);
      (**(code **)(*(int *)this->mbr_0x4 + 100))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0043a514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x4 + 0x74))(1);
      return;
    case 3:
      (**(code **)(*piVar1 + 0x5c))(0x80000040);
      (**(code **)(*(int *)this->mbr_0x4 + 100))(0x40);
                    /* WARNING: Could not recover jumptable at 0x0043a539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x4 + 0x74))(1);
      return;
    }
  }
  return;
}


