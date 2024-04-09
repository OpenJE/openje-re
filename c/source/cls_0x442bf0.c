#include "../include/cls_0x442bf0.h"

void __thiscall cls_0x442bf0::meth_0x442bf0(cls_0x442bf0 *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa0);
  piVar2 = *(int **)(iVar1 + 0x50);
  piVar3 = *(int **)(iVar1 + 0x5c);
  piVar4 = *(int **)(iVar1 + 0x60);
  piVar5 = *(int **)(iVar1 + 0x58);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(**(int **)(iVar1 + 0x54) + 4) + (int)*(int **)(iVar1 + 0x54)),1);
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar5 + 4) + (int)piVar5),1);
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar2 + 4) + (int)piVar2),1);
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar3 + 4) + (int)piVar3),1);
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar4 + 4) + (int)piVar4),1);
  (**(code **)(*(int *)this->mbr_0x8 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0xc + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x10 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x14 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x18 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x1c + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x20 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x24 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x28 + 0x168))(0x9b604e14);
  (**(code **)(*(int *)this->mbr_0x2c + 0x168))(0x9b604e14);
  return;
}



uint __thiscall cls_0x442bf0::meth_0x442dc0(cls_0x442bf0 *this,int param_1)

{
  int *piVar1;
  cls_0x445350 *this_00;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  DialogueManager *unaff_EBX;
  int *unaff_EBP;
  
  iVar6 = *(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa0);
  piVar1 = *(int **)(iVar6 + 0x60);
  this_00 = *(cls_0x445350 **)(iVar6 + 0x58);
  piVar2 = *(int **)(iVar6 + 0x50);
  piVar3 = *(int **)(iVar6 + 0x5c);
  piVar4 = *(int **)(iVar6 + 0x54);
  uVar5 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar4 + 4) + (int)piVar4));
  if ((char)uVar5 == '\0') {
    if (param_1 == 1) goto LAB_00442f3a;
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar4 + 4) + (int)piVar4),1);
    (**(code **)(*(int *)this->mbr_0x8 + 0x168))(0x9b604e14);
    (**(code **)(*(int *)this->mbr_0xc + 0x168))(0x9b604e14);
  }
  uVar5 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)
                     ((int)&this_00->mbr_0x0 + *(int *)(this_00->mbr_0x0 + 4)));
  if ((char)uVar5 == '\0') {
    if (param_1 == 2) goto LAB_00442f3a;
    cls_0x445350::meth_0x445380(this_00);
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)((int)&this_00->mbr_0x0 + *(int *)(this_00->mbr_0x0 + 4)),1);
    (**(code **)(*(int *)this->mbr_0x10 + 0x168))(0x9b604e14);
    (**(code **)(*(int *)this->mbr_0x14 + 0x168))(0x9b604e14);
  }
  uVar5 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar2 + 4) + (int)piVar2));
  if ((char)uVar5 == '\0') {
    if (param_1 == 3) goto LAB_00442f3a;
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar2 + 4) + (int)piVar2),1);
    (**(code **)(*(int *)this->mbr_0x18 + 0x168))(0x9b604e14);
    (**(code **)(*(int *)this->mbr_0x1c + 0x168))(0x9b604e14);
  }
  uVar5 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar3 + 4) + (int)piVar3));
  if ((char)uVar5 == '\0') {
    if (param_1 == 4) goto LAB_00442f3a;
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar3 + 4) + (int)piVar3),1);
    (**(code **)(*(int *)this->mbr_0x20 + 0x168))(0x9b604e14);
    (**(code **)(*(int *)this->mbr_0x24 + 0x168))(0x9b604e14);
  }
  uVar5 = GameActionOperateContainer::Get_mbr_0x20
                    ((GameActionOperateContainer *)(*(int *)(*piVar1 + 4) + (int)piVar1));
  if ((char)uVar5 == '\0') {
    if (param_1 == 5) {
LAB_00442f3a:
      return uVar5 & 0xffffff00;
    }
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar1 + 4) + (int)piVar1),1);
    (**(code **)(*(int *)this->mbr_0x28 + 0x168))(0x9b604e14);
    (**(code **)(*(int *)this->mbr_0x2c + 0x168))(0x9b604e14);
  }
  iVar6 = param_1 + -1;
  switch(iVar6) {
  case 0:
    (**(code **)(*(int *)this->mbr_0x8 + 0x168))(0xc8604e14);
    (**(code **)(*(int *)this->mbr_0xc + 0x168))(0xc8604e14);
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar4 + 4) + (int)piVar4),0);
    uVar7 = GameActionOperateContainer::meth_0x4952a0
                      ((GameActionOperateContainer *)(*(int *)(*piVar4 + 4) + (int)piVar4));
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  case 1:
    (**(code **)(*(int *)this->mbr_0x10 + 0x168))(0xc8604e14);
    (**(code **)(*(int *)this->mbr_0x14 + 0x168))(0xc8604e14);
    cls_0x445350::meth_0x4461d0(this_00);
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)((int)&this_00->mbr_0x0 + *(int *)(this_00->mbr_0x0 + 4)),0);
    uVar7 = GameActionOperateContainer::meth_0x4952a0
                      ((GameActionOperateContainer *)
                       ((int)&this_00->mbr_0x0 + *(int *)(this_00->mbr_0x0 + 4)));
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  case 2:
    (**(code **)(*(int *)this->mbr_0x18 + 0x168))(0xc8604e14);
    (**(code **)(*(int *)this->mbr_0x1c + 0x168))(0xc8604e14);
    FUN_00448590(piVar2);
    CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar2 + 4) + (int)piVar2),0);
    uVar7 = GameActionOperateContainer::meth_0x4952a0
                      ((GameActionOperateContainer *)(*(int *)(*piVar2 + 4) + (int)piVar2));
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  case 3:
    (**(code **)(*(int *)this->mbr_0x20 + 0x168))(0xc8604e14);
    (**(code **)(*(int *)this->mbr_0x24 + 0x168))(0xc8604e14);
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)(*(int *)(*unaff_EBP + 4) + (int)unaff_EBP),0);
    uVar7 = GameActionOperateContainer::meth_0x4952a0
                      ((GameActionOperateContainer *)(*(int *)(*unaff_EBP + 4) + (int)unaff_EBP));
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  case 4:
    (**(code **)(*(int *)this->mbr_0x28 + 0x168))(0xc8604e14);
    (**(code **)(*(int *)this->mbr_0x2c + 0x168))(0xc8604e14);
    DialogueManager::CommandAttackModeSelect(unaff_EBX);
    CLoadMapInterface::meth_0x495220
              ((CLoadMapInterface *)
               ((int)&unaff_EBX->vftptr_0x0 + (int)unaff_EBX->vftptr_0x0->virt_meth_0x404b70_4),0);
    iVar6 = GameActionOperateContainer::meth_0x4952a0
                      ((GameActionOperateContainer *)
                       ((int)&unaff_EBX->vftptr_0x0 +
                       (int)unaff_EBX->vftptr_0x0->virt_meth_0x404b70_4));
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}



void __thiscall cls_0x442bf0::meth_0x4433e0(cls_0x442bf0 *this,int param_1)

{
  meth_0x442bf0(this);
  meth_0x442dc0(this,param_1);
  return;
}


