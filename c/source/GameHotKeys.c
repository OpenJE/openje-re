#include "../include/GameHotKeys.h"

int * __thiscall GameHotKeys::virt_meth_0x45f2b0(GameHotKeys *this,byte param_1)

{
  HotKeys::~HotKeys(&this->HotKeys);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall GameHotKeys::meth_0x468ae0(GameHotKeys *this)

{
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  ppuVar5 = &PTR_LAB_00666334;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)ppuVar5,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666330;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666330;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar3 = &DAT_0066632c;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar3,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666328;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666324;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666320;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_0066631c;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666318;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666314;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666310;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_0066630c;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666308;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666304;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666300;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662fc;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662f8;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662f4;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662f0;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666328;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662ec;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662e8;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666318;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662e4;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662e0;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666314;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_0066630c;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666300;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x1;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662fc;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_006662d8;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Num 2";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Num 2";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Num 4";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Num 4";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Num 6";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Num 6";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Num 8";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Num 8";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Page Up";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Page Up";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Page Down";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  pcVar2 = "Page Down";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar3 = &DAT_0065cbdc;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar3,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar3 = &DAT_0065cbd4;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar3,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_0066629c;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  pcVar2 = "Right";
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)pcVar2,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x0;
  puVar4 = &DAT_00666290;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  puVar7 = (undefined4 *)0x0;
  piVar6 = (int *)0x1;
  puVar4 = &DAT_00666290;
  uVar1 = (**(code **)(*(int *)(this->HotKeys).mbr_0x4 + 0x10))();
  meth_0x599860(this,uVar1,(uint)puVar4,piVar6,puVar7);
  return;
}



void __thiscall GameHotKeys::virt_meth_0x469090(GameHotKeys *this)

{
  meth_0x468ae0(this);
  HotKeys::virt_meth_0x5998c0(&this->HotKeys);
  return;
}



uint __thiscall
GameHotKeys::meth_0x599690
          (GameHotKeys *this,uint *param_1,uint *param_2,uint *param_3,char *param_4)

{
  cls_0x41d550 cVar1;
  char *_Str2;
  int iVar2;
  int *piVar3;
  cls_0x41d550 local_4;
  
  piVar3 = (int *)(this->HotKeys).mbr_0x10;
  local_4.mbr_0x0 = *piVar3;
  if ((int *)local_4.mbr_0x0 != piVar3) {
    do {
      cVar1.mbr_0x0 = local_4.mbr_0x0;
      if (*(uint *)(local_4.mbr_0x0 + 0x28) < 0x10) {
        _Str2 = (char *)(local_4.mbr_0x0 + 0x14);
      }
      else {
        _Str2 = *(char **)(local_4.mbr_0x0 + 0x14);
      }
      iVar2 = __stricmp(param_4,_Str2);
      if (iVar2 == 0) {
        *param_1 = *(uint *)(cVar1.mbr_0x0 + 0xc) & 0xffff;
        *param_2 = *(byte *)(cVar1.mbr_0x0 + 0xe) & 0xf;
        *param_3 = *(int *)(cVar1.mbr_0x0 + 0xc) >> 0x14 & 0xf;
        return CONCAT31((int3)((uint)param_2 >> 8),1);
      }
      piVar3 = (int *)cls_0x41d550::meth_0x4c8eb0(&local_4);
    } while (local_4.mbr_0x0 != (this->HotKeys).mbr_0x10);
  }
  return (uint)piVar3 & 0xffffff00;
}



void __thiscall
GameHotKeys::meth_0x5997b0(GameHotKeys *this,uint param_1,int **param_2,uint param_3)

{
  dword *this_00;
  
  param_3 = ((param_3 & 0xf) << 4 | (uint)param_2 & 0xf) << 0x10 | param_1 & 0xffff;
  this_00 = &(this->HotKeys).mbr_0xc;
  cls_0x4d8d70::meth_0x52af40((cls_0x4d8d70 *)this_00,(int *)&param_2,(int *)&param_3);
  if (param_2 != (int **)(this->HotKeys).mbr_0x10) {
    cls_0x4d8d70::meth_0x52b120((cls_0x4d8d70 *)this_00,(int **)&param_3);
  }
  return;
}



undefined4 __thiscall
GameHotKeys::meth_0x599860
          (GameHotKeys *this,uint param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  cls_0x50db20 *this_00;
  _String_base *p_Var2;
  undefined4 *puVar3;
  
  param_3 = (int *)((((uint)param_3 & 0xf) << 4 | param_2 & 0xf) << 0x10 | param_1 & 0xffff);
  this_00 = (cls_0x50db20 *)
            cls_0x4d8d70::meth_0x52bc90((cls_0x4d8d70 *)&(this->HotKeys).mbr_0xc,&param_3);
  puVar3 = param_4;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  p_Var2 = ::cls_0x50db20::meth_0x401bd0(this_00,(char *)param_4,(int)puVar3 - ((int)param_4 + 1));
  return CONCAT31((int3)((uint)p_Var2 >> 8),1);
}


#include "../include/GameHotKeys.h"
