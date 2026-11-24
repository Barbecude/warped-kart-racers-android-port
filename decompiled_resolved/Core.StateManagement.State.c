// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.StateManagement.State

// ============================================================
// RVA: 0x2b94168 | Core.StateManagement.State.add_OnPreEnterCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPreEnterCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_440;
  long *plStack_438;
  undefined8 *****pppppuStack_430;
  undefined *puStack_428;
  undefined8 uStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  undefined8 *****pppppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *****pppppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 *****pppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4dc & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4dc = 1;
  }
  plVar16 = (long *)(param_1 + 0x10);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__remove_OnPreEnterCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4dd & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4dd = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x10);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__add_OnPreUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4de & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4de = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPreUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4df & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4df = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPreLateUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e0 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__remove_OnPreLateUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1fa78;
  puStack_218 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1fa78;
  puStack_248 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1b478;
  puStack_2a8 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1b478;
  puStack_2d8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_330 = 0x3d1b478;
  puStack_308 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_360 = 0x3d1b478;
  puStack_338 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_358 = lVar11;
  plStack_350 = plVar16;
  uStack_348 = uVar10;
  pppppuStack_340 = &pppppuStack_310;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_390 = 0x3d1b478;
  puStack_368 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_388 = lVar11;
  plStack_380 = plVar16;
  uStack_378 = uVar6;
  pppppuStack_370 = &pppppuStack_340;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_3c0 = 0x3d1fa78;
  puStack_398 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_3b8 = lVar11;
  plStack_3b0 = plVar16;
  uStack_3a8 = uVar10;
  pppppuStack_3a0 = &pppppuStack_370;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_3f0 = 0x3d1fa78;
  puStack_3c8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_3e8 = lVar11;
  plStack_3e0 = plVar16;
  uStack_3d8 = uVar6;
  pppppuStack_3d0 = &pppppuStack_3a0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_420 = 0x3d1fa78;
  puStack_3f8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_418 = lVar11;
  plStack_410 = plVar16;
  uStack_408 = uVar10;
  pppppuStack_400 = &pppppuStack_3d0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_440;
  plStack_440 = plVar16;
  plStack_438 = auVar22._8_8_;
  pppppuStack_430 = &pppppuStack_400;
  puStack_428 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_420;
    plVar8 = plStack_438;
    ppppppuVar20 = (undefined8 ******)pppppuStack_430;
    puVar21 = puStack_428;
  }
  else {
    ppppppuVar20 = &pppppuStack_430;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_440;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94208 | Core.StateManagement.State.remove_OnPreEnterCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPreEnterCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_410;
  long *plStack_408;
  undefined8 *****pppppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *****pppppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 *****pppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4dd & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4dd = 1;
  }
  plVar16 = (long *)(param_1 + 0x10);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__add_OnPreUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4de & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4de = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPreUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4df & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4df = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPreLateUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e0 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__remove_OnPreLateUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1fa78;
  puStack_218 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1b478;
  puStack_2a8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1b478;
  puStack_2d8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_330 = 0x3d1b478;
  puStack_308 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_360 = 0x3d1b478;
  puStack_338 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_358 = lVar11;
  plStack_350 = plVar16;
  uStack_348 = uVar10;
  pppppuStack_340 = &pppppuStack_310;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_390 = 0x3d1fa78;
  puStack_368 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_388 = lVar11;
  plStack_380 = plVar16;
  uStack_378 = uVar6;
  pppppuStack_370 = &pppppuStack_340;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_3c0 = 0x3d1fa78;
  puStack_398 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_3b8 = lVar11;
  plStack_3b0 = plVar16;
  uStack_3a8 = uVar10;
  pppppuStack_3a0 = &pppppuStack_370;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_3f0 = 0x3d1fa78;
  puStack_3c8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_3e8 = lVar11;
  plStack_3e0 = plVar16;
  uStack_3d8 = uVar6;
  pppppuStack_3d0 = &pppppuStack_3a0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_410;
  plStack_410 = plVar16;
  plStack_408 = auVar22._8_8_;
  pppppuStack_400 = &pppppuStack_3d0;
  puStack_3f8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_3f0;
    plVar8 = plStack_408;
    ppppppuVar20 = (undefined8 ******)pppppuStack_400;
    puVar21 = puStack_3f8;
  }
  else {
    ppppppuVar20 = &pppppuStack_400;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_410;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b942a8 | Core.StateManagement.State.add_OnPreUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPreUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 *****pppppuStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 *****pppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4de & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4de = 1;
  }
  plVar16 = (long *)(param_1 + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPreUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4df & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4df = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPreLateUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e0 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPreLateUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1b478;
  puStack_2a8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1b478;
  puStack_2d8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_330 = 0x3d1b478;
  puStack_308 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_360 = 0x3d1fa78;
  puStack_338 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_358 = lVar11;
  plStack_350 = plVar16;
  uStack_348 = uVar10;
  pppppuStack_340 = &pppppuStack_310;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_390 = 0x3d1fa78;
  puStack_368 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_388 = lVar11;
  plStack_380 = plVar16;
  uStack_378 = uVar6;
  pppppuStack_370 = &pppppuStack_340;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_3c0 = 0x3d1fa78;
  puStack_398 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_3b8 = lVar11;
  plStack_3b0 = plVar16;
  uStack_3a8 = uVar10;
  pppppuStack_3a0 = &pppppuStack_370;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_3e0;
  plStack_3e0 = plVar16;
  plStack_3d8 = auVar22._8_8_;
  pppppuStack_3d0 = &pppppuStack_3a0;
  puStack_3c8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_3c0;
    plVar8 = plStack_3d8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_3d0;
    puVar21 = puStack_3c8;
  }
  else {
    ppppppuVar20 = &pppppuStack_3d0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_3e0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94348 | Core.StateManagement.State.remove_OnPreUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPreUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_3b0;
  long *plStack_3a8;
  undefined8 *****pppppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 *****pppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4df & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4df = 1;
  }
  plVar16 = (long *)(param_1 + 0x18);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPreLateUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e0 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPreLateUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1b478;
  puStack_2a8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1b478;
  puStack_2d8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_330 = 0x3d1fa78;
  puStack_308 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_360 = 0x3d1fa78;
  puStack_338 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_358 = lVar11;
  plStack_350 = plVar16;
  uStack_348 = uVar10;
  pppppuStack_340 = &pppppuStack_310;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_390 = 0x3d1fa78;
  puStack_368 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_388 = lVar11;
  plStack_380 = plVar16;
  uStack_378 = uVar6;
  pppppuStack_370 = &pppppuStack_340;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_3b0;
  plStack_3b0 = plVar16;
  plStack_3a8 = auVar22._8_8_;
  pppppuStack_3a0 = &pppppuStack_370;
  puStack_398 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_390;
    plVar8 = plStack_3a8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_3a0;
    puVar21 = puStack_398;
  }
  else {
    ppppppuVar20 = &pppppuStack_3a0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_3b0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b943e8 | Core.StateManagement.State.add_OnPreLateUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPreLateUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_380;
  long *plStack_378;
  undefined8 *****pppppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e0 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e0 = 1;
  }
  plVar16 = (long *)(param_1 + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPreLateUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1b478;
  puStack_2a8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1fa78;
  puStack_2d8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_330 = 0x3d1fa78;
  puStack_308 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_360 = 0x3d1fa78;
  puStack_338 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_358 = lVar11;
  plStack_350 = plVar16;
  uStack_348 = uVar10;
  pppppuStack_340 = &pppppuStack_310;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_380;
  plStack_380 = plVar16;
  plStack_378 = auVar22._8_8_;
  pppppuStack_370 = &pppppuStack_340;
  puStack_368 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_360;
    plVar8 = plStack_378;
    ppppppuVar20 = (undefined8 ******)pppppuStack_370;
    puVar21 = puStack_368;
  }
  else {
    ppppppuVar20 = &pppppuStack_370;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_380;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94488 | Core.StateManagement.State.remove_OnPreLateUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPreLateUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_350;
  long *plStack_348;
  undefined8 *****pppppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e1 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e1 = 1;
  }
  plVar16 = (long *)(param_1 + 0x20);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPreFixedUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1b478;
  puStack_278 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1fa78;
  puStack_2a8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_300 = 0x3d1fa78;
  puStack_2d8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_330 = 0x3d1fa78;
  puStack_308 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_328 = lVar11;
  plStack_320 = plVar16;
  uStack_318 = uVar6;
  pppppuStack_310 = &pppppuStack_2e0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_350;
  plStack_350 = plVar16;
  plStack_348 = auVar22._8_8_;
  pppppuStack_340 = &pppppuStack_310;
  puStack_338 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_330;
    plVar8 = plStack_348;
    ppppppuVar20 = (undefined8 ******)pppppuStack_340;
    puVar21 = puStack_338;
  }
  else {
    ppppppuVar20 = &pppppuStack_340;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_350;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94528 | Core.StateManagement.State.add_OnPreFixedUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPreFixedUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_320;
  long *plStack_318;
  undefined8 *****pppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e2 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e2 = 1;
  }
  plVar16 = (long *)(param_1 + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPreFixedUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1b478;
  puStack_248 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1fa78;
  puStack_278 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_2d0 = 0x3d1fa78;
  puStack_2a8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_300 = 0x3d1fa78;
  puStack_2d8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_2f8 = lVar11;
  plStack_2f0 = plVar16;
  uStack_2e8 = uVar10;
  pppppuStack_2e0 = &pppppuStack_2b0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_320;
  plStack_320 = plVar16;
  plStack_318 = auVar22._8_8_;
  pppppuStack_310 = &pppppuStack_2e0;
  puStack_308 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_300;
    plVar8 = plStack_318;
    ppppppuVar20 = (undefined8 ******)pppppuStack_310;
    puVar21 = puStack_308;
  }
  else {
    ppppppuVar20 = &pppppuStack_310;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_320;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b945c8 | Core.StateManagement.State.remove_OnPreFixedUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPreFixedUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e3 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e3 = 1;
  }
  plVar16 = (long *)(param_1 + 0x28);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPreExitCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1b478;
  puStack_218 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1fa78;
  puStack_248 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_2a0 = 0x3d1fa78;
  puStack_278 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_2d0 = 0x3d1fa78;
  puStack_2a8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_2c8 = lVar11;
  plStack_2c0 = plVar16;
  uStack_2b8 = uVar6;
  pppppuStack_2b0 = &pppppuStack_280;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_2f0;
  plStack_2f0 = plVar16;
  plStack_2e8 = auVar22._8_8_;
  pppppuStack_2e0 = &pppppuStack_2b0;
  puStack_2d8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_2d0;
    plVar8 = plStack_2e8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_2e0;
    puVar21 = puStack_2d8;
  }
  else {
    ppppppuVar20 = &pppppuStack_2e0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_2f0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94668 | Core.StateManagement.State.add_OnPreExitCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPreExitCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e4 = 1;
  }
  plVar16 = (long *)(param_1 + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__remove_OnPreExitCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1b478;
  puStack_1e8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1fa78;
  puStack_218 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_270 = 0x3d1fa78;
  puStack_248 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_2a0 = 0x3d1fa78;
  puStack_278 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_298 = lVar11;
  plStack_290 = plVar16;
  uStack_288 = uVar10;
  pppppuStack_280 = &pppppuStack_250;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_2c0;
  plStack_2c0 = plVar16;
  plStack_2b8 = auVar22._8_8_;
  pppppuStack_2b0 = &pppppuStack_280;
  puStack_2a8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_2a0;
    plVar8 = plStack_2b8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_2b0;
    puVar21 = puStack_2a8;
  }
  else {
    ppppppuVar20 = &pppppuStack_2b0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_2c0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94708 | Core.StateManagement.State.remove_OnPreExitCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPreExitCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_290;
  long *plStack_288;
  undefined8 *****pppppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e5 = 1;
  }
  plVar16 = (long *)(param_1 + 0x30);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__add_OnPostEnterCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1b478;
  puStack_1b8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_240 = 0x3d1fa78;
  puStack_218 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_270 = 0x3d1fa78;
  puStack_248 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_268 = lVar11;
  plStack_260 = plVar16;
  uStack_258 = uVar6;
  pppppuStack_250 = &pppppuStack_220;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_290;
  plStack_290 = plVar16;
  plStack_288 = auVar22._8_8_;
  pppppuStack_280 = &pppppuStack_250;
  puStack_278 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_270;
    plVar8 = plStack_288;
    ppppppuVar20 = (undefined8 ******)pppppuStack_280;
    puVar21 = puStack_278;
  }
  else {
    ppppppuVar20 = &pppppuStack_280;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_290;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b947a8 | Core.StateManagement.State.add_OnPostEnterCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPostEnterCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_260;
  long *plStack_258;
  undefined8 *****pppppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e6 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e6 = 1;
  }
  plVar16 = (long *)(param_1 + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__remove_OnPostEnterCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1b478;
  puStack_188 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_240 = 0x3d1fa78;
  puStack_218 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_238 = lVar11;
  plStack_230 = plVar16;
  uStack_228 = uVar10;
  pppppuStack_220 = &pppppuStack_1f0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_260;
  plStack_260 = plVar16;
  plStack_258 = auVar22._8_8_;
  pppppuStack_250 = &pppppuStack_220;
  puStack_248 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_240;
    plVar8 = plStack_258;
    ppppppuVar20 = (undefined8 ******)pppppuStack_250;
    puVar21 = puStack_248;
  }
  else {
    ppppppuVar20 = &pppppuStack_250;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_260;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94848 | Core.StateManagement.State.remove_OnPostEnterCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPostEnterCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_230;
  long *plStack_228;
  undefined8 *****pppppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4e7 = 1;
  }
  plVar16 = (long *)(param_1 + 0x38);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__add_OnPostUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1b478;
  puStack_158 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_210 = 0x3d1fa78;
  puStack_1e8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_208 = lVar11;
  plStack_200 = plVar16;
  uStack_1f8 = uVar6;
  pppppuStack_1f0 = &pppppuStack_1c0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_230;
  plStack_230 = plVar16;
  plStack_228 = auVar22._8_8_;
  pppppuStack_220 = &pppppuStack_1f0;
  puStack_218 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_210;
    plVar8 = plStack_228;
    ppppppuVar20 = (undefined8 ******)pppppuStack_220;
    puVar21 = puStack_218;
  }
  else {
    ppppppuVar20 = &pppppuStack_220;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_230;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b948e8 | Core.StateManagement.State.add_OnPostUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPostUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_200;
  long *plStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e8 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e8 = 1;
  }
  plVar16 = (long *)(param_1 + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPostUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1b478;
  puStack_128 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_1e0 = 0x3d1fa78;
  puStack_1b8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_1d8 = lVar11;
  plStack_1d0 = plVar16;
  uStack_1c8 = uVar10;
  pppppuStack_1c0 = &pppppuStack_190;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_200;
  plStack_200 = plVar16;
  plStack_1f8 = auVar22._8_8_;
  pppppuStack_1f0 = &pppppuStack_1c0;
  puStack_1e8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_1e0;
    plVar8 = plStack_1f8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_1f0;
    puVar21 = puStack_1e8;
  }
  else {
    ppppppuVar20 = &pppppuStack_1f0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_200;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94988 | Core.StateManagement.State.remove_OnPostUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPostUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4e9 & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4e9 = 1;
  }
  plVar16 = (long *)(param_1 + 0x40);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPostLateUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1b478;
  puStack_f8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_1b0 = 0x3d1fa78;
  puStack_188 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_1a8 = lVar11;
  plStack_1a0 = plVar16;
  uStack_198 = uVar6;
  pppppuStack_190 = &pppppuStack_160;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_1d0;
  plStack_1d0 = plVar16;
  plStack_1c8 = auVar22._8_8_;
  pppppuStack_1c0 = &pppppuStack_190;
  puStack_1b8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_1b0;
    plVar8 = plStack_1c8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_1c0;
    puVar21 = puStack_1b8;
  }
  else {
    ppppppuVar20 = &pppppuStack_1c0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_1d0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94a28 | Core.StateManagement.State.add_OnPostLateUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPostLateUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *****pppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4ea & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ea = 1;
  }
  plVar16 = (long *)(param_1 + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPostLateUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1b478;
  puStack_c8 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_180 = 0x3d1fa78;
  puStack_158 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_178 = lVar11;
  plStack_170 = plVar16;
  uStack_168 = uVar10;
  pppppuStack_160 = &pppppuStack_130;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_1a0;
  plStack_1a0 = plVar16;
  plStack_198 = auVar22._8_8_;
  pppppuStack_190 = &pppppuStack_160;
  puStack_188 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_180;
    plVar8 = plStack_198;
    ppppppuVar20 = (undefined8 ******)pppppuStack_190;
    puVar21 = puStack_188;
  }
  else {
    ppppppuVar20 = &pppppuStack_190;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_1a0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94ac8 | Core.StateManagement.State.remove_OnPostLateUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPostLateUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_170;
  long *plStack_168;
  undefined8 *****pppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4eb & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4eb = 1;
  }
  plVar16 = (long *)(param_1 + 0x48);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPostFixedUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1b478;
  puStack_98 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_150 = 0x3d1fa78;
  puStack_128 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_148 = lVar11;
  plStack_140 = plVar16;
  uStack_138 = uVar6;
  pppppuStack_130 = &pppppuStack_100;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_170;
  plStack_170 = plVar16;
  plStack_168 = auVar22._8_8_;
  pppppuStack_160 = &pppppuStack_130;
  puStack_158 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_150;
    plVar8 = plStack_168;
    ppppppuVar20 = (undefined8 ******)pppppuStack_160;
    puVar21 = puStack_158;
  }
  else {
    ppppppuVar20 = &pppppuStack_160;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_170;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94b68 | Core.StateManagement.State.add_OnPostFixedUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPostFixedUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_140;
  long *plStack_138;
  undefined8 *****pppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4ec & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ec = 1;
  }
  plVar16 = (long *)(param_1 + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__remove_OnPostFixedUpdateCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1b478;
  puStack_68 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_120 = 0x3d1fa78;
  puStack_f8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_118 = lVar11;
  plStack_110 = plVar16;
  uStack_108 = uVar10;
  pppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_140;
  plStack_140 = plVar16;
  plStack_138 = auVar22._8_8_;
  pppppuStack_130 = &pppppuStack_100;
  puStack_128 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_120;
    plVar8 = plStack_138;
    ppppppuVar20 = (undefined8 ******)pppppuStack_130;
    puVar21 = puStack_128;
  }
  else {
    ppppppuVar20 = &pppppuStack_130;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_140;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94c08 | Core.StateManagement.State.remove_OnPostFixedUpdateCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPostFixedUpdateCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_110;
  long *plStack_108;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4ed & 1) == 0) {
    func_0x00f78a20(0x3d1b478);
    bRam0000000003eba4ed = 1;
  }
  plVar16 = (long *)(param_1 + 0x50);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<IUpdateParams>_TypeInfo*/ lRam0000000003d1b478))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1b478;
  puStack_38 = &Core_StateManagement_State__add_OnPostExitCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  pppuStack_a0 = (undefined8 ***)&ppuStack_70;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_f0 = 0x3d1fa78;
  puStack_c8 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_e8 = lVar11;
  plStack_e0 = plVar16;
  uStack_d8 = uVar6;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_110;
  plStack_110 = plVar16;
  plStack_108 = auVar22._8_8_;
  pppppuStack_100 = &ppppuStack_d0;
  puStack_f8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_f0;
    plVar8 = plStack_108;
    ppppppuVar20 = (undefined8 ******)pppppuStack_100;
    puVar21 = puStack_f8;
  }
  else {
    ppppppuVar20 = &pppppuStack_100;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_110;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94ca8 | Core.StateManagement.State.add_OnPostExitCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_OnPostExitCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined1 *puVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  long *plStack_e0;
  long *plStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ee = 1;
  }
  plVar16 = (long *)(param_1 + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar6 = auVar22._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__remove_OnPostExitCallback;
  lStack_58 = lVar11;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x58);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uVar10 = auVar22._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_88 = lVar11;
  plStack_80 = plVar16;
  uStack_78 = uVar6;
  pppuStack_70 = (undefined8 ***)&puStack_40;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar10,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar22 = func_0x00f78e5c(plVar8);
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_b8 = lVar11;
  plStack_b0 = plVar16;
  uStack_a8 = uVar10;
  ppppuStack_a0 = &pppuStack_70;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar16 = (long *)(auVar22._0_8_ + 0x60);
  lVar11 = *plVar16;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar22._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar16,plVar8,lVar11);
    bVar3 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_e0;
  plStack_e0 = plVar16;
  plStack_d8 = auVar22._8_8_;
  pppppuStack_d0 = &ppppuStack_a0;
  puStack_c8 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_c0;
    plVar8 = plStack_d8;
    ppppppuVar20 = (undefined8 ******)pppppuStack_d0;
    puVar21 = puStack_c8;
  }
  else {
    ppppppuVar20 = &pppppuStack_d0;
    puVar21 = &UNK_02b94f48;
  }
  plVar16 = plStack_e0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar11;
  *(long **)((long)pplVar2 + -0x20) = plVar16;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar20;
  *(undefined **)((long)pplVar2 + -8) = puVar21;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    puVar19 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    puVar19 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar19 + lVar11 * 8);
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar16 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar16 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar16 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar12 + 0x138))(plVar16,*(undefined8 *)(lVar12 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar16,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar17 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar13 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
        pcVar17 = (code *)*puVar7;
      }
      (*pcVar17)(plVar16,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      (*pcVar17)(lVar12);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar17)(plVar16,lVar12);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94d48 | Core.StateManagement.State.remove_OnPostExitCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_OnPostExitCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  undefined8 unaff_x23;
  undefined1 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4ef & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4ef = 1;
  }
  plVar15 = (long *)(param_1 + 0x58);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar8);
  uVar6 = auVar21._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__add_NotifyStateComplete;
  lStack_58 = lVar10;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x60);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,uVar6,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar8);
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_88 = lVar10;
  plStack_80 = plVar15;
  uStack_78 = uVar6;
  ppppuStack_70 = &pppuStack_40;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x60);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar21._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_b0;
  plStack_b0 = plVar15;
  plStack_a8 = auVar21._8_8_;
  pppppuStack_a0 = &ppppuStack_70;
  puStack_98 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_90;
    plVar8 = plStack_a8;
    ppppppuVar19 = (undefined8 ******)pppppuStack_a0;
    puVar20 = puStack_98;
  }
  else {
    ppppppuVar19 = &pppppuStack_a0;
    puVar20 = &UNK_02b94f48;
  }
  plVar15 = plStack_b0;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar10;
  *(long **)((long)pplVar2 + -0x20) = plVar15;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar19;
  *(undefined **)((long)pplVar2 + -8) = puVar20;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    puVar18 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    puVar18 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = *(long *)(puVar18 + lVar10 * 8);
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar15 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    if (iVar4 == 0) {
      if ((((plVar15 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar11);
      iVar5 = func_0x00f78ec0(lVar11);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar11 + 0x48);
        if (iVar5 == 0) {
          lVar11 = *plVar15 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar11 + 0x138))(plVar15,*(undefined8 *)(lVar11 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,lVar11,(ulong)uVar1);
code_r0x02924e68:
        pcVar16 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar15);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar12 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
        pcVar16 = (code *)*puVar7;
      }
      (*pcVar16)(plVar15,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      (*pcVar16)(lVar11);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar16)(plVar15,lVar11);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94de8 | Core.StateManagement.State.add_NotifyStateComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__add_NotifyStateComplete(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  undefined8 unaff_x23;
  undefined1 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  long *plStack_80;
  long *plStack_78;
  undefined8 *****pppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f0 = 1;
  }
  plVar15 = (long *)(param_1 + 0x60);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar21 = func_0x00f78e5c(plVar8);
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_StateManagement_State__remove_NotifyStateComplete;
  lStack_58 = lVar10;
  plStack_50 = plVar15;
  uStack_48 = param_2;
  ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar15 = (long *)(auVar21._0_8_ + 0x60);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar21._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_80;
  plStack_80 = plVar15;
  plStack_78 = auVar21._8_8_;
  pppppuStack_70 = &ppppuStack_40;
  puStack_68 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&uStack_60;
    plVar8 = plStack_78;
    ppppppuVar19 = (undefined8 ******)pppppuStack_70;
    puVar20 = puStack_68;
  }
  else {
    ppppppuVar19 = &pppppuStack_70;
    puVar20 = &UNK_02b94f48;
  }
  plVar15 = plStack_80;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar10;
  *(long **)((long)pplVar2 + -0x20) = plVar15;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar19;
  *(undefined **)((long)pplVar2 + -8) = puVar20;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    puVar18 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    puVar18 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = *(long *)(puVar18 + lVar10 * 8);
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar15 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    if (iVar4 == 0) {
      if ((((plVar15 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar11);
      iVar5 = func_0x00f78ec0(lVar11);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar11 + 0x48);
        if (iVar5 == 0) {
          lVar11 = *plVar15 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar11 + 0x138))(plVar15,*(undefined8 *)(lVar11 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,lVar11,(ulong)uVar1);
code_r0x02924e68:
        pcVar16 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar15);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar12 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
        pcVar16 = (code *)*puVar7;
      }
      (*pcVar16)(plVar15,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      (*pcVar16)(lVar11);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar16)(plVar15,lVar11);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94e88 | Core.StateManagement.State.remove_NotifyStateComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__remove_NotifyStateComplete(long param_1,long *param_2)

{
  ushort uVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  undefined8 unaff_x23;
  undefined1 *puVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  long *plStack_50;
  long *plStack_48;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eba4f1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eba4f1 = 1;
  }
  plVar15 = (long *)(param_1 + 0x60);
  lVar10 = *plVar15;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar9 = func_0x00ff0f44(plVar15,plVar8,lVar10);
    bVar3 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar3) {
      return;
    }
  }
  plVar8 = (long *)func_0x00f78e5c(plVar8);
  pplVar2 = &plStack_50;
  plStack_50 = plVar15;
  plStack_48 = param_2;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  puStack_38 = &Core_StateManagement_State__Enter;
  lVar9 = plVar8[2];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar9 = plVar8[7];
    if (lVar9 == 0) {
      return;
    }
    pplVar2 = (long **)&stack0xffffffffffffffd0;
    plVar8 = plStack_48;
    ppppppuVar19 = (undefined8 ******)pppppuStack_40;
    puVar20 = puStack_38;
  }
  else {
    ppppppuVar19 = &pppppuStack_40;
    puVar20 = &UNK_02b94f48;
  }
  plVar15 = plStack_50;
  uVar6 = 0;
  *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)pplVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)pplVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pplVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)pplVar2 + -0x30) = 0x3d1fa78;
  *(long *)((long)pplVar2 + -0x28) = lVar10;
  *(long **)((long)pplVar2 + -0x20) = plVar15;
  *(long **)((long)pplVar2 + -0x18) = plVar8;
  *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar19;
  *(undefined **)((long)pplVar2 + -8) = puVar20;
  *(long *)((long)pplVar2 + -0x58) = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    puVar18 = (undefined1 *)((long)pplVar2 + -0x58);
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    puVar18 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = *(long *)(puVar18 + lVar10 * 8);
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar15 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar6);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    if (iVar4 == 0) {
      if ((((plVar15 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar4 = func_0x00f78a44(lVar11);
      iVar5 = func_0x00f78ec0(lVar11);
      if (iVar4 == 0) {
        uVar1 = *(ushort *)(lVar11 + 0x48);
        if (iVar5 == 0) {
          lVar11 = *plVar15 + (ulong)uVar1 * 0x10;
          (**(code **)(lVar11 + 0x138))(plVar15,*(undefined8 *)(lVar11 + 0x140));
          uVar6 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,lVar11,(ulong)uVar1);
code_r0x02924e68:
        pcVar16 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar5 == 0) {
          uVar6 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar15;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar15);
code_r0x02924e40:
          uVar6 = *(undefined8 *)(lVar12 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
        pcVar16 = (code *)*puVar7;
      }
      (*pcVar16)(plVar15,puVar7);
      uVar6 = extraout_x1_02;
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      (*pcVar16)(lVar11);
      uVar6 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar16)(plVar15,lVar11);
      uVar6 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94f28 | Core.StateManagement.State.Enter
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94f44: Changing call to branch */

void Core_StateManagement_State__Enter(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  code *pcVar13;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined1 *puVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar15 = &stack0xfffffffffffffff0;
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    lVar7 = param_1[7];
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    unaff_x30 = 0x2b94f48;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar15;
  }
  uVar5 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar7;
  lVar8 = *(long *)(lVar7 + 0x68);
  if (lVar8 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    puVar15 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar5);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar5 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar5 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
        pcVar13 = (code *)*puVar6;
      }
      (*pcVar13)(plVar1,puVar6);
      uVar5 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
      uVar5 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar13)(plVar1,lVar9);
      uVar5 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b94f7c | Core.StateManagement.State.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x02b94fcc: Changing call to branch */

void Core_StateManagement_State__Update(long *param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar16 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a0e8);
    bRam0000000003eba4f2 = 1;
  }
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0x188))(param_1,param_2,*(undefined8 *)(*param_1 + 400));
    lVar8 = param_1[8];
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    unaff_x30 = 0x2b94fd0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = 0x3d2a0e8;
    unaff_x29 = puVar16;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    puVar16 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = *(long *)(puVar16 + lVar9 * 8);
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e481d4:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b95014 | Core.StateManagement.State.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x02b95064: Changing call to branch */

void Core_StateManagement_State__LateUpdate(long *param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar16 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4f3 & 1) == 0) {
    func_0x00f78a20(0x3d2a0e8);
    bRam0000000003eba4f3 = 1;
  }
  lVar8 = param_1[4];
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0x198))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1a0));
    lVar8 = param_1[9];
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    unaff_x30 = 0x2b95068;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = 0x3d2a0e8;
    unaff_x29 = puVar16;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    puVar16 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = *(long *)(puVar16 + lVar9 * 8);
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e481d4:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b950ac | Core.StateManagement.State.FixedUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x02b950fc: Changing call to branch */

void Core_StateManagement_State__FixedUpdate(long *param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar16 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eba4f4 & 1) == 0) {
    func_0x00f78a20(0x3d2a0e8);
    bRam0000000003eba4f4 = 1;
  }
  lVar8 = param_1[5];
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0x1a8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1b0));
    lVar8 = param_1[10];
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    unaff_x30 = 0x2b95100;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = 0x3d2a0e8;
    unaff_x29 = puVar16;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    puVar16 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = *(long *)(puVar16 + lVar9 * 8);
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
            pcVar14 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e481d4:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b95144 | Core.StateManagement.State.Exit
// ============================================================

/* WARNING: Possible PIC construction at 0x02b95160: Changing call to branch */

void Core_StateManagement_State__Exit(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  code *pcVar13;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined1 *puVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar15 = &stack0xfffffffffffffff0;
  lVar7 = param_1[6];
  if (lVar7 == 0) {
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    lVar7 = param_1[0xb];
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    unaff_x30 = 0x2b95164;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar15;
  }
  uVar5 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar7;
  lVar8 = *(long *)(lVar7 + 0x68);
  if (lVar8 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    puVar15 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar5);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar5 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar5 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar9);
        pcVar13 = (code *)*puVar6;
      }
      (*pcVar13)(plVar1,puVar6);
      uVar5 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
      uVar5 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar13)(plVar1,lVar9);
      uVar5 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b95198 | Core.StateManagement.State.DeInit
// ============================================================

void Core_StateManagement_State__DeInit(long *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x02b951b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  return;
}



// ============================================================
// RVA: 0x2b951b4 | Core.StateManagement.State.ResetData
// ============================================================

void Core_StateManagement_State__ResetData(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b951c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x2b951cc | Core.StateManagement.State.SetTransitionData
// ============================================================

void Core_StateManagement_State__SetTransitionData(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



// ============================================================
// RVA: 0x2b951d4 | Core.StateManagement.State.OnEnter
// ============================================================

void Core_StateManagement_State__OnEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951d8 | Core.StateManagement.State.OnUpdate
// ============================================================

void Core_StateManagement_State__OnUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951dc | Core.StateManagement.State.OnLateUpdate
// ============================================================

void Core_StateManagement_State__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951e0 | Core.StateManagement.State.OnFixedUpdate
// ============================================================

void Core_StateManagement_State__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951e4 | Core.StateManagement.State.OnExit
// ============================================================

void Core_StateManagement_State__OnExit(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951e8 | Core.StateManagement.State.OnDeInit
// ============================================================

void Core_StateManagement_State__OnDeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x2b951ec | Core.StateManagement.State.InvokeNotifyStateComplete
// ============================================================

void Core_StateManagement_State__InvokeNotifyStateComplete(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  uVar7 = 0;
  lStack_58 = lVar6;
  lVar8 = *(long *)(lVar6 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar7 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar5 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
        pcVar13 = (code *)*puVar5;
      }
      (*pcVar13)(plVar1,puVar5);
      uVar7 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
      uVar7 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar13)(plVar1,lVar9);
      uVar7 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x2b95200 | Core.StateManagement.State..ctor
// ============================================================

void Core_StateManagement_State___ctor(void)

{
  return;
}



