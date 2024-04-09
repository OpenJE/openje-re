#include "../include/Gfx_ModelInstance.h"

Gfx_ModelInstance * __thiscall Gfx_ModelInstance::~Gfx_ModelInstance(Gfx_ModelInstance *this)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  int **ppiVar3;
  cls_0x4a5be0 *this_00;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063198f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_ModelInstance__vftable_66b4b8_0066b4b8;
  iVar2 = *(int *)(this->mbr_0x44 + 0x120);
  local_4 = 3;
  if (iVar2 != 0) {
    *(int *)(this->mbr_0x44 + 0x120) = iVar2 + -1;
  }
  _Memory = (void *)this->mbr_0x48;
  if (_Memory != (void *)0x0) {
    FUN_0049eca0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((int **)this->mbr_0x80 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)this->mbr_0x80;
  }
  if (piVar5 != (int *)this->mbr_0x80) {
    do {
      if ((undefined4 *)piVar5[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar5[2])(1);
        piVar5[2] = 0;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)this->mbr_0x80);
  }
  ppiVar6 = *(int ***)(int **)this->mbr_0xbc;
  if (ppiVar6 != (int **)this->mbr_0xbc) {
    do {
      if (ppiVar6[4] != (int *)0x0) {
        (**(code **)*ppiVar6[4])(1);
      }
      if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
        ppiVar3 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar3 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x15);
          ppiVar6 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x15);
            ppiVar6 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
          ppiVar4 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar3 = ppiVar6;
          }
        }
      }
    } while (ppiVar6 != (int **)this->mbr_0xbc);
  }
  if ((void *)this->mbr_0x94 == (void *)0x0) {
    if ((this->mbr_0x50 != 0) &&
       (this_00 = (cls_0x4a5be0 *)this->mbr_0x4c, this_00 != (cls_0x4a5be0 *)0x0)) {
      cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    cls_0x50dbb0::meth_0x49e8c0
              ((cls_0x50dbb0 *)&this->mbr_0xb8,&piStack_10,*(int ***)(int **)this->mbr_0xbc,
               (int **)this->mbr_0xbc);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xbc);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x94);
}



Gfx_ModelInstance * __thiscall
Gfx_ModelInstance::Gfx_ModelInstance(Gfx_ModelInstance *this,dword param_1)

{
  dword dVar1;
  cls_0x49f150 *pcVar2;
  cls_0x616328 *pcVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631a5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_BaseObject).mbr_0x3c = 0;
  (this->Gfx_BaseObject).mbr_0x38 = 0;
  (this->Gfx_BaseObject).mbr_0x34 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x30 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x28 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x24 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x20 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x1c = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x14 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x10 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0xc = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x8 = 0;
  this->mbr_0x40 = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x2c = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x18 = 0x3f800000;
  (this->Gfx_BaseObject).mbr_0x4 = 0x3f800000;
  local_4 = 0;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_ModelInstance__vftable_66b4b8_0066b4b8;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  dVar1 = FUN_0049db90();
  this->mbr_0x80 = dVar1;
  this->mbr_0x84 = 0;
  local_4._0_1_ = 1;
  dVar1 = FUN_0056e0b0();
  this->mbr_0xb0 = dVar1;
  this->mbr_0xb4 = 0;
  local_4._0_1_ = 2;
  *(undefined *)&this->mbr_0xb8 = (undefined)param_1;
  dVar1 = FUN_004c6640();
  this->mbr_0xbc = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0xbc + 4) = this->mbr_0xbc;
  *(dword *)this->mbr_0xbc = this->mbr_0xbc;
  *(dword *)(this->mbr_0xbc + 8) = this->mbr_0xbc;
  this->mbr_0xc0 = 0;
  this->mbr_0x60 = 0x3f800000;
  this->mbr_0x64 = 0x3f800000;
  local_4._0_1_ = 3;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x5c = 1;
  this->mbr_0x44 = param_1;
  this->mbr_0x4c = 0;
  pcVar2 = (cls_0x49f150 *)operator_new(0xfc);
  local_4._0_1_ = 4;
  if (pcVar2 == (cls_0x49f150 *)0x0) {
    pcVar2 = (cls_0x49f150 *)0x0;
  }
  else {
    pcVar2 = cls_0x49f150::cls_0x49f150(pcVar2);
  }
  this->mbr_0x48 = (dword)pcVar2;
  pcVar2->mbr_0x0 = this->mbr_0x44;
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar3 = (cls_0x616328 *)
           cls_0x49f150::meth_0x49fae0((cls_0x49f150 *)this->mbr_0x48,this->mbr_0x44 + 0x24);
  dVar1 = FUN_006165e0(pcVar3,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                       &Gfx_ModelMeshPkt::RTTI_Type_Descriptor,0);
  this->mbr_0x6c = dVar1;
  dVar1 = FUN_006165e0(pcVar3,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                       &Gfx_SkinMeshPkt::RTTI_Type_Descriptor,0);
  this->mbr_0x70 = dVar1;
  this->mbr_0x9c = 0xffffffff;
  this->mbr_0xa0 = 0xffffffff;
  this->mbr_0xa4 = 0xffffffff;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc9 = 0;
  this->mbr_0x88 = 0x3f000000;
  this->mbr_0x8c = 0x3d23d70a;
  this->mbr_0x90 = 1;
  this->mbr_0xa8 = 1;
  this->mbr_0x98 = 0xbf800000;
  this->mbr_0xc4 = 0xff808080;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall Gfx_ModelInstance::virt_meth_0x4a0600(Gfx_ModelInstance *this,byte param_1)

{
  ~Gfx_ModelInstance(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_ModelInstance.h"
