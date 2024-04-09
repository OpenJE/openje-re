#include "../include/cls_0x409820.h"

undefined4 __thiscall cls_0x409820::meth_0x409820(cls_0x409820 *this,int param_1)

{
  return *(undefined4 *)(&this->field_0xe0 + param_1 * 4);
}



dword __thiscall cls_0x409820::Get_mbr_0x270(cls_0x409820 *this)

{
  return this->mbr_0x270;
}



uint __thiscall cls_0x409820::meth_0x409cd0(cls_0x409820 *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x26c;
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
  }
  while( true ) {
    if (piVar1 == (undefined4 *)this->mbr_0x26c) {
      return (uint)piVar1 & 0xffffff00;
    }
    if (param_1 == piVar1[2]) break;
    piVar1 = (int *)*piVar1;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



int __thiscall
cls_0x409820::meth_0x409e30(cls_0x409820 *this,int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GameCreature *this_00;
  int iVar5;
  int iVar6;
  
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,
                 &GameUsableObject::RTTI_Type_Descriptor,0);
    this_00 = (GameCreature *)
              FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,
                           &GameCreature::RTTI_Type_Descriptor,0);
    iVar5 = GameCreature::GetTotalSkill((GameCreature *)this,2);
    iVar5 = iVar5 + *(int *)(param_1 + 0x28);
    if (((param_4 != 0) && (*(int *)(param_4 + 0x408) != 0)) &&
       (((*(int *)(param_1 + 0x18) == 1 && (*(int *)(param_4 + 0x3b0) == 9)) ||
        ((*(int *)(param_1 + 0x18) == 3 && (*(int *)(param_4 + 0x3b0) == 10)))))) {
      iVar5 = iVar5 + *(int *)(*(int *)(param_4 + 0x408) + 0x28);
    }
    if (this_00 == (GameCreature *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = GameCreature::GetDerivedAttribute(this_00,(int *)0x4);
    }
    iVar1 = *(int *)(this->mbr_0x4 + 4);
    fVar2 = *(float *)(&this->field_0x8 + iVar1) - (float)param_2[1];
    fVar3 = *(float *)(&this->field_0xc + iVar1) - (float)param_2[2];
    fVar4 = *(float *)(&this->field_0x10 + iVar1) - (float)param_2[3];
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
    if ((float)*(int *)(param_1 + 0x2c) < fVar2 ==
        (NAN((float)*(int *)(param_1 + 0x2c)) || NAN(fVar2))) {
      if (param_3 != 9) {
        iVar6 = iVar6 + *(int *)(&DAT_0064d4c0 + param_3 * 4);
      }
      iVar5 = iVar5 - iVar6;
      if (iVar5 < 0) {
        return 0;
      }
      if (0x5f < iVar5) {
        iVar5 = 0x5f;
      }
      return iVar5;
    }
  }
  return 0;
}



void __thiscall cls_0x409820::meth_0x40a270(cls_0x409820 *this,int *param_1)

{
  int **_Memory;
  int **ppiVar1;
  
  _Memory = (int **)this->mbr_0x26c;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  if (_Memory != (int **)this->mbr_0x26c) {
    do {
      if (param_1 == _Memory[2]) {
        ppiVar1 = (int **)*_Memory;
        if (_Memory != (int **)this->mbr_0x26c) {
          *_Memory[1] = (int)ppiVar1;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        *(int *)(&this->field_0xe0 + (int)param_1 * 4) =
             *(int *)(&this->field_0xe0 + (int)param_1 * 4) + -0x14;
      }
      else {
        ppiVar1 = (int **)*_Memory;
      }
      _Memory = ppiVar1;
    } while (ppiVar1 != (int **)this->mbr_0x26c);
  }
  return;
}



void __thiscall cls_0x409820::meth_0x40c890(cls_0x409820 *this,int param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x26c;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&param_1);
  GUI::Interface::meth_0x40aaf0((Interface *)&this->mbr_0x268,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *(int *)(&this->field_0xe0 + param_1 * 4) = *(int *)(&this->field_0xe0 + param_1 * 4) + 0x14;
  return;
}


