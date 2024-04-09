#include "../include/cls_0x49cc40.h"

int __thiscall cls_0x49cc40::meth_0x49cc40(cls_0x49cc40 *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((void *)this->mbr_0x6c != (void *)0x0) {
    iVar1 = FUN_0050e300((void *)this->mbr_0x6c,param_1);
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    iVar1 = FUN_00509470((void *)this->mbr_0x70,param_1);
  }
  return iVar1;
}



void __thiscall cls_0x49cc40::meth_0x49cc70(cls_0x49cc40 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x6c;
  if ((dVar1 != 0) && (*(cls_0x4abc60 **)(dVar1 + 0x54) != (cls_0x4abc60 *)0x0)) {
    cls_0x4abc60::meth_0x49c9a0(*(cls_0x4abc60 **)(dVar1 + 0x54));
    cls_0x4abc60::meth_0x4abdd0(*(cls_0x4abc60 **)(dVar1 + 0x54));
  }
  if (this->mbr_0x70 != 0) {
    FUN_005095a0(this->mbr_0x70);
    return;
  }
  return;
}



void __thiscall
cls_0x49cc40::meth_0x49cca0(cls_0x49cc40 *this,uint param_1,char param_2,char param_3,uint *param_4)

{
  dword dVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  
  if ((this->mbr_0xc8 == 0) && (param_2 == '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  this->mbr_0xc8 = bVar2;
  if ((this->mbr_0xc9 == 0) && (param_3 == '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  this->mbr_0xc9 = bVar3;
  bVar4 = (byte)(param_1 >> 0x10);
  uVar5 = param_1 >> 8;
  if (param_3 == '\0') {
    bVar6 = this->mbr_0xc7;
  }
  else {
    bVar6 = (byte)(param_1 >> 0x18);
  }
  if (param_2 == '\0') {
    bVar4 = this->mbr_0xc6;
    uVar5 = (uint)this->mbr_0xc5;
    param_1 = (uint)this->mbr_0xc4;
  }
  dVar1 = this->mbr_0x6c;
  uVar5 = ((uint)CONCAT11(bVar6,bVar4) << 8 | uVar5 & 0xff) << 8 | param_1 & 0xff;
  this->mbr_0xc4 = (char)uVar5;
  this->mbr_0xc5 = (char)(uVar5 >> 8);
  this->mbr_0xc6 = (char)(uVar5 >> 0x10);
  this->mbr_0xc7 = (char)(uVar5 >> 0x18);
  if (dVar1 != 0) {
    if (*(int *)(dVar1 + 0x54) == 0) {
      FUN_0050e290(dVar1);
    }
    cls_0x4abc60::meth_0x4ab600(*(cls_0x4abc60 **)(dVar1 + 0x54),bVar2,bVar3,uVar5,param_4);
    cls_0x4abc60::meth_0x4abdd0(*(cls_0x4abc60 **)(dVar1 + 0x54));
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    uVar5._0_1_ = this->mbr_0xc4;
    uVar5._1_1_ = this->mbr_0xc5;
    uVar5._2_1_ = this->mbr_0xc6;
    uVar5._3_1_ = this->mbr_0xc7;
    FUN_00509500((void *)this->mbr_0x70,this->mbr_0xc8,this->mbr_0xc9,uVar5,param_4);
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49cdd0(cls_0x49cc40 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x6c;
  this->mbr_0xc8 = 0;
  this->mbr_0xc9 = 0;
  if ((dVar1 != 0) && (*(cls_0x4abc60 **)(dVar1 + 0x54) != (cls_0x4abc60 *)0x0)) {
    cls_0x4abc60::meth_0x49c9a0(*(cls_0x4abc60 **)(dVar1 + 0x54));
    cls_0x4abc60::meth_0x4abdd0(*(cls_0x4abc60 **)(dVar1 + 0x54));
  }
  if (this->mbr_0x70 != 0) {
    FUN_005095a0(this->mbr_0x70);
    return;
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49ce10(cls_0x49cc40 *this,undefined4 param_1)

{
  if ((void *)this->mbr_0x6c != (void *)0x0) {
    FUN_0049ca60((void *)this->mbr_0x6c,param_1);
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    FUN_00509600((void *)this->mbr_0x70,param_1);
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49ce40(cls_0x49cc40 *this,undefined4 param_1)

{
  if ((void *)this->mbr_0x6c != (void *)0x0) {
    FUN_0049cab0((void *)this->mbr_0x6c,(undefined)param_1);
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    FUN_00509060((void *)this->mbr_0x70,(undefined)param_1);
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49ced0(cls_0x49cc40 *this,undefined param_1)

{
  if (this->mbr_0x6c != 0) {
    *(undefined *)(this->mbr_0x6c + 0x45) = param_1;
  }
  if (this->mbr_0x70 != 0) {
    *(undefined *)(this->mbr_0x70 + 0x98) = param_1;
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49cef0(cls_0x49cc40 *this,undefined param_1)

{
  if (this->mbr_0x6c != 0) {
    *(undefined *)(this->mbr_0x6c + 0x46) = param_1;
  }
  if (this->mbr_0x70 != 0) {
    *(undefined *)(this->mbr_0x70 + 0x99) = param_1;
  }
  return;
}



void __thiscall cls_0x49cc40::meth_0x49cf10(cls_0x49cc40 *this,undefined param_1)

{
  if (this->mbr_0x6c != 0) {
    *(undefined *)(this->mbr_0x6c + 0x44) = param_1;
  }
  if (this->mbr_0x70 != 0) {
    *(undefined *)(this->mbr_0x70 + 0xb0) = param_1;
  }
  return;
}



void __thiscall
cls_0x49cc40::meth_0x49cf30(cls_0x49cc40 *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  
  if (this->mbr_0x6c != 0) {
    iVar1 = *(int *)(this->mbr_0x6c + 0x50);
    *(float *)(iVar1 + 0x18) = param_1;
    *(float *)(iVar1 + 0x1c) = param_2;
    *(float *)(iVar1 + 0x20) = param_3;
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    FUN_00507c30((void *)this->mbr_0x70,param_1,param_2,param_3);
  }
  this->mbr_0x60 = (dword)param_1;
  this->mbr_0x64 = (dword)param_2;
  this->mbr_0x68 = (dword)param_3;
  return;
}



undefined4 __thiscall cls_0x49cc40::meth_0x49db50(cls_0x49cc40 *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0049d610((void *)this->mbr_0x48,param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



void __thiscall cls_0x49cc40::meth_0x49dd40(cls_0x49cc40 *this,dword param_1,byte param_2)

{
  cls_0x4a5be0 *this_00;
  
  if ((this->mbr_0x50 != 0) &&
     (this_00 = (cls_0x4a5be0 *)this->mbr_0x4c, this_00 != (cls_0x4a5be0 *)0x0)) {
    cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  this->mbr_0x4c = param_1;
  FUN_0049d570((void *)this->mbr_0x48,param_1);
  this->mbr_0x50 = param_2;
  return;
}



void __thiscall cls_0x49cc40::meth_0x49e130(cls_0x49cc40 *this)

{
  FUN_0049e040((int *)this->mbr_0x48);
  return;
}



void __thiscall cls_0x49cc40::meth_0x4a0750(cls_0x49cc40 *this,float param_1)

{
  int *piVar1;
  cls_0x49cc40 *this_00;
  uint uVar2;
  cls_0x4a5be0 *this_01;
  undefined4 uVar3;
  void *pvVar4;
  dword dVar5;
  int iVar6;
  int iVar7;
  int **_Memory;
  int **ppiVar8;
  dword *pdVar9;
  byte *pbVar10;
  uint uVar11;
  cls_0x4a5be0 *this_02;
  dword *pdVar12;
  bool bVar13;
  bool bVar14;
  float10 extraout_ST0;
  float10 fVar15;
  ulonglong uVar16;
  float local_68;
  cls_0x49cc40 *pcStack_60;
  dword dStack_5c;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  dword dStack_50;
  dword adStack_4c [16];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631a9b;
  pvStack_c = ExceptionList;
  local_68 = param_1;
  ExceptionList = &pvStack_c;
  if (param_1 < 0.0 != NAN(param_1)) {
    local_68 = 0.0;
    ExceptionList = &pvStack_c;
    this->mbr_0x78 = 0;
  }
  if ((undefined4 *)this->mbr_0x80 == (undefined4 *)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = *(int ***)(undefined4 *)this->mbr_0x80;
  }
  if (_Memory != (int **)this->mbr_0x80) {
    do {
      piVar1 = (int *)((float)_Memory[3] - local_68);
      if ((float)piVar1 < 0.0 == ((float)piVar1 == 0.0)) {
        _Memory[3] = piVar1;
        uVar16 = FUN_00616e24();
        meth_0x49cca0((cls_0x49cc40 *)_Memory[2],
                      (((uint)*(byte *)((int)_Memory + 0x11) | (int)uVar16 << 8) << 8 |
                      (uint)*(byte *)((int)_Memory + 0x12)) << 8 |
                      (uint)*(byte *)((int)_Memory + 0x13),*(char *)(_Memory + 5),'\x01',(uint *)0x0
                     );
        meth_0x49ce10((cls_0x49cc40 *)_Memory[2],_Memory[6]);
        ppiVar8 = (int **)*_Memory;
      }
      else {
        if (_Memory[2] != (int *)0x0) {
          (**(code **)*_Memory[2])(1);
          _Memory[2] = (int *)0x0;
        }
        ppiVar8 = (int **)*_Memory;
        if (_Memory != (int **)this->mbr_0x80) {
          *_Memory[1] = (int)ppiVar8;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      _Memory = ppiVar8;
    } while (ppiVar8 != (int **)this->mbr_0x80);
  }
  if (this->mbr_0x74 != 0) {
    local_68 = (float)this->mbr_0x78 - local_68;
    if (local_68 < 0.0 == (local_68 == 0.0)) {
      this->mbr_0x78 = (dword)local_68;
    }
    else {
      pdVar9 = &this->mbr_0x4;
      pdVar12 = adStack_4c;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pdVar12 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        pdVar12 = pdVar12 + 1;
      }
      if ((byte *)this->mbr_0x94 != (byte *)0x0) {
        dVar5 = this->mbr_0x4c;
        iVar7 = 0x40;
        bVar13 = false;
        iVar6 = 0;
        bVar14 = true;
        pdVar9 = adStack_4c;
        pbVar10 = (byte *)this->mbr_0x94;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar13 = *(byte *)pdVar9 < *pbVar10;
          bVar14 = *(byte *)pdVar9 == *pbVar10;
          pdVar9 = (dword *)((int)pdVar9 + 1);
          pbVar10 = pbVar10 + 1;
        } while (bVar14);
        if (!bVar14) {
          iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        }
        if (iVar6 == 0) {
          if ((dVar5 == 0) || (*(char *)(dVar5 + 8) == '\0')) goto LAB_004a0b03;
          uVar16 = FUN_00616e24();
          fVar15 = (float10)(int)uVar16;
          if ((int)uVar16 < 0) {
            fVar15 = fVar15 + (float10)4.294967e+09;
          }
          if (((((NAN(extraout_ST0) || NAN(fVar15)) != (extraout_ST0 == fVar15)) &&
               (*(dword *)(dVar5 + 0x4c) == this->mbr_0x9c)) &&
              (*(dword *)(dVar5 + 0x50) == this->mbr_0xa0)) &&
             (*(dword *)(dVar5 + 0x54) == this->mbr_0xa4)) goto LAB_004a0b03;
        }
        this_00 = (cls_0x49cc40 *)cls_0x49caf0::meth_0x4a06e0((cls_0x49caf0 *)this->mbr_0x44);
        pcStack_60 = this_00;
        (**(code **)(*(int *)this_00 + 4))(this->mbr_0x94);
        cls_0x49db30::meth_0x49db30((cls_0x49db30 *)this_00,0x14);
        uVar11 = 0;
        iVar6 = cls_0x49caf0::meth_0x49caf0((cls_0x49caf0 *)this->mbr_0x44);
        if (iVar6 != 0) {
          do {
            iVar6 = meth_0x49cc40(this,uVar11);
            iVar7 = meth_0x49cc40(this_00,uVar11);
            if (((iVar6 != 0) && (iVar7 != 0)) && (*(int *)(iVar6 + 0x130) != 0)) {
              *(int *)(iVar7 + 0x130) = *(int *)(iVar6 + 0x130);
            }
            uVar11 = uVar11 + 1;
            uVar2 = cls_0x49caf0::meth_0x49caf0((cls_0x49caf0 *)this->mbr_0x44);
          } while (uVar11 < uVar2);
        }
        this_02 = (cls_0x4a5be0 *)0x0;
        if (((dVar5 != 0) && (-1 < (int)this->mbr_0x9c)) &&
           ((-1 < (int)this->mbr_0xa0 && (-1 < (int)this->mbr_0xa4)))) {
          this_01 = (cls_0x4a5be0 *)operator_new(200);
          uStack_4 = 0;
          if (this_01 != (cls_0x4a5be0 *)0x0) {
            this_02 = cls_0x4a5be0::cls_0x4a5be0(this_01,dVar5);
          }
          uStack_4 = 0xffffffff;
          uVar3 = FUN_0049ca30(dVar5);
          cls_0x4a5be0::meth_0x4a5640
                    (this_02,this->mbr_0x9c,this->mbr_0xa0,this->mbr_0xa4,0,0,uVar3);
          cls_0x4a5be0::meth_0x4a62b0(this_02,(int **)this->mbr_0x98);
          meth_0x49dd40(this_00,this_02,1);
        }
        dStack_5c = this->mbr_0x88;
        if (this->mbr_0xc9 == 0) {
          bStack_58 = 0xc0;
        }
        else {
          bStack_58 = this->mbr_0xc7;
        }
        bStack_54 = this->mbr_0xc8;
        bStack_57 = this->mbr_0xc6;
        bStack_56 = this->mbr_0xc5;
        bStack_55 = this->mbr_0xc4;
        dStack_50 = this->mbr_0x90;
        meth_0x49cca0(this_00,CONCAT31(CONCAT21(CONCAT11(bStack_58,bStack_57),bStack_56),bStack_55),
                      bStack_54,'\x01',(uint *)0x0);
        meth_0x49ce10(this_00,this->mbr_0x90);
        this->mbr_0x78 = this->mbr_0x8c;
        dVar5 = this->mbr_0x80;
        iVar6 = FUN_004e36b0(dVar5,*(undefined4 *)(dVar5 + 4),&pcStack_60);
        cls_0x49e810::meth_0x49e810((cls_0x49e810 *)&this->mbr_0x7c,1);
        *(int *)(dVar5 + 4) = iVar6;
        **(int **)(iVar6 + 4) = iVar6;
      }
    }
  }
LAB_004a0b03:
  cls_0x49dad0::meth_0x49dad0((cls_0x49dad0 *)this->mbr_0x48,param_1);
  if (this->mbr_0x94 == 0) {
    pvVar4 = operator_new(0x40);
    this->mbr_0x94 = (dword)pvVar4;
  }
  pdVar9 = &this->mbr_0x4;
  pdVar12 = (dword *)this->mbr_0x94;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar9 = (dword *)this->mbr_0x4c;
  if (pdVar9 == (dword *)0x0) {
    dVar5 = 0xffffffff;
    this->mbr_0x98 = 0xbf800000;
    this->mbr_0x9c = 0xffffffff;
    this->mbr_0xa0 = 0xffffffff;
  }
  else {
    this->mbr_0x98 = *pdVar9;
    this->mbr_0x9c = pdVar9[0x13];
    this->mbr_0xa0 = pdVar9[0x14];
    dVar5 = pdVar9[0x15];
  }
  this->mbr_0xa4 = dVar5;
  ExceptionList = pvStack_c;
  return;
}



void __thiscall
cls_0x49cc40::meth_0x4a0dd0
          (cls_0x49cc40 *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  cls_0x48d750 local_20;
  int local_1c;
  undefined local_18 [4];
  int **local_14;
  dword local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631ae8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0049d210((void *)this->mbr_0x48,&this->mbr_0x4);
  local_14 = (int **)FUN_0056e0b0();
  local_10 = 0;
  local_20.mbr_0x0 = *(int *)this->mbr_0xbc;
  local_4 = 0;
  if ((int *)local_20.mbr_0x0 != (int *)this->mbr_0xbc) {
    do {
      local_1c = *(int *)(local_20.mbr_0x0 + 0x10);
      ppiVar1 = local_14 + 1;
      piVar2 = (int *)FUN_00433760(local_14,local_14[1],&local_1c);
      GUI::Interface::meth_0x49e980((Interface *)local_18,1);
      *ppiVar1 = piVar2;
      *(int **)piVar2[1] = piVar2;
      cls_0x48d750::meth_0x48d750(&local_20);
    } while (local_20.mbr_0x0 != this->mbr_0xbc);
  }
  if ((int **)this->mbr_0x80 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x80;
  }
  if (piVar2 != (int *)this->mbr_0x80) {
    do {
      local_1c = piVar2[2];
      ppiVar1 = local_14 + 1;
      piVar3 = (int *)FUN_00433760(local_14,local_14[1],&local_1c);
      GUI::Interface::meth_0x49e980((Interface *)local_18,1);
      *ppiVar1 = piVar3;
      *(int **)piVar3[1] = piVar3;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x80);
  }
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  }
  else {
    puVar4 = (undefined4 *)param_1[0x57];
  }
  puVar7 = &DAT_00707db0;
  for (iVar5 = 0x10; puVar4 = puVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar4;
    puVar7 = puVar7 + 1;
  }
  FUN_004a0ba0(local_18);
  ppiVar1 = local_14;
  if (local_14 == (int **)0x0) {
    ppiVar6 = (int **)0x0;
  }
  else {
    ppiVar6 = (int **)*local_14;
  }
  for (; ppiVar6 != ppiVar1; ppiVar6 = (int **)*ppiVar6) {
    meth_0x4a0dd0((cls_0x49cc40 *)ppiVar6[2],piVar2,0,0x3d4ccccd,0xffff0000);
  }
  FUN_0049d8a0((void *)this->mbr_0x48,*(undefined4 *)&this->field_0x5c,0,piVar2);
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_18,&param_1,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


