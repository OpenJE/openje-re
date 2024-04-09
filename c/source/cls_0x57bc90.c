#include "../include/cls_0x57bc90.h"

uint __thiscall cls_0x57bc90::meth_0x57bc90(cls_0x57bc90 *this,int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((((-1 < param_1) && (in_EAX = this->mbr_0x38, param_1 < (int)in_EAX)) && (-1 < param_2)) &&
     (param_2 < (int)this->mbr_0x3c)) {
    uVar1 = cls_0x5ad6c0::meth_0x5ad760((cls_0x5ad6c0 *)&this->mbr_0x40,in_EAX * param_2 + param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



uint __thiscall cls_0x57bc90::meth_0x57bcd0(cls_0x57bc90 *this,int param_1,int param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if ((((-1 < param_1) && (in_EAX = this->mbr_0x38, param_1 < (int)in_EAX)) && (-1 < param_2)) &&
     (param_2 < (int)this->mbr_0x3c)) {
    uVar1 = in_EAX * param_2 + param_1;
    iVar2 = cls_0x5ad6c0::meth_0x5ad760((cls_0x5ad6c0 *)&this->mbr_0x40,uVar1);
    in_EAX = param_3;
    if (((char)iVar2 != '\0') != ((char)param_3 != '\0')) {
      cls_0x5ad6c0::meth_0x5ad6d0((cls_0x5ad6c0 *)&this->mbr_0x40,uVar1,(char)param_3);
      this->mbr_0x78 = this->mbr_0x78 | 1;
      return 1;
    }
  }
  return in_EAX & 0xffffff00;
}



uint __thiscall cls_0x57bc90::meth_0x57bd40(cls_0x57bc90 *this,int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((((-1 < param_1) && (in_EAX = this->mbr_0x38, param_1 < (int)in_EAX)) && (-1 < param_2)) &&
     (param_2 < (int)this->mbr_0x3c)) {
    uVar1 = cls_0x5ad6c0::meth_0x5ad760
                      ((cls_0x5ad6c0 *)&this->field_0x60,in_EAX * param_2 + param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



void __thiscall
cls_0x57bc90::meth_0x57bdc0
          (cls_0x57bc90 *this,undefined4 param_1,undefined param_2,undefined4 param_3,
          undefined4 *param_4,int *param_5)

{
  dword dVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  fVar2 = *(float *)&this->field_0x30 - *(float *)&this->field_0x28;
  fVar3 = *(float *)&this->field_0x34 - *(float *)&this->field_0x2c;
  if ((NAN(fVar2) == (fVar2 == 0.0)) && (NAN(fVar3) == (fVar3 == 0.0))) {
    uVar4 = FUN_00616e24();
    *param_4 = (int)uVar4;
    dVar1 = this->mbr_0x3c;
    uVar4 = FUN_00616e24();
    *param_5 = dVar1 - (int)uVar4;
    return;
  }
  *param_5 = -1;
  *param_4 = 0xffffffff;
  return;
}



void __thiscall
cls_0x57bc90::meth_0x57be60
          (cls_0x57bc90 *this,int param_1,int param_2,float *param_3,float *param_4,char param_5)

{
  if ((this->mbr_0x38 != 0) && (this->mbr_0x3c != 0)) {
    *param_3 = (*(float *)&this->field_0x30 - *(float *)&this->field_0x28) *
               ((float)param_1 / (float)this->mbr_0x38) + *(float *)&this->field_0x28;
    *param_4 = (*(float *)&this->field_0x34 - *(float *)&this->field_0x2c) *
               ((float)(this->mbr_0x3c - param_2) / (float)this->mbr_0x3c) +
               *(float *)&this->field_0x2c;
    if (param_5 != '\0') {
      *param_3 = ((*(float *)&this->field_0x30 - *(float *)&this->field_0x28) * 0.5) /
                 (float)this->mbr_0x38 + *param_3;
      *param_4 = *param_4 -
                 ((*(float *)&this->field_0x34 - *(float *)&this->field_0x2c) * 0.5) /
                 (float)this->mbr_0x3c;
    }
  }
  return;
}



uint __thiscall cls_0x57bc90::meth_0x57d4f0(cls_0x57bc90 *this,undefined param_1,undefined param_2)

{
  undefined4 uVar1;
  cls_0x57bc90 *local_4;
  
  local_4 = this;
  cls_0x57bf40::meth_0x57c4e0((cls_0x57bf40 *)&this->mbr_0x7c,(int *)&local_4,(uint *)&param_1);
  if (local_4 == (cls_0x57bc90 *)this->mbr_0x80) {
    return (uint)local_4 & 0xffffff00;
  }
  uVar1 = cls_0x57bf40::meth_0x57c9a0((cls_0x57bf40 *)&this->mbr_0x7c,&param_1,(int **)local_4);
  this->mbr_0x94 = 1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



void __thiscall
cls_0x57bc90::meth_0x57de50
          (cls_0x57bc90 *this,int *param_1,int param_2,float param_3,int param_4,int param_5,
          float param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_38;
  undefined4 local_34 [2];
  undefined4 local_2c [5];
  int *local_18;
  undefined4 local_14 [5];
  
  meth_0x57bdc0(this,param_2,SUB41(param_3,0),param_4,&param_2,&local_38);
  meth_0x57bdc0(this,param_5,SUB41(param_6,0),param_7,&param_7,&param_5);
  cls_0x57bf40::meth_0x57c4e0((cls_0x57bf40 *)&this->mbr_0x7c,&param_4,(uint *)&param_1);
  if (param_4 == this->mbr_0x80) {
    local_18 = param_1;
    puVar3 = local_2c;
    puVar4 = local_14;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    piVar1 = (int *)cls_0x57bf40::meth_0x57d5a0((cls_0x57bf40 *)&this->mbr_0x7c,local_34,&local_18);
    param_4 = *piVar1;
  }
  iVar2 = param_2;
  if (param_7 <= param_2) {
    iVar2 = param_7;
  }
  *(int *)(param_4 + 0x10) = iVar2;
  iVar2 = local_38;
  if (param_5 <= local_38) {
    iVar2 = param_5;
  }
  *(int *)(param_4 + 0x14) = iVar2;
  if (param_2 <= param_7) {
    param_2 = param_7;
  }
  *(int *)(param_4 + 0x18) = param_2;
  if (local_38 <= param_5) {
    local_38 = param_5;
  }
  *(int *)(param_4 + 0x1c) = local_38;
  if (param_6 < param_3) {
    param_6 = param_3;
  }
  *(float *)(param_4 + 0x20) = param_6;
  this->mbr_0x94 = 1;
  return;
}



void __thiscall cls_0x57bc90::meth_0x57df50(cls_0x57bc90 *this)

{
  char cVar1;
  int **ppiVar2;
  int iVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  
  cls_0x57d540::meth_0x57d840((cls_0x57d540 *)&this->mbr_0x98,(int)&this->mbr_0x68);
  ppiVar5 = *(int ***)(int **)this->mbr_0xac;
  if (ppiVar5 != (int **)this->mbr_0xac) {
    do {
      if (*(char *)(ppiVar5 + 7) == '\0') {
        ppiVar2 = (int **)ppiVar5[5];
        if (ppiVar2 == (int **)0x0) {
          ppiVar4 = (int **)0x0;
        }
        else {
          ppiVar4 = (int **)*ppiVar2;
        }
        if (ppiVar4 != ppiVar2) {
          do {
            piVar6 = ppiVar4[2];
            if ((((-1 < (int)piVar6) && ((int)piVar6 < (int)this->mbr_0x38)) &&
                (piVar7 = ppiVar4[3], -1 < (int)piVar7)) &&
               (((int)piVar7 < (int)this->mbr_0x3c &&
                (iVar3 = (int)((int)piVar7 * this->mbr_0x38 + (int)piVar6) * 4,
                *(float *)(iVar3 + this->mbr_0x6c) < (float)ppiVar4[4])))) {
              *(int **)(iVar3 + this->mbr_0x9c) = ppiVar4[4];
            }
            ppiVar4 = (int **)*ppiVar4;
          } while (ppiVar4 != (int **)ppiVar5[5]);
        }
      }
      if (*(char *)((int)ppiVar5 + 0x21) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x21);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x21);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x21);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x21);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
    } while (ppiVar5 != (int **)this->mbr_0xac);
  }
  ppiVar5 = *(int ***)(int **)this->mbr_0x80;
  if (ppiVar5 != (int **)this->mbr_0x80) {
    do {
      piVar6 = ppiVar5[5];
      if ((int)piVar6 <= (int)ppiVar5[7]) {
        do {
          piVar7 = ppiVar5[4];
          if ((int)piVar7 <= (int)ppiVar5[6]) {
            do {
              if ((((-1 < (int)piVar7) && ((int)piVar7 < (int)this->mbr_0x38)) && (-1 < (int)piVar6)
                  ) && (((int)piVar6 < (int)this->mbr_0x3c &&
                        (iVar3 = (int)(this->mbr_0x38 * (int)piVar6 + (int)piVar7) * 4,
                        *(float *)(iVar3 + this->mbr_0x6c) < (float)ppiVar5[8])))) {
                *(int **)(iVar3 + this->mbr_0x9c) = ppiVar5[8];
              }
              piVar7 = (int *)((int)piVar7 + 1);
            } while ((int)piVar7 <= (int)ppiVar5[6]);
          }
          piVar6 = (int *)((int)piVar6 + 1);
        } while ((int)piVar6 <= (int)ppiVar5[7]);
      }
      if (*(char *)((int)ppiVar5 + 0x25) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x25) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x25);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x25);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x25);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x25);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
    } while (ppiVar5 != (int **)this->mbr_0x80);
  }
  ppiVar5 = *(int ***)(int **)this->mbr_0x8c;
  if (ppiVar5 != (int **)this->mbr_0x8c) {
    do {
      ppiVar2 = (int **)ppiVar5[5];
      if (ppiVar2 == (int **)0x0) {
        ppiVar4 = (int **)0x0;
      }
      else {
        ppiVar4 = (int **)*ppiVar2;
      }
      if (ppiVar4 != ppiVar2) {
        do {
          piVar6 = ppiVar4[2];
          if ((((-1 < (int)piVar6) && ((int)piVar6 < (int)this->mbr_0x38)) &&
              (piVar7 = ppiVar4[3], -1 < (int)piVar7)) &&
             (((int)piVar7 < (int)this->mbr_0x3c &&
              (iVar3 = (int)((int)piVar7 * this->mbr_0x38 + (int)piVar6) * 4,
              *(float *)(iVar3 + this->mbr_0x6c) < (float)ppiVar4[4])))) {
            *(int **)(iVar3 + this->mbr_0x9c) = ppiVar4[4];
          }
          ppiVar4 = (int **)*ppiVar4;
        } while (ppiVar4 != (int **)ppiVar5[5]);
      }
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
    } while (ppiVar5 != (int **)this->mbr_0x8c);
  }
  return;
}



float10 * __thiscall
cls_0x57bc90::meth_0x57e390
          (cls_0x57bc90 *this,float10 *__return_storage_ptr__,int param_1,int param_2)

{
  float10 *in_EAX;
  
  if ((((-1 < (int)__return_storage_ptr__) && ((int)__return_storage_ptr__ < (int)this->mbr_0x38))
      && (-1 < param_1)) && (param_1 < (int)this->mbr_0x3c)) {
    if (this->mbr_0x94 != 0) {
      meth_0x57df50(this);
      this->mbr_0x94 = 0;
    }
    return (float10 *)(this->mbr_0x38 * param_1 + (int)__return_storage_ptr__);
  }
  return in_EAX;
}



undefined4 __thiscall
cls_0x57bc90::meth_0x57e450
          (cls_0x57bc90 *this,int param_1,int param_2,float param_3,float10 *param_4,int param_5,
          float *param_6)

{
  float10 fVar1;
  float10 fVar2;
  float in_EAX;
  float fVar3;
  int iVar4;
  float10 *pfVar5;
  int iVar6;
  int unaff_EDI;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar8;
  
  if (((((-1 < param_1) && (param_1 < (int)this->mbr_0x38)) && (-1 < param_2)) &&
      ((in_EAX = (float)this->mbr_0x3c, param_2 < (int)in_EAX && (-1 < (int)param_4)))) &&
     (((int)param_4 < (int)this->mbr_0x38 && ((-1 < param_5 && (param_5 < (int)in_EAX)))))) {
    uVar8 = FUN_00616e24();
    fVar3 = (float)uVar8;
    in_EAX = fVar3;
    if (0 < (int)fVar3) {
      if (param_6 == (float *)0x0) {
        meth_0x57e390(this,param_4,param_5,unaff_EDI);
        fVar7 = extraout_ST0;
      }
      else {
        fVar7 = (float10)*param_6;
      }
      fVar2 = (float10)param_3;
      iVar6 = 0;
      in_EAX = param_3;
      if (0 < (int)fVar3) {
        do {
          if (iVar6 != 0) {
            uVar8 = FUN_00616e24();
            iVar4 = (int)uVar8;
            uVar8 = FUN_00616e24();
            pfVar5 = meth_0x57e390(this,(float10 *)uVar8,iVar4,unaff_EDI);
            fVar1 = (float10)param_3;
            in_EAX = (float)CONCAT22((short)((uint)pfVar5 >> 0x10),
                                     (ushort)(extraout_ST0_00 < fVar1) << 8 |
                                     (ushort)(NAN(extraout_ST0_00) || NAN(fVar1)) << 10 |
                                     (ushort)(extraout_ST0_00 == fVar1) << 0xe);
            if (fVar1 < extraout_ST0_00) goto LAB_0057e5e5;
          }
          iVar6 = iVar6 + 1;
          param_3 = param_3 + (float)((fVar7 - fVar2) / (float10)(int)fVar3);
        } while (iVar6 < (int)fVar3);
      }
    }
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
LAB_0057e5e5:
  return (uint)in_EAX & 0xffffff00;
}



uint __thiscall cls_0x57bc90::meth_0x57eb40(cls_0x57bc90 *this,undefined param_1,undefined param_2)

{
  undefined4 uVar1;
  cls_0x57bc90 *local_4;
  
  local_4 = this;
  cls_0x55dc80::meth_0x51f080((cls_0x55dc80 *)&this->mbr_0x88,(int *)&local_4,(uint *)&param_1);
  if (local_4 == (cls_0x57bc90 *)this->mbr_0x8c) {
    return (uint)local_4 & 0xffffff00;
  }
  uVar1 = cls_0x55dc80::meth_0x57e5f0((cls_0x55dc80 *)&this->mbr_0x88,(int **)&param_1);
  this->mbr_0x94 = 1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



void __thiscall cls_0x57bc90::meth_0x580260(cls_0x57bc90 *this,undefined4 param_1,int *param_2)

{
  cls_0x57e960 *this_00;
  cls_0x57bc90 *local_4;
  
  local_4 = this;
  cls_0x55dc80::meth_0x51f080((cls_0x55dc80 *)&this->mbr_0x88,(int *)&local_4,&param_1);
  if (local_4 == (cls_0x57bc90 *)this->mbr_0x8c) {
    this_00 = (cls_0x57e960 *)
              cls_0x55dc80::meth_0x5800a0((cls_0x55dc80 *)&this->mbr_0x88,(int **)&param_1);
  }
  else {
    this_00 = (cls_0x57e960 *)&local_4->field_0x10;
  }
  cls_0x57e960::cls_0x57e960(this_00,param_2);
  this->mbr_0x94 = 1;
  return;
}


