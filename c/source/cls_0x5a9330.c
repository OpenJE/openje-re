#include "../include/cls_0x5a9330.h"

void __thiscall cls_0x5a9330::meth_0x5a9330(cls_0x5a9330 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == 1) {
    if (DAT_0070be0c == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*DAT_0070be0c;
    }
    puVar1 = DAT_0070be0c;
    if (puVar2 != DAT_0070be0c) {
      do {
        if (((cls_0x548ee0 *)puVar2[2])->field_0x296 != '\0') {
          cls_0x548ee0::meth_0x548ee0((cls_0x548ee0 *)puVar2[2]);
          puVar1 = DAT_0070be0c;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != puVar1);
      this->mbr_0x4 = 1;
      this->mbr_0x14 = 0;
      return;
    }
  }
  else {
    if (DAT_0070be0c == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*DAT_0070be0c;
    }
    puVar1 = DAT_0070be0c;
    if (puVar2 != DAT_0070be0c) {
      do {
        if (((cls_0x548f30 *)puVar2[2])->field_0x296 != '\0') {
          cls_0x548f30::meth_0x548f30((cls_0x548f30 *)puVar2[2]);
          puVar1 = DAT_0070be0c;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != puVar1);
    }
  }
  this->mbr_0x4 = param_1;
  this->mbr_0x14 = 0;
  return;
}



void __thiscall cls_0x5a9330::meth_0x5a94a0(cls_0x5a9330 *this,undefined4 *param_1)

{
  dword *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  dword dVar4;
  int **_Memory;
  int **ppiVar5;
  Entity *this_00;
  
  if (this->mbr_0x8 == 0) {
    this->mbr_0x8 = 1;
    if ((undefined4 *)this->mbr_0x1c == (undefined4 *)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = *(int ***)(undefined4 *)this->mbr_0x1c;
    }
    if (_Memory != (int **)this->mbr_0x1c) {
      do {
        if (_Memory[2][0x78] == 5) {
          (**(code **)(*_Memory[2] + 0x60))(param_1);
          ppiVar5 = (int **)*_Memory;
        }
        else {
          ppiVar5 = (int **)*_Memory;
          if (_Memory != (int **)this->mbr_0x1c) {
            *_Memory[1] = (int)ppiVar5;
            (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
        _Memory = ppiVar5;
      } while (ppiVar5 != (int **)this->mbr_0x1c);
    }
    pdVar1 = (dword *)this->mbr_0x1c;
    if (pdVar1 != (dword *)0x0) {
      pdVar1 = (dword *)*pdVar1;
    }
    this->mbr_0xc = (dword)pdVar1;
  }
  dVar4 = 0;
  if (this->mbr_0x20 != 0) {
    if (this->mbr_0x4 != 0) {
      this_00 = *(Entity **)(this->mbr_0xc + 8);
      if ((this_00->DynamicObject).field_0x319 == '\0') {
        puVar2 = (undefined4 *)FUN_00401150();
        iVar3 = (**(code **)*puVar2)();
        dVar4 = this->mbr_0x10 + iVar3 * 1000;
      }
      else {
        *(undefined4 *)&(this_00->DynamicObject).field_0x29c = 0;
        this->mbr_0xc = *(dword *)this->mbr_0xc;
        if (this->mbr_0x14 != 0) {
          meth_0x5a9330(this,0);
          return;
        }
        if (this->mbr_0xc == this->mbr_0x1c) goto LAB_005a9551;
        this_00 = *(Entity **)(this->mbr_0xc + 8);
      }
      this->mbr_0x10 = dVar4;
      if ((*(int *)&(this_00->DynamicObject).field_0x1e4 == 0) ||
         (*(int *)&(this_00->DynamicObject).field_0x314 != 0)) {
        *(uint *)&(this_00->DynamicObject).field_0x29c = this->mbr_0x10 / 1000;
        Entity::ServerUpdate(this_00,this->mbr_0x10 + (int)param_1);
      }
      return;
    }
    if (this->mbr_0xc != this->mbr_0x1c) {
      do {
        Entity::ServerUpdate(*(Entity **)(this->mbr_0xc + 8),param_1);
        dVar4 = *(dword *)this->mbr_0xc;
        this->mbr_0xc = dVar4;
      } while (dVar4 != this->mbr_0x1c);
    }
  }
LAB_005a9551:
  this->mbr_0x8 = 0;
  return;
}


