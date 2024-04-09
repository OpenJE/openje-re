#include "../include/cls_0x445350.h"

uint __thiscall cls_0x445350::meth_0x445350(cls_0x445350 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
  }
  while( true ) {
    if (piVar1 == (undefined4 *)this->mbr_0xc) {
      return (uint)piVar1 & 0xffffff00;
    }
    if ((piVar1[2] != 0) && (*(char *)(piVar1[2] + 0x10) != '\0')) break;
    piVar1 = (int *)*piVar1;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}



void __thiscall cls_0x445350::meth_0x445380(cls_0x445350 *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  puVar2 = (undefined4 *)this->mbr_0xc;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0xc) {
    do {
      iVar1 = puVar2[2];
      if (iVar1 != 0) {
        if (*(uint *)(iVar1 + 0x48) < 0x10) {
          pcVar7 = (char *)(iVar1 + 0x34);
        }
        else {
          pcVar7 = *(char **)(iVar1 + 0x34);
        }
        iVar3 = __stricmp(pcVar7,"CameraZoomIn_On");
        if (iVar3 == 0) {
          FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                       (undefined4 *)"CameraZoomIn_On");
          piVar6 = *(int **)(iVar1 + 0x50);
          uVar4 = *(uint *)(iVar1 + 0x4c);
          pcVar7 = "CameraZoomIn_Off";
          uVar5 = 1;
        }
        else {
          if (*(uint *)(iVar1 + 0x48) < 0x10) {
            pcVar7 = (char *)(iVar1 + 0x34);
          }
          else {
            pcVar7 = *(char **)(iVar1 + 0x34);
          }
          iVar3 = __stricmp(pcVar7,"CameraZoomOut_On");
          if (iVar3 == 0) {
            FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                         (undefined4 *)"CameraZoomOut_On");
            piVar6 = *(int **)(iVar1 + 0x50);
            uVar4 = *(uint *)(iVar1 + 0x4c);
            pcVar7 = "CameraZoomOut_Off";
            uVar5 = 1;
          }
          else {
            if (*(uint *)(iVar1 + 0x48) < 0x10) {
              pcVar7 = (char *)(iVar1 + 0x34);
            }
            else {
              pcVar7 = *(char **)(iVar1 + 0x34);
            }
            iVar3 = __stricmp(pcVar7,"CameraMouseRotate_On");
            if (iVar3 == 0) {
              FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                           (undefined4 *)"CameraMouseRotate_On");
              piVar6 = *(int **)(iVar1 + 0x50);
              pcVar7 = "CameraMouseRotate_Off";
              uVar5 = 1;
              goto LAB_004455ac;
            }
            if (*(uint *)(iVar1 + 0x48) < 0x10) {
              pcVar7 = (char *)(iVar1 + 0x34);
            }
            else {
              pcVar7 = *(char **)(iVar1 + 0x34);
            }
            iVar3 = __stricmp(pcVar7,"CameraScrollUp_On");
            if (iVar3 == 0) {
              FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                           (undefined4 *)"CameraScrollUp_On");
              piVar6 = *(int **)(iVar1 + 0x50);
              uVar4 = *(uint *)(iVar1 + 0x4c);
              pcVar7 = "CameraScrollUp_Off";
              uVar5 = 1;
            }
            else {
              if (*(uint *)(iVar1 + 0x48) < 0x10) {
                pcVar7 = (char *)(iVar1 + 0x34);
              }
              else {
                pcVar7 = *(char **)(iVar1 + 0x34);
              }
              iVar3 = __stricmp(pcVar7,"CameraScrollDown_On");
              if (iVar3 == 0) {
                FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                             (undefined4 *)"CameraScrollDown_On");
                piVar6 = *(int **)(iVar1 + 0x50);
                uVar4 = *(uint *)(iVar1 + 0x4c);
                pcVar7 = "CameraScrollDown_Off";
                uVar5 = 1;
              }
              else {
                if (*(uint *)(iVar1 + 0x48) < 0x10) {
                  pcVar7 = (char *)(iVar1 + 0x34);
                }
                else {
                  pcVar7 = *(char **)(iVar1 + 0x34);
                }
                iVar3 = __stricmp(pcVar7,"CameraScrollLeft_On");
                if (iVar3 == 0) {
                  FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                               (undefined4 *)"CameraScrollLeft_On");
                  piVar6 = *(int **)(iVar1 + 0x50);
                  pcVar7 = "CameraScrollLeft_Off";
                  uVar5 = 1;
                }
                else {
                  if (*(uint *)(iVar1 + 0x48) < 0x10) {
                    pcVar7 = (char *)(iVar1 + 0x34);
                  }
                  else {
                    pcVar7 = *(char **)(iVar1 + 0x34);
                  }
                  iVar3 = __stricmp(pcVar7,"CameraScrollRight_On");
                  if (iVar3 == 0) {
                    FUN_004452b0(*(uint *)(iVar1 + 0x4c),0,*(int **)(iVar1 + 0x50),
                                 (undefined4 *)"CameraScrollRight_On");
                    piVar6 = *(int **)(iVar1 + 0x50);
                    uVar4 = *(uint *)(iVar1 + 0x4c);
                    pcVar7 = "CameraScrollRight_Off";
                    uVar5 = 1;
                    goto LAB_004455b0;
                  }
                  if (*(uint *)(iVar1 + 0x48) < 0x10) {
                    pcVar7 = (char *)(iVar1 + 0x34);
                  }
                  else {
                    pcVar7 = *(char **)(iVar1 + 0x34);
                  }
                  piVar6 = *(int **)(iVar1 + 0x50);
                  uVar5 = 0;
                }
LAB_004455ac:
                uVar4 = *(uint *)(iVar1 + 0x4c);
              }
            }
          }
        }
LAB_004455b0:
        FUN_004452b0(uVar4,uVar5,piVar6,(undefined4 *)pcVar7);
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)this->mbr_0xc);
  }
  return;
}



void __thiscall cls_0x445350::meth_0x4455d0(cls_0x445350 *this)

{
  GameHotKeys *this_00;
  undefined4 *puVar1;
  
  this_00 = (GameHotKeys *)
            FUN_006165e0(*(cls_0x616328 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x80),0,
                         &HotKeys::RTTI_Type_Descriptor,&GameHotKeys::RTTI_Type_Descriptor,0);
  puVar1 = (undefined4 *)this->mbr_0xc;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 != (undefined4 *)this->mbr_0xc) {
    do {
      if (puVar1[2] != 0) {
        *(undefined4 *)(puVar1[2] + 0x4c) = 0xffffffff;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)this->mbr_0xc);
  }
  meth_0x445380(this);
  if (this_00 == (GameHotKeys *)0x0) {
    return;
  }
  GameHotKeys::meth_0x468ae0(this_00);
  return;
}



void __thiscall cls_0x445350::meth_0x445970(cls_0x445350 *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint unaff_ESI;
  void *_Memory;
  void *local_28;
  undefined local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ed08;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if (this == (cls_0x445350 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4);
  }
  ExceptionList = &pVStack_c;
  cls_0x4b28a0::meth_0x4b4f00((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,iVar2);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = 0;
  pcVar1 = "f3_options_hotkey_edit.tga";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"f3_options_hotkey_edit.tga",(uint)(pcVar3 + -0x659dc8));
  _Memory = (void *)0x0;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x130))(&local_28,0,0,0,0xbf800000,0xbf800000,1);
  if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined *)(param_1 + 0x10) = 1;
  ExceptionList = local_28;
  return;
}



void __thiscall cls_0x445350::meth_0x445a40(cls_0x445350 *this)

{
  int iVar1;
  char *pcVar2;
  VFX_Parameter__vftable_673a20 **ppVVar3;
  int *piVar4;
  char *pcVar5;
  undefined uVar6;
  undefined4 unaff_EDI;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  uVar6 = (undefined)unaff_EDI;
  puStack_8 = &LAB_0062ed08;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if ((int **)this->mbr_0xc == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0xc;
  }
  ExceptionList = &pVStack_c;
  ppVVar3 = &pVStack_c;
  if (piVar4 != (int *)this->mbr_0xc) {
    do {
      local_4 = 0xffffffff;
      iVar1 = piVar4[2];
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x10) != '\0')) {
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        pcVar2 = "f3_options_hotkey_cell.tga";
        do {
          pcVar5 = pcVar2;
          pcVar2 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_28,"f3_options_hotkey_cell.tga",(uint)(pcVar5 + -0x659de4))
        ;
        local_4 = 0;
        (**(code **)(**(int **)(iVar1 + 0xc) + 0x130))(local_28,0,0,0,0xbf800000,0xbf800000,1);
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        *(undefined *)(iVar1 + 0x10) = 0;
      }
      uVar6 = (undefined)unaff_EDI;
      piVar4 = (int *)*piVar4;
      ppVVar3 = (VFX_Parameter__vftable_673a20 **)ExceptionList;
    } while (piVar4 != (int *)this->mbr_0xc);
  }
  ExceptionList = ppVVar3;
  local_4 = 0xffffffff;
  cls_0x4b28a0::meth_0x4b2fe0
            ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
             (char)*(undefined4 *)(this->mbr_0x0 + 4) + (char)this,uVar6);
  ExceptionList = pVStack_c;
  return;
}



void __thiscall cls_0x445350::meth_0x445e20(cls_0x445350 *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 ******_Str2;
  uint unaff_retaddr;
  _String_base local_64 [4];
  undefined4 ******local_60 [4];
  dword local_50;
  uint local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  dword local_30;
  void *local_28;
  dword local_18;
  dword local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  local_4 = 0xff;
  uStack_3 = 0xffffff;
  puStack_8 = &LAB_0062ed88;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((undefined4 *)this->mbr_0xc == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(undefined4 *)this->mbr_0xc;
  }
  while( true ) {
    if (puVar3 == (undefined4 *)this->mbr_0xc) goto LAB_0044605f;
    iVar1 = puVar3[2];
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x10) != '\0')) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined4 ******)((uint)local_60[0] & 0xffffff00);
  local_4 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  FUN_00445d20((cls_0x50db20 *)local_64,param_1,0,(byte)param_2);
  if ((int **)this->mbr_0xc == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0xc;
  }
  if (piVar4 != (int *)this->mbr_0xc) {
    do {
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      iVar2 = piVar4[2];
      local_4 = 1;
      if (iVar2 != 0) {
        _Str2 = local_60[0];
        if (local_4c < 0x10) {
          _Str2 = local_60;
        }
        if (*(uint *)(iVar2 + 0x2c) < 0x10) {
          pcVar5 = (char *)(iVar2 + 0x18);
        }
        else {
          pcVar5 = *(char **)(iVar2 + 0x18);
        }
        iVar6 = __stricmp(pcVar5,(char *)_Str2);
        if (iVar6 == 0) {
          local_30 = 0xf;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffffff00);
          pcVar5 = "";
          do {
            pcVar7 = pcVar5;
            pcVar5 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"",(uint)(pcVar7 + -0x64d7d8));
          local_4 = 2;
          (**(code **)(**(int **)(iVar2 + 4) + 300))(local_48);
          local_4 = 1;
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            _free(local_44);
          }
          local_30 = 0xf;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffffff00);
          pcVar5 = "";
          do {
            pcVar7 = pcVar5;
            pcVar5 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          ::cls_0x50db20::meth_0x401bd0
                    ((cls_0x50db20 *)(iVar2 + 0x14),"",(uint)(pcVar7 + -0x64d7d8));
          *(undefined4 *)(iVar2 + 0x4c) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x50) = 0;
        }
      }
      local_4 = 0;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      piVar4 = (int *)*piVar4;
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
    } while (piVar4 != (int *)this->mbr_0xc);
  }
  (**(code **)(**(int **)(iVar1 + 4) + 300))(local_64);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(iVar1 + 0x14),local_64,0,0xffffffff);
  *(int *)(iVar1 + 0x4c) = param_1;
  *(undefined4 *)(iVar1 + 0x50) = param_2;
  meth_0x445a40(this);
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_60[0]);
  }
LAB_0044605f:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x445350::meth_0x446080(cls_0x445350 *this)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint unaff_retaddr;
  uint local_38;
  uint local_34;
  uint local_30;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062eda8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if ((int **)this->mbr_0xc == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0xc;
  }
  ExceptionList = &local_c;
  if (piVar3 != (int *)this->mbr_0xc) {
    do {
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      iVar1 = piVar3[2];
      local_4 = 0;
      if (iVar1 != 0) {
        local_38 = 0xffffffff;
        if (*(uint *)(iVar1 + 0x48) < 0x10) {
          pcVar2 = (char *)(iVar1 + 0x34);
        }
        else {
          pcVar2 = *(char **)(iVar1 + 0x34);
        }
        GameHotKeys::meth_0x599690
                  (*(GameHotKeys **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x80),&local_38,&local_30,
                   &local_34,pcVar2);
        FUN_00445d20((cls_0x50db20 *)local_2c,local_38,local_30,(byte)local_34);
        (**(code **)(**(int **)(iVar1 + 4) + 300))(local_2c);
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(iVar1 + 0x14),local_2c,0,0xffffffff);
        *(uint *)(iVar1 + 0x4c) = local_38;
        *(uint *)(iVar1 + 0x50) = local_34;
      }
      local_4 = 0xffffffff;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      piVar3 = (int *)*piVar3;
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
    } while (piVar3 != (int *)this->mbr_0xc);
  }
  local_4 = 0xffffffff;
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x445350::meth_0x4461d0(cls_0x445350 *this)

{
  meth_0x445a40(this);
  meth_0x446080(this);
  return;
}


