#include "../include/GamePathManager.h"

GamePathManager * __thiscall GamePathManager::GamePathManager(GamePathManager *this)

{
  PathManager::PathManager(&this->PathManager);
  (this->PathManager).vftptr_0x0 =
       (PathManager__vftable_696388 *)&GamePathManager__vftable_6602e4_006602e4;
  return this;
}



GamePathManager * __thiscall GamePathManager::~GamePathManager(GamePathManager *this)

{
  GamePathManager *pGVar1;
  
  (this->PathManager).vftptr_0x0 =
       (PathManager__vftable_696388 *)&GamePathManager__vftable_6602e4_006602e4;
  pGVar1 = (GamePathManager *)FUN_00560bb0((PathManager__vftable_696388 **)this);
  return pGVar1;
}



int * __thiscall GamePathManager::virt_meth_0x45baf0(GamePathManager *this,byte param_1)

{
  ~GamePathManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
GamePathManager::virt_meth_0x45bb10(GamePathManager *this,int *param_1,int *param_2,int param_3)

{
  cls_0x405f80 *this_00;
  int **ppiVar1;
  cls_0x616328 *pcVar2;
  int iVar3;
  char cVar4;
  cls_0x40e5a0 *this_01;
  uint uVar5;
  bool bVar6;
  HeapTracker local_18 [4];
  int **local_14;
  dword local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_3 = PathManager::virt_meth_0x5604d0(&this->PathManager,param_1,param_2);
  this_00 = *(cls_0x405f80 **)(iVar3 + 0x50);
  if (this_00 == (cls_0x405f80 *)0x0) {
    ExceptionList = local_c;
    return;
  }
  local_18[0] = param_3._0_1_;
  local_14 = (int **)FUN_0056e2b0();
  *(undefined *)((int)local_14 + 0x11) = 1;
  local_14[1] = (int *)local_14;
  *local_14 = (int *)local_14;
  local_14[2] = (int *)local_14;
  local_10 = 0;
  local_4 = 0;
  cls_0x405f80::meth_0x405f80
            (this_00,local_18,*(int *)(*(int *)(iVar3 + 0xc) + 0x16c) + 0xc,*(int *)(iVar3 + 0x10),
             *(undefined4 *)(iVar3 + 0x14),*param_1,param_1[1]);
  do {
    if (local_10 == 0) {
      local_4 = 0xffffffff;
      GUI::Interface::meth_0x405c20((Interface *)local_18,&param_2,(int **)*local_14,local_14);
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    ppiVar1 = (int **)*local_14;
    pcVar2 = (cls_0x616328 *)ppiVar1[3];
    switch(pcVar2[0x57].mbr_0x0) {
    case 1:
    case 2:
    case 4:
      if (*(int *)&(*(critical_section **)(iVar3 + 0xc))->field_0x334 != 0) {
        uVar5 = net::critical_section::meth_0x54aeb0
                          (*(critical_section **)(iVar3 + 0xc),(int)pcVar2);
        bVar6 = (char)uVar5 == '\x01';
        goto LAB_0045bc14;
      }
      break;
    case 3:
      this_01 = (cls_0x40e5a0 *)
                FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,&GameDoor::RTTI_Type_Descriptor,
                             0);
      cVar4 = cls_0x40e5a0::meth_0x40e5a0(this_01,(int)pcVar2);
      bVar6 = cVar4 == '\0';
LAB_0045bc14:
      if (bVar6) {
        param_3 = param_3 + 0x7ffd;
      }
    }
    GUI::Interface::meth_0x405950((Interface *)local_18,&param_2,ppiVar1);
  } while( true );
}



void __thiscall
GamePathManager::virt_meth_0x45bc90
          (GamePathManager *this,int *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
  char cVar1;
  cls_0x616328 *pcVar2;
  int **ppiVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int **ppiVar9;
  int iVar10;
  Map *pMVar11;
  uint uVar12;
  int *piVar13;
  int **ppiVar14;
  ulonglong uVar15;
  int local_64;
  undefined auStack_4c [8];
  undefined auStack_44 [8];
  undefined local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630128;
  pvStack_c = ExceptionList;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_3c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  local_3c._4_4_ = FUN_0056e2b0();
  *(undefined *)(local_3c._4_4_ + 0x11) = 1;
  *(undefined4 *)(local_3c._4_4_ + 4) = local_3c._4_4_;
  *(undefined4 *)local_3c._4_4_ = local_3c._4_4_;
  *(undefined4 *)(local_3c._4_4_ + 8) = local_3c._4_4_;
  local_3c._8_4_ = 0;
  fVar4 = param_7 - param_4;
  local_4 = 0;
  fVar5 = param_6 - param_3;
  local_24 = param_5 - param_2;
  uVar15 = FUN_00616e24();
  iVar10 = FUN_005601f0((int)uVar15);
  piVar8 = param_1;
  local_64 = 1;
  fVar6 = (float)iVar10 * 1.666;
  if (1.0 < fVar6 != NAN(fVar6)) {
    param_1 = (int *)(1.0 / fVar6);
    fVar7 = 1.0;
    do {
      fVar7 = fVar7 * (float)param_1;
      local_18 = local_24 * fVar7;
      local_28 = fVar4 * fVar7 + param_4;
      local_2c = param_3 + fVar5 * fVar7;
      local_30 = local_18 + param_2;
      if (DAT_0070bd98 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      pMVar11 = (Map *)(**(code **)(*piVar13 + 0x54))();
      FUN_00560680(auStack_4c,&param_2,pMVar11);
      piVar13 = (int *)FUN_00560680(auStack_44,local_3c + 0xc,pMVar11);
      cls_0x405f80::meth_0x405f80
                ((cls_0x405f80 *)piVar8[0x14],local_3c,*(int *)(piVar8[3] + 0x16c) + 0xc,piVar8[4],
                 piVar8[5],*piVar13,piVar13[1]);
      ppiVar14 = *(int ***)local_3c._4_4_;
      if (ppiVar14 != (int **)local_3c._4_4_) {
        do {
          pcVar2 = (cls_0x616328 *)ppiVar14[3];
          switch(pcVar2[0x57].mbr_0x0) {
          case 1:
          case 2:
          case 4:
            if ((*(int *)&((critical_section *)piVar8[3])->field_0x334 != 0) &&
               (uVar12 = net::critical_section::meth_0x54aeb0
                                   ((critical_section *)piVar8[3],(int)pcVar2),
               (char)uVar12 == '\x01')) {
              local_4 = 0xffffffff;
              GUI::Interface::meth_0x405c20
                        ((Interface *)local_3c,&param_1,*(int ***)local_3c._4_4_,
                         (int **)local_3c._4_4_);
                    /* WARNING: Subroutine does not return */
              _free((void *)local_3c._4_4_);
            }
            break;
          case 3:
            iVar10 = FUN_006165e0(pcVar2,0,&Entity::RTTI_Type_Descriptor,
                                  &GameDoor::RTTI_Type_Descriptor,0);
            if (*(char *)(iVar10 + 0xbc) == '\0') {
              local_4 = 0xffffffff;
              GUI::Interface::meth_0x405c20
                        ((Interface *)local_3c,&param_1,*(int ***)local_3c._4_4_,
                         (int **)local_3c._4_4_);
                    /* WARNING: Subroutine does not return */
              _free((void *)local_3c._4_4_);
            }
          }
          if (*(char *)((int)ppiVar14 + 0x11) == '\0') {
            ppiVar3 = (int **)ppiVar14[2];
            if (*(char *)((int)ppiVar3 + 0x11) == '\0') {
              cVar1 = *(char *)((int)*ppiVar3 + 0x11);
              ppiVar14 = ppiVar3;
              ppiVar3 = (int **)*ppiVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((int)*ppiVar3 + 0x11);
                ppiVar14 = ppiVar3;
                ppiVar3 = (int **)*ppiVar3;
              }
            }
            else {
              cVar1 = *(char *)((int)ppiVar14[1] + 0x11);
              ppiVar9 = (int **)ppiVar14[1];
              ppiVar3 = ppiVar14;
              while ((ppiVar14 = ppiVar9, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar14[2]))) {
                cVar1 = *(char *)((int)ppiVar14[1] + 0x11);
                ppiVar9 = (int **)ppiVar14[1];
                ppiVar3 = ppiVar14;
              }
            }
          }
        } while (ppiVar14 != (int **)local_3c._4_4_);
      }
      local_64 = local_64 + 1;
      fVar7 = (float)local_64;
    } while (fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6)));
  }
  param_1 = (int *)&stack0xffffff74;
  PathManager::virt_meth_0x562600
            (&this->PathManager,piVar8,param_2,param_3,param_4,param_5,param_6,param_7);
  local_4 = 0xffffffff;
  GUI::Interface::meth_0x405c20
            ((Interface *)local_3c,&param_1,*(int ***)local_3c._4_4_,(int **)local_3c._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_3c._4_4_);
}


#include "../include/GamePathManager.h"
