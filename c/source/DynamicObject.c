#include "../include/DynamicObject.h"

void __thiscall DynamicObject::meth_0x54b3f0(DynamicObject *this)

{
  int **_Memory;
  
  _Memory = (int **)this->mbr_0x37c;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  if (_Memory != (int **)this->mbr_0x37c) {
    if (_Memory != (int **)this->mbr_0x37c) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (_Memory[2] != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)_Memory[2][1]);
    }
  }
  return;
}



void __thiscall DynamicObject::meth_0x54bf30(DynamicObject *this)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  cls_0x41d550 cVar4;
  int **ppiVar5;
  undefined *puVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  int *piVar9;
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x33c;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x33c) {
    do {
      cVar4.mbr_0x0 = local_4.mbr_0x0;
      if ((*(undefined4 **)(local_4.mbr_0x0 + 0x14) != (undefined4 *)0x0) &&
         (*(char *)(local_4.mbr_0x0 + 0x18) != '\0')) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x14))(1);
      }
      puVar8 = *(undefined4 **)(cVar4.mbr_0x0 + 0x20);
      if ((puVar8 != (undefined4 *)0x0) && (*(char *)(cVar4.mbr_0x0 + 0x24) != '\0')) {
        puVar6 = FUN_004e1de0();
        FUN_004e20f0(puVar6,puVar8);
      }
      cls_0x41d550::meth_0x56a0a0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x33c);
  }
  pvVar2 = *(void **)(this->mbr_0x33c + 4);
  if (*(char *)((int)pvVar2 + 0x29) == '\0') {
    GameActionEquip::meth_0x54b090((GameActionEquip *)&this->field_0x338);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(dword *)(this->mbr_0x33c + 4) = this->mbr_0x33c;
  *(undefined4 *)&this->field_0x340 = 0;
  *(dword *)this->mbr_0x33c = this->mbr_0x33c;
  *(dword *)(this->mbr_0x33c + 8) = this->mbr_0x33c;
  ppiVar7 = (int **)**(int ***)&this->field_0x354;
  if (ppiVar7 != *(int ***)&this->field_0x354) {
    do {
      if ((ppiVar7[5] != (int *)0x0) && (*(char *)(ppiVar7 + 6) != '\0')) {
        (**(code **)*ppiVar7[5])(1);
      }
      piVar9 = ppiVar7[8];
      if ((piVar9 != (int *)0x0) && (*(char *)(ppiVar7 + 9) != '\0')) {
        puVar6 = FUN_004e1de0();
        FUN_004e20f0(puVar6,piVar9);
      }
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar3 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar3 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x29);
          ppiVar7 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x29);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar5 = (int **)ppiVar7[1];
          ppiVar3 = ppiVar7;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
    } while (ppiVar7 != *(int ***)&this->field_0x354);
  }
  pvVar2 = *(void **)(*(int *)&this->field_0x354 + 4);
  if (*(char *)((int)pvVar2 + 0x29) != '\0') {
    *(int *)(*(int *)&this->field_0x354 + 4) = *(int *)&this->field_0x354;
    *(undefined4 *)&this->field_0x358 = 0;
    *(undefined4 *)*(undefined4 *)&this->field_0x354 = *(undefined4 *)&this->field_0x354;
    *(int *)(*(int *)&this->field_0x354 + 8) = *(int *)&this->field_0x354;
    pvVar2 = *(void **)(*(int *)&this->field_0x348 + 4);
    if (*(char *)((int)pvVar2 + 0x15) != '\0') {
      *(int *)(*(int *)&this->field_0x348 + 4) = *(int *)&this->field_0x348;
      *(undefined4 *)&this->field_0x34c = 0;
      *(undefined4 *)*(undefined4 *)&this->field_0x348 = *(undefined4 *)&this->field_0x348;
      *(int *)(*(int *)&this->field_0x348 + 8) = *(int *)&this->field_0x348;
      return;
    }
    cls_0x50dbb0::meth_0x54b0d0((cls_0x50dbb0 *)&this->field_0x344);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  GameActionEquip::meth_0x54b090((GameActionEquip *)&this->field_0x350);
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}



void __thiscall DynamicObject::meth_0x54c180(DynamicObject *this)

{
  char cVar1;
  Gregorian *pGVar2;
  void *pvVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x3c4;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x3c4) {
    do {
      pGVar2 = *(Gregorian **)(local_4.mbr_0x0 + 0x14);
      if ((pGVar2 != (Gregorian *)0x0) && (*(char *)(local_4.mbr_0x0 + 0x18) != '\0')) {
        Gregorian::meth_0x52d100(pGVar2);
                    /* WARNING: Subroutine does not return */
        _free(pGVar2);
      }
      cls_0x41d550::meth_0x41d550(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x3c4);
  }
  pvVar3 = *(void **)(this->mbr_0x3c4 + 4);
  if (*(char *)((int)pvVar3 + 0x21) == '\0') {
    cls_0x4542d0::meth_0x54b110((cls_0x4542d0 *)&this->mbr_0x3c0);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  *(dword *)(this->mbr_0x3c4 + 4) = this->mbr_0x3c4;
  this->mbr_0x3c8 = 0;
  *(dword *)this->mbr_0x3c4 = this->mbr_0x3c4;
  *(dword *)(this->mbr_0x3c4 + 8) = this->mbr_0x3c4;
  ppiVar6 = *(int ***)(int **)this->mbr_0x3d0;
  if (ppiVar6 != (int **)this->mbr_0x3d0) {
    do {
      pGVar2 = (Gregorian *)ppiVar6[5];
      if ((pGVar2 != (Gregorian *)0x0) && (*(char *)(ppiVar6 + 6) != '\0')) {
        Gregorian::meth_0x52d100(pGVar2);
                    /* WARNING: Subroutine does not return */
        _free(pGVar2);
      }
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar4 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar4 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar4 + 0x21);
          ppiVar6 = ppiVar4;
          ppiVar4 = (int **)*ppiVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar4 + 0x21);
            ppiVar6 = ppiVar4;
            ppiVar4 = (int **)*ppiVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar4 = ppiVar6;
          while ((ppiVar6 = ppiVar5, cVar1 == '\0' && (ppiVar4 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
            ppiVar5 = (int **)ppiVar6[1];
            ppiVar4 = ppiVar6;
          }
        }
      }
    } while (ppiVar6 != (int **)this->mbr_0x3d0);
  }
  pvVar3 = *(void **)(this->mbr_0x3d0 + 4);
  if (*(char *)((int)pvVar3 + 0x21) == '\0') {
    cls_0x4542d0::meth_0x54b110((cls_0x4542d0 *)&this->mbr_0x3cc);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  *(dword *)(this->mbr_0x3d0 + 4) = this->mbr_0x3d0;
  this->mbr_0x3d4 = 0;
  *(dword *)this->mbr_0x3d0 = this->mbr_0x3d0;
  *(dword *)(this->mbr_0x3d0 + 8) = this->mbr_0x3d0;
  return;
}



void __thiscall DynamicObject::meth_0x54c390(DynamicObject *this)

{
  dword *this_00;
  GameActionEquip *this_01;
  int iVar1;
  uint uVar2;
  int *piVar3;
  dword dVar4;
  undefined4 unaff_EDI;
  dword *pdVar5;
  dword local_10;
  dword *local_c;
  dword local_8;
  
  dVar4 = this->mbr_0x2ec;
  this_00 = &this->mbr_0x2e0;
  pdVar5 = this_00;
  while ((pdVar5 != this_00 || (dVar4 != this->mbr_0x2f0 + this->mbr_0x2ec))) {
    uVar2 = (int)(dVar4 + ((int)dVar4 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (pdVar5[2] <= uVar2) {
      uVar2 = uVar2 - pdVar5[2];
    }
    this_01 = *(GameActionEquip **)(*(int *)(pdVar5[1] + uVar2 * 4) + (dVar4 + iVar1) * 4);
    local_8 = dVar4;
    cls_0x54b5c0::meth_0x54b5c0
              ((cls_0x54b5c0 *)this_00,(int *)&local_10,dVar4,(int)pdVar5,dVar4 + 1,(int)pdVar5);
    pdVar5 = local_c;
    dVar4 = local_10;
    GameActionEquip::meth_0x55a570(this_01);
  }
  piVar3 = (*this->vftptr_0x0[0x1b].virt_meth_0x568400_0)(this,(byte)unaff_EDI);
  if ((char)piVar3 == '\0') {
    Entity::meth_0x54bf00((Entity *)this);
  }
  this->mbr_0x171 = 1;
  return;
}



void __thiscall DynamicObject::meth_0x5682c0(DynamicObject *this)

{
  DynamicObject *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00638866;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &DynamicObject__vftable_6979fc_006979fc;
  local_4 = 1;
  local_10 = this;
  Entity::meth_0x568220((Entity *)this);
  local_4 = local_4 & 0xffffff00;
  Gfx_LineSystem::~Gfx_LineSystem(&this->Gfx_LineSystem);
  local_4 = 0xffffffff;
  GUI::Interface::meth_0x44e3e0
            ((Interface *)&this->mbr_0x34,(int **)&local_10,*(int ***)(int **)this->mbr_0x38,
             (int **)this->mbr_0x38);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x38);
}



DynamicObject * __thiscall DynamicObject::DynamicObject(DynamicObject *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063887b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &DynamicObject__vftable_6979fc_006979fc;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0xbf000000;
  this->mbr_0x14 = 0xbf000000;
  this->mbr_0x18 = 0xbf000000;
  this->mbr_0x1c = 0x3f000000;
  this->mbr_0x20 = 0x3f000000;
  this->mbr_0x24 = 0x3f000000;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0xffffffff;
  *(undefined *)&this->mbr_0x34 = local_11;
  dVar1 = FUN_0056e2b0();
  this->mbr_0x38 = dVar1;
  *(undefined *)(dVar1 + 0x11) = 1;
  *(dword *)(this->mbr_0x38 + 4) = this->mbr_0x38;
  *(dword *)this->mbr_0x38 = this->mbr_0x38;
  *(dword *)(this->mbr_0x38 + 8) = this->mbr_0x38;
  this->mbr_0x3c = 0;
  local_4 = 0;
  Gfx_LineSystem::Gfx_LineSystem(&this->Gfx_LineSystem);
  this->mbr_0x30 = 1;
  ExceptionList = local_c;
  return this;
}



int * __thiscall DynamicObject::virt_meth_0x568400(DynamicObject *this,byte param_1)

{
  meth_0x5682c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/DynamicObject.h"
