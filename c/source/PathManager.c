#include "../include/PathManager.h"

void __thiscall
PathManager::virt_meth_0x5604a0(PathManager *this,int param_1,int param_2,int param_3)

{
  int in_stack_00000010;
  
  FUN_005601f0((param_3 - param_1) * (param_3 - param_1) +
               (in_stack_00000010 - param_2) * (in_stack_00000010 - param_2));
  return;
}



void __thiscall
PathManager::virt_meth_0x5604d0(PathManager *this,undefined4 *param_1,undefined4 *param_2)

{
  (*this->vftptr_0x0->virt_meth_0x5604a0_0)(this,*param_1,param_1[1],*param_2);
  return;
}



PathManager * __thiscall PathManager::PathManager(PathManager *this)

{
  dword dVar1;
  
  this->vftptr_0x0 = &PathManager__vftable_696388_00696388;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x8 = dVar1;
  this->mbr_0xc = 0;
  return this;
}



void __thiscall
PathManager::virt_meth_0x562600
          (PathManager *this,int *param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  int **ppiVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int **ppiVar7;
  char cVar8;
  int iVar9;
  Map *pMVar10;
  int *piVar11;
  int **ppiVar12;
  ulonglong uVar13;
  undefined auStack_44 [4];
  undefined4 uStack_40;
  undefined local_3c;
  int **local_38;
  dword local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006383e8;
  pvStack_c = ExceptionList;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_3c = param_1._0_1_;
  ExceptionList = &pvStack_c;
  local_38 = (int **)FUN_00560940();
  *(undefined *)((int)local_38 + 0xe) = 1;
  local_38[1] = (int *)local_38;
  *local_38 = (int *)local_38;
  local_38[2] = (int *)local_38;
  local_34 = 0;
  fVar2 = param_7 - param_4;
  local_4 = 0;
  fVar3 = param_6 - param_3;
  local_24 = param_5 - param_2;
  param_5 = fVar2;
  uVar13 = FUN_00616e24();
  iVar9 = FUN_005601f0((int)uVar13);
  piVar6 = param_1;
  param_5 = 1.401298e-45;
  fVar4 = (float)iVar9 * 1.666;
  if (1.0 < fVar4 != NAN(fVar4)) {
    fVar5 = 1.0;
    do {
      fVar5 = fVar5 * (1.0 / fVar4);
      param_1 = (int *)(fVar2 * fVar5);
      local_18 = local_24 * fVar5;
      local_28 = (float)param_1 + param_4;
      local_2c = param_3 + fVar3 * fVar5;
      local_30 = local_18 + param_2;
      if (DAT_0070bd98 == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      pMVar10 = (Map *)(**(code **)(*piVar11 + 0x54))(*(undefined4 *)(piVar6[3] + 0x1ec));
      piVar11 = (int *)FUN_00560680(auStack_44,&local_30,pMVar10);
      cls_0x405f80::meth_0x561a90
                ((cls_0x405f80 *)piVar6[0x13],(cls_0x560510 *)&local_3c,
                 *(int *)(piVar6[3] + 0x16c) + 0xc,piVar6[4],piVar6[5],*piVar11,piVar11[1]);
      ppiVar12 = (int **)*local_38;
      if (ppiVar12 != local_38) {
        do {
          uStack_40 = CONCAT31(uStack_40._1_3_,*(undefined *)(ppiVar12 + 3));
          cVar8 = (*this->vftptr_0x0->virt_meth_0x560480_12)(this);
          if (cVar8 != '\0') {
            local_4 = 0xffffffff;
            cls_0x560510::meth_0x561840
                      ((cls_0x560510 *)&local_3c,&param_1,(int **)*local_38,local_38);
                    /* WARNING: Subroutine does not return */
            _free(local_38);
          }
          if (*(char *)((int)ppiVar12 + 0xe) == '\0') {
            ppiVar1 = (int **)ppiVar12[2];
            if (*(char *)((int)ppiVar1 + 0xe) == '\0') {
              cVar8 = *(char *)((int)*ppiVar1 + 0xe);
              ppiVar12 = ppiVar1;
              ppiVar1 = (int **)*ppiVar1;
              while (cVar8 == '\0') {
                cVar8 = *(char *)((int)*ppiVar1 + 0xe);
                ppiVar12 = ppiVar1;
                ppiVar1 = (int **)*ppiVar1;
              }
            }
            else {
              cVar8 = *(char *)((int)ppiVar12[1] + 0xe);
              ppiVar7 = (int **)ppiVar12[1];
              ppiVar1 = ppiVar12;
              while ((ppiVar12 = ppiVar7, cVar8 == '\0' && (ppiVar1 == (int **)ppiVar12[2]))) {
                cVar8 = *(char *)((int)ppiVar12[1] + 0xe);
                ppiVar7 = (int **)ppiVar12[1];
                ppiVar1 = ppiVar12;
              }
            }
          }
        } while (ppiVar12 != local_38);
      }
      param_5 = (float)((int)param_5 + 1);
      fVar5 = (float)(int)param_5;
    } while (fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4)));
  }
  local_4 = 0xffffffff;
  cls_0x560510::meth_0x561840((cls_0x560510 *)&local_3c,&param_1,(int **)*local_38,local_38);
                    /* WARNING: Subroutine does not return */
  _free(local_38);
}


#include "../include/PathManager.h"
