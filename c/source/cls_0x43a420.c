#include "../include/cls_0x43a420.h"

void __thiscall cls_0x43a420::meth_0x43a420(cls_0x43a420 *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x0;
  if (piVar1 != (int *)0x0) {
    this->mbr_0x28 = (dword)param_1;
    if (param_1 == (int *)0x0) {
      (**(code **)(*piVar1 + 100))(0);
                    /* WARNING: Could not recover jumptable at 0x0043a480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x0 + 0x74))();
      return;
    }
    if (param_1 == (int *)0x1) {
      (**(code **)(*piVar1 + 100))(100);
                    /* WARNING: Could not recover jumptable at 0x0043a469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x0 + 0x74))();
      return;
    }
    if (param_1 == (int *)0x2) {
      (**(code **)(*piVar1 + 100))(0xff);
                    /* WARNING: Could not recover jumptable at 0x0043a452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this->mbr_0x0 + 0x74))();
      return;
    }
  }
  return;
}



void __thiscall cls_0x43a420::meth_0x43ae90(cls_0x43a420 *this,int *param_1,uint param_2)

{
  dword *this_00;
  char cVar1;
  char *pcVar2;
  int iVar3;
  cls_0x616328 *pcVar4;
  dword *pdVar5;
  char *pcVar6;
  
  if (this->mbr_0x0 != 0) {
    if (param_1 == (int *)0x0) {
      pcVar2 = "?icon_none.bmp";
      this->mbr_0x8 = 0;
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&this->mbr_0xc,"icon_none.bmp",(uint)(pcVar2 + -0x651520));
      (**(code **)(*(int *)this->mbr_0x0 + 0x130))(&this->mbr_0xc,0,0,0,0xbf800000,0xbf800000,1);
      meth_0x43a420(this,(int *)0x0);
      return;
    }
    iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)param_2);
    pcVar4 = (cls_0x616328 *)
             cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar3 + 0x168),(int)param_1);
    iVar3 = FUN_006165e0(pcVar4,0,&Entity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0);
    this->mbr_0x8 = (dword)param_1;
    if (iVar3 != 0) {
      this_00 = &this->mbr_0xc;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)this_00,
                 (_String_base *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 0x254 + iVar3),0,0xffffffff);
      if (this->mbr_0x24 < 0x10) {
        pdVar5 = &this->mbr_0x10;
      }
      else {
        pdVar5 = (dword *)this->mbr_0x10;
      }
      cVar1 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,pdVar5);
      if (cVar1 == '\0') {
        FUN_00401c70(this_00,(undefined4 *)"icon_unknown.bmp");
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0x130))(this_00,0,0,0,0xbf800000,0xbf800000,1);
      meth_0x43a420(this,(int *)0x2);
      return;
    }
    pcVar2 = "icon_unknown.bmp";
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&this->mbr_0xc,"icon_unknown.bmp",(uint)(pcVar6 + -0x650614));
    (**(code **)(*(int *)this->mbr_0x0 + 0x130))(&this->mbr_0xc,0,0,0,0xbf800000,0xbf800000,1);
    meth_0x43a420(this,(int *)0x2);
  }
  return;
}


