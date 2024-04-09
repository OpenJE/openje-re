#include "../include/cls_0x41d500.h"

int __thiscall cls_0x41d500::meth_0x41d500(cls_0x41d500 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x6c;
}



void __thiscall cls_0x41d500::meth_0x57d9b0(cls_0x41d500 *this)

{
  AreaMapNote *pAVar1;
  AreaMapNote *this_00;
  
  this_00 = (AreaMapNote *)this->mbr_0x4;
  if (this_00 == (AreaMapNote *)0x0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  pAVar1 = (AreaMapNote *)this->mbr_0x8;
  for (; this_00 != pAVar1; this_00 = this_00 + 1) {
    AreaMapNote::~AreaMapNote(this_00);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x41d500::meth_0x57d9b0(cls_0x41d500 *this)

{
  AreaMapNote *pAVar1;
  AreaMapNote *this_00;
  
  this_00 = (AreaMapNote *)this->mbr_0x4;
  if (this_00 == (AreaMapNote *)0x0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  pAVar1 = (AreaMapNote *)this->mbr_0x8;
  for (; this_00 != pAVar1; this_00 = this_00 + 1) {
    AreaMapNote::~AreaMapNote(this_00);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
cls_0x41d500::meth_0x57ee20(cls_0x41d500 *this,undefined *param_1,undefined *param_2,void *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  dword dVar5;
  AreaMapNote *pAVar6;
  undefined *puVar7;
  uint unaff_retaddr;
  AreaMapNote local_8c;
  undefined *local_20;
  cls_0x41d500 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006396fb;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff68;
  ExceptionList = &pvStack_10;
  local_1c = this;
  AreaMapNote::AreaMapNote(&local_8c,(int)param_3);
  puVar2 = param_2;
  puVar1 = param_1;
  dVar5 = this->mbr_0x4;
  puVar7 = (undefined *)0x0;
  local_8 = 0;
  if (dVar5 != 0) {
    puVar7 = (undefined *)((int)(this->mbr_0xc - dVar5) / 0x6c);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x6c;
    }
    if ((undefined *)(0x25ed097U - iVar4) < param_2) {
      FUN_0057cc70();
    }
    else {
      if (dVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x6c;
      }
      if (puVar7 < param_2 + iVar4) {
        if ((undefined *)(0x25ed097 - ((uint)puVar7 >> 1)) < puVar7) {
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar7 = puVar7 + ((uint)puVar7 >> 1);
        }
        if (dVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x6c;
        }
        if (puVar7 < param_2 + iVar4) {
          iVar4 = meth_0x41d500(this);
          puVar7 = puVar2 + iVar4;
        }
        param_2 = (undefined *)operator_new((int)puVar7 * 0x6c);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined *)FUN_0057e300(this->mbr_0x4,(int)param_1,(AreaMapNote *)param_2);
        FUN_0057eab0((AreaMapNote *)param_2,(int)puVar2,(int)&local_8c);
        param_2 = param_2 + (int)puVar2 * 0x6c;
        FUN_0057e300((int)param_1,this->mbr_0x8,(AreaMapNote *)param_2);
        pAVar6 = (AreaMapNote *)this->mbr_0x4;
        iVar4 = 0;
        local_8 = 0;
        if (pAVar6 != (AreaMapNote *)0x0) {
          iVar4 = (int)(this->mbr_0x8 - (int)pAVar6) / 0x6c;
        }
        if (pAVar6 != (AreaMapNote *)0x0) {
          FUN_0057d980(pAVar6,(AreaMapNote *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)((int)puVar7 * 0x6c + (int)param_3);
        this->mbr_0x8 = (dword)((int)(puVar2 + iVar4) * 0x6c + (int)param_3);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (void *)this->mbr_0x8;
        if ((undefined *)(((int)param_3 - (int)param_1) / 0x6c) < param_2) {
          local_20 = &stack0xffffff5c;
          pvVar3 = param_3;
          param_3 = (void *)((int)param_2 * 0x6c);
          FUN_0057ecb0((int)param_1,(int)pvVar3,
                       (AreaMapNote *)((int)(void *)((int)param_2 * 0x6c) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_0057edf0((AreaMapNote *)this->mbr_0x8,
                       (int)puVar2 - ((int)(AreaMapNote *)this->mbr_0x8 - (int)puVar1) / 0x6c,
                       (int)&local_8c);
          dVar5 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar5;
          pAVar6 = (AreaMapNote *)(dVar5 - (int)param_3);
          local_8 = 0;
        }
        else {
          iVar4 = (int)param_2 * 0x6c;
          param_1 = (undefined *)((int)param_3 + (int)param_2 * -0x6c);
          dVar5 = FUN_0057ecb0((int)param_1,(int)param_3,(AreaMapNote *)param_3);
          puVar7 = param_1;
          this->mbr_0x8 = dVar5;
          param_2 = &stack0xffffff60;
          param_1 = &stack0xffffff5c;
          FUN_0057dd30((AreaMapNote **)&param_1,(int)puVar1,(int)puVar7,(AreaMapNote *)param_3);
          pAVar6 = (AreaMapNote *)(puVar1 + iVar4);
        }
        param_1 = &stack0xffffff5c;
        FUN_0057d660((AreaMapNote *)puVar1,pAVar6,(int)&local_8c);
      }
    }
  }
  local_8 = 0xffffffff;
  AreaMapNote::~AreaMapNote(&local_8c);
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x41d500::meth_0x57f300(cls_0x41d500 *this,int *param_1,undefined *param_2,void *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x6c != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x6c;
      goto LAB_0057f347;
    }
  }
  iVar2 = 0;
LAB_0057f347:
  meth_0x57ee20(this,param_2,(undefined *)0x1,param_3);
  *param_1 = iVar2 * 0x6c + this->mbr_0x4;
  return;
}



void __thiscall cls_0x41d500::meth_0x57f8c0(cls_0x41d500 *this,void *param_1)

{
  dword dVar1;
  AreaMapNote *pAVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x6c) < (uint)((int)(this->mbr_0xc - dVar1) / 0x6c))) {
    pAVar2 = (AreaMapNote *)this->mbr_0x8;
    FUN_0057eab0(pAVar2,1,(int)param_1);
    this->mbr_0x8 = (dword)(pAVar2 + 1);
    return;
  }
  meth_0x57f300(this,(int *)&param_1,(undefined *)this->mbr_0x8,param_1);
  return;
}


