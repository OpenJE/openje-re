#include "../include/cls_0x42a780.h"

cls_0x42a780 * __thiscall cls_0x42a780::cls_0x42a780(cls_0x42a780 *this,int param_1)

{
  char cVar1;
  dword dVar2;
  undefined uVar3;
  DWORD DVar4;
  cls_0x441420 *pcVar5;
  cls_0x426720 *pcVar6;
  CounterControl *pCVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  cls_0x42a6a0 *pcVar11;
  cls_0x4c0190 *pcVar12;
  Gfx_CamCtrl_Orbit *pGVar13;
  int iVar14;
  char *pcVar15;
  Gfx_Light *pGVar16;
  Base *this_00;
  int iVar17;
  undefined1 **ppuVar18;
  dword *pdVar19;
  char *pcVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined local_3b0 [20];
  dword local_39c;
  uint local_398;
  CounterControl *pCStack_394;
  undefined local_390 [36];
  cls_0x4c0190 *pcStack_36c;
  undefined4 auStack_368 [2];
  dword dStack_360;
  dword dStack_35c;
  dword dStack_358;
  undefined auStack_354 [4];
  undefined auStack_350 [4];
  undefined1 *puStack_34c;
  char *apcStack_348 [4];
  char *pcStack_338;
  char *pcStack_334;
  char *pcStack_330;
  char *pcStack_32c;
  char *pcStack_328;
  char *pcStack_324;
  char *pcStack_320;
  char *pcStack_31c;
  char *pcStack_318;
  char *pcStack_314;
  char *pcStack_310;
  char *pcStack_30c;
  char *pcStack_308;
  char *pcStack_304;
  char *pcStack_300;
  char *pcStack_2fc;
  char *pcStack_2f8;
  char *pcStack_2f4;
  char *pcStack_2f0;
  char *pcStack_2ec;
  char *pcStack_2e8;
  char *pcStack_2e4;
  char *pcStack_2e0;
  char *pcStack_2dc;
  char *pcStack_2d8;
  char *pcStack_2d4;
  char *pcStack_2d0;
  char *pcStack_2cc;
  char *pcStack_2c8;
  char *pcStack_2c4;
  char *pcStack_2c0;
  char *pcStack_2bc;
  char *pcStack_2b8;
  char *pcStack_2b4;
  char *pcStack_2b0;
  char *pcStack_2ac;
  char *pcStack_2a8;
  char *pcStack_2a4;
  char *pcStack_2a0;
  char *pcStack_29c;
  char *pcStack_298;
  char *pcStack_294;
  char *pcStack_290;
  char *pcStack_28c;
  char *pcStack_288;
  char *pcStack_284;
  char *pcStack_280;
  char *pcStack_27c;
  char *pcStack_278;
  char *pcStack_274;
  char *pcStack_270;
  char *pcStack_26c;
  char *pcStack_268;
  char *pcStack_264;
  char *pcStack_260;
  char *pcStack_25c;
  char *pcStack_258;
  char *pcStack_254;
  char *pcStack_250;
  char *pcStack_24c;
  char *pcStack_248;
  char *pcStack_244;
  char *pcStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  char *pcStack_228;
  char *pcStack_224;
  char *pcStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  char *pcStack_210;
  char *pcStack_20c;
  char *pcStack_208;
  char *pcStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  char *pcStack_1f4;
  char *pcStack_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  char *pcStack_1d4;
  char *pcStack_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *pcStack_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  char *pcStack_1a0;
  char *pcStack_19c;
  char *pcStack_198;
  char *pcStack_194;
  char *pcStack_190;
  char *pcStack_18c;
  char *pcStack_188;
  char *pcStack_184;
  char *pcStack_180;
  char *pcStack_17c;
  char *pcStack_178;
  char *pcStack_174;
  char *pcStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  char *pcStack_164;
  char *pcStack_160;
  char *pcStack_15c;
  char *pcStack_158;
  char *pcStack_154;
  char *pcStack_150;
  char *pcStack_14c;
  char *pcStack_148;
  char *pcStack_144;
  char *pcStack_140;
  char *pcStack_13c;
  char *pcStack_138;
  char *pcStack_134;
  char *pcStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  char *pcStack_120;
  char *pcStack_11c;
  char *pcStack_118;
  char *pcStack_114;
  char *pcStack_110;
  char *pcStack_10c;
  char *pcStack_108;
  char *pcStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  char *pcStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  char *pcStack_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  char *pcStack_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  char *pcStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  char *pcStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  char *pcStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  char *pcStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  char *pcStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  cls_0x42a780 *local_78;
  undefined4 auStack_74 [15];
  void *pvStack_38;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062d0b8;
  pvStack_c = ExceptionList;
  local_390._28_4_ = (VFX_Parameter__vftable_673a20 *)0x0;
  ExceptionList = &pvStack_c;
  local_78 = this;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->cls_0x4395a0).mbr_0x0 = (dword)&DAT_00652884;
    local_390._24_4_ = 0xf;
    local_390._20_4_ = 0;
    local_390._4_4_ = local_390._4_4_ & 0xffffff00;
    pcVar20 = "CharacterGeneration";
    do {
      pcVar15 = pcVar20;
      pcVar20 = pcVar15 + 1;
    } while (*pcVar15 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_390,"CharacterGeneration",(uint)(pcVar15 + -0x65288c));
    local_4 = 0;
    local_390._28_4_ = (VFX_Parameter__vftable_673a20 *)0x1;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&this->field_0x128,(_String_base *)local_390);
    local_4 = 2;
    local_390._28_4_ = (VFX_Parameter__vftable_673a20 *)0x2;
    if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_390._4_4_);
    }
    local_390._24_4_ = 0xf;
    local_390._20_4_ = 0;
    local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "CharacterGeneration";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_3b0,"CharacterGeneration",(uint)(pcVar15 + -0x65288c));
  local_4 = 3;
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,(_String_base *)local_3b0,0);
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(CCharacterGenerationInterface__vftable_65286c **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CCharacterGenerationInterface__vftable_65286c_0065286c;
  iVar17 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar17 + -4 + (int)this) = iVar17 + -0x128;
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28 = 0;
  this->mbr_0x68 = 0xf;
  this->mbr_0x64 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0x40490fdb;
  this->mbr_0xc4 = 0x41200000;
  this->mbr_0xc8 = 0x41d00000;
  DVar4 = timeGetTime();
  this->mbr_0xcc = DVar4;
  this->mbr_0xd0 = 1;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xfc = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  local_4._0_1_ = 8;
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "CharacterGeneration.INT";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_3b0,"CharacterGeneration.INT",(uint)(pcVar15 + -0x652850));
  local_4._0_1_ = 9;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)local_3b0);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  pCStack_394 = (CounterControl *)FUN_004a7680(0x5c);
  local_4._0_1_ = 10;
  if (pCStack_394 == (CounterControl *)0x0) {
    pcVar5 = (cls_0x441420 *)0x0;
  }
  else {
    pcVar5 = cls_0x441420::cls_0x441420((cls_0x441420 *)pCStack_394,1);
  }
  local_4._0_1_ = 8;
  *(cls_0x441420 **)&(this->cls_0x4395a0).CEngineInterface.Interface = pcVar5;
  pCStack_394 = (CounterControl *)FUN_004a7680(0x6c);
  local_4._0_1_ = 0xb;
  if (pCStack_394 == (CounterControl *)0x0) {
    pcVar6 = (cls_0x426720 *)0x0;
  }
  else {
    pcVar6 = cls_0x426720::cls_0x426720((cls_0x426720 *)pCStack_394,1);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = (dword)pcVar6;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0xc;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,1);
  CounterControl::meth_0x430890
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winST1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winST1",(uint)(pcVar15 + -0x652848));
  local_4._0_1_ = 0xd;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winST10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winST10",(uint)(pcVar15 + -0x652840));
  local_4._0_1_ = 0xe;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "btnST-";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"btnST-",(uint)(pcVar15 + -0x652838));
  local_4._0_1_ = 0xf;
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "btnST+";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"btnST+",(uint)(pcVar15 + -0x652830));
  local_4._0_1_ = 0x10;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  cls_0x4b8790::meth_0x4b8790
            ((cls_0x4b8790 *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,uVar10,uVar9);
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 + 0xc4) = 0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x11;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,1);
  CounterControl::meth_0x430890
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winPE1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winPE1",(uint)(pcVar15 + -0x652828));
  local_4._0_1_ = 0x12;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winPE10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winPE10",(uint)(pcVar15 + -0x652820));
  local_4._0_1_ = 0x13;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "btnPE-";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"btnPE-",(uint)(pcVar15 + -0x652818));
  local_4._0_1_ = 0x14;
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "btnPE+";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"btnPE+",(uint)(pcVar15 + -0x652810));
  local_4._0_1_ = 0x15;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  cls_0x4b8790::meth_0x4b8790
            ((cls_0x4b8790 *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,uVar10,uVar9);
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc + 0xc4) = 0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x16;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  *(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,1);
  CounterControl::meth_0x430890
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winEN1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winEN1",(uint)(pcVar15 + -0x652808));
  local_4._0_1_ = 0x17;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,0,
             piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winEN10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winEN10",(uint)(pcVar15 + -0x652800));
  local_4._0_1_ = 0x18;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,1,
             piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "btnEN-";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"btnEN-",(uint)(pcVar15 + -0x6527f8));
  local_4._0_1_ = 0x19;
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "btnEN+";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"btnEN+",(uint)(pcVar15 + -0x6527f0));
  local_4._0_1_ = 0x1a;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  cls_0x4b8790::meth_0x4b8790
            (*(cls_0x4b8790 **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,uVar10,
             uVar9);
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)(*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 + 0xc4) =
       0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x1b;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  *(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14,1);
  CounterControl::meth_0x430890
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winCH1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winCH1",(uint)(pcVar15 + -0x6527e8));
  local_4._0_1_ = 0x1c;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14,0,
             piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winCH10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winCH10",(uint)(pcVar15 + -0x6527e0));
  local_4._0_1_ = 0x1d;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14,1,
             piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "btnCH-";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"btnCH-",(uint)(pcVar15 + -0x6527d8));
  local_4._0_1_ = 0x1e;
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "btnCH+";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"btnCH+",(uint)(pcVar15 + -0x6527d0));
  local_4._0_1_ = 0x1f;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  cls_0x4b8790::meth_0x4b8790
            (*(cls_0x4b8790 **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14,uVar10,
             uVar9);
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)(*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 + 0xc4) =
       0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x20;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18,1);
  CounterControl::meth_0x430890
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winIN1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winIN1",(uint)(pcVar15 + -0x6527c8));
  local_4._0_1_ = 0x21;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winIN10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winIN10",(uint)(pcVar15 + -0x6527c0));
  local_4._0_1_ = 0x22;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "btnIN-";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"btnIN-",(uint)(pcVar15 + -0x6527b8));
  local_4._0_1_ = 0x23;
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "btnIN+";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"btnIN+",(uint)(pcVar15 + -0x6527b0));
  local_4._0_1_ = 0x24;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  cls_0x4b8790::meth_0x4b8790
            ((cls_0x4b8790 *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18,uVar10,uVar9);
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 + 0xc4) = 0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x25;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c,1);
  CounterControl::meth_0x430890
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c,10);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winAG1";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winAG1",(uint)(pcVar15 + -0x6527a8));
  local_4._0_1_ = 0x26;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "winAG10";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_3b0,"winAG10",(uint)(pcVar15 + -0x6527a0));
  local_4._0_1_ = 0x27;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_390,"btnAG-");
  local_4._0_1_ = 0x28;
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"btnAG+");
  local_4._0_1_ = 0x29;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  cls_0x4b8790::meth_0x4b8790
            ((cls_0x4b8790 *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c,uVar10,uVar9);
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c + 0xc4) = 0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x2a;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  *(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  CounterControl::meth_0x430850
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,1);
  CounterControl::meth_0x430890
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,10);
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winLK1");
  local_4._0_1_ = 0x2b;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,0,piVar8)
  ;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winLK10");
  local_4._0_1_ = 0x2c;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,1,piVar8)
  ;
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_390,"btnLK-");
  local_4._0_1_ = 0x2d;
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"btnLK+");
  local_4._0_1_ = 0x2e;
  uVar9 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  uVar10 = CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  cls_0x4b8790::meth_0x4b8790
            (*(cls_0x4b8790 **)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,uVar10,
             uVar9);
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  local_4._0_1_ = 8;
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  *(undefined4 *)(*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 + 0xc4) =
       0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x2f;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winCharPoints1");
  local_4._0_1_ = 0x30;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winCharPoints10");
  local_4._0_1_ = 0x31;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 + 0xc4) = 0x3dcccccd;
  pCStack_394 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 0x32;
  if (pCStack_394 == (CounterControl *)0x0) {
    pCVar7 = (CounterControl *)0x0;
  }
  else {
    pCVar7 = CounterControl::CounterControl(pCStack_394);
  }
  local_4._0_1_ = 8;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28 = (dword)pCVar7;
  CounterControl::meth_0x4332e0(pCVar7,2);
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winTagSkills1");
  local_4._0_1_ = 0x33;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28,0,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_3b0,"winTagSkills10");
  local_4._0_1_ = 0x34;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_3b0);
  CounterControl::meth_0x432b60
            ((CounterControl *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28,1,piVar8);
  local_4._0_1_ = 8;
  if (0xf < local_398) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._4_4_);
  }
  *(undefined4 *)((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28 + 0xc4) = 0x3dcccccd;
  pdVar19 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c;
  iVar17 = 7;
  do {
    local_4._0_1_ = 8;
    pCStack_394 = (CounterControl *)operator_new(0x44);
    local_4._0_1_ = 0x35;
    if (pCStack_394 == (CounterControl *)0x0) {
      pcVar11 = (cls_0x42a6a0 *)0x0;
    }
    else {
      pcVar11 = cls_0x42a6a0::cls_0x42a6a0((cls_0x42a6a0 *)pCStack_394);
    }
    *pdVar19 = (dword)pcVar11;
    pdVar19 = pdVar19 + 1;
    iVar17 = iVar17 + -1;
    local_4._0_1_ = 8;
  } while (iVar17 != 0);
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  pcVar20 = "winModel";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_390,"winModel",(uint)(pcVar15 + -0x652724));
  local_4._0_1_ = 0x36;
  piVar8 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
  local_4._0_1_ = 8;
  uVar3 = (undefined)local_4;
  local_4._0_1_ = 8;
  if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_390._4_4_);
  }
  local_390._24_4_ = 0xf;
  local_390._20_4_ = 0;
  local_390._4_4_ = local_390._4_4_ & 0xffffff00;
  if (piVar8 != (int *)0x0) {
    pcStack_36c = (cls_0x4c0190 *)operator_new(0x280);
    local_4._0_1_ = 0x37;
    if (pcStack_36c == (cls_0x4c0190 *)0x0) {
      pcVar12 = (cls_0x4c0190 *)0x0;
    }
    else {
      pcVar12 = cls_0x4c0190::cls_0x4c0190(pcStack_36c);
    }
    local_4._0_1_ = 8;
    this->mbr_0xb8 = (dword)pcVar12;
    pcStack_36c = (cls_0x4c0190 *)operator_new(0xb8);
    local_4._0_1_ = 0x38;
    if (pcStack_36c == (cls_0x4c0190 *)0x0) {
      pGVar13 = (Gfx_CamCtrl_Orbit *)0x0;
    }
    else {
      pGVar13 = Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit((Gfx_CamCtrl_Orbit *)pcStack_36c);
    }
    this->mbr_0xbc = (dword)pGVar13;
    local_4._0_1_ = 8;
    (**(code **)(*piVar8 + 0x14))(auStack_350,auStack_354);
    (**(code **)(*piVar8 + 0x48))(local_3b0 + 0x14,local_390 + 0x24);
    cls_0x4b28a0::meth_0x4b28c0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(undefined4 *)(local_390 + 0x20),
               (undefined4 *)(local_390 + 0x28));
    uVar22 = 0x3f800000;
    uVar10 = 0;
    uVar21 = FUN_00616e24();
    iVar17 = (int)uVar21;
    uVar21 = FUN_00616e24();
    iVar14 = (int)uVar21;
    uVar21 = FUN_00616e24();
    uVar9 = (undefined4)uVar21;
    uVar21 = FUN_00616e24();
    cls_0x4c0190::meth_0x4248f0
              ((cls_0x4c0190 *)this->mbr_0xb8,(int)uVar21,uVar9,iVar14,iVar17,uVar10,uVar22);
    dVar2 = this->mbr_0xb8;
    *(undefined4 *)(dVar2 + 0x24) = 0;
    *(undefined4 *)(dVar2 + 0x1e0) = 0;
    *(undefined4 *)(dVar2 + 0x1c4) = 0;
    *(undefined4 *)(dVar2 + 0x1a8) = 0;
    *(undefined4 *)(dVar2 + 0x18c) = 0;
    cls_0x4c0190::meth_0x429d20((cls_0x4c0190 *)this->mbr_0xb8,this->mbr_0xbc);
    uVar3 = (undefined)local_4;
  }
  local_4._0_1_ = uVar3;
  pcVar20 = "lblST";
  puStack_34c = &DAT_00651c50;
  apcStack_348[0] = "lblPE";
  apcStack_348[1] = "lblEN";
  apcStack_348[2] = "lblCH";
  apcStack_348[3] = "lblIN";
  pcStack_338 = "lblAG";
  pcStack_334 = "lblLK";
  pcStack_330 = "lblSkillsHeading1";
  pcStack_32c = "lblSkillsHeading1a";
  pcStack_328 = "lblSkillsHeading1b";
  pcStack_324 = "lblSkillsHeading2";
  pcStack_320 = "lblSkillsHeading3";
  pcStack_31c = "lblSkillsHeading4";
  pcStack_318 = "lblSkill1a";
  pcStack_314 = "lblSkill1b";
  pcStack_310 = "lblSkill1c";
  pcStack_30c = "lblSkill2a";
  pcStack_308 = "lblSkill2b";
  pcStack_304 = "lblSkill2c";
  pcStack_300 = "lblSkill3a";
  pcStack_2fc = "lblSkill3b";
  pcStack_2f8 = "lblSkill3c";
  pcStack_2f4 = "lblSkill4a";
  pcStack_2f0 = "lblSkill4b";
  pcStack_2ec = "lblSkill4c";
  pcStack_2e8 = "lblSkill5a";
  pcStack_2e4 = "lblSkill5b";
  pcStack_2e0 = "lblSkill5c";
  pcStack_2dc = "lblSkill6a";
  pcStack_2d8 = "lblSkill6b";
  pcStack_2d4 = "lblSkill6c";
  pcStack_2d0 = "lblSkill7a";
  pcStack_2cc = "lblSkill7b";
  pcStack_2c8 = "lblSkill7c";
  pcStack_2c4 = "lblSkill8a";
  pcStack_2c0 = "lblSkill8b";
  pcStack_2bc = "lblSkill8c";
  pcStack_2b8 = "lblSkill9a";
  pcStack_2b4 = "lblSkill9b";
  pcStack_2b0 = "lblSkill9c";
  pcStack_2ac = "lblSkill10a";
  pcStack_2a8 = "lblSkill10b";
  pcStack_2a4 = "lblSkill10c";
  pcStack_2a0 = "lblSkill11a";
  pcStack_29c = "lblSkill11b";
  pcStack_298 = "lblSkill11c";
  pcStack_294 = "lblSkill12a";
  pcStack_290 = "lblSkill12b";
  pcStack_28c = "lblSkill12c";
  pcStack_288 = "lblSkill13a";
  pcStack_284 = "lblSkill13b";
  pcStack_280 = "lblSkill13c";
  pcStack_27c = "lblSkill14a";
  pcStack_278 = "lblSkill14b";
  pcStack_274 = "lblSkill14c";
  pcStack_270 = "lblTrait11";
  pcStack_26c = "lblTrait12";
  pcStack_268 = "lblTrait13";
  pcStack_264 = "lblTrait14";
  pcStack_260 = "lblTrait15";
  pcStack_25c = "lblTrait16";
  pcStack_258 = "lblTrait17";
  pcStack_254 = "lblTrait18";
  pcStack_250 = "lblTrait21";
  pcStack_24c = "lblTrait22";
  pcStack_248 = "lblTrait23";
  pcStack_244 = "lblTrait24";
  pcStack_240 = "lblTrait25";
  pcStack_23c = "lblTrait26";
  pcStack_238 = "lblTrait27";
  pcStack_234 = "lblTrait28";
  pcStack_230 = "lblDerivedStats";
  pcStack_22c = "lblResistances";
  pcStack_228 = "lblDerivedStat1a";
  pcStack_224 = "lblDerivedStat2a";
  pcStack_220 = "lblDerivedStat3a";
  pcStack_21c = "lblDerivedStat4a";
  pcStack_218 = "lblDerivedStat5a";
  pcStack_214 = "lblDerivedStat6a";
  pcStack_210 = "lblDerivedStat7a";
  pcStack_20c = "lblDerivedStat8a";
  pcStack_208 = "lblDerivedStat9a";
  pcStack_204 = "lblDerivedStat10a";
  pcStack_200 = "lblDerivedStat11a";
  pcStack_1fc = "lblDerivedStat12a";
  pcStack_1f8 = "lblDerivedStat13a";
  pcStack_1f4 = "lblDerivedStat14a";
  pcStack_1f0 = "lblDerivedStat1b";
  pcStack_1ec = "lblDerivedStat2b";
  pcStack_1e8 = "lblDerivedStat3b";
  pcStack_1e4 = "lblDerivedStat4b";
  pcStack_1e0 = "lblDerivedStat5b";
  pcStack_1dc = "lblDerivedStat6b";
  pcStack_1d8 = "lblDerivedStat7b";
  pcStack_1d4 = "lblDerivedStat8b";
  pcStack_1d0 = "lblDerivedStat9b";
  pcStack_1cc = "lblDerivedStat10b";
  pcStack_1c8 = "lblDerivedStat11b";
  pcStack_1c4 = "lblDerivedStat12b";
  pcStack_1c0 = "lblDerivedStat13b";
  pcStack_1bc = "lblDerivedStat14b";
  pcStack_1b8 = "lblAppearanceHeading1";
  pcStack_1b4 = "lblAppearanceHeading2";
  pcStack_1b0 = "lblAppearanceHeading3";
  pcStack_1ac = "lblAppearanceHeading4";
  pcStack_1a8 = "lblAppearanceHeading5";
  pcStack_1a4 = "lblAppearanceHeading6";
  pcStack_1a0 = "lblAppearanceHeading7";
  pcStack_19c = "lblAppearance11";
  pcStack_198 = "lblAppearance12";
  pcStack_194 = "lblAppearance13";
  pcStack_190 = "lblAppearance14";
  pcStack_18c = "lblAppearance15";
  pcStack_188 = "lblAppearance16";
  pcStack_184 = "lblAppearance21";
  pcStack_180 = "lblAppearance22";
  pcStack_17c = "lblAppearance23";
  pcStack_178 = "lblAppearance24";
  pcStack_174 = "lblAppearance25";
  pcStack_170 = "lblAppearance26";
  pcStack_16c = "lblAppearance31";
  pcStack_168 = "lblAppearance32";
  pcStack_164 = "lblAppearance33";
  pcStack_160 = "lblAppearance34";
  pcStack_15c = "lblAppearance35";
  pcStack_158 = "lblAppearance36";
  pcStack_154 = "lblAppearance41";
  pcStack_150 = "lblAppearance42";
  pcStack_14c = "lblAppearance43";
  pcStack_148 = "lblAppearance44";
  pcStack_144 = "lblAppearance45";
  pcStack_140 = "lblAppearance46";
  pcStack_13c = "lblAppearance51";
  pcStack_138 = "lblAppearance52";
  pcStack_134 = "lblAppearance53";
  pcStack_130 = "lblAppearance54";
  pcStack_12c = "lblAppearance55";
  pcStack_128 = "lblAppearance56";
  pcStack_124 = "lblAppearance61";
  pcStack_120 = "lblAppearance62";
  pcStack_11c = "lblAppearance63";
  pcStack_118 = "lblAppearance64";
  pcStack_114 = "lblAppearance65";
  pcStack_110 = "lblAppearance66";
  pcStack_10c = "lblAppearance71";
  pcStack_108 = "lblAppearance72";
  pcStack_104 = "lblAppearance73";
  pcStack_100 = "lblAppearance74";
  pcStack_fc = "lblAppearance75";
  pcStack_f8 = "lblAppearance76";
  pcStack_f4 = "lblStats";
  pcStack_f0 = "lblDamageThresholds";
  pcStack_ec = "lblDTHead";
  pcStack_e8 = "lblHeadBallistic";
  pcStack_e4 = "lblHeadBiological";
  pcStack_e0 = "lblHeadElectrical";
  pcStack_dc = "lblHeadEMP";
  pcStack_d8 = "lblHeadHeat";
  pcStack_d4 = "lblHeadNormal";
  pcStack_d0 = "lblHeadBallisticValue";
  pcStack_cc = "lblHeadBiologicalValue";
  pcStack_c8 = "lblHeadElectricalValue";
  pcStack_c4 = "lblHeadEMPValue";
  pcStack_c0 = "lblHeadHeatValue";
  pcStack_bc = "lblHeadNormalValue";
  pcStack_b8 = "lblDTBody";
  pcStack_b4 = "lblBodyBallistic";
  pcStack_b0 = "lblBodyBiological";
  pcStack_ac = "lblBodyElectrical";
  pcStack_a8 = "lblBodyEMP";
  pcStack_a4 = "lblBodyHeat";
  pcStack_a0 = "lblBodyNormal";
  pcStack_9c = "lblBodyBallisticValue";
  pcStack_98 = "lblBodyBiologicalValue";
  pcStack_94 = "lblBodyElectricalValue";
  pcStack_90 = "lblBodyEMPValue";
  pcStack_8c = "lblBodyHeatValue";
  pcStack_88 = "lblBodyNormalValue";
  pcStack_84 = "lblHP1";
  puStack_80 = &DAT_00651eec;
  uStack_7c = 0;
  ppuVar18 = &puStack_34c;
  do {
    local_390._24_4_ = 0xf;
    local_390._20_4_ = 0;
    local_390._4_4_ = local_390._4_4_ & 0xffffff00;
    pcVar15 = pcVar20;
    do {
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_390,pcVar20,(int)pcVar15 - (int)(pcVar20 + 1));
    local_4._0_1_ = 0x3a;
    piVar8 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_390);
    local_4._0_1_ = 8;
    if (0xf < (uint)local_390._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_390._4_4_);
    }
    local_390._24_4_ = 0xf;
    local_390._20_4_ = 0;
    local_390._4_4_ = local_390._4_4_ & 0xffffff00;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xe8))(0);
    }
    pcVar20 = ppuVar18[1];
    ppuVar18 = ppuVar18 + 1;
  } while (pcVar20 != (char *)0x0);
  this->mbr_0x6c = 0x4381ae14;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0x43879852;
  this->mbr_0x78 = 0x43020000;
  this->mbr_0x7c = 0x42b5d70a;
  this->mbr_0x80 = 0x4158f5c3;
  this->mbr_0x84 = 0x43d6a7ae;
  this->mbr_0x94 = 0x420c0000;
  this->mbr_0x88 = 0x439c999a;
  this->mbr_0x8c = 0xc0900000;
  this->mbr_0x90 = 0x43750000;
  this->mbr_0x98 = 0x4311cccd;
  this->mbr_0x9c = 0x42000000;
  this->mbr_0xa0 = 0x43be2666;
  this->mbr_0xb0 = 0x420c0000;
  this->mbr_0xa4 = 0x439c999a;
  this->mbr_0xa8 = 0xc0900000;
  this->mbr_0xac = 0x43750000;
  FUN_00424740(auStack_74,1,0x3f800000,0x3f800000,0x3f800000,0,0,0x3f800000,0,0,0,0x44bb8000,
               0x3f800000,0x3f800000,0x3c23d70a,0,0,0);
  pGVar16 = (Gfx_Light *)operator_new(0xb4);
  if (pGVar16 == (Gfx_Light *)0x0) {
    pGVar16 = (Gfx_Light *)0x0;
  }
  else {
    pGVar16 = Gfx_Light::Gfx_Light(pGVar16,auStack_74,0);
  }
  this->mbr_0xd4 = (dword)pGVar16;
  pGVar16->mbr_0x48 = 1;
  dVar2 = this->mbr_0xd4;
  *(undefined4 *)(dVar2 + 0x34) = 0;
  *(undefined4 *)(dVar2 + 0x38) = 0x42c80000;
  *(undefined4 *)(dVar2 + 0x3c) = 0;
  dStack_360 = 0;
  *(undefined4 *)(dVar2 + 0x80) = 0;
  dStack_35c = 0x42c80000;
  dStack_358 = 0;
  *(undefined4 *)(dVar2 + 0x84) = 0x42c80000;
  *(undefined4 *)(dVar2 + 0x88) = 0;
  pcStack_36c = (cls_0x4c0190 *)FUN_004a7680(0xd1c);
  local_4._0_1_ = 0x3b;
  if (pcStack_36c == (cls_0x4c0190 *)0x0) {
    this_00 = (Base *)0x0;
  }
  else {
    this_00 = &GUI::Window::Window((Window *)pcStack_36c,0)->Base;
  }
  this->mbr_0xe4 = (dword)this_00;
  local_4._0_1_ = 8;
  (*this_00->vftptr_0x0->virt_meth_0x4b2790_16)(this_00,0x400,0x300);
  local_398 = 0xf;
  local_39c = 0;
  local_3b0._4_4_ = local_3b0._4_4_ & 0xffffff00;
  pcVar20 = "DefaultInterface.ini";
  do {
    pcVar15 = pcVar20;
    pcVar20 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_3b0,"DefaultInterface.ini",(uint)(pcVar15 + -0x65202c));
  local_4 = CONCAT31(local_4._1_3_,0x3c);
  (**(code **)(*(int *)this->mbr_0xe4 + 0xcc))(local_3b0);
  uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,8);
  if (0xf < local_39c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_3b0._0_4_);
  }
  (**(code **)(*(int *)this->mbr_0xe4 + 0x5c))(0xff000000);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x84))(0);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x54))(1);
  (**(code **)(*(int *)this->mbr_0xe4 + 0xe8))(1);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x44))(0,0);
  (**(code **)(*(int *)this->mbr_0xe4 + 100))(200);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x6c))(1);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x74))(1);
  (**(code **)(*(int *)this->mbr_0xe4 + 0x7c))(1);
  GameActionOperateContainer::meth_0x4959b0
            ((GameActionOperateContainer *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)this->mbr_0xe4);
  ExceptionList = pvStack_38;
  return this;
}


