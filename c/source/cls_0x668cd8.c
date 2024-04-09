#include "../include/cls_0x668cd8.h"

cls_0x668cd8 * __thiscall cls_0x668cd8::~cls_0x668cd8(cls_0x668cd8 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x20;
  this->vftptr_0x0 = &cls_0x668cd8__vftable_668cd8_00668cd8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x20 = 0;
  }
  piVar1 = (int *)this->mbr_0x24;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x24 = 0;
  }
  piVar1 = (int *)this->mbr_0x28;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x28 = 0;
  }
  piVar1 = (int *)this->mbr_0x3c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x3c = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x44);
}



void __thiscall cls_0x668cd8::meth_0x474cfb(cls_0x668cd8 *this,undefined4 param_1,uint param_2)

{
  (**(code **)(*(int *)this->mbr_0x28 + 0x2c))((int *)this->mbr_0x28,0,0,param_1,param_2 | 0x800);
  return;
}



undefined4 __thiscall
cls_0x668cd8::meth_0x47527b(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  uVar3 = 0;
  uVar1 = 0;
  if (this->mbr_0x30 != 0) {
    do {
      *(undefined4 *)(param_3 + uVar1 * 4) = 0xffffffff;
      uVar1 = uVar1 + 1;
    } while (uVar1 < this->mbr_0x30);
  }
  uVar1 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      *(uint *)(param_2 + uVar1 * 4) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < this->mbr_0x58);
  }
  local_c = 0;
  if (this->mbr_0x58 != 0) {
    local_8 = 0;
    do {
      piVar2 = (int *)(this->mbr_0x40 + local_8);
      if (*piVar2 == -1) {
        *(undefined4 *)(param_1 + uVar3 * 4) = 0xffffffff;
      }
      else {
        *(uint *)(param_1 + uVar3 * 4) = local_c;
        *(uint *)(param_2 + local_c * 4) = uVar3;
        local_c = local_c + 1;
        *(undefined4 *)(param_3 + *piVar2 * 4) = 1;
        *(undefined4 *)(param_3 + piVar2[1] * 4) = 1;
        *(undefined4 *)(param_3 + piVar2[2] * 4) = 1;
      }
      local_8 = local_8 + 0xc;
      uVar3 = uVar3 + 1;
    } while (uVar3 < this->mbr_0x58);
  }
  iVar4 = 0;
  for (; local_c < this->mbr_0x58; local_c = local_c + 1) {
    *(undefined4 *)(param_2 + local_c * 4) = 0xffffffff;
  }
  uVar1 = 0;
  if (this->mbr_0x30 != 0) {
    do {
      if (*(int *)(param_3 + uVar1 * 4) != -1) {
        *(int *)(param_3 + uVar1 * 4) = iVar4;
        iVar4 = iVar4 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < this->mbr_0x30);
  }
  return 0;
}



undefined4 __thiscall cls_0x668cd8::meth_0x475333(cls_0x668cd8 *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  dword dVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  uVar4 = 0;
  if (this->mbr_0x30 != 0) {
    do {
      *(undefined4 *)(param_2 + uVar4 * 4) = 0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 < this->mbr_0x30);
  }
  local_8 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      if (iVar2 != -1) {
        dVar3 = this->mbr_0x40;
        uVar4 = 0;
        do {
          piVar1 = (int *)(param_2 + *(int *)(dVar3 + iVar2 * 0xc + uVar4 * 4) * 4);
          if (*piVar1 == -1) {
            *piVar1 = local_8;
            local_8 = local_8 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < this->mbr_0x58);
  }
  return 0;
}



void __thiscall cls_0x668cd8::meth_0x475399(cls_0x668cd8 *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_20;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  if (this->mbr_0x58 == 0) {
    *param_2 = 0;
    *param_1 = 0;
  }
  else {
    local_10 = (undefined4 *)operator_new(0x28);
    if (local_10 != (undefined4 *)0x0) {
      local_20 = 0;
      local_14 = 0;
      if (this->mbr_0x58 != 0) {
        local_8 = 0;
        local_18 = 0;
        do {
          if ((*(int *)(local_18 + this->mbr_0x40) != -1) &&
             ((iVar3 = *(int *)(this->mbr_0x48 + local_14 * 4), iVar3 != local_20 || (local_8 == 0))
             )) {
            uVar1 = 0;
            if (local_8 != 0) {
              do {
                if (local_10[uVar1] == iVar3) break;
                uVar1 = uVar1 + 1;
              } while (uVar1 < local_c);
            }
            local_20 = iVar3;
            if (uVar1 == local_c) {
              if (local_c == 10) {
                puVar2 = (undefined4 *)operator_new(0x50);
                if (puVar2 != (undefined4 *)0x0) {
                  puVar4 = local_10;
                  for (local_8 = local_8 >> 2; local_8 != 0; local_8 = local_8 - 1) {
                    *puVar2 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar2 = puVar2 + 1;
                  }
                  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *(undefined *)puVar2 = *(undefined *)puVar4;
                    puVar4 = (undefined4 *)((int)puVar4 + 1);
                    puVar2 = (undefined4 *)((int)puVar2 + 1);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_10);
                }
                goto LAB_004754b5;
              }
              local_c = local_c + 1;
              *(int *)(local_8 + (int)local_10) = iVar3;
              local_8 = local_8 + 4;
            }
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0xc;
        } while (local_14 < this->mbr_0x58);
      }
      *param_1 = local_10;
      *param_2 = local_c;
      local_10 = (undefined4 *)0x0;
    }
  }
LAB_004754b5:
                    /* WARNING: Subroutine does not return */
  _free(local_10);
}



undefined4 __thiscall
cls_0x668cd8::meth_0x4754c7(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (this->mbr_0x30 != 0) {
    uVar4 = 0;
    do {
      uVar7 = uVar7 + 1;
      *(undefined4 *)(param_3 + uVar4 * 4) = 0xffff;
      uVar4 = uVar7 & 0xffff;
    } while (uVar4 < this->mbr_0x30);
  }
  uVar7 = 0;
  if (this->mbr_0x58 != 0) {
    uVar4 = 0;
    do {
      uVar7 = uVar7 + 1;
      *(uint *)(param_2 + uVar4 * 4) = uVar4;
      uVar4 = uVar7 & 0xffff;
    } while (uVar4 < this->mbr_0x58);
  }
  uVar6 = 0;
  uVar3 = 0;
  if (this->mbr_0x58 != 0) {
    uVar7 = 0;
    do {
      puVar1 = (ushort *)(this->mbr_0x40 + uVar7 * 6);
      if (*puVar1 == 0xffff) {
        *(undefined4 *)(param_1 + uVar7 * 4) = 0xffff;
      }
      else {
        uVar4 = (uint)uVar6;
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + uVar7 * 4) = uVar4;
        *(uint *)(param_2 + uVar4 * 4) = uVar7;
        *(undefined4 *)(param_3 + (uint)*puVar1 * 4) = 1;
        *(undefined4 *)(param_3 + (uint)puVar1[1] * 4) = 1;
        *(undefined4 *)(param_3 + (uint)puVar1[2] * 4) = 1;
      }
      uVar3 = uVar3 + 1;
      uVar7 = (uint)uVar3;
    } while (uVar7 < this->mbr_0x58);
  }
  uVar7 = 0;
  for (; (uint)uVar6 < this->mbr_0x58; uVar6 = uVar6 + 1) {
    *(undefined4 *)(param_2 + (uint)uVar6 * 4) = 0xffff;
  }
  uVar4 = 0;
  if (this->mbr_0x30 != 0) {
    uVar5 = 0;
    do {
      puVar2 = (uint *)(param_3 + uVar5 * 4);
      if (*puVar2 != 0xffff) {
        *puVar2 = uVar7 & 0xffff;
        uVar7 = uVar7 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar4 & 0xffff;
    } while (uVar5 < this->mbr_0x30);
  }
  return 0;
}



undefined4 __thiscall cls_0x668cd8::meth_0x4755ad(cls_0x668cd8 *this,int param_1,int param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int local_c;
  
  iVar4 = param_2;
  uVar6 = 0;
  if (this->mbr_0x30 != 0) {
    uVar5 = 0;
    do {
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_2 + uVar5 * 4) = 0xffff;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < this->mbr_0x30);
  }
  param_2 = 0;
  uVar2 = 0;
  if (this->mbr_0x58 != 0) {
    uVar6 = 0;
    do {
      uVar3 = *(ushort *)(param_1 + uVar6 * 4);
      if (uVar3 != 0xffff) {
        puVar7 = (ushort *)(this->mbr_0x40 + (uint)uVar3 * 6);
        local_c = 3;
        do {
          puVar1 = (uint *)(iVar4 + (uint)*puVar7 * 4);
          if (*puVar1 == 0xffff) {
            uVar6 = param_2 & 0xffff;
            param_2 = param_2 + 1;
            *puVar1 = uVar6;
          }
          puVar7 = puVar7 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      uVar2 = uVar2 + 1;
      uVar6 = (uint)uVar2;
    } while (uVar6 < this->mbr_0x58);
  }
  return 0;
}



void __thiscall cls_0x668cd8::meth_0x47562f(cls_0x668cd8 *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_20;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  if (this->mbr_0x58 == 0) {
    *param_2 = 0;
    *param_1 = 0;
  }
  else {
    local_10 = (undefined4 *)operator_new(0x28);
    if (local_10 != (undefined4 *)0x0) {
      local_20 = 0;
      local_14 = 0;
      if (this->mbr_0x58 != 0) {
        local_8 = 0;
        local_18 = 0;
        do {
          if ((*(short *)(local_18 + this->mbr_0x40) != -1) &&
             ((iVar3 = *(int *)(this->mbr_0x48 + local_14 * 4), iVar3 != local_20 || (local_8 == 0))
             )) {
            uVar1 = 0;
            if (local_8 != 0) {
              do {
                if (local_10[uVar1] == iVar3) break;
                uVar1 = uVar1 + 1;
              } while (uVar1 < local_c);
            }
            local_20 = iVar3;
            if (uVar1 == local_c) {
              if (local_c == 10) {
                puVar2 = (undefined4 *)operator_new(0x50);
                if (puVar2 != (undefined4 *)0x0) {
                  puVar4 = local_10;
                  for (local_8 = local_8 >> 2; local_8 != 0; local_8 = local_8 - 1) {
                    *puVar2 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar2 = puVar2 + 1;
                  }
                  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *(undefined *)puVar2 = *(undefined *)puVar4;
                    puVar4 = (undefined4 *)((int)puVar4 + 1);
                    puVar2 = (undefined4 *)((int)puVar2 + 1);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_10);
                }
                goto LAB_0047574d;
              }
              local_c = local_c + 1;
              *(int *)(local_8 + (int)local_10) = iVar3;
              local_8 = local_8 + 4;
            }
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 6;
        } while (local_14 < this->mbr_0x58);
      }
      *param_1 = local_10;
      *param_2 = local_c;
      local_10 = (undefined4 *)0x0;
    }
  }
LAB_0047574d:
                    /* WARNING: Subroutine does not return */
  _free(local_10);
}



void __thiscall cls_0x668cd8::meth_0x475800(cls_0x668cd8 *this,int param_1,int param_2)

{
  int *piVar1;
  
  if ((*(byte *)&this->mbr_0xc & 2) != 0) {
    piVar1 = (int *)(this->mbr_0x38 + param_1 * 4);
    *piVar1 = *(int *)(param_2 + *piVar1 * 4);
  }
  return;
}



void __thiscall cls_0x668cd8::meth_0x47581e(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)(this->mbr_0x40 + param_1 * 0xc);
  piVar3 = (int *)(this->mbr_0x44 + param_1 * 0xc);
  if (*piVar1 != -1) {
    iVar2 = (int)piVar1 - (int)piVar3;
    iVar4 = 3;
    do {
      *(undefined4 *)(iVar2 + (int)piVar3) =
           *(undefined4 *)(param_2 + *(int *)(iVar2 + (int)piVar3) * 4);
      if ((*(byte *)&this->mbr_0xc & 1) != 0) {
        if (*piVar3 == -1) {
          *piVar3 = -1;
        }
        else {
          *piVar3 = *(int *)(param_3 + *piVar3 * 4);
        }
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall cls_0x668cd8::meth_0x475875(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = this->mbr_0x2c;
  iVar2 = -(uVar5 + 3 & 0xfffffffc);
  puVar6 = (undefined4 *)(uVar5 * param_2 + param_3);
  puVar3 = (undefined4 *)(uVar5 * param_1 + param_3);
  puVar7 = puVar6;
  puVar8 = (undefined4 *)(&stack0xffffffec + iVar2);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar8 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  uVar5 = this->mbr_0x2c;
  puVar7 = puVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar6 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  uVar5 = this->mbr_0x2c;
  puVar7 = (undefined4 *)(&stack0xffffffec + iVar2);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined *)puVar3 = *(undefined *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  if ((*(byte *)&this->mbr_0xc & 2) != 0) {
    puVar7 = (undefined4 *)(this->mbr_0x38 + param_2 * 4);
    uVar1 = *puVar7;
    *puVar7 = *(undefined4 *)(param_1 * 4 + this->mbr_0x38);
    *(undefined4 *)(param_1 * 4 + this->mbr_0x38) = uVar1;
  }
  return;
}



void __thiscall cls_0x668cd8::meth_0x47590f(cls_0x668cd8 *this,int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_8;
  
  puVar8 = (undefined4 *)(this->mbr_0x40 + param_1 * 0xc);
  iVar4 = (this->mbr_0x40 + param_2 * 0xc) - (int)puVar8;
  iVar5 = (this->mbr_0x44 + param_2 * 0xc) - (int)puVar8;
  iVar6 = (param_1 * 0xc + this->mbr_0x44) - (int)puVar8;
  local_8 = 3;
  do {
    puVar7 = (undefined4 *)(iVar4 + (int)puVar8);
    uVar3 = *puVar7;
    *puVar7 = *puVar8;
    *puVar8 = uVar3;
    if ((*(byte *)&this->mbr_0xc & 1) != 0) {
      puVar7 = (undefined4 *)(iVar5 + (int)puVar8);
      uVar3 = *puVar7;
      *puVar7 = *(undefined4 *)(iVar6 + (int)puVar8);
      *(undefined4 *)(iVar6 + (int)puVar8) = uVar3;
    }
    puVar8 = puVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((*(byte *)&this->mbr_0xc & 4) != 0) {
    puVar8 = (undefined4 *)(this->mbr_0x48 + param_2 * 4);
    uVar3 = *puVar8;
    *puVar8 = *(undefined4 *)(this->mbr_0x48 + param_1 * 4);
    *(undefined4 *)(this->mbr_0x48 + param_1 * 4) = uVar3;
  }
  if ((*(byte *)&this->mbr_0xc & 8) != 0) {
    puVar1 = (undefined2 *)(this->mbr_0x4c + param_2 * 2);
    uVar2 = *puVar1;
    *puVar1 = *(undefined2 *)(param_1 * 2 + this->mbr_0x4c);
    *(undefined2 *)(param_1 * 2 + this->mbr_0x4c) = uVar2;
  }
  return;
}



void __thiscall cls_0x668cd8::meth_0x475ab8(cls_0x668cd8 *this,int param_1,int param_2)

{
  ushort *puVar1;
  
  if ((*(byte *)&this->mbr_0xc & 2) != 0) {
    puVar1 = (ushort *)(this->mbr_0x38 + param_1 * 2);
    *puVar1 = *(ushort *)(param_2 + (uint)*puVar1 * 4);
  }
  return;
}



void __thiscall cls_0x668cd8::meth_0x475ad9(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  psVar1 = (short *)(this->mbr_0x40 + param_1 * 6);
  puVar3 = (ushort *)(this->mbr_0x44 + param_1 * 6);
  if (*psVar1 != -1) {
    iVar2 = (int)psVar1 - (int)puVar3;
    iVar4 = 3;
    do {
      *(undefined2 *)(iVar2 + (int)puVar3) =
           *(undefined2 *)(param_2 + (uint)*(ushort *)(iVar2 + (int)puVar3) * 4);
      if ((*(byte *)&this->mbr_0xc & 1) != 0) {
        if (*puVar3 == 0xffff) {
          *puVar3 = 0xffff;
        }
        else {
          *puVar3 = *(ushort *)(param_3 + (uint)*puVar3 * 4);
        }
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall cls_0x668cd8::meth_0x475b3d(cls_0x668cd8 *this,int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar6 = this->mbr_0x2c;
  iVar3 = -(uVar6 + 3 & 0xfffffffc);
  puVar7 = (undefined4 *)(uVar6 * param_2 + param_3);
  puVar4 = (undefined4 *)(uVar6 * param_1 + param_3);
  puVar8 = puVar7;
  puVar9 = (undefined4 *)(&stack0xffffffec + iVar3);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar9 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  uVar6 = this->mbr_0x2c;
  puVar8 = puVar4;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar7 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  uVar6 = this->mbr_0x2c;
  puVar8 = (undefined4 *)(&stack0xffffffec + iVar3);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar4 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if ((*(byte *)&this->mbr_0xc & 2) != 0) {
    puVar1 = (undefined2 *)(this->mbr_0x38 + param_2 * 2);
    uVar2 = *puVar1;
    *puVar1 = *(undefined2 *)(param_1 * 2 + this->mbr_0x38);
    *(undefined2 *)(param_1 * 2 + this->mbr_0x38) = uVar2;
  }
  return;
}



void __thiscall cls_0x668cd8::meth_0x475bda(cls_0x668cd8 *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int local_8;
  
  puVar8 = (undefined2 *)(this->mbr_0x40 + param_1 * 6);
  iVar4 = (this->mbr_0x40 + param_2 * 6) - (int)puVar8;
  iVar5 = (this->mbr_0x44 + param_2 * 6) - (int)puVar8;
  iVar6 = (param_1 * 6 + this->mbr_0x44) - (int)puVar8;
  local_8 = 3;
  do {
    puVar7 = (undefined2 *)(iVar4 + (int)puVar8);
    uVar2 = *puVar7;
    *puVar7 = *puVar8;
    *puVar8 = uVar2;
    if ((*(byte *)&this->mbr_0xc & 1) != 0) {
      puVar7 = (undefined2 *)(iVar5 + (int)puVar8);
      uVar2 = *puVar7;
      *puVar7 = *(undefined2 *)(iVar6 + (int)puVar8);
      *(undefined2 *)(iVar6 + (int)puVar8) = uVar2;
    }
    puVar8 = puVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((*(byte *)&this->mbr_0xc & 4) != 0) {
    puVar1 = (undefined4 *)(this->mbr_0x48 + param_2 * 4);
    uVar3 = *puVar1;
    *puVar1 = *(undefined4 *)(this->mbr_0x48 + param_1 * 4);
    *(undefined4 *)(this->mbr_0x48 + param_1 * 4) = uVar3;
  }
  if ((*(byte *)&this->mbr_0xc & 8) != 0) {
    puVar8 = (undefined2 *)(this->mbr_0x4c + param_2 * 2);
    uVar2 = *puVar8;
    *puVar8 = *(undefined2 *)(param_1 * 2 + this->mbr_0x4c);
    *(undefined2 *)(param_1 * 2 + this->mbr_0x4c) = uVar2;
  }
  return;
}



undefined4 __thiscall cls_0x668cd8::virt_meth_0x4782f4(cls_0x668cd8 *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint in_stack_00000008;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x130))
            (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14c))
            (*(int **)(param_1 + 0x24),0,*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c));
  (**(code **)(**(int **)(param_1 + 0x24) + 0x154))
            (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x3c),0);
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    iVar4 = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x58) == 0) {
      return 0;
    }
    param_1 = 0;
    do {
      if (*(uint *)(*(int *)(uVar2 + 0x48) + uVar3 * 4) == in_stack_00000008) {
        iVar4 = iVar4 + 1;
      }
      else {
        if (iVar4 != 0) {
          (**(code **)(**(int **)(uVar2 + 0x24) + 0x11c))
                    (*(int **)(uVar2 + 0x24),4,0,*(undefined4 *)(uVar2 + 0x30),param_1 + iVar4 * -3,
                     iVar4);
        }
        iVar4 = 0;
      }
      param_1 = param_1 + 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(uVar2 + 0x58));
    if (iVar4 == 0) {
      return 0;
    }
    piVar8 = *(int **)(uVar2 + 0x24);
    iVar6 = *piVar8;
    iVar7 = uVar3 * 3 + iVar4 * -3;
    uVar10 = *(undefined4 *)(uVar2 + 0x30);
    uVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x54);
    if (((uVar2 <= in_stack_00000008) ||
        (uVar3 = in_stack_00000008,
        *(uint *)(*(int *)(param_1 + 0x50) + in_stack_00000008 * 0x14) != in_stack_00000008)) &&
       (uVar3 = 0, uVar2 != 0)) {
      puVar5 = *(uint **)(param_1 + 0x50);
      do {
        if (*puVar5 == in_stack_00000008) break;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 5;
      } while (uVar3 < uVar2);
    }
    if (uVar2 <= uVar3) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x50) + uVar3 * 0x14;
    iVar4 = *(int *)(iVar1 + 8);
    if (iVar4 == 0) {
      return 0;
    }
    piVar8 = *(int **)(param_1 + 0x24);
    iVar6 = *piVar8;
    iVar7 = *(int *)(iVar1 + 4) * 3;
    uVar10 = *(undefined4 *)(iVar1 + 0x10);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
  }
  (**(code **)(iVar6 + 0x11c))(piVar8,4,uVar9,uVar10,iVar7,iVar4);
  return 0;
}



void __thiscall cls_0x668cd8::virt_meth_0x47841a(cls_0x668cd8 *this,int param_1,undefined4 *param_2)

{
  uint **ppuVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  uint *puVar11;
  float10 *pfVar12;
  undefined4 *puVar13;
  undefined4 *in_stack_0000000c;
  undefined local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c [4];
  int local_4c;
  int local_48;
  uint *local_44;
  int local_40;
  void *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  int local_10;
  int local_c;
  float10 *local_8;
  
  iVar7 = *(int *)(param_1 + 0x58);
  iVar10 = iVar7 * 3;
  uVar4 = *(uint *)(param_1 + 0x30) / 3;
  local_10 = 0;
  local_38 = 0;
  local_24 = 0;
  local_8 = (float10 *)0x0;
  local_3c = (void *)0x0;
  local_4c = iVar10;
  local_30 = uVar4;
  if ((in_stack_0000000c == (undefined4 *)0x0) || ((*(byte *)(param_1 + 9) & 4) != 0)) {
    local_c = -0x7789f794;
  }
  else {
    local_8 = (float10 *)operator_new(uVar4 << 2);
    local_3c = operator_new(iVar7 * 0x3c);
    if ((local_8 == (float10 *)0x0) || (local_3c == (void *)0x0)) {
      local_c = -0x7ff8fff2;
    }
    else {
      local_c = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,&local_10,0x10);
      if (-1 < local_c) {
        local_c = meth_0x474cfb((cls_0x668cd8 *)param_1,&local_38,0x10);
        if (-1 < local_c) {
          pfVar12 = local_8;
          for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pfVar12 = 0;
            pfVar12 = (float10 *)((int)pfVar12 + 4);
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined *)pfVar12 = 0;
            pfVar12 = (float10 *)((int)pfVar12 + 1);
          }
          if (*(int *)(param_1 + 0x54) == 0) {
            local_6c = 0;
            local_64 = 0;
            local_2c = local_70;
            local_68 = *(undefined4 *)(param_1 + 0x58);
            local_28 = 1;
            local_60 = *(undefined4 *)(param_1 + 0x30);
          }
          else {
            local_28 = *(int *)(param_1 + 0x54);
            local_2c = *(undefined **)(param_1 + 0x50);
          }
          if (local_28 != 0) {
            local_44 = (uint *)(local_2c + 4);
            local_48 = local_28;
            do {
              local_14 = *local_44;
              local_20 = local_44[1] + local_14;
              if (local_14 < local_20) {
                local_40 = local_14 * 6;
                local_1c = (uint *)((int)local_3c + local_24 * 0x14);
                do {
                  puVar5 = (ushort *)(local_10 + local_40);
                  uVar2 = *puVar5;
                  if (uVar2 != 0xffff) {
                    if (param_2 == (undefined4 *)0x0) {
                      local_5c[2] = (uint)puVar5[2];
                      local_5c[0] = (uint)uVar2;
                      local_5c[1] = (uint)puVar5[1];
                    }
                    else {
                      local_5c[0] = param_2[uVar2];
                      local_5c[1] = param_2[puVar5[1]];
                      local_5c[2] = param_2[puVar5[2]];
                    }
                    if (((local_5c[0] != local_5c[1]) && (local_5c[0] != local_5c[2])) &&
                       (local_5c[1] != local_5c[2])) {
                      uVar4 = 2;
                      local_18 = local_1c;
                      local_24 = local_24 + 3;
                      local_1c = local_1c + 0xf;
                      puVar11 = local_5c;
                      local_34 = 3;
                      do {
                        puVar3 = local_18;
                        uVar8 = *puVar11;
                        local_5c[3] = uVar8 % local_30;
                        local_18[3] = local_14;
                        *local_18 = uVar8;
                        local_18 = local_18 + 5;
                        puVar11 = puVar11 + 1;
                        puVar3[1] = local_5c[(uVar4 - 1) % 3];
                        uVar8 = uVar4 % 3;
                        uVar4 = uVar4 + 1;
                        local_34 = local_34 + -1;
                        puVar3[2] = local_5c[uVar8];
                        ppuVar1 = (uint **)((int)local_8 + local_5c[3] * 4);
                        puVar3[4] = (uint)*ppuVar1;
                        *ppuVar1 = puVar3;
                      } while (local_34 != 0);
                    }
                  }
                  local_14 = local_14 + 1;
                  local_40 = local_40 + 6;
                  iVar10 = local_4c;
                } while (local_14 < local_20);
              }
              local_44 = local_44 + 5;
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
          puVar13 = in_stack_0000000c;
          for (uVar4 = *(int *)(param_1 + 0x58) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined *)puVar13 = 0xff;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          if (local_28 != 0) {
            local_44 = (uint *)(local_2c + 4);
            local_40 = local_28;
            do {
              uVar4 = *local_44;
              local_20 = local_44[1] + uVar4;
              if (uVar4 < local_44[1] + uVar4) {
                local_1c = in_stack_0000000c + uVar4 * 3;
                local_28 = uVar4 * 6;
                iVar7 = (int)local_5c + (uVar4 * -0xc - (int)in_stack_0000000c);
                local_34 = iVar7;
                do {
                  puVar5 = (ushort *)(local_10 + local_28);
                  uVar2 = *puVar5;
                  if (uVar2 != 0xffff) {
                    if (param_2 == (undefined4 *)0x0) {
                      local_5c[1] = (uint)puVar5[1];
                      local_5c[0] = (uint)uVar2;
                      local_5c[2] = (uint)puVar5[2];
                    }
                    else {
                      local_5c[0] = param_2[uVar2];
                      local_5c[1] = param_2[puVar5[1]];
                      local_5c[2] = param_2[puVar5[2]];
                    }
                    if (((local_5c[0] == local_5c[1]) || (local_5c[0] == local_5c[2])) ||
                       (local_5c[1] == local_5c[2])) {
                      *local_1c = 0xffffffff;
                      local_1c[1] = 0xffffffff;
                      local_1c[2] = 0xffffffff;
                    }
                    else {
                      local_18 = (uint *)0x1;
                      local_48 = 3;
                      puVar11 = local_1c;
                      local_34 = iVar7;
                      do {
                        if (*puVar11 == 0xffffffff) {
                          uVar8 = *(uint *)(iVar7 + (int)puVar11);
                          local_2c = (undefined *)local_5c[(uint)local_18 % 3];
                          uVar6 = FUN_00477a28((uint)(undefined *)local_5c[(uint)local_18 % 3],uVar8
                                               ,local_5c[(uint)((int)local_18 + 1) % 3],local_8,
                                               local_30,-1,local_38,*(int *)(param_1 + 0x2c));
                          *puVar11 = uVar6;
                          iVar7 = local_34;
                          if (uVar6 != 0xffffffff) {
                            FUN_004779da(uVar8,(uint)local_2c,uVar4,(int)local_8,local_30);
                            local_14 = 0;
                            puVar5 = (ushort *)(local_10 + *puVar11 * 6);
                            do {
                              puVar9 = (undefined *)(uint)*puVar5;
                              if (param_2 != (undefined4 *)0x0) {
                                puVar9 = (undefined *)param_2[(int)puVar9];
                              }
                              if (puVar9 == local_2c) break;
                              local_14 = local_14 + 1;
                              puVar5 = puVar5 + 1;
                            } while (local_14 < 3);
                            in_stack_0000000c[local_14 + *puVar11 * 3] = uVar4;
                            iVar7 = local_34;
                          }
                        }
                        local_18 = (uint *)((int)local_18 + 1);
                        puVar11 = puVar11 + 1;
                        local_48 = local_48 + -1;
                      } while (local_48 != 0);
                    }
                  }
                  local_1c = local_1c + 3;
                  uVar4 = uVar4 + 1;
                  local_28 = local_28 + 6;
                  iVar7 = iVar7 + -0xc;
                  local_34 = iVar7;
                  iVar10 = local_4c;
                } while (uVar4 < local_20);
              }
              local_44 = local_44 + 5;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          if (iVar10 < local_24) {
            local_c = -0x7fffbffb;
          }
        }
      }
    }
    if (local_10 != 0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
    }
    if (local_38 != 0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x30))(*(int **)(param_1 + 0x28));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}



int __thiscall cls_0x668cd8::meth_0x478854(cls_0x668cd8 *this,uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined local_540 [1032];
  int local_138;
  uint local_134;
  undefined local_114 [4];
  undefined4 local_110;
  dword local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  dword local_28;
  dword local_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_3c = this->mbr_0x5c;
  local_40 = this->mbr_0x34;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_20 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_1c = (int *)0x0;
  local_38 = local_3c;
  local_34 = local_3c;
  if ((0xfffe < param_1) || (0xfffe < param_2)) {
    iVar2 = -0x7789f794;
    goto LAB_00478cb2;
  }
  if (local_3c < param_1) {
    iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x60))
                      ((int *)this->mbr_0x24,param_1 * 6,this->mbr_0x18,0x65,this->mbr_0x10,&local_c
                      );
    if (iVar2 < 0) goto LAB_00478cb2;
    if (this->mbr_0x58 != 0) {
      iVar2 = (**(code **)(*(int *)this->mbr_0x3c + 0x2c))
                        ((int *)this->mbr_0x3c,0,0,&local_20,0x800);
      if ((iVar2 < 0) ||
         (iVar2 = (**(code **)(*local_c + 0x2c))(local_c,0,0,&local_10,0x800), iVar2 < 0))
      goto LAB_00478cb2;
      uVar4 = this->mbr_0x58 * 6;
      puVar6 = local_20;
      puVar7 = local_10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      uVar4 = (param_1 - this->mbr_0x58) * 6;
      puVar6 = (undefined4 *)((int)local_10 + this->mbr_0x58 * 6);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar2 = (**(code **)(*local_c + 0x30))(local_c);
      if (iVar2 < 0) goto LAB_00478cb2;
      local_10 = (undefined4 *)0x0;
      iVar2 = (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
      if (iVar2 < 0) goto LAB_00478cb2;
      local_20 = (undefined4 *)0x0;
    }
    piVar1 = (int *)this->mbr_0x3c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      this->mbr_0x3c = 0;
    }
    piVar1 = local_c;
    local_c = (int *)0x0;
    this->mbr_0x3c = (dword)piVar1;
    this->mbr_0x5c = param_1;
    if (((*(byte *)&this->mbr_0xc & 1) == 0) || (iVar2 = FUN_0047516d(), iVar2 != 0)) {
      if ((*(byte *)&this->mbr_0xc & 4) != 0) {
        iVar2 = FUN_00475046((void **)&this->mbr_0x48,param_1,this->mbr_0x58,&local_38);
        if (iVar2 == 0) goto LAB_004789c6;
        puVar6 = (undefined4 *)(this->mbr_0x48 + this->mbr_0x58 * 4);
        for (uVar5 = param_1 - this->mbr_0x58 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      if (((*(byte *)&this->mbr_0xc & 8) == 0) ||
         (iVar2 = FUN_004750d0((void **)&this->mbr_0x4c,param_1,this->mbr_0x58,&local_34),
         iVar2 != 0)) goto LAB_00478a2b;
    }
LAB_004789c6:
    iVar2 = -0x7ff8fff2;
  }
  else {
LAB_00478a2b:
    if (this->mbr_0x34 < param_2) {
      if (((*(byte *)&this->mbr_0xc & 2) != 0) &&
         (iVar2 = FUN_004750d0((void **)&this->mbr_0x38,param_2,this->mbr_0x30,&local_40),
         iVar2 == 0)) goto LAB_004789c6;
      if ((*(byte *)&this->mbr_0xc & 0x20) == 0) {
        iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x5c))
                          ((int *)this->mbr_0x24,this->mbr_0x2c * param_2,this->mbr_0x1c,
                           this->mbr_0x4,this->mbr_0x14,&local_8);
        if (iVar2 < 0) goto LAB_00478cb2;
        if (this->mbr_0x30 != 0) {
          iVar2 = (**(code **)(*(int *)this->mbr_0x28 + 0x2c))
                            ((int *)this->mbr_0x28,0,0,&local_18,0x800);
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(*local_8 + 0x2c))(local_8,0,0,&local_14,0x800), iVar2 < 0))
          goto LAB_00478cb2;
          uVar4 = this->mbr_0x30 * this->mbr_0x2c;
          puVar6 = local_18;
          puVar7 = local_14;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined *)puVar7 = *(undefined *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          uVar4 = (param_2 - this->mbr_0x30) * this->mbr_0x2c;
          puVar6 = (undefined4 *)(this->mbr_0x2c * this->mbr_0x30 + (int)local_14);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          iVar2 = (**(code **)(*local_8 + 0x30))(local_8);
          if (iVar2 < 0) goto LAB_00478cb2;
          local_14 = (undefined4 *)0x0;
          iVar2 = (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
          if (iVar2 < 0) goto LAB_00478cb2;
          local_18 = (undefined4 *)0x0;
        }
        piVar1 = (int *)this->mbr_0x28;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          this->mbr_0x28 = 0;
        }
        this->mbr_0x28 = (dword)local_8;
        local_8 = (int *)0x0;
        this->mbr_0x34 = param_2;
      }
    }
    this->mbr_0x30 = param_2;
    this->mbr_0x58 = param_1;
    iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x1c))((int *)this->mbr_0x24,local_114);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x18))((int *)this->mbr_0x24,&local_1c),
        -1 < iVar2)) &&
       (iVar2 = (**(code **)(*local_1c + 0x14))(local_1c,local_110,2,local_540), -1 < iVar2)) {
      if (((local_138 == 0x1002) && (0x5143 < local_134)) && (local_134 < 0x5148)) {
        *(byte *)&this->mbr_0xc = *(byte *)&this->mbr_0xc | 0x80;
      }
      if ((*(byte *)&this->mbr_0xc & 0x80) == 0) {
        bVar8 = DAT_00707c28 != this->mbr_0x24;
        this->mbr_0x68 = DAT_00707c2c;
        this->mbr_0x6c = DAT_00707c30;
        if (bVar8) {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          FUN_00482400(1);
          iVar3 = (**(code **)(*(int *)this->mbr_0x24 + 0x104))
                            ((int *)this->mbr_0x24,4,&local_30,0x10);
          iVar2 = 0;
          FUN_00482400(0);
          if (((iVar3 < 0) || (iVar3 == 1)) || (local_30 != 0x48434143)) {
            local_2c = 1;
            local_28 = 0xc;
            local_24 = 7;
          }
          if (local_2c == 0) {
            local_28 = 0;
            local_24 = 0;
          }
          if (this->mbr_0x68 < this->mbr_0x6c) {
            this->mbr_0x6c = this->mbr_0x68;
          }
          DAT_00707c28 = this->mbr_0x24;
          DAT_00707c2c = local_28;
          DAT_00707c30 = local_24;
          this->mbr_0x68 = local_28;
          this->mbr_0x6c = local_24;
        }
      }
      else {
        this->mbr_0x68 = 0;
        this->mbr_0x6c = 0;
      }
    }
  }
LAB_00478cb2:
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
    local_1c = (int *)0x0;
  }
  if (local_10 != (undefined4 *)0x0) {
    (**(code **)(*local_c + 0x30))(local_c);
  }
  if (local_20 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)(*local_8 + 0x30))(local_8);
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
  }
  return iVar2;
}



undefined __thiscall cls_0x668cd8::virt_meth_0x478d08(cls_0x668cd8 *this,int param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  dword dVar5;
  dword dVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  short *psVar15;
  uint local_18;
  ushort *local_10;
  dword local_c;
  undefined local_5;
  
  local_5 = 0;
  dVar5 = param_1;
  dVar6 = param_1;
  if (((param_1 != 0) || (dVar5 = this->mbr_0x40, dVar6 = dVar5, dVar5 != 0)) ||
     (iVar7 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this,&local_c,0x10), dVar5 = param_1,
     dVar6 = local_c, -1 < iVar7)) {
    local_c = dVar6;
    param_1 = dVar5;
    local_18 = 0;
    if (this->mbr_0x58 != 0) {
      puVar13 = (ushort *)this->mbr_0x44;
      psVar15 = (short *)(local_c + 2);
      iVar7 = (int)puVar13 - local_c;
      do {
        if (psVar15[-1] == -1) {
          if (((*psVar15 != -1) || (psVar15[1] != -1)) ||
             (((*(byte *)&this->mbr_0xc & 1) != 0 &&
              (((*puVar13 != 0xffff || (*(short *)(iVar7 + (int)psVar15) != -1)) ||
               (puVar13[2] != 0xffff)))))) goto LAB_00478ef6;
        }
        else if ((*(byte *)&this->mbr_0xc & 1) != 0) {
          uVar8 = 0;
          local_10 = puVar13;
          do {
            uVar12 = (uint)*(ushort *)(((int)(psVar15 + -1) - (int)puVar13) + (int)local_10);
            uVar8 = uVar8 + 1;
            uVar14 = (uint)(ushort)psVar15[uVar8 % 3 - 1];
            if ((this->mbr_0x30 <= uVar12) || (this->mbr_0x30 <= uVar14)) goto LAB_00478ef6;
            uVar2 = *local_10;
            if (uVar2 != 0xffff) {
              if (this->mbr_0x58 <= (uint)uVar2) goto LAB_00478ef6;
              iVar9 = (uint)uVar2 * 6;
              iVar1 = iVar9 + local_c;
              uVar10 = FUN_00475263(iVar9 + this->mbr_0x44,(short)local_18);
              if (2 < uVar10) goto LAB_00478ef6;
              if ((*(byte *)&this->mbr_0xc & 2) != 0) {
                dVar5 = this->mbr_0x38;
                sVar3 = *(short *)(dVar5 + (uint)*(ushort *)(iVar1 + uVar10 * 2) * 2);
                uVar10 = (uint)*(ushort *)(iVar1 + ((uVar10 + 1) % 3) * 2);
                sVar4 = *(short *)(dVar5 + uVar12 * 2);
                if (((sVar4 != sVar3) ||
                    (*(short *)(dVar5 + uVar14 * 2) != *(short *)(dVar5 + uVar10 * 2))) &&
                   ((*(short *)(dVar5 + uVar14 * 2) != sVar3 ||
                    (sVar4 != *(short *)(dVar5 + uVar10 * 2))))) goto LAB_00478ef6;
              }
            }
            local_10 = local_10 + 1;
          } while (uVar8 < 3);
        }
        local_18 = local_18 + 1;
        psVar15 = psVar15 + 3;
        puVar13 = puVar13 + 3;
      } while (local_18 < this->mbr_0x58);
    }
    if ((((*(byte *)&this->mbr_0xc & 0x10) == 0) || (this->mbr_0x50 == 0)) ||
       (uVar11 = cls_0x474d1a::meth_0x478f13((cls_0x474d1a *)this), (char)uVar11 != '\0')) {
      local_5 = 1;
    }
  }
LAB_00478ef6:
  if ((local_c != 0) && (param_1 == 0)) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  return local_5;
}



void __thiscall cls_0x668cd8::meth_0x47923e(cls_0x668cd8 *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this,&local_18,0);
  if ((-1 < local_8) &&
     (local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,&local_14,0x10), -1 < local_8))
  {
    uVar1 = this->mbr_0x58 * 6;
    puVar6 = local_14;
    puVar8 = local_18;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)puVar8 = *(undefined *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (((*(byte *)&this->mbr_0xc & 1) != 0) && ((*(byte *)((int)param_1 + 0xc) & 1) != 0)) {
      uVar1 = this->mbr_0x58 * 6;
      puVar6 = *(undefined4 **)((int)param_1 + 0x44);
      puVar8 = (undefined4 *)this->mbr_0x44;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if (((*(byte *)&this->mbr_0xc & 4) != 0) && ((*(byte *)((int)param_1 + 0xc) & 4) != 0)) {
      puVar6 = *(undefined4 **)((int)param_1 + 0x48);
      puVar8 = (undefined4 *)this->mbr_0x48;
      for (uVar2 = this->mbr_0x58 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if (((*(byte *)&this->mbr_0xc & 8) != 0) && ((*(byte *)((int)param_1 + 0xc) & 8) != 0)) {
      uVar1 = this->mbr_0x58 << 1;
      puVar6 = *(undefined4 **)((int)param_1 + 0x4c);
      puVar8 = (undefined4 *)this->mbr_0x4c;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if ((*(byte *)((int)param_1 + 0xc) & 0x10) != 0) {
      if (((*(byte *)&this->mbr_0xc & 0x10) == 0) ||
         (this->mbr_0x54 != *(dword *)((int)param_1 + 0x54))) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x50);
      }
      puVar6 = *(undefined4 **)((int)param_1 + 0x50);
      puVar8 = (undefined4 *)this->mbr_0x50;
      for (uVar2 = this->mbr_0x54 * 5 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined *)puVar8 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    dVar4 = this->mbr_0x30;
    if (dVar4 != 0) {
      if (((*(byte *)&this->mbr_0xc & 2) != 0) && ((*(byte *)((int)param_1 + 0xc) & 2) != 0)) {
        puVar5 = *(undefined2 **)((int)param_1 + 0x38);
        puVar7 = (undefined2 *)this->mbr_0x38;
        for (; dVar4 != 0; dVar4 = dVar4 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      if ((((*(byte *)&this->mbr_0xc & 0x20) == 0) &&
          (local_8 = meth_0x474cfb((cls_0x668cd8 *)param_1,&local_10,0x10), -1 < local_8)) &&
         (local_8 = meth_0x474cfb(this,&local_c,0), -1 < local_8)) {
        uVar1 = this->mbr_0x2c * this->mbr_0x30;
        puVar6 = local_10;
        puVar8 = local_c;
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined *)puVar8 = *(undefined *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
    }
  }
  if (local_c != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
  }
  if (local_10 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x28) + 0x30))(*(int **)((int)param_1 + 0x28));
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x30))(*(int **)((int)param_1 + 0x3c));
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_8 < 0) {
    this->mbr_0xc = this->mbr_0xc & 0xffffffef;
    this->mbr_0x30 = 0;
    this->mbr_0x58 = 0;
  }
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
cls_0x668cd8::meth_0x4795f3(cls_0x668cd8 *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  char acStack_130 [236];
  undefined4 uStack_44;
  uint local_24;
  dword local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  undefined *local_8;
  
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_8 = (undefined *)0x0;
  local_20 = 0;
  if ((param_4 == 0) || (this->mbr_0x50 == 0)) {
    local_14 = meth_0x475399(this,&local_8,&local_24);
    uVar9 = local_24;
    if (local_14 < 0) goto LAB_00479926;
    uStack_44 = 0x479688;
    FUN_006178e0(local_8,local_24,4,&LAB_00474817);
LAB_0047968b:
    local_10 = (undefined4 *)operator_new(uVar9 << 4);
    puVar7 = local_10;
    uVar4 = uVar9;
    if (local_10 != (undefined4 *)0x0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + 4;
      }
      uVar4 = 0;
      if (this->mbr_0x30 != 0) {
        do {
          *(undefined4 *)(param_3 + uVar4 * 4) = 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (uVar4 < this->mbr_0x30);
      }
      local_18 = 0;
      local_1c = 0;
      if (uVar9 != 0) {
        do {
          if (*(int *)(local_8 + local_18 * 4) == 0) break;
          local_18 = local_18 + 1;
        } while (local_18 < uVar9);
      }
      local_c = 0;
      if (this->mbr_0x58 != 0) {
        do {
          iVar8 = *(int *)(param_2 + local_c * 4);
          if (iVar8 != -1) {
            iVar3 = *(int *)(this->mbr_0x48 + iVar8 * 4);
            if ((iVar3 != local_1c) && (local_18 = 0, local_1c = iVar3, uVar9 != 0)) {
              do {
                if (*(int *)(local_8 + local_18 * 4) == iVar3) break;
                local_18 = local_18 + 1;
              } while (local_18 < uVar9);
            }
            iVar8 = iVar8 * 0xc;
            local_20 = 3;
            do {
              puVar1 = (uint *)(param_3 + *(int *)(iVar8 + this->mbr_0x40) * 4);
              if (*puVar1 == 0xffffffff) {
                *puVar1 = local_18;
                local_10[local_18 * 4 + 2] = local_10[local_18 * 4 + 2] + 1;
              }
              iVar8 = iVar8 + 4;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_10[local_18 * 4] = local_10[local_18 * 4] + 1;
          }
          local_c = local_c + 1;
        } while (local_c < this->mbr_0x58);
      }
      local_20 = this->mbr_0x50;
      this->mbr_0x54 = uVar9;
      pvVar5 = operator_new(uVar9 * 0x14);
      this->mbr_0x50 = (dword)pvVar5;
      if (pvVar5 != (void *)0x0) {
        local_18 = 0;
        local_c = 0;
        local_1c = 0;
        if (uVar9 != 0) {
          piVar6 = local_10 + 2;
          iVar8 = 0;
          do {
            piVar6[-1] = local_18;
            *(undefined4 *)(iVar8 + this->mbr_0x50) = *(undefined4 *)(local_8 + local_1c * 4);
            *(uint *)(iVar8 + 4 + this->mbr_0x50) = local_18;
            *(int *)(iVar8 + 8 + this->mbr_0x50) = piVar6[-2];
            local_18 = local_18 + piVar6[-2];
            piVar6[1] = local_c;
            *(uint *)(iVar8 + 0xc + this->mbr_0x50) = local_c;
            *(int *)(iVar8 + 0x10 + this->mbr_0x50) = *piVar6;
            local_c = local_c + *piVar6;
            local_1c = local_1c + 1;
            piVar6 = piVar6 + 4;
            iVar8 = iVar8 + 0x14;
            uVar9 = local_24;
          } while (local_1c < local_24);
        }
        if (((param_4 != 0) && (local_20 != 0)) && (uVar9 != 0)) {
          iVar8 = 0;
          puVar7 = (undefined4 *)(local_20 + 0x10);
          local_24 = uVar9;
          do {
            *(undefined4 *)(this->mbr_0x50 + 0xc + iVar8) = puVar7[-1];
            *(undefined4 *)(this->mbr_0x50 + 0x10 + iVar8) = *puVar7;
            iVar8 = iVar8 + 0x14;
            puVar7 = puVar7 + 5;
            local_24 = local_24 - 1;
          } while (local_24 != 0);
          local_24 = 0;
        }
        local_18 = 0;
        local_1c = 0;
        if (uVar9 != 0) {
          do {
            if (*(int *)(local_8 + local_18 * 4) == 0) break;
            local_18 = local_18 + 1;
          } while (local_18 < uVar9);
        }
        local_c = 0;
        if (this->mbr_0x58 != 0) {
          do {
            iVar8 = *(int *)(param_2 + local_c * 4);
            if (iVar8 != -1) {
              iVar8 = iVar8 * 4;
              iVar3 = *(int *)(iVar8 + this->mbr_0x48);
              if ((iVar3 != local_1c) && (local_18 = 0, local_1c = iVar3, uVar9 != 0)) {
                do {
                  if (*(int *)(local_8 + local_18 * 4) == iVar3) break;
                  local_18 = local_18 + 1;
                } while (local_18 < uVar9);
              }
              piVar6 = local_10 + local_18 * 4 + 1;
              *(int *)(iVar8 + param_1) = *piVar6;
              *piVar6 = *piVar6 + 1;
            }
            local_c = local_c + 1;
          } while (local_c < this->mbr_0x58);
        }
        if (param_4 == 0) {
          uVar9 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              piVar6 = (int *)(param_3 + uVar9 * 4);
              iVar8 = *piVar6;
              if (iVar8 != -1) {
                piVar2 = local_10 + iVar8 * 4 + 3;
                *piVar6 = *piVar2;
                *piVar2 = *piVar2 + 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < this->mbr_0x30);
          }
        }
        else {
          uVar9 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              puVar1 = (uint *)(param_3 + uVar9 * 4);
              uVar4 = *puVar1;
              if (uVar4 != 0xffffffff) {
                iVar8 = this->mbr_0x50 + uVar4 * 0x14;
                uVar4 = *(uint *)(iVar8 + 0xc);
                if ((uVar9 < uVar4) || (*(int *)(iVar8 + 0x10) + uVar4 <= uVar9)) {
                  FUN_00616d8c(acStack_130,
                               (byte *)
                               "ID3DXMeshOptimize: Cannot do AttributeSort because %d vertex needs to be moved and either IgnoreVerts or ShareVB is set\n"
                              );
                  local_14 = -0x7789f4aa;
                  goto LAB_00479926;
                }
                *puVar1 = uVar9;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < this->mbr_0x30);
          }
        }
        uVar9 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            *(undefined4 *)(param_2 + uVar9 * 4) = 0xffffffff;
            uVar9 = uVar9 + 1;
          } while (uVar9 < this->mbr_0x58);
        }
        uVar9 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            iVar8 = *(int *)(param_1 + uVar9 * 4);
            if (iVar8 != -1) {
              *(uint *)(param_2 + iVar8 * 4) = uVar9;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < this->mbr_0x58);
        }
        this->mbr_0xc = this->mbr_0xc | 0x10;
        goto LAB_00479926;
      }
    }
  }
  else {
    uVar9 = this->mbr_0x54;
    local_24 = uVar9;
    local_8 = (undefined *)operator_new(uVar9 << 2);
    if (local_8 != (undefined *)0x0) {
      uVar4 = 0;
      if (uVar9 != 0) {
        iVar8 = 0;
        do {
          *(undefined4 *)(local_8 + uVar4 * 4) = *(undefined4 *)(iVar8 + this->mbr_0x50);
          uVar4 = uVar4 + 1;
          iVar8 = iVar8 + 0x14;
        } while (uVar4 < uVar9);
      }
      goto LAB_0047968b;
    }
  }
  local_14 = -0x7ff8fff2;
LAB_00479926:
                    /* WARNING: Subroutine does not return */
  _free(local_10);
}



void __thiscall cls_0x668cd8::meth_0x4799c4(cls_0x668cd8 *this,void **param_1,uint *param_2)

{
  dword *pdVar1;
  void *pvVar2;
  dword dVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  dword local_4c;
  uint local_48;
  uint local_44;
  dword local_40;
  undefined4 *local_3c;
  int *local_38;
  dword local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  void *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  void *local_8;
  
  local_40 = this->mbr_0x30;
  *param_1 = (void *)0x0;
  *param_2 = 0;
  local_c = 0;
  local_8 = (void *)0x0;
  local_14 = (void *)0x0;
  local_44 = 0;
  local_24 = 0;
  local_48 = 0;
  local_2c = 0;
  local_30 = 0;
  local_10 = (undefined4 *)operator_new(this->mbr_0x30 << 2);
  local_3c = (undefined4 *)operator_new(this->mbr_0x30 << 2);
  if ((local_10 == (undefined4 *)0x0) || (local_3c == (undefined4 *)0x0)) {
LAB_00479be3:
    local_c = 0x8007000e;
  }
  else {
    puVar7 = local_3c;
    for (uVar4 = this->mbr_0x30 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar7 = local_10;
    for (uVar4 = this->mbr_0x30 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    local_20 = 0;
    if (this->mbr_0x58 != 0) {
      local_28 = 0;
      do {
        piVar6 = (int *)(this->mbr_0x40 + local_28);
        local_38 = piVar6;
        if (*piVar6 != -1) {
          local_18 = *(int *)(this->mbr_0x48 + local_20 * 4);
          local_1c = 0;
          do {
            pdVar1 = (dword *)(piVar6 + local_1c);
            iVar5 = local_3c[*pdVar1];
            if (iVar5 != local_18) {
              if (iVar5 == -1) {
                local_3c[*pdVar1] = local_18;
              }
              else {
                for (iVar5 = local_10[*pdVar1]; iVar5 != -1;
                    iVar5 = *(int *)(iVar5 * 4 + (int)local_8)) {
                  if (*(int *)(iVar5 * 4 + (int)local_14) == local_18) {
                    dVar3 = iVar5 + local_40;
                    goto LAB_00479bb3;
                  }
                }
                if (local_24 == 0) {
                  local_2c = 0x100;
                  local_24 = 0x100;
                  local_30 = 0x100;
                  local_8 = operator_new(0x400);
                  local_14 = operator_new(0x400);
                  pvVar2 = operator_new(0x400);
                  *param_1 = pvVar2;
                  if (((local_8 == (void *)0x0) || (local_14 == (void *)0x0)) ||
                     (pvVar2 == (void *)0x0)) goto LAB_00479be3;
                }
                local_34 = this->mbr_0x30;
                this->mbr_0x30 = local_34 + 1;
                uVar4 = *param_2;
                iVar5 = FUN_004759e2(&local_14,&local_18,&local_44,&local_24);
                if ((iVar5 == 0) ||
                   (iVar5 = FUN_004759e2(&local_8,&local_34,&local_48,&local_2c), iVar5 == 0))
                goto LAB_00479be3;
                local_4c = *pdVar1;
                iVar5 = FUN_004759e2(param_1,&local_4c,param_2,&local_30);
                if (iVar5 == 0) goto LAB_00479be3;
                *(undefined4 *)((int)local_8 + uVar4 * 4) = local_10[*pdVar1];
                local_10[*pdVar1] = uVar4;
                dVar3 = local_34;
LAB_00479bb3:
                *pdVar1 = dVar3;
                piVar6 = local_38;
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c < 3);
        }
        local_20 = local_20 + 1;
        local_28 = local_28 + 0xc;
      } while (local_20 < this->mbr_0x58);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_10);
}



void __thiscall cls_0x668cd8::meth_0x479c17(cls_0x668cd8 *this,int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  
  uVar3 = this->mbr_0x30;
  if (this->mbr_0x30 <= this->mbr_0x58) {
    uVar3 = this->mbr_0x58;
  }
  _Memory = (undefined4 *)operator_new(uVar3);
  if (_Memory != (undefined4 *)0x0) {
    if (((*(byte *)&this->mbr_0xc & 2) != 0) && (uVar3 = 0, this->mbr_0x30 != 0)) {
      do {
        if (*(int *)(param_1 + uVar3 * 4) != -1) {
          puVar1 = (uint *)(this->mbr_0x38 + uVar3 * 4);
          uVar4 = *puVar1;
          if (*(int *)(param_1 + uVar4 * 4) == -1) {
            *puVar1 = uVar3;
            uVar2 = uVar3;
            while (uVar2 = uVar2 + 1, uVar2 < this->mbr_0x30) {
              puVar1 = (uint *)(this->mbr_0x38 + uVar2 * 4);
              if (*puVar1 == uVar4) {
                *puVar1 = uVar3;
              }
            }
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x30);
    }
    uVar3 = this->mbr_0x30;
    puVar6 = _Memory;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar4 = 0;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (this->mbr_0x30 != 0) {
      do {
        if ((*(char *)(uVar4 + (int)_Memory) == '\0') &&
           (uVar3 = *(uint *)(param_1 + uVar4 * 4), uVar3 != 0xffffffff)) {
          while (uVar3 != uVar4) {
            meth_0x475875(this,uVar4,uVar3,param_2);
            meth_0x475800(this,uVar3,param_1);
            *(undefined *)(uVar3 + (int)_Memory) = 1;
            uVar3 = *(uint *)(param_1 + uVar3 * 4);
            if ((uVar3 == 0xffffffff) || (*(char *)(uVar3 + (int)_Memory) != '\0'))
            goto LAB_00479d06;
          }
          meth_0x475800(this,uVar4,param_1);
        }
LAB_00479d06:
        uVar4 = uVar4 + 1;
      } while (uVar4 < this->mbr_0x30);
    }
    uVar3 = 0;
    dVar5 = 0;
    if (this->mbr_0x30 != 0) {
      do {
        if (*(int *)(param_1 + uVar3 * 4) == -1) {
          *(undefined4 *)(param_1 + uVar3 * 4) = 0xffffffff;
        }
        else {
          dVar5 = dVar5 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x30);
    }
    this->mbr_0x30 = dVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x668cd8::meth_0x479d3e(cls_0x668cd8 *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  undefined4 *puVar5;
  
  uVar3 = this->mbr_0x30;
  if (this->mbr_0x30 <= this->mbr_0x58) {
    uVar3 = this->mbr_0x58;
  }
  _Memory = (undefined4 *)operator_new(uVar3);
  if (_Memory != (undefined4 *)0x0) {
    uVar3 = this->mbr_0x58;
    puVar5 = _Memory;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar3 = 0;
    if (this->mbr_0x58 != 0) {
      do {
        if ((*(char *)(uVar3 + (int)_Memory) == '\0') &&
           (uVar2 = *(uint *)(param_1 + uVar3 * 4), uVar2 != 0xffffffff)) {
          while (uVar2 != uVar3) {
            meth_0x47590f(this,uVar3,uVar2);
            meth_0x47581e(this,uVar2,param_2,param_1);
            *(undefined *)(uVar2 + (int)_Memory) = 1;
            uVar2 = *(uint *)(param_1 + uVar2 * 4);
            if ((uVar2 == 0xffffffff) || (*(char *)(uVar2 + (int)_Memory) != '\0'))
            goto LAB_00479de3;
          }
          meth_0x47581e(this,uVar3,param_2,param_1);
        }
LAB_00479de3:
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x58);
    }
    uVar3 = 0;
    dVar4 = 0;
    if (this->mbr_0x58 != 0) {
      do {
        piVar1 = (int *)(param_1 + uVar3 * 4);
        if (*piVar1 == -1) {
          *piVar1 = -1;
        }
        else {
          dVar4 = dVar4 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x58);
    }
    this->mbr_0x58 = dVar4;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
cls_0x668cd8::meth_0x479e1f(cls_0x668cd8 *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char acStack_130 [236];
  undefined4 uStack_44;
  uint local_24;
  dword local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  local_8 = (undefined *)0x0;
  local_20 = 0;
  if ((param_4 == 0) || (this->mbr_0x50 == 0)) {
    local_14 = meth_0x47562f(this,&local_8,&local_24);
    uVar10 = local_24;
    if (local_14 < 0) goto LAB_0047a174;
    uStack_44 = 0x479eb4;
    FUN_006178e0(local_8,local_24,4,&LAB_00474817);
LAB_00479eb7:
    local_c = (undefined4 *)operator_new(uVar10 << 4);
    puVar7 = local_c;
    uVar4 = uVar10;
    if (local_c != (undefined4 *)0x0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + 4;
      }
      uVar4 = 0;
      if (this->mbr_0x30 != 0) {
        do {
          *(undefined4 *)(param_3 + uVar4 * 4) = 0xffff;
          uVar4 = uVar4 + 1;
        } while (uVar4 < this->mbr_0x30);
      }
      local_18 = 0;
      local_1c = 0;
      if (uVar10 != 0) {
        do {
          if (*(int *)(local_8 + local_18 * 4) == 0) break;
          local_18 = local_18 + 1;
        } while (local_18 < uVar10);
      }
      local_10 = 0;
      if (this->mbr_0x58 != 0) {
        uVar4 = 0;
        do {
          uVar3 = *(ushort *)(param_2 + uVar4 * 4);
          if (uVar3 != 0xffff) {
            iVar8 = *(int *)(this->mbr_0x48 + (uint)uVar3 * 4);
            if ((iVar8 != local_1c) && (local_18 = 0, local_1c = iVar8, uVar10 != 0)) {
              do {
                if (*(int *)(local_8 + local_18 * 4) == iVar8) break;
                local_18 = local_18 + 1;
              } while (local_18 < uVar10);
            }
            iVar8 = (uint)uVar3 * 6;
            local_20 = 3;
            do {
              puVar1 = (uint *)(param_3 + (uint)*(ushort *)(iVar8 + this->mbr_0x40) * 4);
              if (*puVar1 == 0xffff) {
                *puVar1 = local_18;
                local_c[local_18 * 4 + 2] = local_c[local_18 * 4 + 2] + 1;
              }
              iVar8 = iVar8 + 2;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_c[local_18 * 4] = local_c[local_18 * 4] + 1;
          }
          local_10 = local_10 + 1;
          uVar4 = local_10 & 0xffff;
        } while (uVar4 < this->mbr_0x58);
      }
      local_20 = this->mbr_0x50;
      this->mbr_0x54 = uVar10;
      pvVar5 = operator_new(uVar10 * 0x14);
      this->mbr_0x50 = (dword)pvVar5;
      if (pvVar5 != (void *)0x0) {
        local_18 = 0;
        local_10 = 0;
        local_1c = 0;
        if (uVar10 != 0) {
          piVar6 = local_c + 2;
          iVar8 = 0;
          do {
            piVar6[-1] = local_18;
            *(undefined4 *)(iVar8 + this->mbr_0x50) = *(undefined4 *)(local_8 + local_1c * 4);
            *(uint *)(iVar8 + 4 + this->mbr_0x50) = local_18;
            *(int *)(iVar8 + 8 + this->mbr_0x50) = piVar6[-2];
            local_18 = local_18 + piVar6[-2];
            piVar6[1] = local_10;
            *(uint *)(iVar8 + 0xc + this->mbr_0x50) = local_10;
            *(int *)(iVar8 + 0x10 + this->mbr_0x50) = *piVar6;
            local_10 = local_10 + *piVar6;
            local_1c = local_1c + 1;
            piVar6 = piVar6 + 4;
            iVar8 = iVar8 + 0x14;
            uVar10 = local_24;
          } while (local_1c < local_24);
        }
        if (((param_4 != 0) && (local_20 != 0)) && (uVar10 != 0)) {
          iVar8 = 0;
          puVar7 = (undefined4 *)(local_20 + 0x10);
          local_24 = uVar10;
          do {
            *(undefined4 *)(this->mbr_0x50 + 0xc + iVar8) = puVar7[-1];
            *(undefined4 *)(this->mbr_0x50 + 0x10 + iVar8) = *puVar7;
            iVar8 = iVar8 + 0x14;
            puVar7 = puVar7 + 5;
            local_24 = local_24 - 1;
          } while (local_24 != 0);
          local_24 = 0;
        }
        local_18 = 0;
        local_1c = 0;
        if (uVar10 != 0) {
          do {
            if (*(int *)(local_8 + local_18 * 4) == 0) break;
            local_18 = local_18 + 1;
          } while (local_18 < uVar10);
        }
        local_10 = 0;
        if (this->mbr_0x58 != 0) {
          uVar4 = 0;
          do {
            uVar3 = *(ushort *)(param_2 + uVar4 * 4);
            if (uVar3 != 0xffff) {
              iVar9 = (uint)uVar3 * 4;
              iVar8 = *(int *)(iVar9 + this->mbr_0x48);
              if ((iVar8 != local_1c) && (local_18 = 0, local_1c = iVar8, uVar10 != 0)) {
                do {
                  if (*(int *)(local_8 + local_18 * 4) == iVar8) break;
                  local_18 = local_18 + 1;
                } while (local_18 < uVar10);
              }
              piVar6 = local_c + local_18 * 4 + 1;
              *(int *)(iVar9 + param_1) = *piVar6;
              *piVar6 = *piVar6 + 1;
            }
            local_10 = local_10 + 1;
            uVar4 = local_10 & 0xffff;
          } while (uVar4 < this->mbr_0x58);
        }
        if (param_4 == 0) {
          uVar10 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              piVar6 = (int *)(param_3 + uVar10 * 4);
              iVar8 = *piVar6;
              if (iVar8 != 0xffff) {
                piVar2 = local_c + iVar8 * 4 + 3;
                *piVar6 = *piVar2;
                *piVar2 = *piVar2 + 1;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < this->mbr_0x30);
          }
        }
        else {
          uVar10 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              puVar1 = (uint *)(param_3 + uVar10 * 4);
              uVar4 = *puVar1;
              if (uVar4 != 0xffff) {
                iVar8 = this->mbr_0x50 + uVar4 * 0x14;
                uVar4 = *(uint *)(iVar8 + 0xc);
                if ((uVar10 < uVar4) || (*(int *)(iVar8 + 0x10) + uVar4 <= uVar10)) {
                  FUN_00616d8c(acStack_130,
                               (byte *)
                               "ID3DXMeshOptimize: Cannot do AttributeSort because %d vertex needs to be moved and either IgnoreVerts or ShareVB is set\n"
                              );
                  local_14 = -0x7789f4aa;
                  goto LAB_0047a174;
                }
                *puVar1 = uVar10;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < this->mbr_0x30);
          }
        }
        uVar10 = 0;
        if (this->mbr_0x58 != 0) {
          uVar4 = 0;
          do {
            uVar10 = uVar10 + 1;
            *(undefined4 *)(param_2 + uVar4 * 4) = 0xffff;
            uVar4 = uVar10 & 0xffff;
          } while (uVar4 < this->mbr_0x58);
        }
        uVar10 = 0;
        if (this->mbr_0x58 != 0) {
          uVar4 = 0;
          do {
            uVar3 = *(ushort *)(param_1 + uVar4 * 4);
            if (uVar3 != 0xffff) {
              *(uint *)(param_2 + (uint)uVar3 * 4) = uVar4;
            }
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while (uVar4 < this->mbr_0x58);
        }
        this->mbr_0xc = this->mbr_0xc | 0x10;
        goto LAB_0047a174;
      }
    }
  }
  else {
    uVar10 = this->mbr_0x54;
    local_24 = uVar10;
    local_8 = (undefined *)operator_new(uVar10 << 2);
    if (local_8 != (undefined *)0x0) {
      uVar4 = 0;
      if (uVar10 != 0) {
        iVar8 = 0;
        do {
          *(undefined4 *)(local_8 + uVar4 * 4) = *(undefined4 *)(iVar8 + this->mbr_0x50);
          uVar4 = uVar4 + 1;
          iVar8 = iVar8 + 0x14;
        } while (uVar4 < uVar10);
      }
      goto LAB_00479eb7;
    }
  }
  local_14 = -0x7ff8fff2;
LAB_0047a174:
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}



void __thiscall cls_0x668cd8::meth_0x47a218(cls_0x668cd8 *this,void **param_1,uint *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint local_50;
  uint local_4c;
  uint local_48;
  dword local_44;
  undefined4 *local_40;
  short *local_3c;
  ushort local_38 [2];
  ushort local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  void *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  void *local_8;
  
  local_44 = this->mbr_0x30;
  *param_1 = (void *)0x0;
  *param_2 = 0;
  local_c = 0;
  local_8 = (void *)0x0;
  local_14 = (void *)0x0;
  local_48 = 0;
  local_24 = 0;
  local_4c = 0;
  local_2c = 0;
  local_30 = 0;
  local_10 = (undefined4 *)operator_new(this->mbr_0x30 << 1);
  local_40 = (undefined4 *)operator_new(this->mbr_0x30 << 2);
  if ((local_10 == (undefined4 *)0x0) || (local_40 == (undefined4 *)0x0)) {
LAB_0047a454:
    local_c = 0x8007000e;
  }
  else {
    puVar8 = local_40;
    for (uVar4 = this->mbr_0x30 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar6 = this->mbr_0x30 << 1;
    puVar8 = local_10;
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    local_20 = 0;
    if (this->mbr_0x58 != 0) {
      local_28 = 0;
      do {
        psVar7 = (short *)(this->mbr_0x40 + local_28);
        local_3c = psVar7;
        if (*psVar7 != -1) {
          local_18 = *(int *)(this->mbr_0x48 + local_20 * 4);
          local_1c = 0;
          do {
            puVar1 = (ushort *)(psVar7 + local_1c);
            iVar5 = local_40[*puVar1];
            if (iVar5 != local_18) {
              if (iVar5 == -1) {
                local_40[*puVar1] = local_18;
              }
              else {
                for (uVar2 = *(ushort *)((int)local_10 + (uint)*puVar1 * 2); uVar2 != 0xffff;
                    uVar2 = *(ushort *)((int)local_8 + (uint)uVar2 * 2)) {
                  if (*(int *)((int)local_14 + (uint)uVar2 * 4) == local_18) {
                    *puVar1 = (short)local_44 + uVar2;
                    psVar7 = local_3c;
                    goto LAB_0047a426;
                  }
                }
                if (local_24 == 0) {
                  local_2c = 0x100;
                  local_24 = 0x100;
                  local_30 = 0x100;
                  local_8 = operator_new(0x200);
                  local_14 = operator_new(0x400);
                  pvVar3 = operator_new(0x400);
                  *param_1 = pvVar3;
                  if (((local_8 == (void *)0x0) || (local_14 == (void *)0x0)) ||
                     (pvVar3 == (void *)0x0)) goto LAB_0047a454;
                }
                puVar8 = local_10;
                local_38[0] = *(ushort *)&this->mbr_0x30;
                this->mbr_0x30 = this->mbr_0x30 + 1;
                local_34 = *(ushort *)param_2;
                iVar5 = FUN_004759e2(&local_14,&local_18,&local_48,&local_24);
                if ((iVar5 == 0) ||
                   (iVar5 = FUN_0047575f(&local_8,local_38,&local_4c,&local_2c), iVar5 == 0))
                goto LAB_0047a454;
                local_50 = (uint)*puVar1;
                iVar5 = FUN_004759e2(param_1,&local_50,param_2,&local_30);
                if (iVar5 == 0) goto LAB_0047a454;
                *(undefined2 *)((int)local_8 + (uint)local_34 * 2) =
                     *(undefined2 *)((int)puVar8 + (uint)*puVar1 * 2);
                *(ushort *)((int)puVar8 + (uint)*puVar1 * 2) = local_34;
                *puVar1 = local_38[0];
                psVar7 = local_3c;
              }
            }
LAB_0047a426:
            local_1c = local_1c + 1;
          } while (local_1c < 3);
        }
        local_20 = local_20 + 1;
        local_28 = local_28 + 6;
      } while (local_20 < this->mbr_0x58);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_10);
}



void __thiscall cls_0x668cd8::meth_0x47a488(cls_0x668cd8 *this,int param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 *_Memory;
  uint uVar4;
  uint uVar5;
  dword dVar6;
  undefined4 *puVar7;
  uint local_8;
  
  uVar4 = this->mbr_0x30;
  if (this->mbr_0x30 <= this->mbr_0x58) {
    uVar4 = this->mbr_0x58;
  }
  _Memory = (undefined4 *)operator_new(uVar4);
  if (_Memory != (undefined4 *)0x0) {
    if (((*(byte *)&this->mbr_0xc & 2) != 0) && (uVar4 = 0, this->mbr_0x30 != 0)) {
      do {
        if (*(int *)(param_1 + uVar4 * 4) != 0xffff) {
          puVar1 = (ushort *)(this->mbr_0x38 + uVar4 * 2);
          uVar3 = *puVar1;
          if (*(int *)(param_1 + (uint)uVar3 * 4) == 0xffff) {
            *puVar1 = (ushort)uVar4;
            uVar5 = uVar4;
            while (uVar5 = uVar5 + 1, uVar5 < this->mbr_0x30) {
              puVar1 = (ushort *)(this->mbr_0x38 + uVar5 * 2);
              if (*puVar1 == uVar3) {
                *puVar1 = (ushort)uVar4;
              }
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < this->mbr_0x30);
    }
    uVar4 = this->mbr_0x30;
    puVar7 = _Memory;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    local_8 = 0;
    if (this->mbr_0x30 != 0) {
      do {
        if ((*(char *)(local_8 + (int)_Memory) == '\0') &&
           (uVar4 = *(uint *)(param_1 + local_8 * 4), uVar4 != 0xffff)) {
          while (uVar4 != local_8) {
            meth_0x475b3d(this,local_8,uVar4,param_2);
            meth_0x475ab8(this,uVar4,param_1);
            *(undefined *)(uVar4 + (int)_Memory) = 1;
            uVar4 = *(uint *)(param_1 + uVar4 * 4);
            if ((uVar4 == 0xffff) || (*(char *)(uVar4 + (int)_Memory) != '\0')) goto LAB_0047a58c;
          }
          meth_0x475ab8(this,local_8,param_1);
        }
LAB_0047a58c:
        local_8 = local_8 + 1;
      } while (local_8 < this->mbr_0x30);
    }
    uVar4 = 0;
    dVar6 = 0;
    if (this->mbr_0x30 != 0) {
      do {
        piVar2 = (int *)(param_1 + uVar4 * 4);
        if (*piVar2 == 0xffff) {
          *piVar2 = -1;
        }
        else {
          dVar6 = dVar6 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < this->mbr_0x30);
    }
    this->mbr_0x30 = dVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x668cd8::meth_0x47a5cd(cls_0x668cd8 *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  dword dVar4;
  undefined4 *puVar5;
  
  uVar3 = this->mbr_0x30;
  if (this->mbr_0x30 <= this->mbr_0x58) {
    uVar3 = this->mbr_0x58;
  }
  _Memory = (undefined4 *)operator_new(uVar3);
  if (_Memory != (undefined4 *)0x0) {
    uVar3 = this->mbr_0x58;
    puVar5 = _Memory;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar3 = 0;
    if (this->mbr_0x58 != 0) {
      do {
        if ((*(char *)(uVar3 + (int)_Memory) == '\0') &&
           (uVar2 = *(uint *)(param_1 + uVar3 * 4), uVar2 != 0xffff)) {
          while (uVar2 != uVar3) {
            meth_0x475bda(this,uVar3,uVar2);
            meth_0x475ad9(this,uVar2,param_2,param_1);
            *(undefined *)(uVar2 + (int)_Memory) = 1;
            uVar2 = *(uint *)(param_1 + uVar2 * 4);
            if ((uVar2 == 0xffff) || (*(char *)(uVar2 + (int)_Memory) != '\0')) goto LAB_0047a678;
          }
          meth_0x475ad9(this,uVar3,param_2,param_1);
        }
LAB_0047a678:
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x58);
    }
    uVar3 = 0;
    dVar4 = 0;
    if (this->mbr_0x58 != 0) {
      do {
        piVar1 = (int *)(param_1 + uVar3 * 4);
        if (*piVar1 == 0xffff) {
          *piVar1 = -1;
        }
        else {
          dVar4 = dVar4 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < this->mbr_0x58);
    }
    this->mbr_0x58 = dVar4;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



int __thiscall cls_0x668cd8::virt_meth_0x47ac13(cls_0x668cd8 *this)

{
  int *piVar1;
  dword dVar2;
  dword dVar3;
  cls_0x668cd8 *in_stack_00000004;
  
  piVar1 = (int *)in_stack_00000004->mbr_0x64;
  if (piVar1 == (int *)0x0) {
    dVar2 = in_stack_00000004->mbr_0x60;
    dVar3 = dVar2 - 1;
    in_stack_00000004->mbr_0x60 = dVar3;
    if (dVar2 == 1) {
      ~cls_0x668cd8(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000004);
    }
  }
  else {
    dVar3 = (**(code **)(*piVar1 + 8))(piVar1);
  }
  return dVar3;
}



cls_0x668cd8 * __thiscall
cls_0x668cd8::cls_0x668cd8(cls_0x668cd8 *this,int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  dword dVar2;
  
  this->vftptr_0x0 = &cls_0x668cd8__vftable_668cd8_00668cd8;
  this->mbr_0x4 = param_2;
  this->mbr_0x8 = param_3;
  this->mbr_0xc = 4;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  dVar2 = FUN_00476482(param_2);
  this->mbr_0x2c = dVar2;
  this->mbr_0x24 = (dword)param_1;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 1;
  this->mbr_0x64 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x18 = 0;
  if ((param_3 & 0x200) != 0) {
    this->mbr_0x10 = 1;
  }
  if ((param_3 & 0x100) != 0) {
    this->mbr_0x10 = 2;
  }
  if ((param_3 & 0x400) != 0) {
    this->mbr_0x18 = 8;
  }
  if ((param_3 & 2) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x20;
  }
  if ((param_3 & 4) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x40;
  }
  if ((param_3 & 8) != 0) {
    *(byte *)&this->mbr_0x18 = *(byte *)&this->mbr_0x18 | 0x80;
  }
  if ((param_3 & 0x4000) != 0) {
    pbVar1 = (byte *)((int)&this->mbr_0x18 + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  if ((param_3 & 0x800) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x200;
  }
  if ((param_3 & 0x10000) != 0) {
    this->mbr_0x18 = this->mbr_0x18 | 0x10;
  }
  this->mbr_0x14 = 0;
  this->mbr_0x1c = 0;
  if ((param_3 & 0x20) != 0) {
    this->mbr_0x14 = 1;
  }
  if ((param_3 & 0x10) != 0) {
    this->mbr_0x14 = 2;
  }
  if ((param_3 & 0x40) != 0) {
    this->mbr_0x1c = 8;
  }
  if ((param_3 & 2) != 0) {
    this->mbr_0x1c = this->mbr_0x1c | 0x20;
  }
  if ((param_3 & 4) != 0) {
    this->mbr_0x1c = this->mbr_0x1c | 0x40;
  }
  if ((param_3 & 8) != 0) {
    *(byte *)&this->mbr_0x1c = *(byte *)&this->mbr_0x1c | 0x80;
  }
  if ((param_3 & 0x4000) != 0) {
    pbVar1 = (byte *)((int)&this->mbr_0x1c + 1);
    *pbVar1 = *pbVar1 | 1;
  }
  if ((char)param_3 < '\0') {
    this->mbr_0x1c = this->mbr_0x1c | 0x200;
  }
  if ((char)(param_3 >> 8) < '\0') {
    this->mbr_0x1c = this->mbr_0x1c | 0x10;
  }
  if ((param_3 & 0x1000) != 0) {
    this->mbr_0xc = 0x24;
  }
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*(int *)this->mbr_0x24 + 0x18))((int *)this->mbr_0x24,&this->mbr_0x20);
  return this;
}



int __thiscall cls_0x668cd8::virt_meth_0x47b86b(cls_0x668cd8 *this)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  cls_0x668cd8 *this_00;
  int *piVar4;
  cls_0x668c68 *pcVar5;
  cls_0x668c68 *extraout_ECX;
  cls_0x668c68 *extraout_ECX_00;
  int iVar6;
  int unaff_EBP;
  cls_0x668cd8 *pcVar7;
  
  FUN_0061781c();
  uVar2 = *(uint *)(unaff_EBP + 0x10);
  pcVar7 = (cls_0x668cd8 *)0x0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((byte)uVar2 & 0xe) == 4) {
    iVar6 = -0x7789f794;
    goto LAB_0047ba22;
  }
  if ((uVar2 == 0) || ((uVar2 & 1) != 0)) {
    iVar6 = -0x7789f794;
    pcVar5 = extraout_ECX;
LAB_0047b9fd:
    if (pcVar7 == (cls_0x668cd8 *)0x0) goto LAB_0047ba22;
    (*((cls_0x668c68__vftable_668c68 *)pcVar7->vftptr_0x0)->virt_meth_0x47abdb_8)(pcVar5);
LAB_0047ba07:
    piVar4 = *(int **)(unaff_EBP + -0x14);
    if (piVar4 == (int *)0x0) goto LAB_0047ba22;
    (**(code **)(*piVar4 + 8))(piVar4);
LAB_0047ba14:
    piVar4 = *(int **)(unaff_EBP + -0x18);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + 0xc);
    if ((uVar3 & 0xfffe2000) == 0) {
      this_00 = *(cls_0x668cd8 **)(unaff_EBP + 8);
      *(uint *)(unaff_EBP + -0x10) = uVar3;
      puVar1 = (uint *)(unaff_EBP + -0x10);
      *puVar1 = *puVar1 & 0x1000;
      if ((((*puVar1 == 0) || (uVar2 == this_00->mbr_0x4)) &&
          ((piVar4 = *(int **)(unaff_EBP + 0x14), *(int *)(unaff_EBP + -0x10) == 0 ||
           (piVar4 == (int *)this_00->mbr_0x24)))) &&
         (((this_00->mbr_0x8 & 0x400) == 0 && ((this_00->mbr_0x8 & 0x40) == 0)))) {
        if ((uVar3 & 1) != 0) {
          pcVar5 = (cls_0x668c68 *)operator_new(0x70);
          *(cls_0x668c68 **)(unaff_EBP + 8) = pcVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (pcVar5 == (cls_0x668c68 *)0x0) {
            pcVar7 = (cls_0x668cd8 *)0x0;
          }
          else {
            pcVar7 = (cls_0x668cd8 *)
                     cls_0x668c68::cls_0x668c68(pcVar5,piVar4,uVar2,*(uint *)(unaff_EBP + 0xc));
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(cls_0x668cd8 **)(unaff_EBP + -0x18) = pcVar7;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            iVar6 = -0x7ff8fff2;
          }
          else {
            iVar6 = meth_0x47bbf1(this_00,pcVar7);
            if (-1 < iVar6) {
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                this_00->mbr_0xc = this_00->mbr_0xc | 0x20;
                pcVar7->mbr_0x28 = this_00->mbr_0x28;
                (**(code **)(*(int *)this_00->mbr_0x28 + 4))((int *)this_00->mbr_0x28);
              }
              *(undefined4 *)(unaff_EBP + -0x18) = 0;
LAB_0047b9d7:
              if ((*(int *)(unaff_EBP + -0x10) != 0) ||
                 (iVar6 = meth_0x47bdc0(this_00,*(uint *)(unaff_EBP + 0x10),(int *)pcVar7->mbr_0x28)
                 , pcVar5 = extraout_ECX_00, -1 < iVar6)) {
                **(cls_0x668cd8 ***)(unaff_EBP + 0x18) = pcVar7;
                goto LAB_0047ba22;
              }
              goto LAB_0047b9fd;
            }
          }
          goto LAB_0047ba14;
        }
        if ((this_00->mbr_0x58 < 0x10000) && (this_00->mbr_0x30 < 0x10000)) {
          pcVar7 = (cls_0x668cd8 *)operator_new(0x70);
          *(cls_0x668cd8 **)(unaff_EBP + 8) = pcVar7;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            pcVar7 = (cls_0x668cd8 *)0x0;
          }
          else {
            pcVar7 = cls_0x668cd8(pcVar7,piVar4,uVar2,*(uint *)(unaff_EBP + 0xc));
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(cls_0x668cd8 **)(unaff_EBP + -0x14) = pcVar7;
          if (pcVar7 == (cls_0x668cd8 *)0x0) {
            iVar6 = -0x7ff8fff2;
          }
          else {
            iVar6 = meth_0x47ba34(this_00,pcVar7);
            if (-1 < iVar6) {
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                this_00->mbr_0xc = this_00->mbr_0xc | 0x20;
                pcVar7->mbr_0x28 = this_00->mbr_0x28;
                (**(code **)(*(int *)this_00->mbr_0x28 + 4))((int *)this_00->mbr_0x28);
              }
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              goto LAB_0047b9d7;
            }
          }
          goto LAB_0047ba07;
        }
      }
    }
    iVar6 = -0x7789f794;
  }
LAB_0047ba22:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}



int __thiscall cls_0x668cd8::meth_0x47ba34(cls_0x668cd8 *this,void *param_1)

{
  short sVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pvVar3 = param_1;
  *(dword *)((int)param_1 + 0xc) =
       (this->mbr_0xc ^ *(uint *)((int)param_1 + 0xc)) & 0x20 ^ this->mbr_0xc;
  local_c = 0;
  local_10 = 0;
  local_8 = meth_0x478854((cls_0x668cd8 *)param_1,this->mbr_0x58,this->mbr_0x30);
  if (((-1 < local_8) &&
      (local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,&local_10,0), -1 < local_8)) &&
     (local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this,&local_c,0x10), -1 < local_8)) {
    if ((*(byte *)&this->mbr_0xc & 4) != 0) {
      puVar4 = (undefined4 *)this->mbr_0x48;
      puVar10 = *(undefined4 **)((int)param_1 + 0x48);
      for (uVar5 = this->mbr_0x58 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined *)puVar10 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    if ((*(byte *)&this->mbr_0xc & 8) != 0) {
      uVar7 = this->mbr_0x58 << 1;
      puVar4 = (undefined4 *)this->mbr_0x4c;
      puVar10 = *(undefined4 **)((int)param_1 + 0x4c);
      for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined *)puVar10 = *(undefined *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    if (this->mbr_0x50 != 0) {
      puVar4 = (undefined4 *)operator_new(this->mbr_0x54 * 0x14);
      *(undefined4 **)((int)param_1 + 0x50) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
        goto LAB_0047bbc9;
      }
      puVar10 = (undefined4 *)this->mbr_0x50;
      for (uVar5 = this->mbr_0x54 * 5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined *)puVar4 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(dword *)((int)param_1 + 0x54) = this->mbr_0x54;
    }
    iVar6 = 0;
    param_1 = (void *)0x0;
    if (this->mbr_0x58 != 0) {
      do {
        psVar8 = (short *)(local_10 + iVar6);
        iVar9 = (local_c + iVar6) - (int)psVar8;
        local_14 = 3;
        do {
          sVar1 = *(short *)(iVar9 + (int)psVar8);
          if (sVar1 == -1) {
            *psVar8 = -1;
          }
          else {
            *psVar8 = sVar1;
          }
          psVar8 = psVar8 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        param_1 = (void *)((int)param_1 + 1);
        iVar6 = iVar6 + 6;
      } while (param_1 < (void *)this->mbr_0x58);
    }
    if ((*(byte *)&this->mbr_0xc & 1) != 0) {
      iVar6 = 0;
      param_1 = (void *)0x0;
      if (this->mbr_0x58 != 0) {
        do {
          psVar8 = (short *)(*(int *)((int)pvVar3 + 0x44) + iVar6);
          iVar9 = (this->mbr_0x44 + iVar6) - (int)psVar8;
          local_14 = 3;
          do {
            sVar1 = *(short *)((int)psVar8 + iVar9);
            if (sVar1 == -1) {
              *psVar8 = -1;
            }
            else {
              *psVar8 = sVar1;
            }
            psVar8 = psVar8 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
          param_1 = (void *)((int)param_1 + 1);
          iVar6 = iVar6 + 6;
        } while (param_1 < (void *)this->mbr_0x58);
      }
    }
  }
LAB_0047bbc9:
  if (local_c != 0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_10 != 0) {
    piVar2 = *(int **)((int)pvVar3 + 0x3c);
    (**(code **)(*piVar2 + 0x30))(piVar2);
  }
  return local_8;
}



int __thiscall cls_0x668cd8::meth_0x47bbf1(cls_0x668cd8 *this,void *param_1)

{
  ushort uVar1;
  dword dVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pvVar4 = param_1;
  *(dword *)((int)param_1 + 0xc) =
       (this->mbr_0xc ^ *(uint *)((int)param_1 + 0xc)) & 0x20 ^ this->mbr_0xc;
  local_14 = 0;
  local_18 = 0;
  local_8 = cls_0x474d1a::meth_0x477c4c((cls_0x474d1a *)param_1,this->mbr_0x58,this->mbr_0x30);
  if (((-1 < local_8) &&
      (local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,&local_18,0), -1 < local_8)) &&
     (local_8 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this,&local_14,0x10), -1 < local_8)) {
    if ((*(byte *)&this->mbr_0xc & 4) != 0) {
      puVar5 = (undefined4 *)this->mbr_0x48;
      puVar9 = *(undefined4 **)((int)param_1 + 0x48);
      for (uVar6 = this->mbr_0x58 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined *)puVar9 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if ((*(byte *)&this->mbr_0xc & 8) != 0) {
      uVar8 = this->mbr_0x58 << 1;
      puVar5 = (undefined4 *)this->mbr_0x4c;
      puVar9 = *(undefined4 **)((int)param_1 + 0x4c);
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if (this->mbr_0x50 != 0) {
      puVar5 = (undefined4 *)operator_new(this->mbr_0x54 * 0x14);
      *(undefined4 **)((int)param_1 + 0x50) = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
        goto LAB_0047bd98;
      }
      puVar9 = (undefined4 *)this->mbr_0x50;
      for (uVar6 = this->mbr_0x54 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined *)puVar5 = *(undefined *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(dword *)((int)param_1 + 0x54) = this->mbr_0x54;
    }
    param_1 = (void *)0x0;
    if (this->mbr_0x58 != 0) {
      local_10 = 0;
      local_c = 0;
      do {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_10 + local_14 + uVar6 * 2);
          if (uVar1 == 0xffff) {
            *(undefined4 *)(local_c + local_18 + uVar6 * 4) = 0xffffffff;
          }
          else {
            *(uint *)(local_c + local_18 + uVar6 * 4) = (uint)uVar1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 3);
        param_1 = (void *)((int)param_1 + 1);
        local_c = local_c + 0xc;
        local_10 = local_10 + 6;
      } while (param_1 < (void *)this->mbr_0x58);
    }
    if (((*(byte *)&this->mbr_0xc & 1) != 0) && (param_1 = (void *)0x0, this->mbr_0x58 != 0)) {
      local_c = 0;
      local_10 = 0;
      do {
        dVar2 = this->mbr_0x44;
        iVar7 = *(int *)((int)pvVar4 + 0x44) + local_10;
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(dVar2 + local_c + uVar6 * 2);
          if (uVar1 == 0xffff) {
            *(undefined4 *)(iVar7 + uVar6 * 4) = 0xffffffff;
          }
          else {
            *(uint *)(iVar7 + uVar6 * 4) = (uint)uVar1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 3);
        param_1 = (void *)((int)param_1 + 1);
        local_10 = local_10 + 0xc;
        local_c = local_c + 6;
      } while (param_1 < (void *)this->mbr_0x58);
    }
  }
LAB_0047bd98:
  if (local_14 != 0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_18 != 0) {
    piVar3 = *(int **)((int)pvVar4 + 0x3c);
    (**(code **)(*piVar3 + 0x30))(piVar3);
  }
  return local_8;
}



int __thiscall cls_0x668cd8::meth_0x47bdc0(cls_0x668cd8 *this,uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  cls_0x4760ef local_134;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  local_c = (uint *)0x0;
  local_8 = (uint *)0x0;
  local_10 = (**(code **)(*param_2 + 0x2c))(param_2,0,0,&local_c,0x800);
  if ((-1 < local_10) && (local_10 = meth_0x474cfb(this,&local_8,0x10), -1 < local_10)) {
    if (param_1 == this->mbr_0x4) {
      uVar1 = this->mbr_0x30 * this->mbr_0x2c;
      puVar3 = local_8;
      puVar4 = local_c;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)puVar4 = *(undefined *)puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
    }
    else {
      cls_0x4760ef::cls_0x4760ef(&local_134,this->mbr_0x4,param_1);
      param_1 = 0;
      puVar3 = local_8;
      puVar4 = local_c;
      if (this->mbr_0x30 != 0) {
        do {
          cls_0x4760ef::meth_0x476257(&local_134,puVar3,puVar4);
          puVar3 = (uint *)((int)puVar3 + local_134.cls_0x474824.mbr_0x4);
          puVar4 = (uint *)((int)puVar4 + local_134.cls_0x474824.mbr_0x4);
          param_1 = param_1 + 1;
        } while (param_1 < this->mbr_0x30);
      }
    }
  }
  if (local_c != (uint *)0x0) {
    (**(code **)(*param_2 + 0x30))(param_2);
  }
  if (local_8 != (uint *)0x0) {
    (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
  }
  return local_10;
}



void __thiscall cls_0x668cd8::virt_meth_0x47be95(cls_0x668cd8 *this)

{
  ushort uVar1;
  cls_0x474d1a *this_00;
  dword dVar2;
  void *pvVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  dword dVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int unaff_EBP;
  undefined4 *puVar12;
  uint *puVar13;
  
  FUN_0061781c();
  this_00 = *(cls_0x474d1a **)(unaff_EBP + 8);
  cls_0x474d3c::cls_0x474d3c((cls_0x474d3c *)(unaff_EBP + -0x48),this_00);
  dVar7 = this_00->mbr_0x44;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(dword *)(unaff_EBP + -0x34) = dVar7;
  if (((*(int *)(unaff_EBP + 0xc) == 0) || (*(int *)(unaff_EBP + 0x10) == 0)) ||
     ((this_00->field_0x9 & 4) != 0)) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0x8876086c;
  }
  else {
    dVar7 = this_00->mbr_0x58;
    pvVar3 = operator_new(dVar7 * 6);
    *(void **)(unaff_EBP + -0x30) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar4 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      FUN_004010a0(pvVar3,6,dVar7,&LAB_00474d39);
      pvVar4 = pvVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar9 = 0;
    this_00->mbr_0x44 = (dword)pvVar4;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x8007000e;
    }
    else {
      puVar5 = *(undefined2 **)(unaff_EBP + 0xc);
      uVar10 = 0;
      if (this_00->mbr_0x58 != 0) {
        do {
          *(undefined2 *)(iVar9 + this_00->mbr_0x44) = *puVar5;
          *(undefined2 *)(iVar9 + 2 + this_00->mbr_0x44) = puVar5[2];
          puVar6 = puVar5 + 4;
          puVar5 = puVar5 + 6;
          *(undefined2 *)(iVar9 + 4 + this_00->mbr_0x44) = *puVar6;
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + 6;
        } while (uVar10 < this_00->mbr_0x58);
      }
      puVar12 = *(undefined4 **)(unaff_EBP + 0x10);
      for (uVar10 = this_00->mbr_0x30 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined *)puVar12 = 0xff;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      iVar9 = cls_0x474d1a::meth_0x474d1a(this_00,unaff_EBP + 8,0x10);
      *(int *)(unaff_EBP + 0xc) = iVar9;
      if (-1 < iVar9) {
        *(undefined4 *)&this_00->field_0x40 = *(undefined4 *)(unaff_EBP + 8);
        if (this_00->mbr_0x54 == 0) {
          *(dword *)(unaff_EBP + -0x54) = this_00->mbr_0x58;
          dVar2 = this_00->mbr_0x30;
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
          dVar7 = unaff_EBP - 0x5c;
          *(undefined4 *)(unaff_EBP + -0x58) = 0;
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          *(dword *)(unaff_EBP + -0x4c) = dVar2;
        }
        else {
          *(dword *)(unaff_EBP + -0x20) = this_00->mbr_0x54;
          dVar7 = this_00->mbr_0x50;
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          puVar13 = (uint *)(dVar7 + 4);
          *(uint **)(unaff_EBP + -0x28) = puVar13;
          do {
            uVar10 = *puVar13;
            uVar11 = puVar13[1] + uVar10;
            *(uint *)(unaff_EBP + -0x24) = uVar11;
            *(uint *)(unaff_EBP + -0x14) = uVar10;
            if (uVar10 < uVar11) {
              iVar9 = uVar10 * 6;
              *(int *)(unaff_EBP + -0x18) = iVar9;
              do {
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) + iVar9;
                do {
                  uVar1 = *(ushort *)(*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x10) * 2)
                  ;
                  if ((uVar1 != 0xffff) &&
                     (*(int *)(*(int *)(unaff_EBP + 0x10) + (uint)uVar1 * 4) == -1)) {
                    uVar10 = 0;
                    cls_0x474d3c::meth_0x478fcb
                              ((cls_0x474d3c *)(unaff_EBP + -0x48),
                               (ushort)*(undefined4 *)(unaff_EBP + -0x14),uVar1,'\0');
                    while (*(short *)(unaff_EBP + -0x44) != -1) {
                      uVar8 = cls_0x474d3c::meth_0x479507((cls_0x474d3c *)(unaff_EBP + -0x48));
                      *(undefined4 *)(unaff_EBP + -0x30) = uVar8;
                      if (*(char *)(unaff_EBP + -0x38) == '\0') {
                        uVar11 = (*(ushort *)(unaff_EBP + -0x42) + 1) % 3;
                      }
                      else {
                        uVar11 = (uint)*(ushort *)(unaff_EBP + -0x42);
                      }
                      uVar10 = uVar10 + 1;
                      *(uint *)(*(int *)(unaff_EBP + 0x10) +
                               (uint)*(ushort *)
                                      (*(int *)(unaff_EBP + 8) +
                                      ((uint)*(ushort *)(unaff_EBP + -0x30) * 3 + uVar11) * 2) * 4)
                           = (uint)uVar1;
                      if (10000 < uVar10) {
                        *(undefined4 *)(unaff_EBP + 0xc) = 0x88760b55;
                        goto LAB_0047c0d3;
                      }
                    }
                    uVar11 = *(uint *)(unaff_EBP + -0x24);
                    iVar9 = *(int *)(unaff_EBP + -0x18);
                  }
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                } while (*(uint *)(unaff_EBP + -0x10) < 3);
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                iVar9 = iVar9 + 6;
                *(int *)(unaff_EBP + -0x18) = iVar9;
              } while (*(uint *)(unaff_EBP + -0x14) < uVar11);
              puVar13 = *(uint **)(unaff_EBP + -0x28);
            }
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            puVar13 = puVar13 + 5;
            *(uint **)(unaff_EBP + -0x28) = puVar13;
          } while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(unaff_EBP + -0x20));
        }
        uVar10 = 0;
        if (this_00->mbr_0x30 != 0) {
          do {
            puVar13 = (uint *)(*(int *)(unaff_EBP + 0x10) + uVar10 * 4);
            if (*puVar13 == 0xffffffff) {
              *puVar13 = uVar10;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < this_00->mbr_0x30);
        }
      }
    }
LAB_0047c0d3:
    if (*(int *)(unaff_EBP + 8) != 0) {
      (**(code **)(*(int *)this_00->mbr_0x3c + 0x30))((int *)this_00->mbr_0x3c);
    }
  }
  *(undefined4 *)&this_00->field_0x40 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)this_00->mbr_0x44);
}



void __thiscall cls_0x668cd8::virt_meth_0x47c109(cls_0x668cd8 *this)

{
  ushort *puVar1;
  undefined4 uVar2;
  cls_0x668cd8 *this_00;
  dword dVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  cls_0x668cd8 *extraout_ECX;
  cls_0x668cd8 *extraout_ECX_00;
  undefined4 *puVar13;
  cls_0x668cd8 *this_01;
  int *piVar14;
  int unaff_EBP;
  float fVar15;
  int iVar16;
  float *pfVar17;
  
  FUN_0061781c();
  this_00 = *(cls_0x668cd8 **)(unaff_EBP + 8);
  uVar8 = this_00->mbr_0x4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  cls_0x474824::cls_0x474824((cls_0x474824 *)(unaff_EBP + -0x9c),uVar8);
  uVar8 = this_00->mbr_0x30 / 3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(uint *)(unaff_EBP + -0x40) = uVar8;
  if ((*(int *)(unaff_EBP + 0x10) != 0) && ((*(byte *)((int)&this_00->mbr_0x8 + 1) & 4) == 0)) {
    uVar8 = uVar8 << 2;
    *(uint *)(unaff_EBP + 8) = uVar8;
    pvVar9 = operator_new(uVar8);
    dVar3 = this_00->mbr_0x30;
    *(void **)(unaff_EBP + -0x34) = pvVar9;
    pvVar9 = operator_new(dVar3 * 0x14);
    *(void **)(unaff_EBP + -0x48) = pvVar9;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar9 == (void *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      FUN_004010a0(pvVar9,0x14,dVar3,&LAB_00474d39);
      *(void **)(unaff_EBP + -0x1c) = pvVar9;
    }
    dVar3 = this_00->mbr_0x30;
    iVar12 = *(int *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x44) = iVar12;
    pvVar9 = operator_new(dVar3 << 2);
    *(void **)(unaff_EBP + -0x20) = pvVar9;
    pvVar9 = operator_new(this_00->mbr_0x58 * 0xc);
    *(void **)(unaff_EBP + -0x28) = pvVar9;
    pvVar9 = operator_new(this_00->mbr_0x30 << 2);
    *(void **)(unaff_EBP + -0x14) = pvVar9;
    if ((((*(undefined4 **)(unaff_EBP + -0x34) != (undefined4 *)0x0) && (iVar12 != 0)) &&
        (*(int *)(unaff_EBP + -0x20) != 0)) &&
       ((*(int *)(unaff_EBP + -0x28) != 0 && (pvVar9 != (void *)0x0)))) {
      uVar8 = *(uint *)(unaff_EBP + 8);
      puVar10 = *(undefined4 **)(unaff_EBP + -0x34);
      for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar10 = *(undefined4 **)(unaff_EBP + -0x20);
      for (uVar8 = this_00->mbr_0x30 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 1;
      }
      for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined *)puVar10 = 0xff;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar12 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)this_00,unaff_EBP + -0x2c,0x10);
      if (-1 < iVar12) {
        dVar3 = this_00->mbr_0x58;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (dVar3 != 0) {
          puVar10 = *(undefined4 **)(unaff_EBP + -0x28);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          do {
            *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x2c);
            uVar8 = 0;
            do {
              iVar12 = *(int *)(unaff_EBP + -0x20);
              puVar1 = (ushort *)(*(int *)(unaff_EBP + -0x30) + uVar8 * 2);
              *puVar10 = *(undefined4 *)(iVar12 + (uint)*puVar1 * 4);
              iVar16 = *(int *)(unaff_EBP + -0x18) + uVar8;
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 1;
              *(int *)(iVar12 + (uint)*puVar1 * 4) = iVar16;
            } while (uVar8 < 3);
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 6;
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 3;
          } while (*(uint *)(unaff_EBP + -0x10) < this_00->mbr_0x58);
        }
        iVar12 = meth_0x474cfb(this_00,unaff_EBP + -0x24,0x10);
        if (-1 < iVar12) {
          if (NAN(*(float *)(unaff_EBP + 0xc)) == (*(float *)(unaff_EBP + 0xc) == 0.0)) {
            pvVar9 = operator_new(this_00->mbr_0x30 << 2);
            dVar3 = this_00->mbr_0x30;
            *(void **)(unaff_EBP + -0x3c) = pvVar9;
            puVar10 = (undefined4 *)operator_new(dVar3 << 2);
            uVar8 = 0;
            *(undefined4 **)(unaff_EBP + -0x38) = puVar10;
            if ((pvVar9 == (void *)0x0) || (puVar10 == (undefined4 *)0x0)) goto LAB_0047c51d;
            puVar13 = *(undefined4 **)(unaff_EBP + -0x24);
            if (this_00->mbr_0x30 != 0) {
              do {
                uVar2 = *puVar13;
                puVar13 = (undefined4 *)((int)puVar13 + *(int *)(unaff_EBP + -0x98));
                *(undefined4 *)((int)pvVar9 + uVar8 * 4) = uVar2;
                uVar8 = uVar8 + 1;
              } while (uVar8 < this_00->mbr_0x30);
            }
            FUN_0047b51d(puVar10,(int)pvVar9,this_00->mbr_0x30);
            uVar8 = this_00->mbr_0x30;
            fVar15 = *(float *)(unaff_EBP + 0xc) * *(float *)(unaff_EBP + 0xc);
            *(undefined4 *)(unaff_EBP + 8) = 0;
            puVar13 = *(undefined4 **)(unaff_EBP + -0x14);
            for (uVar8 = uVar8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar13 = 0xffffffff;
              puVar13 = puVar13 + 1;
            }
            for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
              *(undefined *)puVar13 = 0xff;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            this_01 = (cls_0x668cd8 *)this_00->mbr_0x30;
            if (this_01 != (cls_0x668cd8 *)0x0) {
              *(undefined4 *)(unaff_EBP + -0x18) = 1;
              *(undefined4 **)(unaff_EBP + -0x10) = puVar10;
              do {
                if (*(cls_0x668cd8 **)(unaff_EBP + 8) < this_01) {
                  iVar12 = **(int **)(unaff_EBP + -0x10);
                  do {
                    fVar5 = *(float *)(*(int *)(unaff_EBP + -0x3c) + iVar12 * 4) -
                            *(float *)(*(int *)(unaff_EBP + -0x3c) +
                                      puVar10[*(int *)(unaff_EBP + 8)] * 4);
                    if (fVar5 < *(float *)(unaff_EBP + 0xc) ==
                        (fVar5 == *(float *)(unaff_EBP + 0xc))) break;
                    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                  } while (*(cls_0x668cd8 **)(unaff_EBP + 8) < this_01);
                }
                piVar4 = *(int **)(unaff_EBP + -0x10);
                iVar12 = *piVar4;
                piVar14 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar12 * 4);
                if (*piVar14 == -1) {
                  *piVar14 = iVar12;
                  pfVar17 = (float *)(*piVar4 * *(int *)(unaff_EBP + -0x98) +
                                     *(int *)(unaff_EBP + -0x24));
                  uVar8 = *(uint *)(unaff_EBP + -0x18);
                  while (*(uint *)(unaff_EBP + -0x30) = uVar8, uVar8 < *(uint *)(unaff_EBP + 8)) {
                    iVar12 = puVar10[uVar8];
                    piVar14 = (int *)(*(int *)(unaff_EBP + -0x14) + iVar12 * 4);
                    iVar16 = *piVar14;
                    *(int *)(unaff_EBP + -0x1c) = iVar12;
                    *(int **)(unaff_EBP + -0x40) = piVar14;
                    if (iVar16 == -1) {
                      puVar10 = (undefined4 *)
                                (iVar12 * *(int *)(unaff_EBP + -0x98) + *(int *)(unaff_EBP + -0x24))
                      ;
                      *(undefined4 *)(unaff_EBP + -0x54) = *puVar10;
                      *(undefined4 *)(unaff_EBP + -0x50) = puVar10[1];
                      *(undefined4 *)(unaff_EBP + -0x4c) = puVar10[2];
                      fVar7 = *(float *)(unaff_EBP + -0x54) - *pfVar17;
                      *(float *)(unaff_EBP + -0x54) = fVar7;
                      fVar6 = *(float *)(unaff_EBP + -0x50) - pfVar17[1];
                      *(float *)(unaff_EBP + -0x50) = fVar6;
                      fVar5 = *(float *)(unaff_EBP + -0x4c) - pfVar17[2];
                      *(float *)(unaff_EBP + -0x4c) = fVar5;
                      fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
                      if (fVar5 < fVar15 != (NAN(fVar5) || NAN(fVar15))) {
                        iVar12 = **(int **)(unaff_EBP + -0x10);
                        uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x20) + iVar12 * 4);
                        *(int *)(unaff_EBP + -0x48) = iVar12;
                        if (uVar8 != 0xffffffff) {
                          do {
                            puVar1 = (ushort *)(*(int *)(unaff_EBP + -0x2c) + (uVar8 / 3) * 6);
                            if ((((uint)*puVar1 == *(uint *)(unaff_EBP + -0x1c)) ||
                                ((uint)puVar1[1] == *(uint *)(unaff_EBP + -0x1c))) ||
                               ((uint)puVar1[2] == *(uint *)(unaff_EBP + -0x1c))) goto LAB_0047c4db;
                            uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x28) + uVar8 * 4);
                          } while (uVar8 != 0xffffffff);
                          piVar14 = *(int **)(unaff_EBP + -0x40);
                          iVar12 = *(int *)(unaff_EBP + -0x48);
                        }
                        *piVar14 = iVar12;
                      }
LAB_0047c4db:
                      puVar10 = *(undefined4 **)(unaff_EBP + -0x38);
                    }
                    uVar8 = *(int *)(unaff_EBP + -0x30) + 1;
                  }
                }
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
                this_01 = (cls_0x668cd8 *)this_00->mbr_0x30;
              } while ((cls_0x668cd8 *)(*(int *)(unaff_EBP + -0x18) - 1U) < this_01);
            }
          }
          else {
            pfVar17 = *(float **)(unaff_EBP + -0x24);
            fVar15 = 0.0;
            this_01 = extraout_ECX;
            if (this_00->mbr_0x30 != 0) {
              do {
                iVar12 = FUN_0047c587(pfVar17,fVar15,*(int *)(unaff_EBP + -0x34),
                                      *(int *)(unaff_EBP + -0x1c),*(uint *)(unaff_EBP + -0x40),
                                      *(int *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x28),
                                      *(int *)(unaff_EBP + -0x2c),(int *)(unaff_EBP + -0x58),
                                      (float *)(unaff_EBP + -0x5c));
                if (iVar12 == 0) {
                  *(float *)(*(int *)(unaff_EBP + -0x14) + (int)fVar15 * 4) = fVar15;
                  this_01 = extraout_ECX_00;
                }
                else {
                  this_01 = *(cls_0x668cd8 **)(unaff_EBP + -0x14);
                  (&this_01->vftptr_0x0)[(int)fVar15] =
                       *(cls_0x668cd8__vftable_668cd8 **)(unaff_EBP + -0x5c);
                }
                pfVar17 = (float *)((int)pfVar17 + *(int *)(unaff_EBP + -0x98));
                fVar15 = (float)((int)fVar15 + 1);
              } while ((uint)fVar15 < this_00->mbr_0x30);
            }
          }
          (*this_00->vftptr_0x0->virt_meth_0x47841a_76)
                    (this_01,(int)this_00,*(undefined4 **)(unaff_EBP + -0x14));
        }
      }
    }
  }
LAB_0047c51d:
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x34));
}



int __thiscall cls_0x668cd8::meth_0x47c9d6(cls_0x668cd8 *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  if (this->mbr_0x54 != 0) {
    local_c = 0;
    do {
      iVar1 = this->mbr_0x50 + local_c;
      uVar4 = *(uint *)(iVar1 + 4);
      local_8 = 0;
      local_14 = cls_0x475cf0::meth_0x47a70b((cls_0x475cf0 *)param_1,uVar4,*(int *)(iVar1 + 8),'\0')
      ;
      if (local_14 < 0) {
        return local_14;
      }
      while (uVar3 = cls_0x475cf0::meth_0x475cf0((cls_0x475cf0 *)param_1), uVar3 != 0xffffffff) {
        while( true ) {
          cls_0x475cf0::meth_0x47a7f7((cls_0x475cf0 *)param_1,uVar3);
          uVar2 = cls_0x475cf0::meth_0x47a85c((cls_0x475cf0 *)param_1,uVar3);
          iVar1 = local_8 + uVar4;
          local_8 = local_8 + 1;
          *(int *)(param_2 + uVar3 * 4) = iVar1;
          if (uVar2 == 3) break;
          uVar3 = *(uint *)(*(int *)((int)param_1 + 4) + (uVar2 + uVar3 * 3) * 4);
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x14;
    } while (local_10 < this->mbr_0x54);
  }
  uVar4 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      *(undefined4 *)(param_3 + uVar4 * 4) = 0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 < this->mbr_0x58);
  }
  uVar4 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      iVar1 = *(int *)(param_2 + uVar4 * 4);
      if (iVar1 != -1) {
        *(uint *)(param_3 + iVar1 * 4) = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < this->mbr_0x58);
  }
  return local_14;
}



void __thiscall cls_0x668cd8::meth_0x47caac(cls_0x668cd8 *this)

{
  int iVar1;
  cls_0x475cf0 *this_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar8;
  cls_0x475cf0 *pcVar9;
  
  FUN_0061781c();
  *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x6c);
  iVar1 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffffffff;
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 0x14) - iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar1 != 0) {
    this_00 = *(cls_0x475cf0 **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    do {
      iVar4 = *(int *)(extraout_ECX + 0x50) + *(int *)(unaff_EBP + -0x18);
      uVar6 = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar4 = cls_0x475d38::meth_0x475d38((cls_0x475d38 *)(unaff_EBP + -0x84));
      *(int *)(unaff_EBP + -0x20) = iVar4;
      if (iVar4 < 0) goto LAB_0047cb82;
      iVar4 = cls_0x475cf0::meth_0x47a70b
                        (this_00,*(uint *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + 8),'\0');
      *(int *)(unaff_EBP + -0x20) = iVar4;
      if (iVar4 < 0) goto LAB_0047cb82;
LAB_0047cb33:
      iVar4 = cls_0x475cf0::meth_0x475cf0(this_00);
      *(int *)(unaff_EBP + -0x30) = iVar4;
      if (iVar4 != -1) {
        piVar7 = (int *)(this_00->mbr_0x4 + iVar4 * 0xc);
        iVar1 = *piVar7;
        if ((iVar1 == -1) ||
           (*(char *)(this_00->mbr_0x18 + (iVar1 - this_00->mbr_0x1c) * 0xc) != '\0')) {
          iVar1 = piVar7[1];
          if ((iVar1 == -1) ||
             (*(char *)(this_00->mbr_0x18 + (iVar1 - this_00->mbr_0x1c) * 0xc) != '\0')) {
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x2c) = 2;
          }
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x2c) = 1;
        }
        do {
          if (*(int *)(unaff_EBP + -0x38) != -1) {
            uVar6 = *(undefined4 *)(unaff_EBP + -0x2c);
            *(undefined4 *)(unaff_EBP + 8) = 1;
            *(int *)(unaff_EBP + -0x40) = iVar4;
            while( true ) {
              *(undefined4 *)(unaff_EBP + -0x3c) = uVar6;
              piVar7 = (int *)FUN_00475e60((int *)(unaff_EBP + -0x50),(int *)(unaff_EBP + -0x40),
                                           (int)this_00);
              iVar1 = *piVar7;
              *(int *)(unaff_EBP + -0x44) = piVar7[1];
              if ((iVar1 == -1) ||
                 (*(char *)(this_00->mbr_0x18 + (iVar1 - this_00->mbr_0x1c) * 0xc) != '\0')) break;
              *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
              uVar6 = *(undefined4 *)(unaff_EBP + -0x44);
              *(int *)(unaff_EBP + -0x40) = iVar1;
            }
            if (*(int *)(unaff_EBP + -0x28) <
                *(int *)(unaff_EBP + 8) + -1 + *(int *)(unaff_EBP + -0x10)) {
              if (*(char *)(this_00->mbr_0x18 +
                           (*(int *)(unaff_EBP + -0x38) - this_00->mbr_0x1c) * 0xc) == '\0') {
                iVar4 = *(int *)(unaff_EBP + -0x38);
                *(int *)(unaff_EBP + -0x30) = iVar4;
                *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x34);
              }
              *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
            }
          }
          while( true ) {
            while( true ) {
              cls_0x475cf0::meth_0x47a7f7(this_00,iVar4);
              iVar1 = *(int *)(unaff_EBP + -0x14);
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
              *(undefined4 *)(unaff_EBP + 8) = 0;
              *(int *)(*(int *)(unaff_EBP + 0xc) + iVar4 * 4) = iVar1 + *(int *)(unaff_EBP + -0x24);
              iVar1 = *(int *)(extraout_ECX + 0x40);
              do {
                cls_0x475d38::meth_0x47a6c1
                          ((cls_0x475d38 *)(unaff_EBP + -0x84),
                           *(int *)(iVar1 + iVar4 * 0xc + *(int *)(unaff_EBP + 8) * 4),
                           (char *)(unaff_EBP + 0x17));
                *(int *)(unaff_EBP + -0x10) =
                     *(int *)(unaff_EBP + -0x10) + (1 - (uint)*(byte *)(unaff_EBP + 0x17));
                *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
              } while (*(uint *)(unaff_EBP + 8) < 3);
              piVar7 = (int *)FUN_00475e60((int *)(unaff_EBP + -0x58),(int *)(unaff_EBP + -0x30),
                                           (int)this_00);
              iVar4 = *piVar7;
              *(int **)(unaff_EBP + 8) = piVar7;
              *(int *)(unaff_EBP + -0x5c) = piVar7[1];
              pcVar9 = this_00;
              piVar7 = (int *)FUN_00475eab((undefined4 *)(unaff_EBP + -0x68),
                                           (undefined4 *)(unaff_EBP + -0x30));
              piVar7 = (int *)FUN_00475e60((int *)(unaff_EBP + -0x70),piVar7,(int)pcVar9);
              iVar1 = *piVar7;
              *(int *)(unaff_EBP + -0x5c) = piVar7[1];
              if ((iVar4 == -1) ||
                 (*(char *)(this_00->mbr_0x18 + (iVar4 - this_00->mbr_0x1c) * 0xc) != '\0')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((iVar1 == -1) ||
                 (*(char *)(this_00->mbr_0x18 + (iVar1 - this_00->mbr_0x1c) * 0xc) != '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar2) break;
              if ((bVar3) && (*(int *)(unaff_EBP + -0x38) == -1)) {
                iVar4 = *piVar7;
                iVar1 = piVar7[1];
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(int *)(unaff_EBP + -0x38) = iVar4;
                *(int *)(unaff_EBP + -0x34) = iVar1;
              }
              iVar4 = **(int **)(unaff_EBP + 8);
              iVar1 = (*(int **)(unaff_EBP + 8))[1];
              *(int *)(unaff_EBP + -0x30) = iVar4;
              *(int *)(unaff_EBP + -0x2c) = iVar1;
            }
            if (bVar3) break;
            iVar4 = *(int *)(unaff_EBP + -0x38);
            *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
            *(int *)(unaff_EBP + -0x30) = iVar4;
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x34);
            if ((iVar4 == -1) ||
               (*(char *)(this_00->mbr_0x18 + (iVar4 - this_00->mbr_0x1c) * 0xc) != '\0'))
            goto LAB_0047cb33;
          }
          iVar4 = *piVar7;
          iVar1 = piVar7[1];
          *(int *)(unaff_EBP + -0x30) = iVar4;
          *(int *)(unaff_EBP + -0x2c) = iVar1;
        } while( true );
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x14;
    } while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(extraout_ECX + 0x54));
  }
  uVar8 = 0;
  iVar4 = *(int *)(unaff_EBP + 0x10);
  uVar5 = 0;
  if (*(int *)(extraout_ECX + 0x58) != 0) {
    do {
      *(undefined4 *)(iVar4 + uVar5 * 4) = 0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(extraout_ECX + 0x58));
    if (*(int *)(extraout_ECX + 0x58) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + uVar8 * 4);
        if (iVar1 != -1) {
          *(uint *)(iVar4 + iVar1 * 4) = uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(extraout_ECX + 0x58));
    }
  }
LAB_0047cb82:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x74));
}



int __thiscall cls_0x668cd8::meth_0x47cda9(cls_0x668cd8 *this,void *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  uint local_10;
  int local_c;
  short local_8;
  
  this_00 = param_1;
  local_18 = 0;
  local_10 = 0;
  if (this->mbr_0x54 != 0) {
    local_c = 0;
    do {
      iVar5 = 0;
      iVar3 = this->mbr_0x50 + local_c;
      iVar2 = *(int *)(iVar3 + 4);
      local_18 = cls_0x475d0f::meth_0x47a934
                           ((cls_0x475d0f *)this_00,(ushort)iVar2,(ushort)*(undefined4 *)(iVar3 + 8)
                            ,'\0');
      if (local_18 < 0) {
        return local_18;
      }
      while (param_1 = (void *)cls_0x475d0f::meth_0x475d0f((cls_0x475d0f *)this_00),
            (short)param_1 != -1) {
        while( true ) {
          cls_0x475d0f::meth_0x47aa30((cls_0x475d0f *)this_00,(ushort)param_1);
          uVar4 = cls_0x475d0f::meth_0x47aaab((cls_0x475d0f *)this_00,(ushort)param_1);
          iVar3 = iVar5 + iVar2;
          iVar5 = iVar5 + 1;
          local_8 = (short)uVar4;
          *(int *)(param_2 + ((uint)param_1 & 0xffff) * 4) = iVar3;
          if (local_8 == 3) break;
          param_1 = (void *)(uint)*(ushort *)
                                   (*(int *)((int)this_00 + 4) +
                                   (((uint)param_1 & 0xffff) * 3 + (uVar4 & 0xffff)) * 2);
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x14;
    } while (local_10 < this->mbr_0x54);
  }
  uVar4 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      *(undefined4 *)(param_3 + uVar4 * 4) = 0xffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 < this->mbr_0x58);
  }
  uVar4 = 0;
  if (this->mbr_0x58 != 0) {
    do {
      uVar1 = *(ushort *)(param_2 + uVar4 * 4);
      if (uVar1 != 0xffff) {
        *(uint *)(param_3 + (uint)uVar1 * 4) = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < this->mbr_0x58);
  }
  return local_18;
}



void __thiscall cls_0x668cd8::meth_0x47ce9f(cls_0x668cd8 *this)

{
  ushort uVar1;
  int iVar2;
  cls_0x475d0f *this_00;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  ushort *puVar9;
  uint *puVar10;
  int extraout_ECX;
  uint uVar11;
  int unaff_EBP;
  cls_0x475d0f *pcVar12;
  
  FUN_0061781c();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int *)(unaff_EBP + -0x80) = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x6c);
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
  iVar2 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 0x14) - iVar4;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xffff;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar4 = extraout_ECX;
  if (iVar2 != 0) {
    this_00 = *(cls_0x475d0f **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    do {
      iVar4 = *(int *)(iVar4 + 0x50) + *(int *)(unaff_EBP + -0x1c);
      uVar7 = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      iVar4 = cls_0x475dca::meth_0x475dca((cls_0x475dca *)(unaff_EBP + -0x8c));
      *(int *)(unaff_EBP + -0x24) = iVar4;
      if (iVar4 < 0) goto LAB_0047cf90;
      iVar4 = cls_0x475d0f::meth_0x47a934
                        (this_00,(ushort)*(undefined4 *)(unaff_EBP + -0x28),
                         (ushort)*(undefined4 *)(unaff_EBP + 0x14),'\0');
      *(int *)(unaff_EBP + -0x24) = iVar4;
      if (iVar4 < 0) goto LAB_0047cf90;
LAB_0047cf2f:
      uVar5 = cls_0x475d0f::meth_0x475d0f(this_00);
      uVar5 = uVar5 & 0xffff;
      *(uint *)(unaff_EBP + -0x38) = uVar5;
      if (uVar5 != 0xffff) {
        puVar9 = (ushort *)(this_00->mbr_0x4 + uVar5 * 6);
        uVar1 = *puVar9;
        if ((uVar1 == 0xffff) ||
           (*(char *)(this_00->mbr_0x10 + ((uint)uVar1 - (uint)this_00->mbr_0x14) * 6) != '\0')) {
          uVar1 = puVar9[1];
          if ((uVar1 == 0xffff) ||
             (*(char *)(this_00->mbr_0x10 + ((uint)uVar1 - (uint)this_00->mbr_0x14) * 6) != '\0')) {
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x34) = 2;
          }
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x34) = 1;
        }
        do {
          if (*(int *)(unaff_EBP + -0x40) != 0xffff) {
            uVar7 = *(undefined4 *)(unaff_EBP + -0x34);
            *(undefined4 *)(unaff_EBP + 0x14) = 1;
            *(uint *)(unaff_EBP + -0x48) = uVar5;
            while( true ) {
              *(undefined4 *)(unaff_EBP + -0x44) = uVar7;
              puVar8 = FUN_00475ecb((uint *)(unaff_EBP + -0x58),(ushort *)(unaff_EBP + -0x48),
                                    (int)this_00);
              uVar11 = *puVar8;
              *(uint *)(unaff_EBP + -0x4c) = puVar8[1];
              if ((uVar11 == 0xffff) ||
                 (*(char *)(this_00->mbr_0x10 + ((uVar11 & 0xffff) - (uint)this_00->mbr_0x14) * 6)
                  != '\0')) break;
              *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
              uVar7 = *(undefined4 *)(unaff_EBP + -0x4c);
              *(uint *)(unaff_EBP + -0x48) = uVar11;
            }
            if (*(int *)(unaff_EBP + -0x2c) <
                *(int *)(unaff_EBP + 0x14) + -1 + *(int *)(unaff_EBP + -0x14)) {
              if (*(char *)(this_00->mbr_0x10 +
                           ((uint)*(ushort *)(unaff_EBP + -0x40) - (uint)this_00->mbr_0x14) * 6) ==
                  '\0') {
                uVar5 = *(uint *)(unaff_EBP + -0x40);
                *(uint *)(unaff_EBP + -0x38) = uVar5;
                *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x3c);
              }
              *(undefined4 *)(unaff_EBP + -0x40) = 0xffff;
            }
          }
          while( true ) {
            while( true ) {
              cls_0x475d0f::meth_0x47aa30(this_00,(ushort)uVar5);
              uVar1 = *(ushort *)(unaff_EBP + -0x18);
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
              *(undefined4 *)(unaff_EBP + 0x14) = 0;
              *(uint *)(*(int *)(unaff_EBP + 0xc) + uVar5 * 4) =
                   (uint)uVar1 + *(int *)(unaff_EBP + -0x28);
              iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x40);
              do {
                cls_0x475dca::meth_0x47a6e6
                          ((cls_0x475dca *)(unaff_EBP + -0x8c),
                           *(short *)(iVar4 + uVar5 * 6 + *(int *)(unaff_EBP + 0x14) * 2),
                           (char *)(unaff_EBP + 0xb));
                *(int *)(unaff_EBP + -0x14) =
                     *(int *)(unaff_EBP + -0x14) + (1 - (uint)*(byte *)(unaff_EBP + 0xb));
                *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
              } while (*(uint *)(unaff_EBP + 0x14) < 3);
              puVar8 = FUN_00475ecb((uint *)(unaff_EBP + -0x60),(ushort *)(unaff_EBP + -0x38),
                                    (int)this_00);
              *(uint *)(unaff_EBP + -100) = puVar8[1];
              *(uint **)(unaff_EBP + -0x30) = puVar8;
              pcVar12 = this_00;
              puVar9 = (ushort *)
                       FUN_00475eab((undefined4 *)(unaff_EBP + -0x70),
                                    (undefined4 *)(unaff_EBP + -0x38));
              puVar10 = FUN_00475ecb((uint *)(unaff_EBP + -0x78),puVar9,(int)pcVar12);
              *(uint *)(unaff_EBP + -100) = puVar10[1];
              if ((*puVar8 == 0xffff) ||
                 (*(char *)(this_00->mbr_0x10 + ((*puVar8 & 0xffff) - (uint)this_00->mbr_0x14) * 6)
                  != '\0')) {
                *(undefined *)(unaff_EBP + 0x17) = 0;
              }
              else {
                *(undefined *)(unaff_EBP + 0x17) = 1;
              }
              if ((*puVar10 == 0xffff) ||
                 (*(char *)(this_00->mbr_0x10 + ((*puVar10 & 0xffff) - (uint)this_00->mbr_0x14) * 6)
                  != '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (*(char *)(unaff_EBP + 0x17) == '\0') break;
              if ((bVar3) && (*(int *)(unaff_EBP + -0x40) == 0xffff)) {
                uVar5 = *puVar10;
                uVar11 = puVar10[1];
                *(undefined4 *)(unaff_EBP + -0x14) = 0;
                *(uint *)(unaff_EBP + -0x40) = uVar5;
                *(uint *)(unaff_EBP + -0x3c) = uVar11;
              }
              uVar5 = *puVar8;
              uVar7 = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 4);
              *(uint *)(unaff_EBP + -0x38) = uVar5;
              *(undefined4 *)(unaff_EBP + -0x34) = uVar7;
            }
            if (bVar3) break;
            uVar5 = *(uint *)(unaff_EBP + -0x40);
            *(uint *)(unaff_EBP + -0x38) = uVar5;
            *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x3c);
            *(undefined4 *)(unaff_EBP + -0x40) = 0xffff;
            if ((uVar5 == 0xffff) ||
               (*(char *)(this_00->mbr_0x10 + ((uVar5 & 0xffff) - (uint)this_00->mbr_0x14) * 6) !=
                '\0')) goto LAB_0047cf2f;
          }
          uVar5 = *puVar10;
          uVar11 = puVar10[1];
          *(uint *)(unaff_EBP + -0x38) = uVar5;
          *(uint *)(unaff_EBP + -0x34) = uVar11;
        } while( true );
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      iVar4 = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x14;
    } while (*(uint *)(unaff_EBP + -0x20) < *(uint *)(iVar4 + 0x54));
  }
  uVar11 = 0;
  iVar2 = *(int *)(unaff_EBP + 0x10);
  uVar5 = 0;
  if (*(int *)(iVar4 + 0x58) != 0) {
    uVar6 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar2 + uVar6 * 4) = 0xffff;
      uVar6 = uVar5 & 0xffff;
    } while (uVar6 < *(uint *)(iVar4 + 0x58));
    if (*(int *)(iVar4 + 0x58) != 0) {
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(*(int *)(unaff_EBP + 0xc) + uVar5 * 4);
        if (uVar1 != 0xffff) {
          *(uint *)(iVar2 + (uint)uVar1 * 4) = uVar5;
        }
        uVar11 = uVar11 + 1;
        uVar5 = uVar11 & 0xffff;
      } while (uVar5 < *(uint *)(iVar4 + 0x58));
    }
  }
LAB_0047cf90:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBP + -0x7c));
}



undefined4 __thiscall cls_0x668cd8::meth_0x47d538(cls_0x668cd8 *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  cls_0x475a80 *pcVar8;
  cls_0x668cd8 *extraout_ECX;
  dword dVar9;
  uint uVar10;
  int *piVar11;
  cls_0x668cd8 *this_00;
  int unaff_EBP;
  dword *pdVar12;
  
  FUN_0061781c();
  dVar9 = extraout_ECX->mbr_0x68;
  *(cls_0x668cd8 **)(unaff_EBP + -0x38) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xc;
  if (dVar9 != 0) {
    *(dword *)(unaff_EBP + -0x44) = dVar9;
  }
  uVar3 = *(uint *)(unaff_EBP + 8);
  if (((uVar3 & 0x4000000) != 0) && (dVar9 == 0)) {
    uVar3 = uVar3 & 0xfbffffff | 0x8000000;
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = uVar3;
    puVar4 = (uint *)(unaff_EBP + -0x2c);
    *puVar4 = *puVar4 & 0x8000000;
    if ((*puVar4 == 0) || ((uVar3 & 0x4000000) == 0)) {
      dVar9 = extraout_ECX->mbr_0x54;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (dVar9 != 0) {
        puVar4 = (uint *)(extraout_ECX->mbr_0x50 + 8);
        do {
          if (*(uint *)(unaff_EBP + -0x24) < *puVar4) {
            *(uint *)(unaff_EBP + -0x24) = *puVar4;
          }
          puVar4 = puVar4 + 5;
          dVar9 = dVar9 - 1;
        } while (dVar9 != 0);
      }
      dVar9 = extraout_ECX->mbr_0x58;
      pvVar5 = operator_new(dVar9 * 0xc);
      *(void **)(unaff_EBP + 8) = pvVar5;
      *(undefined *)(unaff_EBP + -4) = 1;
      if (pvVar5 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      else {
        FUN_004010a0(pvVar5,0xc,dVar9,&LAB_00474d39);
        *(void **)(unaff_EBP + -0x10) = pvVar5;
      }
      *(undefined *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        dVar9 = extraout_ECX->mbr_0x54;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        this_00 = extraout_ECX;
        if (dVar9 != 0) {
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          do {
            iVar6 = this_00->mbr_0x50 + *(int *)(unaff_EBP + -0x28);
            uVar3 = *(uint *)(iVar6 + 4);
            uVar7 = *(int *)(iVar6 + 8) + uVar3;
            *(uint *)(unaff_EBP + -0x40) = uVar3;
            *(uint *)(unaff_EBP + -0x58) = uVar7;
            if (uVar3 < uVar7) {
              *(uint *)(unaff_EBP + -0x1c) = uVar3 * 3;
              *(uint *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0x10) + uVar3 * 4;
              *(uint *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x10) + uVar3 * 0xc;
              *(uint *)(unaff_EBP + -0x48) = uVar7 - uVar3;
              do {
                piVar11 = (int *)(*(int *)(unaff_EBP + 0x14) + **(int **)(unaff_EBP + -0x18) * 0xc);
                iVar6 = *(int *)(unaff_EBP + -0x34) - (int)piVar11;
                *(int **)(unaff_EBP + -0x3c) = piVar11;
                *(undefined4 *)(unaff_EBP + 8) = 1;
                *(int **)(unaff_EBP + -0x14) = piVar11;
                *(int *)(unaff_EBP + -0x54) = iVar6;
                *(undefined4 *)(unaff_EBP + -0x4c) = 3;
                do {
                  if (*piVar11 == -1) {
                    *(undefined4 *)(iVar6 + (int)piVar11) = 0xffffffff;
                  }
                  else {
                    uVar7 = *(uint *)(*(int *)(unaff_EBP + 0xc) + *piVar11 * 4);
                    if ((((uVar7 < uVar3) || (*(uint *)(unaff_EBP + -0x58) <= uVar7)) ||
                        (uVar10 = *(uint *)(unaff_EBP + 8) % 3,
                        iVar2 = **(int **)(unaff_EBP + -0x14),
                        iVar6 = *(int *)(*(int *)(unaff_EBP + -0x3c) + uVar10 * 4),
                        *(uint *)(unaff_EBP + -0x30) = uVar10, iVar2 == iVar6)) ||
                       (**(int **)(unaff_EBP + -0x14) ==
                        *(int *)(*(int *)(unaff_EBP + -0x3c) +
                                ((*(int *)(unaff_EBP + 8) + 1U) % 3) * 4))) {
                      uVar7 = 0xffffffff;
                    }
                    else {
                      iVar6 = FUN_00475157(*(int *)(unaff_EBP + 0x14) +
                                           *(int *)(*(int *)(unaff_EBP + 0x10) + uVar7 * 4) * 0xc,
                                           **(int **)(unaff_EBP + -0x18));
                      dVar9 = this_00->mbr_0x40;
                      *(undefined4 *)(unaff_EBP + -0x50) =
                           *(undefined4 *)
                            ((dVar9 - 4) +
                            (*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x1c)) * 4);
                      *(undefined4 *)(unaff_EBP + -0x5c) =
                           *(undefined4 *)
                            (dVar9 + (*(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x30)) * 4
                            );
                      *(undefined4 *)(unaff_EBP + -0x30) =
                           *(undefined4 *)(dVar9 + (uVar7 * 3 + iVar6) * 4);
                      if ((*(int *)(unaff_EBP + -0x50) !=
                           *(int *)(dVar9 + ((iVar6 + 1U) % 3 + uVar7 * 3) * 4)) ||
                         (*(int *)(unaff_EBP + -0x5c) != *(int *)(unaff_EBP + -0x30))) {
                        uVar7 = 0xffffffff;
                      }
                      this_00 = *(cls_0x668cd8 **)(unaff_EBP + -0x38);
                      uVar3 = *(uint *)(unaff_EBP + -0x40);
                    }
                    iVar6 = *(int *)(unaff_EBP + -0x54);
                    piVar11 = *(int **)(unaff_EBP + -0x14);
                    *(uint *)(iVar6 + (int)piVar11) = uVar7;
                  }
                  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                  piVar11 = piVar11 + 1;
                  piVar1 = (int *)(unaff_EBP + -0x4c);
                  *piVar1 = *piVar1 + -1;
                  *(int **)(unaff_EBP + -0x14) = piVar11;
                } while (*piVar1 != 0);
                *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0xc;
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
                *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 3;
                piVar11 = (int *)(unaff_EBP + -0x48);
                *piVar11 = *piVar11 + -1;
              } while (*piVar11 != 0);
            }
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x14;
          } while (*(uint *)(unaff_EBP + -0x20) < this_00->mbr_0x54);
        }
        uVar3 = 0;
        if (this_00->mbr_0x58 != 0) {
          puVar4 = *(uint **)(unaff_EBP + 0x10);
          iVar6 = *(int *)(unaff_EBP + 0xc) - (int)puVar4;
          do {
            *(uint *)(iVar6 + (int)puVar4) = uVar3;
            *puVar4 = uVar3;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar3 < this_00->mbr_0x58);
        }
        pcVar8 = cls_0x475a80::cls_0x475a80
                           ((cls_0x475a80 *)(unaff_EBP + -0xbc),this_00,
                            *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x24));
        pdVar12 = (dword *)(unaff_EBP + -0x8c);
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pdVar12 = pcVar8->mbr_0x0;
          pcVar8 = (cls_0x475a80 *)&pcVar8->mbr_0x4;
          pdVar12 = pdVar12 + 1;
        }
        cls_0x475a80::meth_0x475aa1((cls_0x475a80 *)(unaff_EBP + -0xbc));
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          meth_0x47caac(this_00);
        }
        else {
          meth_0x47c9d6(this_00,(void *)(unaff_EBP + -0x8c),*(int *)(unaff_EBP + 0xc),
                        *(int *)(unaff_EBP + 0x10));
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x10));
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cls_0x475a80::meth_0x475aa1((cls_0x475a80 *)(unaff_EBP + -0x8c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x8876086c;
}



undefined4 __thiscall cls_0x668cd8::meth_0x47d838(cls_0x668cd8 *this)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  cls_0x475cb6 *pcVar10;
  cls_0x668cd8 *extraout_ECX;
  dword dVar11;
  undefined2 *puVar12;
  uint uVar13;
  cls_0x668cd8 *this_00;
  int unaff_EBP;
  dword *pdVar14;
  
  FUN_0061781c();
  dVar11 = extraout_ECX->mbr_0x68;
  *(cls_0x668cd8 **)(unaff_EBP + -0x48) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xc;
  if (dVar11 != 0) {
    *(dword *)(unaff_EBP + -0x40) = dVar11;
  }
  uVar4 = *(uint *)(unaff_EBP + 8);
  if (((uVar4 & 0x4000000) != 0) && (dVar11 == 0)) {
    uVar4 = uVar4 & 0xfbffffff | 0x8000000;
  }
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *(uint *)(unaff_EBP + -0x28) = uVar4;
    puVar5 = (uint *)(unaff_EBP + -0x28);
    *puVar5 = *puVar5 & 0x8000000;
    if ((*puVar5 == 0) || ((uVar4 & 0x4000000) == 0)) {
      dVar11 = extraout_ECX->mbr_0x54;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (dVar11 != 0) {
        puVar5 = (uint *)(extraout_ECX->mbr_0x50 + 8);
        do {
          if (*(uint *)(unaff_EBP + -0x20) < *puVar5) {
            *(uint *)(unaff_EBP + -0x20) = *puVar5;
          }
          puVar5 = puVar5 + 5;
          dVar11 = dVar11 - 1;
        } while (dVar11 != 0);
      }
      dVar11 = extraout_ECX->mbr_0x58;
      pvVar6 = operator_new(dVar11 * 6);
      *(void **)(unaff_EBP + 8) = pvVar6;
      *(undefined *)(unaff_EBP + -4) = 1;
      if (pvVar6 == (void *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      else {
        FUN_004010a0(pvVar6,6,dVar11,&LAB_00474d39);
        *(void **)(unaff_EBP + -0x10) = pvVar6;
      }
      *(undefined *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        dVar11 = extraout_ECX->mbr_0x54;
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        this_00 = extraout_ECX;
        if (dVar11 != 0) {
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          do {
            iVar7 = this_00->mbr_0x50 + *(int *)(unaff_EBP + -0x1c);
            uVar4 = *(uint *)(iVar7 + 4);
            uVar13 = *(int *)(iVar7 + 8) + uVar4;
            *(uint *)(unaff_EBP + -0x50) = uVar13;
            if (uVar4 < uVar13) {
              *(uint *)(unaff_EBP + -0x30) = uVar4 * 3;
              *(uint *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0x10) + uVar4 * 4;
              puVar12 = (undefined2 *)(*(int *)(unaff_EBP + -0x10) + uVar4 * 6);
              *(uint *)(unaff_EBP + -0x38) = uVar13 - uVar4;
              do {
                piVar9 = (int *)(*(int *)(unaff_EBP + 0x14) + **(int **)(unaff_EBP + -0x18) * 0xc);
                *(int **)(unaff_EBP + -0x3c) = piVar9;
                *(undefined4 *)(unaff_EBP + 8) = 1;
                *(undefined2 **)(unaff_EBP + -0x34) = puVar12;
                *(int **)(unaff_EBP + -0x14) = piVar9;
                *(undefined4 *)(unaff_EBP + -0x44) = 3;
                do {
                  if (*piVar9 == -1) {
                    *puVar12 = 0xffff;
                  }
                  else {
                    uVar8 = (uint)*(ushort *)
                                   (*(int *)(unaff_EBP + 0xc) + (uint)*(ushort *)piVar9 * 4);
                    *(uint *)(unaff_EBP + -0x58) = uVar8;
                    if ((((uVar8 < uVar4) || (uVar13 <= uVar8)) ||
                        (uVar13 = *(uint *)(unaff_EBP + 8) % 3,
                        iVar2 = **(int **)(unaff_EBP + -0x14),
                        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x3c) + uVar13 * 4),
                        *(uint *)(unaff_EBP + -0x24) = uVar13, iVar2 == iVar7)) ||
                       (**(int **)(unaff_EBP + -0x14) ==
                        *(int *)(*(int *)(unaff_EBP + -0x3c) +
                                ((*(int *)(unaff_EBP + 8) + 1U) % 3) * 4))) {
                      uVar3 = 0xffff;
                    }
                    else {
                      iVar7 = FUN_00475157(*(int *)(unaff_EBP + 0x14) +
                                           *(int *)(*(int *)(unaff_EBP + 0x10) + uVar8 * 4) * 0xc,
                                           **(int **)(unaff_EBP + -0x18));
                      dVar11 = this_00->mbr_0x40;
                      *(uint *)(unaff_EBP + -0x4c) =
                           (uint)*(ushort *)
                                  ((dVar11 - 2) +
                                  (*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x30)) * 2);
                      *(uint *)(unaff_EBP + -0x54) =
                           (uint)*(ushort *)
                                  (dVar11 + (*(int *)(unaff_EBP + -0x30) +
                                            *(int *)(unaff_EBP + -0x24)) * 2);
                      *(uint *)(unaff_EBP + -0x24) =
                           (uint)*(ushort *)(dVar11 + (uVar8 * 3 + iVar7) * 2);
                      if ((*(uint *)(unaff_EBP + -0x4c) ==
                           (uint)*(ushort *)(dVar11 + ((iVar7 + 1U) % 3 + uVar8 * 3) * 2)) &&
                         (*(int *)(unaff_EBP + -0x54) == *(int *)(unaff_EBP + -0x24))) {
                        uVar3 = (undefined2)*(undefined4 *)(unaff_EBP + -0x58);
                      }
                      else {
                        uVar3 = 0xffff;
                      }
                      this_00 = *(cls_0x668cd8 **)(unaff_EBP + -0x48);
                    }
                    puVar12 = *(undefined2 **)(unaff_EBP + -0x34);
                    uVar13 = *(uint *)(unaff_EBP + -0x50);
                    *puVar12 = uVar3;
                  }
                  piVar9 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
                  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
                  puVar12 = puVar12 + 1;
                  piVar1 = (int *)(unaff_EBP + -0x44);
                  *piVar1 = *piVar1 + -1;
                  *(int **)(unaff_EBP + -0x14) = piVar9;
                  *(undefined2 **)(unaff_EBP + -0x34) = puVar12;
                } while (*piVar1 != 0);
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
                *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 3;
                piVar9 = (int *)(unaff_EBP + -0x38);
                *piVar9 = *piVar9 + -1;
              } while (*piVar9 != 0);
            }
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x14;
          } while (*(uint *)(unaff_EBP + -0x2c) < this_00->mbr_0x54);
        }
        uVar4 = 0;
        if (this_00->mbr_0x58 != 0) {
          puVar5 = *(uint **)(unaff_EBP + 0x10);
          iVar7 = *(int *)(unaff_EBP + 0xc) - (int)puVar5;
          do {
            *(uint *)(iVar7 + (int)puVar5) = uVar4;
            *puVar5 = uVar4;
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar4 < this_00->mbr_0x58);
        }
        pcVar10 = cls_0x475cb6::cls_0x475cb6
                            ((cls_0x475cb6 *)(unaff_EBP + -0xa0),this_00,
                             *(undefined4 *)(unaff_EBP + -0x10),
                             (short)*(undefined4 *)(unaff_EBP + -0x20));
        pdVar14 = (dword *)(unaff_EBP + -0x7c);
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pdVar14 = pcVar10->mbr_0x0;
          pcVar10 = (cls_0x475cb6 *)&pcVar10->mbr_0x4;
          pdVar14 = pdVar14 + 1;
        }
        cls_0x475cb6::meth_0x475cd9((cls_0x475cb6 *)(unaff_EBP + -0xa0));
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          meth_0x47ce9f(this_00);
        }
        else {
          meth_0x47cda9(this_00,(void *)(unaff_EBP + -0x7c),*(int *)(unaff_EBP + 0xc),
                        *(int *)(unaff_EBP + 0x10));
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + -0x10));
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cls_0x475cb6::meth_0x475cd9((cls_0x475cb6 *)(unaff_EBP + -0x7c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0x8876086c;
}



void __thiscall
cls_0x668cd8::meth_0x47e1ac
          (cls_0x668cd8 *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,int **param_5,
          int *param_6,uint *param_7)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  cls_0x4760ef local_174;
  dword local_50;
  uint local_4c;
  dword local_48;
  void *local_44;
  void *local_40;
  uint local_3c;
  dword local_38;
  dword local_34;
  int *local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  uint *local_18;
  void *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_50 = this->mbr_0x58;
  local_10 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_14 = (void *)0x0;
  local_44 = (void *)0x0;
  local_18 = (uint *)0x0;
  local_40 = (void *)0x0;
  local_1c = 0;
  local_38 = 0;
  local_20 = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  if ((((param_1 == (uint *)0x0) || (((uint)param_1 & 0xffefff) != 0)) ||
      ((param_2 == (uint *)0x0 && (param_3 != (uint *)0x0)))) ||
     ((((uint)param_1 & 0x40000000) != 0 && (this->mbr_0x54 == 0)))) {
    local_8 = -0x7789f794;
    goto LAB_0047e7b4;
  }
  if (((uint)param_1 & 0xc000000) != 0) {
    param_1 = (uint *)((uint)param_1 | 0x3000000);
  }
  local_3c = (uint)param_1 & 0x2000000;
  if ((local_3c != 0) && (((uint)param_1 & 0x40000000) == 0)) {
    local_38 = this->mbr_0x30;
    local_8 = meth_0x47a218(this,&local_40,&local_1c);
    if (local_8 < 0) goto LAB_0047e7b4;
    if ((local_1c != 0) && (((uint)param_1 & 0x10000000) != 0)) {
      local_8 = -0x7789f4aa;
      goto LAB_0047e7b4;
    }
  }
  local_10 = (uint *)operator_new(this->mbr_0x58 << 2);
  local_c = (uint *)operator_new(this->mbr_0x58 << 2);
  local_14 = operator_new(this->mbr_0x30 << 2);
  if (((local_10 != (uint *)0x0) && (local_c != (uint *)0x0)) && (local_14 != (void *)0x0)) {
    local_48 = this->mbr_0x30;
    local_4c = (uint)param_1 & 0xc000000;
    if ((local_4c == 0) ||
       (local_2c = (uint *)operator_new(this->mbr_0x58 << 2), local_2c != (uint *)0x0)) {
      if (((uint)param_1 & 0x40000000) == 0) {
        local_8 = meth_0x4754c7(this,(int)local_10,(int)local_c,(int)local_14);
        if (local_8 < 0) goto LAB_0047e7b4;
      }
      else {
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          puVar7 = local_10;
          do {
            *(uint *)(((int)local_c - (int)local_10) + (int)puVar7) = uVar1;
            *puVar7 = uVar1;
            uVar1 = uVar1 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            *(uint *)((int)local_14 + uVar1 * 4) = uVar1;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
      }
      if (((local_3c != 0) && (((uint)param_1 & 0x40000000) == 0)) &&
         (local_8 = meth_0x479e1f(this,(int)local_10,(int)local_c,(int)local_14,
                                  (uint)param_1 & 0x10000000), local_8 < 0)) goto LAB_0047e7b4;
      local_3c = (uint)param_1 & 0x10000000;
      if ((local_3c != 0) && (uVar1 = 0, this->mbr_0x30 != 0)) {
        do {
          *(uint *)((int)local_14 + uVar1 * 4) = uVar1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < this->mbr_0x30);
      }
      local_8 = meth_0x47a5cd(this,(int)local_10,(int)local_14);
      if (local_8 < 0) goto LAB_0047e7b4;
      if (local_4c != 0) {
        puVar7 = local_c;
        puVar8 = local_2c;
        for (uVar1 = this->mbr_0x58 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)puVar8 = *(undefined *)puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        local_8 = meth_0x47d838(this);
        if (local_8 < 0) goto LAB_0047e7b4;
        pvVar2 = operator_new(this->mbr_0x30 << 2);
        local_44 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0047e7ac;
        if (local_3c == 0) {
          local_8 = meth_0x4755ad(this,(int)local_c,(int)pvVar2);
          if (local_8 < 0) goto LAB_0047e7b4;
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              piVar6 = (int *)((int)local_14 + uVar1 * 4);
              iVar3 = *piVar6;
              if (iVar3 != 0xffff) {
                *piVar6 = *(int *)((int)pvVar2 + iVar3 * 4);
              }
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        else {
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              *(uint *)((int)pvVar2 + uVar1 * 4) = uVar1;
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        puVar7 = local_10;
        local_8 = meth_0x47a5cd(this,(int)local_10,(int)pvVar2);
        if (local_8 < 0) goto LAB_0047e7b4;
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            puVar8 = local_c + uVar1;
            if (*puVar8 == 0xffffffff) {
              *puVar8 = 0xffffffff;
            }
            else {
              *puVar8 = local_2c[*puVar8];
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            puVar7[uVar1] = 0xffff;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            if (local_c[uVar1] != 0xffff) {
              puVar7[local_c[uVar1]] = uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
      }
      if (((param_5 != (int **)0x0) || (local_1c != 0)) || (this->mbr_0x34 == 0)) {
        local_8 = FUN_004745ba((cls_0x668f10 **)(this->mbr_0x30 << 2));
        if (local_8 < 0) goto LAB_0047e7b4;
        local_28 = (**(code **)(*local_20 + 0xc))(local_20);
        uVar1 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            *(undefined4 *)(local_28 + uVar1 * 4) = 0xffffffff;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        uVar1 = 0;
        if (local_48 != 0) {
          do {
            iVar3 = *(int *)((int)local_14 + uVar1 * 4);
            if (iVar3 != 0xffff) {
              *(uint *)(local_28 + iVar3 * 4) = uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < local_48);
        }
        if ((local_1c != 0) && (uVar1 = 0, this->mbr_0x30 != 0)) {
          do {
            uVar4 = *(uint *)(local_28 + uVar1 * 4);
            if ((uVar4 != 0xffffffff) && (local_38 <= uVar4)) {
              *(undefined4 *)(local_28 + uVar1 * 4) =
                   *(undefined4 *)((int)local_40 + (uVar4 - local_38) * 4);
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
      }
      if ((local_1c == 0) && (this->mbr_0x34 != 0)) {
        local_8 = meth_0x474cfb(this,&local_18,0);
        if ((local_8 < 0) ||
           (local_8 = meth_0x47a488(this,(int)local_14,(int)local_18), local_8 < 0))
        goto LAB_0047e7b4;
      }
      else if ((*(byte *)&this->mbr_0xc & 0x20) == 0) {
        local_34 = this->mbr_0x38;
        local_30 = (int *)this->mbr_0x28;
        uVar1 = this->mbr_0x30;
        piVar6 = local_30;
        if (this->mbr_0x34 == 0) {
          local_30 = param_6;
          (**(code **)(*param_6 + 4))(param_6);
          piVar6 = param_6;
        }
        this->mbr_0x28 = 0;
        this->mbr_0x30 = 0;
        this->mbr_0x34 = 0;
        this->mbr_0x38 = 0;
        local_8 = meth_0x478854(this,this->mbr_0x58,uVar1);
        if (((local_8 < 0) || (local_8 = meth_0x474cfb(this,&local_18,0), local_8 < 0)) ||
           (local_8 = (**(code **)(*piVar6 + 0x2c))(piVar6,0,0,&local_24,0x810), local_8 < 0))
        goto LAB_0047e7b4;
        if ((uint *)this->mbr_0x4 == param_7) {
          param_7 = local_18;
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            dVar5 = this->mbr_0x2c;
            do {
              puVar7 = (uint *)(*(int *)(local_28 + uVar1 * 4) * dVar5 + local_24);
              puVar8 = param_7;
              for (uVar4 = dVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar4 = dVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined *)puVar8 = *(undefined *)puVar7;
                puVar7 = (uint *)((int)puVar7 + 1);
                puVar8 = (uint *)((int)puVar8 + 1);
              }
              dVar5 = this->mbr_0x2c;
              param_7 = (uint *)((int)param_7 + dVar5);
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        else {
          cls_0x4760ef::cls_0x4760ef(&local_174,(uint)param_7,(uint)(uint *)this->mbr_0x4);
          uVar1 = 0;
          puVar7 = local_18;
          if (this->mbr_0x30 != 0) {
            do {
              cls_0x4760ef::meth_0x476257
                        (&local_174,
                         (undefined4 *)
                         (*(int *)(local_28 + uVar1 * 4) * local_174.cls_0x474824.mbr_0x4 + local_24
                         ),puVar7);
              puVar7 = (uint *)((int)puVar7 + this->mbr_0x2c);
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        uVar1 = 0;
        if ((local_34 != 0) && (this->mbr_0x30 != 0)) {
          do {
            *(undefined2 *)(this->mbr_0x38 + uVar1 * 2) =
                 *(undefined2 *)
                  ((int)local_14 +
                  (uint)*(ushort *)(local_34 + *(int *)(local_28 + uVar1 * 4) * 2) * 4);
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        uVar1 = 0;
        dVar5 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            piVar6 = (int *)((int)local_14 + uVar1 * 4);
            if (*piVar6 == 0xffff) {
              *piVar6 = -1;
            }
            else {
              dVar5 = dVar5 + 1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        this->mbr_0x30 = dVar5;
      }
      if (param_4 != (uint *)0x0) {
        uVar1 = this->mbr_0x58 & 0x3fffffff;
        puVar7 = local_10;
        if (((uint)param_1 & 0x80000000) == 0) {
          puVar7 = local_c;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *param_4 = *puVar7;
          puVar7 = puVar7 + 1;
          param_4 = param_4 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)param_4 = *(undefined *)puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          param_4 = (uint *)((int)param_4 + 1);
        }
      }
      uVar1 = 0;
      if (param_3 != (uint *)0x0) {
        if (param_3 == param_2) {
          local_8 = FUN_004744b6((int)local_10,(int)param_3,local_50);
          if (local_8 < 0) goto LAB_0047e7b4;
        }
        else if (this->mbr_0x58 != 0) {
          param_1 = param_3;
          do {
            uVar4 = local_c[uVar1];
            param_3 = (uint *)0x3;
            puVar7 = param_1;
            do {
              iVar3 = *(int *)((int)param_2 + (uVar4 * 0xc - (int)param_1) + (int)puVar7);
              if (iVar3 == -1) {
                *puVar7 = 0xffffffff;
              }
              else {
                *puVar7 = local_10[iVar3];
              }
              puVar7 = puVar7 + 1;
              param_3 = (uint *)((int)param_3 + -1);
            } while (param_3 != (uint *)0x0);
            param_1 = param_1 + 3;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
      }
      piVar6 = local_20;
      if (param_5 != (int **)0x0) {
        local_20 = (int *)0x0;
        *param_5 = piVar6;
      }
      goto LAB_0047e7b4;
    }
  }
LAB_0047e7ac:
  local_8 = -0x7ff8fff2;
LAB_0047e7b4:
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}



undefined4 __thiscall cls_0x668cd8::virt_meth_0x47ea4f(cls_0x668cd8 *this)

{
  dword *pdVar1;
  void *pvVar2;
  uint uVar3;
  cls_0x668cd8 *pcVar4;
  uint uVar5;
  int iVar6;
  cls_0x668cd8 *extraout_ECX;
  cls_0x668cd8 *extraout_ECX_00;
  cls_0x668cd8 *extraout_ECX_01;
  cls_0x668cd8 *extraout_ECX_02;
  cls_0x668cd8 *extraout_ECX_03;
  cls_0x668cd8 *extraout_ECX_04;
  cls_0x668cd8 *extraout_ECX_05;
  int unaff_EBP;
  uint uVar7;
  cls_0x668cd8 *this_00;
  
  FUN_0061781c();
  uVar5 = *(uint *)(unaff_EBP + 0xc);
  if ((((uVar5 & 0xe0fe2000) != 0) || ((uVar5 & 1) != 0)) || ((uVar5 & 0x400) != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0047ebe0;
  }
  pvVar2 = *(void **)(unaff_EBP + 8);
  uVar3 = *(uint *)((int)pvVar2 + 8);
  if (((uVar3 & 0x400) != 0) || ((uVar3 & 0x40) != 0)) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0047ebe0;
  }
  uVar7 = uVar5 & 0x1cfff;
  if (uVar7 == 0) {
    if ((uVar5 & 0x1000) == 0) {
      uVar7 = uVar3 & 0xffffefff;
    }
    else {
      uVar7 = uVar3 | 0x1000;
    }
  }
  else {
    if ((uVar5 & 0x1000) != 0) {
      uVar7 = uVar7 | 0x1000;
    }
    if ((uVar3 & 1) != 0) {
      uVar7 = uVar7 | 1;
    }
    *(uint *)(unaff_EBP + 0xc) = uVar5 & 0xfffe3000;
  }
  this_00 = (cls_0x668cd8 *)0x70;
  pcVar4 = (cls_0x668cd8 *)operator_new(0x70);
  *(cls_0x668cd8 **)(unaff_EBP + 8) = pcVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar4 == (cls_0x668cd8 *)0x0) {
    pcVar4 = (cls_0x668cd8 *)0x0;
  }
  else {
    pcVar4 = cls_0x668cd8(pcVar4,*(int **)((int)pvVar2 + 0x24),*(uint *)((int)pvVar2 + 4),uVar7);
    this_00 = extraout_ECX;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(cls_0x668cd8 **)(unaff_EBP + -0x10) = pcVar4;
  if (pcVar4 == (cls_0x668cd8 *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8007000e;
  }
  else {
    if ((*(byte *)&pcVar4->mbr_0xc & 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)((int)pvVar2 + 0x30);
    }
    iVar6 = meth_0x478854(pcVar4,*(uint *)((int)pvVar2 + 0x58),uVar5);
    *(int *)(unaff_EBP + 8) = iVar6;
    this_00 = extraout_ECX_00;
    if (-1 < iVar6) {
      if ((*(byte *)&pcVar4->mbr_0xc & 0x20) != 0) {
        *(uint *)((int)pvVar2 + 0xc) = *(uint *)((int)pvVar2 + 0xc) | 0x20;
        pcVar4->mbr_0x28 = *(dword *)((int)pvVar2 + 0x28);
        (**(code **)(**(int **)((int)pvVar2 + 0x28) + 4))(*(int **)((int)pvVar2 + 0x28));
        *(byte *)(unaff_EBP + 0xf) = *(byte *)(unaff_EBP + 0xf) | 0x10;
      }
      iVar6 = meth_0x47923e(pcVar4,pvVar2);
      *(int *)(unaff_EBP + 8) = iVar6;
      this_00 = extraout_ECX_01;
      if (-1 < iVar6) {
        if ((*(byte *)&pcVar4->mbr_0xc & 0x20) == 0) {
          pcVar4->mbr_0x30 = *(dword *)((int)pvVar2 + 0x30);
        }
        pdVar1 = &pcVar4->mbr_0x40;
        iVar6 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)pcVar4,pdVar1,0);
        *(int *)(unaff_EBP + 8) = iVar6;
        this_00 = extraout_ECX_02;
        if (-1 < iVar6) {
          iVar6 = meth_0x47e1ac(pcVar4,*(uint **)(unaff_EBP + 0xc),*(uint **)(unaff_EBP + 0x10),
                                *(uint **)(unaff_EBP + 0x14),*(uint **)(unaff_EBP + 0x18),
                                *(int ***)(unaff_EBP + 0x1c),*(int **)((int)pvVar2 + 0x28),
                                *(uint **)((int)pvVar2 + 4));
          *(int *)(unaff_EBP + 8) = iVar6;
          this_00 = extraout_ECX_03;
          if (-1 < iVar6) {
            if (*pdVar1 != 0) {
              (**(code **)(*(int *)pcVar4->mbr_0x3c + 0x30))((int *)pcVar4->mbr_0x3c);
              *pdVar1 = 0;
              this_00 = extraout_ECX_04;
            }
            **(cls_0x668cd8 ***)(unaff_EBP + 0x20) = pcVar4;
            pcVar4 = (cls_0x668cd8 *)0x0;
            goto LAB_0047ebc4;
          }
        }
        pcVar4 = *(cls_0x668cd8 **)(unaff_EBP + -0x10);
      }
    }
  }
LAB_0047ebc4:
  if (pcVar4 != (cls_0x668cd8 *)0x0) {
    if (pcVar4->mbr_0x40 != 0) {
      (**(code **)(*(int *)pcVar4->mbr_0x3c + 0x30))((int *)pcVar4->mbr_0x3c);
      this_00 = extraout_ECX_05;
    }
    (*pcVar4->vftptr_0x0->virt_meth_0x47ac13_8)(this_00);
  }
LAB_0047ebe0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



int __thiscall
cls_0x668cd8::virt_meth_0x47ebf1
          (cls_0x668cd8 *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,int **param_5)

{
  int iVar1;
  int **in_stack_00000018;
  
  if (((((uint)param_2 & 0xe0ffefff) == 0) && ((param_1[2] & 0x400) == 0)) &&
     ((param_1[2] & 0x40) == 0)) {
    iVar1 = cls_0x474d1a::meth_0x474d1a((cls_0x474d1a *)param_1,param_1 + 0x10,0);
    if (-1 < iVar1) {
      if ((*(byte *)(param_1 + 3) & 0x20) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x10000000);
      }
      iVar1 = meth_0x47e1ac((cls_0x668cd8 *)param_1,param_2,param_3,param_4,(uint *)param_5,
                            in_stack_00000018,(int *)0x0,(uint *)param_1[1]);
    }
  }
  else {
    iVar1 = -0x7789f794;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(int *)param_1[0xf] + 0x30))((int *)param_1[0xf]);
    param_1[0x10] = 0;
  }
  return iVar1;
}


#include "../include/cls_0x668cd8.h"
