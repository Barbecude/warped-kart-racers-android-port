// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextSeasonsState

// ============================================================
// RVA: 0x1589930 | Atlas.Contexts.FrontEndContextSeasonsState.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01589cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01589dac) */
/* WARNING: Removing unreachable block (ram,0x01589dd0) */
/* WARNING: Removing unreachable block (ram,0x01589e04) */
/* WARNING: Removing unreachable block (ram,0x01589cd4) */
/* WARNING: Removing unreachable block (ram,0x01589cf8) */
/* WARNING: Removing unreachable block (ram,0x01589d3c) */
/* WARNING: Removing unreachable block (ram,0x01589d70) */
/* WARNING: Removing unreachable block (ram,0x01589da0) */
/* WARNING: Removing unreachable block (ram,0x01589e10) */
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

ulong Atlas_Contexts_FrontEndContextSeasonsState__Init(long param_1,long param_2)

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
  ulong uVar10;
  long *plVar11;
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
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 ****ppppuStack_d0;
  code *pcStack_c8;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb513b & 1) == 0) {
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb513b = 1;
  }
  if (param_2 != 0) {
    uVar9 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    uVar10 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(ulong *)(param_1 + 0x88) = uVar10;
    return uVar10;
  }
  auVar38 = func_0x00f78af4();
  puStack_38 = &Atlas_Contexts_FrontEndContextSeasonsState__add_TransitionFromState;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5139 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5139 = 1;
  }
  puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar10 = *puVar25;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar10,auVar38._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
    bVar6 = uVar10 == uVar12;
    uVar10 = uVar12;
    if (bVar6) {
      return uVar12;
    }
  }
  lVar13 = func_0x00f78e5c(plVar11);
  puVar3 = (undefined8 *)&stack0xffffffffffffff40;
  puStack_68 = &Atlas_FrontEnd_FrontEndContext__DeInitStates;
  pppppuVar32 = (undefined8 *****)&pppuStack_70;
  uVar9 = 0x3d1b6e0;
  uVar29 = 0x3d1b6e0;
  uVar17 = 0x3d56b80;
  uVar28 = 0x3d2a5a8;
  pppuStack_70 = &ppuStack_40;
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
  uVar10 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
  lVar27 = lRam0000000003d2a5a8;
  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar10,lVar13,uRam0000000003d56b80);
  if (lVar26 == 0) {
code_r0x01589e90:
    auVar38 = func_0x00f78af4();
    uVar17 = auVar38._8_8_;
    uStack_f0 = 0x3d56b80;
    pcStack_c8 = Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState;
    uStack_e8 = uVar10;
    uStack_e0 = 0;
    lStack_d8 = lVar13;
    ppppuStack_d0 = pppppuVar32;
    if ((bRam0000000003eb5113 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5113 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar17,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    uVar30 = auVar38._8_8_;
    uStack_120 = 0x3d1b6e0;
    pcStack_f8 = Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout;
    uStack_118 = uVar10;
    puStack_110 = puVar25;
    uStack_108 = uVar17;
    ppppuStack_100 = &ppppuStack_d0;
    if ((bRam0000000003eb5115 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb5115 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar30,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    uVar17 = auVar38._8_8_;
    uStack_150 = 0x3d1b4a0;
    pcStack_128 = Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState;
    uStack_148 = uVar10;
    puStack_140 = puVar25;
    uStack_138 = uVar30;
    ppppuStack_130 = &ppppuStack_100;
    if ((bRam0000000003eb5107 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5107 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar17,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    uVar30 = auVar38._8_8_;
    uStack_180 = 0x3d1b6e0;
    pcStack_158 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
    uStack_178 = uVar10;
    puStack_170 = puVar25;
    uStack_168 = uVar17;
    ppppuStack_160 = &ppppuStack_130;
    if ((bRam0000000003eb50f7 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb50f7 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x80);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar30,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    uVar17 = auVar38._8_8_;
    uStack_1b0 = 0x3d1b6e0;
    pcStack_188 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
    uStack_1a8 = uVar10;
    puStack_1a0 = puVar25;
    uStack_198 = uVar30;
    ppppuStack_190 = &ppppuStack_160;
    if ((bRam0000000003eb50f5 & 1) == 0) {
      func_0x00f78a20(0x3d1b420);
      bRam0000000003eb50f5 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar17,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    uVar30 = auVar38._8_8_;
    uStack_1e0 = 0x3d1b420;
    pcStack_1b8 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
    uStack_1d8 = uVar10;
    puStack_1d0 = puVar25;
    uStack_1c8 = uVar17;
    ppppuStack_1c0 = &ppppuStack_190;
    if ((bRam0000000003eb50f9 & 1) == 0) {
      func_0x00f78a20(0x3d1b4a0);
      bRam0000000003eb50f9 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x88);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar30,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    auVar38 = func_0x00f78e5c(plVar11);
    lVar13 = auVar38._8_8_;
    puVar3 = &uStack_210;
    uStack_210 = 0x3d1b4a0;
    pcStack_1e8 = Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
    pppppuVar32 = &ppppuStack_1f0;
    uStack_208 = uVar10;
    puStack_200 = puVar25;
    uStack_1f8 = uVar30;
    ppppuStack_1f0 = &ppppuStack_1c0;
    if ((bRam0000000003eb5130 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5130 = 1;
    }
    uVar17 = 0x3d1b6e0;
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar10 = *puVar25;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,lVar13,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
      bVar6 = uVar10 == uVar12;
      uVar10 = uVar12;
      if (bVar6) {
        return uVar12;
      }
    }
    puVar34 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
    auVar38 = func_0x00f78e5c(plVar11);
  }
  else {
    unaff_x27 = 0x3d1b000;
    uVar30 = 0x3d56b78;
    uVar31 = 0x3d56b78;
    unaff_x25 = (undefined8 *)0x3d2a000;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 0xb0);
    uVar10 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar10,lVar13,uRam0000000003d56b78);
    unaff_x26 = uVar30;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 0xb8);
    uVar10 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar10,lVar13,uRam0000000003d56b80);
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar10 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar10,lVar13,uRam0000000003d56b80);
    unaff_x26 = uVar31;
    if (lVar26 == 0) goto code_r0x01589e90;
    unaff_x28 = 0x3d1b000;
    unaff_x27 = 0x3d56000;
    puVar18 = (undefined8 *)0x3d2a038;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar10 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
    lVar27 = lRam0000000003d2a038;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,lVar13,uRam0000000003d56b68);
    unaff_x25 = puVar18;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 0xc0);
    uVar10 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar27 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar10,lVar13,uRam0000000003d56b78);
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout(lVar26,uVar10);
    lVar26 = *(long *)(lVar13 + 200);
    uVar10 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar10,lVar13,uRam0000000003d56b80);
    unaff_x25 = (undefined8 *)0x3d2a038;
    if (lVar26 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent(lVar26,uVar10);
    puVar25 = *(ulong **)(lVar13 + 0xd0);
    uVar10 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    auVar38._8_8_ = uVar10;
    auVar38._0_8_ = puVar25;
    lVar27 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar10,lVar13,uRam0000000003d56b80);
    if (puVar25 == (ulong *)0x0) goto code_r0x01589e90;
    puVar34 = &UNK_01589cd4;
    unaff_x25 = puVar18;
    unaff_x26 = uVar30;
  }
  *(undefined8 *)((long)puVar3 + -0x30) = uVar17;
  *(ulong *)((long)puVar3 + -0x28) = uVar10;
  *(ulong **)((long)puVar3 + -0x20) = puVar25;
  *(long *)((long)puVar3 + -0x18) = lVar13;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar32;
  *(undefined **)((long)puVar3 + -8) = puVar34;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
  }
  puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar10 = *puVar25;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,auVar38._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
    bVar6 = uVar10 == uVar12;
    uVar10 = uVar12;
    if (bVar6) {
      return uVar12;
    }
  }
  auVar39 = func_0x00f78e5c(plVar11);
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x58) = uVar10;
  *(ulong **)((long)puVar3 + -0x50) = puVar25;
  *(long *)((long)puVar3 + -0x48) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(code **)((long)puVar3 + -0x38) =
       Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
  }
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar10 = *puVar25;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,auVar39._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
    bVar6 = uVar10 == uVar12;
    uVar10 = uVar12;
    if (bVar6) {
      return uVar12;
    }
  }
  auVar38 = func_0x00f78e5c(plVar11);
  *(undefined8 *)((long)puVar3 + -0x90) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x88) = uVar10;
  *(ulong **)((long)puVar3 + -0x80) = puVar25;
  *(long *)((long)puVar3 + -0x78) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0x70) = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined **)((long)puVar3 + -0x68) =
       &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
  uVar10 = *puVar25;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,auVar38._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
    bVar6 = uVar10 == uVar12;
    uVar10 = uVar12;
    if (bVar6) {
      return uVar12;
    }
  }
  auVar39 = func_0x00f78e5c(plVar11);
  *(undefined8 *)((long)puVar3 + -0xc0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xb8) = uVar10;
  *(ulong **)((long)puVar3 + -0xb0) = puVar25;
  *(long *)((long)puVar3 + -0xa8) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0xa0) = (undefined1 *)((long)puVar3 + -0x70);
  *(undefined **)((long)puVar3 + -0x98) =
       &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  lVar13 = 0x3d1b6e0;
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar10 = *puVar25;
  while( true ) {
    iVar21 = 0;
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,auVar39._8_8_);
    if ((plVar11 != (long *)0x0) && (*plVar11 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar12 = func_0x00ff0f44(puVar25,plVar11,uVar10);
    bVar6 = uVar10 == uVar12;
    uVar10 = uVar12;
    if (bVar6) {
      return uVar12;
    }
  }
  auVar38 = func_0x00f78e5c(plVar11);
  lVar26 = auVar38._8_8_;
  puVar4 = (undefined1 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xe8) = uVar10;
  *(ulong **)((long)puVar3 + -0xe0) = puVar25;
  *(long *)((long)puVar3 + -0xd8) = auVar39._8_8_;
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
    auVar39 = func_0x00f78af4();
    lVar14 = lVar27;
    auVar1 = auVar38;
  }
  else {
    iVar7 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    if (iVar7 != 0) {
      lVar14 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar21 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(lVar14,lVar26)
      ;
      lVar26 = lRam0000000003d5d988;
      lVar15 = *(long *)(auVar38._0_8_ + 0xa8);
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
        uVar9 = **(undefined8 **)(lVar26 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
        if (lVar15 == 0) {
          auVar38 = func_0x00f78af4();
          plVar11 = auVar38._8_8_;
          lVar27 = auVar38._0_8_;
          *(undefined8 *)((long)puVar3 + -0x140) = 0x3eb6000;
          *(undefined8 *)((long)puVar3 + -0x138) = 0x3d25458;
          *(undefined8 *)((long)puVar3 + -0x130) = uVar9;
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
          if (plVar11 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar9 = func_0x00f78aec();
            uVar17 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar17,0);
            uVar17 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar9,uVar17);
          }
          else {
            if (lVar27 == 0) {
              lVar27 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar26 = **(long **)(lVar13 + 0x30);
            if ((*(ushort *)(lVar26 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar26);
            }
            lVar23 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar10 != 0) {
              piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar26) {
                  puVar18 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar24 = piVar24 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,lVar26,0);
code_r0x018e1828:
            plVar11 = (long *)(*(code *)*puVar18)(plVar11,puVar18[1]);
            if (plVar11 != (long *)0x0) {
              lVar26 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar10 != 0) {
                piVar24 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar18 = (undefined8 *)(lVar26 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar24 = piVar24 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar10 = (*(code *)*puVar18)(plVar11,puVar18[1]);
              if ((uVar10 & 1) == 0) {
                uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar11 != (long *)0x0) {
                  lVar13 = *plVar11;
                  uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar12 != 0) {
                    piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar18 = (undefined8 *)(lVar13 + (long)*piVar24 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar24 = piVar24 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar18)(plVar11,puVar18[1]);
                }
                return uVar10;
              }
              lVar26 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
              if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar23);
              }
              lVar14 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar10 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar23) {
                    puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar24 = piVar24 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,lVar23,0);
code_r0x018e1934:
              lVar23 = (*(code *)*puVar18)(plVar11,puVar18[1]);
              if (lVar23 != 0) {
                lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
                if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar23);
                }
                lVar14 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar10 != 0) {
                  piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar23) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar24 = piVar24 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,lVar23,0);
code_r0x018e19a8:
                plVar19 = (long *)(*(code *)*puVar18)(plVar11,puVar18[1]);
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
                lVar23 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar10 != 0) {
                  piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar18 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar24 = piVar24 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar10 = (*(code *)*puVar18)(plVar11,puVar18[1]);
                if ((uVar10 & 1) == 0) {
                  uVar10 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar26,0);
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
                lVar14 = *plVar11;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar10 != 0) {
                  piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar23) {
                      puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar24 = piVar24 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,lVar23,0);
code_r0x018e1ab0:
                lVar23 = (*(code *)*puVar18)(plVar11,puVar18[1]);
              } while (lVar23 == 0);
              lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
              if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar23);
              }
              lVar14 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar10 != 0) {
                piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar23) {
                    puVar18 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar24 = piVar24 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar11,lVar23,0);
code_r0x018e1b24:
              plVar19 = (long *)(*(code *)*puVar18)(plVar11,puVar18[1]);
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
        uVar9 = *(undefined8 *)((long)puVar3 + -0xd0);
        uVar28 = *(undefined8 *)((long)puVar3 + -200);
        auVar39._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
        auVar39._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
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
    auVar39 = auVar38;
  }
  lVar20 = auVar39._8_8_;
  lVar26 = auVar39._0_8_;
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
  uVar30 = uVar9;
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
            uVar30 = uVar9;
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
                        uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar30,0);
                        uVar31 = 0;
                        if (lVar22 != 0) {
                          lVar14 = lRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar22,uVar9,puVar4 + -0x68);
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
                                uVar9 = *(undefined8 *)(lVar26 + 0x88);
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
                                                   (uVar29,uVar28,uVar9,0,uVar8,puVar4 + -0xf0,0);
                                iVar21 = (int)uVar9;
                                if (lVar22 != 0) {
                                  uVar9 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar22,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar15 + 0xc0) = uVar9;
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
                                uVar10 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar26 + 0x30),
                                                         *(undefined8 *)(lVar23 + 0x30),lVar15,0);
                                return uVar10;
                              }
                            }
                          }
                          else if (*(long *)(lVar20 + 0x70) != 0) {
                            lVar14 = *(long *)(puVar4 + -0x68);
                            uVar9 = *(undefined8 *)(lVar26 + 0x88);
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
                                               (uVar29,uVar28,uVar9,lVar14,uVar8,puVar4 + -0xb0,0);
                            iVar21 = (int)uVar9;
                            if (lVar22 != 0) {
                              uVar9 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar22,uRam0000000003d3ae58);
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
  uVar17 = auVar38._8_8_;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar15 = *(long *)(auVar38._0_8_ + 0xa8);
  if (lVar15 != 0) {
    uVar9 = *(undefined8 *)(puVar4 + -0x100);
    uVar28 = *(undefined8 *)(puVar4 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)(puVar5 + -0x40) = uVar30;
    *(undefined8 *)(puVar5 + -0x38) = uVar31;
    *(long *)(puVar5 + -0x30) = lVar13;
    *(long *)(puVar5 + -0x28) = lVar27;
    *(long *)(puVar5 + -0x20) = auVar39._8_8_;
    *(long *)(puVar5 + -0x18) = auVar39._0_8_;
    *(undefined8 *)(puVar5 + -0x10) = uVar9;
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
      if ((iVar21 != 0) && (plVar11 = *(long **)(lVar13 + 0x68), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
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
      uVar10 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(puVar4 + -400,uRam0000000003d336f8);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar23 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar9 = *(undefined8 *)(puVar4 + -0x180);
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
            uVar10 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar27,uVar28,0);
            if ((uVar10 & 1) == 0) goto code_r0x0158ac28;
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
                uVar10 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar27,uVar28,puVar4 + -0x198,uRam0000000003d574f0);
                if ((uVar10 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar23 + 0x90) != 0) {
                  uVar10 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar23 + 0x90),*(undefined8 *)(puVar4 + -0x198)
                                           ,0);
                  if ((uVar10 & 1) == 0) goto code_r0x0158ac28;
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
          uVar10 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(puVar4 + -0x1b0,uRam0000000003d32418);
          if ((uVar10 & 1) == 0) {
            *(undefined4 *)(puVar4 + -0x1c0) = 0xf3;
            *(int *)(puVar4 + -0x1b8) = *(int *)(puVar4 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(puVar4 + -0x1b0,uRam0000000003d32410);
            puVar18 = *(undefined8 **)(puVar4 + -0x238);
            uVar9 = *puVar18;
            uVar28 = puVar18[3];
            uVar17 = puVar18[2];
            *(undefined8 *)(puVar4 + -0x228) = puVar18[1];
            *(undefined8 *)(puVar4 + -0x230) = uVar9;
            *(undefined8 *)(puVar4 + -0x218) = uVar28;
            *(undefined8 *)(puVar4 + -0x220) = uVar17;
            uVar9 = puVar18[4];
            uVar28 = puVar18[7];
            uVar17 = puVar18[6];
            *(undefined8 *)(puVar4 + -0x208) = puVar18[5];
            *(undefined8 *)(puVar4 + -0x210) = uVar9;
            *(undefined8 *)(puVar4 + -0x1f8) = uVar28;
            *(undefined8 *)(puVar4 + -0x200) = uVar17;
            uVar10 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar23,puVar4 + -0x230);
            return uVar10;
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
  uVar10 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar23 + 0x88),uVar17,0);
  if ((uVar10 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar9,0);
    if (lVar13 == 0) {
      func_0x00f78af4(uVar9,uVar9);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar13,uVar9,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x15899bc | Atlas.Contexts.FrontEndContextSeasonsState.add_TransitionFromState
// ============================================================

/* WARNING: Possible PIC construction at 0x01589cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01589e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01589dac) */
/* WARNING: Removing unreachable block (ram,0x01589dd0) */
/* WARNING: Removing unreachable block (ram,0x01589e04) */
/* WARNING: Removing unreachable block (ram,0x01589cd4) */
/* WARNING: Removing unreachable block (ram,0x01589cf8) */
/* WARNING: Removing unreachable block (ram,0x01589d3c) */
/* WARNING: Removing unreachable block (ram,0x01589d70) */
/* WARNING: Removing unreachable block (ram,0x01589da0) */
/* WARNING: Removing unreachable block (ram,0x01589e10) */
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

ulong Atlas_Contexts_FrontEndContextSeasonsState__add_TransitionFromState
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
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  ulong *puVar25;
  long lVar26;
  undefined8 uVar27;
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
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 ****ppppuStack_a0;
  code *pcStack_98;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5139 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5139 = 1;
  }
  uVar12 = *(ulong *)(param_1 + 0x78);
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar12,param_2,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar10 = func_0x00ff0f44((ulong *)(param_1 + 0x78),plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  lVar11 = func_0x00f78e5c(plVar9);
  puVar3 = (undefined8 *)&stack0xffffffffffffff70;
  puStack_38 = &Atlas_FrontEnd_FrontEndContext__DeInitStates;
  pppppuVar32 = (undefined8 *****)&pppuStack_40;
  uVar27 = 0x3d1b6e0;
  uVar29 = 0x3d1b6e0;
  uVar16 = 0x3d56b80;
  uVar28 = 0x3d2a5a8;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
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
  lVar24 = *(long *)(lVar11 + 0xb0);
  uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
  lVar26 = lRam0000000003d2a5a8;
  /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar11,uRam0000000003d56b80);
  if (lVar24 == 0) {
code_r0x01589e90:
    auVar38 = func_0x00f78af4();
    uVar16 = auVar38._8_8_;
    uStack_c0 = 0x3d56b80;
    pcStack_98 = Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState;
    uStack_b8 = uVar12;
    uStack_b0 = 0;
    lStack_a8 = lVar11;
    ppppuStack_a0 = pppppuVar32;
    if ((bRam0000000003eb5113 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5113 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar16,0), plVar9 == (long *)0x0 ||
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
    uStack_f0 = 0x3d1b6e0;
    pcStack_c8 = Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout;
    uStack_e8 = uVar12;
    puStack_e0 = puVar25;
    uStack_d8 = uVar16;
    ppppuStack_d0 = &ppppuStack_a0;
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
    uVar16 = auVar38._8_8_;
    uStack_120 = 0x3d1b4a0;
    pcStack_f8 = Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState;
    uStack_118 = uVar12;
    puStack_110 = puVar25;
    uStack_108 = uVar30;
    ppppuStack_100 = &ppppuStack_d0;
    if ((bRam0000000003eb5107 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5107 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar16,0), plVar9 == (long *)0x0 ||
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
    pcStack_128 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
    uStack_148 = uVar12;
    puStack_140 = puVar25;
    uStack_138 = uVar16;
    ppppuStack_130 = &ppppuStack_100;
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
    uVar16 = auVar38._8_8_;
    uStack_180 = 0x3d1b6e0;
    pcStack_158 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
    uStack_178 = uVar12;
    puStack_170 = puVar25;
    uStack_168 = uVar30;
    ppppuStack_160 = &ppppuStack_130;
    if ((bRam0000000003eb50f5 & 1) == 0) {
      func_0x00f78a20(0x3d1b420);
      bRam0000000003eb50f5 = 1;
    }
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,uVar16,0), plVar9 == (long *)0x0 ||
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
    uStack_1b0 = 0x3d1b420;
    pcStack_188 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
    uStack_1a8 = uVar12;
    puStack_1a0 = puVar25;
    uStack_198 = uVar16;
    ppppuStack_190 = &ppppuStack_160;
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
    lVar11 = auVar38._8_8_;
    puVar3 = &uStack_1e0;
    uStack_1e0 = 0x3d1b4a0;
    pcStack_1b8 = Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
    pppppuVar32 = &ppppuStack_1c0;
    uStack_1d8 = uVar12;
    puStack_1d0 = puVar25;
    uStack_1c8 = uVar30;
    ppppuStack_1c0 = &ppppuStack_190;
    if ((bRam0000000003eb5130 & 1) == 0) {
      func_0x00f78a20(0x3d1b6e0);
      bRam0000000003eb5130 = 1;
    }
    uVar16 = 0x3d1b6e0;
    puVar25 = (ulong *)(auVar38._0_8_ + 0x78);
    uVar12 = *puVar25;
    while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,lVar11,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
      uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
      bVar6 = uVar12 == uVar10;
      uVar12 = uVar10;
      if (bVar6) {
        return uVar10;
      }
    }
    puVar34 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
    auVar38 = func_0x00f78e5c(plVar9);
  }
  else {
    unaff_x27 = 0x3d1b000;
    uVar30 = 0x3d56b78;
    uVar31 = 0x3d56b78;
    unaff_x25 = (undefined8 *)0x3d2a000;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_OnExitingModeState(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 0xb0);
    uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar26 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,lVar11,uRam0000000003d56b78);
    unaff_x26 = uVar30;
    if (lVar24 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextModeSelectState__remove_TryFixLoadout(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 0xb8);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar26 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar11,uRam0000000003d56b80);
    if (lVar24 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar26 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar11,uRam0000000003d56b80);
    unaff_x26 = uVar31;
    if (lVar24 == 0) goto code_r0x01589e90;
    unaff_x28 = 0x3d1b000;
    unaff_x27 = 0x3d56000;
    puVar17 = (undefined8 *)0x3d2a038;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420);
    lVar26 = lRam0000000003d2a038;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,lVar11,uRam0000000003d56b68);
    unaff_x25 = puVar17;
    if (lVar24 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 0xc0);
    uVar12 = func_0x00f78aec(/*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0);
    lVar26 = lRam0000000003d2a138;
    /*System.Action<KartLoadout>$$.ctor*/ func_0x01b4918c(uVar12,lVar11,uRam0000000003d56b78);
    if (lVar24 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout(lVar24,uVar12);
    lVar24 = *(long *)(lVar11 + 200);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    lVar26 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar11,uRam0000000003d56b80);
    unaff_x25 = (undefined8 *)0x3d2a038;
    if (lVar24 == 0) goto code_r0x01589e90;
    Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent(lVar24,uVar12);
    puVar25 = *(ulong **)(lVar11 + 0xd0);
    uVar12 = func_0x00f78aec(/*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0);
    auVar38._8_8_ = uVar12;
    auVar38._0_8_ = puVar25;
    lVar26 = lRam0000000003d2a5a8;
    /*System.Action<Type, bool, TransitionData>$$.ctor*/ func_0x01e7158c(uVar12,lVar11,uRam0000000003d56b80);
    if (puVar25 == (ulong *)0x0) goto code_r0x01589e90;
    puVar34 = &UNK_01589cd4;
    unaff_x25 = puVar17;
    unaff_x26 = uVar30;
  }
  *(undefined8 *)((long)puVar3 + -0x30) = uVar16;
  *(ulong *)((long)puVar3 + -0x28) = uVar12;
  *(ulong **)((long)puVar3 + -0x20) = puVar25;
  *(long *)((long)puVar3 + -0x18) = lVar11;
  *(undefined8 ******)((long)puVar3 + -0x10) = pppppuVar32;
  *(undefined **)((long)puVar3 + -8) = puVar34;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
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
  *(undefined8 *)((long)puVar3 + -0x60) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x58) = uVar12;
  *(ulong **)((long)puVar3 + -0x50) = puVar25;
  *(long *)((long)puVar3 + -0x48) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(code **)((long)puVar3 + -0x38) =
       Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
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
  *(undefined8 *)((long)puVar3 + -0x90) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0x88) = uVar12;
  *(ulong **)((long)puVar3 + -0x80) = puVar25;
  *(long *)((long)puVar3 + -0x78) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0x70) = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined **)((long)puVar3 + -0x68) =
       &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
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
  *(undefined8 *)((long)puVar3 + -0xc0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xb8) = uVar12;
  *(ulong **)((long)puVar3 + -0xb0) = puVar25;
  *(long *)((long)puVar3 + -0xa8) = auVar38._8_8_;
  *(undefined1 **)((long)puVar3 + -0xa0) = (undefined1 *)((long)puVar3 + -0x70);
  *(undefined **)((long)puVar3 + -0x98) =
       &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  lVar11 = 0x3d1b6e0;
  puVar25 = (ulong *)(auVar39._0_8_ + 0x78);
  uVar12 = *puVar25;
  while( true ) {
    iVar20 = 0;
    plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar12,auVar39._8_8_);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0)) break;
    uVar10 = func_0x00ff0f44(puVar25,plVar9,uVar12);
    bVar6 = uVar12 == uVar10;
    uVar12 = uVar10;
    if (bVar6) {
      return uVar10;
    }
  }
  auVar38 = func_0x00f78e5c(plVar9);
  lVar24 = auVar38._8_8_;
  puVar4 = (undefined1 *)((long)puVar3 + -0xf0);
  *(undefined8 *)((long)puVar3 + -0xf0) = 0x3d1b6e0;
  *(ulong *)((long)puVar3 + -0xe8) = uVar12;
  *(ulong **)((long)puVar3 + -0xe0) = puVar25;
  *(long *)((long)puVar3 + -0xd8) = auVar39._8_8_;
  *(undefined1 **)((long)puVar3 + -0xd0) = (undefined1 *)((long)puVar3 + -0xa0);
  *(undefined **)((long)puVar3 + -200) = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  puVar33 = (undefined1 *)((long)puVar3 + -0xd0);
  if ((bRam0000000003eb50ed & 1) == 0) {
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d5d988);
    bRam0000000003eb50ed = 1;
  }
  lVar22 = 0x3eb5000;
  if (lVar24 == 0) {
code_r0x0158a62c:
    puVar34 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar39 = func_0x00f78af4();
    lVar13 = lVar26;
    auVar1 = auVar38;
  }
  else {
    iVar7 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar24);
    if (iVar7 != 0) {
      lVar13 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar20 = 0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(lVar13,lVar24)
      ;
      lVar24 = lRam0000000003d5d988;
      lVar14 = *(long *)(auVar38._0_8_ + 0xa8);
      lVar22 = lVar13;
      if (lVar14 != 0) {
        *(undefined8 *)((long)puVar3 + -0x100) = 0x3d1b6e0;
        *(undefined8 *)((long)puVar3 + -0xf8) = 0x3d2a5a8;
        *(undefined8 *)((long)puVar3 + -0xf0) = *(undefined8 *)((long)puVar3 + -0xf0);
        *(undefined8 *)((long)puVar3 + -0xe8) = *(undefined8 *)((long)puVar3 + -0xe8);
        *(undefined8 *)((long)puVar3 + -0xe0) = *(undefined8 *)((long)puVar3 + -0xe0);
        *(undefined8 *)((long)puVar3 + -0xd8) = *(undefined8 *)((long)puVar3 + -0xd8);
        *(undefined8 *)((long)puVar3 + -0xd0) = *(undefined8 *)((long)puVar3 + -0xd0);
        *(undefined8 *)((long)puVar3 + -200) = *(undefined8 *)((long)puVar3 + -200);
        lVar11 = lVar13;
        if ((bRam0000000003eb668b & 1) == 0) {
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb668b = 1;
        }
        uVar27 = **(undefined8 **)(lVar24 + 0x30);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        if (lVar14 == 0) {
          auVar38 = func_0x00f78af4();
          plVar9 = auVar38._8_8_;
          lVar26 = auVar38._0_8_;
          *(undefined8 *)((long)puVar3 + -0x140) = 0x3eb6000;
          *(undefined8 *)((long)puVar3 + -0x138) = 0x3d25458;
          *(undefined8 *)((long)puVar3 + -0x130) = uVar27;
          *(undefined8 *)((long)puVar3 + -0x128) = 0;
          *(undefined8 *)((long)puVar3 + -0x120) = 1;
          *(long *)((long)puVar3 + -0x118) = lVar13;
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
            uVar27 = func_0x00f78aec();
            uVar16 = func_0x00f78a24(0x3d7c5e8);
            /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar27,uVar16,0);
            uVar16 = func_0x00f78a24(0x3d5da50);
            func_0x00f78ac0(uVar27,uVar16);
          }
          else {
            if (lVar26 == 0) {
              lVar26 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            }
            lVar24 = **(long **)(lVar11 + 0x30);
            if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar24);
            }
            lVar22 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar12 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == lVar24) {
                  puVar17 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                  goto code_r0x018e1828;
                }
                piVar23 = piVar23 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,lVar24,0);
code_r0x018e1828:
            plVar9 = (long *)(*(code *)*puVar17)(plVar9,puVar17[1]);
            if (plVar9 != (long *)0x0) {
              lVar24 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar24 + 0x12a);
              if (uVar12 != 0) {
                piVar23 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                    puVar17 = (undefined8 *)(lVar24 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1890;
                  }
                  piVar23 = piVar23 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
              uVar12 = (*(code *)*puVar17)(plVar9,puVar17[1]);
              if ((uVar12 & 1) == 0) {
                uVar12 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
                if (plVar9 != (long *)0x0) {
                  lVar11 = *plVar9;
                  uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar10 != 0) {
                    piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar17 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                        goto code_r0x018e1bc4;
                      }
                      piVar23 = piVar23 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
                  (*(code *)*puVar17)(plVar9,puVar17[1]);
                }
                return uVar12;
              }
              lVar24 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
              lVar22 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              lVar13 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar12 != 0) {
                piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar22) {
                    puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1934;
                  }
                  piVar23 = piVar23 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x018e1934:
              lVar22 = (*(code *)*puVar17)(plVar9,puVar17[1]);
              if (lVar22 != 0) {
                lVar22 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar22);
                }
                lVar13 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar12 != 0) {
                  piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar22) {
                      puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e19a8;
                    }
                    piVar23 = piVar23 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x018e19a8:
                plVar18 = (long *)(*(code *)*puVar17)(plVar9,puVar17[1]);
                if (plVar18 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                lVar22 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
                if (lVar22 != 0) {
                  if (lVar24 == 0) {
                    func_0x00f78af4();
                    goto code_r0x018e1c64;
                  }
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar24,lVar22,0);
                }
              }
code_r0x018e19dc:
              do {
                lVar22 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar12 != 0) {
                  piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                      puVar17 = (undefined8 *)(lVar22 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e1a28;
                    }
                    piVar23 = piVar23 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
                uVar12 = (*(code *)*puVar17)(plVar9,puVar17[1]);
                if ((uVar12 & 1) == 0) {
                  uVar12 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar24,0);
                  goto joined_r0x018e1920;
                }
                if (lVar24 == 0) {
                  func_0x00f78af4();
                  goto code_r0x018e1c64;
                }
                /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar24,lVar26,0);
                lVar22 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
                if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar22);
                }
                lVar13 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar12 != 0) {
                  piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar22) {
                      puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
                      goto code_r0x018e1ab0;
                    }
                    piVar23 = piVar23 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x018e1ab0:
                lVar22 = (*(code *)*puVar17)(plVar9,puVar17[1]);
              } while (lVar22 == 0);
              lVar22 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              lVar13 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar12 != 0) {
                piVar23 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == lVar22) {
                    puVar17 = (undefined8 *)(lVar13 + (long)*piVar23 * 0x10 + 0x138);
                    goto code_r0x018e1b24;
                  }
                  piVar23 = piVar23 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar9,lVar22,0);
code_r0x018e1b24:
              plVar18 = (long *)(*(code *)*puVar17)(plVar9,puVar17[1]);
              if (plVar18 != (long *)0x0) {
                lVar22 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
                if (lVar22 != 0) {
                  /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar24,lVar22,0);
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
        uVar27 = *(undefined8 *)((long)puVar3 + -0xd0);
        uVar28 = *(undefined8 *)((long)puVar3 + -200);
        auVar39._8_8_ = *(undefined8 *)((long)puVar3 + -0xe0);
        auVar39._0_8_ = *(undefined8 *)((long)puVar3 + -0xd8);
        lVar11 = *(long *)((long)puVar3 + -0xf0);
        lVar26 = *(long *)((long)puVar3 + -0xe8);
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
    lVar11 = *(long *)((long)puVar3 + -0xf0);
    lVar22 = *(long *)((long)puVar3 + -0xe8);
    lVar13 = lVar26;
    auVar39 = auVar38;
  }
  lVar19 = auVar39._8_8_;
  lVar24 = auVar39._0_8_;
  puVar5 = puVar4 + -0xf0;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = 0x3d1b6e0;
  *(undefined8 *)(puVar4 + -0x38) = 0x3d2a5a8;
  *(long *)(puVar4 + -0x30) = lVar11;
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
  lVar26 = 0x3eb5000;
  uVar31 = 0x3d2a5a8;
  uVar30 = uVar27;
  if ((*(long *)(lVar24 + 0x38) != 0) && (lVar19 != 0)) {
    uVar16 = 0x3d21270;
    lVar26 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
    lVar11 = *(long *)(lVar19 + 0x18);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar11,0);
    uVar31 = uVar28;
    uVar30 = uVar29;
    unaff_x26 = 0x3d21270;
    if (lVar26 != 0) {
      uVar28 = uRam0000000003d57288;
      lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar26,uVar15);
      iVar20 = (int)uVar28;
      if (*(long *)(lVar24 + 0x38) != 0) {
        lVar11 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
        uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(lVar19 + 0x20),0);
        lVar26 = lVar22;
        unaff_x26 = uVar16;
        if (lVar11 != 0) {
          uVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar28,uRam0000000003d572d8);
          iVar20 = 0;
          lVar14 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar22,uVar16);
          if (lVar14 != 0) {
            uVar16 = 0x3d23990;
            uVar30 = *(undefined8 *)(lVar19 + 0x38);
            uVar28 = *(undefined8 *)(lVar19 + 0x30);
            uVar15 = *(undefined8 *)(lVar19 + 0x48);
            uVar31 = *(undefined8 *)(lVar19 + 0x40);
            uVar36 = *(undefined8 *)(lVar19 + 0x58);
            uVar35 = *(undefined8 *)(lVar19 + 0x50);
            uVar37 = *(undefined8 *)(lVar19 + 0x60);
            *(undefined8 *)(lVar14 + 0xb0) = *(undefined8 *)(lVar19 + 0x68);
            *(undefined8 *)(lVar14 + 0xa8) = uVar37;
            *(undefined8 *)(lVar14 + 0xa0) = uVar36;
            *(undefined8 *)(lVar14 + 0x98) = uVar35;
            *(undefined8 *)(lVar14 + 0x90) = uVar15;
            *(undefined8 *)(lVar14 + 0x88) = uVar31;
            *(undefined8 *)(lVar14 + 0x80) = uVar30;
            *(undefined8 *)(lVar14 + 0x78) = uVar28;
            *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            uVar8 = /*Atlas.FrontEnd.EventInfo$$get_NumberOfAI*/ func_0x01583850(lVar19);
            *(undefined4 *)(lVar14 + 0x70) = uVar8;
            uVar31 = *(undefined8 *)(lVar19 + 0x70);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            unaff_x25 = (undefined8 *)(lVar14 + 0x78);
            iVar20 = 0;
            iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
            uVar30 = uVar27;
            lVar11 = lVar14;
            if (iVar7 == 0) goto code_r0x0158a900;
            uVar30 = uVar29;
            unaff_x27 = 0x3d23990;
            if (*(long *)(lVar19 + 0x70) != 0) {
              *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x18);
              if (*(long *)(lVar19 + 0x70) != 0) {
                *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x60);
                unaff_x27 = uVar16;
                if (*(long *)(lVar19 + 0x70) != 0) {
                  *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x68);
                  if (*(long *)(lVar19 + 0x70) != 0) {
                    *(undefined8 *)(lVar14 + 0x58) =
                         *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x70);
                    lVar21 = *(long *)(lVar19 + 0x70);
                    if (lVar21 != 0) {
                      *(int *)(lVar14 + 0x74) = *(int *)(lVar21 + 0x118) + -1;
                      *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(lVar21 + 0x130);
                      if ((*(long *)(lVar19 + 0x70) != 0) && (*(long *)(lVar24 + 0x38) != 0)) {
                        uVar30 = *(undefined8 *)(*(long *)(lVar19 + 0x70) + 0x110);
                        lVar21 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
                        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar27 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar30,0);
                        uVar31 = 0;
                        if (lVar21 != 0) {
                          lVar13 = lRam0000000003d57510;
                          /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar21,uVar27,puVar4 + -0x68);
                          uVar31 = *(undefined8 *)(puVar4 + -0x68);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar20 = 0;
                          iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
                          if (iVar7 == 0) {
code_r0x0158a900:
                            if (*(long *)(lVar14 + 0xc0) == 0) {
                              unaff_x27 = uVar16;
                              if (*(long *)(lVar19 + 0x70) != 0) {
                                uVar27 = *(undefined8 *)(lVar24 + 0x88);
                                uVar28 = *(undefined8 *)(lVar24 + 0x90);
                                uVar29 = *(undefined8 *)(lVar24 + 0x38);
                                uVar8 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                                uVar15 = *unaff_x25;
                                uVar36 = *(undefined8 *)(lVar14 + 0x90);
                                uVar35 = *(undefined8 *)(lVar14 + 0x88);
                                *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(lVar14 + 0x80);
                                *(undefined8 *)(puVar4 + -0xf0) = uVar15;
                                *(undefined8 *)(puVar4 + -0xd8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xe0) = uVar35;
                                uVar15 = *(undefined8 *)(lVar14 + 0x98);
                                uVar36 = *(undefined8 *)(lVar14 + 0xb0);
                                uVar35 = *(undefined8 *)(lVar14 + 0xa8);
                                *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(lVar14 + 0xa0);
                                *(undefined8 *)(puVar4 + -0xd0) = uVar15;
                                *(undefined8 *)(puVar4 + -0xb8) = uVar36;
                                *(undefined8 *)(puVar4 + -0xc0) = uVar35;
                                lVar13 = 0;
                                lVar21 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                                   (uVar29,uVar28,uVar27,0,uVar8,puVar4 + -0xf0,0);
                                iVar20 = (int)uVar27;
                                if (lVar21 != 0) {
                                  uVar27 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar21,uRam0000000003d3ae58);
                                  *(undefined8 *)(lVar14 + 0xc0) = uVar27;
                                  goto code_r0x0158a954;
                                }
                              }
                            }
                            else {
code_r0x0158a954:
                              iVar7 = *(int *)(lVar19 + 0x2c);
                              if (iVar7 != 0) {
                                *(undefined4 *)(lVar14 + 200) = *(undefined4 *)(lVar19 + 0x28);
                                *(int *)(lVar14 + 0xcc) = iVar7;
                              }
                              unaff_x27 = uVar16;
                              if ((lVar22 != 0) && (*(long *)(lVar24 + 0x30) != 0)) {
                                uVar12 = /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(*(long *)(lVar24 + 0x30),
                                                         *(undefined8 *)(lVar22 + 0x30),lVar14,0);
                                return uVar12;
                              }
                            }
                          }
                          else if (*(long *)(lVar19 + 0x70) != 0) {
                            lVar13 = *(long *)(puVar4 + -0x68);
                            uVar27 = *(undefined8 *)(lVar24 + 0x88);
                            uVar28 = *(undefined8 *)(lVar24 + 0x90);
                            uVar29 = *(undefined8 *)(lVar24 + 0x38);
                            uVar8 = *(undefined4 *)(*(long *)(lVar19 + 0x70) + 0x108);
                            uVar15 = *unaff_x25;
                            uVar36 = *(undefined8 *)(lVar14 + 0x90);
                            uVar35 = *(undefined8 *)(lVar14 + 0x88);
                            *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar14 + 0x80);
                            *(undefined8 *)(puVar4 + -0xb0) = uVar15;
                            *(undefined8 *)(puVar4 + -0x98) = uVar36;
                            *(undefined8 *)(puVar4 + -0xa0) = uVar35;
                            uVar15 = *(undefined8 *)(lVar14 + 0x98);
                            uVar36 = *(undefined8 *)(lVar14 + 0xb0);
                            uVar35 = *(undefined8 *)(lVar14 + 0xa8);
                            *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(lVar14 + 0xa0);
                            *(undefined8 *)(puVar4 + -0x90) = uVar15;
                            *(undefined8 *)(puVar4 + -0x78) = uVar36;
                            *(undefined8 *)(puVar4 + -0x80) = uVar35;
                            lVar21 = Atlas_Contexts_ContextManagerExtensions__ResolveLoadoutFromLoadoutDefinition
                                               (uVar29,uVar28,uVar27,lVar13,uVar8,puVar4 + -0xb0,0);
                            iVar20 = (int)uVar27;
                            if (lVar21 != 0) {
                              uVar27 = /*System.Collections.Generic.List<KartLoadout>$$AsReadOnly*/ func_0x023eef08(lVar21,uRam0000000003d3ae58);
                              *(undefined8 *)(lVar14 + 0xc0) = uVar27;
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
  uVar16 = auVar38._8_8_;
  *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0xf8) = &Atlas_FrontEnd_FrontEndContext__TryRequestState;
  lVar14 = *(long *)(auVar38._0_8_ + 0xa8);
  if (lVar14 != 0) {
    uVar27 = *(undefined8 *)(puVar4 + -0x100);
    uVar28 = *(undefined8 *)(puVar4 + -0xf8);
Core_StateManagement_StateMachine__TryRequestState:
    *(undefined8 *)(puVar5 + -0x40) = uVar30;
    *(undefined8 *)(puVar5 + -0x38) = uVar31;
    *(long *)(puVar5 + -0x30) = lVar11;
    *(long *)(puVar5 + -0x28) = lVar26;
    *(long *)(puVar5 + -0x20) = auVar39._8_8_;
    *(long *)(puVar5 + -0x18) = auVar39._0_8_;
    *(undefined8 *)(puVar5 + -0x10) = uVar27;
    *(undefined8 *)(puVar5 + -8) = uVar28;
    *(undefined8 *)(puVar5 + -0x50) = 0;
    *(undefined8 *)(puVar5 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar14,uVar16,puVar5 + -0x50);
    lVar11 = *(long *)(puVar5 + -0x50);
    if (lVar11 != 0) {
      if (*(long *)(lVar14 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar14 + 0x18) = lVar11;
      *(undefined8 *)(lVar14 + 0x20) = uVar16;
      lVar26 = lVar11;
      if ((iVar20 != 0) && (plVar9 = *(long **)(lVar11 + 0x68), plVar9 != (long *)0x0)) {
        (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        lVar26 = *(long *)(lVar14 + 0x18);
        if (*(long *)(lVar14 + 0x18) == 0) {
          func_0x00f78af4();
          lVar26 = lVar11;
        }
      }
      *(long *)(lVar26 + 0x70) = lVar13;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar11 != 0);
  }
  auVar38 = func_0x00f78af4();
  lVar22 = auVar38._0_8_;
  *(undefined8 *)(puVar4 + -0x160) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x158) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 **)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = uVar30;
  *(undefined8 *)(puVar4 + -0x138) = uVar31;
  *(long *)(puVar4 + -0x130) = lVar11;
  *(long *)(puVar4 + -0x128) = lVar26;
  *(long *)(puVar4 + -0x120) = lVar19;
  *(long *)(puVar4 + -0x118) = lVar24;
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
  lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(lVar11,uRam0000000003d3a498);
  if ((*(long *)(lVar22 + 0x80) != 0) &&
     (lVar26 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar22 + 0x80),0), lVar26 != 0)) {
    *(long *)(puVar4 + -0x238) = auVar38._8_8_;
    if (*(long *)(lVar26 + 0x50) != 0) {
      /*System.Collections.Generic.List<SaveData.CharacterProgression>$$GetEnumerator*/ func_0x02585084(puVar4 + -0x1e8,*(long *)(lVar26 + 0x50),uRam0000000003d3d860);
      *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)(puVar4 + -0x1e0);
      *(undefined8 *)(puVar4 + -400) = *(undefined8 *)(puVar4 + -0x1e8);
      *(undefined8 *)(puVar4 + -0x178) = *(undefined8 *)(puVar4 + -0x1d0);
      *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)(puVar4 + -0x1d8);
      *(undefined8 *)(puVar4 + -0x170) = *(undefined8 *)(puVar4 + -0x1c8);
code_r0x0158ab4c:
      uVar12 = /*System.Collections.Generic.List.Enumerator<SaveData.CharacterProgression>$$MoveNext*/ func_0x01f831d0(puVar4 + -400,uRam0000000003d336f8);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(lVar22 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar27 = *(undefined8 *)(puVar4 + -0x180);
          uVar16 = *(undefined8 *)(puVar4 + -0x170);
          lVar26 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
          if (lVar26 == 0) {
            func_0x00f78af4(uVar28,uVar28);
          }
          else {
            uVar12 = /*Core.Definitions.GameDefinitions$$IsValidID*/ func_0x0164625c(lVar26,uVar28,0);
            if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
            if (*(long *)(lVar22 + 0x38) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar26 = *(long *)(*(long *)(lVar22 + 0x38) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar16,0);
              if (lVar26 == 0) {
                func_0x00f78af4(uVar28,uVar28);
              }
              else {
                uVar12 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar26,uVar28,puVar4 + -0x198,uRam0000000003d574f0);
                if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
                if (*(long *)(lVar22 + 0x90) != 0) {
                  uVar12 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar22 + 0x90),*(undefined8 *)(puVar4 + -0x198)
                                           ,0);
                  if ((uVar12 & 1) == 0) goto code_r0x0158ac28;
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
      if (lVar11 != 0) {
        /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(puVar4 + -0x1b0,lVar11,uRam0000000003d3a4b8);
        while( true ) {
          uVar12 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(puVar4 + -0x1b0,uRam0000000003d32418);
          if ((uVar12 & 1) == 0) {
            *(undefined4 *)(puVar4 + -0x1c0) = 0xf3;
            *(int *)(puVar4 + -0x1b8) = *(int *)(puVar4 + -0x1b8) + 1;
            /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(puVar4 + -0x1b0,uRam0000000003d32410);
            puVar17 = *(undefined8 **)(puVar4 + -0x238);
            uVar27 = *puVar17;
            uVar28 = puVar17[3];
            uVar16 = puVar17[2];
            *(undefined8 *)(puVar4 + -0x228) = puVar17[1];
            *(undefined8 *)(puVar4 + -0x230) = uVar27;
            *(undefined8 *)(puVar4 + -0x218) = uVar28;
            *(undefined8 *)(puVar4 + -0x220) = uVar16;
            uVar27 = puVar17[4];
            uVar28 = puVar17[7];
            uVar16 = puVar17[6];
            *(undefined8 *)(puVar4 + -0x208) = puVar17[5];
            *(undefined8 *)(puVar4 + -0x210) = uVar27;
            *(undefined8 *)(puVar4 + -0x1f8) = uVar28;
            *(undefined8 *)(puVar4 + -0x200) = uVar16;
            uVar12 = /*Atlas.FrontEnd.FrontEndContext$$CheckAndFixLastSelectedLoadout*/ func_0x0158ae30(lVar22,puVar4 + -0x230);
            return uVar12;
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
  uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar22 + 0x88),uVar16,0);
  if ((uVar12 & 1) == 0) {
code_r0x0158ac28:
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar27 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar27,0);
    if (lVar11 == 0) {
      func_0x00f78af4(uVar27,uVar27);
      goto code_r0x0158ad6c;
    }
    /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(lVar11,uVar27,uRam0000000003d3a4a8);
  }
  goto code_r0x0158ab4c;
}



// ============================================================
// RVA: 0x158a4d4 | Atlas.Contexts.FrontEndContextSeasonsState.remove_TransitionFromState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong *puVar3;
  undefined1 *puVar4;
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
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  puVar23 = (ulong *)(param_1 + 0x78);
  uVar17 = *puVar23;
  while( true ) {
    iVar19 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,param_2);
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
  puVar3 = &uStack_60;
  uStack_60 = 0x3d1b6e0;
  puStack_38 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
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
    pppppuVar27 = &ppppuStack_40;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_50;
    auVar1._0_8_ = uStack_48;
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
        auVar34._8_8_ = puStack_50;
        auVar34._0_8_ = uStack_48;
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
        puVar4 = &stack0xffffffffffffffd0;
        uVar17 = uStack_58;
        uVar24 = uStack_60;
        pppppuVar27 = (undefined8 *****)ppppuStack_40;
        puVar28 = puStack_38;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = (ulong *)&stack0xffffffffffffffd0;
    uVar9 = param_4;
    uVar17 = uStack_58;
    uVar24 = uStack_60;
    pppppuVar27 = (undefined8 *****)ppppuStack_40;
    puVar28 = puStack_38;
    auVar34 = auVar33;
  }
  lVar20 = auVar34._8_8_;
  lVar26 = auVar34._0_8_;
  puVar4 = (undefined1 *)((long)puVar3 + -0xf0);
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
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
    *(ulong *)(puVar4 + -0x30) = uVar24;
    *(ulong *)(puVar4 + -0x28) = uVar17;
    *(long *)(puVar4 + -0x20) = auVar34._8_8_;
    *(long *)(puVar4 + -0x18) = auVar34._0_8_;
    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar27;
    *(undefined **)(puVar4 + -8) = puVar28;
    *(undefined8 *)(puVar4 + -0x50) = 0;
    *(undefined8 *)(puVar4 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar10,uVar25,puVar4 + -0x50);
    lVar26 = *(long *)(puVar4 + -0x50);
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
// RVA: 0x15902a4 | Atlas.Contexts.FrontEndContextSeasonsState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextSeasonsState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// ============================================================
// RVA: 0x15902ac | Atlas.Contexts.FrontEndContextSeasonsState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextSeasonsState__OnEnter
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar16;
  undefined8 unaff_x21;
  long lVar17;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = unaff_x20;
  if ((bRam0000000003eb513c & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56cb0);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb513c = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(uVar10,0);
  lVar17 = *(long *)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar17 == 0) {
code_r0x015903c8:
    lVar17 = func_0x00f78af4();
    if ((bRam0000000003eb513d & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb513d = 1;
    }
    uVar10 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
    lVar17 = *(long *)(lVar17 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
    if (lVar17 != 0) {
      /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar17,uVar10,0,0,uRam0000000003d2a5b0);
      return 1;
    }
    uVar16 = func_0x00f78af4();
    if ((bRam0000000003eb513e & 1) == 0) {
      func_0x00f78a20(0x3d405a0);
      bRam0000000003eb513e = 1;
    }
    if (uVar16 == 0) {
      auVar25 = func_0x00f78af4(0,uRam0000000003d405a0);
      uVar16 = auVar25._0_8_;
      *(undefined8 *)(uVar16 + 0x10) = *param_3;
      *(long *)(uVar16 + 0x20) = auVar25._8_8_;
      *(undefined8 **)(uVar16 + 0x28) = param_3;
      return uVar16;
    }
    return uVar16;
  }
  /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar17,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),0,uVar10,0);
  uVar16 = *(ulong *)(param_1 + 0x88);
  uVar10 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  param_3 = puRam0000000003d56cb0;
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar10,param_1,puRam0000000003d56cb0,0);
  if (uVar16 == 0) goto code_r0x015903c8;
  uVar12 = 0;
  lVar17 = *(long *)(uVar16 + 0x30);
  if (lVar17 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar17 + 0x18) != 0) {
    *(undefined8 *)(lVar17 + 0x20) = uVar10;
    return uVar16;
  }
  uVar7 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar7,0);
  puVar5 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffe0;
  lVar17 = *(long *)(auVar24._0_8_ + 0x30);
  if (lVar17 == 0) {
code_r0x0150b5a8:
    unaff_x20 = auVar25._0_8_;
    func_0x00f78af4();
    uVar7 = auVar25._8_8_;
  }
  else {
    uVar11 = auVar24._8_4_;
    uVar7 = auVar24._8_8_;
    if (uVar11 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar17 == 0) {
        uVar16 = 0;
        if (8 < uVar11) {
          return 0;
        }
        uVar14 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar11 & 0x1f) & uVar14) == 0) {
          return uVar16;
        }
      }
      else {
        uVar16 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar17,0);
        if ((uVar11 != 0) || ((uVar16 & 1) == 0)) {
          if (8 < uVar11) {
            return uVar16;
          }
          uVar14 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar17 = *(long *)(auVar24._0_8_ + 0x28);
      auVar26._8_4_ = uVar11;
      auVar26._0_8_ = lVar17;
      auVar25 = auVar24;
      if (lVar17 != 0) {
        uVar10 = 0;
        uVar12 = 1;
        puVar20 = &Atlas_UI_TopBarManager__ButtonPressed;
        puVar5 = &stack0xfffffffffffffff0;
        puVar19 = &stack0xfffffffffffffff0;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar7;
  uVar7 = func_0x00f78b24();
  puVar20 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar26 = func_0x00f78ac0(uVar7,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar12;
  auVar4._0_8_ = unaff_x20;
  auVar3._8_8_ = uVar12;
  auVar3._0_8_ = unaff_x20;
  auVar24._8_8_ = unaff_x19;
  auVar24._0_8_ = auVar26._0_8_;
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = auVar26._0_8_;
  if (auVar26._8_4_ < 9) {
    uVar16 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar26._8_4_ * 4);
    auVar24 = auVar2;
    auVar4 = auVar3;
  }
  else {
    uVar16 = 0xffffffff;
  }
  do {
    uVar9 = auVar24._8_8_;
    uVar8 = auVar24._0_8_;
    *(long *)(puVar5 + -0x20) = auVar4._0_8_;
    *(ulong *)(puVar5 + -0x18) = uVar9;
    *(undefined1 **)(puVar5 + -0x10) = puVar19;
    *(undefined **)(puVar5 + -8) = puVar20;
    uVar11 = (uint)uVar16;
    if (uVar11 == 0xffffffff) {
      return uVar8;
    }
    lVar17 = *(long *)(uVar8 + 0x70);
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar9 = uVar16;
      if (uVar11 < *(uint *)(lVar17 + 0x18)) {
        uVar15 = 2;
        if ((int)uVar10 == 0) {
          uVar15 = 0;
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar15;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar8,uVar16);
        }
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(long *)(puVar5 + -0x48) = unaff_x25;
        *(long *)(puVar5 + -0x40) = unaff_x24;
        *(long *)(puVar5 + -0x38) = unaff_x23;
        *(long *)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        lVar17 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar13 = *(long *)(uVar8 + 0x70);
        if (lVar13 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar13 = lVar13 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar13 + 0x20);
        unaff_x22 = *(long *)(lVar13 + 0x28);
        uVar10 = *(undefined8 *)(lVar13 + 0x30);
        uVar7 = *(undefined8 *)(lVar13 + 0x48);
        uVar12 = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
        *(undefined8 *)(puVar5 + -0xf0) = uVar10;
        *(undefined8 *)(puVar5 + -0xd8) = uVar7;
        *(undefined8 *)(puVar5 + -0xe0) = uVar12;
        lVar17 = *(long *)(lVar13 + 0x50);
        iVar18 = *(int *)(lVar13 + 0x58);
        iVar1 = *(int *)(lVar13 + 0x5c);
        unaff_x23 = *(long *)(lVar13 + 0x60);
        unaff_x24 = *(long *)(lVar13 + 0x68);
        uVar10 = *(undefined8 *)(lVar13 + 0x70);
        *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
        *(undefined8 *)(puVar5 + -0x100) = uVar10;
        if (iVar1 == iVar18) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (lVar17 != 0) {
            uVar16 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar17,iVar18 == 2,0);
            return uVar16;
          }
        }
        else if (iVar18 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar12 = *(undefined8 *)(lVar13 + 0x38);
            uVar10 = *(undefined8 *)(lVar13 + 0x30);
            uVar21 = *(undefined8 *)(lVar13 + 0x48);
            uVar7 = *(undefined8 *)(lVar13 + 0x40);
            *(undefined8 *)(puVar5 + -0x118) = uVar12;
            *(undefined8 *)(puVar5 + -0x120) = uVar10;
            *(undefined8 *)(puVar5 + -0x108) = uVar21;
            *(undefined8 *)(puVar5 + -0x110) = uVar7;
            uVar23 = *(undefined8 *)(lVar13 + 0x78);
            uVar22 = *(undefined8 *)(lVar13 + 0x70);
            *(undefined8 *)(puVar5 + -0x128) = uVar23;
            *(undefined8 *)(puVar5 + -0x130) = uVar22;
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = uVar12;
            *(undefined8 *)(puVar5 + -0xb8) = uVar10;
            *(undefined8 *)(puVar5 + -0xa0) = uVar21;
            *(undefined8 *)(puVar5 + -0xa8) = uVar7;
            *(long *)(puVar5 + -0x98) = lVar17;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8620;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = uVar23;
            *(undefined8 *)(puVar5 + -0x78) = uVar22;
            lVar13 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,puVar5 + -200,uRam0000000003d2a408);
            iVar18 = 1;
          }
          else {
            iVar18 = 2;
          }
code_r0x0150c72c:
          lVar13 = *(long *)(uVar8 + 0x70);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar13 = lVar13 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar13 + 0x20) = unaff_x26;
            *(long *)(lVar13 + 0x28) = unaff_x22;
            uVar10 = *(undefined8 *)(puVar5 + -0xf0);
            uVar7 = *(undefined8 *)(puVar5 + -0xd8);
            uVar12 = *(undefined8 *)(puVar5 + -0xe0);
            *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(lVar13 + 0x30) = uVar10;
            *(undefined8 *)(lVar13 + 0x48) = uVar7;
            *(undefined8 *)(lVar13 + 0x40) = uVar12;
            *(long *)(lVar13 + 0x50) = lVar17;
            *(int *)(lVar13 + 0x58) = iVar18;
            *(int *)(lVar13 + 0x5c) = iVar1;
            *(long *)(lVar13 + 0x60) = unaff_x23;
            *(long *)(lVar13 + 0x68) = unaff_x24;
            uVar10 = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(lVar13 + 0x70) = uVar10;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar18 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar18 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xd8);
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xe0);
            *(long *)(puVar5 + -0x98) = lVar17;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8628;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x100);
            lVar13 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar10 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar10,0);
        lVar13 = auVar25._8_8_;
        *(undefined8 *)(puVar5 + -0x180) = unaff_x26;
        *(long *)(puVar5 + -0x178) = unaff_x25;
        *(long *)(puVar5 + -0x170) = unaff_x24;
        *(long *)(puVar5 + -0x168) = unaff_x23;
        *(long *)(puVar5 + -0x160) = unaff_x22;
        *(ulong *)(puVar5 + -0x158) = uVar8;
        *(ulong *)(puVar5 + -0x150) = uVar16;
        *(long *)(puVar5 + -0x148) = lVar17;
        *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar10 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                 *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar13 + 0x10),0,0);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,10,uRam0000000003d5e7a8);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar10,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar10,1,uRam0000000003d5e888);
        uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar10,auVar25._0_8_,uRam0000000003d5e850);
        if ((uVar16 != 0) && (*(char *)(uVar16 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar16 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
        }
        return uVar16;
      }
    }
    uVar10 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar10,0);
    puVar6 = puVar5 + -0x30;
    puVar19 = puVar5 + -0x30;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar17 = *(long *)(auVar25._0_8_ + 0x28);
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._0_8_ = lVar17;
    if (lVar17 == 0) {
      puVar20 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar24 = func_0x00f78af4();
    }
    else {
      puVar6 = puVar5 + -0x20;
      puVar19 = *(undefined1 **)(puVar5 + -0x30);
      puVar20 = *(undefined **)(puVar5 + -0x28);
    }
    puVar5 = puVar6 + -0x20;
    *(ulong *)(puVar6 + -0x20) = uVar8;
    *(ulong *)(puVar6 + -0x18) = uVar9;
    *(undefined1 **)(puVar6 + -0x10) = puVar19;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar19 = puVar6 + -0x10;
    uVar16 = 4;
    uVar10 = 0;
    puVar20 = &UNK_0150bd10;
    auVar4 = auVar24;
  } while( true );
}



// ============================================================
// RVA: 0x15902b0 | Atlas.Contexts.FrontEndContextSeasonsState.ShowSeasonsScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextSeasonsState__ShowSeasonsScreen
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar16;
  undefined8 unaff_x21;
  long lVar17;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  
  auVar25._8_8_ = unaff_x19;
  auVar25._0_8_ = unaff_x20;
  if ((bRam0000000003eb513c & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56cb0);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb513c = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(uVar10,0);
  lVar17 = *(long *)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar17 == 0) {
LAB_015903c8:
    lVar17 = func_0x00f78af4();
    if ((bRam0000000003eb513d & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb513d = 1;
    }
    uVar10 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
    lVar17 = *(long *)(lVar17 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
    if (lVar17 != 0) {
      /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar17,uVar10,0,0,uRam0000000003d2a5b0);
      return 1;
    }
    uVar16 = func_0x00f78af4();
    if ((bRam0000000003eb513e & 1) == 0) {
      func_0x00f78a20(0x3d405a0);
      bRam0000000003eb513e = 1;
    }
    if (uVar16 == 0) {
      auVar25 = func_0x00f78af4(0,uRam0000000003d405a0);
      uVar16 = auVar25._0_8_;
      *(undefined8 *)(uVar16 + 0x10) = *param_3;
      *(long *)(uVar16 + 0x20) = auVar25._8_8_;
      *(undefined8 **)(uVar16 + 0x28) = param_3;
      return uVar16;
    }
    return uVar16;
  }
  /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar17,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200),0,uVar10,0);
  uVar16 = *(ulong *)(param_1 + 0x88);
  uVar10 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  param_3 = puRam0000000003d56cb0;
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar10,param_1,puRam0000000003d56cb0,0);
  if (uVar16 == 0) goto LAB_015903c8;
  uVar12 = 0;
  lVar17 = *(long *)(uVar16 + 0x30);
  if (lVar17 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar17 + 0x18) != 0) {
    *(undefined8 *)(lVar17 + 0x20) = uVar10;
    return uVar16;
  }
  uVar7 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar7,0);
  puVar5 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffe0;
  lVar17 = *(long *)(auVar24._0_8_ + 0x30);
  if (lVar17 == 0) {
code_r0x0150b5a8:
    unaff_x20 = auVar25._0_8_;
    func_0x00f78af4();
    uVar7 = auVar25._8_8_;
  }
  else {
    uVar11 = auVar24._8_4_;
    uVar7 = auVar24._8_8_;
    if (uVar11 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = *(long *)(lVar17 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar17 == 0) {
        uVar16 = 0;
        if (8 < uVar11) {
          return 0;
        }
        uVar14 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar11 & 0x1f) & uVar14) == 0) {
          return uVar16;
        }
      }
      else {
        uVar16 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar17,0);
        if ((uVar11 != 0) || ((uVar16 & 1) == 0)) {
          if (8 < uVar11) {
            return uVar16;
          }
          uVar14 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar17 = *(long *)(auVar24._0_8_ + 0x28);
      auVar26._8_4_ = uVar11;
      auVar26._0_8_ = lVar17;
      auVar25 = auVar24;
      if (lVar17 != 0) {
        uVar10 = 0;
        uVar12 = 1;
        puVar20 = &Atlas_UI_TopBarManager__ButtonPressed;
        puVar5 = &stack0xfffffffffffffff0;
        puVar19 = &stack0xfffffffffffffff0;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar7;
  uVar7 = func_0x00f78b24();
  puVar20 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar26 = func_0x00f78ac0(uVar7,0);
code_r0x0150b5b8:
  auVar4._8_8_ = uVar12;
  auVar4._0_8_ = unaff_x20;
  auVar3._8_8_ = uVar12;
  auVar3._0_8_ = unaff_x20;
  auVar24._8_8_ = unaff_x19;
  auVar24._0_8_ = auVar26._0_8_;
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = auVar26._0_8_;
  if (auVar26._8_4_ < 9) {
    uVar16 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar26._8_4_ * 4);
    auVar24 = auVar2;
    auVar4 = auVar3;
  }
  else {
    uVar16 = 0xffffffff;
  }
  do {
    uVar9 = auVar24._8_8_;
    uVar8 = auVar24._0_8_;
    *(long *)(puVar5 + -0x20) = auVar4._0_8_;
    *(ulong *)(puVar5 + -0x18) = uVar9;
    *(undefined1 **)(puVar5 + -0x10) = puVar19;
    *(undefined **)(puVar5 + -8) = puVar20;
    uVar11 = (uint)uVar16;
    if (uVar11 == 0xffffffff) {
      return uVar8;
    }
    lVar17 = *(long *)(uVar8 + 0x70);
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar9 = uVar16;
      if (uVar11 < *(uint *)(lVar17 + 0x18)) {
        uVar15 = 2;
        if ((int)uVar10 == 0) {
          uVar15 = 0;
        }
        *(undefined4 *)(lVar17 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar15;
        if ((auVar4._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar8,uVar16);
        }
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(long *)(puVar5 + -0x48) = unaff_x25;
        *(long *)(puVar5 + -0x40) = unaff_x24;
        *(long *)(puVar5 + -0x38) = unaff_x23;
        *(long *)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        lVar17 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar13 = *(long *)(uVar8 + 0x70);
        if (lVar13 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar13 = lVar13 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar13 + 0x20);
        unaff_x22 = *(long *)(lVar13 + 0x28);
        uVar10 = *(undefined8 *)(lVar13 + 0x30);
        uVar7 = *(undefined8 *)(lVar13 + 0x48);
        uVar12 = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
        *(undefined8 *)(puVar5 + -0xf0) = uVar10;
        *(undefined8 *)(puVar5 + -0xd8) = uVar7;
        *(undefined8 *)(puVar5 + -0xe0) = uVar12;
        lVar17 = *(long *)(lVar13 + 0x50);
        iVar18 = *(int *)(lVar13 + 0x58);
        iVar1 = *(int *)(lVar13 + 0x5c);
        unaff_x23 = *(long *)(lVar13 + 0x60);
        unaff_x24 = *(long *)(lVar13 + 0x68);
        uVar10 = *(undefined8 *)(lVar13 + 0x70);
        *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
        *(undefined8 *)(puVar5 + -0x100) = uVar10;
        if (iVar1 == iVar18) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (lVar17 != 0) {
            uVar16 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar17,iVar18 == 2,0);
            return uVar16;
          }
        }
        else if (iVar18 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar12 = *(undefined8 *)(lVar13 + 0x38);
            uVar10 = *(undefined8 *)(lVar13 + 0x30);
            uVar21 = *(undefined8 *)(lVar13 + 0x48);
            uVar7 = *(undefined8 *)(lVar13 + 0x40);
            *(undefined8 *)(puVar5 + -0x118) = uVar12;
            *(undefined8 *)(puVar5 + -0x120) = uVar10;
            *(undefined8 *)(puVar5 + -0x108) = uVar21;
            *(undefined8 *)(puVar5 + -0x110) = uVar7;
            uVar23 = *(undefined8 *)(lVar13 + 0x78);
            uVar22 = *(undefined8 *)(lVar13 + 0x70);
            *(undefined8 *)(puVar5 + -0x128) = uVar23;
            *(undefined8 *)(puVar5 + -0x130) = uVar22;
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = uVar12;
            *(undefined8 *)(puVar5 + -0xb8) = uVar10;
            *(undefined8 *)(puVar5 + -0xa0) = uVar21;
            *(undefined8 *)(puVar5 + -0xa8) = uVar7;
            *(long *)(puVar5 + -0x98) = lVar17;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8620;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = uVar23;
            *(undefined8 *)(puVar5 + -0x78) = uVar22;
            lVar13 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,puVar5 + -200,uRam0000000003d2a408);
            iVar18 = 1;
          }
          else {
            iVar18 = 2;
          }
code_r0x0150c72c:
          lVar13 = *(long *)(uVar8 + 0x70);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar13 = lVar13 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar13 + 0x20) = unaff_x26;
            *(long *)(lVar13 + 0x28) = unaff_x22;
            uVar10 = *(undefined8 *)(puVar5 + -0xf0);
            uVar7 = *(undefined8 *)(puVar5 + -0xd8);
            uVar12 = *(undefined8 *)(puVar5 + -0xe0);
            *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(lVar13 + 0x30) = uVar10;
            *(undefined8 *)(lVar13 + 0x48) = uVar7;
            *(undefined8 *)(lVar13 + 0x40) = uVar12;
            *(long *)(lVar13 + 0x50) = lVar17;
            *(int *)(lVar13 + 0x58) = iVar18;
            *(int *)(lVar13 + 0x5c) = iVar1;
            *(long *)(lVar13 + 0x60) = unaff_x23;
            *(long *)(lVar13 + 0x68) = unaff_x24;
            uVar10 = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(lVar13 + 0x70) = uVar10;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar18 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar18 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xd8);
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xe0);
            *(long *)(puVar5 + -0x98) = lVar17;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8628;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x100);
            lVar13 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar10 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar10,0);
        lVar13 = auVar25._8_8_;
        *(undefined8 *)(puVar5 + -0x180) = unaff_x26;
        *(long *)(puVar5 + -0x178) = unaff_x25;
        *(long *)(puVar5 + -0x170) = unaff_x24;
        *(long *)(puVar5 + -0x168) = unaff_x23;
        *(long *)(puVar5 + -0x160) = unaff_x22;
        *(ulong *)(puVar5 + -0x158) = uVar8;
        *(ulong *)(puVar5 + -0x150) = uVar16;
        *(long *)(puVar5 + -0x148) = lVar17;
        *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar10 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                 *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar13 + 0x10),0,0);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,10,uRam0000000003d5e7a8);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar10,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar10,1,uRam0000000003d5e888);
        uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar10,auVar25._0_8_,uRam0000000003d5e850);
        if ((uVar16 != 0) && (*(char *)(uVar16 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar16 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
        }
        return uVar16;
      }
    }
    uVar10 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar10,0);
    puVar6 = puVar5 + -0x30;
    puVar19 = puVar5 + -0x30;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar17 = *(long *)(auVar25._0_8_ + 0x28);
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._0_8_ = lVar17;
    if (lVar17 == 0) {
      puVar20 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar24 = func_0x00f78af4();
    }
    else {
      puVar6 = puVar5 + -0x20;
      puVar19 = *(undefined1 **)(puVar5 + -0x30);
      puVar20 = *(undefined **)(puVar5 + -0x28);
    }
    puVar5 = puVar6 + -0x20;
    *(ulong *)(puVar6 + -0x20) = uVar8;
    *(ulong *)(puVar6 + -0x18) = uVar9;
    *(undefined1 **)(puVar6 + -0x10) = puVar19;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar19 = puVar6 + -0x10;
    uVar16 = 4;
    uVar10 = 0;
    puVar20 = &UNK_0150bd10;
    auVar4 = auVar24;
  } while( true );
}



// ============================================================
// RVA: 0x15903cc | Atlas.Contexts.FrontEndContextSeasonsState.ExitSelected
// ============================================================

long Atlas_Contexts_FrontEndContextSeasonsState__ExitSelected
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb513d & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb513d = 1;
  }
  uVar1 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
  lVar2 = *(long *)(param_1 + 0x78);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar1,0);
  if (lVar2 != 0) {
    /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar2,uVar1,0,0,uRam0000000003d2a5b0);
    return 1;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb513e & 1) == 0) {
    func_0x00f78a20(0x3d405a0);
    bRam0000000003eb513e = 1;
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  auVar3 = func_0x00f78af4(0,uRam0000000003d405a0);
  lVar2 = auVar3._0_8_;
  *(undefined8 *)(lVar2 + 0x10) = *param_3;
  *(long *)(lVar2 + 0x20) = auVar3._8_8_;
  *(undefined8 **)(lVar2 + 0x28) = param_3;
  return lVar2;
}



// ============================================================
// RVA: 0x1590490 | Atlas.Contexts.FrontEndContextSeasonsState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextSeasonsState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb513e & 1) == 0) {
    func_0x00f78a20(0x3d405a0);
    bRam0000000003eb513e = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405a0);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



