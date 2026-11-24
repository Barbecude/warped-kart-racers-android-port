// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextSettingsState

// ============================================================
// RVA: 0x15895c0 | Atlas.Contexts.FrontEndContextSettingsState.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01589cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01589cd4) */
/* WARNING: Removing unreachable block (ram,0x01589cf8) */
/* WARNING: Removing unreachable block (ram,0x01589d3c) */
/* WARNING: Removing unreachable block (ram,0x01589d70) */
/* WARNING: Removing unreachable block (ram,0x01589da0) */
/* WARNING: Removing unreachable block (ram,0x01589dac) */
/* WARNING: Removing unreachable block (ram,0x01589dd0) */
/* WARNING: Removing unreachable block (ram,0x01589e04) */
/* WARNING: Removing unreachable block (ram,0x01589e34) */
/* WARNING: Removing unreachable block (ram,0x01589e68) */
/* WARNING: Removing unreachable block (ram,0x014e5478) */
/* WARNING: Removing unreachable block (ram,0x014e549c) */
/* WARNING: Removing unreachable block (ram,0x014e54b0) */
/* WARNING: Removing unreachable block (ram,0x014e54bc) */
/* WARNING: Removing unreachable block (ram,0x014e54d4) */
/* WARNING: Removing unreachable block (ram,0x014e5510) */
/* WARNING: Removing unreachable block (ram,0x014e5548) */
/* WARNING: Removing unreachable block (ram,0x014e55b0) */
/* WARNING: Removing unreachable block (ram,0x014e55b4) */
/* WARNING: Removing unreachable block (ram,0x014e567c) */
/* WARNING: Removing unreachable block (ram,0x014e56a8) */
/* WARNING: Removing unreachable block (ram,0x014e5684) */
/* WARNING: Removing unreachable block (ram,0x014e54e4) */
/* WARNING: Removing unreachable block (ram,0x014e5500) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextSettingsState__Init(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  ulong *puVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar28;
  undefined8 unaff_x24;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar31;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 ****ppppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong *puStack_260;
  undefined8 uStack_258;
  undefined8 ****ppppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 ****ppppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar26 = 0x3eb5000;
  if ((bRam0000000003eb5141 & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d55080);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550a0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d550e8);
    func_0x00f78a20(0x3d55128);
    func_0x00f78a20(0x3d55140);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d55190);
    func_0x00f78a20(0x3d55198);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d41660);
    func_0x00f78a20(0x3d1eb68);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb5141 = 1;
  }
  if (param_2 != 0) {
    unaff_x27 = 0x3d55000;
    unaff_x28 = 0x3d55000;
    uVar26 = 0x3d55000;
    unaff_x22 = 0x3d55000;
    unaff_x23 = 0x3d55000;
    unaff_x24 = 0x3d55000;
    unaff_x26 = 0x3d55000;
    unaff_x25 = (undefined8 *)0x3d55000;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55188);
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55140);
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550e8);
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0xa8) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550c8);
    *(undefined8 *)(param_1 + 0xb0) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550a0);
    *(undefined8 *)(param_1 + 0xb8) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55198);
    *(undefined8 *)(param_1 + 0xc0) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 200) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55128);
    *(undefined8 *)(param_1 + 0xd0) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55190);
    *(undefined8 *)(param_1 + 0xd8) = uVar9;
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55080);
    *(undefined8 *)(param_1 + 0xe8) = uVar9;
    if ((*(long *)(param_1 + 0xb0) != 0) &&
       (lVar10 = /*Core.Contexts.ContextManager$$GetContext<object>*/ func_0x0183a04c(*(long *)(param_1 + 0xb0),/*STR('FrontEndContext')*/ uRam0000000003d6d050,uRam0000000003d53980
                                ), lVar10 != 0)) {
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar10 + 0x118);
      uVar26 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<bool>_TypeInfo*/ uRam0000000003d1eb68);
      /*UnityEngine.Events.UnityEvent<bool>$$.ctor*/ func_0x01b827c0(uVar26,uRam0000000003d41660);
      *(undefined8 *)(param_1 + 0xf8) = uVar26;
      uVar26 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<bool>_TypeInfo*/ uRam0000000003d1eb68);
      uVar11 = /*UnityEngine.Events.UnityEvent<bool>$$.ctor*/ func_0x01b827c0(uVar26,uRam0000000003d41660);
      *(undefined8 *)(param_1 + 0x100) = uVar26;
      return uVar11;
    }
  }
  auVar38 = func_0x00f78af4();
  uVar9 = auVar38._8_8_;
  puStack_68 = &Atlas_Contexts_FrontEndContextSettingsState__add_TransitionFromState;
  uStack_90 = unaff_x22;
  uStack_88 = uVar26;
  lStack_80 = param_2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb513f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513f = 1;
  }
  puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar11 = *puVar24;
  while ((plVar12 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar9,0), plVar12 == (long *)0x0 ||
         (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  auVar38 = func_0x00f78e5c(plVar12);
  lVar27 = auVar38._8_8_;
  lVar10 = auVar38._0_8_;
  uStack_c0 = 0x3d1b6e0;
  pcStack_98 = Atlas_Contexts_FrontEndContextSeasonsState__Init;
  uStack_b8 = uVar11;
  puStack_b0 = puVar24;
  uStack_a8 = uVar9;
  ppuStack_a0 = &puStack_70;
  if ((bRam0000000003eb513b & 1) == 0) {
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb513b = 1;
  }
  if (lVar27 != 0) {
    uVar26 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar27,uRam0000000003d550b8);
    *(undefined8 *)(lVar10 + 0x80) = uVar26;
    uVar11 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar27,uRam0000000003d551b0);
    *(ulong *)(lVar10 + 0x88) = uVar11;
    return uVar11;
  }
  auVar39 = func_0x00f78af4();
  uVar26 = auVar39._8_8_;
  uStack_f0 = 0x3d1b6e0;
  uStack_e8 = 0x3eb5000;
  pcStack_c8 = Atlas_Contexts_FrontEndContextSeasonsState__add_TransitionFromState;
  pppuStack_d0 = &ppuStack_a0;
  if ((bRam0000000003eb5139 & 1) == 0) {
    lStack_e0 = lVar27;
    lStack_d8 = lVar10;
    func_0x00f78a20(0x3d1b6e0);
    auVar38._8_8_ = lStack_e0;
    auVar38._0_8_ = lStack_d8;
    bRam0000000003eb5139 = 1;
  }
  puVar24 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar11 = *puVar24;
  while( true ) {
    lStack_e0 = auVar38._8_8_;
    lStack_d8 = auVar38._0_8_;
    plVar12 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar26,0);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    auVar38._8_8_ = lStack_e0;
    auVar38._0_8_ = lStack_d8;
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  lVar10 = func_0x00f78e5c(plVar12);
  puVar3 = &uStack_150;
  uStack_120 = 0x3d1b6e0;
  puStack_f8 = &Atlas_FrontEnd_FrontEndContext__DeInitStates;
  pppppuVar32 = (undefined8 *****)&ppppuStack_100;
  uVar9 = 0x3d1b6e0;
  uVar29 = 0x3d1b6e0;
  uVar30 = 0x3d56b80;
  uVar28 = 0x3d2a5a8;
  uStack_150 = unaff_x28;
  uStack_148 = unaff_x27;
  uStack_140 = unaff_x26;
  puStack_138 = unaff_x25;
  uStack_130 = unaff_x24;
  uStack_128 = unaff_x23;
  uStack_118 = uVar11;
  puStack_110 = puVar24;
  uStack_108 = uVar26;
  ppppuStack_100 = &pppuStack_d0;
  if ((bRam0000000003eb50ec & 1) == 0) {
    func_0x00f78a20(0x3d2a138);
    func_0x00f78a20(0x3d2a038);
    func_0x00f78a20(0x3d1b4a0);
    func_0x00f78a20(0x3d1b420);
    func_0x00f78a20(0x3d2a5a8);
    func_0x00f78a20(0x3d1b6e0);
    func_0x00f78a20(0x3d56b68);
    func_0x00f78a20(0x3d56b78);
    func_0x00f78a20(0x3d56b80);
    bRam0000000003eb50ec = 1;
  }
  lVar25 = *(long *)(lVar10 + 0xb0);
  uVar11 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
  lVar27 = lRam0000000003d2a5a8;
  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar11,lVar10,uRam0000000003d56b80);
  if (lVar25 == 0) {
code_r0x01589e90:
    auVar38 = func_0x00f78af4();
    uVar26 = auVar38._8_8_;
    uStack_180 = 0x3d56b80;
    pcStack_158 = Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState;
    uStack_178 = uVar11;
    uStack_170 = 0;
    lStack_168 = lVar10;
    ppppuStack_160 = pppppuVar32;
    if ((bRam0000000003eb5113 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5113 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar26,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    uVar30 = auVar38._8_8_;
    uStack_1b0 = 0x3d1b6e0;
    pcStack_188 = Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout;
    uStack_1a8 = uVar11;
    puStack_1a0 = puVar24;
    uStack_198 = uVar26;
    ppppuStack_190 = &ppppuStack_160;
    if ((bRam0000000003eb5115 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb5115 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar30,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    uVar26 = auVar38._8_8_;
    uStack_1e0 = 0x3d1b4a0;
    pcStack_1b8 = Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState;
    uStack_1d8 = uVar11;
    puStack_1d0 = puVar24;
    uStack_1c8 = uVar30;
    ppppuStack_1c0 = &ppppuStack_190;
    if ((bRam0000000003eb5107 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5107 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar26,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    uVar30 = auVar38._8_8_;
    uStack_210 = 0x3d1b6e0;
    pcStack_1e8 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
    uStack_208 = uVar11;
    puStack_200 = puVar24;
    uStack_1f8 = uVar26;
    ppppuStack_1f0 = &ppppuStack_1c0;
    if ((bRam0000000003eb50f7 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb50f7 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar30,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    uVar26 = auVar38._8_8_;
    uStack_240 = 0x3d1b6e0;
    pcStack_218 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
    uStack_238 = uVar11;
    puStack_230 = puVar24;
    uStack_228 = uVar30;
    ppppuStack_220 = &ppppuStack_1f0;
    if ((bRam0000000003eb50f5 & 1) == 0) {
      func_0x00f78a20(0x3d1b420);
      bRam0000000003eb50f5 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar26,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    uVar30 = auVar38._8_8_;
    uStack_270 = 0x3d1b420;
    pcStack_248 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
    uStack_268 = uVar11;
    puStack_260 = puVar24;
    uStack_258 = uVar26;
    ppppuStack_250 = &ppppuStack_220;
    if ((bRam0000000003eb50f9 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb50f9 = 1;
    }
    puVar24 = (ulong *)(auVar38._0_8_ + 0x88);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar30,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    auVar38 = func_0x00f78e5c(plVar12);
    lVar10 = auVar38._8_8_;
    puVar3 = &uStack_2a0;
    uStack_2a0 = 0x3d1b4a0;
    pcStack_278 = Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
    pppppuVar32 = &ppppuStack_280;
    uStack_298 = uVar11;
    puStack_290 = puVar24;
    uStack_288 = uVar30;
    ppppuStack_280 = &ppppuStack_250;
    if ((bRam0000000003eb5130 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5130 = 1;
    }
    uVar30 = 0x3d1b6e0;
    puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar11 = *puVar24;
    while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,lVar10,0), plVar12 == (long *)0x0 ||
           (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
      bVar6 = uVar11 == uVar13;
      uVar11 = uVar13;
      if (bVar6) {
        return uVar13;
      }
    }
    puVar34 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
    auVar39 = func_0x00f78e5c(plVar12);
  }
  else {
    unaff_x27 = 0x3d1b000;
    uVar26 = 0x3d56b78;
    uVar31 = 0x3d56b78;
    unaff_x25 = (undefined8 *)0x3d2a000;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 0xb0);
    uVar11 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar11,lVar10,uRam0000000003d56b78);
    unaff_x26 = uVar26;
    if (lVar25 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 0xb8);
    uVar11 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar11,lVar10,uRam0000000003d56b80);
    if (lVar25 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 0xc0);
    uVar11 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar11,lVar10,uRam0000000003d56b80);
    unaff_x26 = uVar31;
    if (lVar25 == 0) goto code_r0x01589e90;
    unaff_x28 = 0x3d1b000;
    unaff_x27 = 0x3d56000;
    puVar17 = (undefined8 *)0x3d2a038;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 0xc0);
    uVar11 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
    lVar27 = lRam0000000003d2a038;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,lVar10,uRam0000000003d56b68);
    unaff_x25 = puVar17;
    if (lVar25 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 0xc0);
    uVar11 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar11,lVar10,uRam0000000003d56b78);
    if (lVar25 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout(lVar25,uVar11);
    lVar25 = *(long *)(lVar10 + 200);
    uVar11 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar11,lVar10,uRam0000000003d56b80);
    unaff_x25 = (undefined8 *)0x3d2a038;
    if (lVar25 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent(lVar25,uVar11);
    puVar24 = *(ulong **)(lVar10 + 0xd0);
    uVar11 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    auVar39._8_8_ = uVar11;
    auVar39._0_8_ = puVar24;
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar11,lVar10,uRam0000000003d56b80);
    if (puVar24 == (ulong *)0x0) goto code_r0x01589e90;
    puVar34 = &UNK_01589cd4;
    unaff_x25 = puVar17;
    unaff_x26 = uVar26;
  }
  *(undefined8 *)((long)puVar3 + -0x30) = uVar30;
  *(ulong *)((long)puVar3 + -0x28) = uVar11;
  *(ulong **)((long)puVar3 + -0x20) = puVar24;
  *(long *)((long)puVar3 + -0x18) = lVar10;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar32;
  *(undefined **)((long)puVar3 + -8) = puVar34;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
  }
  puVar24 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar11 = *puVar24;
  while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar39._8_8_,0), plVar12 == (long *)0x0 ||
         (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  auVar38 = func_0x00f78e5c(plVar12);
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x58) = uVar11;
  *(ulong **)((long)puVar3 + -0x50) = puVar24;
  *(long *)((long)puVar3 + -0x48) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(code **)((long)puVar3 + -0x38) =
       Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
  }
  puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar11 = *puVar24;
  while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar38._8_8_,0), plVar12 == (long *)0x0 ||
         (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  auVar39 = func_0x00f78e5c(plVar12);
  *(undefined8 *)((long)puVar3 + -0x90) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x88) = uVar11;
  *(ulong **)((long)puVar3 + -0x80) = puVar24;
  *(long *)((long)puVar3 + -0x78) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0x70) = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined **)((long)puVar3 + -0x68) =
       &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar24 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar11 = *puVar24;
  while ((plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar39._8_8_,0), plVar12 == (long *)0x0 ||
         (*plVar12 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  auVar38 = func_0x00f78e5c(plVar12);
  *(undefined8 *)((long)puVar3 + -0xc0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xb8) = uVar11;
  *(ulong **)((long)puVar3 + -0xb0) = puVar24;
  *(long *)((long)puVar3 + -0xa8) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0xa0) = (undefined1 *)((long)puVar3 + -0x70);
  *(code **)((long)puVar3 + -0x98) =
       Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  lVar10 = 0x3d1b6e0;
  puVar24 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar11 = *puVar24;
  while( true ) {
    iVar20 = 0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar38._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar13 = func_0x00ff0f44(puVar24,plVar12,uVar11);
    bVar6 = uVar11 == uVar13;
    uVar11 = uVar13;
    if (bVar6) {
      return uVar13;
    }
  }
  auVar39 = func_0x00f78e5c(plVar12);
  lVar25 = auVar39._8_8_;
  puVar4 = (undefined1 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xe8) = uVar11;
  *(ulong **)((long)puVar3 + -0xe0) = puVar24;
  *(long *)((long)puVar3 + -0xd8) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0xa0);
  *(undefined **)((long)puVar3 + -200) = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  puVar33 = (undefined1 *)((long)puVar3 + -0xd0);
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  lVar22 = 0x3eb5000;
  if (lVar25 == 0) {
code_r0x0158a62c:
    puVar34 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar40 = func_0x00f78af4();
    lVar14 = lVar27;
    auVar1 = auVar39;
  }
  else {
    iVar7 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar25);
    if (iVar7 != 0) {
      lVar14 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar20 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(lVar14,lVar25)
      ;
      lVar25 = lRam0000000003d5d988;
      lVar15 = *(long *)(auVar39._0_8_ + 0xa8);
      lVar22 = lVar14;
      if (lVar15 != 0) {
        *(undefined8 *)((long)puVar3 + -0x100) = 0x3d1b6e0;
        *(undefined8 *)((long)puVar3 + -0xf8) = 0x3d2a5a8;
        *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0xf0);
        *(undefined8 *)((long)puVar3 + -0xe8) = *(undefined8 *)((long)puVar3 + -0xe8);
        *(undefined8 *)((long)puVar3 + -0xe0) = *(undefined8 *)((long)puVar3 + -0xe0);
        *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)((long)puVar3 + -0xd8);
        *(undefined8 *)((long)puVar3 + -0xd0) = *(undefined8 *)((long)puVar3 + -0xd0);
        *(undefined8 *)((long)puVar3 + -200) = *(undefined8 *)((long)puVar3 + -200);
        lVar10 = lVar14;
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar26 = **(undefined8 **)(lVar25 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
        if (lVar15 == 0) {
          auVar38 = func_0x00f78af4();
          plVar12 = auVar38._8_8_;
          lVar27 = auVar38._0_8_;
          *(undefined8 *)((long)puVar3 + -0x140) = 0x3eb6000;
          *(undefined8 *)((long)puVar3 + -0x138) = 0x3d25458;
          *(undefined8 *)((long)puVar3 + -0x130) = uVar26;
          *(undefined8 *)((long)puVar3 + -0x128) = 0;
          *(undefined8 *)((long)puVar3 + -0x120) = 1;
          *(long *)((long)puVar3 + -0x118) = lVar14;
          *(undefined1 **)((long)puVar3 + -0x110) = (undefined1 *)((long)puVar3 + -0xd0);
          *(undefined **)((long)puVar3 + -0x108) = &System_String__Join_object_;
          if ((bRam0000000003eb668c & 1) == 0) {
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb668c = 1;
          }
          if (plVar12 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar26 = func_0x00f78aec();
            uVar9 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar26,uVar9,0);
            uVar9 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar26,uVar9);
          }
          else {
            if (lVar27 == 0) {
              lVar27 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar25 = **(long **)(lVar10 + 0x30);
            if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar25);
            }
            lVar22 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar11 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == lVar25) {
                  puVar17 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar23 = piVar23 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar25,0);
code_r0x018e1828:
            plVar12 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
            if (plVar12 != (long *)0x0) {
              lVar25 = *plVar12;
              uVar11 = (ulong)*(ushort *)(lVar25 + 0x12a);
              if (uVar11 != 0) {
                piVar23 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar17 = (undefined8 *)(lVar25 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar23 = piVar23 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar11 = (*(code *)*puVar17)(plVar12,puVar17[1]);
              if ((uVar11 & 1) == 0) {
                uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar12 != (long *)0x0) {
                  lVar10 = *plVar12;
                  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar13 != 0) {
                    piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar17 = (undefined8 *)(lVar10 + (long)*piVar23 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar23 = piVar23 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar17)(plVar12,puVar17[1]);
                }
                return uVar11;
              }
              lVar25 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar22 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              lVar14 = *plVar12;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar11 != 0) {
                piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar22) {
                    puVar17 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar23 = piVar23 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,0);
code_r0x018e1934:
              lVar22 = (*(code *)*puVar17)(plVar12,puVar17[1]);
              if (lVar22 != 0) {
                lVar22 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
                if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar22);
                }
                lVar14 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar11 != 0) {
                  piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar22) {
                      puVar17 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar23 = piVar23 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,0);
code_r0x018e19a8:
                plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
                if (plVar18 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar22 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
                if (lVar22 != 0) {
                  if (lVar25 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar25,lVar22,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar22 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar11 != 0) {
                  piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar17 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar23 = piVar23 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar11 = (*(code *)*puVar17)(plVar12,puVar17[1]);
                if ((uVar11 & 1) == 0) {
                  uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar25,0);
                  goto joined_r0x018e1920;
                }
                if (lVar25 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar25,lVar27,0);
                lVar22 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
                if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar22);
                }
                lVar14 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar11 != 0) {
                  piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar22) {
                      puVar17 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar23 = piVar23 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,0);
code_r0x018e1ab0:
                lVar22 = (*(code *)*puVar17)(plVar12,puVar17[1]);
              } while (lVar22 == 0);
              lVar22 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              lVar14 = *plVar12;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar11 != 0) {
                piVar23 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar22) {
                    puVar17 = (undefined8 *)(lVar14 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar23 = piVar23 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,0);
code_r0x018e1b24:
              plVar18 = (long *)(*(code *)*puVar17)(plVar12,puVar17[1]);
              if (plVar18 != (long *)0x0) {
                lVar22 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
                if (lVar22 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar25,lVar22,0);
                }
                goto code_r0x018e19dc;
              }
              func_0x00f78af4();
              goto code_r0x018e1c64;
            }
          }
          func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
          (*pcVar2)();
        }
        iVar20 = 1;
        uVar26 = *(undefined8 *)((long)puVar3 + -0xd0);
        uVar28 = *(undefined8 *)((long)puVar3 + -200);
        auVar40._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
        auVar40._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
        lVar10 = *(long *)((long)puVar3 + -0xf0);
        lVar27 = *(long *)((long)puVar3 + -0xe8);
        puVar5 = (undefined1 *)((long)puVar3 + -0xc0);
        uVar30 = *(undefined8 *)((long)puVar3 + -0x100);
        uVar31 = *(undefined8 *)((long)puVar3 + -0xf8);
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar33 = *(undefined1 **)((long)puVar3 + -0xd0);
    puVar34 = *(undefined **)((long)puVar3 + -200);
    auVar1._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
    auVar1._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
    puVar4 = (undefined1 *)((long)puVar3 + -0xc0);
    lVar10 = *(long *)((long)puVar3 + -0xf0);
    lVar22 = *(long *)((long)puVar3 + -0xe8);
    lVar14 = lVar27;
    auVar40 = auVar39;
  }
  lVar19 = auVar40._8_8_;
  lVar25 = auVar40._0_8_;
  puVar5 = puVar4 + -0xf0;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = 0x3d1b6e0;
  *(undefined8 *)(puVar4 + -0x38) = 0x3d2a5a8;
  *(long *)(puVar4 + -0x30) = lVar10;
  *(long *)(puVar4 + -0x28) = lVar22;
  *(long *)(puVar4 + -0x20) = auVar1._8_8_;
  *(long *)(puVar4 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar33;
  *(undefined **)(puVar4 + -8) = puVar34;
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  *(undefined8 *)(puVar4 + -0x68) = 0;
  lVar27 = 0x3eb5000;
  uVar31 = 0x3d2a5a8;
  uVar30 = uVar9;
  if ((*(long *)(lVar25 + 0x38) != 0) && (lVar19 != 0)) {
    uVar26 = 0x3d21270;
    lVar27 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
    lVar10 = *(long *)(lVar19 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar10,0);
    uVar31 = uVar28;
    uVar30 = uVar29;
    unaff_x26 = 0x3d21270;
    if (lVar27 != 0) {
      uVar28 = uRam0000000003d57288;
      lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar27,uVar16);
      iVar20 = (int)uVar28;
      if (*(long *)(lVar25 + 0x38) != 0) {
        lVar10 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
        uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar19 + 0x20),0);
        lVar27 = lVar22;
        unaff_x26 = uVar26;
        if (lVar10 != 0) {
          uVar26 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar28,uRam0000000003d572d8);
          iVar20 = 0;
          lVar15 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar22,uVar26);
          if (lVar15 != 0) {
            uVar26 = 0x3d23990;
            uVar28 = *(undefined8 *)(lVar19 + 0x38);
            uVar30 = *(undefined8 *)(lVar19 + 0x30);
            uVar16 = *(undefined8 *)(lVar19 + 0x48);
            uVar31 = *(undefined8 *)(lVar19 + 0x40);
            uVar36 = *(undefined8 *)(lVar19 + 0x58);
            uVar35 = *(undefined8 *)(lVar19 + 0x50);
            uVar37 = *(undefined8 *)(lVar19 + 0x60);
            *(undefined8 *)(lVar15 + 0xb0) = *(undefined8 *)(lVar19 + 0x68);
            *(undefined8 *)(lVar15 + 0xa8) = uVar37;
            *(undefined8 *)(lVar15 + 0xa0) = uVar36;
            *(undefined8 *)(lVar15 + 0x98) = uVar35;
            *(undefined8 *)(lVar15 + 0x90) = uVar16;
            *(undefined8 *)(lVar15 + 0x88) = uVar31;
            *(undefined8 *)(lVar15 + 0x80) = uVar28;
            *(undefined8 *)(lVar15 + 0x78) = uVar30;
            *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            uVar8 = /*Atlas.FrontEnd.EventInfo$$get_NumberOfAI*/ func_0x01583850(lVar19);
            *(undefined4 *)(lVar15 + 0x70) = uVar8;
            uVar31 = *(undefined8 *)(lVar19 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(lVar15 + 0x78);
            iVar20 = 0;
            iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
            uVar30 = uVar9;
            lVar10 = lVar15;
            if (iVar7 == 0) goto code_r0x0158a900;
            uVar30 = uVar29;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar19 + 0x70) != 0) {
              *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x18);
              if (*(long *)(lVar19 + 0x70) != 0) {
                *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x60);
                unaff_x27 = uVar26;
                if (*(long *)(lVar19 + 0x70) != 0) {
                  *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x68);
                  if (*(long *)(lVar19 + 0x70) != 0) {
                    *(undefined8 *)(lVar15 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x70);
                    lVar21 = *(long *)(lVar19 + 0x70);
                    if (lVar21 != 0) {
                      *(int *)(lVar15 + 0x74) = *(int *)(lVar21 + 0x118) + -1;
                      *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(lVar21 + 0x130);
                      if ((*(long *)(lVar19 + 0x70) != 0) && (*(long *)(lVar25 + 0x38) != 0)) {
                        uVar30 = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x110);
                        lVar21 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar30,0);
                        uVar31 = 0;
                        if (lVar21 != 0) {
                          lVar14 = lRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar21,uVar9,puVar4 + -0x68);
                          uVar31 = *(undefined8 *)(puVar4 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar20 = 0;
                          iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
                          if (iVar7 == 0) {
code_r0x0158a900:
                            if (*(long *)(lVar15 + 0xc0) == 0) {
                              unaff_x27 = uVar26;
                              if (*(long *)(lVar19 + 0x70) != 0) {
                                uVar9 = *(undefined8 *)(lVar25 + 0x88);
                                uVar28 = *(undefined8 *)(lVar25 + 0x90);
                                uVar29 = *(undefined8 *)(lVar25 + 0x38);
                                uVar8 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                                uVar16 = *unaff_x25;
                                uVar36 = *(undefined8 *)(lVar15 + 0x90);
                                uVar35 = *(undefined8 *)(lVar15 + 0x88);
                                *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(lVar15 + 0x80);
                                *(undefined8 *)(puVar4 + -0xf0) = uVar16;
                                *(undefined8 *)(puVar4 + -0xd8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xe0) = uVar35;
                                uVar16 = *(undefined8 *)(lVar15 + 0x98);
                                uVar36 = *(undefined8 *)(lVar15 + 0xb0);
                                uVar35 = *(undefined8 *)(lVar15 + 0xa8);
                                *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(lVar15 + 0xa0);
                                *(undefined8 *)(puVar4 + -0xd0) = uVar16;
                                *(undefined8 *)(puVar4 + -0xb8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xc0) = uVar35;
                                lVar14 = 0;
                                lVar21 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar29,uVar28,uVar9,0,uVar8,puVar4 + -0xf0,0);
                                iVar20 = (int)uVar9;
                                if (lVar21 != 0) {
                                  uVar9 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar21,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar15 + 0xc0) = uVar9;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar7 = *(int *)(lVar19 + 0x2c);
                              if (iVar7 != 0) {
                                *(undefined4 *)(lVar15 + 200) = *(undefined4 *)(lVar19 + 0x28);
                                *(int *)(lVar15 + 0xcc) = iVar7;
                              }
                              unaff_x27 = uVar26;
                              if ((lVar22 != 0) && (*(long *)(lVar25 + 0x30) != 0)) {
                                uVar11 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar25 + 0x30),
                                                         *(undefined8 *)(lVar22 + 0x30),lVar15,0);
                                return uVar11;
                              }
                            }
                          }
                          else if (*(long *)(lVar19 + 0x70) != 0) {
                            lVar14 = *(long *)(puVar4 + -0x68);
                            uVar9 = *(undefined8 *)(lVar25 + 0x88);
                            uVar28 = *(undefined8 *)(lVar25 + 0x90);
                            uVar29 = *(undefined8 *)(lVar25 + 0x38);
                            uVar8 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                            uVar16 = *unaff_x25;
                            uVar36 = *(undefined8 *)(lVar15 + 0x90);
                            uVar35 = *(undefined8 *)(lVar15 + 0x88);
                            *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar15 + 0x80);
                            *(undefined8 *)(puVar4 + -0xb0) = uVar16;
                            *(undefined8 *)(puVar4 + -0x98) = uVar36;
                            *(undefined8 *)(puVar4 + -0xa0) = uVar35;
                            uVar16 = *(undefined8 *)(lVar15 + 0x98);
                            uVar36 = *(undefined8 *)(lVar15 + 0xb0);
                            uVar35 = *(undefined8 *)(lVar15 + 0xa8);
                            *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(lVar15 + 0xa0);
                            *(undefined8 *)(puVar4 + -0x90) = uVar16;
                            *(undefined8 *)(puVar4 + -0x78) = uVar36;
                            *(undefined8 *)(puVar4 + -0x80) = uVar35;
                            lVar21 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar29,uVar28,uVar9,lVar14,uVar8,puVar4 + -0xb0,0);
                            iVar20 = (int)uVar9;
                            if (lVar21 != 0) {
                              uVar9 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar21,uRam0000000003d3ae58);
                              *(undefined8 *)(lVar15 + 0xc0) = uVar9;
                              goto code_r0x0158a900;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar9 = auVar38._8_8_;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar15 = *(long *)(auVar38._0_8_ + 0xa8);
  if (lVar15 != 0) {
    uVar26 = *(undefined8 *)(puVar4 + -0x100);
    uVar28 = *(undefined8 *)(puVar4 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)(puVar5 + -0x40) = uVar30;
    *(undefined8 *)(puVar5 + -0x38) = uVar31;
    *(long *)(puVar5 + -0x30) = lVar10;
    *(long *)(puVar5 + -0x28) = lVar27;
    *(long *)(puVar5 + -0x20) = auVar40._8_8_;
    *(long *)(puVar5 + -0x18) = auVar40._0_8_;
    *(undefined8 *)(puVar5 + -0x10) = uVar26;
    *(undefined8 *)(puVar5 + -8) = uVar28;
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar15,uVar9,puVar5 + -0x50);
    lVar10 = *(long *)(puVar5 + -0x50);
    if (lVar10 != 0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar15 + 0x18) = lVar10;
      *(undefined8 *)(lVar15 + 0x20) = uVar9;
      lVar27 = lVar10;
      if ((iVar20 != 0) && (plVar12 = *(long **)(lVar10 + 0x68), plVar12 != (long *)0x0)) {
        (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
        lVar27 = *(long *)(lVar15 + 0x18);
        if (*(long *)(lVar15 + 0x18) == 0) {
          func_0x00f78af4();
          lVar27 = lVar10;
        }
      }
      *(long *)(lVar27 + 0x70) = lVar14;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar10 != 0);
  }
  auVar38 = func_0x00f78af4();
  lVar22 = auVar38._0_8_;
  *(undefined8 *)(puVar4 + -0x160) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x158) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = uVar30;
  *(undefined8 *)(puVar4 + -0x138) = uVar31;
  *(long *)(puVar4 + -0x130) = lVar10;
  *(long *)(puVar4 + -0x128) = lVar27;
  *(long *)(puVar4 + -0x120) = lVar19;
  *(long *)(puVar4 + -0x118) = lVar25;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0x100;
  *(undefined **)(puVar4 + -0x108) = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  *(undefined8 *)(puVar4 + -0x170) = 0;
  *(undefined8 *)(puVar4 + -0x188) = 0;
  *(undefined8 *)(puVar4 + -400) = 0;
  *(undefined8 *)(puVar4 + -0x178) = 0;
  *(undefined8 *)(puVar4 + -0x180) = 0;
  *(undefined8 *)(puVar4 + -0x198) = 0;
  *(undefined8 *)(puVar4 + -0x1b0) = 0;
  *(undefined8 *)(puVar4 + -0x1a8) = 0;
  *(undefined8 *)(puVar4 + -0x1a0) = 0;
  *(undefined4 *)(puVar4 + -0x1b8) = 0;
  lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar10,uRam0000000003d3a498);
  if ((*(long *)(lVar22 + 0x80) != 0) &&
     (lVar27 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar22 + 0x80),0), lVar27 != 0)) {
    *(long *)(puVar4 + -0x238) = auVar38._8_8_;
    if (*(long *)(lVar27 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(puVar4 + -0x1e8,*(long *)(lVar27 + 0x50),uRam0000000003d3d860);
      *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x1e0);
      *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -0x1e8);
      *(undefined8 *)(puVar4 + -0x178) = *(undefined8 *)(puVar4 + -0x1d0);
      *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)(puVar4 + -0x1d8);
      *(undefined8 *)(puVar4 + -0x170) = *(undefined8 *)(puVar4 + -0x1c8);
code_r0x0158ab4c:
      uVar11 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(puVar4 + -400,uRam0000000003d336f8);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar26 = *(undefined8 *)(puVar4 + -0x180);
          uVar9 = *(undefined8 *)(puVar4 + -0x170);
          lVar27 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar30 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
          if (lVar27 == 0) {
            func_0x00f78af4(uVar30,uVar30);
          }
          else {
            uVar11 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar27,uVar30,0);
            if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar27 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar30 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
              if (lVar27 == 0) {
                func_0x00f78af4(uVar30,uVar30);
              }
              else {
                uVar11 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar27,uVar30,puVar4 + -0x198,uRam0000000003d574f0);
                if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar22 + 0x90) != 0) {
                  uVar11 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar22 + 0x90),*(undefined8 *)(puVar4 + -0x198)
                                           ,0);
                  if ((uVar11 & 1) == 0) goto code_r0x0158ac28;
                  if (*(long *)(lVar22 + 0x88) != 0) goto code_r0x0158ac18;
                  goto code_r0x0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(puVar4 + -400,uRam0000000003d336f0);
      *(undefined4 *)(puVar4 + -0x1b8) = 0;
      if (lVar10 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(puVar4 + -0x1b0,lVar10,uRam0000000003d3a4b8);
        while( true ) {
          uVar11 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(puVar4 + -0x1b0,uRam0000000003d32418);
          if ((uVar11 & 1) == 0) {
            *(undefined4 *)(puVar4 + -0x1c0) = 0xf3;
            *(int *)(puVar4 + -0x1b8) = *(int *)(puVar4 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(puVar4 + -0x1b0,uRam0000000003d32410);
            puVar17 = *(undefined8 **)(puVar4 + -0x238);
            uVar26 = *puVar17;
            uVar30 = puVar17[3];
            uVar9 = puVar17[2];
            *(undefined8 *)(puVar4 + -0x228) = puVar17[1];
            *(undefined8 *)(puVar4 + -0x230) = uVar26;
            *(undefined8 *)(puVar4 + -0x218) = uVar30;
            *(undefined8 *)(puVar4 + -0x220) = uVar9;
            uVar26 = puVar17[4];
            uVar30 = puVar17[7];
            uVar9 = puVar17[6];
            *(undefined8 *)(puVar4 + -0x208) = puVar17[5];
            *(undefined8 *)(puVar4 + -0x210) = uVar26;
            *(undefined8 *)(puVar4 + -0x1f8) = uVar30;
            *(undefined8 *)(puVar4 + -0x200) = uVar9;
            uVar11 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar22,puVar4 + -0x230);
            return uVar11;
          }
          if (*(long *)(lVar22 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar22 + 0x88),*(undefined8 *)(puVar4 + -0x1a0),
                          *(undefined8 *)(puVar4 + -0x1a0),0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar22 + 0x88),uVar9,0);
  if ((uVar11 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar26 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar26,0);
    if (lVar10 == 0) {
      func_0x00f78af4(uVar26,uVar26);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar10,uVar26,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x1589890 | Atlas.Contexts.FrontEndContextSettingsState.add_TransitionFromState
// ============================================================

/* WARNING: Possible PIC construction at 0x01589cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01589cd4) */
/* WARNING: Removing unreachable block (ram,0x01589cf8) */
/* WARNING: Removing unreachable block (ram,0x01589d3c) */
/* WARNING: Removing unreachable block (ram,0x01589d70) */
/* WARNING: Removing unreachable block (ram,0x01589da0) */
/* WARNING: Removing unreachable block (ram,0x01589dac) */
/* WARNING: Removing unreachable block (ram,0x01589dd0) */
/* WARNING: Removing unreachable block (ram,0x01589e04) */
/* WARNING: Removing unreachable block (ram,0x01589e34) */
/* WARNING: Removing unreachable block (ram,0x01589e68) */
/* WARNING: Removing unreachable block (ram,0x014e5478) */
/* WARNING: Removing unreachable block (ram,0x014e549c) */
/* WARNING: Removing unreachable block (ram,0x014e54b0) */
/* WARNING: Removing unreachable block (ram,0x014e54bc) */
/* WARNING: Removing unreachable block (ram,0x014e54d4) */
/* WARNING: Removing unreachable block (ram,0x014e5510) */
/* WARNING: Removing unreachable block (ram,0x014e5548) */
/* WARNING: Removing unreachable block (ram,0x014e55b0) */
/* WARNING: Removing unreachable block (ram,0x014e55b4) */
/* WARNING: Removing unreachable block (ram,0x014e567c) */
/* WARNING: Removing unreachable block (ram,0x014e56a8) */
/* WARNING: Removing unreachable block (ram,0x014e5684) */
/* WARNING: Removing unreachable block (ram,0x014e54e4) */
/* WARNING: Removing unreachable block (ram,0x014e5500) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextSettingsState__add_TransitionFromState
                (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar31;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uStack_240;
  ulong uStack_238;
  ulong *puStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong *puStack_200;
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined8 ****ppppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 ****ppppuStack_100;
  code *pcStack_f8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb513f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513f = 1;
  }
  puVar25 = (ulong *)(param_1 + 0x78);
  uVar12 = *puVar25;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar12,param_2,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar38 = func_0x00f78e5c(plVar9);
  lVar27 = auVar38._8_8_;
  lVar13 = auVar38._0_8_;
  uStack_60 = 0x3d1b6e0;
  pcStack_38 = Atlas_Contexts_FrontEndContextSeasonsState__Init;
  uStack_58 = uVar12;
  puStack_50 = puVar25;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb513b & 1) == 0) {
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb513b = 1;
  }
  if (lVar27 != 0) {
    uVar11 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar27,uRam0000000003d550b8);
    *(undefined8 *)(lVar13 + 0x80) = uVar11;
    uVar12 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar27,uRam0000000003d551b0);
    *(ulong *)(lVar13 + 0x88) = uVar12;
    return uVar12;
  }
  auVar39 = func_0x00f78af4();
  uStack_90 = 0x3d1b6e0;
  uStack_88 = 0x3eb5000;
  pcStack_68 = Atlas_Contexts_FrontEndContextSeasonsState__add_TransitionFromState;
  ppuStack_70 = (undefined8 **)&puStack_40;
  if ((bRam0000000003eb5139 & 1) == 0) {
    lStack_80 = lVar27;
    lStack_78 = lVar13;
    func_0x00f78a20(0x3d1b6e0);
    auVar38._8_8_ = lStack_80;
    auVar38._0_8_ = lStack_78;
    bRam0000000003eb5139 = 1;
  }
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar12 = *puVar25;
  while( true ) {
    lStack_80 = auVar38._8_8_;
    lStack_78 = auVar38._0_8_;
    plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar12,auVar39._8_8_,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    auVar38._8_8_ = lStack_80;
    auVar38._0_8_ = lStack_78;
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  lVar13 = func_0x00f78e5c(plVar9);
  puVar3 = (undefined8 *)&stack0xffffffffffffff10;
  puStack_98 = &Atlas_FrontEnd_FrontEndContext__DeInitStates;
  pppppuVar32 = (undefined8 *****)&pppuStack_a0;
  uVar11 = 0x3d1b6e0;
  uVar29 = 0x3d1b6e0;
  uVar17 = 0x3d56b80;
  uVar28 = 0x3d2a5a8;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb50ec & 1) == 0) {
    func_0x00f78a20(0x3d2a138);
    func_0x00f78a20(0x3d2a038);
    func_0x00f78a20(0x3d1b4a0);
    func_0x00f78a20(0x3d1b420);
    func_0x00f78a20(0x3d2a5a8);
    func_0x00f78a20(0x3d1b6e0);
    func_0x00f78a20(0x3d56b68);
    func_0x00f78a20(0x3d56b78);
    func_0x00f78a20(0x3d56b80);
    bRam0000000003eb50ec = 1;
  }
  lVar26 = *(long *)(lVar13 + 0xb0);
  uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
  lVar27 = lRam0000000003d2a5a8;
  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar13,uRam0000000003d56b80);
  if (lVar26 == 0) {
code_r0x01589e90:
    auVar38 = func_0x00f78af4();
    uVar17 = auVar38._8_8_;
    uStack_120 = 0x3d56b80;
    pcStack_f8 = Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState;
    uStack_118 = uVar12;
    uStack_110 = 0;
    lStack_108 = lVar13;
    ppppuStack_100 = pppppuVar32;
    if ((bRam0000000003eb5113 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5113 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar17,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    uVar30 = auVar38._8_8_;
    uStack_150 = 0x3d1b6e0;
    pcStack_128 = Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout;
    uStack_148 = uVar12;
    puStack_140 = puVar25;
    uStack_138 = uVar17;
    ppppuStack_130 = &ppppuStack_100;
    if ((bRam0000000003eb5115 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb5115 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar30,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    uVar17 = auVar38._8_8_;
    uStack_180 = 0x3d1b4a0;
    pcStack_158 = Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState;
    uStack_178 = uVar12;
    puStack_170 = puVar25;
    uStack_168 = uVar30;
    ppppuStack_160 = &ppppuStack_130;
    if ((bRam0000000003eb5107 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5107 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar17,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    uVar30 = auVar38._8_8_;
    uStack_1b0 = 0x3d1b6e0;
    pcStack_188 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
    uStack_1a8 = uVar12;
    puStack_1a0 = puVar25;
    uStack_198 = uVar17;
    ppppuStack_190 = &ppppuStack_160;
    if ((bRam0000000003eb50f7 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb50f7 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar30,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    uVar17 = auVar38._8_8_;
    uStack_1e0 = 0x3d1b6e0;
    pcStack_1b8 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
    uStack_1d8 = uVar12;
    puStack_1d0 = puVar25;
    uStack_1c8 = uVar30;
    ppppuStack_1c0 = &ppppuStack_190;
    if ((bRam0000000003eb50f5 & 1) == 0) {
      func_0x00f78a20(0x3d1b420);
      bRam0000000003eb50f5 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar17,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    uVar30 = auVar38._8_8_;
    uStack_210 = 0x3d1b420;
    pcStack_1e8 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
    uStack_208 = uVar12;
    puStack_200 = puVar25;
    uStack_1f8 = uVar17;
    ppppuStack_1f0 = &ppppuStack_1c0;
    if ((bRam0000000003eb50f9 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb50f9 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x88);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar30,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    auVar38 = func_0x00f78e5c(plVar9);
    lVar13 = auVar38._8_8_;
    puVar3 = &uStack_240;
    uStack_240 = 0x3d1b4a0;
    pcStack_218 = Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
    pppppuVar32 = &ppppuStack_220;
    uStack_238 = uVar12;
    puStack_230 = puVar25;
    uStack_228 = uVar30;
    ppppuStack_220 = &ppppuStack_1f0;
    if ((bRam0000000003eb5130 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5130 = 1;
    }
    uVar17 = 0x3d1b6e0;
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,lVar13,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    puVar34 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
    auVar39 = func_0x00f78e5c(plVar9);
  }
  else {
    unaff_x27 = 0x3d1b000;
    uVar30 = 0x3d56b78;
    uVar31 = 0x3d56b78;
    unaff_x25 = (undefined8 *)0x3d2a000;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 0xb0);
    uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,lVar13,uRam0000000003d56b78);
    unaff_x26 = uVar30;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 0xb8);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar13,uRam0000000003d56b80);
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar13,uRam0000000003d56b80);
    unaff_x26 = uVar31;
    if (lVar26 == 0) goto code_r0x01589e90;
    unaff_x28 = 0x3d1b000;
    unaff_x27 = 0x3d56000;
    puVar18 = (undefined8 *)0x3d2a038;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
    lVar27 = lRam0000000003d2a038;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,lVar13,uRam0000000003d56b68);
    unaff_x25 = puVar18;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,lVar13,uRam0000000003d56b78);
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout(lVar26,uVar12);
    lVar26 = *(long *)(lVar13 + 200);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar13,uRam0000000003d56b80);
    unaff_x25 = (undefined8 *)0x3d2a038;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent(lVar26,uVar12);
    puVar25 = *(ulong **)(lVar13 + 0xd0);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    auVar39._8_8_ = uVar12;
    auVar39._0_8_ = puVar25;
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar13,uRam0000000003d56b80);
    if (puVar25 == (ulong *)0x0) goto code_r0x01589e90;
    puVar34 = &UNK_01589cd4;
    unaff_x25 = puVar18;
    unaff_x26 = uVar30;
  }
  *(undefined8 *)((long)puVar3 + -0x30) = uVar17;
  *(ulong *)((long)puVar3 + -0x28) = uVar12;
  *(ulong **)((long)puVar3 + -0x20) = puVar25;
  *(long *)((long)puVar3 + -0x18) = lVar13;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar32;
  *(undefined **)((long)puVar3 + -8) = puVar34;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
  }
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar12 = *puVar25;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,auVar39._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar38 = func_0x00f78e5c(plVar9);
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x58) = uVar12;
  *(ulong **)((long)puVar3 + -0x50) = puVar25;
  *(long *)((long)puVar3 + -0x48) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(code **)((long)puVar3 + -0x38) =
       Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
  }
  puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar12 = *puVar25;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,auVar38._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar39 = func_0x00f78e5c(plVar9);
  *(undefined8 *)((long)puVar3 + -0x90) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x88) = uVar12;
  *(ulong **)((long)puVar3 + -0x80) = puVar25;
  *(long *)((long)puVar3 + -0x78) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0x70) = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined **)((long)puVar3 + -0x68) =
       &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar12 = *puVar25;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,auVar39._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar38 = func_0x00f78e5c(plVar9);
  *(undefined8 *)((long)puVar3 + -0xc0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xb8) = uVar12;
  *(ulong **)((long)puVar3 + -0xb0) = puVar25;
  *(long *)((long)puVar3 + -0xa8) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0xa0) = (undefined1 *)((long)puVar3 + -0x70);
  *(code **)((long)puVar3 + -0x98) =
       Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  lVar13 = 0x3d1b6e0;
  puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar12 = *puVar25;
  while( true ) {
    iVar21 = 0;
    plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,auVar38._8_8_);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar39 = func_0x00f78e5c(plVar9);
  lVar26 = auVar39._8_8_;
  puVar4 = (undefined1 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xe8) = uVar12;
  *(ulong **)((long)puVar3 + -0xe0) = puVar25;
  *(long *)((long)puVar3 + -0xd8) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0xa0);
  *(undefined **)((long)puVar3 + -200) = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  puVar33 = (undefined1 *)((long)puVar3 + -0xd0);
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  lVar23 = 0x3eb5000;
  if (lVar26 == 0) {
code_r0x0158a62c:
    puVar34 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar40 = func_0x00f78af4();
    lVar14 = lVar27;
    auVar1 = auVar39;
  }
  else {
    iVar7 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    if (iVar7 != 0) {
      lVar14 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar21 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(lVar14,lVar26)
      ;
      lVar26 = lRam0000000003d5d988;
      lVar15 = *(long *)(auVar39._0_8_ + 0xa8);
      lVar23 = lVar14;
      if (lVar15 != 0) {
        *(undefined8 *)((long)puVar3 + -0x100) = 0x3d1b6e0;
        *(undefined8 *)((long)puVar3 + -0xf8) = 0x3d2a5a8;
        *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0xf0);
        *(undefined8 *)((long)puVar3 + -0xe8) = *(undefined8 *)((long)puVar3 + -0xe8);
        *(undefined8 *)((long)puVar3 + -0xe0) = *(undefined8 *)((long)puVar3 + -0xe0);
        *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)((long)puVar3 + -0xd8);
        *(undefined8 *)((long)puVar3 + -0xd0) = *(undefined8 *)((long)puVar3 + -0xd0);
        *(undefined8 *)((long)puVar3 + -200) = *(undefined8 *)((long)puVar3 + -200);
        lVar13 = lVar14;
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar11 = **(undefined8 **)(lVar26 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
        if (lVar15 == 0) {
          auVar38 = func_0x00f78af4();
          plVar9 = auVar38._8_8_;
          lVar27 = auVar38._0_8_;
          *(undefined8 *)((long)puVar3 + -0x140) = 0x3eb6000;
          *(undefined8 *)((long)puVar3 + -0x138) = 0x3d25458;
          *(undefined8 *)((long)puVar3 + -0x130) = uVar11;
          *(undefined8 *)((long)puVar3 + -0x128) = 0;
          *(undefined8 *)((long)puVar3 + -0x120) = 1;
          *(long *)((long)puVar3 + -0x118) = lVar14;
          *(undefined1 **)((long)puVar3 + -0x110) = (undefined1 *)((long)puVar3 + -0xd0);
          *(undefined **)((long)puVar3 + -0x108) = &System_String__Join_object_;
          if ((bRam0000000003eb668c & 1) == 0) {
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb668c = 1;
          }
          if (plVar9 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar11 = func_0x00f78aec();
            uVar17 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar17,0);
            uVar17 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar11,uVar17);
          }
          else {
            if (lVar27 == 0) {
              lVar27 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar26 = **(long **)(lVar13 + 0x30);
            if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar26);
            }
            lVar23 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar12 != 0) {
              piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar26) {
                  puVar18 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar24 = piVar24 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,lVar26,0);
code_r0x018e1828:
            plVar9 = (long *)(*(code *)*puVar18)(plVar9,puVar18[1]);
            if (plVar9 != (long *)0x0) {
              lVar26 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar12 != 0) {
                piVar24 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar18 = (undefined8 *)(lVar26 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar24 = piVar24 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar12 = (*(code *)*puVar18)(plVar9,puVar18[1]);
              if ((uVar12 & 1) == 0) {
                uVar12 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar9 != (long *)0x0) {
                  lVar13 = *plVar9;
                  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar10 != 0) {
                    piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar18 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar24 = piVar24 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar18)(plVar9,puVar18[1]);
                }
                return uVar12;
              }
              lVar26 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
              if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar23);
              }
              lVar14 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar12 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar23) {
                    puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar24 = piVar24 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,lVar23,0);
code_r0x018e1934:
              lVar23 = (*(code *)*puVar18)(plVar9,puVar18[1]);
              if (lVar23 != 0) {
                lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
                if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar23);
                }
                lVar14 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar12 != 0) {
                  piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar23) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar24 = piVar24 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,lVar23,0);
code_r0x018e19a8:
                plVar19 = (long *)(*(code *)*puVar18)(plVar9,puVar18[1]);
                if (plVar19 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar23 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
                if (lVar23 != 0) {
                  if (lVar26 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar26,lVar23,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar23 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar12 != 0) {
                  piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar18 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar24 = piVar24 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar12 = (*(code *)*puVar18)(plVar9,puVar18[1]);
                if ((uVar12 & 1) == 0) {
                  uVar12 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar26,0);
                  goto joined_r0x018e1920;
                }
                if (lVar26 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar26,lVar27,0);
                lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
                if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar23);
                }
                lVar14 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar12 != 0) {
                  piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar23) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar24 = piVar24 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,lVar23,0);
code_r0x018e1ab0:
                lVar23 = (*(code *)*puVar18)(plVar9,puVar18[1]);
              } while (lVar23 == 0);
              lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
              if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar23);
              }
              lVar14 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar12 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar23) {
                    puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar24 = piVar24 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar9,lVar23,0);
code_r0x018e1b24:
              plVar19 = (long *)(*(code *)*puVar18)(plVar9,puVar18[1]);
              if (plVar19 != (long *)0x0) {
                lVar23 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
                if (lVar23 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar26,lVar23,0);
                }
                goto code_r0x018e19dc;
              }
              func_0x00f78af4();
              goto code_r0x018e1c64;
            }
          }
          func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
          (*pcVar2)();
        }
        iVar21 = 1;
        uVar11 = *(undefined8 *)((long)puVar3 + -0xd0);
        uVar28 = *(undefined8 *)((long)puVar3 + -200);
        auVar40._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
        auVar40._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
        lVar13 = *(long *)((long)puVar3 + -0xf0);
        lVar27 = *(long *)((long)puVar3 + -0xe8);
        puVar5 = (undefined1 *)((long)puVar3 + -0xc0);
        uVar30 = *(undefined8 *)((long)puVar3 + -0x100);
        uVar31 = *(undefined8 *)((long)puVar3 + -0xf8);
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar33 = *(undefined1 **)((long)puVar3 + -0xd0);
    puVar34 = *(undefined **)((long)puVar3 + -200);
    auVar1._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
    auVar1._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
    puVar4 = (undefined1 *)((long)puVar3 + -0xc0);
    lVar13 = *(long *)((long)puVar3 + -0xf0);
    lVar23 = *(long *)((long)puVar3 + -0xe8);
    lVar14 = lVar27;
    auVar40 = auVar39;
  }
  lVar20 = auVar40._8_8_;
  lVar26 = auVar40._0_8_;
  puVar5 = puVar4 + -0xf0;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = 0x3d1b6e0;
  *(undefined8 *)(puVar4 + -0x38) = 0x3d2a5a8;
  *(long *)(puVar4 + -0x30) = lVar13;
  *(long *)(puVar4 + -0x28) = lVar23;
  *(long *)(puVar4 + -0x20) = auVar1._8_8_;
  *(long *)(puVar4 + -0x18) = auVar1._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar33;
  *(undefined **)(puVar4 + -8) = puVar34;
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  *(undefined8 *)(puVar4 + -0x68) = 0;
  lVar27 = 0x3eb5000;
  uVar31 = 0x3d2a5a8;
  uVar30 = uVar11;
  if ((*(long *)(lVar26 + 0x38) != 0) && (lVar20 != 0)) {
    uVar17 = 0x3d21270;
    lVar27 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
    lVar13 = *(long *)(lVar20 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar13,0);
    uVar31 = uVar28;
    uVar30 = uVar29;
    unaff_x26 = 0x3d21270;
    if (lVar27 != 0) {
      uVar28 = uRam0000000003d57288;
      lVar23 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar27,uVar16);
      iVar21 = (int)uVar28;
      if (*(long *)(lVar26 + 0x38) != 0) {
        lVar13 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
        uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar20 + 0x20),0);
        lVar27 = lVar23;
        unaff_x26 = uVar17;
        if (lVar13 != 0) {
          uVar17 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uVar28,uRam0000000003d572d8);
          iVar21 = 0;
          lVar15 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar23,uVar17);
          if (lVar15 != 0) {
            uVar17 = 0x3d23990;
            uVar30 = *(undefined8 *)(lVar20 + 0x38);
            uVar28 = *(undefined8 *)(lVar20 + 0x30);
            uVar16 = *(undefined8 *)(lVar20 + 0x48);
            uVar31 = *(undefined8 *)(lVar20 + 0x40);
            uVar36 = *(undefined8 *)(lVar20 + 0x58);
            uVar35 = *(undefined8 *)(lVar20 + 0x50);
            uVar37 = *(undefined8 *)(lVar20 + 0x60);
            *(undefined8 *)(lVar15 + 0xb0) = *(undefined8 *)(lVar20 + 0x68);
            *(undefined8 *)(lVar15 + 0xa8) = uVar37;
            *(undefined8 *)(lVar15 + 0xa0) = uVar36;
            *(undefined8 *)(lVar15 + 0x98) = uVar35;
            *(undefined8 *)(lVar15 + 0x90) = uVar16;
            *(undefined8 *)(lVar15 + 0x88) = uVar31;
            *(undefined8 *)(lVar15 + 0x80) = uVar30;
            *(undefined8 *)(lVar15 + 0x78) = uVar28;
            *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            uVar8 = /*Atlas.FrontEnd.EventInfo$$get_NumberOfAI*/ func_0x01583850(lVar20);
            *(undefined4 *)(lVar15 + 0x70) = uVar8;
            uVar31 = *(undefined8 *)(lVar20 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(lVar15 + 0x78);
            iVar21 = 0;
            iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
            uVar30 = uVar11;
            lVar13 = lVar15;
            if (iVar7 == 0) goto code_r0x0158a900;
            uVar30 = uVar29;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar20 + 0x70) != 0) {
              *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x18);
              if (*(long *)(lVar20 + 0x70) != 0) {
                *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x60);
                unaff_x27 = uVar17;
                if (*(long *)(lVar20 + 0x70) != 0) {
                  *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x68);
                  if (*(long *)(lVar20 + 0x70) != 0) {
                    *(undefined8 *)(lVar15 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x70);
                    lVar22 = *(long *)(lVar20 + 0x70);
                    if (lVar22 != 0) {
                      *(int *)(lVar15 + 0x74) = *(int *)(lVar22 + 0x118) + -1;
                      *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(lVar22 + 0x130);
                      if ((*(long *)(lVar20 + 0x70) != 0) && (*(long *)(lVar26 + 0x38) != 0)) {
                        uVar30 = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x110);
                        lVar22 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar30,0);
                        uVar31 = 0;
                        if (lVar22 != 0) {
                          lVar14 = lRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar22,uVar11,puVar4 + -0x68);
                          uVar31 = *(undefined8 *)(puVar4 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar21 = 0;
                          iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
                          if (iVar7 == 0) {
code_r0x0158a900:
                            if (*(long *)(lVar15 + 0xc0) == 0) {
                              unaff_x27 = uVar17;
                              if (*(long *)(lVar20 + 0x70) != 0) {
                                uVar11 = *(undefined8 *)(lVar26 + 0x88);
                                uVar28 = *(undefined8 *)(lVar26 + 0x90);
                                uVar29 = *(undefined8 *)(lVar26 + 0x38);
                                uVar8 = *(undefined4 *)(*(long *)(lVar20 + 0x70) + 0x108);
                                uVar16 = *unaff_x25;
                                uVar36 = *(undefined8 *)(lVar15 + 0x90);
                                uVar35 = *(undefined8 *)(lVar15 + 0x88);
                                *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(lVar15 + 0x80);
                                *(undefined8 *)(puVar4 + -0xf0) = uVar16;
                                *(undefined8 *)(puVar4 + -0xd8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xe0) = uVar35;
                                uVar16 = *(undefined8 *)(lVar15 + 0x98);
                                uVar36 = *(undefined8 *)(lVar15 + 0xb0);
                                uVar35 = *(undefined8 *)(lVar15 + 0xa8);
                                *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(lVar15 + 0xa0);
                                *(undefined8 *)(puVar4 + -0xd0) = uVar16;
                                *(undefined8 *)(puVar4 + -0xb8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xc0) = uVar35;
                                lVar14 = 0;
                                lVar22 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar29,uVar28,uVar11,0,uVar8,puVar4 + -0xf0,0);
                                iVar21 = (int)uVar11;
                                if (lVar22 != 0) {
                                  uVar11 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar22,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar15 + 0xc0) = uVar11;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar7 = *(int *)(lVar20 + 0x2c);
                              if (iVar7 != 0) {
                                *(undefined4 *)(lVar15 + 200) = *(undefined4 *)(lVar20 + 0x28);
                                *(int *)(lVar15 + 0xcc) = iVar7;
                              }
                              unaff_x27 = uVar17;
                              if ((lVar23 != 0) && (*(long *)(lVar26 + 0x30) != 0)) {
                                uVar12 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar26 + 0x30),
                                                         *(undefined8 *)(lVar23 + 0x30),lVar15,0);
                                return uVar12;
                              }
                            }
                          }
                          else if (*(long *)(lVar20 + 0x70) != 0) {
                            lVar14 = *(long *)(puVar4 + -0x68);
                            uVar11 = *(undefined8 *)(lVar26 + 0x88);
                            uVar28 = *(undefined8 *)(lVar26 + 0x90);
                            uVar29 = *(undefined8 *)(lVar26 + 0x38);
                            uVar8 = *(undefined4 *)(*(long *)(lVar20 + 0x70) + 0x108);
                            uVar16 = *unaff_x25;
                            uVar36 = *(undefined8 *)(lVar15 + 0x90);
                            uVar35 = *(undefined8 *)(lVar15 + 0x88);
                            *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar15 + 0x80);
                            *(undefined8 *)(puVar4 + -0xb0) = uVar16;
                            *(undefined8 *)(puVar4 + -0x98) = uVar36;
                            *(undefined8 *)(puVar4 + -0xa0) = uVar35;
                            uVar16 = *(undefined8 *)(lVar15 + 0x98);
                            uVar36 = *(undefined8 *)(lVar15 + 0xb0);
                            uVar35 = *(undefined8 *)(lVar15 + 0xa8);
                            *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(lVar15 + 0xa0);
                            *(undefined8 *)(puVar4 + -0x90) = uVar16;
                            *(undefined8 *)(puVar4 + -0x78) = uVar36;
                            *(undefined8 *)(puVar4 + -0x80) = uVar35;
                            lVar22 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar29,uVar28,uVar11,lVar14,uVar8,puVar4 + -0xb0,0);
                            iVar21 = (int)uVar11;
                            if (lVar22 != 0) {
                              uVar11 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar22,uRam0000000003d3ae58);
                              *(undefined8 *)(lVar15 + 0xc0) = uVar11;
                              goto code_r0x0158a900;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar17 = auVar38._8_8_;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar15 = *(long *)(auVar38._0_8_ + 0xa8);
  if (lVar15 != 0) {
    uVar11 = *(undefined8 *)(puVar4 + -0x100);
    uVar28 = *(undefined8 *)(puVar4 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)(puVar5 + -0x40) = uVar30;
    *(undefined8 *)(puVar5 + -0x38) = uVar31;
    *(long *)(puVar5 + -0x30) = lVar13;
    *(long *)(puVar5 + -0x28) = lVar27;
    *(long *)(puVar5 + -0x20) = auVar40._8_8_;
    *(long *)(puVar5 + -0x18) = auVar40._0_8_;
    *(undefined8 *)(puVar5 + -0x10) = uVar11;
    *(undefined8 *)(puVar5 + -8) = uVar28;
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar15,uVar17,puVar5 + -0x50);
    lVar13 = *(long *)(puVar5 + -0x50);
    if (lVar13 != 0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar15 + 0x18) = lVar13;
      *(undefined8 *)(lVar15 + 0x20) = uVar17;
      lVar27 = lVar13;
      if ((iVar21 != 0) && (plVar9 = *(long **)(lVar13 + 0x68), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        lVar27 = *(long *)(lVar15 + 0x18);
        if (*(long *)(lVar15 + 0x18) == 0) {
          func_0x00f78af4();
          lVar27 = lVar13;
        }
      }
      *(long *)(lVar27 + 0x70) = lVar14;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar13 != 0);
  }
  auVar38 = func_0x00f78af4();
  lVar23 = auVar38._0_8_;
  *(undefined8 *)(puVar4 + -0x160) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x158) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = uVar30;
  *(undefined8 *)(puVar4 + -0x138) = uVar31;
  *(long *)(puVar4 + -0x130) = lVar13;
  *(long *)(puVar4 + -0x128) = lVar27;
  *(long *)(puVar4 + -0x120) = lVar20;
  *(long *)(puVar4 + -0x118) = lVar26;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0x100;
  *(undefined **)(puVar4 + -0x108) = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  *(undefined8 *)(puVar4 + -0x170) = 0;
  *(undefined8 *)(puVar4 + -0x188) = 0;
  *(undefined8 *)(puVar4 + -400) = 0;
  *(undefined8 *)(puVar4 + -0x178) = 0;
  *(undefined8 *)(puVar4 + -0x180) = 0;
  *(undefined8 *)(puVar4 + -0x198) = 0;
  *(undefined8 *)(puVar4 + -0x1b0) = 0;
  *(undefined8 *)(puVar4 + -0x1a8) = 0;
  *(undefined8 *)(puVar4 + -0x1a0) = 0;
  *(undefined4 *)(puVar4 + -0x1b8) = 0;
  lVar13 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar13,uRam0000000003d3a498);
  if ((*(long *)(lVar23 + 0x80) != 0) &&
     (lVar27 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar23 + 0x80),0), lVar27 != 0)) {
    *(long *)(puVar4 + -0x238) = auVar38._8_8_;
    if (*(long *)(lVar27 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(puVar4 + -0x1e8,*(long *)(lVar27 + 0x50),uRam0000000003d3d860);
      *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x1e0);
      *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -0x1e8);
      *(undefined8 *)(puVar4 + -0x178) = *(undefined8 *)(puVar4 + -0x1d0);
      *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)(puVar4 + -0x1d8);
      *(undefined8 *)(puVar4 + -0x170) = *(undefined8 *)(puVar4 + -0x1c8);
code_r0x0158ab4c:
      uVar12 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(puVar4 + -400,uRam0000000003d336f8);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar11 = *(undefined8 *)(puVar4 + -0x180);
          uVar17 = *(undefined8 *)(puVar4 + -0x170);
          lVar27 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
          if (lVar27 == 0) {
            func_0x00f78af4(uVar28,uVar28);
          }
          else {
            uVar12 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar27,uVar28,0);
            if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar23 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar27 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              if (lVar27 == 0) {
                func_0x00f78af4(uVar28,uVar28);
              }
              else {
                uVar12 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar27,uVar28,puVar4 + -0x198,uRam0000000003d574f0);
                if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar23 + 0x90) != 0) {
                  uVar12 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar23 + 0x90),*(undefined8 *)(puVar4 + -0x198)
                                           ,0);
                  if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
                  if (*(long *)(lVar23 + 0x88) != 0) goto code_r0x0158ac18;
                  goto code_r0x0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc(puVar4 + -400,uRam0000000003d336f0);
      *(undefined4 *)(puVar4 + -0x1b8) = 0;
      if (lVar13 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(puVar4 + -0x1b0,lVar13,uRam0000000003d3a4b8);
        while( true ) {
          uVar12 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(puVar4 + -0x1b0,uRam0000000003d32418);
          if ((uVar12 & 1) == 0) {
            *(undefined4 *)(puVar4 + -0x1c0) = 0xf3;
            *(int *)(puVar4 + -0x1b8) = *(int *)(puVar4 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(puVar4 + -0x1b0,uRam0000000003d32410);
            puVar18 = *(undefined8 **)(puVar4 + -0x238);
            uVar11 = *puVar18;
            uVar28 = puVar18[3];
            uVar17 = puVar18[2];
            *(undefined8 *)(puVar4 + -0x228) = puVar18[1];
            *(undefined8 *)(puVar4 + -0x230) = uVar11;
            *(undefined8 *)(puVar4 + -0x218) = uVar28;
            *(undefined8 *)(puVar4 + -0x220) = uVar17;
            uVar11 = puVar18[4];
            uVar28 = puVar18[7];
            uVar17 = puVar18[6];
            *(undefined8 *)(puVar4 + -0x208) = puVar18[5];
            *(undefined8 *)(puVar4 + -0x210) = uVar11;
            *(undefined8 *)(puVar4 + -0x1f8) = uVar28;
            *(undefined8 *)(puVar4 + -0x200) = uVar17;
            uVar12 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar23,puVar4 + -0x230);
            return uVar12;
          }
          if (*(long *)(lVar23 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar23 + 0x88),*(undefined8 *)(puVar4 + -0x1a0),
                          *(undefined8 *)(puVar4 + -0x1a0),0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar23 + 0x88),uVar17,0);
  if ((uVar12 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
    if (lVar13 == 0) {
      func_0x00f78af4(uVar11,uVar11);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar13,uVar11,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a434 | Atlas.Contexts.FrontEndContextSettingsState.remove_TransitionFromState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 unaff_x23;
  long lVar26;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar23 = (ulong *)(param_1 + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar25 = auVar33._8_8_;
  uStack_60 = 0x3d1b6e0;
  pcStack_38 = Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while( true ) {
    iVar19 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25);
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  lVar26 = auVar33._8_8_;
  puVar3 = &uStack_90;
  uStack_90 = 0x3d1b6e0;
  puStack_68 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppppuStack_70 = &pppuStack_40;
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  uVar17 = 0x3eb5000;
  if (lVar26 == 0) {
code_r0x0158a62c:
    auVar34 = func_0x00f78af4();
    uVar9 = param_4;
    uVar24 = 0x3d1b6e0;
    pppppuVar27 = &ppppuStack_70;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_80;
    auVar1._0_8_ = uStack_78;
    if (iVar6 != 0) {
      uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar19 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(uVar9,lVar26);
      lVar26 = lRam0000000003d5d988;
      lVar10 = *(long *)(auVar33._0_8_ + 0xa8);
      uVar17 = uVar9;
      if (lVar10 != 0) {
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar25 = **(undefined8 **)(lVar26 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
        auVar34._8_8_ = puStack_80;
        auVar34._0_8_ = uStack_78;
        if (lVar10 == 0) {
          auVar33 = func_0x00f78af4();
          plVar8 = auVar33._8_8_;
          lVar26 = auVar33._0_8_;
          if ((bRam0000000003eb668c & 1) == 0) {
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb668c = 1;
          }
          if (plVar8 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar25 = func_0x00f78aec();
            uVar18 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar25,uVar18,0);
            uVar18 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar25,uVar18);
          }
          else {
            if (lVar26 == 0) {
              lVar26 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar10 = **(long **)(uVar17 + 0x30);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            lVar20 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
            if (uVar9 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == lVar10) {
                  puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar22 = piVar22 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,lVar10,0);
code_r0x018e1828:
            plVar8 = (long *)(*(code *)*puVar15)(plVar8,puVar15[1]);
            if (plVar8 != (long *)0x0) {
              lVar10 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar9 != 0) {
                piVar22 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar15 = (undefined8 *)(lVar10 + (long)*piVar22 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar22 = piVar22 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar9 = (*(code *)*puVar15)(plVar8,puVar15[1]);
              if ((uVar9 & 1) == 0) {
                uVar17 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar8 != (long *)0x0) {
                  lVar26 = *plVar8;
                  uVar9 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar9 != 0) {
                    piVar22 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar15 = (undefined8 *)(lVar26 + (long)*piVar22 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar22 = piVar22 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar15)(plVar8,puVar15[1]);
                }
                return uVar17;
              }
              lVar10 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar20 = *(long *)(*(long *)(uVar17 + 0x30) + 8);
              if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar20);
              }
              lVar21 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
              if (uVar9 != 0) {
                piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == lVar20) {
                    puVar15 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar22 = piVar22 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,0);
code_r0x018e1934:
              lVar20 = (*(code *)*puVar15)(plVar8,puVar15[1]);
              if (lVar20 != 0) {
                lVar20 = *(long *)(*(long *)(uVar17 + 0x30) + 8);
                if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar20);
                }
                lVar21 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar9 != 0) {
                  piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar20) {
                      puVar15 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar22 = piVar22 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,0);
code_r0x018e19a8:
                plVar16 = (long *)(*(code *)*puVar15)(plVar8,puVar15[1]);
                if (plVar16 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar20 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
                if (lVar20 != 0) {
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,lVar20,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar20 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar9 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar15 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar22 = piVar22 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar9 = (*(code *)*puVar15)(plVar8,puVar15[1]);
                if ((uVar9 & 1) == 0) {
                  uVar17 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar10,0);
                  goto joined_r0x018e1920;
                }
                if (lVar10 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,lVar26,0);
                lVar20 = *(long *)(*(long *)(uVar17 + 0x30) + 8);
                if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar20);
                }
                lVar21 = *plVar8;
                uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar9 != 0) {
                  piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar20) {
                      puVar15 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar22 = piVar22 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,0);
code_r0x018e1ab0:
                lVar20 = (*(code *)*puVar15)(plVar8,puVar15[1]);
              } while (lVar20 == 0);
              lVar20 = *(long *)(*(long *)(uVar17 + 0x30) + 8);
              if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar20);
              }
              lVar21 = *plVar8;
              uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
              if (uVar9 != 0) {
                piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == lVar20) {
                    puVar15 = (undefined8 *)(lVar21 + (long)*piVar22 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar22 = piVar22 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar15 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,0);
code_r0x018e1b24:
              plVar16 = (long *)(*(code *)*puVar15)(plVar8,puVar15[1]);
              if (plVar16 != (long *)0x0) {
                lVar20 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
                if (lVar20 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar10,lVar20,0);
                }
                goto code_r0x018e19dc;
              }
              func_0x00f78af4();
              goto code_r0x018e1c64;
            }
          }
          func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
          (*pcVar2)();
        }
        iVar19 = 1;
        puVar4 = &uStack_60;
        uVar17 = uStack_88;
        uVar24 = uStack_90;
        pppppuVar27 = (undefined8 *****)ppppuStack_70;
        puVar28 = puStack_68;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_60;
    uVar9 = param_4;
    uVar17 = uStack_88;
    uVar24 = uStack_90;
    pppppuVar27 = (undefined8 *****)ppppuStack_70;
    puVar28 = puStack_68;
    auVar34 = auVar33;
  }
  lVar20 = auVar34._8_8_;
  lVar26 = auVar34._0_8_;
  puVar4 = (undefined8 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
  *(undefined8 **)((long)puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x38) = unaff_x23;
  *(ulong *)((long)puVar3 + -0x30) = uVar24;
  *(ulong *)((long)puVar3 + -0x28) = uVar17;
  *(long *)((long)puVar3 + -0x20) = auVar1._8_8_;
  *(long *)((long)puVar3 + -0x18) = auVar1._0_8_;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar27;
  *(undefined **)((long)puVar3 + -8) = puVar28;
  if ((bRam0000000003eb50ee & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d57510);
    func_0x00f78a20(0x3d3ae58);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50ee = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x68) = 0;
  uVar17 = 0x3eb5000;
  if ((*(long *)(lVar26 + 0x38) != 0) && (lVar20 != 0)) {
    uVar25 = 0x3d21270;
    uVar17 = *(ulong *)(*(long *)(lVar26 + 0x38) + 0x10);
    uVar24 = *(ulong *)(lVar20 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar24,0);
    unaff_x26 = 0x3d21270;
    if (uVar17 != 0) {
      uVar14 = uRam0000000003d57288;
      uVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(uVar17,uVar18);
      iVar19 = (int)uVar14;
      if (*(long *)(lVar26 + 0x38) != 0) {
        uVar24 = *(ulong *)(*(long *)(lVar26 + 0x38) + 0x10);
        uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar20 + 0x20),0);
        uVar17 = uVar11;
        unaff_x26 = uVar25;
        if (uVar24 != 0) {
          uVar25 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(uVar24,uVar18,uRam0000000003d572d8);
          iVar19 = 0;
          uVar12 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(uVar11,uVar25);
          if (uVar12 != 0) {
            uVar25 = 0x3d23990;
            uVar14 = *(undefined8 *)(lVar20 + 0x38);
            uVar18 = *(undefined8 *)(lVar20 + 0x30);
            uVar29 = *(undefined8 *)(lVar20 + 0x48);
            uVar13 = *(undefined8 *)(lVar20 + 0x40);
            uVar31 = *(undefined8 *)(lVar20 + 0x58);
            uVar30 = *(undefined8 *)(lVar20 + 0x50);
            uVar32 = *(undefined8 *)(lVar20 + 0x60);
            *(undefined8 *)(uVar12 + 0xb0) = *(undefined8 *)(lVar20 + 0x68);
            *(undefined8 *)(uVar12 + 0xa8) = uVar32;
            *(undefined8 *)(uVar12 + 0xa0) = uVar31;
            *(undefined8 *)(uVar12 + 0x98) = uVar30;
            *(undefined8 *)(uVar12 + 0x90) = uVar29;
            *(undefined8 *)(uVar12 + 0x88) = uVar13;
            *(undefined8 *)(uVar12 + 0x80) = uVar14;
            *(undefined8 *)(uVar12 + 0x78) = uVar18;
            *(undefined4 *)(uVar12 + 0x18) = *(undefined4 *)(lVar20 + 0x10);
            uVar7 = /*Atlas.FrontEnd.EventInfo$$get_NumberOfAI*/ func_0x01583850(lVar20);
            *(undefined4 *)(uVar12 + 0x70) = uVar7;
            unaff_x23 = *(undefined8 *)(lVar20 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(uVar12 + 0x78);
            iVar19 = 0;
            iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
            uVar24 = uVar12;
            if (iVar6 == 0) goto code_r0x0158a900;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar20 + 0x70) != 0) {
              *(undefined8 *)(uVar12 + 0x40) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x18);
              if (*(long *)(lVar20 + 0x70) != 0) {
                *(undefined8 *)(uVar12 + 0x48) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x60);
                unaff_x27 = uVar25;
                if (*(long *)(lVar20 + 0x70) != 0) {
                  *(undefined8 *)(uVar12 + 0x50) = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x68);
                  if (*(long *)(lVar20 + 0x70) != 0) {
                    *(undefined8 *)(uVar12 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x70);
                    lVar10 = *(long *)(lVar20 + 0x70);
                    if (lVar10 != 0) {
                      *(int *)(uVar12 + 0x74) = *(int *)(lVar10 + 0x118) + -1;
                      *(undefined8 *)(uVar12 + 0x60) = *(undefined8 *)(lVar10 + 0x130);
                      if ((*(long *)(lVar20 + 0x70) != 0) && (*(long *)(lVar26 + 0x38) != 0)) {
                        unaff_x24 = *(undefined8 *)(*(long *)(lVar20 + 0x70) + 0x110);
                        lVar10 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x24,0);
                        unaff_x23 = 0;
                        if (lVar10 != 0) {
                          uVar9 = uRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar10,uVar18,(undefined1 *)((long)puVar3 + -0x68));
                          unaff_x23 = *(undefined8 *)((long)puVar3 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar19 = 0;
                          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x23,0);
                          if (iVar6 == 0) {
code_r0x0158a900:
                            if (*(long *)(uVar12 + 0xc0) == 0) {
                              unaff_x27 = uVar25;
                              if (*(long *)(lVar20 + 0x70) != 0) {
                                uVar18 = *(undefined8 *)(lVar26 + 0x88);
                                uVar14 = *(undefined8 *)(lVar26 + 0x90);
                                uVar13 = *(undefined8 *)(lVar26 + 0x38);
                                uVar7 = *(undefined4 *)(*(long *)(lVar20 + 0x70) + 0x108);
                                uVar29 = *unaff_x25;
                                uVar31 = *(undefined8 *)(uVar12 + 0x90);
                                uVar30 = *(undefined8 *)(uVar12 + 0x88);
                                *(undefined8 *)((long)puVar3 + -0xe8) =
                                     *(undefined8 *)(uVar12 + 0x80);
                                *(undefined8 *)((long)puVar3 + -0xf0) = uVar29;
                                *(undefined8 *)((long)puVar3 + -0xd8) = uVar31;
                                *(undefined8 *)((long)puVar3 + -0xe0) = uVar30;
                                uVar29 = *(undefined8 *)(uVar12 + 0x98);
                                uVar31 = *(undefined8 *)(uVar12 + 0xb0);
                                uVar30 = *(undefined8 *)(uVar12 + 0xa8);
                                *(undefined8 *)((long)puVar3 + -200) =
                                     *(undefined8 *)(uVar12 + 0xa0);
                                *(undefined8 *)((long)puVar3 + -0xd0) = uVar29;
                                *(undefined8 *)((long)puVar3 + -0xb8) = uVar31;
                                *(undefined8 *)((long)puVar3 + -0xc0) = uVar30;
                                uVar9 = 0;
                                lVar10 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar13,uVar14,uVar18,0,uVar7,
                                                    (undefined1 *)((long)puVar3 + -0xf0),0);
                                iVar19 = (int)uVar18;
                                if (lVar10 != 0) {
                                  uVar18 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar10,uRam0000000003d3ae58);
                                  *(undefined8 *)(uVar12 + 0xc0) = uVar18;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar6 = *(int *)(lVar20 + 0x2c);
                              if (iVar6 != 0) {
                                *(undefined4 *)(uVar12 + 200) = *(undefined4 *)(lVar20 + 0x28);
                                *(int *)(uVar12 + 0xcc) = iVar6;
                              }
                              unaff_x27 = uVar25;
                              if ((uVar11 != 0) && (*(long *)(lVar26 + 0x30) != 0)) {
                                uVar17 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar26 + 0x30),
                                                         *(undefined8 *)(uVar11 + 0x30),uVar12,0);
                                return uVar17;
                              }
                            }
                          }
                          else if (*(long *)(lVar20 + 0x70) != 0) {
                            uVar9 = *(ulong *)((long)puVar3 + -0x68);
                            uVar18 = *(undefined8 *)(lVar26 + 0x88);
                            uVar14 = *(undefined8 *)(lVar26 + 0x90);
                            uVar13 = *(undefined8 *)(lVar26 + 0x38);
                            uVar7 = *(undefined4 *)(*(long *)(lVar20 + 0x70) + 0x108);
                            uVar29 = *unaff_x25;
                            uVar31 = *(undefined8 *)(uVar12 + 0x90);
                            uVar30 = *(undefined8 *)(uVar12 + 0x88);
                            *(undefined8 *)((long)puVar3 + -0xa8) = *(undefined8 *)(uVar12 + 0x80);
                            *(undefined8 *)((long)puVar3 + -0xb0) = uVar29;
                            *(undefined8 *)((long)puVar3 + -0x98) = uVar31;
                            *(undefined8 *)((long)puVar3 + -0xa0) = uVar30;
                            uVar29 = *(undefined8 *)(uVar12 + 0x98);
                            uVar31 = *(undefined8 *)(uVar12 + 0xb0);
                            uVar30 = *(undefined8 *)(uVar12 + 0xa8);
                            *(undefined8 *)((long)puVar3 + -0x88) = *(undefined8 *)(uVar12 + 0xa0);
                            *(undefined8 *)((long)puVar3 + -0x90) = uVar29;
                            *(undefined8 *)((long)puVar3 + -0x78) = uVar31;
                            *(undefined8 *)((long)puVar3 + -0x80) = uVar30;
                            lVar10 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar13,uVar14,uVar18,uVar9,uVar7,
                                                (undefined1 *)((long)puVar3 + -0xb0),0);
                            iVar19 = (int)uVar18;
                            if (lVar10 != 0) {
                              uVar18 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar10,uRam0000000003d3ae58);
                              *(undefined8 *)(uVar12 + 0xc0) = uVar18;
                              goto code_r0x0158a900;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar33 = func_0x00f78af4();
  uVar25 = auVar33._8_8_;
  *(undefined1 **)((long)puVar3 + -0x100) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar10 = *(long *)(auVar33._0_8_ + 0xa8);
  if (lVar10 != 0) {
    pppppuVar27 = *(undefined8 ******)((long)puVar3 + -0x100);
    puVar28 = *(undefined **)((long)puVar3 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)((long)puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar4 + -0x38) = unaff_x23;
    *(ulong *)((long)puVar4 + -0x30) = uVar24;
    *(ulong *)((long)puVar4 + -0x28) = uVar17;
    *(long *)((long)puVar4 + -0x20) = auVar34._8_8_;
    *(long *)((long)puVar4 + -0x18) = auVar34._0_8_;
    *(undefined8 ******)((long)puVar4 + -0x10) = pppppuVar27;
    *(undefined **)((long)puVar4 + -8) = puVar28;
    *(undefined8 *)((long)puVar4 + -0x50) = 0;
    *(undefined8 *)((long)puVar4 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar10,uVar25,(undefined1 *)((long)puVar4 + -0x50));
    lVar26 = *(long *)((long)puVar4 + -0x50);
    if (lVar26 != 0) {
      if (*(long *)(lVar10 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar10 + 0x18) = lVar26;
      *(undefined8 *)(lVar10 + 0x20) = uVar25;
      lVar20 = lVar26;
      if ((iVar19 != 0) && (plVar8 = *(long **)(lVar26 + 0x68), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        lVar20 = *(long *)(lVar10 + 0x18);
        if (*(long *)(lVar10 + 0x18) == 0) {
          func_0x00f78af4();
          lVar20 = lVar26;
        }
      }
      *(ulong *)(lVar20 + 0x70) = uVar9;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar26 != 0);
  }
  auVar33 = func_0x00f78af4();
  lVar10 = auVar33._0_8_;
  *(undefined8 *)((long)puVar3 + -0x160) = unaff_x28;
  *(undefined8 *)((long)puVar3 + -0x158) = unaff_x27;
  *(undefined8 *)((long)puVar3 + -0x150) = unaff_x26;
  *(undefined8 **)((long)puVar3 + -0x148) = unaff_x25;
  *(undefined8 *)((long)puVar3 + -0x140) = unaff_x24;
  *(undefined8 *)((long)puVar3 + -0x138) = unaff_x23;
  *(ulong *)((long)puVar3 + -0x130) = uVar24;
  *(ulong *)((long)puVar3 + -0x128) = uVar17;
  *(long *)((long)puVar3 + -0x120) = lVar20;
  *(long *)((long)puVar3 + -0x118) = lVar26;
  *(undefined1 **)((long)puVar3 + -0x110) = (undefined1 *)((long)puVar3 + -0x100);
  *(undefined **)((long)puVar3 + -0x108) = &Atlas_FrontEnd_FrontEndContext__TryFixSavedLoadout;
  if ((bRam0000000003eb50ef & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d336f0);
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d336f8);
    func_0x00f78a20(0x3d33700);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3d860);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb50ef = 1;
  }
  *(undefined8 *)((long)puVar3 + -0x170) = 0;
  *(undefined8 *)((long)puVar3 + -0x188) = 0;
  *(undefined8 *)((long)puVar3 + -400) = 0;
  *(undefined8 *)((long)puVar3 + -0x178) = 0;
  *(undefined8 *)((long)puVar3 + -0x180) = 0;
  *(undefined8 *)((long)puVar3 + -0x198) = 0;
  *(undefined8 *)((long)puVar3 + -0x1b0) = 0;
  *(undefined8 *)((long)puVar3 + -0x1a8) = 0;
  *(undefined8 *)((long)puVar3 + -0x1a0) = 0;
  *(undefined4 *)((long)puVar3 + -0x1b8) = 0;
  lVar26 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar26,uRam0000000003d3a498);
  if ((*(long *)(lVar10 + 0x80) != 0) &&
     (lVar20 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar10 + 0x80),0), lVar20 != 0)) {
    *(long *)((long)puVar3 + -0x238) = auVar33._8_8_;
    if (*(long *)(lVar20 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084((undefined1 *)((long)puVar3 + -0x1e8),*(long *)(lVar20 + 0x50),
                      uRam0000000003d3d860);
      *(undefined8 *)((long)puVar3 + -0x188) = *(undefined8 *)((long)puVar3 + -0x1e0);
      *(undefined8 *)((long)puVar3 + -400) = *(undefined8 *)((long)puVar3 + -0x1e8);
      *(undefined8 *)((long)puVar3 + -0x178) = *(undefined8 *)((long)puVar3 + -0x1d0);
      *(undefined8 *)((long)puVar3 + -0x180) = *(undefined8 *)((long)puVar3 + -0x1d8);
      *(undefined8 *)((long)puVar3 + -0x170) = *(undefined8 *)((long)puVar3 + -0x1c8);
code_r0x0158ab4c:
      uVar17 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0((undefined1 *)((long)puVar3 + -400),uRam0000000003d336f8);
      if ((uVar17 & 1) != 0) {
        if (*(long *)(lVar10 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar25 = *(undefined8 *)((long)puVar3 + -0x180);
          uVar18 = *(undefined8 *)((long)puVar3 + -0x170);
          lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
          if (lVar20 == 0) {
            func_0x00f78af4(uVar14,uVar14);
          }
          else {
            uVar17 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar20,uVar14,0);
            if ((uVar17 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar10 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar20 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
              if (lVar20 == 0) {
                func_0x00f78af4(uVar14,uVar14);
              }
              else {
                uVar17 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar20,uVar14,(undefined1 *)((long)puVar3 + -0x198),
                                         uRam0000000003d574f0);
                if ((uVar17 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar10 + 0x90) != 0) {
                  uVar17 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar10 + 0x90),
                                           *(undefined8 *)((long)puVar3 + -0x198),0);
                  if ((uVar17 & 1) == 0) goto code_r0x0158ac28;
                  if (*(long *)(lVar10 + 0x88) != 0) goto code_r0x0158ac18;
                  goto code_r0x0158ad68;
                }
                func_0x00f78af4();
              }
            }
          }
        }
        goto code_r0x0158ad6c;
      }
      /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$Dispose*/ func_0x01f831cc((undefined1 *)((long)puVar3 + -400),uRam0000000003d336f0);
      *(undefined4 *)((long)puVar3 + -0x1b8) = 0;
      if (lVar26 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc((undefined1 *)((long)puVar3 + -0x1b0),lVar26,uRam0000000003d3a4b8);
        while( true ) {
          uVar17 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780((undefined1 *)((long)puVar3 + -0x1b0),uRam0000000003d32418);
          if ((uVar17 & 1) == 0) {
            *(undefined4 *)((long)puVar3 + -0x1c0) = 0xf3;
            *(int *)((long)puVar3 + -0x1b8) = *(int *)((long)puVar3 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c((undefined1 *)((long)puVar3 + -0x1b0),uRam0000000003d32410);
            puVar15 = *(undefined8 **)((long)puVar3 + -0x238);
            uVar25 = *puVar15;
            uVar14 = puVar15[3];
            uVar18 = puVar15[2];
            *(undefined8 *)((long)puVar3 + -0x228) = puVar15[1];
            *(undefined8 *)((long)puVar3 + -0x230) = uVar25;
            *(undefined8 *)((long)puVar3 + -0x218) = uVar14;
            *(undefined8 *)((long)puVar3 + -0x220) = uVar18;
            uVar25 = puVar15[4];
            uVar14 = puVar15[7];
            uVar18 = puVar15[6];
            *(undefined8 *)((long)puVar3 + -0x208) = puVar15[5];
            *(undefined8 *)((long)puVar3 + -0x210) = uVar25;
            *(undefined8 *)((long)puVar3 + -0x1f8) = uVar14;
            *(undefined8 *)((long)puVar3 + -0x200) = uVar18;
            uVar17 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar10,(undefined1 *)((long)puVar3 + -0x230));
            return uVar17;
          }
          if (*(long *)(lVar10 + 0x88) == 0) break;
          /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(*(long *)(lVar10 + 0x88),*(undefined8 *)((long)puVar3 + -0x1a0),
                          *(undefined8 *)((long)puVar3 + -0x1a0),0);
        }
        func_0x00f78af4();
        goto code_r0x0158ad6c;
      }
    }
  }
  func_0x00f78af4();
code_r0x0158ad68:
  func_0x00f78af4();
code_r0x0158ad6c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x158ad70);
  (*pcVar2)();
code_r0x0158ac18:
  uVar17 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar10 + 0x88),uVar18,0);
  if ((uVar17 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar25,0);
    if (lVar26 == 0) {
      func_0x00f78af4(uVar25,uVar25);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar26,uVar25,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x15904e4 | Atlas.Contexts.FrontEndContextSettingsState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextSettingsState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// ============================================================
// RVA: 0x15904ec | Atlas.Contexts.FrontEndContextSettingsState.OnEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15904f8 | Atlas.Contexts.FrontEndContextSettingsState.ShowSettingsScreen
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1590830 | Atlas.Contexts.FrontEndContextSettingsState.ShowCreditsScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0150c674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01507264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x01507280) */
/* WARNING: Removing unreachable block (ram,0x01507294) */
/* WARNING: Removing unreachable block (ram,0x015072a8) */
/* WARNING: Removing unreachable block (ram,0x015072b8) */
/* WARNING: Removing unreachable block (ram,0x015072c0) */
/* WARNING: Removing unreachable block (ram,0x015072cc) */
/* WARNING: Removing unreachable block (ram,0x015072e0) */
/* WARNING: Removing unreachable block (ram,0x015072e4) */
/* WARNING: Removing unreachable block (ram,0x015072ec) */
/* WARNING: Removing unreachable block (ram,0x01507300) */
/* WARNING: Removing unreachable block (ram,0x01507310) */
/* WARNING: Removing unreachable block (ram,0x01507314) */
/* WARNING: Removing unreachable block (ram,0x0150731c) */
/* WARNING: Removing unreachable block (ram,0x01507328) */
/* WARNING: Removing unreachable block (ram,0x0150733c) */
/* WARNING: Removing unreachable block (ram,0x01507340) */
/* WARNING: Removing unreachable block (ram,0x01507348) */
/* WARNING: Removing unreachable block (ram,0x0150735c) */
/* WARNING: Removing unreachable block (ram,0x0150736c) */
/* WARNING: Removing unreachable block (ram,0x01507370) */
/* WARNING: Removing unreachable block (ram,0x01507378) */
/* WARNING: Removing unreachable block (ram,0x01507384) */
/* WARNING: Removing unreachable block (ram,0x01507400) */
/* WARNING: Removing unreachable block (ram,0x01507398) */
/* WARNING: Removing unreachable block (ram,0x0150739c) */
/* WARNING: Removing unreachable block (ram,0x015073a4) */
/* WARNING: Removing unreachable block (ram,0x015073d4) */
/* WARNING: Removing unreachable block (ram,0x01507268) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c678) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextSettingsState__ShowCreditsScreen(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar11;
  undefined8 ******ppppppuVar18;
  long lVar19;
  long lVar20;
  undefined8 *****pppppuVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ushort *puVar26;
  undefined4 uVar27;
  undefined2 *puVar28;
  long unaff_x19;
  long unaff_x20;
  long lVar29;
  ulong uVar30;
  undefined8 unaff_x21;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined8 *******unaff_x22;
  int *piVar33;
  undefined8 unaff_x23;
  undefined8 uVar34;
  long unaff_x24;
  long lVar35;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar36;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *unaff_x30;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  int aiStack_580 [202];
  undefined8 *****pppppuStack_258;
  undefined8 ******ppppppuStack_250;
  long lStack_248;
  undefined8 ******ppppppuStack_240;
  long lStack_238;
  undefined8 ******ppppppuStack_230;
  ulong uStack_228;
  undefined8 *******pppppppuStack_220;
  undefined *puStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  long lStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 uStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5143 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56cb8);
    func_0x00f78a20(0x3d26dc0);
    bRam0000000003eb5143 = 1;
  }
  lVar29 = *(long *)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar31 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xe8);
  ppppppuVar18 = (undefined8 ******)func_0x00f78aec(/*Atlas.UI.Screens.CreditsScreen.TransitionData_TypeInfo*/ uRam0000000003d26dc0);
  /*Atlas.UI.Screens.CreditsScreen.TransitionData$$.ctor*/ func_0x0154a838(ppppppuVar18,0);
  uVar34 = unaff_x23;
  lVar35 = unaff_x24;
  if ((ppppppuVar18 == (undefined8 ******)0x0) ||
     (ppppppuVar18[2] = *(undefined8 ******)(param_1 + 0xf0), lVar29 == 0)) {
LAB_01590958:
    lVar19 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_FrontEndContextSettingsState__ShowLicenseScreen;
    lStack_80 = lVar35;
    uStack_78 = uVar34;
    ppppppuStack_70 = ppppppuVar18;
    uStack_68 = uVar31;
    lStack_60 = lVar29;
    lStack_58 = param_1;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5144 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56cc0);
      func_0x00f78a20(0x3d27fe0);
      bRam0000000003eb5144 = 1;
    }
    lVar29 = *(long *)(lVar19 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar31 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108);
    ppppppuVar18 = (undefined8 ******)func_0x00f78aec(/*Atlas.UI.Screens.LicenseScreen.TransitionData_TypeInfo*/ uRam0000000003d27fe0);
    /*Atlas.UI.Screens.LicenseScreen.TransitionData$$.ctor*/ func_0x0155dd20(ppppppuVar18,0);
    if ((ppppppuVar18 != (undefined8 ******)0x0) &&
       (ppppppuVar18[2] = *(undefined8 ******)(lVar19 + 0xf0), lVar29 != 0)) {
      uVar34 = 0x3d29000;
      lVar35 = 0x3d56000;
      /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar29,uVar31,0,ppppppuVar18,0);
      uVar30 = *(ulong *)(lVar19 + 0x88);
      uVar31 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar31,lVar19,uRam0000000003d56cc0,0);
      lVar29 = 0;
      if (uVar30 != 0) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = lStack_58;
        unaff_x20 = lStack_60;
        unaff_x21 = uStack_68;
        unaff_x22 = (undefined8 *******)ppppppuStack_70;
        unaff_x23 = uStack_78;
        unaff_x24 = lStack_80;
        unaff_x29 = pppppppuStack_50;
        unaff_x30 = puStack_48;
        goto Atlas_UI_TopBarManager__SetButtonFunc;
      }
    }
    lVar20 = func_0x00f78af4();
    puStack_88 = &Atlas_Contexts_FrontEndContextSettingsState__ShowSaveGameScreen;
    lStack_c0 = lVar35;
    uStack_b8 = uVar34;
    ppppppuStack_b0 = ppppppuVar18;
    uStack_a8 = uVar31;
    lStack_a0 = lVar29;
    lStack_98 = lVar19;
    pppppppuStack_90 = &pppppppuStack_50;
    if ((bRam0000000003eb5145 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56cd8);
      func_0x00f78a20(0x3d56cc8);
      func_0x00f78a20(0x3d28ad8);
      func_0x00f78a20(0x3d28ae0);
      bRam0000000003eb5145 = 1;
    }
    lVar29 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.TransitionData_TypeInfo*/ uRam0000000003d28ae0);
    /*Atlas.UI.Screens.SaveGameScreen.TransitionData$$.ctor*/ func_0x015670e8(lVar29,0);
    uVar34 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.SoftReboot_TypeInfo*/ uRam0000000003d28ad8);
    /*Atlas.UI.Screens.SaveGameScreen.SoftReboot$$.ctor*/ func_0x01567074(uVar34,lVar20,uRam0000000003d56cd8,0);
    if (lVar29 != 0) {
      *(undefined8 *)(lVar29 + 0x10) = uVar34;
      lVar35 = *(long *)(lVar20 + 0x80);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar35 != 0) {
        /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar35,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),0,
                        lVar29,0);
        uVar30 = *(ulong *)(lVar20 + 0x88);
        uVar31 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar31,lVar20,uRam0000000003d56cc8,0);
        if (uVar30 != 0) {
          register0x00000008 = (BADSPACEBASE *)&lStack_80;
          unaff_x19 = lStack_98;
          unaff_x20 = lStack_a0;
          unaff_x21 = uStack_a8;
          unaff_x22 = (undefined8 *******)ppppppuStack_b0;
          unaff_x23 = uStack_b8;
          unaff_x24 = lStack_c0;
          unaff_x29 = pppppppuStack_90;
          unaff_x30 = puStack_88;
          goto Atlas_UI_TopBarManager__SetButtonFunc;
        }
      }
    }
    lVar35 = func_0x00f78af4();
    puStack_c8 = &Atlas_Contexts_FrontEndContextSettingsState__ShowSupportLink;
    lVar19 = *(long *)(lVar35 + 0xd0);
    lVar20 = *(long *)(lVar35 + 0xb8);
    pppppppuStack_d0 = &pppppppuStack_90;
    lVar29 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
    unaff_x22 = *(undefined8 ********)(lVar35 + 0xc0);
    lVar35 = *(long *)(lVar35 + 200);
    uStack_130 = *(undefined8 *)PTR_03a5d648;
    ppppppuVar18 = (undefined8 ******)0x3d24dd8;
    if ((bRam0000000003eb4d20 & 1) == 0) {
      func_0x00f78a20(0x3d21628);
      func_0x00f78a20(0x3d21940);
      func_0x00f78a20(0x3d24dd8);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d7c7e0);
      func_0x00f78a20(0x3d677f8);
      func_0x00f78a20(0x3d698a8);
      func_0x00f78a20(0x3d77ca8);
      func_0x00f78a20(0x3d68648);
      func_0x00f78a20(0x3d66860);
      func_0x00f78a20(0x3d67c70);
      func_0x00f78a20(0x3d6f2d8);
      func_0x00f78a20(0x3d67140);
      func_0x00f78a20(0x3d70148);
      func_0x00f78a20(0x3d68458);
      func_0x00f78a20(0x3d7a498);
      func_0x00f78a20(0x3d717b0);
      func_0x00f78a20(0x3d6f2d0);
      func_0x00f78a20(0x3d6f758);
      func_0x00f78a20(0x3d6f798);
      bRam0000000003eb4d20 = 1;
    }
    uVar30 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
    /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar30,0x800,0);
    lVar14 = /*UnityEngine.iOS.Device$$get_systemVersion*/ func_0x0322ccd8(0);
    if (lVar14 == 0) {
code_r0x015073f4:
      func_0x00f78af4();
      uVar34 = func_0x00f78b24();
      func_0x00f78ac0(uVar34,0);
      puVar38 = &Atlas_SupportEmail__EscapeURL;
      lVar14 = ___stack_chk_fail();
    }
    else {
      ppppppuVar18 = (undefined8 ******)/*System.String$$StartsWith*/ func_0x029ce8f8(lVar14,/*STR('14.')*/ uRam0000000003d677f8,0);
      if ((int)ppppppuVar18 != 0) {
        if (uVar30 == 0) goto code_r0x015073f4;
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('<html>')*/ uRam0000000003d68458,0);
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      }
      if ((lVar19 == 0) || (uVar34 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar19,/*STR('MESSAGE_BODY_SUPPORT_EMAIL')*/ uRam0000000003d6f758,0), uVar30 == 0))
      goto code_r0x015073f4;
      unaff_x26 = 0x3d67000;
      unaff_x27 = 0x3d69000;
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('------------')*/ uRam0000000003d67140,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('Build: ')*/ uRam0000000003d698a8,0);
      if (lVar29 == 0) goto code_r0x015073f4;
      unaff_x26 = 0x3d71000;
      uVar34 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(lVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('Quality settings: ')*/ uRam0000000003d717b0,0);
      if (lVar20 == 0) goto code_r0x015073f4;
      lVar29 = 0x3d6f000;
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar30,*(undefined4 *)(lVar20 + 0x18),0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('Last session id: ')*/ uRam0000000003d6f2d8,0);
      if (lVar35 == 0) goto code_r0x015073f4;
      lVar29 = 0x3d21000;
      unaff_x26 = 0x3d6f000;
      /*Atlas.Networking.Network$$GetLastSessionId*/ func_0x0149e458(&uStack_170,lVar35,0);
      uStack_1a8 = uStack_168;
      uStack_1b0 = uStack_170;
      uStack_198 = uStack_158;
      uStack_1a0 = uStack_160;
      uStack_188 = uStack_148;
      uStack_190 = uStack_150;
      uStack_178 = uStack_138;
      uStack_180 = uStack_140;
      uVar34 = func_0x00f78ae0(/*Unity.Collections.FixedString64Bytes_TypeInfo*/ uRam0000000003d21940,&uStack_1b0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar30,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('Last network error: ')*/ uRam0000000003d6f2d0,0);
      if ((unaff_x22 == (undefined8 *******)0x0) ||
         (pppppuVar15 = unaff_x22[6], pppppuVar15 == (undefined8 *****)0x0)) goto code_r0x015073f4;
      unaff_x27 = 0x3d70000;
      unaff_x28 = 0x3d7c000;
      unaff_x22 = (undefined8 *******)0x3d77ca8;
      unaff_x26 = 0x3d6f798;
      lVar29 = 0x3d1f498;
      uStack_1b1 = (*(code *)(*pppppuVar15)[0x37])(pppppuVar15,(*pppppuVar15)[0x38]);
      uVar34 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1b1);
      /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar30,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('Native resolution: ')*/ uRam0000000003d70148,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar30,*(undefined4 *)(lVar20 + 0x74),0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('x')*/ uRam0000000003d7c7e0,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar30,*(undefined4 *)(lVar20 + 0x78),0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      uVar34 = /*Core.Settings.DeviceQualitySettings$$GenerateDeviceSpecsString*/ func_0x0168bb30(0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar30,0);
      if ((int)ppppppuVar18 != 0) {
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar30,/*STR('</html>')*/ uRam0000000003d67c70,0);
      }
      lVar35 = /*STR('arcade-support@electricsquare.com')*/ lRam0000000003d77ca8;
      lVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar19,/*STR('MESSAGE_TITLE_SUPPORT_EMAIL')*/ uRam0000000003d6f798,0);
      puVar38 = &UNK_01507268;
    }
    lStack_1e0 = lVar20;
    lStack_1d8 = lVar19;
    pppppppuStack_1d0 = &pppppppuStack_d0;
    puStack_1c8 = puVar38;
    if ((bRam0000000003eb4d21 & 1) == 0) {
      func_0x00f78a20(0x3d667f0);
      func_0x00f78a20(0x3d66fb0);
      func_0x00f78a20(0x3d667d8);
      func_0x00f78a20(0x3d667e8);
      func_0x00f78a20(0x3d667e0);
      bRam0000000003eb4d21 = 1;
    }
    pppppuVar15 = (undefined8 *****)/*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(lVar14,0);
    lVar20 = /*STR('+')*/ lRam0000000003d66fb0;
    lVar19 = /*STR('%20')*/ lRam0000000003d667f0;
    pppppppuStack_210 = unaff_x22;
    puStack_208 = (undefined *)uVar30;
    lStack_1f8 = lVar14;
    pppppppuStack_1f0 = &pppppppuStack_1d0;
    if (pppppuVar15 == (undefined8 *****)0x0) {
      lVar29 = func_0x00f78af4();
      uStack_200 = 0x3eb4000;
      puStack_1e8 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
      /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
      pppppppuVar9 = &pppppppuStack_210;
      if ((bRam0000000003eb4d22 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d22 = 1;
      }
      uVar30 = *(ulong *)(lVar29 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar30,0);
      pppppppuVar37 = &pppppppuStack_1f0;
      if (iVar11 == 0) {
        uVar30 = *(ulong *)(lVar29 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar30,0);
        if (iVar11 == 0) {
          uVar30 = *(ulong *)(lVar29 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar30,0);
          if ((int)uVar17 == 0) {
            return uVar17;
          }
          lVar35 = *(long *)(lVar29 + 0x30);
          if (lVar35 == 0) goto code_r0x01507658;
          uVar34 = 0;
          pppppppuVar9 = (undefined8 *******)&lStack_1e0;
          lVar29 = lStack_1f8;
          uVar30 = uStack_200;
          puVar38 = puStack_208;
          unaff_x22 = pppppppuStack_210;
          pppppppuVar37 = pppppppuStack_1f0;
          puVar39 = puStack_1e8;
        }
        else {
          lVar35 = *(long *)(lVar29 + 0x28);
          if (lVar35 == 0) {
code_r0x01507658:
            uVar17 = func_0x00f78af4();
            lStack_238 = 0x3d23990;
            puStack_218 = &Atlas_UI_SupportedInputIconsBehaviour___ctor;
            ppppppuStack_240 = unaff_x22;
            ppppppuStack_230 = (undefined8 ******)uVar30;
            uStack_228 = lVar29;
            pppppppuStack_220 = &pppppppuStack_1f0;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar17;
          }
          uVar34 = 1;
          puVar38 = (undefined *)0x3d23990;
          puVar39 = &UNK_015075fc;
        }
      }
      else {
        lVar35 = *(long *)(lVar29 + 0x20);
        if (lVar35 == 0) goto code_r0x01507658;
        uVar34 = 1;
        pppppppuVar9 = &pppppppuStack_210;
        puVar38 = (undefined *)0x3d23990;
        puVar39 = &UNK_015075bc;
      }
code_r0x0322ef1c:
      *(undefined8 ********)((long)pppppppuVar9 + -0x30) = unaff_x22;
      *(undefined **)((long)pppppppuVar9 + -0x28) = puVar38;
      *(ulong *)((long)pppppppuVar9 + -0x20) = uVar30;
      *(long *)((long)pppppppuVar9 + -0x18) = lVar29;
      *(undefined8 ********)((long)pppppppuVar9 + -0x10) = pppppppuVar37;
      *(undefined **)((long)pppppppuVar9 + -8) = puVar39;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar30 = (*pcRam0000000003ebf4c0)(lVar35,uVar34);
      return uVar30;
    }
    if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
      uStack_200 = 0x3eb4000;
      puStack_1e8 = &UNK_015074a0;
      func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
      uVar34 = func_0x00f78aec();
      uVar31 = func_0x00f78a24(0x3d7ac78);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar34,uVar31,0);
      uVar31 = func_0x00f78a24(0x3d5db80);
      func_0x00f78ac0(uVar34,uVar31);
      pppppppuStack_220 = (undefined8 *******)0x3eb4000;
      puStack_208 = &System_Runtime_Remoting_SoapServices___cctor;
      ppppppuStack_230 = unaff_x22;
      uStack_228 = uVar30;
      puStack_218 = (undefined *)uVar34;
      pppppppuStack_210 = &pppppppuStack_1f0;
      if ((bRam0000000003eb93e7 & 1) == 0) {
        func_0x00f78a20(0x3d21d68);
        func_0x00f78a20(0x3d24ad8);
        bRam0000000003eb93e7 = 1;
      }
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      uVar30 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar34;
      return uVar30;
    }
    uStack_200 = 0x3eb4000;
    puStack_1e8 = &UNK_015074a0;
    if ((bRam0000000003eb947d & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb947d = 1;
    }
    if (lVar20 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar31 = func_0x00f78aec();
      uVar34 = func_0x00f78a24(0x3d7ac78);
      puVar23 = (undefined8 *)0x0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar31,uVar34);
    }
    else {
      if (*(int *)(lVar20 + 0x10) != 0) {
        if (*(int *)(pppppuVar15 + 2) == 0) {
          return (ulong)pppppuVar15;
        }
        if (lVar19 == 0) {
          lVar19 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        lStack_248 = *(long *)PTR_03a5d648;
        ppppppuStack_240 = (undefined8 ******)unaff_x28;
        lStack_238 = unaff_x27;
        ppppppuStack_230 = (undefined8 ******)unaff_x26;
        uStack_228 = lVar29;
        pppppppuStack_220 = (undefined8 *******)ppppppuVar18;
        puStack_218 = (undefined *)lVar35;
        if ((bRam0000000003eb947e & 1) == 0) {
          func_0x00f78a20(0x3d5db90);
          bRam0000000003eb947e = 1;
        }
        if (lVar20 == 0) {
code_r0x029d0f60:
          func_0x00f78af4();
code_r0x029d0f64:
          ___stack_chk_fail();
        }
        else {
          iVar11 = *(int *)(pppppuVar15 + 2);
          if (iVar11 < *(int *)(lVar20 + 0x10)) goto code_r0x029d0f24;
          if (*(int *)(lVar20 + 0x10) == 1) {
            if (lVar19 == 0) goto code_r0x029d0f60;
            if (*(int *)(lVar19 + 0x10) != 1) {
              (*(code *)PTR_03a5d628)();
              _bzero(aiStack_580,800);
              goto code_r0x029d0dc8;
            }
            uVar34 = /*System.String$$get_Chars*/ func_0x029c5420(lVar20,0);
            uVar12 = /*System.String$$get_Chars*/ func_0x029c5420(lVar19,0);
            if (*(long *)PTR_03a5d648 == lStack_248) {
              pppppuVar21 = pppppuVar15;
              if ((((uint)uVar34 != uVar12) && (iVar11 = *(int *)(pppppuVar15 + 2), iVar11 != 0)) &&
                 (uVar10 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(pppppuVar15,uVar34,0,iVar11), uVar10 != 0xffffffff)) {
                if ((int)uVar10 < 4) {
                  uVar10 = 0;
                }
                uVar30 = (ulong)uVar10;
                pppppuVar21 = (undefined8 *****)func_0x00f834ac(iVar11);
                if (pppppuVar21 == (undefined8 *****)0x0) {
                  lVar29 = 0;
                }
                else {
                  iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                  lVar29 = (long)pppppuVar21 + (long)iVar11;
                }
                if (uVar10 != 0) {
                  /*System.String$$CharCopy*/ func_0x029d0c3c(lVar29,(long)pppppuVar15 + 0x14U,uVar30);
                }
                lVar35 = uVar30 * 2;
                if (lVar35 + (long)*(int *)(pppppuVar15 + 2) * -2 != 0) {
                  lVar19 = (long)*(int *)(pppppuVar15 + 2) * 2 + uVar30 * -2;
                  puVar26 = (ushort *)(lVar35 + (long)pppppuVar15 + 0x14U);
                  puVar28 = (undefined2 *)(lVar35 + lVar29);
                  do {
                    uVar10 = uVar12;
                    if ((uint)*puVar26 != (uint)uVar34) {
                      uVar10 = (uint)*puVar26;
                    }
                    *puVar28 = (short)uVar10;
                    lVar19 = lVar19 + -2;
                    puVar26 = puVar26 + 1;
                    puVar28 = puVar28 + 1;
                  } while (lVar19 != 0);
                }
              }
              return (ulong)pppppuVar21;
            }
            goto code_r0x029d0f64;
          }
          (*(code *)PTR_03a5d628)();
          _bzero(aiStack_580,800);
          if (lVar19 == 0) {
            lVar29 = 0;
          }
          else {
code_r0x029d0dc8:
            iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
            lVar29 = lVar19 + iVar11;
            iVar11 = *(int *)(pppppuVar15 + 2);
          }
          if (iVar11 < 1) {
code_r0x029d0f24:
            if (*(long *)PTR_03a5d648 == lStack_248) {
              return (ulong)pppppuVar15;
            }
            goto code_r0x029d0f64;
          }
          uVar30 = 0;
          iVar13 = 0;
          piVar33 = aiStack_580;
          do {
            iVar13 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(pppppuVar15,lVar20,iVar13,iVar11 - iVar13);
            if (iVar13 < 0) break;
            if (uVar30 == 200) {
              pppppuVar15 = (undefined8 *****)/*System.String$$ReplaceFallback*/ func_0x029d104c(pppppuVar15,lVar20,lVar19,200);
              goto code_r0x029d0f24;
            }
            uVar30 = uVar30 + 1;
            *piVar33 = iVar13;
            iVar13 = *(int *)(lVar20 + 0x10) + iVar13;
            iVar11 = *(int *)(pppppuVar15 + 2);
            piVar33 = piVar33 + 1;
          } while (iVar13 < iVar11);
          if ((int)uVar30 == 0) goto code_r0x029d0f24;
          if (lVar19 == 0) {
            func_0x00f78af4();
            goto code_r0x029d1034;
          }
          lVar35 = (long)*(int *)(lVar19 + 0x10) - (long)*(int *)(lVar20 + 0x10);
          if (lVar35 != (int)lVar35) {
            uVar34 = func_0x00f78b08();
            func_0x00f78ac0(uVar34,uRam0000000003d5db90);
            goto code_r0x029d1034;
          }
          iVar11 = *(int *)(lVar19 + 0x10) - *(int *)(lVar20 + 0x10);
          lVar35 = (uVar30 & 0xffffffff) * (long)iVar11;
          if (lVar35 - (int)lVar35 == 0) {
            iVar11 = iVar11 * (int)uVar30;
            lVar35 = (long)*(int *)(pppppuVar15 + 2) + (long)iVar11;
            if (lVar35 == (int)lVar35) {
              ppppppuStack_250 = (undefined8 ******)pppppuVar15;
              pppppuVar21 = (undefined8 *****)func_0x00f834ac(iVar11 + *(int *)(pppppuVar15 + 2));
              pppppuStack_258 = pppppuVar21;
              if (pppppuVar21 == (undefined8 *****)0x0) {
                lVar35 = 0;
              }
              else {
                iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar35 = (long)pppppuVar21 + (long)iVar11;
              }
              iVar11 = 0;
              iVar13 = 0;
              piVar33 = aiStack_580;
              do {
                iVar1 = *piVar33;
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,
                                (long)pppppuVar15 + (long)iVar13 * 2 + 0x14,iVar1 - iVar13);
                iVar11 = (iVar1 - iVar13) + iVar11;
                iVar13 = *(int *)(lVar20 + 0x10) + *piVar33;
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,lVar29,*(undefined4 *)(lVar19 + 0x10));
                iVar11 = *(int *)(lVar19 + 0x10) + iVar11;
                uVar30 = uVar30 - 1;
                piVar33 = piVar33 + 1;
              } while (uVar30 != 0);
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,(long)pppppuVar15 + (long)iVar13 * 2 + 0x14,
                              *(int *)(ppppppuStack_250 + 2) - iVar13);
              pppppuVar15 = pppppuStack_258;
              goto code_r0x029d0f24;
            }
          }
        }
        uVar34 = func_0x00f78b08();
        func_0x00f78ac0(uVar34,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x29d1038);
        (*pcVar6)();
      }
      func_0x00f78a24(0x3d1fce8);
      uVar31 = func_0x00f78aec();
      uVar34 = func_0x00f78a24(0x3d7ac80);
      puVar23 = (undefined8 *)0x0;
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar31,uVar34);
    }
    uVar34 = func_0x00f78a24(0x3d5db88);
    auVar42 = func_0x00f78ac0(uVar31,uVar34);
    uVar30 = auVar42._8_8_;
    puVar32 = auVar42._0_8_;
    ppppppuStack_240 = (undefined8 ******)0x3eb9000;
    lStack_238 = lVar19;
    puStack_218 = &System_String__Remove;
    pppppppuVar9 = &pppppppuStack_220;
    uVar17 = 0x3eb9000;
    puVar24 = puVar23;
    ppppppuStack_250 = ppppppuVar18;
    lStack_248 = lVar35;
    ppppppuStack_230 = (undefined8 ******)pppppuVar15;
    uStack_228 = uVar31;
    pppppppuStack_220 = &pppppppuStack_1f0;
    if ((bRam0000000003eb9463 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9463 = 1;
    }
    iVar11 = auVar42._8_4_;
    if (iVar11 < 0) {
      uVar34 = func_0x00f78a24(0x3d72d20);
      puVar23 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar34,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar30 = func_0x00f78aec();
      uVar34 = 0x3d7b9d0;
    }
    else {
      iVar13 = (int)puVar23;
      if (iVar13 < 0) {
        uVar34 = 0x3d6b268;
      }
      else {
        if (iVar13 <= *(int *)(puVar32 + 2) - iVar11) {
          iVar13 = *(int *)(puVar32 + 2) - iVar13;
          if (iVar13 == 0) {
            return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          uVar22 = func_0x00f834ac(iVar13);
          if (uVar22 != 0) {
            /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar22 + 0x14,(undefined1 *)((long)puVar32 + 0x14),iVar11 << 1,0);
            /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar22 + 0x14 + (uVar30 & 0xffffffff) * 2,
                            (undefined1 *)((long)puVar32 + 0x14) +
                            ((ulong)puVar23 & 0xffffffff) * 2 + (uVar30 & 0xffffffff) * 2,
                            (iVar13 - iVar11) * 2,0);
            return uVar22;
          }
          goto code_r0x029cf498;
        }
        uVar34 = 0x3d6ddc0;
      }
      uVar34 = func_0x00f78a24(uVar34);
      puVar23 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar34,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar30 = func_0x00f78aec();
      uVar34 = 0x3d78638;
    }
    uVar34 = func_0x00f78a24(uVar34);
    puVar24 = puVar23;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar30,uVar34,puVar23,0);
    uVar34 = func_0x00f78a24(0x3d5db78);
    func_0x00f78ac0(uVar30,uVar34);
code_r0x029cf498:
    auVar5._8_8_ = puVar23;
    auVar5._0_8_ = uVar30;
    puVar38 = &System_String__FormatHelper;
    auVar42 = func_0x00f78af4();
    ppppppuVar18 = &ppppppuStack_250;
    do {
      lVar29 = auVar42._8_8_;
      *(ulong *)((long)ppppppuVar18 + -0x30) = uVar17;
      *(undefined8 **)((long)ppppppuVar18 + -0x28) = puVar32;
      *(undefined1 (*) [16])((long)ppppppuVar18 + -0x20) = auVar5;
      *(undefined8 ********)((long)ppppppuVar18 + -0x10) = pppppppuVar9;
      *(undefined **)((long)ppppppuVar18 + -8) = puVar38;
      if (lVar29 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar34 = func_0x00f78aec();
        auVar42._8_8_ = uVar34;
        auVar42._0_8_ = auVar5._0_8_;
        uVar31 = func_0x00f78a24(0x3d79450);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar34,uVar31,0);
        uVar31 = func_0x00f78a24(0x3d5db10);
        func_0x00f78ac0(uVar34,uVar31);
      }
      else {
        uVar12 = *(uint *)(lVar29 + 0x10);
        uVar17 = (ulong)uVar12;
        iVar11 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar24,0);
        lVar35 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar12 + iVar11 * 8,0);
        puVar32 = puVar24;
        if (lVar35 != 0) {
          uVar34 = *puVar24;
          uVar16 = puVar24[3];
          uVar31 = puVar24[2];
          *(undefined8 *)((long)ppppppuVar18 + -0x48) = puVar24[1];
          *(undefined8 *)((long)ppppppuVar18 + -0x50) = uVar34;
          *(undefined8 *)((long)ppppppuVar18 + -0x38) = uVar16;
          *(undefined8 *)((long)ppppppuVar18 + -0x40) = uVar31;
          uVar34 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar35,auVar42._0_8_,lVar29,
                                   (undefined1 *)((long)ppppppuVar18 + -0x50),0);
          uVar30 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar34,0);
          return uVar30;
        }
      }
      auVar44 = func_0x00f78af4();
      uVar30 = auVar44._0_8_;
      auVar5._8_8_ = uVar30;
      auVar5._0_8_ = auVar42._0_8_;
      puVar24 = (undefined8 *)((long)ppppppuVar18 + -0xb0);
      *(undefined1 (*) [16])((long)ppppppuVar18 + -0x70) = auVar42;
      *(undefined1 **)((long)ppppppuVar18 + -0x60) = (undefined1 *)((long)ppppppuVar18 + -0x10);
      *(undefined **)((long)ppppppuVar18 + -0x58) = &System_String__Format;
      pppppppuVar9 = (undefined8 *******)((long)ppppppuVar18 + -0x60);
      if (auVar44._8_8_ == 0) {
        uVar34 = 0x3d79450;
        if (uVar30 != 0) {
          uVar34 = 0x3d77ce0;
        }
        uVar34 = func_0x00f78a24(uVar34);
        func_0x00f78a24(0x3d1fcf0);
        uVar31 = func_0x00f78aec();
        uVar25 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar31,uVar34,0);
        uVar16 = func_0x00f78a24(0x3d5db00);
        auVar42 = func_0x00f78ac0(uVar31,uVar16);
        puVar24 = (undefined8 *)((long)ppppppuVar18 + -0x110);
        *(undefined8 *)((long)ppppppuVar18 + -0xd0) = uVar31;
        *(undefined8 *)((long)ppppppuVar18 + -200) = uVar34;
        *(undefined8 ********)((long)ppppppuVar18 + -0xc0) = pppppppuVar9;
        *(undefined **)((long)ppppppuVar18 + -0xb8) = &System_String__Format;
        pppppppuVar9 = (undefined8 *******)((long)ppppppuVar18 + -0xc0);
        *(undefined8 *)((long)ppppppuVar18 + -0xe8) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xf0) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xd8) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xe0) = 0;
        /*System.ParamsArray$$.ctor*/ func_0x0296d94c((undefined1 *)((long)ppppppuVar18 + -0xf0),uVar25,0);
        *(undefined8 *)((long)ppppppuVar18 + -0x108) = *(undefined8 *)((long)ppppppuVar18 + -0xe8);
        *(undefined8 *)((long)ppppppuVar18 + -0x110) = *(undefined8 *)((long)ppppppuVar18 + -0xf0);
        *(undefined8 *)((long)ppppppuVar18 + -0xf8) = *(undefined8 *)((long)ppppppuVar18 + -0xd8);
        *(undefined8 *)((long)ppppppuVar18 + -0x100) = *(undefined8 *)((long)ppppppuVar18 + -0xe0);
        puVar38 = &UNK_029cf658;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + -0x110);
        auVar5 = auVar42;
      }
      else {
        *(undefined8 *)((long)ppppppuVar18 + -0x88) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x90) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x78) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x80) = 0;
        /*System.ParamsArray$$.ctor*/ func_0x0296dae8((undefined1 *)((long)ppppppuVar18 + -0x90),auVar44._8_8_,0);
        *(undefined8 *)((long)ppppppuVar18 + -0xa8) = *(undefined8 *)((long)ppppppuVar18 + -0x88);
        *(undefined8 *)((long)ppppppuVar18 + -0xb0) = *(undefined8 *)((long)ppppppuVar18 + -0x90);
        *(undefined8 *)((long)ppppppuVar18 + -0x98) = *(undefined8 *)((long)ppppppuVar18 + -0x78);
        *(undefined8 *)((long)ppppppuVar18 + -0xa0) = *(undefined8 *)((long)ppppppuVar18 + -0x80);
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar30;
        auVar42 = auVar44 << 0x40;
        puVar38 = &UNK_029cf5a8;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + -0xb0);
      }
    } while( true );
  }
  uVar34 = 0x3d29000;
  lVar35 = 0x3d56000;
  /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar29,uVar31,0,ppppppuVar18,0);
  uVar30 = *(ulong *)(param_1 + 0x88);
  uVar31 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar31,param_1,uRam0000000003d56cb8,0);
  lVar29 = 0;
  if (uVar30 == 0) goto LAB_01590958;
Atlas_UI_TopBarManager__SetButtonFunc:
  auVar43._8_8_ = unaff_x19;
  auVar43._0_8_ = unaff_x20;
  uVar34 = 0;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar29 = *(long *)(uVar30 + 0x30);
  if (lVar29 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar29 + 0x18) != 0) {
    *(undefined8 *)(lVar29 + 0x20) = uVar31;
    return uVar30;
  }
  uVar16 = func_0x00f78b24();
  auVar42 = func_0x00f78ac0(uVar16,0);
  auVar2._8_8_ = auVar42._8_8_;
  auVar2._0_8_ = unaff_x20;
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) = &Atlas_UI_TopBarManager__ButtonPressed;
  puVar36 = (undefined1 *)((long)register0x00000008 + -0x20);
  lVar29 = *(long *)(auVar42._0_8_ + 0x30);
  if (lVar29 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar12 = auVar42._8_4_;
    auVar43 = auVar2;
    if (uVar12 < *(uint *)(lVar29 + 0x18)) {
      lVar29 = *(long *)(lVar29 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar29 == 0) {
        uVar30 = 0;
        if (8 < uVar12) {
          return 0;
        }
        uVar10 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar12 & 0x1f) & uVar10) == 0) {
          return uVar30;
        }
      }
      else {
        uVar30 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar29,0);
        if ((uVar12 != 0) || ((uVar30 & 1) == 0)) {
          if (8 < uVar12) {
            return uVar30;
          }
          uVar10 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar29 = *(long *)(auVar42._0_8_ + 0x28);
      auVar45._8_4_ = uVar12;
      auVar45._0_8_ = lVar29;
      auVar43 = auVar42;
      if (lVar29 != 0) {
        uVar31 = 0;
        uVar34 = 1;
        puVar36 = *(undefined1 **)((long)register0x00000008 + -0x20);
        puVar39 = *(undefined **)((long)register0x00000008 + -0x18);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x10);
        auVar43 = *(undefined1 (*) [16])((long)register0x00000008 + -0x30);
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar16 = func_0x00f78b24();
  puVar39 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar45 = func_0x00f78ac0(uVar16,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar34;
  auVar4._0_8_ = auVar45._0_8_;
  auVar3._8_8_ = uVar34;
  auVar3._0_8_ = auVar45._0_8_;
  if (auVar45._8_4_ < 9) {
    uVar30 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar45._8_4_ * 4);
    auVar4 = auVar3;
  }
  else {
    uVar30 = 0xffffffff;
  }
  do {
    puVar38 = auVar4._0_8_;
    uVar17 = auVar43._8_8_;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar43;
    *(undefined1 **)(puVar7 + -0x10) = puVar36;
    *(undefined **)(puVar7 + -8) = puVar39;
    uVar12 = (uint)uVar30;
    if (uVar12 == 0xffffffff) {
      return (ulong)puVar38;
    }
    lVar29 = *(long *)((long)puVar38 + 0x70);
    if (lVar29 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar17 = uVar30;
      if (uVar12 < *(uint *)(lVar29 + 0x18)) {
        uVar27 = 2;
        if ((int)uVar31 == 0) {
          uVar27 = 0;
        }
        *(undefined4 *)(lVar29 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar27;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar38,uVar30);
        }
        *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(long *)(puVar7 + -0x48) = unaff_x25;
        *(long *)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar7 + -0x38) = unaff_x23;
        *(undefined8 ********)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        lVar29 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar35 = *(long *)((long)puVar38 + 0x70);
        if (lVar35 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar35 + 0x18) <= uVar12) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar12;
        lVar35 = lVar35 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar35 + 0x20);
        unaff_x22 = *(undefined8 ********)(lVar35 + 0x28);
        uVar34 = *(undefined8 *)(lVar35 + 0x30);
        uVar16 = *(undefined8 *)(lVar35 + 0x48);
        uVar31 = *(undefined8 *)(lVar35 + 0x40);
        *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(lVar35 + 0x38);
        *(undefined8 *)(puVar7 + -0xf0) = uVar34;
        *(undefined8 *)(puVar7 + -0xd8) = uVar16;
        *(undefined8 *)(puVar7 + -0xe0) = uVar31;
        lVar29 = *(long *)(lVar35 + 0x50);
        iVar11 = *(int *)(lVar35 + 0x58);
        iVar13 = *(int *)(lVar35 + 0x5c);
        unaff_x23 = *(undefined8 *)(lVar35 + 0x60);
        unaff_x24 = *(long *)(lVar35 + 0x68);
        uVar34 = *(undefined8 *)(lVar35 + 0x70);
        *(undefined8 *)(puVar7 + -0xf8) = *(undefined8 *)(lVar35 + 0x78);
        *(undefined8 *)(puVar7 + -0x100) = uVar34;
        if (iVar13 == iVar11) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar29,0,0);
          if ((int)uVar17 == 0) {
            return uVar17;
          }
          if (lVar29 != 0) {
            uVar30 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar29,iVar11 == 2,0);
            return uVar30;
          }
        }
        else if (iVar11 == 2) {
          if (iVar13 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar31 = *(undefined8 *)(lVar35 + 0x38);
            uVar34 = *(undefined8 *)(lVar35 + 0x30);
            uVar25 = *(undefined8 *)(lVar35 + 0x48);
            uVar16 = *(undefined8 *)(lVar35 + 0x40);
            *(undefined8 *)(puVar7 + -0x118) = uVar31;
            *(undefined8 *)(puVar7 + -0x120) = uVar34;
            *(undefined8 *)(puVar7 + -0x108) = uVar25;
            *(undefined8 *)(puVar7 + -0x110) = uVar16;
            uVar41 = *(undefined8 *)(lVar35 + 0x78);
            uVar40 = *(undefined8 *)(lVar35 + 0x70);
            *(undefined8 *)(puVar7 + -0x128) = uVar41;
            *(undefined8 *)(puVar7 + -0x130) = uVar40;
            *(undefined8 *)(puVar7 + -200) = unaff_x26;
            *(undefined8 ********)(puVar7 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xb0) = uVar31;
            *(undefined8 *)(puVar7 + -0xb8) = uVar34;
            *(undefined8 *)(puVar7 + -0xa0) = uVar25;
            *(undefined8 *)(puVar7 + -0xa8) = uVar16;
            *(long *)(puVar7 + -0x98) = lVar29;
            *(undefined8 *)(puVar7 + -0x90) = _UNK_033f8620;
            *(undefined8 *)(puVar7 + -0x88) = unaff_x23;
            *(long *)(puVar7 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar7 + -0x70) = uVar41;
            *(undefined8 *)(puVar7 + -0x78) = uVar40;
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(unaff_x24,puVar7 + -200,uRam0000000003d2a408);
            iVar11 = 1;
          }
          else {
            iVar11 = 2;
          }
code_r0x0150c72c:
          lVar35 = *(long *)((long)puVar38 + 0x70);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= uVar12) goto code_r0x0150c7d8;
            lVar35 = lVar35 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar35 + 0x20) = unaff_x26;
            *(undefined8 ********)(lVar35 + 0x28) = unaff_x22;
            uVar34 = *(undefined8 *)(puVar7 + -0xf0);
            uVar16 = *(undefined8 *)(puVar7 + -0xd8);
            uVar31 = *(undefined8 *)(puVar7 + -0xe0);
            *(undefined8 *)(lVar35 + 0x38) = *(undefined8 *)(puVar7 + -0xe8);
            *(undefined8 *)(lVar35 + 0x30) = uVar34;
            *(undefined8 *)(lVar35 + 0x48) = uVar16;
            *(undefined8 *)(lVar35 + 0x40) = uVar31;
            *(long *)(lVar35 + 0x50) = lVar29;
            *(int *)(lVar35 + 0x58) = iVar11;
            *(int *)(lVar35 + 0x5c) = iVar13;
            *(undefined8 *)(lVar35 + 0x60) = unaff_x23;
            *(long *)(lVar35 + 0x68) = unaff_x24;
            uVar34 = *(undefined8 *)(puVar7 + -0x100);
            *(undefined8 *)(lVar35 + 0x78) = *(undefined8 *)(puVar7 + -0xf8);
            *(undefined8 *)(lVar35 + 0x70) = uVar34;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar11 != 0) goto code_r0x0150c72c;
          if (iVar13 != 2) {
            iVar11 = 0;
            goto code_r0x0150c72c;
          }
          if ((unaff_x22 != (undefined8 *******)0x0) &&
             (lVar35 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar35 != 0)) {
            uVar34 = 1;
            pppppppuVar9 = (undefined8 *******)(puVar7 + -0x130);
            pppppppuVar37 = (undefined8 *******)(puVar7 + -0x10);
            puVar39 = &UNK_0150c678;
            goto code_r0x0322ef1c;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar34 = func_0x00f78b24();
        auVar42 = func_0x00f78ac0(uVar34,0);
        lVar35 = auVar42._8_8_;
        *(undefined8 *)(puVar7 + -0x180) = unaff_x26;
        *(long *)(puVar7 + -0x178) = unaff_x25;
        *(long *)(puVar7 + -0x170) = unaff_x24;
        *(undefined8 *)(puVar7 + -0x168) = unaff_x23;
        *(undefined8 ********)(puVar7 + -0x160) = unaff_x22;
        *(undefined **)(puVar7 + -0x158) = puVar38;
        *(ulong *)(puVar7 + -0x150) = uVar30;
        *(long *)(puVar7 + -0x148) = lVar29;
        *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar34 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar35 + 0x18),*(undefined4 *)(lVar35 + 0x1c),
                                 *(undefined4 *)(lVar35 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar35 + 0x10),0,0);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar34,10,uRam0000000003d5e7a8);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar34,*(undefined8 *)(lVar35 + 0x58),uRam0000000003d5e6e0);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar34,1,uRam0000000003d5e888);
        uVar30 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar34,auVar42._0_8_,uRam0000000003d5e850);
        if ((uVar30 != 0) && (*(char *)(uVar30 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar30 + 0x30) = *(undefined8 *)(lVar35 + 0x10);
        }
        return uVar30;
      }
    }
    uVar34 = func_0x00f78b24();
    auVar42 = func_0x00f78ac0(uVar34,0);
    puVar8 = puVar7 + -0x30;
    puVar36 = puVar7 + -0x30;
    *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar29 = *(long *)(auVar42._0_8_ + 0x28);
    auVar43._8_8_ = auVar42._8_8_;
    auVar43._0_8_ = lVar29;
    if (lVar29 == 0) {
      puVar39 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar43 = func_0x00f78af4();
    }
    else {
      puVar8 = puVar7 + -0x20;
      puVar36 = *(undefined1 **)(puVar7 + -0x30);
      puVar39 = *(undefined **)(puVar7 + -0x28);
    }
    puVar7 = puVar8 + -0x20;
    *(undefined **)(puVar8 + -0x20) = puVar38;
    *(ulong *)(puVar8 + -0x18) = uVar17;
    *(undefined1 **)(puVar8 + -0x10) = puVar36;
    *(undefined **)(puVar8 + -8) = puVar39;
    puVar36 = puVar8 + -0x10;
    uVar30 = 4;
    uVar31 = 0;
    puVar39 = &UNK_0150bd10;
    auVar4 = auVar43;
  } while( true );
}



// ============================================================
// RVA: 0x159095c | Atlas.Contexts.FrontEndContextSettingsState.ShowLicenseScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0150c674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01507264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x01507280) */
/* WARNING: Removing unreachable block (ram,0x01507294) */
/* WARNING: Removing unreachable block (ram,0x015072a8) */
/* WARNING: Removing unreachable block (ram,0x015072b8) */
/* WARNING: Removing unreachable block (ram,0x015072c0) */
/* WARNING: Removing unreachable block (ram,0x015072cc) */
/* WARNING: Removing unreachable block (ram,0x015072e0) */
/* WARNING: Removing unreachable block (ram,0x015072e4) */
/* WARNING: Removing unreachable block (ram,0x015072ec) */
/* WARNING: Removing unreachable block (ram,0x01507300) */
/* WARNING: Removing unreachable block (ram,0x01507310) */
/* WARNING: Removing unreachable block (ram,0x01507314) */
/* WARNING: Removing unreachable block (ram,0x0150731c) */
/* WARNING: Removing unreachable block (ram,0x01507328) */
/* WARNING: Removing unreachable block (ram,0x0150733c) */
/* WARNING: Removing unreachable block (ram,0x01507340) */
/* WARNING: Removing unreachable block (ram,0x01507348) */
/* WARNING: Removing unreachable block (ram,0x0150735c) */
/* WARNING: Removing unreachable block (ram,0x0150736c) */
/* WARNING: Removing unreachable block (ram,0x01507370) */
/* WARNING: Removing unreachable block (ram,0x01507378) */
/* WARNING: Removing unreachable block (ram,0x01507384) */
/* WARNING: Removing unreachable block (ram,0x01507400) */
/* WARNING: Removing unreachable block (ram,0x01507398) */
/* WARNING: Removing unreachable block (ram,0x0150739c) */
/* WARNING: Removing unreachable block (ram,0x015073a4) */
/* WARNING: Removing unreachable block (ram,0x015073d4) */
/* WARNING: Removing unreachable block (ram,0x01507268) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c678) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextSettingsState__ShowLicenseScreen(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar11;
  undefined8 ******ppppppuVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ushort *puVar25;
  undefined4 uVar26;
  undefined2 *puVar27;
  long unaff_x19;
  long unaff_x20;
  long lVar28;
  ulong uVar29;
  undefined8 unaff_x21;
  undefined8 uVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 *******unaff_x22;
  int *piVar33;
  undefined8 unaff_x23;
  undefined8 uVar34;
  long unaff_x24;
  long lVar35;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar36;
  undefined8 ***unaff_x29;
  undefined8 *******pppppppuVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *unaff_x30;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  int aiStack_540 [202];
  undefined8 *****pppppuStack_218;
  undefined8 ******ppppppuStack_210;
  long lStack_208;
  undefined8 ******ppppppuStack_200;
  long lStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  ulong uStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined1 uStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5144 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56cc0);
    func_0x00f78a20(0x3d27fe0);
    bRam0000000003eb5144 = 1;
  }
  lVar28 = *(long *)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar30 = *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x108);
  ppppppuVar18 = (undefined8 ******)func_0x00f78aec(/*Atlas.UI.Screens.LicenseScreen.TransitionData_TypeInfo*/ uRam0000000003d27fe0);
  /*Atlas.UI.Screens.LicenseScreen.TransitionData$$.ctor*/ func_0x0155dd20(ppppppuVar18,0);
  uVar34 = unaff_x23;
  lVar35 = unaff_x24;
  if ((ppppppuVar18 == (undefined8 ******)0x0) ||
     (ppppppuVar18[2] = *(undefined8 ******)(param_1 + 0xf0), lVar28 == 0)) {
LAB_01590a84:
    lVar19 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_FrontEndContextSettingsState__ShowSaveGameScreen;
    lStack_80 = lVar35;
    uStack_78 = uVar34;
    ppppppuStack_70 = ppppppuVar18;
    uStack_68 = uVar30;
    lStack_60 = lVar28;
    lStack_58 = param_1;
    pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5145 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56cd8);
      func_0x00f78a20(0x3d56cc8);
      func_0x00f78a20(0x3d28ad8);
      func_0x00f78a20(0x3d28ae0);
      bRam0000000003eb5145 = 1;
    }
    lVar28 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.TransitionData_TypeInfo*/ uRam0000000003d28ae0);
    /*Atlas.UI.Screens.SaveGameScreen.TransitionData$$.ctor*/ func_0x015670e8(lVar28,0);
    uVar34 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.SoftReboot_TypeInfo*/ uRam0000000003d28ad8);
    /*Atlas.UI.Screens.SaveGameScreen.SoftReboot$$.ctor*/ func_0x01567074(uVar34,lVar19,uRam0000000003d56cd8,0);
    if (lVar28 != 0) {
      *(undefined8 *)(lVar28 + 0x10) = uVar34;
      lVar35 = *(long *)(lVar19 + 0x80);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar35 != 0) {
        /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar35,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),0,
                        lVar28,0);
        uVar29 = *(ulong *)(lVar19 + 0x88);
        uVar30 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar30,lVar19,uRam0000000003d56cc8,0);
        if (uVar29 != 0) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          unaff_x19 = lStack_58;
          unaff_x20 = lStack_60;
          unaff_x21 = uStack_68;
          unaff_x22 = (undefined8 *******)ppppppuStack_70;
          unaff_x23 = uStack_78;
          unaff_x24 = lStack_80;
          unaff_x29 = pppuStack_50;
          unaff_x30 = puStack_48;
          goto Atlas_UI_TopBarManager__SetButtonFunc;
        }
      }
    }
    lVar35 = func_0x00f78af4();
    puStack_88 = &Atlas_Contexts_FrontEndContextSettingsState__ShowSupportLink;
    lVar19 = *(long *)(lVar35 + 0xd0);
    lVar31 = *(long *)(lVar35 + 0xb8);
    pppppuStack_90 = (undefined8 *****)&pppuStack_50;
    lVar28 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
    unaff_x22 = *(undefined8 ********)(lVar35 + 0xc0);
    lVar35 = *(long *)(lVar35 + 200);
    uStack_f0 = *(undefined8 *)PTR_03a5d648;
    ppppppuVar18 = (undefined8 ******)0x3d24dd8;
    if ((bRam0000000003eb4d20 & 1) == 0) {
      func_0x00f78a20(0x3d21628);
      func_0x00f78a20(0x3d21940);
      func_0x00f78a20(0x3d24dd8);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d7c7e0);
      func_0x00f78a20(0x3d677f8);
      func_0x00f78a20(0x3d698a8);
      func_0x00f78a20(0x3d77ca8);
      func_0x00f78a20(0x3d68648);
      func_0x00f78a20(0x3d66860);
      func_0x00f78a20(0x3d67c70);
      func_0x00f78a20(0x3d6f2d8);
      func_0x00f78a20(0x3d67140);
      func_0x00f78a20(0x3d70148);
      func_0x00f78a20(0x3d68458);
      func_0x00f78a20(0x3d7a498);
      func_0x00f78a20(0x3d717b0);
      func_0x00f78a20(0x3d6f2d0);
      func_0x00f78a20(0x3d6f758);
      func_0x00f78a20(0x3d6f798);
      bRam0000000003eb4d20 = 1;
    }
    uVar29 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
    /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar29,0x800,0);
    lVar14 = /*UnityEngine.iOS.Device$$get_systemVersion*/ func_0x0322ccd8(0);
    if (lVar14 == 0) {
code_r0x015073f4:
      func_0x00f78af4();
      uVar34 = func_0x00f78b24();
      func_0x00f78ac0(uVar34,0);
      puVar38 = &Atlas_SupportEmail__EscapeURL;
      lVar14 = ___stack_chk_fail();
    }
    else {
      ppppppuVar18 = (undefined8 ******)/*System.String$$StartsWith*/ func_0x029ce8f8(lVar14,/*STR('14.')*/ uRam0000000003d677f8,0);
      if ((int)ppppppuVar18 != 0) {
        if (uVar29 == 0) goto code_r0x015073f4;
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('<html>')*/ uRam0000000003d68458,0);
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      }
      if ((lVar19 == 0) || (uVar34 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar19,/*STR('MESSAGE_BODY_SUPPORT_EMAIL')*/ uRam0000000003d6f758,0), uVar29 == 0))
      goto code_r0x015073f4;
      unaff_x26 = 0x3d67000;
      unaff_x27 = 0x3d69000;
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('------------')*/ uRam0000000003d67140,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('Build: ')*/ uRam0000000003d698a8,0);
      if (lVar28 == 0) goto code_r0x015073f4;
      unaff_x26 = 0x3d71000;
      uVar34 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(lVar28,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('Quality settings: ')*/ uRam0000000003d717b0,0);
      if (lVar31 == 0) goto code_r0x015073f4;
      lVar28 = 0x3d6f000;
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar29,*(undefined4 *)(lVar31 + 0x18),0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('Last session id: ')*/ uRam0000000003d6f2d8,0);
      if (lVar35 == 0) goto code_r0x015073f4;
      lVar28 = 0x3d21000;
      unaff_x26 = 0x3d6f000;
      /*Atlas.Networking.Network$$GetLastSessionId*/ func_0x0149e458(&uStack_130,lVar35,0);
      uStack_168 = uStack_128;
      uStack_170 = uStack_130;
      uStack_158 = uStack_118;
      uStack_160 = uStack_120;
      uStack_148 = uStack_108;
      uStack_150 = uStack_110;
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      uVar34 = func_0x00f78ae0(/*Unity.Collections.FixedString64Bytes_TypeInfo*/ uRam0000000003d21940,&uStack_170);
      /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar29,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('Last network error: ')*/ uRam0000000003d6f2d0,0);
      if ((unaff_x22 == (undefined8 *******)0x0) ||
         (pppppuVar15 = unaff_x22[6], pppppuVar15 == (undefined8 *****)0x0)) goto code_r0x015073f4;
      unaff_x27 = 0x3d70000;
      unaff_x28 = 0x3d7c000;
      unaff_x22 = (undefined8 *******)0x3d77ca8;
      unaff_x26 = 0x3d6f798;
      lVar28 = 0x3d1f498;
      uStack_171 = (*(code *)(*pppppuVar15)[0x37])(pppppuVar15,(*pppppuVar15)[0x38]);
      uVar34 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_171);
      /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar29,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('Native resolution: ')*/ uRam0000000003d70148,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar29,*(undefined4 *)(lVar31 + 0x74),0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('x')*/ uRam0000000003d7c7e0,0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar29,*(undefined4 *)(lVar31 + 0x78),0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      uVar34 = /*Core.Settings.DeviceQualitySettings$$GenerateDeviceSpecsString*/ func_0x0168bb30(0);
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,uVar34,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar29,0);
      if ((int)ppppppuVar18 != 0) {
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar29,/*STR('</html>')*/ uRam0000000003d67c70,0);
      }
      lVar35 = /*STR('arcade-support@electricsquare.com')*/ lRam0000000003d77ca8;
      lVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar19,/*STR('MESSAGE_TITLE_SUPPORT_EMAIL')*/ uRam0000000003d6f798,0);
      puVar38 = &UNK_01507268;
    }
    lStack_1a0 = lVar31;
    lStack_198 = lVar19;
    ppppppuStack_190 = &pppppuStack_90;
    puStack_188 = puVar38;
    if ((bRam0000000003eb4d21 & 1) == 0) {
      func_0x00f78a20(0x3d667f0);
      func_0x00f78a20(0x3d66fb0);
      func_0x00f78a20(0x3d667d8);
      func_0x00f78a20(0x3d667e8);
      func_0x00f78a20(0x3d667e0);
      bRam0000000003eb4d21 = 1;
    }
    pppppuVar15 = (undefined8 *****)/*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(lVar14,0);
    lVar31 = /*STR('+')*/ lRam0000000003d66fb0;
    lVar19 = /*STR('%20')*/ lRam0000000003d667f0;
    pppppppuStack_1d0 = unaff_x22;
    puStack_1c8 = (undefined *)uVar29;
    lStack_1b8 = lVar14;
    pppppppuStack_1b0 = &ppppppuStack_190;
    if (pppppuVar15 == (undefined8 *****)0x0) {
      lVar28 = func_0x00f78af4();
      uStack_1c0 = 0x3eb4000;
      puStack_1a8 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
      /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
      pppppppuVar9 = &pppppppuStack_1d0;
      if ((bRam0000000003eb4d22 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4d22 = 1;
      }
      uVar29 = *(ulong *)(lVar28 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar29,0);
      pppppppuVar37 = &pppppppuStack_1b0;
      if (iVar11 == 0) {
        uVar29 = *(ulong *)(lVar28 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar29,0);
        if (iVar11 == 0) {
          uVar29 = *(ulong *)(lVar28 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar29,0);
          if ((int)uVar17 == 0) {
            return uVar17;
          }
          lVar35 = *(long *)(lVar28 + 0x30);
          if (lVar35 == 0) goto code_r0x01507658;
          uVar34 = 0;
          pppppppuVar9 = (undefined8 *******)&lStack_1a0;
          lVar28 = lStack_1b8;
          uVar29 = uStack_1c0;
          puVar38 = puStack_1c8;
          unaff_x22 = pppppppuStack_1d0;
          pppppppuVar37 = pppppppuStack_1b0;
          puVar39 = puStack_1a8;
        }
        else {
          lVar35 = *(long *)(lVar28 + 0x28);
          if (lVar35 == 0) {
code_r0x01507658:
            uVar17 = func_0x00f78af4();
            lStack_1f8 = 0x3d23990;
            puStack_1d8 = &Atlas_UI_SupportedInputIconsBehaviour___ctor;
            ppppppuStack_200 = unaff_x22;
            ppppppuStack_1f0 = (undefined8 ******)uVar29;
            uStack_1e8 = lVar28;
            pppppppuStack_1e0 = &pppppppuStack_1b0;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar17;
          }
          uVar34 = 1;
          puVar38 = (undefined *)0x3d23990;
          puVar39 = &UNK_015075fc;
        }
      }
      else {
        lVar35 = *(long *)(lVar28 + 0x20);
        if (lVar35 == 0) goto code_r0x01507658;
        uVar34 = 1;
        pppppppuVar9 = &pppppppuStack_1d0;
        puVar38 = (undefined *)0x3d23990;
        puVar39 = &UNK_015075bc;
      }
code_r0x0322ef1c:
      *(undefined8 ********)((long)pppppppuVar9 + -0x30) = unaff_x22;
      *(undefined **)((long)pppppppuVar9 + -0x28) = puVar38;
      *(ulong *)((long)pppppppuVar9 + -0x20) = uVar29;
      *(long *)((long)pppppppuVar9 + -0x18) = lVar28;
      *(undefined8 ********)((long)pppppppuVar9 + -0x10) = pppppppuVar37;
      *(undefined **)((long)pppppppuVar9 + -8) = puVar39;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar29 = (*pcRam0000000003ebf4c0)(lVar35,uVar34);
      return uVar29;
    }
    if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
      uStack_1c0 = 0x3eb4000;
      puStack_1a8 = &UNK_015074a0;
      func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
      uVar34 = func_0x00f78aec();
      uVar30 = func_0x00f78a24(0x3d7ac78);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar34,uVar30,0);
      uVar30 = func_0x00f78a24(0x3d5db80);
      func_0x00f78ac0(uVar34,uVar30);
      pppppppuStack_1e0 = (undefined8 *******)0x3eb4000;
      puStack_1c8 = &System_Runtime_Remoting_SoapServices___cctor;
      ppppppuStack_1f0 = unaff_x22;
      uStack_1e8 = uVar29;
      puStack_1d8 = (undefined *)uVar34;
      pppppppuStack_1d0 = &pppppppuStack_1b0;
      if ((bRam0000000003eb93e7 & 1) == 0) {
        func_0x00f78a20(0x3d21d68);
        func_0x00f78a20(0x3d24ad8);
        bRam0000000003eb93e7 = 1;
      }
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar34;
      uVar34 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
      uVar29 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar34,0);
      *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar34;
      return uVar29;
    }
    uStack_1c0 = 0x3eb4000;
    puStack_1a8 = &UNK_015074a0;
    if ((bRam0000000003eb947d & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb947d = 1;
    }
    if (lVar31 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar30 = func_0x00f78aec();
      uVar34 = func_0x00f78a24(0x3d7ac78);
      puVar22 = (undefined8 *)0x0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar30,uVar34);
    }
    else {
      if (*(int *)(lVar31 + 0x10) != 0) {
        if (*(int *)(pppppuVar15 + 2) == 0) {
          return (ulong)pppppuVar15;
        }
        if (lVar19 == 0) {
          lVar19 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        lStack_208 = *(long *)PTR_03a5d648;
        ppppppuStack_200 = (undefined8 ******)unaff_x28;
        lStack_1f8 = unaff_x27;
        ppppppuStack_1f0 = (undefined8 ******)unaff_x26;
        uStack_1e8 = lVar28;
        pppppppuStack_1e0 = (undefined8 *******)ppppppuVar18;
        puStack_1d8 = (undefined *)lVar35;
        if ((bRam0000000003eb947e & 1) == 0) {
          func_0x00f78a20(0x3d5db90);
          bRam0000000003eb947e = 1;
        }
        if (lVar31 == 0) {
code_r0x029d0f60:
          func_0x00f78af4();
code_r0x029d0f64:
          ___stack_chk_fail();
        }
        else {
          iVar11 = *(int *)(pppppuVar15 + 2);
          if (iVar11 < *(int *)(lVar31 + 0x10)) goto code_r0x029d0f24;
          if (*(int *)(lVar31 + 0x10) == 1) {
            if (lVar19 == 0) goto code_r0x029d0f60;
            if (*(int *)(lVar19 + 0x10) != 1) {
              (*(code *)PTR_03a5d628)();
              _bzero(aiStack_540,800);
              goto code_r0x029d0dc8;
            }
            uVar34 = /*System.String$$get_Chars*/ func_0x029c5420(lVar31,0);
            uVar12 = /*System.String$$get_Chars*/ func_0x029c5420(lVar19,0);
            if (*(long *)PTR_03a5d648 == lStack_208) {
              pppppuVar20 = pppppuVar15;
              if ((((uint)uVar34 != uVar12) && (iVar11 = *(int *)(pppppuVar15 + 2), iVar11 != 0)) &&
                 (uVar10 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(pppppuVar15,uVar34,0,iVar11), uVar10 != 0xffffffff)) {
                if ((int)uVar10 < 4) {
                  uVar10 = 0;
                }
                uVar29 = (ulong)uVar10;
                pppppuVar20 = (undefined8 *****)func_0x00f834ac(iVar11);
                if (pppppuVar20 == (undefined8 *****)0x0) {
                  lVar28 = 0;
                }
                else {
                  iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                  lVar28 = (long)pppppuVar20 + (long)iVar11;
                }
                if (uVar10 != 0) {
                  /*System.String$$CharCopy*/ func_0x029d0c3c(lVar28,(long)pppppuVar15 + 0x14U,uVar29);
                }
                lVar35 = uVar29 * 2;
                if (lVar35 + (long)*(int *)(pppppuVar15 + 2) * -2 != 0) {
                  lVar19 = (long)*(int *)(pppppuVar15 + 2) * 2 + uVar29 * -2;
                  puVar25 = (ushort *)(lVar35 + (long)pppppuVar15 + 0x14U);
                  puVar27 = (undefined2 *)(lVar35 + lVar28);
                  do {
                    uVar10 = uVar12;
                    if ((uint)*puVar25 != (uint)uVar34) {
                      uVar10 = (uint)*puVar25;
                    }
                    *puVar27 = (short)uVar10;
                    lVar19 = lVar19 + -2;
                    puVar25 = puVar25 + 1;
                    puVar27 = puVar27 + 1;
                  } while (lVar19 != 0);
                }
              }
              return (ulong)pppppuVar20;
            }
            goto code_r0x029d0f64;
          }
          (*(code *)PTR_03a5d628)();
          _bzero(aiStack_540,800);
          if (lVar19 == 0) {
            lVar28 = 0;
          }
          else {
code_r0x029d0dc8:
            iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
            lVar28 = lVar19 + iVar11;
            iVar11 = *(int *)(pppppuVar15 + 2);
          }
          if (iVar11 < 1) {
code_r0x029d0f24:
            if (*(long *)PTR_03a5d648 == lStack_208) {
              return (ulong)pppppuVar15;
            }
            goto code_r0x029d0f64;
          }
          uVar29 = 0;
          iVar13 = 0;
          piVar33 = aiStack_540;
          do {
            iVar13 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(pppppuVar15,lVar31,iVar13,iVar11 - iVar13);
            if (iVar13 < 0) break;
            if (uVar29 == 200) {
              pppppuVar15 = (undefined8 *****)/*System.String$$ReplaceFallback*/ func_0x029d104c(pppppuVar15,lVar31,lVar19,200);
              goto code_r0x029d0f24;
            }
            uVar29 = uVar29 + 1;
            *piVar33 = iVar13;
            iVar13 = *(int *)(lVar31 + 0x10) + iVar13;
            iVar11 = *(int *)(pppppuVar15 + 2);
            piVar33 = piVar33 + 1;
          } while (iVar13 < iVar11);
          if ((int)uVar29 == 0) goto code_r0x029d0f24;
          if (lVar19 == 0) {
            func_0x00f78af4();
            goto code_r0x029d1034;
          }
          lVar35 = (long)*(int *)(lVar19 + 0x10) - (long)*(int *)(lVar31 + 0x10);
          if (lVar35 != (int)lVar35) {
            uVar34 = func_0x00f78b08();
            func_0x00f78ac0(uVar34,uRam0000000003d5db90);
            goto code_r0x029d1034;
          }
          iVar11 = *(int *)(lVar19 + 0x10) - *(int *)(lVar31 + 0x10);
          lVar35 = (uVar29 & 0xffffffff) * (long)iVar11;
          if (lVar35 - (int)lVar35 == 0) {
            iVar11 = iVar11 * (int)uVar29;
            lVar35 = (long)*(int *)(pppppuVar15 + 2) + (long)iVar11;
            if (lVar35 == (int)lVar35) {
              ppppppuStack_210 = (undefined8 ******)pppppuVar15;
              pppppuVar20 = (undefined8 *****)func_0x00f834ac(iVar11 + *(int *)(pppppuVar15 + 2));
              pppppuStack_218 = pppppuVar20;
              if (pppppuVar20 == (undefined8 *****)0x0) {
                lVar35 = 0;
              }
              else {
                iVar11 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar35 = (long)pppppuVar20 + (long)iVar11;
              }
              iVar11 = 0;
              iVar13 = 0;
              piVar33 = aiStack_540;
              do {
                iVar1 = *piVar33;
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,
                                (long)pppppuVar15 + (long)iVar13 * 2 + 0x14,iVar1 - iVar13);
                iVar11 = (iVar1 - iVar13) + iVar11;
                iVar13 = *(int *)(lVar31 + 0x10) + *piVar33;
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,lVar28,*(undefined4 *)(lVar19 + 0x10));
                iVar11 = *(int *)(lVar19 + 0x10) + iVar11;
                uVar29 = uVar29 - 1;
                piVar33 = piVar33 + 1;
              } while (uVar29 != 0);
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar35 + (long)iVar11 * 2,(long)pppppuVar15 + (long)iVar13 * 2 + 0x14,
                              *(int *)(ppppppuStack_210 + 2) - iVar13);
              pppppuVar15 = pppppuStack_218;
              goto code_r0x029d0f24;
            }
          }
        }
        uVar34 = func_0x00f78b08();
        func_0x00f78ac0(uVar34,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x29d1038);
        (*pcVar6)();
      }
      func_0x00f78a24(0x3d1fce8);
      uVar30 = func_0x00f78aec();
      uVar34 = func_0x00f78a24(0x3d7ac80);
      puVar22 = (undefined8 *)0x0;
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar30,uVar34);
    }
    uVar34 = func_0x00f78a24(0x3d5db88);
    auVar42 = func_0x00f78ac0(uVar30,uVar34);
    uVar29 = auVar42._8_8_;
    puVar32 = auVar42._0_8_;
    ppppppuStack_200 = (undefined8 ******)0x3eb9000;
    lStack_1f8 = lVar19;
    puStack_1d8 = &System_String__Remove;
    pppppppuVar9 = &pppppppuStack_1e0;
    uVar17 = 0x3eb9000;
    puVar23 = puVar22;
    ppppppuStack_210 = ppppppuVar18;
    lStack_208 = lVar35;
    ppppppuStack_1f0 = (undefined8 ******)pppppuVar15;
    uStack_1e8 = uVar30;
    pppppppuStack_1e0 = &pppppppuStack_1b0;
    if ((bRam0000000003eb9463 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9463 = 1;
    }
    iVar11 = auVar42._8_4_;
    if (iVar11 < 0) {
      uVar34 = func_0x00f78a24(0x3d72d20);
      puVar22 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar34,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar29 = func_0x00f78aec();
      uVar34 = 0x3d7b9d0;
    }
    else {
      iVar13 = (int)puVar22;
      if (iVar13 < 0) {
        uVar34 = 0x3d6b268;
      }
      else {
        if (iVar13 <= *(int *)(puVar32 + 2) - iVar11) {
          iVar13 = *(int *)(puVar32 + 2) - iVar13;
          if (iVar13 == 0) {
            return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          }
          uVar21 = func_0x00f834ac(iVar13);
          if (uVar21 != 0) {
            /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar21 + 0x14,(undefined1 *)((long)puVar32 + 0x14),iVar11 << 1,0);
            /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar21 + 0x14 + (uVar29 & 0xffffffff) * 2,
                            (undefined1 *)((long)puVar32 + 0x14) +
                            ((ulong)puVar22 & 0xffffffff) * 2 + (uVar29 & 0xffffffff) * 2,
                            (iVar13 - iVar11) * 2,0);
            return uVar21;
          }
          goto code_r0x029cf498;
        }
        uVar34 = 0x3d6ddc0;
      }
      uVar34 = func_0x00f78a24(uVar34);
      puVar22 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar34,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar29 = func_0x00f78aec();
      uVar34 = 0x3d78638;
    }
    uVar34 = func_0x00f78a24(uVar34);
    puVar23 = puVar22;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar29,uVar34,puVar22,0);
    uVar34 = func_0x00f78a24(0x3d5db78);
    func_0x00f78ac0(uVar29,uVar34);
code_r0x029cf498:
    auVar5._8_8_ = puVar22;
    auVar5._0_8_ = uVar29;
    puVar38 = &System_String__FormatHelper;
    auVar42 = func_0x00f78af4();
    ppppppuVar18 = &ppppppuStack_210;
    do {
      lVar28 = auVar42._8_8_;
      *(ulong *)((long)ppppppuVar18 + -0x30) = uVar17;
      *(undefined8 **)((long)ppppppuVar18 + -0x28) = puVar32;
      *(undefined1 (*) [16])((long)ppppppuVar18 + -0x20) = auVar5;
      *(undefined8 ********)((long)ppppppuVar18 + -0x10) = pppppppuVar9;
      *(undefined **)((long)ppppppuVar18 + -8) = puVar38;
      if (lVar28 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar34 = func_0x00f78aec();
        auVar42._8_8_ = uVar34;
        auVar42._0_8_ = auVar5._0_8_;
        uVar30 = func_0x00f78a24(0x3d79450);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar34,uVar30,0);
        uVar30 = func_0x00f78a24(0x3d5db10);
        func_0x00f78ac0(uVar34,uVar30);
      }
      else {
        uVar12 = *(uint *)(lVar28 + 0x10);
        uVar17 = (ulong)uVar12;
        iVar11 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar23,0);
        lVar35 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar12 + iVar11 * 8,0);
        puVar32 = puVar23;
        if (lVar35 != 0) {
          uVar34 = *puVar23;
          uVar16 = puVar23[3];
          uVar30 = puVar23[2];
          *(undefined8 *)((long)ppppppuVar18 + -0x48) = puVar23[1];
          *(undefined8 *)((long)ppppppuVar18 + -0x50) = uVar34;
          *(undefined8 *)((long)ppppppuVar18 + -0x38) = uVar16;
          *(undefined8 *)((long)ppppppuVar18 + -0x40) = uVar30;
          uVar34 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar35,auVar42._0_8_,lVar28,
                                   (undefined1 *)((long)ppppppuVar18 + -0x50),0);
          uVar29 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar34,0);
          return uVar29;
        }
      }
      auVar44 = func_0x00f78af4();
      uVar29 = auVar44._0_8_;
      auVar5._8_8_ = uVar29;
      auVar5._0_8_ = auVar42._0_8_;
      puVar23 = (undefined8 *)((long)ppppppuVar18 + -0xb0);
      *(undefined1 (*) [16])((long)ppppppuVar18 + -0x70) = auVar42;
      *(undefined1 **)((long)ppppppuVar18 + -0x60) = (undefined1 *)((long)ppppppuVar18 + -0x10);
      *(undefined **)((long)ppppppuVar18 + -0x58) = &System_String__Format;
      pppppppuVar9 = (undefined8 *******)((long)ppppppuVar18 + -0x60);
      if (auVar44._8_8_ == 0) {
        uVar34 = 0x3d79450;
        if (uVar29 != 0) {
          uVar34 = 0x3d77ce0;
        }
        uVar34 = func_0x00f78a24(uVar34);
        func_0x00f78a24(0x3d1fcf0);
        uVar30 = func_0x00f78aec();
        uVar24 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar30,uVar34,0);
        uVar16 = func_0x00f78a24(0x3d5db00);
        auVar42 = func_0x00f78ac0(uVar30,uVar16);
        puVar23 = (undefined8 *)((long)ppppppuVar18 + -0x110);
        *(undefined8 *)((long)ppppppuVar18 + -0xd0) = uVar30;
        *(undefined8 *)((long)ppppppuVar18 + -200) = uVar34;
        *(undefined8 ********)((long)ppppppuVar18 + -0xc0) = pppppppuVar9;
        *(undefined **)((long)ppppppuVar18 + -0xb8) = &System_String__Format;
        pppppppuVar9 = (undefined8 *******)((long)ppppppuVar18 + -0xc0);
        *(undefined8 *)((long)ppppppuVar18 + -0xe8) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xf0) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xd8) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0xe0) = 0;
        /*System.ParamsArray$$.ctor*/ func_0x0296d94c((undefined1 *)((long)ppppppuVar18 + -0xf0),uVar24,0);
        *(undefined8 *)((long)ppppppuVar18 + -0x108) = *(undefined8 *)((long)ppppppuVar18 + -0xe8);
        *(undefined8 *)((long)ppppppuVar18 + -0x110) = *(undefined8 *)((long)ppppppuVar18 + -0xf0);
        *(undefined8 *)((long)ppppppuVar18 + -0xf8) = *(undefined8 *)((long)ppppppuVar18 + -0xd8);
        *(undefined8 *)((long)ppppppuVar18 + -0x100) = *(undefined8 *)((long)ppppppuVar18 + -0xe0);
        puVar38 = &UNK_029cf658;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + -0x110);
        auVar5 = auVar42;
      }
      else {
        *(undefined8 *)((long)ppppppuVar18 + -0x88) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x90) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x78) = 0;
        *(undefined8 *)((long)ppppppuVar18 + -0x80) = 0;
        /*System.ParamsArray$$.ctor*/ func_0x0296dae8((undefined1 *)((long)ppppppuVar18 + -0x90),auVar44._8_8_,0);
        *(undefined8 *)((long)ppppppuVar18 + -0xa8) = *(undefined8 *)((long)ppppppuVar18 + -0x88);
        *(undefined8 *)((long)ppppppuVar18 + -0xb0) = *(undefined8 *)((long)ppppppuVar18 + -0x90);
        *(undefined8 *)((long)ppppppuVar18 + -0x98) = *(undefined8 *)((long)ppppppuVar18 + -0x78);
        *(undefined8 *)((long)ppppppuVar18 + -0xa0) = *(undefined8 *)((long)ppppppuVar18 + -0x80);
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar29;
        auVar42 = auVar44 << 0x40;
        puVar38 = &UNK_029cf5a8;
        ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 + -0xb0);
      }
    } while( true );
  }
  uVar34 = 0x3d29000;
  lVar35 = 0x3d56000;
  /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar28,uVar30,0,ppppppuVar18,0);
  uVar29 = *(ulong *)(param_1 + 0x88);
  uVar30 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar30,param_1,uRam0000000003d56cc0,0);
  lVar28 = 0;
  if (uVar29 == 0) goto LAB_01590a84;
Atlas_UI_TopBarManager__SetButtonFunc:
  auVar43._8_8_ = unaff_x19;
  auVar43._0_8_ = unaff_x20;
  uVar34 = 0;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar28 = *(long *)(uVar29 + 0x30);
  if (lVar28 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar28 + 0x18) != 0) {
    *(undefined8 *)(lVar28 + 0x20) = uVar30;
    return uVar29;
  }
  uVar16 = func_0x00f78b24();
  auVar42 = func_0x00f78ac0(uVar16,0);
  auVar2._8_8_ = auVar42._8_8_;
  auVar2._0_8_ = unaff_x20;
  puVar7 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) = &Atlas_UI_TopBarManager__ButtonPressed;
  puVar36 = (undefined1 *)((long)register0x00000008 + -0x20);
  lVar28 = *(long *)(auVar42._0_8_ + 0x30);
  if (lVar28 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar12 = auVar42._8_4_;
    auVar43 = auVar2;
    if (uVar12 < *(uint *)(lVar28 + 0x18)) {
      lVar28 = *(long *)(lVar28 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar28 == 0) {
        uVar29 = 0;
        if (8 < uVar12) {
          return 0;
        }
        uVar10 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar12 & 0x1f) & uVar10) == 0) {
          return uVar29;
        }
      }
      else {
        uVar29 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar28,0);
        if ((uVar12 != 0) || ((uVar29 & 1) == 0)) {
          if (8 < uVar12) {
            return uVar29;
          }
          uVar10 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar28 = *(long *)(auVar42._0_8_ + 0x28);
      auVar45._8_4_ = uVar12;
      auVar45._0_8_ = lVar28;
      auVar43 = auVar42;
      if (lVar28 != 0) {
        uVar30 = 0;
        uVar34 = 1;
        puVar36 = *(undefined1 **)((long)register0x00000008 + -0x20);
        puVar39 = *(undefined **)((long)register0x00000008 + -0x18);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x10);
        auVar43 = *(undefined1 (*) [16])((long)register0x00000008 + -0x30);
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar16 = func_0x00f78b24();
  puVar39 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar45 = func_0x00f78ac0(uVar16,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar34;
  auVar4._0_8_ = auVar45._0_8_;
  auVar3._8_8_ = uVar34;
  auVar3._0_8_ = auVar45._0_8_;
  if (auVar45._8_4_ < 9) {
    uVar29 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar45._8_4_ * 4);
    auVar4 = auVar3;
  }
  else {
    uVar29 = 0xffffffff;
  }
  do {
    puVar38 = auVar4._0_8_;
    uVar17 = auVar43._8_8_;
    *(undefined1 (*) [16])(puVar7 + -0x20) = auVar43;
    *(undefined1 **)(puVar7 + -0x10) = puVar36;
    *(undefined **)(puVar7 + -8) = puVar39;
    uVar12 = (uint)uVar29;
    if (uVar12 == 0xffffffff) {
      return (ulong)puVar38;
    }
    lVar28 = *(long *)((long)puVar38 + 0x70);
    if (lVar28 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar17 = uVar29;
      if (uVar12 < *(uint *)(lVar28 + 0x18)) {
        uVar26 = 2;
        if ((int)uVar30 == 0) {
          uVar26 = 0;
        }
        *(undefined4 *)(lVar28 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar26;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar38,uVar29);
        }
        *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(long *)(puVar7 + -0x48) = unaff_x25;
        *(long *)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar7 + -0x38) = unaff_x23;
        *(undefined8 ********)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
        *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        lVar28 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar35 = *(long *)((long)puVar38 + 0x70);
        if (lVar35 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar35 + 0x18) <= uVar12) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar12;
        lVar35 = lVar35 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar35 + 0x20);
        unaff_x22 = *(undefined8 ********)(lVar35 + 0x28);
        uVar34 = *(undefined8 *)(lVar35 + 0x30);
        uVar16 = *(undefined8 *)(lVar35 + 0x48);
        uVar30 = *(undefined8 *)(lVar35 + 0x40);
        *(undefined8 *)(puVar7 + -0xe8) = *(undefined8 *)(lVar35 + 0x38);
        *(undefined8 *)(puVar7 + -0xf0) = uVar34;
        *(undefined8 *)(puVar7 + -0xd8) = uVar16;
        *(undefined8 *)(puVar7 + -0xe0) = uVar30;
        lVar28 = *(long *)(lVar35 + 0x50);
        iVar11 = *(int *)(lVar35 + 0x58);
        iVar13 = *(int *)(lVar35 + 0x5c);
        unaff_x23 = *(undefined8 *)(lVar35 + 0x60);
        unaff_x24 = *(long *)(lVar35 + 0x68);
        uVar34 = *(undefined8 *)(lVar35 + 0x70);
        *(undefined8 *)(puVar7 + -0xf8) = *(undefined8 *)(lVar35 + 0x78);
        *(undefined8 *)(puVar7 + -0x100) = uVar34;
        if (iVar13 == iVar11) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar28,0,0);
          if ((int)uVar17 == 0) {
            return uVar17;
          }
          if (lVar28 != 0) {
            uVar29 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar28,iVar11 == 2,0);
            return uVar29;
          }
        }
        else if (iVar11 == 2) {
          if (iVar13 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar30 = *(undefined8 *)(lVar35 + 0x38);
            uVar34 = *(undefined8 *)(lVar35 + 0x30);
            uVar24 = *(undefined8 *)(lVar35 + 0x48);
            uVar16 = *(undefined8 *)(lVar35 + 0x40);
            *(undefined8 *)(puVar7 + -0x118) = uVar30;
            *(undefined8 *)(puVar7 + -0x120) = uVar34;
            *(undefined8 *)(puVar7 + -0x108) = uVar24;
            *(undefined8 *)(puVar7 + -0x110) = uVar16;
            uVar41 = *(undefined8 *)(lVar35 + 0x78);
            uVar40 = *(undefined8 *)(lVar35 + 0x70);
            *(undefined8 *)(puVar7 + -0x128) = uVar41;
            *(undefined8 *)(puVar7 + -0x130) = uVar40;
            *(undefined8 *)(puVar7 + -200) = unaff_x26;
            *(undefined8 ********)(puVar7 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xb0) = uVar30;
            *(undefined8 *)(puVar7 + -0xb8) = uVar34;
            *(undefined8 *)(puVar7 + -0xa0) = uVar24;
            *(undefined8 *)(puVar7 + -0xa8) = uVar16;
            *(long *)(puVar7 + -0x98) = lVar28;
            *(undefined8 *)(puVar7 + -0x90) = _UNK_033f8620;
            *(undefined8 *)(puVar7 + -0x88) = unaff_x23;
            *(long *)(puVar7 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar7 + -0x70) = uVar41;
            *(undefined8 *)(puVar7 + -0x78) = uVar40;
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(unaff_x24,puVar7 + -200,uRam0000000003d2a408);
            iVar11 = 1;
          }
          else {
            iVar11 = 2;
          }
code_r0x0150c72c:
          lVar35 = *(long *)((long)puVar38 + 0x70);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= uVar12) goto code_r0x0150c7d8;
            lVar35 = lVar35 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar35 + 0x20) = unaff_x26;
            *(undefined8 ********)(lVar35 + 0x28) = unaff_x22;
            uVar34 = *(undefined8 *)(puVar7 + -0xf0);
            uVar16 = *(undefined8 *)(puVar7 + -0xd8);
            uVar30 = *(undefined8 *)(puVar7 + -0xe0);
            *(undefined8 *)(lVar35 + 0x38) = *(undefined8 *)(puVar7 + -0xe8);
            *(undefined8 *)(lVar35 + 0x30) = uVar34;
            *(undefined8 *)(lVar35 + 0x48) = uVar16;
            *(undefined8 *)(lVar35 + 0x40) = uVar30;
            *(long *)(lVar35 + 0x50) = lVar28;
            *(int *)(lVar35 + 0x58) = iVar11;
            *(int *)(lVar35 + 0x5c) = iVar13;
            *(undefined8 *)(lVar35 + 0x60) = unaff_x23;
            *(long *)(lVar35 + 0x68) = unaff_x24;
            uVar34 = *(undefined8 *)(puVar7 + -0x100);
            *(undefined8 *)(lVar35 + 0x78) = *(undefined8 *)(puVar7 + -0xf8);
            *(undefined8 *)(lVar35 + 0x70) = uVar34;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar11 != 0) goto code_r0x0150c72c;
          if (iVar13 != 2) {
            iVar11 = 0;
            goto code_r0x0150c72c;
          }
          if ((unaff_x22 != (undefined8 *******)0x0) &&
             (lVar35 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar35 != 0)) {
            uVar34 = 1;
            pppppppuVar9 = (undefined8 *******)(puVar7 + -0x130);
            pppppppuVar37 = (undefined8 *******)(puVar7 + -0x10);
            puVar39 = &UNK_0150c678;
            goto code_r0x0322ef1c;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar34 = func_0x00f78b24();
        auVar42 = func_0x00f78ac0(uVar34,0);
        lVar35 = auVar42._8_8_;
        *(undefined8 *)(puVar7 + -0x180) = unaff_x26;
        *(long *)(puVar7 + -0x178) = unaff_x25;
        *(long *)(puVar7 + -0x170) = unaff_x24;
        *(undefined8 *)(puVar7 + -0x168) = unaff_x23;
        *(undefined8 ********)(puVar7 + -0x160) = unaff_x22;
        *(undefined **)(puVar7 + -0x158) = puVar38;
        *(ulong *)(puVar7 + -0x150) = uVar29;
        *(long *)(puVar7 + -0x148) = lVar28;
        *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar34 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar35 + 0x18),*(undefined4 *)(lVar35 + 0x1c),
                                 *(undefined4 *)(lVar35 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar35 + 0x10),0,0);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar34,10,uRam0000000003d5e7a8);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar34,*(undefined8 *)(lVar35 + 0x58),uRam0000000003d5e6e0);
        uVar34 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar34,1,uRam0000000003d5e888);
        uVar29 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar34,auVar42._0_8_,uRam0000000003d5e850);
        if ((uVar29 != 0) && (*(char *)(uVar29 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar29 + 0x30) = *(undefined8 *)(lVar35 + 0x10);
        }
        return uVar29;
      }
    }
    uVar34 = func_0x00f78b24();
    auVar42 = func_0x00f78ac0(uVar34,0);
    puVar8 = puVar7 + -0x30;
    puVar36 = puVar7 + -0x30;
    *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar28 = *(long *)(auVar42._0_8_ + 0x28);
    auVar43._8_8_ = auVar42._8_8_;
    auVar43._0_8_ = lVar28;
    if (lVar28 == 0) {
      puVar39 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar43 = func_0x00f78af4();
    }
    else {
      puVar8 = puVar7 + -0x20;
      puVar36 = *(undefined1 **)(puVar7 + -0x30);
      puVar39 = *(undefined **)(puVar7 + -0x28);
    }
    puVar7 = puVar8 + -0x20;
    *(undefined **)(puVar8 + -0x20) = puVar38;
    *(ulong *)(puVar8 + -0x18) = uVar17;
    *(undefined1 **)(puVar8 + -0x10) = puVar36;
    *(undefined **)(puVar8 + -8) = puVar39;
    puVar36 = puVar8 + -0x10;
    uVar29 = 4;
    uVar30 = 0;
    puVar39 = &UNK_0150bd10;
    auVar4 = auVar43;
  } while( true );
}



// ============================================================
// RVA: 0x1590a88 | Atlas.Contexts.FrontEndContextSettingsState.ShowSaveGameScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0150c674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01507264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x01507280) */
/* WARNING: Removing unreachable block (ram,0x01507294) */
/* WARNING: Removing unreachable block (ram,0x015072a8) */
/* WARNING: Removing unreachable block (ram,0x015072b8) */
/* WARNING: Removing unreachable block (ram,0x015072c0) */
/* WARNING: Removing unreachable block (ram,0x015072cc) */
/* WARNING: Removing unreachable block (ram,0x015072e0) */
/* WARNING: Removing unreachable block (ram,0x015072e4) */
/* WARNING: Removing unreachable block (ram,0x015072ec) */
/* WARNING: Removing unreachable block (ram,0x01507300) */
/* WARNING: Removing unreachable block (ram,0x01507310) */
/* WARNING: Removing unreachable block (ram,0x01507314) */
/* WARNING: Removing unreachable block (ram,0x0150731c) */
/* WARNING: Removing unreachable block (ram,0x01507328) */
/* WARNING: Removing unreachable block (ram,0x0150733c) */
/* WARNING: Removing unreachable block (ram,0x01507340) */
/* WARNING: Removing unreachable block (ram,0x01507348) */
/* WARNING: Removing unreachable block (ram,0x0150735c) */
/* WARNING: Removing unreachable block (ram,0x0150736c) */
/* WARNING: Removing unreachable block (ram,0x01507370) */
/* WARNING: Removing unreachable block (ram,0x01507378) */
/* WARNING: Removing unreachable block (ram,0x01507384) */
/* WARNING: Removing unreachable block (ram,0x01507400) */
/* WARNING: Removing unreachable block (ram,0x01507398) */
/* WARNING: Removing unreachable block (ram,0x0150739c) */
/* WARNING: Removing unreachable block (ram,0x015073a4) */
/* WARNING: Removing unreachable block (ram,0x015073d4) */
/* WARNING: Removing unreachable block (ram,0x01507268) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c678) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextSettingsState__ShowSaveGameScreen(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *******pppppppuVar10;
  uint uVar11;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  int iVar12;
  long lVar21;
  undefined8 uVar22;
  undefined8 *****pppppuVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ushort *puVar29;
  undefined4 uVar30;
  undefined2 *puVar31;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar32;
  long lVar33;
  undefined8 unaff_x21;
  long lVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 *******unaff_x22;
  int *piVar37;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar38;
  undefined8 *******pppppppuVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [12];
  int aiStack_500 [202];
  undefined8 *****pppppuStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  long lStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  long lStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  ulong uStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  undefined1 uStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  auVar44._8_8_ = unaff_x19;
  auVar44._0_8_ = unaff_x20;
  if ((bRam0000000003eb5145 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56cd8);
    func_0x00f78a20(0x3d56cc8);
    func_0x00f78a20(0x3d28ad8);
    func_0x00f78a20(0x3d28ae0);
    bRam0000000003eb5145 = 1;
  }
  lVar21 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.TransitionData_TypeInfo*/ uRam0000000003d28ae0);
  /*Atlas.UI.Screens.SaveGameScreen.TransitionData$$.ctor*/ func_0x015670e8(lVar21,0);
  uVar22 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.SoftReboot_TypeInfo*/ uRam0000000003d28ad8);
  /*Atlas.UI.Screens.SaveGameScreen.SoftReboot$$.ctor*/ func_0x01567074(uVar22,param_1,uRam0000000003d56cd8,0);
  if (lVar21 != 0) {
    *(undefined8 *)(lVar21 + 0x10) = uVar22;
    lVar34 = *(long *)(param_1 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar34 != 0) {
      /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar34,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xf0),0,lVar21
                      ,0);
      uVar32 = *(ulong *)(param_1 + 0x88);
      uVar22 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar22,param_1,uRam0000000003d56cc8,0);
      if (uVar32 != 0) {
        uVar28 = 0;
        lVar21 = *(long *)(uVar32 + 0x30);
        if (lVar21 == 0) {
          func_0x00f78af4();
        }
        else if (*(int *)(lVar21 + 0x18) != 0) {
          *(undefined8 *)(lVar21 + 0x20) = uVar22;
          return uVar32;
        }
        uVar18 = func_0x00f78b24();
        auVar43 = func_0x00f78ac0(uVar18,0);
        puVar8 = &stack0xffffffffffffffd0;
        puVar38 = &stack0xffffffffffffffe0;
        lVar21 = *(long *)(auVar43._0_8_ + 0x30);
        if (lVar21 == 0) {
code_r0x0150b5a8:
          unaff_x20 = auVar44._0_8_;
          func_0x00f78af4();
          uVar18 = auVar44._8_8_;
        }
        else {
          uVar13 = auVar43._8_4_;
          uVar18 = auVar43._8_8_;
          if (uVar13 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = *(long *)(lVar21 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar21 == 0) {
              uVar32 = 0;
              if (8 < uVar13) {
                return 0;
              }
              uVar11 = 0x143;
code_r0x0150b574:
              if ((1 << (ulong)(uVar13 & 0x1f) & uVar11) == 0) {
                return uVar32;
              }
            }
            else {
              uVar32 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar21,0);
              if ((uVar13 != 0) || ((uVar32 & 1) == 0)) {
                if (8 < uVar13) {
                  return uVar32;
                }
                uVar11 = 0x142;
                goto code_r0x0150b574;
              }
            }
            lVar21 = *(long *)(auVar43._0_8_ + 0x28);
            auVar46._8_4_ = uVar13;
            auVar46._0_8_ = lVar21;
            auVar44 = auVar43;
            if (lVar21 != 0) {
              uVar22 = 0;
              uVar28 = 1;
              puVar40 = &Atlas_UI_TopBarManager__ButtonPressed;
              puVar8 = &stack0xfffffffffffffff0;
              puVar38 = &stack0xfffffffffffffff0;
              goto code_r0x0150b5b8;
            }
            goto code_r0x0150b5a8;
          }
        }
        unaff_x19 = uVar18;
        uVar18 = func_0x00f78b24();
        puVar40 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
        auVar46 = func_0x00f78ac0(uVar18,0);
code_r0x0150b5b8:
        auVar6._8_8_ = uVar28;
        auVar6._0_8_ = unaff_x20;
        auVar5._8_8_ = uVar28;
        auVar5._0_8_ = unaff_x20;
        auVar43._8_8_ = unaff_x19;
        auVar43._0_8_ = auVar46._0_8_;
        auVar2._8_8_ = unaff_x19;
        auVar2._0_8_ = auVar46._0_8_;
        if (auVar46._8_4_ < 9) {
          uVar32 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar46._8_4_ * 4);
          auVar43 = auVar2;
          auVar6 = auVar5;
        }
        else {
          uVar32 = 0xffffffff;
        }
        do {
          uVar20 = auVar43._8_8_;
          puVar19 = auVar43._0_8_;
          *(long *)(puVar8 + -0x20) = auVar6._0_8_;
          *(ulong *)(puVar8 + -0x18) = uVar20;
          *(undefined1 **)(puVar8 + -0x10) = puVar38;
          *(undefined **)(puVar8 + -8) = puVar40;
          uVar13 = (uint)uVar32;
          if (uVar13 == 0xffffffff) {
            return (ulong)puVar19;
          }
          lVar21 = *(long *)((long)puVar19 + 0x70);
          if (lVar21 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar20 = uVar32;
            if (uVar13 < *(uint *)(lVar21 + 0x18)) {
              uVar30 = 2;
              if ((int)uVar22 == 0) {
                uVar30 = 0;
              }
              *(undefined4 *)(lVar21 + (long)(int)uVar13 * 0x60 + 0x5c) = uVar30;
              if ((auVar6._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar19,uVar32);
              }
              *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
              *(long *)(puVar8 + -0x48) = unaff_x25;
              *(long *)(puVar8 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
              *(undefined8 ********)(puVar8 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
              *(undefined8 *)(puVar8 + -0x20) = *(undefined8 *)(puVar8 + -0x20);
              *(undefined8 *)(puVar8 + -0x18) = *(undefined8 *)(puVar8 + -0x18);
              *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
              *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
              lVar21 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar34 = *(long *)((long)puVar19 + 0x70);
              if (lVar34 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar34 + 0x18) <= uVar13) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar13;
              lVar34 = lVar34 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar34 + 0x20);
              unaff_x22 = *(undefined8 ********)(lVar34 + 0x28);
              uVar22 = *(undefined8 *)(lVar34 + 0x30);
              uVar18 = *(undefined8 *)(lVar34 + 0x48);
              uVar28 = *(undefined8 *)(lVar34 + 0x40);
              *(undefined8 *)(puVar8 + -0xe8) = *(undefined8 *)(lVar34 + 0x38);
              *(undefined8 *)(puVar8 + -0xf0) = uVar22;
              *(undefined8 *)(puVar8 + -0xd8) = uVar18;
              *(undefined8 *)(puVar8 + -0xe0) = uVar28;
              lVar21 = *(long *)(lVar34 + 0x50);
              iVar12 = *(int *)(lVar34 + 0x58);
              iVar14 = *(int *)(lVar34 + 0x5c);
              unaff_x23 = *(undefined8 *)(lVar34 + 0x60);
              unaff_x24 = *(long *)(lVar34 + 0x68);
              uVar22 = *(undefined8 *)(lVar34 + 0x70);
              *(undefined8 *)(puVar8 + -0xf8) = *(undefined8 *)(lVar34 + 0x78);
              *(undefined8 *)(puVar8 + -0x100) = uVar22;
              if (iVar14 == iVar12) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar21,0,0);
                if ((int)uVar20 == 0) {
                  return uVar20;
                }
                if (lVar21 != 0) {
                  uVar32 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar21,iVar12 == 2,0);
                  return uVar32;
                }
              }
              else if (iVar12 == 2) {
                if (iVar14 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar28 = *(undefined8 *)(lVar34 + 0x38);
                  uVar22 = *(undefined8 *)(lVar34 + 0x30);
                  uVar27 = *(undefined8 *)(lVar34 + 0x48);
                  uVar18 = *(undefined8 *)(lVar34 + 0x40);
                  *(undefined8 *)(puVar8 + -0x118) = uVar28;
                  *(undefined8 *)(puVar8 + -0x120) = uVar22;
                  *(undefined8 *)(puVar8 + -0x108) = uVar27;
                  *(undefined8 *)(puVar8 + -0x110) = uVar18;
                  uVar42 = *(undefined8 *)(lVar34 + 0x78);
                  uVar41 = *(undefined8 *)(lVar34 + 0x70);
                  *(undefined8 *)(puVar8 + -0x128) = uVar42;
                  *(undefined8 *)(puVar8 + -0x130) = uVar41;
                  *(undefined8 *)(puVar8 + -200) = unaff_x26;
                  *(undefined8 ********)(puVar8 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar8 + -0xb0) = uVar28;
                  *(undefined8 *)(puVar8 + -0xb8) = uVar22;
                  *(undefined8 *)(puVar8 + -0xa0) = uVar27;
                  *(undefined8 *)(puVar8 + -0xa8) = uVar18;
                  *(long *)(puVar8 + -0x98) = lVar21;
                  *(undefined8 *)(puVar8 + -0x90) = _UNK_033f8620;
                  *(undefined8 *)(puVar8 + -0x88) = unaff_x23;
                  *(long *)(puVar8 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar8 + -0x70) = uVar42;
                  *(undefined8 *)(puVar8 + -0x78) = uVar41;
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(unaff_x24,puVar8 + -200,uRam0000000003d2a408);
                  iVar12 = 1;
                }
                else {
                  iVar12 = 2;
                }
code_r0x0150c72c:
                lVar34 = *(long *)((long)puVar19 + 0x70);
                if (lVar34 != 0) {
                  if (*(uint *)(lVar34 + 0x18) <= uVar13) goto code_r0x0150c7d8;
                  lVar34 = lVar34 + unaff_x25 * 0x60;
                  *(undefined8 *)(lVar34 + 0x20) = unaff_x26;
                  *(undefined8 ********)(lVar34 + 0x28) = unaff_x22;
                  uVar22 = *(undefined8 *)(puVar8 + -0xf0);
                  uVar18 = *(undefined8 *)(puVar8 + -0xd8);
                  uVar28 = *(undefined8 *)(puVar8 + -0xe0);
                  *(undefined8 *)(lVar34 + 0x38) = *(undefined8 *)(puVar8 + -0xe8);
                  *(undefined8 *)(lVar34 + 0x30) = uVar22;
                  *(undefined8 *)(lVar34 + 0x48) = uVar18;
                  *(undefined8 *)(lVar34 + 0x40) = uVar28;
                  *(long *)(lVar34 + 0x50) = lVar21;
                  *(int *)(lVar34 + 0x58) = iVar12;
                  *(int *)(lVar34 + 0x5c) = iVar14;
                  *(undefined8 *)(lVar34 + 0x60) = unaff_x23;
                  *(long *)(lVar34 + 0x68) = unaff_x24;
                  uVar22 = *(undefined8 *)(puVar8 + -0x100);
                  *(undefined8 *)(lVar34 + 0x78) = *(undefined8 *)(puVar8 + -0xf8);
                  *(undefined8 *)(lVar34 + 0x70) = uVar22;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar12 != 0) goto code_r0x0150c72c;
                if (iVar14 != 2) {
                  iVar12 = 0;
                  goto code_r0x0150c72c;
                }
                if ((unaff_x22 != (undefined8 *******)0x0) &&
                   (lVar34 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar34 != 0)) {
                  uVar22 = 1;
                  pppppppuVar10 = (undefined8 *******)(puVar8 + -0x130);
                  pppppppuVar39 = (undefined8 *******)(puVar8 + -0x10);
                  puVar40 = &UNK_0150c678;
                  goto code_r0x0322ef1c;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar22 = func_0x00f78b24();
              auVar44 = func_0x00f78ac0(uVar22,0);
              lVar34 = auVar44._8_8_;
              *(undefined8 *)(puVar8 + -0x180) = unaff_x26;
              *(long *)(puVar8 + -0x178) = unaff_x25;
              *(long *)(puVar8 + -0x170) = unaff_x24;
              *(undefined8 *)(puVar8 + -0x168) = unaff_x23;
              *(undefined8 ********)(puVar8 + -0x160) = unaff_x22;
              *(undefined **)(puVar8 + -0x158) = puVar19;
              *(ulong *)(puVar8 + -0x150) = uVar32;
              *(long *)(puVar8 + -0x148) = lVar21;
              *(undefined1 **)(puVar8 + -0x140) = puVar8 + -0x10;
              *(undefined **)(puVar8 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar22 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar34 + 0x18),*(undefined4 *)(lVar34 + 0x1c)
                                       ,*(undefined4 *)(lVar34 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar34 + 0x10),0,0);
              uVar22 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar22,10,uRam0000000003d5e7a8);
              uVar22 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar22,*(undefined8 *)(lVar34 + 0x58),uRam0000000003d5e6e0);
              uVar22 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar22,1,uRam0000000003d5e888);
              uVar32 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar22,auVar44._0_8_,uRam0000000003d5e850);
              if ((uVar32 != 0) && (*(char *)(uVar32 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar32 + 0x30) = *(undefined8 *)(lVar34 + 0x10);
              }
              return uVar32;
            }
          }
          uVar22 = func_0x00f78b24();
          auVar44 = func_0x00f78ac0(uVar22,0);
          puVar9 = puVar8 + -0x30;
          puVar38 = puVar8 + -0x30;
          *(undefined1 **)(puVar8 + -0x30) = puVar8 + -0x10;
          *(undefined **)(puVar8 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar21 = *(long *)(auVar44._0_8_ + 0x28);
          auVar43._8_8_ = auVar44._8_8_;
          auVar43._0_8_ = lVar21;
          if (lVar21 == 0) {
            puVar40 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar43 = func_0x00f78af4();
          }
          else {
            puVar9 = puVar8 + -0x20;
            puVar38 = *(undefined1 **)(puVar8 + -0x30);
            puVar40 = *(undefined **)(puVar8 + -0x28);
          }
          puVar8 = puVar9 + -0x20;
          *(undefined **)(puVar9 + -0x20) = puVar19;
          *(ulong *)(puVar9 + -0x18) = uVar20;
          *(undefined1 **)(puVar9 + -0x10) = puVar38;
          *(undefined **)(puVar9 + -8) = puVar40;
          puVar38 = puVar9 + -0x10;
          uVar32 = 4;
          uVar22 = 0;
          puVar40 = &UNK_0150bd10;
          auVar6 = auVar43;
        } while( true );
      }
    }
  }
  lVar34 = func_0x00f78af4();
  puStack_48 = &Atlas_Contexts_FrontEndContextSettingsState__ShowSupportLink;
  lVar33 = *(long *)(lVar34 + 0xd0);
  lVar35 = *(long *)(lVar34 + 0xb8);
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  lVar21 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
  unaff_x22 = *(undefined8 ********)(lVar34 + 0xc0);
  lVar34 = *(long *)(lVar34 + 200);
  uStack_b0 = *(undefined8 *)PTR_03a5d648;
  ppppppuVar16 = (undefined8 ******)0x3d24dd8;
  if ((bRam0000000003eb4d20 & 1) == 0) {
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21940);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d7c7e0);
    func_0x00f78a20(0x3d677f8);
    func_0x00f78a20(0x3d698a8);
    func_0x00f78a20(0x3d77ca8);
    func_0x00f78a20(0x3d68648);
    func_0x00f78a20(0x3d66860);
    func_0x00f78a20(0x3d67c70);
    func_0x00f78a20(0x3d6f2d8);
    func_0x00f78a20(0x3d67140);
    func_0x00f78a20(0x3d70148);
    func_0x00f78a20(0x3d68458);
    func_0x00f78a20(0x3d7a498);
    func_0x00f78a20(0x3d717b0);
    func_0x00f78a20(0x3d6f2d0);
    func_0x00f78a20(0x3d6f758);
    func_0x00f78a20(0x3d6f798);
    bRam0000000003eb4d20 = 1;
  }
  uVar32 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar32,0x800,0);
  lVar15 = /*UnityEngine.iOS.Device$$get_systemVersion*/ func_0x0322ccd8(0);
  if (lVar15 == 0) {
code_r0x015073f4:
    func_0x00f78af4();
    uVar22 = func_0x00f78b24();
    func_0x00f78ac0(uVar22,0);
    puVar40 = &Atlas_SupportEmail__EscapeURL;
    lVar15 = ___stack_chk_fail();
  }
  else {
    ppppppuVar16 = (undefined8 ******)/*System.String$$StartsWith*/ func_0x029ce8f8(lVar15,/*STR('14.')*/ uRam0000000003d677f8,0);
    if ((int)ppppppuVar16 != 0) {
      if (uVar32 == 0) goto code_r0x015073f4;
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('<html>')*/ uRam0000000003d68458,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    }
    if ((lVar33 == 0) || (uVar22 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar33,/*STR('MESSAGE_BODY_SUPPORT_EMAIL')*/ uRam0000000003d6f758,0), uVar32 == 0))
    goto code_r0x015073f4;
    unaff_x26 = 0x3d67000;
    unaff_x27 = 0x3d69000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,uVar22,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('------------')*/ uRam0000000003d67140,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('Build: ')*/ uRam0000000003d698a8,0);
    if (lVar21 == 0) goto code_r0x015073f4;
    unaff_x26 = 0x3d71000;
    uVar22 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(lVar21,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,uVar22,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('Quality settings: ')*/ uRam0000000003d717b0,0);
    if (lVar35 == 0) goto code_r0x015073f4;
    lVar21 = 0x3d6f000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar32,*(undefined4 *)(lVar35 + 0x18),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('Last session id: ')*/ uRam0000000003d6f2d8,0);
    if (lVar34 == 0) goto code_r0x015073f4;
    lVar21 = 0x3d21000;
    unaff_x26 = 0x3d6f000;
    /*Atlas.Networking.Network$$GetLastSessionId*/ func_0x0149e458(&uStack_f0,lVar34,0);
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
    uStack_118 = uStack_d8;
    uStack_120 = uStack_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uVar22 = func_0x00f78ae0(/*Unity.Collections.FixedString64Bytes_TypeInfo*/ uRam0000000003d21940,&uStack_130);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar32,uVar22,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('Last network error: ')*/ uRam0000000003d6f2d0,0);
    if ((unaff_x22 == (undefined8 *******)0x0) ||
       (pppppuVar17 = unaff_x22[6], pppppuVar17 == (undefined8 *****)0x0)) goto code_r0x015073f4;
    unaff_x27 = 0x3d70000;
    unaff_x28 = 0x3d7c000;
    unaff_x22 = (undefined8 *******)0x3d77ca8;
    unaff_x26 = 0x3d6f798;
    lVar21 = 0x3d1f498;
    uStack_131 = (*(code *)(*pppppuVar17)[0x37])(pppppuVar17,(*pppppuVar17)[0x38]);
    uVar22 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_131);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(uVar32,uVar22,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('Native resolution: ')*/ uRam0000000003d70148,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar32,*(undefined4 *)(lVar35 + 0x74),0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('x')*/ uRam0000000003d7c7e0,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(uVar32,*(undefined4 *)(lVar35 + 0x78),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    uVar22 = /*Core.Settings.DeviceQualitySettings$$GenerateDeviceSpecsString*/ func_0x0168bb30(0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,uVar22,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(uVar32,0);
    if ((int)ppppppuVar16 != 0) {
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(uVar32,/*STR('</html>')*/ uRam0000000003d67c70,0);
    }
    lVar34 = /*STR('arcade-support@electricsquare.com')*/ lRam0000000003d77ca8;
    lVar15 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar33,/*STR('MESSAGE_TITLE_SUPPORT_EMAIL')*/ uRam0000000003d6f798,0);
    puVar40 = &UNK_01507268;
  }
  lStack_160 = lVar35;
  lStack_158 = lVar33;
  ppppppuStack_150 = &pppppuStack_50;
  puStack_148 = puVar40;
  if ((bRam0000000003eb4d21 & 1) == 0) {
    func_0x00f78a20(0x3d667f0);
    func_0x00f78a20(0x3d66fb0);
    func_0x00f78a20(0x3d667d8);
    func_0x00f78a20(0x3d667e8);
    func_0x00f78a20(0x3d667e0);
    bRam0000000003eb4d21 = 1;
  }
  pppppuVar17 = (undefined8 *****)/*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(lVar15,0);
  lVar35 = /*STR('+')*/ lRam0000000003d66fb0;
  lVar33 = /*STR('%20')*/ lRam0000000003d667f0;
  pppppppuStack_190 = unaff_x22;
  puStack_188 = (undefined *)uVar32;
  lStack_178 = lVar15;
  pppppppuStack_170 = &ppppppuStack_150;
  if (pppppuVar17 == (undefined8 *****)0x0) {
    lVar21 = func_0x00f78af4();
    uStack_180 = 0x3eb4000;
    puStack_168 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
    /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
    pppppppuVar10 = &pppppppuStack_190;
    if ((bRam0000000003eb4d22 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d22 = 1;
    }
    uVar32 = *(ulong *)(lVar21 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar32,0);
    pppppppuVar39 = &pppppppuStack_170;
    if (iVar12 == 0) {
      uVar32 = *(ulong *)(lVar21 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar32,0);
      if (iVar12 == 0) {
        uVar32 = *(ulong *)(lVar21 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar20 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar32,0);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        lVar34 = *(long *)(lVar21 + 0x30);
        if (lVar34 == 0) goto code_r0x01507658;
        uVar22 = 0;
        pppppppuVar10 = (undefined8 *******)&lStack_160;
        lVar21 = lStack_178;
        uVar32 = uStack_180;
        puVar19 = puStack_188;
        unaff_x22 = pppppppuStack_190;
        pppppppuVar39 = pppppppuStack_170;
        puVar40 = puStack_168;
      }
      else {
        lVar34 = *(long *)(lVar21 + 0x28);
        if (lVar34 == 0) {
code_r0x01507658:
          uVar20 = func_0x00f78af4();
          lStack_1b8 = 0x3d23990;
          puStack_198 = &Atlas_UI_SupportedInputIconsBehaviour___ctor;
          ppppppuStack_1c0 = unaff_x22;
          ppppppuStack_1b0 = (undefined8 ******)uVar32;
          uStack_1a8 = lVar21;
          pppppppuStack_1a0 = &pppppppuStack_170;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return uVar20;
        }
        uVar22 = 1;
        puVar19 = (undefined *)0x3d23990;
        puVar40 = &UNK_015075fc;
      }
    }
    else {
      lVar34 = *(long *)(lVar21 + 0x20);
      if (lVar34 == 0) goto code_r0x01507658;
      uVar22 = 1;
      pppppppuVar10 = &pppppppuStack_190;
      puVar19 = (undefined *)0x3d23990;
      puVar40 = &UNK_015075bc;
    }
code_r0x0322ef1c:
    *(undefined8 ********)((long)pppppppuVar10 + -0x30) = unaff_x22;
    *(undefined **)((long)pppppppuVar10 + -0x28) = puVar19;
    *(ulong *)((long)pppppppuVar10 + -0x20) = uVar32;
    *(long *)((long)pppppppuVar10 + -0x18) = lVar21;
    *(undefined8 ********)((long)pppppppuVar10 + -0x10) = pppppppuVar39;
    *(undefined **)((long)pppppppuVar10 + -8) = puVar40;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar32 = (*pcRam0000000003ebf4c0)(lVar34,uVar22);
    return uVar32;
  }
  if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
    uStack_180 = 0x3eb4000;
    puStack_168 = &UNK_015074a0;
    func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
    uVar22 = func_0x00f78aec();
    uVar28 = func_0x00f78a24(0x3d7ac78);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar22,uVar28,0);
    uVar28 = func_0x00f78a24(0x3d5db80);
    func_0x00f78ac0(uVar22,uVar28);
    pppppppuStack_1a0 = (undefined8 *******)0x3eb4000;
    puStack_188 = &System_Runtime_Remoting_SoapServices___cctor;
    ppppppuStack_1b0 = unaff_x22;
    uStack_1a8 = uVar32;
    puStack_198 = (undefined *)uVar22;
    pppppppuStack_190 = &pppppppuStack_170;
    if ((bRam0000000003eb93e7 & 1) == 0) {
      func_0x00f78a20(0x3d21d68);
      func_0x00f78a20(0x3d24ad8);
      bRam0000000003eb93e7 = 1;
    }
    uVar22 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar22,0);
    **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar22;
    uVar22 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar22,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar22;
    uVar22 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar22,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar22;
    uVar22 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar22,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar22;
    uVar22 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    uVar32 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar22,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar22;
    return uVar32;
  }
  uStack_180 = 0x3eb4000;
  puStack_168 = &UNK_015074a0;
  if ((bRam0000000003eb947d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb947d = 1;
  }
  if (lVar35 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar28 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d7ac78);
    puVar25 = (undefined8 *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar28,uVar22);
  }
  else {
    if (*(int *)(lVar35 + 0x10) != 0) {
      if (*(int *)(pppppuVar17 + 2) == 0) {
        return (ulong)pppppuVar17;
      }
      if (lVar33 == 0) {
        lVar33 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      lStack_1c8 = *(long *)PTR_03a5d648;
      ppppppuStack_1c0 = (undefined8 ******)unaff_x28;
      lStack_1b8 = unaff_x27;
      ppppppuStack_1b0 = (undefined8 ******)unaff_x26;
      uStack_1a8 = lVar21;
      pppppppuStack_1a0 = (undefined8 *******)ppppppuVar16;
      puStack_198 = (undefined *)lVar34;
      if ((bRam0000000003eb947e & 1) == 0) {
        func_0x00f78a20(0x3d5db90);
        bRam0000000003eb947e = 1;
      }
      if (lVar35 == 0) {
code_r0x029d0f60:
        func_0x00f78af4();
code_r0x029d0f64:
        ___stack_chk_fail();
      }
      else {
        iVar12 = *(int *)(pppppuVar17 + 2);
        if (iVar12 < *(int *)(lVar35 + 0x10)) goto code_r0x029d0f24;
        if (*(int *)(lVar35 + 0x10) == 1) {
          if (lVar33 == 0) goto code_r0x029d0f60;
          if (*(int *)(lVar33 + 0x10) != 1) {
            (*(code *)PTR_03a5d628)();
            _bzero(aiStack_500,800);
            goto code_r0x029d0dc8;
          }
          uVar22 = /*System.String$$get_Chars*/ func_0x029c5420(lVar35,0);
          uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(lVar33,0);
          if (*(long *)PTR_03a5d648 == lStack_1c8) {
            pppppuVar23 = pppppuVar17;
            if ((((uint)uVar22 != uVar13) && (iVar12 = *(int *)(pppppuVar17 + 2), iVar12 != 0)) &&
               (uVar11 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(pppppuVar17,uVar22,0,iVar12), uVar11 != 0xffffffff)) {
              if ((int)uVar11 < 4) {
                uVar11 = 0;
              }
              uVar32 = (ulong)uVar11;
              pppppuVar23 = (undefined8 *****)func_0x00f834ac(iVar12);
              if (pppppuVar23 == (undefined8 *****)0x0) {
                lVar21 = 0;
              }
              else {
                iVar12 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar21 = (long)pppppuVar23 + (long)iVar12;
              }
              if (uVar11 != 0) {
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar21,(long)pppppuVar17 + 0x14U,uVar32);
              }
              lVar34 = uVar32 * 2;
              if (lVar34 + (long)*(int *)(pppppuVar17 + 2) * -2 != 0) {
                lVar33 = (long)*(int *)(pppppuVar17 + 2) * 2 + uVar32 * -2;
                puVar29 = (ushort *)(lVar34 + (long)pppppuVar17 + 0x14U);
                puVar31 = (undefined2 *)(lVar34 + lVar21);
                do {
                  uVar11 = uVar13;
                  if ((uint)*puVar29 != (uint)uVar22) {
                    uVar11 = (uint)*puVar29;
                  }
                  *puVar31 = (short)uVar11;
                  lVar33 = lVar33 + -2;
                  puVar29 = puVar29 + 1;
                  puVar31 = puVar31 + 1;
                } while (lVar33 != 0);
              }
            }
            return (ulong)pppppuVar23;
          }
          goto code_r0x029d0f64;
        }
        (*(code *)PTR_03a5d628)();
        _bzero(aiStack_500,800);
        if (lVar33 == 0) {
          lVar21 = 0;
        }
        else {
code_r0x029d0dc8:
          iVar12 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar21 = lVar33 + iVar12;
          iVar12 = *(int *)(pppppuVar17 + 2);
        }
        if (iVar12 < 1) {
code_r0x029d0f24:
          if (*(long *)PTR_03a5d648 == lStack_1c8) {
            return (ulong)pppppuVar17;
          }
          goto code_r0x029d0f64;
        }
        uVar32 = 0;
        iVar14 = 0;
        piVar37 = aiStack_500;
        do {
          iVar14 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(pppppuVar17,lVar35,iVar14,iVar12 - iVar14);
          if (iVar14 < 0) break;
          if (uVar32 == 200) {
            pppppuVar17 = (undefined8 *****)/*System.String$$ReplaceFallback*/ func_0x029d104c(pppppuVar17,lVar35,lVar33,200);
            goto code_r0x029d0f24;
          }
          uVar32 = uVar32 + 1;
          *piVar37 = iVar14;
          iVar14 = *(int *)(lVar35 + 0x10) + iVar14;
          iVar12 = *(int *)(pppppuVar17 + 2);
          piVar37 = piVar37 + 1;
        } while (iVar14 < iVar12);
        if ((int)uVar32 == 0) goto code_r0x029d0f24;
        if (lVar33 == 0) {
          func_0x00f78af4();
          goto code_r0x029d1034;
        }
        lVar34 = (long)*(int *)(lVar33 + 0x10) - (long)*(int *)(lVar35 + 0x10);
        if (lVar34 != (int)lVar34) {
          uVar22 = func_0x00f78b08();
          func_0x00f78ac0(uVar22,uRam0000000003d5db90);
          goto code_r0x029d1034;
        }
        iVar12 = *(int *)(lVar33 + 0x10) - *(int *)(lVar35 + 0x10);
        lVar34 = (uVar32 & 0xffffffff) * (long)iVar12;
        if (lVar34 - (int)lVar34 == 0) {
          iVar12 = iVar12 * (int)uVar32;
          lVar34 = (long)*(int *)(pppppuVar17 + 2) + (long)iVar12;
          if (lVar34 == (int)lVar34) {
            ppppppuStack_1d0 = (undefined8 ******)pppppuVar17;
            pppppuVar23 = (undefined8 *****)func_0x00f834ac(iVar12 + *(int *)(pppppuVar17 + 2));
            pppppuStack_1d8 = pppppuVar23;
            if (pppppuVar23 == (undefined8 *****)0x0) {
              lVar34 = 0;
            }
            else {
              iVar12 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar34 = (long)pppppuVar23 + (long)iVar12;
            }
            iVar12 = 0;
            iVar14 = 0;
            piVar37 = aiStack_500;
            do {
              iVar1 = *piVar37;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar34 + (long)iVar12 * 2,(long)pppppuVar17 + (long)iVar14 * 2 + 0x14,
                              iVar1 - iVar14);
              iVar12 = (iVar1 - iVar14) + iVar12;
              iVar14 = *(int *)(lVar35 + 0x10) + *piVar37;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar34 + (long)iVar12 * 2,lVar21,*(undefined4 *)(lVar33 + 0x10));
              iVar12 = *(int *)(lVar33 + 0x10) + iVar12;
              uVar32 = uVar32 - 1;
              piVar37 = piVar37 + 1;
            } while (uVar32 != 0);
            /*System.String$$CharCopy*/ func_0x029d0c3c(lVar34 + (long)iVar12 * 2,(long)pppppuVar17 + (long)iVar14 * 2 + 0x14,
                            *(int *)(ppppppuStack_1d0 + 2) - iVar14);
            pppppuVar17 = pppppuStack_1d8;
            goto code_r0x029d0f24;
          }
        }
      }
      uVar22 = func_0x00f78b08();
      func_0x00f78ac0(uVar22,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x29d1038);
      (*pcVar7)();
    }
    func_0x00f78a24(0x3d1fce8);
    uVar28 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d7ac80);
    puVar25 = (undefined8 *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar28,uVar22);
  }
  uVar22 = func_0x00f78a24(0x3d5db88);
  auVar44 = func_0x00f78ac0(uVar28,uVar22);
  uVar32 = auVar44._8_8_;
  puVar36 = auVar44._0_8_;
  ppppppuStack_1c0 = (undefined8 ******)0x3eb9000;
  lStack_1b8 = lVar33;
  puStack_198 = &System_String__Remove;
  pppppppuVar10 = &pppppppuStack_1a0;
  uVar20 = 0x3eb9000;
  puVar26 = puVar25;
  ppppppuStack_1d0 = ppppppuVar16;
  lStack_1c8 = lVar34;
  ppppppuStack_1b0 = (undefined8 ******)pppppuVar17;
  uStack_1a8 = uVar28;
  pppppppuStack_1a0 = &pppppppuStack_170;
  if ((bRam0000000003eb9463 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9463 = 1;
  }
  iVar12 = auVar44._8_4_;
  if (iVar12 < 0) {
    uVar22 = func_0x00f78a24(0x3d72d20);
    puVar25 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar22,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar32 = func_0x00f78aec();
    uVar22 = 0x3d7b9d0;
  }
  else {
    iVar14 = (int)puVar25;
    if (iVar14 < 0) {
      uVar22 = 0x3d6b268;
    }
    else {
      if (iVar14 <= *(int *)(puVar36 + 2) - iVar12) {
        iVar14 = *(int *)(puVar36 + 2) - iVar14;
        if (iVar14 == 0) {
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        uVar24 = func_0x00f834ac(iVar14);
        if (uVar24 != 0) {
          /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar24 + 0x14,(undefined1 *)((long)puVar36 + 0x14),iVar12 << 1,0);
          /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar24 + 0x14 + (uVar32 & 0xffffffff) * 2,
                          (undefined1 *)((long)puVar36 + 0x14) +
                          ((ulong)puVar25 & 0xffffffff) * 2 + (uVar32 & 0xffffffff) * 2,
                          (iVar14 - iVar12) * 2,0);
          return uVar24;
        }
        goto code_r0x029cf498;
      }
      uVar22 = 0x3d6ddc0;
    }
    uVar22 = func_0x00f78a24(uVar22);
    puVar25 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar22,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar32 = func_0x00f78aec();
    uVar22 = 0x3d78638;
  }
  uVar22 = func_0x00f78a24(uVar22);
  puVar26 = puVar25;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar32,uVar22,puVar25,0);
  uVar22 = func_0x00f78a24(0x3d5db78);
  func_0x00f78ac0(uVar32,uVar22);
code_r0x029cf498:
  auVar4._8_8_ = puVar25;
  auVar4._0_8_ = uVar32;
  puVar40 = &System_String__FormatHelper;
  auVar45 = func_0x00f78af4();
  ppppppuVar16 = &ppppppuStack_1d0;
  do {
    lVar21 = auVar45._8_8_;
    *(ulong *)((long)ppppppuVar16 + -0x30) = uVar20;
    *(undefined8 **)((long)ppppppuVar16 + -0x28) = puVar36;
    *(undefined1 (*) [16])((long)ppppppuVar16 + -0x20) = auVar4;
    *(undefined8 ********)((long)ppppppuVar16 + -0x10) = pppppppuVar10;
    *(undefined **)((long)ppppppuVar16 + -8) = puVar40;
    if (lVar21 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar22 = func_0x00f78aec();
      auVar45._8_8_ = uVar22;
      auVar45._0_8_ = auVar4._0_8_;
      uVar28 = func_0x00f78a24(0x3d79450);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar22,uVar28,0);
      uVar28 = func_0x00f78a24(0x3d5db10);
      func_0x00f78ac0(uVar22,uVar28);
    }
    else {
      uVar13 = *(uint *)(lVar21 + 0x10);
      uVar20 = (ulong)uVar13;
      iVar12 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar26,0);
      lVar34 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar13 + iVar12 * 8,0);
      puVar36 = puVar26;
      if (lVar34 != 0) {
        uVar22 = *puVar26;
        uVar18 = puVar26[3];
        uVar28 = puVar26[2];
        *(undefined8 *)((long)ppppppuVar16 + -0x48) = puVar26[1];
        *(undefined8 *)((long)ppppppuVar16 + -0x50) = uVar22;
        *(undefined8 *)((long)ppppppuVar16 + -0x38) = uVar18;
        *(undefined8 *)((long)ppppppuVar16 + -0x40) = uVar28;
        uVar22 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar34,auVar45._0_8_,lVar21,
                                 (undefined1 *)((long)ppppppuVar16 + -0x50),0);
        uVar32 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar22,0);
        return uVar32;
      }
    }
    auVar44 = func_0x00f78af4();
    uVar32 = auVar44._0_8_;
    auVar4._8_8_ = uVar32;
    auVar4._0_8_ = auVar45._0_8_;
    puVar26 = (undefined8 *)((long)ppppppuVar16 + -0xb0);
    *(undefined1 (*) [16])((long)ppppppuVar16 + -0x70) = auVar45;
    *(undefined1 **)((long)ppppppuVar16 + -0x60) = (undefined1 *)((long)ppppppuVar16 + -0x10);
    *(undefined **)((long)ppppppuVar16 + -0x58) = &System_String__Format;
    pppppppuVar10 = (undefined8 *******)((long)ppppppuVar16 + -0x60);
    if (auVar44._8_8_ == 0) {
      uVar22 = 0x3d79450;
      if (uVar32 != 0) {
        uVar22 = 0x3d77ce0;
      }
      uVar22 = func_0x00f78a24(uVar22);
      func_0x00f78a24(0x3d1fcf0);
      uVar28 = func_0x00f78aec();
      uVar27 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar28,uVar22,0);
      uVar18 = func_0x00f78a24(0x3d5db00);
      auVar45 = func_0x00f78ac0(uVar28,uVar18);
      puVar26 = (undefined8 *)((long)ppppppuVar16 + -0x110);
      *(undefined8 *)((long)ppppppuVar16 + -0xd0) = uVar28;
      *(undefined8 *)((long)ppppppuVar16 + -200) = uVar22;
      *(undefined8 ********)((long)ppppppuVar16 + -0xc0) = pppppppuVar10;
      *(undefined **)((long)ppppppuVar16 + -0xb8) = &System_String__Format;
      pppppppuVar10 = (undefined8 *******)((long)ppppppuVar16 + -0xc0);
      *(undefined8 *)((long)ppppppuVar16 + -0xe8) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0xf0) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0xd8) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0xe0) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296d94c((undefined1 *)((long)ppppppuVar16 + -0xf0),uVar27,0);
      *(undefined8 *)((long)ppppppuVar16 + -0x108) = *(undefined8 *)((long)ppppppuVar16 + -0xe8);
      *(undefined8 *)((long)ppppppuVar16 + -0x110) = *(undefined8 *)((long)ppppppuVar16 + -0xf0);
      *(undefined8 *)((long)ppppppuVar16 + -0xf8) = *(undefined8 *)((long)ppppppuVar16 + -0xd8);
      *(undefined8 *)((long)ppppppuVar16 + -0x100) = *(undefined8 *)((long)ppppppuVar16 + -0xe0);
      puVar40 = &UNK_029cf658;
      ppppppuVar16 = (undefined8 ******)((long)ppppppuVar16 + -0x110);
      auVar4 = auVar45;
    }
    else {
      *(undefined8 *)((long)ppppppuVar16 + -0x88) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0x90) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0x78) = 0;
      *(undefined8 *)((long)ppppppuVar16 + -0x80) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296dae8((undefined1 *)((long)ppppppuVar16 + -0x90),auVar44._8_8_,0);
      *(undefined8 *)((long)ppppppuVar16 + -0xa8) = *(undefined8 *)((long)ppppppuVar16 + -0x88);
      *(undefined8 *)((long)ppppppuVar16 + -0xb0) = *(undefined8 *)((long)ppppppuVar16 + -0x90);
      *(undefined8 *)((long)ppppppuVar16 + -0x98) = *(undefined8 *)((long)ppppppuVar16 + -0x78);
      *(undefined8 *)((long)ppppppuVar16 + -0xa0) = *(undefined8 *)((long)ppppppuVar16 + -0x80);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar32;
      auVar45 = auVar3 << 0x40;
      puVar40 = &UNK_029cf5a8;
      ppppppuVar16 = (undefined8 ******)((long)ppppppuVar16 + -0xb0);
    }
  } while( true );
}



// ============================================================
// RVA: 0x1590bf0 | Atlas.Contexts.FrontEndContextSettingsState.ShowSupportLink
// ============================================================

/* WARNING: Possible PIC construction at 0x01507264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150727c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029cf654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015075f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015074a0) */
/* WARNING: Removing unreachable block (ram,0x015074a4) */
/* WARNING: Removing unreachable block (ram,0x015074c8) */
/* WARNING: Removing unreachable block (ram,0x01507280) */
/* WARNING: Removing unreachable block (ram,0x01507294) */
/* WARNING: Removing unreachable block (ram,0x015072a8) */
/* WARNING: Removing unreachable block (ram,0x015072b8) */
/* WARNING: Removing unreachable block (ram,0x015072c0) */
/* WARNING: Removing unreachable block (ram,0x015072cc) */
/* WARNING: Removing unreachable block (ram,0x015072e0) */
/* WARNING: Removing unreachable block (ram,0x015072e4) */
/* WARNING: Removing unreachable block (ram,0x015072ec) */
/* WARNING: Removing unreachable block (ram,0x01507300) */
/* WARNING: Removing unreachable block (ram,0x01507310) */
/* WARNING: Removing unreachable block (ram,0x01507314) */
/* WARNING: Removing unreachable block (ram,0x0150731c) */
/* WARNING: Removing unreachable block (ram,0x01507328) */
/* WARNING: Removing unreachable block (ram,0x0150733c) */
/* WARNING: Removing unreachable block (ram,0x01507340) */
/* WARNING: Removing unreachable block (ram,0x01507348) */
/* WARNING: Removing unreachable block (ram,0x0150735c) */
/* WARNING: Removing unreachable block (ram,0x0150736c) */
/* WARNING: Removing unreachable block (ram,0x01507370) */
/* WARNING: Removing unreachable block (ram,0x01507378) */
/* WARNING: Removing unreachable block (ram,0x01507384) */
/* WARNING: Removing unreachable block (ram,0x01507400) */
/* WARNING: Removing unreachable block (ram,0x01507398) */
/* WARNING: Removing unreachable block (ram,0x0150739c) */
/* WARNING: Removing unreachable block (ram,0x015073a4) */
/* WARNING: Removing unreachable block (ram,0x015073d4) */
/* WARNING: Removing unreachable block (ram,0x01507268) */
/* WARNING: Removing unreachable block (ram,0x029cf658) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ***** Atlas_Contexts_FrontEndContextSettingsState__ShowSupportLink(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 ******ppppppuVar11;
  undefined8 uVar12;
  undefined8 *****pppppuVar13;
  int iVar6;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  int *piVar28;
  undefined8 *******pppppppuVar29;
  ulong uVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int aiStack_4c0 [202];
  undefined8 *****pppppuStack_198;
  undefined8 ******ppppppuStack_190;
  long lStack_188;
  undefined8 ******ppppppuStack_180;
  long lStack_178;
  undefined8 ******ppppppuStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar24 = *(long *)(param_1 + 0xd0);
  lVar25 = *(long *)(param_1 + 0xb8);
  lVar14 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
  pppppppuVar29 = *(undefined8 ********)(param_1 + 0xc0);
  lVar23 = *(long *)(param_1 + 200);
  uStack_70 = *(undefined8 *)PTR_03a5d648;
  ppppppuVar11 = (undefined8 ******)0x3d24dd8;
  if ((bRam0000000003eb4d20 & 1) == 0) {
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21940);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d7c7e0);
    func_0x00f78a20(0x3d677f8);
    func_0x00f78a20(0x3d698a8);
    func_0x00f78a20(0x3d77ca8);
    func_0x00f78a20(0x3d68648);
    func_0x00f78a20(0x3d66860);
    func_0x00f78a20(0x3d67c70);
    func_0x00f78a20(0x3d6f2d8);
    func_0x00f78a20(0x3d67140);
    func_0x00f78a20(0x3d70148);
    func_0x00f78a20(0x3d68458);
    func_0x00f78a20(0x3d7a498);
    func_0x00f78a20(0x3d717b0);
    func_0x00f78a20(0x3d6f2d0);
    func_0x00f78a20(0x3d6f758);
    func_0x00f78a20(0x3d6f798);
    bRam0000000003eb4d20 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(lVar9,0x800,0);
  lVar10 = /*UnityEngine.iOS.Device$$get_systemVersion*/ func_0x0322ccd8(0);
  if (lVar10 == 0) {
code_r0x015073f4:
    func_0x00f78af4();
    uVar12 = func_0x00f78b24();
    func_0x00f78ac0(uVar12,0);
    puVar32 = &Atlas_SupportEmail__EscapeURL;
    lVar10 = ___stack_chk_fail();
  }
  else {
    ppppppuVar11 = (undefined8 ******)/*System.String$$StartsWith*/ func_0x029ce8f8(lVar10,/*STR('14.')*/ uRam0000000003d677f8,0);
    if ((int)ppppppuVar11 != 0) {
      if (lVar9 == 0) goto code_r0x015073f4;
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('<html>')*/ uRam0000000003d68458,0);
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    }
    if ((lVar24 == 0) || (uVar12 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('MESSAGE_BODY_SUPPORT_EMAIL')*/ uRam0000000003d6f758,0), lVar9 == 0))
    goto code_r0x015073f4;
    unaff_x26 = 0x3d67000;
    unaff_x27 = 0x3d69000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,uVar12,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('------------')*/ uRam0000000003d67140,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('Build: ')*/ uRam0000000003d698a8,0);
    if (lVar14 == 0) goto code_r0x015073f4;
    unaff_x26 = 0x3d71000;
    uVar12 = /*ElectricSquare.Build.TeamCityBuildInfo$$get_DisplayChangelist*/ func_0x016cbb64(lVar14,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,uVar12,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('Quality settings: ')*/ uRam0000000003d717b0,0);
    if (lVar25 == 0) goto code_r0x015073f4;
    lVar14 = 0x3d6f000;
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar9,*(undefined4 *)(lVar25 + 0x18),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('Last session id: ')*/ uRam0000000003d6f2d8,0);
    if (lVar23 == 0) goto code_r0x015073f4;
    lVar14 = 0x3d21000;
    unaff_x26 = 0x3d6f000;
    /*Atlas.Networking.Network$$GetLastSessionId*/ func_0x0149e458(&uStack_b0,lVar23,0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uVar12 = func_0x00f78ae0(/*Unity.Collections.FixedString64Bytes_TypeInfo*/ uRam0000000003d21940,&uStack_f0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(lVar9,uVar12,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('Last network error: ')*/ uRam0000000003d6f2d0,0);
    if ((pppppppuVar29 == (undefined8 *******)0x0) ||
       (pppppuVar13 = pppppppuVar29[6], pppppuVar13 == (undefined8 *****)0x0))
    goto code_r0x015073f4;
    unaff_x27 = 0x3d70000;
    unaff_x28 = 0x3d7c000;
    pppppppuVar29 = (undefined8 *******)0x3d77ca8;
    unaff_x26 = 0x3d6f798;
    lVar14 = 0x3d1f498;
    uStack_f1 = (*(code *)(*pppppuVar13)[0x37])(pppppuVar13,(*pppppuVar13)[0x38]);
    uVar12 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_f1);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3a18(lVar9,uVar12,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('Native resolution: ')*/ uRam0000000003d70148,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar9,*(undefined4 *)(lVar25 + 0x74),0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('x')*/ uRam0000000003d7c7e0,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(lVar9,*(undefined4 *)(lVar25 + 0x78),0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    uVar12 = /*Core.Settings.DeviceQualitySettings$$GenerateDeviceSpecsString*/ func_0x0168bb30(0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,uVar12,0);
    /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar9,0);
    if ((int)ppppppuVar11 != 0) {
      /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar9,/*STR('</html>')*/ uRam0000000003d67c70,0);
    }
    lVar23 = /*STR('arcade-support@electricsquare.com')*/ lRam0000000003d77ca8;
    lVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar24,/*STR('MESSAGE_TITLE_SUPPORT_EMAIL')*/ uRam0000000003d6f798,0);
    puVar32 = &UNK_01507268;
  }
  lStack_120 = lVar25;
  lStack_118 = lVar24;
  ppppppuStack_110 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_108 = puVar32;
  if ((bRam0000000003eb4d21 & 1) == 0) {
    func_0x00f78a20(0x3d667f0);
    func_0x00f78a20(0x3d66fb0);
    func_0x00f78a20(0x3d667d8);
    func_0x00f78a20(0x3d667e8);
    func_0x00f78a20(0x3d667e0);
    bRam0000000003eb4d21 = 1;
  }
  pppppuVar13 = (undefined8 *****)/*UnityEngine.Networking.UnityWebRequest$$EscapeURL*/ func_0x032f9f08(lVar10,0);
  lVar25 = /*STR('+')*/ lRam0000000003d66fb0;
  lVar24 = /*STR('%20')*/ lRam0000000003d667f0;
  pppppppuStack_150 = pppppppuVar29;
  puStack_148 = (undefined *)lVar9;
  lStack_138 = lVar10;
  pppppppuStack_130 = &ppppppuStack_110;
  if (pppppuVar13 == (undefined8 *****)0x0) {
    lVar14 = func_0x00f78af4();
    uStack_140 = 0x3eb4000;
    puStack_128 = &Atlas_UI_SupportedInputIconsBehaviour__Init;
    /*Atlas.UI.SupportedInputIconsBehaviour$$SetRequirementsText*/ func_0x01507510();
    pppppppuVar4 = &pppppppuStack_150;
    if ((bRam0000000003eb4d22 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d22 = 1;
    }
    uVar12 = *(undefined8 *)(lVar14 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
    puVar32 = (undefined *)0x3d23990;
    pppppppuVar31 = &pppppppuStack_130;
    if (iVar6 == 0) {
      uVar12 = *(undefined8 *)(lVar14 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
      if (iVar6 == 0) {
        uVar12 = *(undefined8 *)(lVar14 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar23 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
        if ((int)lVar23 == 0) {
          return (undefined8 *****)lVar23;
        }
        lVar23 = *(long *)(lVar14 + 0x30);
        if (lVar23 == 0) goto code_r0x01507658;
        uVar16 = 0;
        pppppppuVar4 = (undefined8 *******)&lStack_120;
        lVar14 = lStack_138;
        uVar12 = uStack_140;
        puVar32 = puStack_148;
        pppppppuVar29 = pppppppuStack_150;
        pppppppuVar31 = pppppppuStack_130;
        puVar33 = puStack_128;
      }
      else {
        lVar23 = *(long *)(lVar14 + 0x28);
        if (lVar23 == 0) {
code_r0x01507658:
          lVar23 = func_0x00f78af4();
          lStack_178 = 0x3d23990;
          puStack_158 = &Atlas_UI_SupportedInputIconsBehaviour___ctor;
          ppppppuStack_180 = pppppppuVar29;
          ppppppuStack_170 = (undefined8 ******)uVar12;
          lStack_168 = lVar14;
          pppppppuStack_160 = &pppppppuStack_130;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return (undefined8 *****)lVar23;
        }
        uVar16 = 1;
        puVar33 = &UNK_015075fc;
      }
    }
    else {
      lVar23 = *(long *)(lVar14 + 0x20);
      if (lVar23 == 0) goto code_r0x01507658;
      uVar16 = 1;
      pppppppuVar4 = &pppppppuStack_150;
      puVar33 = &UNK_015075bc;
    }
    *(undefined8 ********)((long)pppppppuVar4 + -0x30) = pppppppuVar29;
    *(undefined **)((long)pppppppuVar4 + -0x28) = puVar32;
    *(undefined8 *)((long)pppppppuVar4 + -0x20) = uVar12;
    *(long *)((long)pppppppuVar4 + -0x18) = lVar14;
    *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar31;
    *(undefined **)((long)pppppppuVar4 + -8) = puVar33;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar14 = (*pcRam0000000003ebf4c0)(lVar23,uVar16);
    return (undefined8 *****)lVar14;
  }
  if (/*STR('+')*/ lRam0000000003d66fb0 == 0) {
    uStack_140 = 0x3eb4000;
    puStack_128 = &UNK_015074a0;
    func_0x00f78a24(0x3d1fcf0,0,/*STR('%20')*/ lRam0000000003d667f0,0);
    uVar12 = func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d7ac78);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar16,0);
    uVar16 = func_0x00f78a24(0x3d5db80);
    func_0x00f78ac0(uVar12,uVar16);
    pppppppuStack_160 = (undefined8 *******)0x3eb4000;
    puStack_148 = &System_Runtime_Remoting_SoapServices___cctor;
    ppppppuStack_170 = pppppppuVar29;
    lStack_168 = lVar9;
    puStack_158 = (undefined *)uVar12;
    pppppppuStack_150 = &pppppppuStack_130;
    if ((bRam0000000003eb93e7 & 1) == 0) {
      func_0x00f78a20(0x3d21d68);
      func_0x00f78a20(0x3d24ad8);
      bRam0000000003eb93e7 = 1;
    }
    uVar12 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar12,0);
    **(undefined8 **)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) = uVar12;
    uVar12 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar12,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 8) = uVar12;
    uVar12 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar12,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x10) = uVar12;
    uVar12 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar12,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x18) = uVar12;
    uVar12 = func_0x00f78aec(/*System.Collections.Hashtable_TypeInfo*/ uRam0000000003d21d68);
    lVar14 = /*System.Collections.Hashtable$$.ctor*/ func_0x02ae1b8c(uVar12,0);
    *(undefined8 *)(*(long *)(/*System.Runtime.Remoting.SoapServices_TypeInfo*/ lRam0000000003d24ad8 + 0xb8) + 0x20) = uVar12;
    return (undefined8 *****)lVar14;
  }
  uStack_140 = 0x3eb4000;
  puStack_128 = &UNK_015074a0;
  if ((bRam0000000003eb947d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb947d = 1;
  }
  if (lVar25 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d7ac78);
    puVar18 = (undefined8 *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar12);
  }
  else {
    if (*(int *)(lVar25 + 0x10) != 0) {
      if (*(int *)(pppppuVar13 + 2) == 0) {
        return pppppuVar13;
      }
      if (lVar24 == 0) {
        lVar24 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      }
      lStack_188 = *(long *)PTR_03a5d648;
      ppppppuStack_180 = (undefined8 ******)unaff_x28;
      lStack_178 = unaff_x27;
      ppppppuStack_170 = (undefined8 ******)unaff_x26;
      lStack_168 = lVar14;
      pppppppuStack_160 = (undefined8 *******)ppppppuVar11;
      puStack_158 = (undefined *)lVar23;
      if ((bRam0000000003eb947e & 1) == 0) {
        func_0x00f78a20(0x3d5db90);
        bRam0000000003eb947e = 1;
      }
      if (lVar25 == 0) {
code_r0x029d0f60:
        func_0x00f78af4();
code_r0x029d0f64:
        ___stack_chk_fail();
      }
      else {
        iVar6 = *(int *)(pppppuVar13 + 2);
        if (iVar6 < *(int *)(lVar25 + 0x10)) goto code_r0x029d0f24;
        if (*(int *)(lVar25 + 0x10) == 1) {
          if (lVar24 == 0) goto code_r0x029d0f60;
          if (*(int *)(lVar24 + 0x10) != 1) {
            (*(code *)PTR_03a5d628)();
            _bzero(aiStack_4c0,800);
            goto code_r0x029d0dc8;
          }
          uVar12 = /*System.String$$get_Chars*/ func_0x029c5420(lVar25,0);
          uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar24,0);
          if (*(long *)PTR_03a5d648 == lStack_188) {
            pppppuVar15 = pppppuVar13;
            if ((((uint)uVar12 != uVar7) && (iVar6 = *(int *)(pppppuVar13 + 2), iVar6 != 0)) &&
               (uVar5 = /*System.String$$IndexOfUnchecked*/ func_0x029d0624(pppppuVar13,uVar12,0,iVar6), uVar5 != 0xffffffff)) {
              if ((int)uVar5 < 4) {
                uVar5 = 0;
              }
              uVar30 = (ulong)uVar5;
              pppppuVar15 = (undefined8 *****)func_0x00f834ac(iVar6);
              if (pppppuVar15 == (undefined8 *****)0x0) {
                lVar14 = 0;
              }
              else {
                iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
                lVar14 = (long)pppppuVar15 + (long)iVar6;
              }
              if (uVar5 != 0) {
                /*System.String$$CharCopy*/ func_0x029d0c3c(lVar14,(long)pppppuVar13 + 0x14,uVar30);
              }
              lVar23 = uVar30 * 2;
              if (lVar23 + (long)*(int *)(pppppuVar13 + 2) * -2 != 0) {
                lVar24 = (long)*(int *)(pppppuVar13 + 2) * 2 + uVar30 * -2;
                puVar21 = (ushort *)(lVar23 + (long)pppppuVar13 + 0x14);
                puVar22 = (undefined2 *)(lVar23 + lVar14);
                do {
                  uVar5 = uVar7;
                  if ((uint)*puVar21 != (uint)uVar12) {
                    uVar5 = (uint)*puVar21;
                  }
                  *puVar22 = (short)uVar5;
                  lVar24 = lVar24 + -2;
                  puVar21 = puVar21 + 1;
                  puVar22 = puVar22 + 1;
                } while (lVar24 != 0);
              }
            }
            return pppppuVar15;
          }
          goto code_r0x029d0f64;
        }
        (*(code *)PTR_03a5d628)();
        _bzero(aiStack_4c0,800);
        if (lVar24 == 0) {
          lVar14 = 0;
        }
        else {
code_r0x029d0dc8:
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar14 = lVar24 + iVar6;
          iVar6 = *(int *)(pppppuVar13 + 2);
        }
        if (iVar6 < 1) {
code_r0x029d0f24:
          if (*(long *)PTR_03a5d648 == lStack_188) {
            return pppppuVar13;
          }
          goto code_r0x029d0f64;
        }
        uVar30 = 0;
        iVar8 = 0;
        piVar28 = aiStack_4c0;
        do {
          iVar8 = /*System.String$$IndexOfUnchecked*/ func_0x029d07ac(pppppuVar13,lVar25,iVar8,iVar6 - iVar8);
          if (iVar8 < 0) break;
          if (uVar30 == 200) {
            pppppuVar13 = (undefined8 *****)/*System.String$$ReplaceFallback*/ func_0x029d104c(pppppuVar13,lVar25,lVar24,200);
            goto code_r0x029d0f24;
          }
          uVar30 = uVar30 + 1;
          *piVar28 = iVar8;
          iVar8 = *(int *)(lVar25 + 0x10) + iVar8;
          iVar6 = *(int *)(pppppuVar13 + 2);
          piVar28 = piVar28 + 1;
        } while (iVar8 < iVar6);
        if ((int)uVar30 == 0) goto code_r0x029d0f24;
        if (lVar24 == 0) {
          func_0x00f78af4();
          goto code_r0x029d1034;
        }
        lVar23 = (long)*(int *)(lVar24 + 0x10) - (long)*(int *)(lVar25 + 0x10);
        if (lVar23 != (int)lVar23) {
          uVar12 = func_0x00f78b08();
          func_0x00f78ac0(uVar12,uRam0000000003d5db90);
          goto code_r0x029d1034;
        }
        iVar6 = *(int *)(lVar24 + 0x10) - *(int *)(lVar25 + 0x10);
        lVar23 = (uVar30 & 0xffffffff) * (long)iVar6;
        if (lVar23 - (int)lVar23 == 0) {
          iVar6 = iVar6 * (int)uVar30;
          lVar23 = (long)*(int *)(pppppuVar13 + 2) + (long)iVar6;
          if (lVar23 == (int)lVar23) {
            ppppppuStack_190 = (undefined8 ******)pppppuVar13;
            pppppuVar15 = (undefined8 *****)func_0x00f834ac(iVar6 + *(int *)(pppppuVar13 + 2));
            pppppuStack_198 = pppppuVar15;
            if (pppppuVar15 == (undefined8 *****)0x0) {
              lVar23 = 0;
            }
            else {
              iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar23 = (long)pppppuVar15 + (long)iVar6;
            }
            iVar6 = 0;
            iVar8 = 0;
            piVar28 = aiStack_4c0;
            do {
              iVar1 = *piVar28;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar23 + (long)iVar6 * 2,(long)pppppuVar13 + (long)iVar8 * 2 + 0x14,
                              iVar1 - iVar8);
              iVar6 = (iVar1 - iVar8) + iVar6;
              iVar8 = *(int *)(lVar25 + 0x10) + *piVar28;
              /*System.String$$CharCopy*/ func_0x029d0c3c(lVar23 + (long)iVar6 * 2,lVar14,*(undefined4 *)(lVar24 + 0x10));
              iVar6 = *(int *)(lVar24 + 0x10) + iVar6;
              uVar30 = uVar30 - 1;
              piVar28 = piVar28 + 1;
            } while (uVar30 != 0);
            /*System.String$$CharCopy*/ func_0x029d0c3c(lVar23 + (long)iVar6 * 2,(long)pppppuVar13 + (long)iVar8 * 2 + 0x14,
                            *(int *)(ppppppuStack_190 + 2) - iVar8);
            pppppuVar13 = pppppuStack_198;
            goto code_r0x029d0f24;
          }
        }
      }
      uVar12 = func_0x00f78b08();
      func_0x00f78ac0(uVar12,uRam0000000003d5db90);
code_r0x029d1034:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x29d1038);
      (*pcVar3)();
    }
    func_0x00f78a24(0x3d1fce8);
    uVar16 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d7ac80);
    puVar18 = (undefined8 *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar12);
  }
  uVar12 = func_0x00f78a24(0x3d5db88);
  auVar34 = func_0x00f78ac0(uVar16,uVar12);
  uVar30 = auVar34._8_8_;
  puVar26 = auVar34._0_8_;
  ppppppuStack_180 = (undefined8 ******)0x3eb9000;
  lStack_178 = lVar24;
  puStack_158 = &System_String__Remove;
  pppppppuVar29 = &pppppppuStack_160;
  uVar27 = 0x3eb9000;
  puVar19 = puVar18;
  ppppppuStack_190 = ppppppuVar11;
  lStack_188 = lVar23;
  ppppppuStack_170 = (undefined8 ******)pppppuVar13;
  lStack_168 = uVar16;
  pppppppuStack_160 = &pppppppuStack_130;
  if ((bRam0000000003eb9463 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9463 = 1;
  }
  iVar6 = auVar34._8_4_;
  if (iVar6 < 0) {
    uVar12 = func_0x00f78a24(0x3d72d20);
    puVar18 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar30 = func_0x00f78aec();
    uVar12 = 0x3d7b9d0;
  }
  else {
    iVar8 = (int)puVar18;
    if (iVar8 < 0) {
      uVar12 = 0x3d6b268;
    }
    else {
      if (iVar8 <= *(int *)(puVar26 + 2) - iVar6) {
        iVar8 = *(int *)(puVar26 + 2) - iVar8;
        if (iVar8 == 0) {
          return (undefined8 *****)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        lVar14 = func_0x00f834ac(iVar8);
        if (lVar14 != 0) {
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar14 + 0x14,(undefined1 *)((long)puVar26 + 0x14),iVar6 << 1,0);
          /*System.Buffer$$Memcpy*/ func_0x029426bc(lVar14 + 0x14 + (uVar30 & 0xffffffff) * 2,
                          (undefined1 *)((long)puVar26 + 0x14) +
                          ((ulong)puVar18 & 0xffffffff) * 2 + (uVar30 & 0xffffffff) * 2,
                          (iVar8 - iVar6) * 2,0);
          return (undefined8 *****)lVar14;
        }
        goto code_r0x029cf498;
      }
      uVar12 = 0x3d6ddc0;
    }
    uVar12 = func_0x00f78a24(uVar12);
    puVar18 = (undefined8 *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar30 = func_0x00f78aec();
    uVar12 = 0x3d78638;
  }
  uVar12 = func_0x00f78a24(uVar12);
  puVar19 = puVar18;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar30,uVar12,puVar18,0);
  uVar12 = func_0x00f78a24(0x3d5db78);
  func_0x00f78ac0(uVar30,uVar12);
code_r0x029cf498:
  auVar2._8_8_ = puVar18;
  auVar2._0_8_ = uVar30;
  puVar32 = &System_String__FormatHelper;
  auVar34 = func_0x00f78af4();
  ppppppuVar11 = &ppppppuStack_190;
  do {
    lVar14 = auVar34._8_8_;
    *(ulong *)((long)ppppppuVar11 + -0x30) = uVar27;
    *(undefined8 **)((long)ppppppuVar11 + -0x28) = puVar26;
    *(undefined1 (*) [16])((long)ppppppuVar11 + -0x20) = auVar2;
    *(undefined8 ********)((long)ppppppuVar11 + -0x10) = pppppppuVar29;
    *(undefined **)((long)ppppppuVar11 + -8) = puVar32;
    if (lVar14 == 0) {
      func_0x00f78a24(0x3d1fcf0);
      uVar12 = func_0x00f78aec();
      auVar34._8_8_ = uVar12;
      auVar34._0_8_ = auVar2._0_8_;
      uVar16 = func_0x00f78a24(0x3d79450);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar16,0);
      uVar16 = func_0x00f78a24(0x3d5db10);
      func_0x00f78ac0(uVar12,uVar16);
    }
    else {
      uVar7 = *(uint *)(lVar14 + 0x10);
      uVar27 = (ulong)uVar7;
      iVar6 = /*System.ParamsArray$$get_Length*/ func_0x0296db4c(puVar19,0);
      lVar23 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(uVar7 + iVar6 * 8,0);
      puVar26 = puVar19;
      if (lVar23 != 0) {
        uVar12 = *puVar19;
        uVar17 = puVar19[3];
        uVar16 = puVar19[2];
        *(undefined8 *)((long)ppppppuVar11 + -0x48) = puVar19[1];
        *(undefined8 *)((long)ppppppuVar11 + -0x50) = uVar12;
        *(undefined8 *)((long)ppppppuVar11 + -0x38) = uVar17;
        *(undefined8 *)((long)ppppppuVar11 + -0x40) = uVar16;
        uVar12 = /*System.Text.StringBuilder$$AppendFormatHelper*/ func_0x029d3ccc(lVar23,auVar34._0_8_,lVar14,
                                 (undefined1 *)((long)ppppppuVar11 + -0x50),0);
        lVar14 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(uVar12,0);
        return (undefined8 *****)lVar14;
      }
    }
    auVar35 = func_0x00f78af4();
    uVar30 = auVar35._0_8_;
    auVar2._8_8_ = uVar30;
    auVar2._0_8_ = auVar34._0_8_;
    puVar19 = (undefined8 *)((long)ppppppuVar11 + -0xb0);
    *(undefined1 (*) [16])((long)ppppppuVar11 + -0x70) = auVar34;
    *(undefined1 **)((long)ppppppuVar11 + -0x60) = (undefined1 *)((long)ppppppuVar11 + -0x10);
    *(undefined **)((long)ppppppuVar11 + -0x58) = &System_String__Format;
    pppppppuVar29 = (undefined8 *******)((long)ppppppuVar11 + -0x60);
    if (auVar35._8_8_ == 0) {
      uVar12 = 0x3d79450;
      if (uVar30 != 0) {
        uVar12 = 0x3d77ce0;
      }
      uVar12 = func_0x00f78a24(uVar12);
      func_0x00f78a24(0x3d1fcf0);
      uVar16 = func_0x00f78aec();
      uVar20 = 0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar12,0);
      uVar17 = func_0x00f78a24(0x3d5db00);
      auVar34 = func_0x00f78ac0(uVar16,uVar17);
      puVar19 = (undefined8 *)((long)ppppppuVar11 + -0x110);
      *(undefined8 *)((long)ppppppuVar11 + -0xd0) = uVar16;
      *(undefined8 *)((long)ppppppuVar11 + -200) = uVar12;
      *(undefined8 ********)((long)ppppppuVar11 + -0xc0) = pppppppuVar29;
      *(undefined **)((long)ppppppuVar11 + -0xb8) = &System_String__Format;
      pppppppuVar29 = (undefined8 *******)((long)ppppppuVar11 + -0xc0);
      *(undefined8 *)((long)ppppppuVar11 + -0xe8) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0xf0) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0xd8) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0xe0) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296d94c((undefined1 *)((long)ppppppuVar11 + -0xf0),uVar20,0);
      *(undefined8 *)((long)ppppppuVar11 + -0x108) = *(undefined8 *)((long)ppppppuVar11 + -0xe8);
      *(undefined8 *)((long)ppppppuVar11 + -0x110) = *(undefined8 *)((long)ppppppuVar11 + -0xf0);
      *(undefined8 *)((long)ppppppuVar11 + -0xf8) = *(undefined8 *)((long)ppppppuVar11 + -0xd8);
      *(undefined8 *)((long)ppppppuVar11 + -0x100) = *(undefined8 *)((long)ppppppuVar11 + -0xe0);
      puVar32 = &UNK_029cf658;
      ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + -0x110);
      auVar2 = auVar34;
    }
    else {
      *(undefined8 *)((long)ppppppuVar11 + -0x88) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0x90) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0x78) = 0;
      *(undefined8 *)((long)ppppppuVar11 + -0x80) = 0;
      /*System.ParamsArray$$.ctor*/ func_0x0296dae8((undefined1 *)((long)ppppppuVar11 + -0x90),auVar35._8_8_,0);
      *(undefined8 *)((long)ppppppuVar11 + -0xa8) = *(undefined8 *)((long)ppppppuVar11 + -0x88);
      *(undefined8 *)((long)ppppppuVar11 + -0xb0) = *(undefined8 *)((long)ppppppuVar11 + -0x90);
      *(undefined8 *)((long)ppppppuVar11 + -0x98) = *(undefined8 *)((long)ppppppuVar11 + -0x78);
      *(undefined8 *)((long)ppppppuVar11 + -0xa0) = *(undefined8 *)((long)ppppppuVar11 + -0x80);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar30;
      auVar34 = auVar35 << 0x40;
      puVar32 = &UNK_029cf5a8;
      ppppppuVar11 = (undefined8 ******)((long)ppppppuVar11 + -0xb0);
    }
  } while( true );
}



// ============================================================
// RVA: 0x1590c38 | Atlas.Contexts.FrontEndContextSettingsState.ShowPrivacyPolicyLink
// ============================================================

void Atlas_Contexts_FrontEndContextSettingsState__ShowPrivacyPolicyLink(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5146 & 1) == 0) {
    func_0x00f78a20(0x3d798c0);
    bRam0000000003eb5146 = 1;
  }
  uVar1 = /*STR('https://electricsquare.com/keywords-studios-privacy-policy-for-apple-arcade-games-3rd-party/')*/ uRam0000000003d798c0;
  if (pcRam0000000003ebe940 == (code *)0x0) {
    pcRam0000000003ebe940 =
         (code *)func_0x00f789d4("UnityEngine.Application::OpenURL(System.String)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebe940)(uVar1);
  return;
}



// ============================================================
// RVA: 0x1590c80 | Atlas.Contexts.FrontEndContextSettingsState.ExitSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

ulong Atlas_Contexts_FrontEndContextSettingsState__ExitSelected
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  long **pplVar3;
  long **pplVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 unaff_x23;
  long *plVar22;
  undefined8 unaff_x24;
  int iVar23;
  undefined8 unaff_x25;
  ulong uVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_111 [89];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  uVar21 = 0x3eb5000;
  lVar18 = 0x3d25458;
  if ((bRam0000000003eb5147 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5147 = 1;
  }
  plVar16 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ plRam0000000003d194c8;
  lVar15 = *(long *)(param_1 + 0x78);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(plVar16,0);
  if (lVar15 != 0) {
    /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar15,uVar7,0,0,uRam0000000003d2a5b0);
    return 1;
  }
  lVar8 = func_0x00f78af4();
  uStack_60 = 0x3eb5000;
  lStack_58 = 0x3d25458;
  plStack_50 = plVar16;
  puStack_38 = &Atlas_Contexts_FrontEndContextSettingsState__ToggleMultiplayerConsent;
  plVar16 = (long *)0x3eb5000;
  lStack_48 = lVar15;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5148 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d56ce8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d41670);
    func_0x00f78a20(0x3d6f730);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d6f778);
    bRam0000000003eb5148 = 1;
  }
  lVar15 = 0x3d25458;
  if ((*(long *)(lVar8 + 0x90) == 0) ||
     (lVar9 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x90),0), lVar9 == 0)) goto code_r0x01590ef4;
  lVar15 = lVar18;
  if (*(char *)(lVar9 + 0x28) == '\0') {
    plVar16 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar16,0);
    lVar18 = /*STR('MESSAGE_BODY_CONSENT')*/ lRam0000000003d6f730;
    if (plVar16 == (long *)0x0) goto code_r0x01590ef4;
    plVar16[5] = /*STR('MESSAGE_TITLE_CONSENT')*/ lRam0000000003d6f778;
    plVar16[6] = lVar18;
    lVar18 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar16[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar16[8] = lVar18;
    lVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_3 = puRam0000000003d56ce8;
    /*System.Action$$.ctor*/ func_0x02924c80(lVar15,lVar8,puRam0000000003d56ce8,0);
    plVar16[0xb] = lVar15;
    plVar22 = *(long **)(lVar8 + 0x98);
    if (plVar22 == (long *)0x0) goto code_r0x01590ef4;
    pplVar4 = (long **)&stack0xffffffffffffffd0;
    lVar18 = lStack_48;
    plVar13 = plStack_50;
    lVar15 = lStack_58;
    uVar21 = uStack_60;
    pppppppuVar25 = (undefined8 *******)ppppppuStack_40;
    puVar26 = puStack_38;
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
    plVar17 = plRam0000000003d3e0e8;
    *(undefined8 *)((long)pplVar4 + -0x30) = uVar21;
    *(long *)((long)pplVar4 + -0x28) = lVar15;
    *(long **)((long)pplVar4 + -0x20) = plVar13;
    *(long *)((long)pplVar4 + -0x18) = lVar18;
    *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar25;
    *(undefined **)((long)pplVar4 + -8) = puVar26;
    uVar21 = 0x3eb8000;
    plVar13 = plRam0000000003d3e0e8;
    if ((bRam0000000003eb832a & 1) == 0) {
      func_0x00f78a20(0x3d3b330);
      func_0x00f78a20(0x3d3b348);
      func_0x00f78a20(0x3d717e8);
      bRam0000000003eb832a = 1;
    }
    if (plVar16 != (long *)0x0) {
      uVar21 = 0x3d71000;
      uVar7 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
      plVar13 = (long *)0x0;
      uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar7);
      if (plVar22 != (long *)0x0) {
        plVar13 = *(long **)(*(long *)(plVar17[3] + 0xc0) + 8);
        (*(code *)*plVar13)(plVar22,uVar7);
        if (plVar22[7] != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar22[7],plVar16,uRam0000000003d3b330);
          plVar13 = (long *)plVar22[8];
          if ((plVar13 == (long *)0x0) || ((int)plVar16[2] <= (int)plVar13[2])) {
code_r0x025dfcb4:
            uVar24 = (*(code *)**(undefined8 **)(*(long *)(plVar17[3] + 0xc0) + 0x30))(plVar22);
            if ((uVar24 & 1) != 0) {
              return uVar24;
            }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar24 = (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
            return uVar24;
          }
          if (plVar22[7] != 0) {
            /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar22[7],0,plVar13,uRam0000000003d3b348);
            (*(code *)**(undefined8 **)(*(long *)(plVar17[3] + 0xc0) + 0x60))(plVar22);
            goto code_r0x025dfcb4;
          }
        }
      }
    }
    auVar27 = func_0x00f78af4();
    plVar12 = auVar27._8_8_;
    lVar18 = auVar27._0_8_;
    *(undefined8 *)((long)pplVar4 + -0x60) = uVar21;
    *(long **)((long)pplVar4 + -0x58) = plVar16;
    *(long **)((long)pplVar4 + -0x50) = plVar17;
    *(long **)((long)pplVar4 + -0x48) = plVar22;
    *(undefined1 **)((long)pplVar4 + -0x40) = (undefined1 *)((long)pplVar4 + -0x10);
    *(undefined **)((long)pplVar4 + -0x38) =
         &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
    if (plVar12 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
      plVar17 = (long *)0x0;
      plVar22 = plVar12;
      plVar16 = plVar13;
      if (lVar18 != 0) {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x70))(lVar18,uVar7);
        if ((uVar6 & 1) == 0) {
          (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x78))(lVar18,plVar12);
        }
        return (ulong)(uVar6 ^ 1);
      }
    }
    auVar27 = func_0x00f78af4();
    *(undefined8 *)((long)pplVar4 + -0xb0) = unaff_x26;
    *(undefined8 *)((long)pplVar4 + -0xa8) = unaff_x25;
    *(undefined8 *)((long)pplVar4 + -0xa0) = unaff_x24;
    *(undefined8 *)((long)pplVar4 + -0x98) = unaff_x23;
    *(undefined8 *)((long)pplVar4 + -0x90) = uVar21;
    *(long **)((long)pplVar4 + -0x88) = plVar16;
    *(long **)((long)pplVar4 + -0x80) = plVar17;
    *(long **)((long)pplVar4 + -0x78) = plVar22;
    *(undefined1 **)((long)pplVar4 + -0x70) = (undefined1 *)((long)pplVar4 + -0x40);
    *(undefined **)((long)pplVar4 + -0x68) =
         &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
    iVar5 = 0x3eb8000;
    if ((bRam0000000003eb832b & 1) == 0) {
      func_0x00f78a20(0x3d3b358);
      func_0x00f78a20(0x3d3b360);
      bRam0000000003eb832b = 1;
    }
    lVar18 = *(long *)(auVar27._0_8_ + 0x38);
    if (lVar18 != 0) {
      iVar5 = *(int *)(lVar18 + 0x18);
      if (iVar5 < 1) goto code_r0x025dfe48;
      uVar6 = 0;
      iVar23 = -0x80000000;
      uVar19 = 0;
      do {
        if (*(uint *)(lVar18 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if (lVar18 == 0) break;
        iVar1 = *(int *)(lVar18 + 0x10);
        uVar20 = uVar6;
        if (iVar1 <= iVar23) {
          uVar20 = uVar19;
        }
        if (iVar5 - 1U == uVar6) goto code_r0x025dfe4c;
        if (iVar1 <= iVar23) {
          iVar1 = iVar23;
        }
        lVar18 = *(long *)(auVar27._0_8_ + 0x38);
        uVar6 = uVar6 + 1;
        iVar23 = iVar1;
        uVar19 = uVar20;
      } while (lVar18 != 0);
    }
    func_0x00f78af4();
code_r0x025dfe48:
    uVar20 = 0;
code_r0x025dfe4c:
    *auVar27._8_8_ = uVar20;
    return (ulong)(0 < iVar5);
  }
  if ((*(long *)(lVar8 + 0x90) == 0) ||
     (lVar18 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x90),0), lVar18 == 0)) {
code_r0x01590ef4:
    lVar9 = func_0x00f78af4();
    puStack_68 = &Atlas_Contexts_FrontEndContextSettingsState__MultiplayerConsentGiven;
    plStack_80 = plVar16;
    lStack_78 = lVar8;
    ppppppuStack_70 = &ppppppuStack_40;
    if ((bRam0000000003eb5149 & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      bRam0000000003eb5149 = 1;
    }
    if ((*(long *)(lVar9 + 0x90) != 0) &&
       (lVar18 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar9 + 0x90),0), lVar18 != 0)) {
      *(undefined1 *)(lVar18 + 0x28) = 1;
      if (*(long *)(lVar9 + 0x90) != 0) {
        /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar9 + 0x90),0);
        lVar18 = *(long *)(lVar9 + 0xf8);
        if (lVar18 != 0) {
          uVar7 = 1;
          pplVar3 = (long **)&uStack_60;
          lVar8 = lStack_78;
          plVar22 = plStack_80;
          pppppppuVar25 = (undefined8 *******)ppppppuStack_70;
          puStack_b8 = puStack_68;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar8 = func_0x00f78af4();
    uStack_b0 = 0x3eb5000;
    plStack_a0 = (long *)0x3eb5000;
    puStack_88 = &Atlas_Contexts_FrontEndContextSettingsState__ToggleAnalyticsConsent;
    pppppppuVar25 = &ppppppuStack_90;
    lStack_a8 = lVar15;
    lStack_98 = lVar9;
    ppppppuStack_90 = &ppppppuStack_70;
    if ((bRam0000000003eb514a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56cd0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514a = 1;
    }
    plVar22 = (long *)0x3eb5000;
    if (*(long *)(lVar8 + 0x90) != 0) {
      param_3 = (undefined8 *)0x0;
      iVar5 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar8 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,0,0);
      if (iVar5 == 2) {
        plVar22 = (long *)0x3d688d8;
        if (*(long *)(lVar8 + 0x90) != 0) {
          param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar8 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,1,0);
          if (*(long *)(lVar8 + 0xe8) != 0) {
            param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar8 + 0xe8),0,1,0);
            lVar18 = *(long *)(lVar8 + 0x100);
            plVar22 = (long *)0x3d688d8;
            if (lVar18 != 0) {
              uVar7 = 0;
              pplVar3 = &plStack_80;
              lVar8 = lStack_98;
              plVar22 = plStack_a0;
              lVar15 = lStack_a8;
              uVar21 = uStack_b0;
              pppppppuVar25 = (undefined8 *******)ppppppuStack_90;
              puStack_b8 = puStack_88;
              goto UnityEngine_Events_UnityEvent_bool___Invoke;
            }
          }
        }
      }
      else {
        plVar22 = *(long **)(lVar8 + 0x98);
        lVar15 = *(long *)(lVar8 + 0xe8);
        uVar21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_3 = puRam0000000003d56cd0;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar21,lVar8,puRam0000000003d56cd0,0);
        if (lVar15 != 0) {
          param_3 = (undefined8 *)0x0;
          plVar16 = (long *)/*Atlas.Analytics.AtlasAnalyticsManager$$GetConsentRequestMessageBoxData*/ func_0x01457e94(lVar15,uVar21,0,0);
          if (plVar22 != (long *)0x0) {
            pplVar4 = &plStack_80;
            lVar18 = lStack_98;
            plVar13 = plStack_a0;
            lVar15 = lStack_a8;
            uVar21 = uStack_b0;
            pppppppuVar25 = (undefined8 *******)ppppppuStack_90;
            puVar26 = puStack_88;
            goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
          }
        }
      }
    }
    lVar18 = func_0x00f78af4();
    puStack_b8 = &Atlas_Contexts_FrontEndContextSettingsState__AnalyticsConsentGiven;
    if ((bRam0000000003eb514b & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514b = 1;
    }
    if (*(long *)(lVar18 + 0x90) != 0) {
      param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar18 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,2,0);
      if (*(long *)(lVar18 + 0xe8) != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar18 + 0xe8),1,0,0);
        lVar18 = *(long *)(lVar18 + 0x100);
        if (lVar18 != 0) {
          uVar7 = 1;
          pplVar3 = (long **)&uStack_b0;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar18 = func_0x00f78af4();
    if ((bRam0000000003eb514c & 1) == 0) {
      func_0x00f78a20(0x3d2dc18);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d2dc20);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb514c = 1;
    }
    if ((*(long *)(lVar18 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(lVar18 + 0xa0) != 0)) {
      lVar15 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0);
      if ((int)uVar24 == 0) {
        return uVar24;
      }
      if (lVar15 != 0) {
        uVar21 = *(undefined8 *)(lVar15 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = (undefined8 *)0x0;
        uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar21,0);
        if ((int)uVar24 == 0) {
          return uVar24;
        }
        if (*(long *)(lVar18 + 0x88) != 0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar18 + 0x88),0,0,0);
          param_3 = (undefined8 *)
                    Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (*(undefined8 *)(lVar15 + 0x28),*(undefined8 *)(lVar15 + 0x38),
                               *(undefined8 *)(lVar18 + 0xa8),*(undefined8 *)(lVar18 + 0xd8),
                               *(undefined8 *)(lVar18 + 0xe0),0);
          lVar18 = *(long *)(lVar18 + 0xb0);
          if (lVar18 != 0) {
            uVar21 = *(undefined8 *)(lVar15 + 0x20);
            cVar2 = *(char *)(lVar18 + 0x50);
            if (cVar2 == '\0') {
              *(undefined1 *)(lVar18 + 0x50) = 1;
              *(undefined8 *)(lVar18 + 0x40) = uVar21;
              *(undefined8 **)(lVar18 + 0x48) = param_3;
            }
            return (ulong)(cVar2 == '\0');
          }
        }
      }
    }
    uVar24 = func_0x00f78af4();
    if ((bRam0000000003eb514d & 1) == 0) {
      func_0x00f78a20(0x3d405a8);
      bRam0000000003eb514d = 1;
    }
    if (uVar24 == 0) {
      auVar27 = func_0x00f78af4(0,uRam0000000003d405a8);
      uVar24 = auVar27._0_8_;
      *(undefined8 *)(uVar24 + 0x10) = *param_3;
      *(long *)(uVar24 + 0x20) = auVar27._8_8_;
      *(undefined8 **)(uVar24 + 0x28) = param_3;
      return uVar24;
    }
  }
  else {
    *(undefined1 *)(lVar18 + 0x28) = 0;
    if (*(long *)(lVar8 + 0x90) == 0) goto code_r0x01590ef4;
    /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar8 + 0x90),0);
    lVar18 = *(long *)(lVar8 + 0xf8);
    if (lVar18 == 0) goto code_r0x01590ef4;
    uVar7 = 0;
    pplVar3 = (long **)&stack0xffffffffffffffd0;
    lVar8 = lStack_48;
    plVar22 = plStack_50;
    lVar15 = lStack_58;
    uVar21 = uStack_60;
    pppppppuVar25 = (undefined8 *******)ppppppuStack_40;
    puStack_b8 = puStack_38;
UnityEngine_Events_UnityEvent_bool___Invoke:
    lVar9 = lRam0000000003d41670;
    *(undefined8 *)((long)pplVar3 + -0x60) = unaff_x28;
    *(undefined8 *)((long)pplVar3 + -0x58) = unaff_x27;
    *(undefined8 *)((long)pplVar3 + -0x50) = unaff_x26;
    *(undefined8 *)((long)pplVar3 + -0x48) = unaff_x25;
    *(undefined8 *)((long)pplVar3 + -0x40) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x38) = unaff_x23;
    *(undefined8 *)((long)pplVar3 + -0x30) = uVar21;
    *(long *)((long)pplVar3 + -0x28) = lVar15;
    *(long **)((long)pplVar3 + -0x20) = plVar22;
    *(long *)((long)pplVar3 + -0x18) = lVar8;
    *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar25;
    *(undefined **)((long)pplVar3 + -8) = puStack_b8;
    if ((bRam0000000003eb6c40 & 1) == 0) {
      func_0x00f78a20(0x3d22a90);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1f218);
      bRam0000000003eb6c40 = 1;
    }
    uVar24 = 0x3eb6000;
    if ((lVar18 != 0) && (uVar10 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar18,0), uVar10 != 0)) {
      uVar14 = (ulong)*(uint *)(uVar10 + 0x18);
      uVar24 = uVar10;
      if (0 < (int)*(uint *)(uVar10 + 0x18)) {
        lVar15 = 4;
        do {
          uVar24 = lVar15 - 4;
          if ((uVar14 & 0xffffffff) <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar21 = *(undefined8 *)(*(long *)(uVar10 + 0x10) + lVar15 * 8);
          lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          plVar16 = (long *)func_0x00f78adc(uVar21,lVar8);
          if (plVar16 == (long *)0x0) {
            if (*(uint *)(uVar10 + 0x18) <= uVar24) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = func_0x00f78adc(*(undefined8 *)(*(long *)(uVar10 + 0x10) + lVar15 * 8),
                                    /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
            if (lVar8 == 0) {
              if (*(uint *)(uVar10 + 0x18) <= uVar24) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar22 = *(long **)(*(long *)(uVar10 + 0x10) + lVar15 * 8);
              plVar16 = *(long **)(lVar18 + 0x28);
              if (plVar16 == (long *)0x0) {
                plVar16 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
                *(long **)(lVar18 + 0x28) = plVar16;
              }
              *(char *)((long)pplVar3 + -0x61) = (char)uVar7;
              lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x38);
              if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar8);
              }
              lVar8 = func_0x00f78ae0(lVar8,(undefined1 *)((long)pplVar3 + -0x61));
              uVar24 = uVar10;
              if (plVar16 == (long *)0x0) goto code_r0x01b82ca4;
              if ((lVar8 != 0) &&
                 (lVar11 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)) {
                uVar21 = func_0x00f78b14();
                goto code_r0x01b82cb4;
              }
              if ((int)plVar16[3] == 0) goto code_r0x01b82ca8;
              plVar16[4] = lVar8;
              if (plVar22 == (long *)0x0) goto code_r0x01b82ca4;
              uVar24 = (**(code **)(*plVar22 + 0x178))
                                 (plVar22,*(undefined8 *)(lVar18 + 0x28),
                                  *(undefined8 *)(*plVar22 + 0x180));
            }
            else {
              uVar24 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar8,0);
            }
          }
          else {
            uVar24 = (**(code **)(*plVar16 + 0x198))
                               (plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x1a0));
          }
          uVar14 = (ulong)*(int *)(uVar10 + 0x18);
          lVar8 = lVar15 + -3;
          lVar15 = lVar15 + 1;
        } while (lVar8 < (long)uVar14);
      }
      return uVar24;
    }
code_r0x01b82ca4:
    func_0x00f78af4();
code_r0x01b82ca8:
    uVar21 = func_0x00f78b24();
    uVar10 = uVar24;
code_r0x01b82cb4:
    uVar24 = func_0x00f78ac0(uVar21,0);
    *(undefined8 *)(uVar24 + 0x28) = 0;
    *(ulong *)((long)pplVar3 + -0xa0) = uVar10;
    *(long *)((long)pplVar3 + -0x98) = lVar18;
    *(undefined8 *)((long)pplVar3 + -0x90) = uVar7;
    *(long *)((long)pplVar3 + -0x88) = lVar9;
    *(undefined1 **)((long)pplVar3 + -0x80) = (undefined1 *)((long)pplVar3 + -0x10);
    *(undefined **)((long)pplVar3 + -0x78) = &UnityEngine_Events_UnityEvent_Color____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(uVar24 + 0x20) = 1;
  }
  return uVar24;
}



// ============================================================
// RVA: 0x1590d44 | Atlas.Contexts.FrontEndContextSettingsState.ToggleMultiplayerConsent
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

ulong Atlas_Contexts_FrontEndContextSettingsState__ToggleMultiplayerConsent
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  long *plVar13;
  long unaff_x21;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar17;
  long *plVar18;
  undefined8 unaff_x24;
  long lVar19;
  int iVar20;
  undefined8 unaff_x25;
  ulong uVar21;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar23 [16];
  undefined1 auStack_e1 [89];
  undefined *puStack_88;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  plVar12 = (long *)0x3eb5000;
  if ((bRam0000000003eb5148 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d56ce8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d41670);
    func_0x00f78a20(0x3d6f730);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d6f778);
    bRam0000000003eb5148 = 1;
  }
  lVar22 = unaff_x21;
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x90),0), lVar5 == 0)) goto LAB_01590ef4;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    plVar12 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar12,0);
    lVar5 = /*STR('MESSAGE_BODY_CONSENT')*/ lRam0000000003d6f730;
    if (plVar12 == (long *)0x0) goto LAB_01590ef4;
    plVar12[5] = /*STR('MESSAGE_TITLE_CONSENT')*/ lRam0000000003d6f778;
    plVar12[6] = lVar5;
    lVar22 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar12[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar12[8] = lVar22;
    lVar22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_3 = puRam0000000003d56ce8;
    /*System.Action$$.ctor*/ func_0x02924c80(lVar22,param_1,puRam0000000003d56ce8,0);
    plVar12[0xb] = lVar22;
    plVar18 = *(long **)(param_1 + 0x98);
    if (plVar18 == (long *)0x0) goto LAB_01590ef4;
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
    plVar13 = plRam0000000003d3e0e8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = 0x3eb8000;
    plVar10 = plRam0000000003d3e0e8;
    if ((bRam0000000003eb832a & 1) == 0) {
      func_0x00f78a20(0x3d3b330);
      func_0x00f78a20(0x3d3b348);
      func_0x00f78a20(0x3d717e8);
      bRam0000000003eb832a = 1;
    }
    if (plVar12 != (long *)0x0) {
      uVar8 = 0x3d71000;
      uVar17 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
      plVar10 = (long *)0x0;
      uVar17 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar17);
      if (plVar18 != (long *)0x0) {
        plVar10 = *(long **)(*(long *)(plVar13[3] + 0xc0) + 8);
        (*(code *)*plVar10)(plVar18,uVar17);
        if (plVar18[7] != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar18[7],plVar12,uRam0000000003d3b330);
          plVar10 = (long *)plVar18[8];
          if ((plVar10 == (long *)0x0) || ((int)plVar12[2] <= (int)plVar10[2])) {
code_r0x025dfcb4:
            uVar21 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x30))(plVar18);
            if ((uVar21 & 1) != 0) {
              return uVar21;
            }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar21 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
            return uVar21;
          }
          if (plVar18[7] != 0) {
            /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar18[7],0,plVar10,uRam0000000003d3b348);
            (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x60))(plVar18);
            goto code_r0x025dfcb4;
          }
        }
      }
    }
    auVar23 = func_0x00f78af4();
    plVar9 = auVar23._8_8_;
    lVar22 = auVar23._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar8;
    *(long **)((long)register0x00000008 + -0x58) = plVar12;
    *(long **)((long)register0x00000008 + -0x50) = plVar13;
    *(long **)((long)register0x00000008 + -0x48) = plVar18;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
    if (plVar9 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
      plVar13 = (long *)0x0;
      plVar18 = plVar9;
      plVar12 = plVar10;
      if (lVar22 != 0) {
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x70))(lVar22,uVar17);
        if ((uVar4 & 1) == 0) {
          (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x78))(lVar22,plVar9);
        }
        return (ulong)(uVar4 ^ 1);
      }
    }
    auVar23 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar8;
    *(long **)((long)register0x00000008 + -0x88) = plVar12;
    *(long **)((long)register0x00000008 + -0x80) = plVar13;
    *(long **)((long)register0x00000008 + -0x78) = plVar18;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
    iVar3 = 0x3eb8000;
    if ((bRam0000000003eb832b & 1) == 0) {
      func_0x00f78a20(0x3d3b358);
      func_0x00f78a20(0x3d3b360);
      bRam0000000003eb832b = 1;
    }
    lVar22 = *(long *)(auVar23._0_8_ + 0x38);
    if (lVar22 != 0) {
      iVar3 = *(int *)(lVar22 + 0x18);
      if (iVar3 < 1) goto code_r0x025dfe48;
      uVar4 = 0;
      iVar20 = -0x80000000;
      uVar15 = 0;
      do {
        if (*(uint *)(lVar22 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
        if (lVar22 == 0) break;
        iVar1 = *(int *)(lVar22 + 0x10);
        uVar16 = uVar4;
        if (iVar1 <= iVar20) {
          uVar16 = uVar15;
        }
        if (iVar3 - 1U == uVar4) goto code_r0x025dfe4c;
        if (iVar1 <= iVar20) {
          iVar1 = iVar20;
        }
        lVar22 = *(long *)(auVar23._0_8_ + 0x38);
        uVar4 = uVar4 + 1;
        iVar20 = iVar1;
        uVar15 = uVar16;
      } while (lVar22 != 0);
    }
    func_0x00f78af4();
code_r0x025dfe48:
    uVar16 = 0;
code_r0x025dfe4c:
    *auVar23._8_8_ = uVar16;
    return (ulong)(0 < iVar3);
  }
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar5 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x90),0), lVar5 == 0)) {
LAB_01590ef4:
    unaff_x21 = lVar22;
    unaff_x19 = func_0x00f78af4();
    puStack_38 = &Atlas_Contexts_FrontEndContextSettingsState__MultiplayerConsentGiven;
    plStack_50 = plVar12;
    lStack_48 = param_1;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5149 & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      bRam0000000003eb5149 = 1;
    }
    if ((*(long *)(unaff_x19 + 0x90) != 0) &&
       (lVar22 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(unaff_x19 + 0x90),0), lVar22 != 0)) {
      *(undefined1 *)(lVar22 + 0x28) = 1;
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(unaff_x19 + 0x90),0);
        lVar5 = *(long *)(unaff_x19 + 0xf8);
        if (lVar5 != 0) {
          uVar8 = 1;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          lVar22 = lStack_48;
          unaff_x20 = plStack_50;
          unaff_x29 = (undefined8 *******)ppppppuStack_40;
          unaff_x30 = puStack_38;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar22 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_FrontEndContextSettingsState__ToggleAnalyticsConsent;
    unaff_x29 = &ppppppuStack_60;
    ppppppuStack_60 = &ppppppuStack_40;
    if ((bRam0000000003eb514a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56cd0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514a = 1;
    }
    unaff_x20 = (long *)0x3eb5000;
    lVar14 = unaff_x21;
    uVar8 = unaff_x22;
    if (*(long *)(lVar22 + 0x90) != 0) {
      param_3 = (undefined8 *)0x0;
      iVar3 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(lVar22 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,0,0);
      if (iVar3 == 2) {
        unaff_x20 = (long *)0x3d688d8;
        if (*(long *)(lVar22 + 0x90) != 0) {
          param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar22 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,1,0);
          if (*(long *)(lVar22 + 0xe8) != 0) {
            param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar22 + 0xe8),0,1,0);
            lVar5 = *(long *)(lVar22 + 0x100);
            unaff_x20 = (long *)0x3d688d8;
            if (lVar5 != 0) {
              uVar8 = 0;
              unaff_x20 = (long *)0x3eb5000;
              register0x00000008 = (BADSPACEBASE *)&plStack_50;
              lVar22 = unaff_x19;
              unaff_x29 = (undefined8 *******)ppppppuStack_60;
              unaff_x30 = puStack_58;
              goto UnityEngine_Events_UnityEvent_bool___Invoke;
            }
          }
        }
      }
      else {
        plVar18 = *(long **)(lVar22 + 0x98);
        lVar14 = *(long *)(lVar22 + 0xe8);
        uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_3 = puRam0000000003d56cd0;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar8,lVar22,puRam0000000003d56cd0,0);
        unaff_x20 = plVar18;
        if (lVar14 != 0) {
          param_3 = (undefined8 *)0x0;
          plVar12 = (long *)/*Atlas.Analytics.AtlasAnalyticsManager$$GetConsentRequestMessageBoxData*/ func_0x01457e94(lVar14,uVar8,0,0);
          if (plVar18 != (long *)0x0) {
            unaff_x20 = (long *)0x3eb5000;
            register0x00000008 = (BADSPACEBASE *)&plStack_50;
            unaff_x29 = (undefined8 *******)ppppppuStack_60;
            unaff_x30 = puStack_58;
            goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
          }
        }
      }
    }
    unaff_x22 = uVar8;
    unaff_x21 = lVar14;
    lVar5 = func_0x00f78af4();
    puStack_88 = &Atlas_Contexts_FrontEndContextSettingsState__AnalyticsConsentGiven;
    if ((bRam0000000003eb514b & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514b = 1;
    }
    if (*(long *)(lVar5 + 0x90) != 0) {
      param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar5 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,2,0);
      if (*(long *)(lVar5 + 0xe8) != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar5 + 0xe8),1,0,0);
        lVar5 = *(long *)(lVar5 + 0x100);
        if (lVar5 != 0) {
          uVar8 = 1;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
          unaff_x30 = puStack_88;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar22 = func_0x00f78af4();
    if ((bRam0000000003eb514c & 1) == 0) {
      func_0x00f78a20(0x3d2dc18);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d2dc20);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb514c = 1;
    }
    if ((*(long *)(lVar22 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(lVar22 + 0xa0) != 0)) {
      lVar5 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
      if ((int)uVar21 == 0) {
        return uVar21;
      }
      if (lVar5 != 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = (undefined8 *)0x0;
        uVar21 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0);
        if ((int)uVar21 == 0) {
          return uVar21;
        }
        if (*(long *)(lVar22 + 0x88) != 0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0x88),0,0,0);
          param_3 = (undefined8 *)
                    Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x38),
                               *(undefined8 *)(lVar22 + 0xa8),*(undefined8 *)(lVar22 + 0xd8),
                               *(undefined8 *)(lVar22 + 0xe0),0);
          lVar22 = *(long *)(lVar22 + 0xb0);
          if (lVar22 != 0) {
            uVar8 = *(undefined8 *)(lVar5 + 0x20);
            cVar2 = *(char *)(lVar22 + 0x50);
            if (cVar2 == '\0') {
              *(undefined1 *)(lVar22 + 0x50) = 1;
              *(undefined8 *)(lVar22 + 0x40) = uVar8;
              *(undefined8 **)(lVar22 + 0x48) = param_3;
            }
            return (ulong)(cVar2 == '\0');
          }
        }
      }
    }
    uVar21 = func_0x00f78af4();
    if ((bRam0000000003eb514d & 1) == 0) {
      func_0x00f78a20(0x3d405a8);
      bRam0000000003eb514d = 1;
    }
    if (uVar21 == 0) {
      auVar23 = func_0x00f78af4(0,uRam0000000003d405a8);
      uVar21 = auVar23._0_8_;
      *(undefined8 *)(uVar21 + 0x10) = *param_3;
      *(long *)(uVar21 + 0x20) = auVar23._8_8_;
      *(undefined8 **)(uVar21 + 0x28) = param_3;
      return uVar21;
    }
  }
  else {
    *(undefined1 *)(lVar5 + 0x28) = 0;
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_01590ef4;
    /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(param_1 + 0x90),0);
    lVar5 = *(long *)(param_1 + 0xf8);
    if (lVar5 == 0) goto LAB_01590ef4;
    uVar8 = 0;
    lVar22 = unaff_x19;
UnityEngine_Events_UnityEvent_bool___Invoke:
    lVar14 = lRam0000000003d41670;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = lVar22;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb6c40 & 1) == 0) {
      func_0x00f78a20(0x3d22a90);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1f218);
      bRam0000000003eb6c40 = 1;
    }
    uVar21 = 0x3eb6000;
    if ((lVar5 != 0) && (uVar6 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar5,0), uVar6 != 0)) {
      uVar11 = (ulong)*(uint *)(uVar6 + 0x18);
      uVar21 = uVar6;
      if (0 < (int)*(uint *)(uVar6 + 0x18)) {
        lVar22 = 4;
        do {
          uVar21 = lVar22 - 4;
          if ((uVar11 & 0xffffffff) <= uVar21) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar17 = *(undefined8 *)(*(long *)(uVar6 + 0x10) + lVar22 * 8);
          lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          plVar12 = (long *)func_0x00f78adc(uVar17,lVar19);
          if (plVar12 == (long *)0x0) {
            if (*(uint *)(uVar6 + 0x18) <= uVar21) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = func_0x00f78adc(*(undefined8 *)(*(long *)(uVar6 + 0x10) + lVar22 * 8),
                                     /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
            if (lVar19 == 0) {
              if (*(uint *)(uVar6 + 0x18) <= uVar21) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar18 = *(long **)(*(long *)(uVar6 + 0x10) + lVar22 * 8);
              plVar12 = *(long **)(lVar5 + 0x28);
              if (plVar12 == (long *)0x0) {
                plVar12 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
                *(long **)(lVar5 + 0x28) = plVar12;
              }
              *(char *)((long)register0x00000008 + -0x61) = (char)uVar8;
              lVar19 = *(long *)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x38);
              if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar19);
              }
              lVar19 = func_0x00f78ae0(lVar19,(undefined1 *)((long)register0x00000008 + -0x61));
              uVar21 = uVar6;
              if (plVar12 == (long *)0x0) goto code_r0x01b82ca4;
              if ((lVar19 != 0) &&
                 (lVar7 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)) {
                uVar17 = func_0x00f78b14();
                goto code_r0x01b82cb4;
              }
              if ((int)plVar12[3] == 0) goto code_r0x01b82ca8;
              plVar12[4] = lVar19;
              if (plVar18 == (long *)0x0) goto code_r0x01b82ca4;
              uVar21 = (**(code **)(*plVar18 + 0x178))
                                 (plVar18,*(undefined8 *)(lVar5 + 0x28),
                                  *(undefined8 *)(*plVar18 + 0x180));
            }
            else {
              uVar21 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar19,0);
            }
          }
          else {
            uVar21 = (**(code **)(*plVar12 + 0x198))
                               (plVar12,uVar8,*(undefined8 *)(*plVar12 + 0x1a0));
          }
          uVar11 = (ulong)*(int *)(uVar6 + 0x18);
          lVar19 = lVar22 + -3;
          lVar22 = lVar22 + 1;
        } while (lVar19 < (long)uVar11);
      }
      return uVar21;
    }
code_r0x01b82ca4:
    func_0x00f78af4();
code_r0x01b82ca8:
    uVar17 = func_0x00f78b24();
    uVar6 = uVar21;
code_r0x01b82cb4:
    uVar21 = func_0x00f78ac0(uVar17,0);
    *(undefined8 *)(uVar21 + 0x28) = 0;
    *(ulong *)((long)register0x00000008 + -0xa0) = uVar6;
    *(long *)((long)register0x00000008 + -0x98) = lVar5;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar8;
    *(long *)((long)register0x00000008 + -0x88) = lVar14;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UnityEngine_Events_UnityEvent_Color____ctor
    ;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(uVar21 + 0x20) = 1;
  }
  return uVar21;
}



// ============================================================
// RVA: 0x1590ef8 | Atlas.Contexts.FrontEndContextSettingsState.MultiplayerConsentGiven
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

ulong Atlas_Contexts_FrontEndContextSettingsState__MultiplayerConsentGiven
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar14;
  uint uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  int iVar19;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar21;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar22 [16];
  undefined *puStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb5149 & 1) == 0) {
    func_0x00f78a20(0x3d41670);
    bRam0000000003eb5149 = 1;
  }
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar6 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(param_1 + 0x90),0), lVar6 == 0)) {
LAB_01590f78:
    unaff_x19 = func_0x00f78af4();
    puStack_28 = &Atlas_Contexts_FrontEndContextSettingsState__ToggleAnalyticsConsent;
    unaff_x29 = &ppppppuStack_30;
    ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb514a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56cd0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514a = 1;
    }
    unaff_x20 = (long *)0x3eb5000;
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      param_3 = (undefined8 *)0x0;
      iVar4 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(unaff_x19 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,0,0);
      if (iVar4 == 2) {
        unaff_x20 = (long *)0x3d688d8;
        if (*(long *)(unaff_x19 + 0x90) != 0) {
          param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(unaff_x19 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,1,0);
          if (*(long *)(unaff_x19 + 0xe8) != 0) {
            param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(unaff_x19 + 0xe8),0,1,0);
            lVar6 = *(long *)(unaff_x19 + 0x100);
            unaff_x20 = (long *)0x3d688d8;
            if (lVar6 != 0) {
              uVar11 = 0;
              unaff_x20 = (long *)0x3eb5000;
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
              unaff_x19 = param_1;
              unaff_x29 = (undefined8 *******)ppppppuStack_30;
              unaff_x30 = puStack_28;
              goto UnityEngine_Events_UnityEvent_bool___Invoke;
            }
          }
        }
      }
      else {
        unaff_x20 = *(long **)(unaff_x19 + 0x98);
        unaff_x21 = *(long *)(unaff_x19 + 0xe8);
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_3 = puRam0000000003d56cd0;
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,unaff_x19,puRam0000000003d56cd0,0);
        if (unaff_x21 != 0) {
          param_3 = (undefined8 *)0x0;
          plVar9 = (long *)/*Atlas.Analytics.AtlasAnalyticsManager$$GetConsentRequestMessageBoxData*/ func_0x01457e94(unaff_x21,unaff_x22,0,0);
          puVar3 = puRam0000000003d3e0e8;
          if (unaff_x20 != (long *)0x0) {
            puVar12 = puRam0000000003d3e0e8;
            if ((bRam0000000003eb832a & 1) == 0) {
              func_0x00f78a20(0x3d3b330);
              func_0x00f78a20(0x3d3b348);
              func_0x00f78a20(0x3d717e8);
              bRam0000000003eb832a = 1;
            }
            if (plVar9 != (long *)0x0) {
              uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
              puVar12 = (undefined8 *)0x0;
              uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
              if (unaff_x20 != (long *)0x0) {
                puVar12 = *(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 8);
                (*(code *)*puVar12)(unaff_x20,uVar11);
                if (unaff_x20[7] != 0) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(unaff_x20[7],plVar9,uRam0000000003d3b330);
                  puVar12 = (undefined8 *)unaff_x20[8];
                  if ((puVar12 == (undefined8 *)0x0) || ((int)plVar9[2] <= *(int *)(puVar12 + 2))) {
code_r0x025dfcb4:
                    uVar20 = (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x30))
                                       (unaff_x20);
                    if ((uVar20 & 1) != 0) {
                      return uVar20;
                    }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar20 = (**(code **)(*unaff_x20 + 0x1a8))
                                       (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x1b0));
                    return uVar20;
                  }
                  if (unaff_x20[7] != 0) {
                    /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(unaff_x20[7],0,puVar12,uRam0000000003d3b348);
                    (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x60))(unaff_x20);
                    goto code_r0x025dfcb4;
                  }
                }
              }
            }
            auVar22 = func_0x00f78af4();
            plVar9 = auVar22._8_8_;
            lVar6 = auVar22._0_8_;
            if ((plVar9 != (long *)0x0) &&
               (uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
               lVar6 != 0)) {
              uVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x70))
                                (lVar6,uVar11);
              if ((uVar5 & 1) == 0) {
                (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x78))(lVar6,plVar9);
              }
              return (ulong)(uVar5 ^ 1);
            }
            auVar22 = func_0x00f78af4();
            iVar4 = 0x3eb8000;
            if ((bRam0000000003eb832b & 1) == 0) {
              func_0x00f78a20(0x3d3b358);
              func_0x00f78a20(0x3d3b360);
              bRam0000000003eb832b = 1;
            }
            lVar6 = *(long *)(auVar22._0_8_ + 0x38);
            if (lVar6 != 0) {
              iVar4 = *(int *)(lVar6 + 0x18);
              if (iVar4 < 1) goto code_r0x025dfe48;
              uVar5 = 0;
              iVar19 = -0x80000000;
              uVar14 = 0;
              do {
                if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
                if (lVar6 == 0) break;
                iVar1 = *(int *)(lVar6 + 0x10);
                uVar15 = uVar5;
                if (iVar1 <= iVar19) {
                  uVar15 = uVar14;
                }
                if (iVar4 - 1U == uVar5) goto code_r0x025dfe4c;
                if (iVar1 <= iVar19) {
                  iVar1 = iVar19;
                }
                lVar6 = *(long *)(auVar22._0_8_ + 0x38);
                uVar5 = uVar5 + 1;
                iVar19 = iVar1;
                uVar14 = uVar15;
              } while (lVar6 != 0);
            }
            func_0x00f78af4();
code_r0x025dfe48:
            uVar15 = 0;
code_r0x025dfe4c:
            *auVar22._8_8_ = uVar15;
            return (ulong)(0 < iVar4);
          }
        }
      }
    }
    lVar6 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_FrontEndContextSettingsState__AnalyticsConsentGiven;
    if ((bRam0000000003eb514b & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514b = 1;
    }
    if (*(long *)(lVar6 + 0x90) != 0) {
      param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar6 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,2,0);
      if (*(long *)(lVar6 + 0xe8) != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar6 + 0xe8),1,0,0);
        lVar6 = *(long *)(lVar6 + 0x100);
        if (lVar6 != 0) {
          uVar11 = 1;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
          unaff_x30 = puStack_58;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb514c & 1) == 0) {
      func_0x00f78a20(0x3d2dc18);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d2dc20);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb514c = 1;
    }
    if ((*(long *)(lVar6 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(lVar6 + 0xa0) != 0)) {
      lVar7 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
      if ((int)uVar20 == 0) {
        return uVar20;
      }
      if (lVar7 != 0) {
        uVar11 = *(undefined8 *)(lVar7 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = (undefined8 *)0x0;
        uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        if (*(long *)(lVar6 + 0x88) != 0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0x88),0,0,0);
          param_3 = (undefined8 *)
                    Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x38),
                               *(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(lVar6 + 0xd8),
                               *(undefined8 *)(lVar6 + 0xe0),0);
          lVar6 = *(long *)(lVar6 + 0xb0);
          if (lVar6 != 0) {
            uVar11 = *(undefined8 *)(lVar7 + 0x20);
            cVar2 = *(char *)(lVar6 + 0x50);
            if (cVar2 == '\0') {
              *(undefined1 *)(lVar6 + 0x50) = 1;
              *(undefined8 *)(lVar6 + 0x40) = uVar11;
              *(undefined8 **)(lVar6 + 0x48) = param_3;
            }
            return (ulong)(cVar2 == '\0');
          }
        }
      }
    }
    uVar20 = func_0x00f78af4();
    if ((bRam0000000003eb514d & 1) == 0) {
      func_0x00f78a20(0x3d405a8);
      bRam0000000003eb514d = 1;
    }
    if (uVar20 == 0) {
      auVar22 = func_0x00f78af4(0,uRam0000000003d405a8);
      uVar20 = auVar22._0_8_;
      *(undefined8 *)(uVar20 + 0x10) = *param_3;
      *(long *)(uVar20 + 0x20) = auVar22._8_8_;
      *(undefined8 **)(uVar20 + 0x28) = param_3;
      return uVar20;
    }
  }
  else {
    *(undefined1 *)(lVar6 + 0x28) = 1;
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_01590f78;
    /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(param_1 + 0x90),0);
    lVar6 = *(long *)(param_1 + 0xf8);
    if (lVar6 == 0) goto LAB_01590f78;
    uVar11 = 1;
UnityEngine_Events_UnityEvent_bool___Invoke:
    lVar7 = lRam0000000003d41670;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb6c40 & 1) == 0) {
      func_0x00f78a20(0x3d22a90);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1f218);
      bRam0000000003eb6c40 = 1;
    }
    uVar20 = 0x3eb6000;
    if ((lVar6 != 0) && (uVar8 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar6,0), uVar8 != 0)) {
      uVar13 = (ulong)*(uint *)(uVar8 + 0x18);
      uVar20 = uVar8;
      if (0 < (int)*(uint *)(uVar8 + 0x18)) {
        lVar21 = 4;
        do {
          uVar20 = lVar21 - 4;
          if ((uVar13 & 0xffffffff) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar16 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar21 * 8);
          lVar18 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          plVar9 = (long *)func_0x00f78adc(uVar16,lVar18);
          if (plVar9 == (long *)0x0) {
            if (*(uint *)(uVar8 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar18 = func_0x00f78adc(*(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar21 * 8),
                                     /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
            if (lVar18 == 0) {
              if (*(uint *)(uVar8 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar17 = *(long **)(*(long *)(uVar8 + 0x10) + lVar21 * 8);
              plVar9 = *(long **)(lVar6 + 0x28);
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
                *(long **)(lVar6 + 0x28) = plVar9;
              }
              *(char *)((long)register0x00000008 + -0x61) = (char)uVar11;
              lVar18 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x38);
              if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar18);
              }
              lVar18 = func_0x00f78ae0(lVar18,(undefined1 *)((long)register0x00000008 + -0x61));
              uVar20 = uVar8;
              if (plVar9 == (long *)0x0) goto code_r0x01b82ca4;
              if ((lVar18 != 0) &&
                 (lVar10 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
                uVar16 = func_0x00f78b14();
                goto code_r0x01b82cb4;
              }
              if ((int)plVar9[3] == 0) goto code_r0x01b82ca8;
              plVar9[4] = lVar18;
              if (plVar17 == (long *)0x0) goto code_r0x01b82ca4;
              uVar20 = (**(code **)(*plVar17 + 0x178))
                                 (plVar17,*(undefined8 *)(lVar6 + 0x28),
                                  *(undefined8 *)(*plVar17 + 0x180));
            }
            else {
              uVar20 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar18,0);
            }
          }
          else {
            uVar20 = (**(code **)(*plVar9 + 0x198))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1a0));
          }
          uVar13 = (ulong)*(int *)(uVar8 + 0x18);
          lVar18 = lVar21 + -3;
          lVar21 = lVar21 + 1;
        } while (lVar18 < (long)uVar13);
      }
      return uVar20;
    }
code_r0x01b82ca4:
    func_0x00f78af4();
code_r0x01b82ca8:
    uVar16 = func_0x00f78b24();
    uVar8 = uVar20;
code_r0x01b82cb4:
    uVar20 = func_0x00f78ac0(uVar16,0);
    *(undefined8 *)(uVar20 + 0x28) = 0;
    *(ulong *)((long)register0x00000008 + -0xa0) = uVar8;
    *(long *)((long)register0x00000008 + -0x98) = lVar6;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    *(long *)((long)register0x00000008 + -0x88) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UnityEngine_Events_UnityEvent_Color____ctor
    ;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(uVar20 + 0x20) = 1;
  }
  return uVar20;
}



// ============================================================
// RVA: 0x1590f7c | Atlas.Contexts.FrontEndContextSettingsState.ToggleAnalyticsConsent
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

ulong Atlas_Contexts_FrontEndContextSettingsState__ToggleAnalyticsConsent
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar14;
  uint uVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar16;
  long *plVar17;
  undefined8 unaff_x24;
  long lVar18;
  int iVar19;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar22;
  undefined *unaff_x30;
  undefined1 auVar23 [16];
  undefined *puStack_38;
  
  puVar22 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb514a & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d56cd0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d41670);
    func_0x00f78a20(0x3d688d8);
    bRam0000000003eb514a = 1;
  }
  plVar9 = (long *)0x3eb5000;
  if (*(long *)(param_1 + 0x90) == 0) {
LAB_015910d4:
    unaff_x20 = plVar9;
    lVar6 = func_0x00f78af4();
    puStack_38 = &Atlas_Contexts_FrontEndContextSettingsState__AnalyticsConsentGiven;
    if ((bRam0000000003eb514b & 1) == 0) {
      func_0x00f78a20(0x3d41670);
      func_0x00f78a20(0x3d688d8);
      bRam0000000003eb514b = 1;
    }
    if (*(long *)(lVar6 + 0x90) != 0) {
      param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(lVar6 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,2,0);
      if (*(long *)(lVar6 + 0xe8) != 0) {
        param_3 = (undefined8 *)0x0;
        /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(lVar6 + 0xe8),1,0,0);
        lVar6 = *(long *)(lVar6 + 0x100);
        if (lVar6 != 0) {
          uVar11 = 1;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x30 = puStack_38;
          goto UnityEngine_Events_UnityEvent_bool___Invoke;
        }
      }
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb514c & 1) == 0) {
      func_0x00f78a20(0x3d2dc18);
      func_0x00f78a20(0x3d2dbf8);
      func_0x00f78a20(0x3d2dc20);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb514c = 1;
    }
    if ((*(long *)(lVar6 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(lVar6 + 0xa0) != 0)) {
      lVar7 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
      if ((int)uVar20 == 0) {
        return uVar20;
      }
      if (lVar7 != 0) {
        uVar11 = *(undefined8 *)(lVar7 + 0x28);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_3 = (undefined8 *)0x0;
        uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
        if ((int)uVar20 == 0) {
          return uVar20;
        }
        if (*(long *)(lVar6 + 0x88) != 0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0x88),0,0,0);
          param_3 = (undefined8 *)
                    Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                              (*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x38),
                               *(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(lVar6 + 0xd8),
                               *(undefined8 *)(lVar6 + 0xe0),0);
          lVar6 = *(long *)(lVar6 + 0xb0);
          if (lVar6 != 0) {
            uVar11 = *(undefined8 *)(lVar7 + 0x20);
            cVar2 = *(char *)(lVar6 + 0x50);
            if (cVar2 == '\0') {
              *(undefined1 *)(lVar6 + 0x50) = 1;
              *(undefined8 *)(lVar6 + 0x40) = uVar11;
              *(undefined8 **)(lVar6 + 0x48) = param_3;
            }
            return (ulong)(cVar2 == '\0');
          }
        }
      }
    }
    uVar20 = func_0x00f78af4();
    if ((bRam0000000003eb514d & 1) == 0) {
      func_0x00f78a20(0x3d405a8);
      bRam0000000003eb514d = 1;
    }
    if (uVar20 == 0) {
      auVar23 = func_0x00f78af4(0,uRam0000000003d405a8);
      uVar20 = auVar23._0_8_;
      *(undefined8 *)(uVar20 + 0x10) = *param_3;
      *(long *)(uVar20 + 0x20) = auVar23._8_8_;
      *(undefined8 **)(uVar20 + 0x28) = param_3;
      return uVar20;
    }
  }
  else {
    param_3 = (undefined8 *)0x0;
    iVar4 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(*(long *)(param_1 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,0,0);
    if (iVar4 != 2) {
      plVar9 = *(long **)(param_1 + 0x98);
      unaff_x21 = *(long *)(param_1 + 0xe8);
      unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      param_3 = puRam0000000003d56cd0;
      /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,param_1,puRam0000000003d56cd0,0);
      if (unaff_x21 != 0) {
        param_3 = (undefined8 *)0x0;
        plVar17 = (long *)/*Atlas.Analytics.AtlasAnalyticsManager$$GetConsentRequestMessageBoxData*/ func_0x01457e94(unaff_x21,unaff_x22,0,0);
        puVar3 = puRam0000000003d3e0e8;
        if (plVar9 != (long *)0x0) {
          puVar12 = puRam0000000003d3e0e8;
          if ((bRam0000000003eb832a & 1) == 0) {
            func_0x00f78a20(0x3d3b330);
            func_0x00f78a20(0x3d3b348);
            func_0x00f78a20(0x3d717e8);
            bRam0000000003eb832a = 1;
          }
          if (plVar17 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
            puVar12 = (undefined8 *)0x0;
            uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
            if (plVar9 != (long *)0x0) {
              puVar12 = *(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 8);
              (*(code *)*puVar12)(plVar9,uVar11);
              if (plVar9[7] != 0) {
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar17,uRam0000000003d3b330);
                puVar12 = (undefined8 *)plVar9[8];
                if ((puVar12 == (undefined8 *)0x0) || ((int)plVar17[2] <= *(int *)(puVar12 + 2))) {
code_r0x025dfcb4:
                  uVar20 = (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x30))(plVar9);
                  if ((uVar20 & 1) != 0) {
                    return uVar20;
                  }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar20 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                  return uVar20;
                }
                if (plVar9[7] != 0) {
                  /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,puVar12,uRam0000000003d3b348);
                  (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x60))(plVar9);
                  goto code_r0x025dfcb4;
                }
              }
            }
          }
          auVar23 = func_0x00f78af4();
          plVar9 = auVar23._8_8_;
          lVar6 = auVar23._0_8_;
          if ((plVar9 != (long *)0x0) &&
             (uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
             lVar6 != 0)) {
            uVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x70))(lVar6,uVar11);
            if ((uVar5 & 1) == 0) {
              (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x78))(lVar6,plVar9);
            }
            return (ulong)(uVar5 ^ 1);
          }
          auVar23 = func_0x00f78af4();
          iVar4 = 0x3eb8000;
          if ((bRam0000000003eb832b & 1) == 0) {
            func_0x00f78a20(0x3d3b358);
            func_0x00f78a20(0x3d3b360);
            bRam0000000003eb832b = 1;
          }
          lVar6 = *(long *)(auVar23._0_8_ + 0x38);
          if (lVar6 != 0) {
            iVar4 = *(int *)(lVar6 + 0x18);
            if (iVar4 < 1) goto code_r0x025dfe48;
            uVar5 = 0;
            iVar19 = -0x80000000;
            uVar14 = 0;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
              if (lVar6 == 0) break;
              iVar1 = *(int *)(lVar6 + 0x10);
              uVar15 = uVar5;
              if (iVar1 <= iVar19) {
                uVar15 = uVar14;
              }
              if (iVar4 - 1U == uVar5) goto code_r0x025dfe4c;
              if (iVar1 <= iVar19) {
                iVar1 = iVar19;
              }
              lVar6 = *(long *)(auVar23._0_8_ + 0x38);
              uVar5 = uVar5 + 1;
              iVar19 = iVar1;
              uVar14 = uVar15;
            } while (lVar6 != 0);
          }
          func_0x00f78af4();
code_r0x025dfe48:
          uVar15 = 0;
code_r0x025dfe4c:
          *auVar23._8_8_ = uVar15;
          return (ulong)(0 < iVar4);
        }
      }
      goto LAB_015910d4;
    }
    plVar9 = (long *)0x3d688d8;
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_015910d4;
    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(param_1 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,1,0);
    if (*(long *)(param_1 + 0xe8) == 0) goto LAB_015910d4;
    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(param_1 + 0xe8),0,1,0);
    lVar6 = *(long *)(param_1 + 0x100);
    plVar9 = (long *)0x3d688d8;
    if (lVar6 == 0) goto LAB_015910d4;
    uVar11 = 0;
    param_1 = unaff_x19;
    puVar22 = unaff_x29;
UnityEngine_Events_UnityEvent_bool___Invoke:
    lVar7 = lRam0000000003d41670;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar22;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb6c40 & 1) == 0) {
      func_0x00f78a20(0x3d22a90);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1f218);
      bRam0000000003eb6c40 = 1;
    }
    uVar20 = 0x3eb6000;
    if ((lVar6 != 0) && (uVar8 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar6,0), uVar8 != 0)) {
      uVar13 = (ulong)*(uint *)(uVar8 + 0x18);
      uVar20 = uVar8;
      if (0 < (int)*(uint *)(uVar8 + 0x18)) {
        lVar21 = 4;
        do {
          uVar20 = lVar21 - 4;
          if ((uVar13 & 0xffffffff) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar16 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar21 * 8);
          lVar18 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x18);
          if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar18);
          }
          plVar9 = (long *)func_0x00f78adc(uVar16,lVar18);
          if (plVar9 == (long *)0x0) {
            if (*(uint *)(uVar8 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar18 = func_0x00f78adc(*(undefined8 *)(*(long *)(uVar8 + 0x10) + lVar21 * 8),
                                     /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
            if (lVar18 == 0) {
              if (*(uint *)(uVar8 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar17 = *(long **)(*(long *)(uVar8 + 0x10) + lVar21 * 8);
              plVar9 = *(long **)(lVar6 + 0x28);
              if (plVar9 == (long *)0x0) {
                plVar9 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
                *(long **)(lVar6 + 0x28) = plVar9;
              }
              *(char *)((long)register0x00000008 + -0x61) = (char)uVar11;
              lVar18 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x38);
              if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar18);
              }
              lVar18 = func_0x00f78ae0(lVar18,(undefined1 *)((long)register0x00000008 + -0x61));
              uVar20 = uVar8;
              if (plVar9 == (long *)0x0) goto code_r0x01b82ca4;
              if ((lVar18 != 0) &&
                 (lVar10 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
                uVar16 = func_0x00f78b14();
                goto code_r0x01b82cb4;
              }
              if ((int)plVar9[3] == 0) goto code_r0x01b82ca8;
              plVar9[4] = lVar18;
              if (plVar17 == (long *)0x0) goto code_r0x01b82ca4;
              uVar20 = (**(code **)(*plVar17 + 0x178))
                                 (plVar17,*(undefined8 *)(lVar6 + 0x28),
                                  *(undefined8 *)(*plVar17 + 0x180));
            }
            else {
              uVar20 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar18,0);
            }
          }
          else {
            uVar20 = (**(code **)(*plVar9 + 0x198))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1a0));
          }
          uVar13 = (ulong)*(int *)(uVar8 + 0x18);
          lVar18 = lVar21 + -3;
          lVar21 = lVar21 + 1;
        } while (lVar18 < (long)uVar13);
      }
      return uVar20;
    }
code_r0x01b82ca4:
    func_0x00f78af4();
code_r0x01b82ca8:
    uVar16 = func_0x00f78b24();
    uVar8 = uVar20;
code_r0x01b82cb4:
    uVar20 = func_0x00f78ac0(uVar16,0);
    *(undefined8 *)(uVar20 + 0x28) = 0;
    *(ulong *)((long)register0x00000008 + -0xa0) = uVar8;
    *(long *)((long)register0x00000008 + -0x98) = lVar6;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    *(long *)((long)register0x00000008 + -0x88) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &UnityEngine_Events_UnityEvent_Color____ctor
    ;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(uVar20 + 0x20) = 1;
  }
  return uVar20;
}



// ============================================================
// RVA: 0x15910d8 | Atlas.Contexts.FrontEndContextSettingsState.AnalyticsConsentGiven
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

ulong Atlas_Contexts_FrontEndContextSettingsState__AnalyticsConsentGiven
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000003eb514b & 1) == 0) {
    func_0x00f78a20(0x3d41670);
    func_0x00f78a20(0x3d688d8);
    bRam0000000003eb514b = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
    /*Atlas.Save.SaveManager$$SetIntData*/ func_0x014ece54(*(long *)(param_1 + 0x90),/*STR('AM_Consent')*/ uRam0000000003d688d8,2,0);
    if (*(long *)(param_1 + 0xe8) != 0) {
      param_3 = (undefined8 *)0x0;
      /*Atlas.Analytics.AtlasAnalyticsManager$$ConsentChanged*/ func_0x01457994(*(long *)(param_1 + 0xe8),1,0,0);
      lVar3 = lRam0000000003d41670;
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 != 0) {
        if ((bRam0000000003eb6c40 & 1) == 0) {
          func_0x00f78a20(0x3d22a90);
          func_0x00f78a20(0x3d39e50);
          func_0x00f78a20(0x3d39e58);
          func_0x00f78a20(0x3d1f218);
          bRam0000000003eb6c40 = 1;
        }
        if ((lVar2 == 0) || (uVar4 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar2,0), uVar4 == 0)) {
code_r0x01b82ca4:
          func_0x00f78af4();
code_r0x01b82ca8:
          uVar8 = func_0x00f78b24();
code_r0x01b82cb4:
          uVar4 = func_0x00f78ac0(uVar8,0);
          *(undefined8 *)(uVar4 + 0x28) = 0;
          if ((bRam0000000003ec1a34 & 1) == 0) {
            func_0x00f78a20(0x3d22a98,0);
            func_0x00f78a20(0x3d23bf0);
            bRam0000000003ec1a34 = 1;
          }
          *(undefined1 *)(uVar4 + 0x20) = 1;
          return uVar4;
        }
        uVar7 = (ulong)*(uint *)(uVar4 + 0x18);
        uVar11 = uVar4;
        if (0 < (int)*(uint *)(uVar4 + 0x18)) {
          lVar12 = 4;
          do {
            uVar11 = lVar12 - 4;
            if ((uVar7 & 0xffffffff) <= uVar11) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar8 = *(undefined8 *)(*(long *)(uVar4 + 0x10) + lVar12 * 8);
            lVar10 = *(long *)(*(long *)(*(long *)(lVar3 + 0x18) + 0xc0) + 0x18);
            if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar10);
            }
            plVar5 = (long *)func_0x00f78adc(uVar8,lVar10);
            if (plVar5 == (long *)0x0) {
              if (*(uint *)(uVar4 + 0x18) <= uVar11) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar10 = func_0x00f78adc(*(undefined8 *)(*(long *)(uVar4 + 0x10) + lVar12 * 8),
                                       /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
              if (lVar10 == 0) {
                if (*(uint *)(uVar4 + 0x18) <= uVar11) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                plVar9 = *(long **)(*(long *)(uVar4 + 0x10) + lVar12 * 8);
                plVar5 = *(long **)(lVar2 + 0x28);
                if (plVar5 == (long *)0x0) {
                  plVar5 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
                  *(long **)(lVar2 + 0x28) = plVar5;
                }
                uStack_68 = CONCAT17(1,(undefined7)uStack_68);
                lVar10 = *(long *)(*(long *)(*(long *)(lVar3 + 0x18) + 0xc0) + 0x38);
                if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar10);
                }
                lVar10 = func_0x00f78ae0(lVar10,(long)&uStack_68 + 7);
                if (plVar5 == (long *)0x0) goto code_r0x01b82ca4;
                if ((lVar10 != 0) &&
                   (lVar6 = func_0x00f78adc(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
                  uVar8 = func_0x00f78b14();
                  goto code_r0x01b82cb4;
                }
                if ((int)plVar5[3] == 0) goto code_r0x01b82ca8;
                plVar5[4] = lVar10;
                if (plVar9 == (long *)0x0) goto code_r0x01b82ca4;
                uVar11 = (**(code **)(*plVar9 + 0x178))
                                   (plVar9,*(undefined8 *)(lVar2 + 0x28),
                                    *(undefined8 *)(*plVar9 + 0x180));
              }
              else {
                uVar11 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar10,0);
              }
            }
            else {
              uVar11 = (**(code **)(*plVar5 + 0x198))(plVar5,1,*(undefined8 *)(*plVar5 + 0x1a0));
            }
            uVar7 = (ulong)*(int *)(uVar4 + 0x18);
            lVar10 = lVar12 + -3;
            lVar12 = lVar12 + 1;
          } while (lVar10 < (long)uVar7);
        }
        return uVar11;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb514c & 1) == 0) {
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb514c = 1;
  }
  if ((*(long *)(lVar3 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(lVar3 + 0xa0) != 0)) {
    lVar2 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (undefined8 *)0x0;
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(lVar2 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (*(long *)(lVar3 + 0x88) != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar3 + 0x88),0,0,0);
        param_3 = (undefined8 *)
                  Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                            (*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x38),
                             *(undefined8 *)(lVar3 + 0xa8),*(undefined8 *)(lVar3 + 0xd8),
                             *(undefined8 *)(lVar3 + 0xe0),0);
        lVar12 = *(long *)(lVar3 + 0xb0);
        if (lVar12 != 0) {
          uVar8 = *(undefined8 *)(lVar2 + 0x20);
          cVar1 = *(char *)(lVar12 + 0x50);
          if (cVar1 == '\0') {
            *(undefined1 *)(lVar12 + 0x50) = 1;
            *(undefined8 *)(lVar12 + 0x40) = uVar8;
            *(undefined8 **)(lVar12 + 0x48) = param_3;
          }
          return (ulong)(cVar1 == '\0');
        }
      }
    }
  }
  uVar4 = func_0x00f78af4();
  uStack_68 = lVar3;
  if ((bRam0000000003eb514d & 1) == 0) {
    func_0x00f78a20(0x3d405a8);
    bRam0000000003eb514d = 1;
  }
  if (uVar4 != 0) {
    return uVar4;
  }
  auVar13 = func_0x00f78af4(0,uRam0000000003d405a8);
  uVar4 = auVar13._0_8_;
  *(undefined8 *)(uVar4 + 0x10) = *param_3;
  *(long *)(uVar4 + 0x20) = auVar13._8_8_;
  *(undefined8 **)(uVar4 + 0x28) = param_3;
  return uVar4;
}



// ============================================================
// RVA: 0x1591174 | Atlas.Contexts.FrontEndContextSettingsState.BootFTUE
// ============================================================

undefined1  [16]
Atlas_Contexts_FrontEndContextSettingsState__BootFTUE
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb514c & 1) == 0) {
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb514c = 1;
  }
  if ((*(long *)(param_1 + 0xa0) != 0) && (/*Atlas.FrontEnd.FTUEManager$$Reset*/ func_0x01584370(), *(long *)(param_1 + 0xa0) != 0)) {
    lVar2 = /*Atlas.FrontEnd.FTUEManager$$GetCurrentStage*/ func_0x01584cc0();
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (undefined8 *)0x0;
    auVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0);
    if (auVar5._0_4_ == 0) {
      return auVar5;
    }
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      auVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0);
      if (auVar5._0_4_ == 0) {
        return auVar5;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x88),0,0,0);
        param_3 = (undefined8 *)
                  Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                            (*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x38),
                             *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xd8),
                             *(undefined8 *)(param_1 + 0xe0),0);
        lVar3 = *(long *)(param_1 + 0xb0);
        if (lVar3 != 0) {
          auVar5._8_8_ = *(undefined8 *)(lVar2 + 0x20);
          cVar1 = *(char *)(lVar3 + 0x50);
          if (cVar1 == '\0') {
            *(undefined1 *)(lVar3 + 0x50) = 1;
            *(undefined8 *)(lVar3 + 0x40) = auVar5._8_8_;
            *(undefined8 **)(lVar3 + 0x48) = param_3;
          }
          auVar5._1_7_ = 0;
          auVar5[0] = cVar1 == '\0';
          return auVar5;
        }
      }
    }
  }
  auVar6._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb514d & 1) == 0) {
    func_0x00f78a20(0x3d405a8);
    bRam0000000003eb514d = 1;
  }
  if (auVar6._0_8_ == 0) {
    auVar5 = func_0x00f78af4(0,uRam0000000003d405a8);
    lVar2 = auVar5._0_8_;
    *(undefined8 *)(lVar2 + 0x10) = *param_3;
    *(long *)(lVar2 + 0x20) = auVar5._8_8_;
    *(undefined8 **)(lVar2 + 0x28) = param_3;
    return auVar5;
  }
  auVar6._8_8_ = 0;
  return auVar6;
}



// ============================================================
// RVA: 0x15912b8 | Atlas.Contexts.FrontEndContextSettingsState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextSettingsState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb514d & 1) == 0) {
    func_0x00f78a20(0x3d405a8);
    bRam0000000003eb514d = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405a8);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x159130c | Atlas.Contexts.FrontEndContextSettingsState.<ShowCreditsScreen>b__25_0
// ============================================================

undefined8
Atlas_Contexts_FrontEndContextSettingsState___ShowCreditsScreen_b__25_0(undefined8 param_1)

{
  Atlas_Contexts_FrontEndContextSettingsState__ShowSettingsScreen(param_1,2,1);
  return 1;
}



// ============================================================
// RVA: 0x159132c | Atlas.Contexts.FrontEndContextSettingsState.<ShowLicenseScreen>b__26_0
// ============================================================

undefined8
Atlas_Contexts_FrontEndContextSettingsState___ShowLicenseScreen_b__26_0(undefined8 param_1)

{
  Atlas_Contexts_FrontEndContextSettingsState__ShowSettingsScreen(param_1,2,0);
  return 1;
}



// ============================================================
// RVA: 0x159134c | Atlas.Contexts.FrontEndContextSettingsState.<ShowSaveGameScreen>b__27_0
// ============================================================

undefined8
Atlas_Contexts_FrontEndContextSettingsState___ShowSaveGameScreen_b__27_0(undefined8 param_1)

{
  Atlas_Contexts_FrontEndContextSettingsState__ShowSettingsScreen(param_1,2,0);
  return 1;
}



