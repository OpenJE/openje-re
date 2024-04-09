#include "../include/cls_0x474d61.h"

int __thiscall cls_0x474d61::meth_0x474d61(cls_0x474d61 *this)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  
  FUN_0061781c();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x30) = 1;
  if ((iVar5 == 0) || (*(int *)(extraout_ECX + 4) != 0)) {
LAB_00474dd1:
    *(int *)(extraout_ECX + 8) = iVar5;
    puVar4 = (undefined4 *)operator_new(*(int *)(*(int *)(extraout_ECX + 0x1c) + 0x30) << 2);
    *(undefined4 **)(extraout_ECX + 0x10) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar6 = *(uint *)(*(int *)(extraout_ECX + 0x1c) + 0x30) & 0x3fffffff; uVar6 != 0;
          uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined4 *)(extraout_ECX + 0x38) = 0;
      *(undefined4 *)(extraout_ECX + 0x3c) = 0;
      piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
      iVar5 = (**(code **)(*piVar2 + 0x1c))(piVar2,unaff_EBP + -0xf0);
      if (iVar5 == 0) {
        *(undefined4 *)(extraout_ECX + 0x34) = *(undefined4 *)(unaff_EBP + -0x48);
        piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
        iVar5 = (**(code **)(*piVar2 + 0x24))(piVar2,unaff_EBP + -0x1c);
        if (iVar5 == 0) {
          if ((*(byte *)(unaff_EBP + -0x10) & 0x50) == 0) {
            if ((*(byte *)(unaff_EBP + -0x10) & 0x80) != 0) {
              piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
              (**(code **)(*piVar2 + 0xcc))(piVar2,0x99,unaff_EBP + 8);
              piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
              (**(code **)(*piVar2 + 200))(piVar2,0x99,0);
              piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
              iVar5 = (**(code **)(*piVar2 + 0x1c))(piVar2,unaff_EBP + -0xf0);
              if (iVar5 != 0) goto LAB_00474ee0;
              uVar1 = *(undefined4 *)(unaff_EBP + 8);
              *(undefined4 *)(extraout_ECX + 0x34) = *(undefined4 *)(unaff_EBP + -0x48);
              piVar2 = *(int **)(*(int *)(extraout_ECX + 0x1c) + 0x24);
              (**(code **)(*piVar2 + 200))(piVar2,0x99,uVar1);
              *(undefined4 *)(extraout_ECX + 0x38) = 1;
            }
          }
          else if (*(uint *)(extraout_ECX + 0x34) < 2) {
            iVar5 = -0x7789f4a9;
            goto LAB_00474ee0;
          }
          if ((*(int *)(unaff_EBP + -0x44) != 0) || (0xfffe0100 < *(uint *)(unaff_EBP + -0x2c))) {
            *(undefined4 *)(extraout_ECX + 0x3c) = 1;
          }
          iVar5 = 0;
        }
      }
      goto LAB_00474ee0;
    }
  }
  else {
    piVar2 = (int *)operator_new(iVar5 * 0xc + 4);
    *(int **)(unaff_EBP + 8) = piVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar5;
      _eh_vector_constructor_iterator_(piVar3,0xc,iVar5,ctor_0x47458e,FUN_0047459b);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(extraout_ECX + 4) = piVar3;
    if (piVar3 != (int *)0x0) goto LAB_00474dd1;
  }
  iVar5 = -0x7ff8fff2;
LAB_00474ee0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}



int __thiscall cls_0x474d61::meth_0x476fe7(cls_0x474d61 *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((uVar1 & 0x440) == 0) {
    this->mbr_0x1c = (dword)param_1;
    (**(code **)(*param_1 + 4))(param_1);
    iVar2 = meth_0x474d61(this);
  }
  else {
    iVar2 = -0x7789f794;
  }
  return iVar2;
}


