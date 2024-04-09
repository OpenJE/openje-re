#include "../include/EngineStringSystem.h"

/* WARNING: Removing unreachable block (ram,0x0056bd28) */

void __thiscall
SS::EngineStringSystem::virt_meth_0x56bca0
          (EngineStringSystem *this,undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint unaff_ESI;
  undefined4 *in_stack_ffffffd8;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638b68;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  StringSystem::virt_meth_0x4c5e30
            (&this->StringSystem,param_1,param_2,(char)unaff_ESI,in_stack_ffffffd8);
  pcVar1 = "tokens.tok";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffd8,"tokens.tok",(uint)(pcVar2 + -0x699558));
  local_4 = 0;
  cls_0x4d8d70::meth_0x5ad530
            ((cls_0x4d8d70 *)&this->mbr_0x16c,(int)&stack0xffffffd8,unaff_ESI,
             (char *)in_stack_ffffffd8);
  ExceptionList = local_c;
  return;
}



void __thiscall
SS::EngineStringSystem::meth_0x56be30(EngineStringSystem *this,cls_0x50db20 *param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  EngineStringSystem *this_00;
  dword *pdVar3;
  undefined *puVar4;
  _String_base *p_Var5;
  char *pcVar6;
  int iVar7;
  void *pvVar8;
  void *this_01;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  dword *pdVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined *_Memory;
  uint unaff_retaddr;
  undefined4 in_stack_fffffeac;
  void *in_stack_fffffeb0;
  undefined local_124 [4];
  char *local_120;
  dword local_110;
  uint local_10c;
  undefined local_108 [4];
  undefined *local_104;
  uint local_f4;
  uint local_f0;
  undefined *local_ec;
  EngineStringSystem *local_e8;
  undefined local_e4 [4];
  void *local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined local_c8 [4];
  void *pvStack_c4;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined local_ac [4];
  void *local_a8;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638bc2;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  uVar16 = 0;
  local_f0 = 0xf;
  local_f4 = 0;
  local_104 = (undefined *)((uint)local_104 & 0xffffff00);
  ExceptionList = &local_c;
  local_e8 = this;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)(local_124 + 0x1c),(_String_base *)param_1,0,0xffffffff);
  local_10c = 0xf;
  local_110 = 0;
  local_120 = (char *)((uint)local_120 & 0xffffff00);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pdVar3 = &param_1->mbr_0x4;
  pdVar13 = pdVar3;
  if (0xf < param_1->mbr_0x18) {
    pdVar13 = (dword *)*pdVar3;
  }
  if (0xf < param_1->mbr_0x18) {
    pdVar3 = (dword *)*pdVar3;
  }
  cls_0x4d8d70::meth_0x49c7a0
            ((cls_0x4d8d70 *)param_1,(int *)(local_108 + 0x1c),(int)pdVar3,
             param_1->mbr_0x14 + (int)pdVar13);
  uVar11 = local_f4;
  uVar15 = local_f0;
  _Memory = local_104;
  if (local_f4 != 0) {
    do {
      puVar4 = _Memory;
      if (uVar15 < 0x10) {
        puVar4 = local_108 + 4;
      }
      uVar2 = uVar16;
      if (puVar4[uVar16] == '<') {
        for (; uVar2 < uVar11; uVar2 = uVar2 + 1) {
          puVar4 = _Memory;
          if (uVar15 < 0x10) {
            puVar4 = local_108 + 4;
          }
          if (puVar4[uVar2] == '>') {
            p_Var5 = (_String_base *)
                     cls_0x4d8d70::meth_0x458ef0
                               ((cls_0x4d8d70 *)(local_124 + 0x1c),local_ac,uVar16 + 1,
                                (uVar2 - uVar16) - 1);
            local_4._0_1_ = 2;
            ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_124,p_Var5,0,0xffffffff);
            local_4._0_1_ = 1;
            if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
              _free(local_a8);
            }
            local_94 = 0xf;
            local_98 = 0;
            local_a8 = (void *)((uint)local_a8 & 0xffffff00);
            pcVar6 = local_120;
            if (local_10c < 0x10) {
              pcVar6 = local_124 + 4;
            }
            iVar7 = __strnicmp(pcVar6,"gv_",3);
            this_00 = local_e8;
            uVar16 = uVar2;
            if (iVar7 == 0) {
              local_cc = 0xf;
              local_d0 = 0;
              local_e0 = (void *)((uint)local_e0 & 0xffffff00);
              local_ec = &stack0xfffffeac;
              in_stack_fffffeb0 = (void *)((uint)in_stack_fffffeb0 & 0xffffff00);
              local_4._0_1_ = 4;
              pvVar8 = cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_124,local_c8,3,0xffffffff);
              if (DAT_0070bd98 == 0) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
              }
              local_4._0_1_ = 6;
              this_01 = (void *)(**(code **)(*piVar14 + 0x6c))();
              uVar9 = FUN_005a9f80(this_01,(int)pvVar8,in_stack_fffffeac,in_stack_fffffeb0);
              local_4 = CONCAT31(local_4._1_3_,3);
              if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_c4);
              }
              uStack_b0 = 0xf;
              uStack_b4 = 0;
              pvStack_c4 = (void *)((uint)pvStack_c4 & 0xffffff00);
              if ((char)uVar9 == '\0') {
                FUN_00497120((byte *)"Couldn\'t find variable %s");
                pcVar6 = "<Bad Token>";
                do {
                  pcVar10 = pcVar6;
                  pcVar6 = pcVar10 + 1;
                } while (*pcVar10 != '\0');
                cls_0x4d8d70::meth_0x4257d0
                          ((cls_0x4d8d70 *)param_1,(undefined4 *)"<Bad Token>",
                           (uint)(pcVar10 + -0x699590));
              }
              else {
                cls_0x4d8d70::meth_0x4256e0
                          ((cls_0x4d8d70 *)param_1,(int)(local_108 + 0x24),0,0xffffffff);
              }
              local_4._0_1_ = 1;
              if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
                _free(local_e0);
              }
              local_d0 = 0;
              local_cc = 0xf;
              local_e0 = (void *)((uint)local_e0 & 0xffffff00);
              uVar11 = local_f4;
              uVar15 = local_f0;
              _Memory = local_104;
            }
            else {
              uVar11 = cls_0x4d8d70::meth_0x5ace40((cls_0x4d8d70 *)&local_e8->mbr_0x16c,local_124);
              if (uVar11 == 0) {
                FUN_00497120((byte *)"No token %s found\r\n");
                uVar11 = local_f4;
                uVar15 = local_f0;
                _Memory = local_104;
              }
              else {
                uVar11 = FUN_004c5900(this_00,uVar11,(char *)&local_90);
                if ((char)uVar11 == '\0') {
                  FUN_00497120((byte *)"Couldn\'t find string %s");
                  pcVar6 = "<Bad Token>";
                  do {
                    pcVar10 = pcVar6;
                    pcVar6 = pcVar10 + 1;
                  } while (*pcVar10 != '\0');
                  cls_0x4d8d70::meth_0x4257d0
                            ((cls_0x4d8d70 *)param_1,(undefined4 *)"<Bad Token>",
                             (uint)(pcVar10 + -0x699590));
                  uVar11 = local_f4;
                  uVar15 = local_f0;
                  _Memory = local_104;
                }
                else {
                  puVar12 = &local_90;
                  do {
                    cVar1 = *(char *)puVar12;
                    puVar12 = (undefined4 *)((int)puVar12 + 1);
                  } while (cVar1 != '\0');
                  cls_0x4d8d70::meth_0x4257d0
                            ((cls_0x4d8d70 *)param_1,&local_90,(int)puVar12 - ((int)&local_90 + 1));
                  uVar11 = local_f4;
                  uVar15 = local_f0;
                  _Memory = local_104;
                }
              }
            }
            break;
          }
        }
      }
      else {
        ::cls_0x50db20::meth_0x425bd0(param_1,1);
        uVar11 = local_f4;
        uVar15 = local_f0;
        _Memory = local_104;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar11);
  }
  if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
    _free(local_120);
  }
  local_10c = 0xf;
  local_110 = 0;
  local_120 = (char *)((uint)local_120 & 0xffffff00);
  if (uVar15 < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
SS::EngineStringSystem::virt_meth_0x56c260
          (EngineStringSystem *this,int param_1,_String_base *param_2)

{
  void *unaff_EDI;
  
  StringSystem::virt_meth_0x4c5a30(&this->StringSystem,param_1,param_2);
  meth_0x56be30(this,param_2,unaff_EDI);
  return;
}



EngineStringSystem * __thiscall SS::EngineStringSystem::EngineStringSystem(EngineStringSystem *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  StringSystem::StringSystem(&this->StringSystem);
  (this->StringSystem).vftptr_0x0 =
       (StringSystem__vftable_670ec8 *)&EngineStringSystem__vftable_6995c0_006995c0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x16c = local_11;
  dVar1 = FUN_0059ec40();
  this->mbr_0x170 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0x170 + 4) = this->mbr_0x170;
  *(dword *)this->mbr_0x170 = this->mbr_0x170;
  *(dword *)(this->mbr_0x170 + 8) = this->mbr_0x170;
  this->mbr_0x174 = 0;
  ExceptionList = local_c;
  return this;
}



EngineStringSystem * __thiscall
SS::EngineStringSystem::~EngineStringSystem(EngineStringSystem *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->StringSystem).vftptr_0x0 =
       (StringSystem__vftable_670ec8 *)&EngineStringSystem__vftable_6995c0_006995c0;
  local_4 = 0;
  cls_0x4d8d70::meth_0x56c2a0
            ((cls_0x4d8d70 *)&this->mbr_0x16c,&local_10,*(int ***)(int **)this->mbr_0x170,
             (int **)this->mbr_0x170);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x170);
}


#include "../include/EngineStringSystem.h"
