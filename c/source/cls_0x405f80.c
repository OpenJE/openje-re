#include "../include/cls_0x405f80.h"

void __thiscall
cls_0x405f80::meth_0x405f80
          (cls_0x405f80 *this,void *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
          int param_6)

{
  int iVar1;
  dword dVar2;
  dword dVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *local_14;
  undefined4 local_10 [3];
  
  dVar2 = this->mbr_0x0;
  dVar3 = this->mbr_0x4;
  piVar8 = *(int **)(param_2 + 4);
  if (piVar8 != *(int **)(param_2 + 8)) {
    do {
      iVar5 = *piVar8;
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 8);
        iVar5 = (*(int *)(iVar5 + 4) - param_3) + param_5;
        if ((((-1 < param_6) && (param_6 < (int)dVar3)) && (iVar5 < (int)dVar2)) &&
           (iVar1 = iVar6 + iVar5, 0 < iVar1)) {
          if (iVar5 < 0) {
            iVar5 = 0;
            iVar6 = iVar1;
          }
          else if ((int)dVar2 <= iVar1) {
            iVar6 = dVar2 - iVar5;
          }
          iVar6 = iVar6 + iVar5;
          for (; iVar5 < iVar6; iVar5 = *(int *)(iVar5 + 0x10) + *(int *)(iVar5 + 0xc)) {
            iVar5 = meth_0x560b20(this,iVar5,param_6);
            puVar4 = *(undefined4 **)(iVar5 + 4);
            if (puVar4 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = (undefined4 *)*puVar4;
            }
            if (puVar7 != puVar4) {
              do {
                local_14 = (int *)puVar7[2];
                GUI::Interface::meth_0x405ec0((Interface *)param_1,local_10,&local_14);
                puVar7 = (undefined4 *)*puVar7;
              } while (puVar7 != *(undefined4 **)(iVar5 + 4));
            }
          }
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != *(int **)(param_2 + 8));
  }
  return;
}



int __thiscall cls_0x405f80::meth_0x560b20(cls_0x405f80 *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(this->mbr_0xc + param_2 * 0xc + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  iVar2 = 0;
  if (puVar3 != puVar1) {
    while( true ) {
      iVar2 = puVar3[2];
      if ((*(int *)(iVar2 + 0xc) <= param_1) &&
         (param_1 <= *(int *)(iVar2 + 0xc) + -1 + *(int *)(iVar2 + 0x10))) break;
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3 == puVar1) {
        return 0;
      }
    }
  }
  return iVar2;
}



void __thiscall
cls_0x405f80::meth_0x561a90
          (cls_0x405f80 *this,void *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined local_21;
  dword local_20;
  int *local_1c;
  dword local_18;
  cls_0x405f80 *local_14;
  undefined4 local_10 [3];
  
  local_20 = this->mbr_0x0;
  local_18 = this->mbr_0x4;
  local_1c = *(int **)(param_2 + 4);
  local_14 = this;
  if (local_1c != *(int **)(param_2 + 8)) {
    do {
      iVar3 = *local_1c;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
        iVar3 = (*(int *)(iVar3 + 4) - param_3) + param_5;
        if ((((-1 < param_6) && (param_6 < (int)local_18)) && (iVar3 < (int)local_20)) &&
           (iVar1 = iVar4 + iVar3, 0 < iVar1)) {
          if (iVar3 < 0) {
            iVar3 = 0;
            iVar4 = iVar1;
          }
          else if ((int)local_20 <= iVar1) {
            iVar4 = local_20 - iVar3;
          }
          iVar4 = iVar4 + iVar3;
          for (; iVar3 < iVar4; iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 0xc)) {
            iVar3 = meth_0x560b20(local_14,iVar3,param_6);
            puVar2 = *(undefined4 **)(iVar3 + 4);
            if (puVar2 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar5 = (undefined4 *)*puVar2;
            }
            if (puVar5 != puVar2) {
              do {
                local_21 = *(undefined *)(puVar5 + 2);
                cls_0x560510::meth_0x561900((cls_0x560510 *)param_1,local_10,(int *)&local_21);
                puVar5 = (undefined4 *)*puVar5;
              } while (puVar5 != *(undefined4 **)(iVar3 + 4));
            }
          }
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c != *(int **)(param_2 + 8));
  }
  return;
}


