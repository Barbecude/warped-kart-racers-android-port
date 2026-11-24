// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextMatchMakingState

// ============================================================
// RVA: 0x15888e8 | Atlas.Contexts.FrontEndContextMatchMakingState.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1588ad0 | Atlas.Contexts.FrontEndContextMatchMakingState.add_RequestState
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1589fd4 | Atlas.Contexts.FrontEndContextMatchMakingState.remove_RequestState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextMatchMakingState__remove_RequestState
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
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  undefined8 ****ppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  undefined8 ****ppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb5107 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5107 = 1;
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
  pcStack_38 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50f7 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb50f7 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x80);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar18 = auVar33._8_8_;
  uStack_90 = 0x3d1b6e0;
  pcStack_68 = Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb50f5 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb50f5 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar18,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar25 = auVar33._8_8_;
  uStack_c0 = 0x3d1b420;
  pcStack_98 = Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb50f9 & 1) == 0) {
    func_0x00f78a20(0x3d1b4a0);
    bRam0000000003eb50f9 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x88);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar18 = auVar33._8_8_;
  uStack_f0 = 0x3d1b4a0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb5130 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5130 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar18,0), plVar8 == (long *)0x0 ||
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
  uStack_120 = 0x3d1b6e0;
  puStack_f8 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_118 = uVar17;
  puStack_110 = puVar23;
  uStack_108 = uVar18;
  ppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar18 = auVar33._8_8_;
  uStack_150 = 0x3d1b6e0;
  puStack_128 = &Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_148 = uVar17;
  puStack_140 = puVar23;
  uStack_138 = uVar25;
  ppppuStack_130 = &ppppuStack_100;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar18,0), plVar8 == (long *)0x0 ||
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
  uStack_180 = 0x3d1b6e0;
  puStack_158 = &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_178 = uVar17;
  puStack_170 = puVar23;
  uStack_168 = uVar18;
  ppppuStack_160 = &ppppuStack_130;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar18 = auVar33._8_8_;
  uStack_1b0 = 0x3d1b6e0;
  puStack_188 = &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_1a8 = uVar17;
  puStack_1a0 = puVar23;
  uStack_198 = uVar25;
  ppppuStack_190 = &ppppuStack_160;
  if ((bRam0000000003eb513a & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb513a = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while( true ) {
    iVar19 = 0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar18);
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
  puVar3 = &uStack_1e0;
  uStack_1e0 = 0x3d1b6e0;
  puStack_1b8 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_1d8 = uVar17;
  puStack_1d0 = puVar23;
  uStack_1c8 = uVar18;
  ppppuStack_1c0 = &ppppuStack_190;
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
    pppppuVar27 = &ppppuStack_1c0;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_1d0;
    auVar1._0_8_ = uStack_1c8;
    if (iVar6 != 0) {
      uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      iVar19 = 0;
      /*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData$$.ctor*/ func_0x0154e75c(uVar9,lVar26);
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
        auVar34._8_8_ = puStack_1d0;
        auVar34._0_8_ = uStack_1c8;
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
        puVar4 = &uStack_1b0;
        uVar17 = uStack_1d8;
        uVar24 = uStack_1e0;
        pppppuVar27 = (undefined8 *****)ppppuStack_1c0;
        puVar28 = puStack_1b8;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_1b0;
    uVar9 = param_4;
    uVar17 = uStack_1d8;
    uVar24 = uStack_1e0;
    pppppuVar27 = (undefined8 *****)ppppuStack_1c0;
    puVar28 = puStack_1b8;
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
// RVA: 0x158cc6c | Atlas.Contexts.FrontEndContextMatchMakingState.ShowLobbyScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextMatchMakingState__ShowLobbyScreen(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  dword *pdVar21;
  long *extraout_x1;
  dword *pdVar22;
  long *plVar23;
  dword *pdVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  undefined8 unaff_x19;
  dword *pdVar31;
  undefined8 unaff_x20;
  dword *pdVar32;
  undefined8 uVar33;
  long unaff_x21;
  dword *pdVar34;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar37;
  undefined8 unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    pdVar32 = (dword *)0x3eb5000;
    if ((bRam0000000003eb5109 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d281f8);
      func_0x00f78a20(0x3d56be8);
      func_0x00f78a20(0x3d56c08);
      func_0x00f78a20(0x3d56be0);
      func_0x00f78a20(0x3d405f8);
      func_0x00f78a20(0x3d28208);
      bRam0000000003eb5109 = 1;
    }
    lVar28 = param_1;
    if (*(long *)(param_1 + 0xb8) != 0) {
      unaff_x24 = 0x3d56000;
      /*Atlas.Networking.MPErrorManager$$ResetErroredState*/ func_0x0148b834(*(long *)(param_1 + 0xb8),0);
      pdVar32 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.MultiplayerLobbyScreen.TransitionData_TypeInfo*/ uRam0000000003d28208);
      /*Atlas.UI.Screens.MultiplayerLobbyScreen.TransitionData$$.ctor*/ func_0x01560640(pdVar32,0);
      unaff_x21 = *(long *)(param_1 + 0x98);
      unaff_x22 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x22,param_1,uRam0000000003d56be0,0);
      unaff_x23 = 0x3d29bc0;
      if (unaff_x21 != 0) {
        unaff_x24 = 0x3d40000;
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(unaff_x21,0,unaff_x22,0);
        lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
        if ((lVar16 != 0) && (unaff_x23 = 0x3d29bc0, pdVar32 != (dword *)0x0)) {
          unaff_x24 = 0x3d56000;
          unaff_x25 = 0x3d56000;
          unaff_x22 = 0x3d1feb8;
          lVar28 = *(long *)(param_1 + 0xa8);
          *(long *)(pdVar32 + 4) = *(long *)(lVar16 + 0x10);
          *(long *)(pdVar32 + 6) = lVar28;
          lVar28 = func_0x00f78aec(/*Atlas.UI.Screens.MultiplayerLobbyScreen.ButtonPressed_TypeInfo*/ uRam0000000003d281f8);
          /*Atlas.UI.Screens.MultiplayerLobbyScreen.ButtonPressed$$.ctor*/ func_0x0156012c(lVar28,param_1,uRam0000000003d56be8,0);
          *(long *)(pdVar32 + 8) = lVar28;
          unaff_x21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
          /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x21,param_1,uRam0000000003d56c08,0);
          *(long *)(pdVar32 + 10) = unaff_x21;
          pdVar31 = *(dword **)(param_1 + 0x90);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar28 = 0;
          if (pdVar31 != (dword *)0x0) {
            pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38);
            pdVar25 = (dword *)0x0;
            uVar26 = 0;
            uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
            uVar33 = *(undefined8 *)((long)register0x00000008 + -0x50);
            uVar2 = *(undefined8 *)((long)register0x00000008 + -0x48);
            *(undefined8 *)((long)register0x00000008 + -0x40) = uVar20;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x30) =
                 *(undefined8 *)((long)register0x00000008 + -0x30);
            *(undefined8 *)((long)register0x00000008 + -0x28) =
                 *(undefined8 *)((long)register0x00000008 + -0x28);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            puVar36 = (undefined1 *)((long)register0x00000008 + -0x10);
            pdVar34 = (dword *)0x0;
            pdVar24 = pdVar32;
            if ((bRam0000000003eb486f & 1) == 0) {
              func_0x00f78a20(0x3d53980);
              func_0x00f78a20(0x3d2fb90);
              func_0x00f78a20(0x3d6d050);
              bRam0000000003eb486f = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
            lVar28 = *(long *)(pdVar31 + 4);
            if (lVar28 == 0) {
              auVar38 = func_0x00f78af4();
              pdVar22 = auVar38._8_8_;
              *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
              *(undefined **)((long)register0x00000008 + -0x58) =
                   &Atlas_UI_AtlasUIManager__ShowScreen;
              lVar28 = *(long *)(auVar38._0_8_ + 0x10);
              if (lVar28 == 0) {
                auVar38 = func_0x00f78af4();
                uVar26 = auVar38._8_8_;
                *(undefined1 **)((long)register0x00000008 + -0x70) =
                     (undefined1 *)((long)register0x00000008 + -0x60);
                *(undefined **)((long)register0x00000008 + -0x68) =
                     &Atlas_UI_AtlasUIManager__HideScreen;
                lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                if (lVar28 != 0) {
                  pdVar25 = (dword *)0x0;
                  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
                  *(dword **)((long)register0x00000008 + -0x88) = pdVar32;
                  *(dword **)((long)register0x00000008 + -0x80) = pdVar31;
                  *(dword **)((long)register0x00000008 + -0x78) = pdVar21;
                  *(undefined8 *)((long)register0x00000008 + -0x70) =
                       *(undefined8 *)((long)register0x00000008 + -0x70);
                  *(undefined8 *)((long)register0x00000008 + -0x68) =
                       *(undefined8 *)((long)register0x00000008 + -0x68);
                  if ((bRam0000000003ebc64b & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    func_0x00f78a20(0x3d3ddd0);
                    bRam0000000003ebc64b = 1;
                  }
                  lVar16 = *(long *)(lVar28 + 0x70);
                  if (lVar16 != 0) {
                    lVar19 = lVar16;
                    if (*(uint *)(lVar16 + 0x18) <= auVar38._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar19 = *(long *)(lVar28 + 0x70);
                    }
                    if (lVar19 != 0) {
                      lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
                      uVar33 = *(undefined8 *)(lVar16 + 0x28);
                      uVar20 = *(undefined8 *)(lVar16 + 0x20);
                      uVar3 = *(undefined4 *)(lVar16 + 0x42);
                      *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar3;
                      uVar6 = *(undefined2 *)(lVar16 + 0x46);
                      *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar6;
                      *(undefined8 *)((long)register0x00000008 + -200) = uVar33;
                      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar20;
                      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar33;
                      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar20;
                      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
                      *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
                      *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar3;
                      *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar6;
                      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar26,(undefined1 *)((long)register0x00000008 + -0xc0)
                                      ,uRam0000000003d3ddd0);
                      pdVar32 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar28,uVar26);
                      return pdVar32;
                    }
                  }
                  auVar38 = func_0x00f78af4();
                  pdVar22 = auVar38._8_8_;
                  puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
                  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
                  *(long *)((long)register0x00000008 + -0x108) = lVar16;
                  *(long *)((long)register0x00000008 + -0x100) = lVar28;
                  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar26;
                  *(undefined1 **)((long)register0x00000008 + -0xf0) =
                       (undefined1 *)((long)register0x00000008 + -0x70);
                  *(undefined **)((long)register0x00000008 + -0xe8) =
                       &Core_UI2_UIManager__GetCurrentScreenID;
                  puVar36 = (undefined1 *)((long)register0x00000008 + -0xf0);
                  if ((bRam0000000003ebc64c & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64c = 1;
                  }
                  lVar28 = *(long *)(auVar38._0_8_ + 0x70);
                  if (lVar28 != 0) {
                    if (*(uint *)(lVar28 + 0x18) <= auVar38._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar28 = *(long *)(*(long *)(lVar28 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 +
                                      0x28);
                    if (lVar28 == 0) {
                      pdVar32 = (dword *)0x0;
                    }
                    else {
                      pdVar32 = *(dword **)(lVar28 + 0x40);
                    }
                    return pdVar32;
                  }
                  puVar37 = &Core_UI2_UIScreen__ForceExit;
                  pdVar21 = (dword *)func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  pdVar32 = (dword *)0x3ebc000;
                  goto code_r0x02f882d8;
                }
                auVar38 = func_0x00f78af4();
                pdVar22 = auVar38._8_8_;
                *(undefined1 **)((long)register0x00000008 + -0x80) =
                     (undefined1 *)((long)register0x00000008 + -0x70);
                *(undefined **)((long)register0x00000008 + -0x78) =
                     &Atlas_UI_AtlasUIManager__ClearLayer;
                lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                auVar38._8_8_ = pdVar32;
                auVar38._0_8_ = lVar28;
                if (lVar28 != 0) {
                  pdVar25 = (dword *)0x0;
                  puVar7 = (undefined1 *)((long)register0x00000008 + -0x70);
                  puVar36 = *(undefined1 **)((long)register0x00000008 + -0x80);
                  puVar37 = *(undefined **)((long)register0x00000008 + -0x78);
                  pdVar32 = pdVar31;
                  goto code_r0x02f877a8;
                }
                auVar38 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0x90) =
                     (undefined1 *)((long)register0x00000008 + -0x80);
                *(undefined **)((long)register0x00000008 + -0x88) =
                     &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
                lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                auVar38._8_8_ = auVar38._8_8_;
                auVar38._0_8_ = lVar28;
                if (lVar28 != 0) {
                  puVar8 = (undefined1 *)((long)register0x00000008 + -0x80);
                  puVar36 = *(undefined1 **)((long)register0x00000008 + -0x90);
                  puVar37 = *(undefined **)((long)register0x00000008 + -0x88);
                  pdVar22 = pdVar25;
                  break;
                }
                auVar38 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0xa0) =
                     (undefined1 *)((long)register0x00000008 + -0x90);
                *(undefined **)((long)register0x00000008 + -0x98) =
                     &Atlas_UI_AtlasUIManager__IsLayerReady;
                lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                if (lVar28 == 0) {
                  auVar38 = func_0x00f78af4();
                  *(undefined1 **)((long)register0x00000008 + -0xb0) =
                       (undefined1 *)((long)register0x00000008 + -0xa0);
                  *(undefined **)((long)register0x00000008 + -0xa8) =
                       &Atlas_UI_AtlasUIManager__GetLayerState;
                  lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                  auVar39._8_8_ = auVar38._8_8_;
                  auVar39._0_8_ = lVar28;
                  if (lVar28 != 0) {
                    pdVar24 = (dword *)0x0;
                    puVar9 = (undefined1 *)((long)register0x00000008 + -0xa0);
                    puVar36 = *(undefined1 **)((long)register0x00000008 + -0xb0);
                    puVar37 = *(undefined **)((long)register0x00000008 + -0xa8);
                    goto code_r0x02f884dc;
                  }
                  auVar38 = func_0x00f78af4();
                  *(undefined1 **)((long)register0x00000008 + -0xc0) =
                       (undefined1 *)((long)register0x00000008 + -0xb0);
                  *(undefined **)((long)register0x00000008 + -0xb8) =
                       &Atlas_UI_AtlasUIManager__EnableInput;
                  lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                  auVar40._8_8_ = auVar38._8_8_;
                  auVar40._0_8_ = lVar28;
                  if (lVar28 == 0) {
                    auVar38 = func_0x00f78af4();
                    *(undefined1 **)((long)register0x00000008 + -0xd0) =
                         (undefined1 *)((long)register0x00000008 + -0xc0);
                    *(undefined **)((long)register0x00000008 + -200) =
                         &Atlas_UI_AtlasUIManager__SetScreenVisible;
                    lVar28 = *(long *)(auVar38._0_8_ + 0x10);
                    auVar41._8_8_ = auVar38._8_8_;
                    auVar41._0_8_ = lVar28;
                    if (lVar28 == 0) {
                      pdVar34 = (dword *)func_0x00f78af4();
                      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
                      *(dword **)((long)register0x00000008 + -0xf8) = pdVar32;
                      *(dword **)((long)register0x00000008 + -0xf0) = pdVar31;
                      *(dword **)((long)register0x00000008 + -0xe8) = pdVar21;
                      *(undefined1 **)((long)register0x00000008 + -0xe0) =
                           (undefined1 *)((long)register0x00000008 + -0xd0);
                      *(undefined **)((long)register0x00000008 + -0xd8) =
                           &Atlas_UI_AtlasUIManager___ctor;
                      if ((bRam0000000003eb4871 & 1) == 0) {
                        func_0x00f78a20(0x3d2fb80);
                        func_0x00f78a20(0x3d1c478);
                        bRam0000000003eb4871 = 1;
                      }
                      uVar20 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar20,uRam0000000003d2fb80);
                      *(undefined8 *)(pdVar34 + 0xc) = uVar20;
                      return pdVar34;
                    }
                    puVar11 = (undefined1 *)((long)register0x00000008 + -0xc0);
                    puVar36 = *(undefined1 **)((long)register0x00000008 + -0xd0);
                    puVar37 = *(undefined **)((long)register0x00000008 + -200);
                    goto code_r0x02f88674;
                  }
                  puVar10 = (undefined1 *)((long)register0x00000008 + -0xb0);
                  puVar36 = *(undefined1 **)((long)register0x00000008 + -0xc0);
                  puVar37 = *(undefined **)((long)register0x00000008 + -0xb8);
                  pdVar24 = pdVar25;
                  pdVar34 = pdVar32;
                }
                else {
                  pdVar24 = (dword *)0x0;
                  puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
                  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
                  *(dword **)((long)register0x00000008 + -0xb8) = pdVar32;
                  *(dword **)((long)register0x00000008 + -0xb0) = pdVar31;
                  *(dword **)((long)register0x00000008 + -0xa8) = pdVar21;
                  *(undefined8 *)((long)register0x00000008 + -0xa0) =
                       *(undefined8 *)((long)register0x00000008 + -0xa0);
                  *(undefined8 *)((long)register0x00000008 + -0x98) =
                       *(undefined8 *)((long)register0x00000008 + -0x98);
                  puVar36 = (undefined1 *)((long)register0x00000008 + -0xa0);
                  pdVar32 = (dword *)0x3ebc000;
                  if ((bRam0000000003ebc64f & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64f = 1;
                  }
                  uVar30 = auVar38._8_4_;
                  if (((int)uVar30 < 0) || (*(int *)(lVar28 + 0x50) <= (int)uVar30)) {
                    return (dword *)0x0;
                  }
                  lVar28 = *(long *)(lVar28 + 0x70);
                  if (lVar28 != 0) {
                    if (*(uint *)(lVar28 + 0x18) <= uVar30) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar16 = *(long *)(lVar28 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
                    lVar28 = *(long *)(lVar16 + 0x28);
                    cVar4 = *(char *)(lVar16 + 0x40);
                    iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar16 + 0x30),0);
                    if (iVar15 == 0 || cVar4 != '\0') {
                      return (dword *)0x0;
                    }
                    if ((lVar28 != 0) && (*(int *)(lVar28 + 0x4c) != 2)) {
                      return (dword *)0x0;
                    }
                    return (dword *)((long)&MACH_HEADER.magic + 1);
                  }
                  puVar37 = &Core_UI2_UIManager__GetLayerState;
                  auVar39 = func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  pdVar21 = auVar38._8_8_;
code_r0x02f884dc:
                  puVar10 = puVar9 + -0x30;
                  *(undefined8 *)(puVar9 + -0x30) = 0;
                  *(dword **)(puVar9 + -0x28) = pdVar32;
                  *(dword **)(puVar9 + -0x20) = pdVar31;
                  *(dword **)(puVar9 + -0x18) = pdVar21;
                  *(undefined1 **)(puVar9 + -0x10) = puVar36;
                  *(undefined **)(puVar9 + -8) = puVar37;
                  puVar36 = puVar9 + -0x10;
                  if ((bRam0000000003ebc650 & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc650 = 1;
                  }
                  lVar28 = *(long *)(auVar39._0_8_ + 0x70);
                  if (lVar28 != 0) {
                    if (*(uint *)(lVar28 + 0x18) <= auVar39._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar28 = *(long *)(*(long *)(lVar28 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 +
                                      0x28);
                    if (lVar28 == 0) {
                      pdVar32 = &MACH_HEADER.cputype;
                    }
                    else {
                      pdVar32 = (dword *)(ulong)*(uint *)(lVar28 + 0x4c);
                    }
                    return pdVar32;
                  }
                  puVar37 = &Core_UI2_UIManager__EnableInput;
                  auVar40 = func_0x00f78af4();
                  pdVar31 = (dword *)0x0;
                  pdVar21 = auVar39._8_8_;
                  pdVar34 = (dword *)0x3ebc000;
                }
                pdVar22 = auVar40._8_8_;
                pdVar32 = auVar40._0_8_;
                puVar11 = puVar10 + -0x40;
                *(undefined8 *)(puVar10 + -0x40) = uVar20;
                *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
                *(undefined8 *)(puVar10 + -0x30) = 0;
                *(dword **)(puVar10 + -0x28) = pdVar34;
                *(dword **)(puVar10 + -0x20) = pdVar31;
                *(dword **)(puVar10 + -0x18) = pdVar21;
                *(undefined1 **)(puVar10 + -0x10) = puVar36;
                *(undefined **)(puVar10 + -8) = puVar37;
                puVar36 = puVar10 + -0x10;
                pdVar34 = (dword *)0x3ebc000;
                pdVar25 = pdVar24;
                if ((bRam0000000003ebc651 & 1) == 0) {
                  func_0x00f78a20(0x3d2a5c0);
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc651 = 1;
                }
                if (*(long *)(pdVar32 + 0x1a) != 0) {
                  pdVar25 = (dword *)(ulong)((uint)pdVar24 ^ 1);
                  pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar32 + 0x1a),pdVar22,pdVar25,0);
                  lVar28 = *(long *)(pdVar32 + 0x1c);
                  pdVar34 = (dword *)0x0;
                  if (lVar28 != 0) {
                    uVar30 = auVar40._8_4_;
                    if (*(uint *)(lVar28 + 0x18) <= uVar30) {
                      pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    if ((*(long *)(*(long *)(lVar28 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0)
                       || (pdVar34 = *(dword **)(pdVar32 + 0xc), pdVar34 == (dword *)0x0)) {
                      return pdVar31;
                    }
                    lVar28 = *(long *)(pdVar32 + 0x1c);
                    pdVar32 = (dword *)0x0;
                    if (lVar28 != 0) {
                      if (*(uint *)(lVar28 + 0x18) <= uVar30) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      plVar23 = *(long **)(*(long *)(lVar28 + 0x10) + (long)(int)uVar30 * 0x28 +
                                          0x28);
                      *(undefined8 *)(puVar10 + -0x60) = unaff_x28;
                      *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
                      *(undefined8 *)(puVar10 + -0x50) = uVar33;
                      *(undefined8 *)(puVar10 + -0x48) = uVar2;
                      *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
                      *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
                      *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
                      *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
                      *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
                      *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
                      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
                      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
                      *(dword **)(puVar10 + -0x68) = pdVar34;
                      lVar28 = *(long *)(pdVar34 + 0x1a);
                      if (lVar28 == 0) {
                        puVar36 = puVar10 + -0x68;
                        lVar16 = 1;
                      }
                      else {
                        lVar16 = *(long *)(lVar28 + 0x18);
                        if (lVar16 == 0) {
                          return pdVar34;
                        }
                        puVar36 = (undefined1 *)(lVar28 + 0x20);
                      }
                      lVar28 = 0;
                      goto code_r0x01e71a74;
                    }
                  }
                }
                puVar37 = &Core_UI2_UIManager__SetScreenVisible;
                auVar41 = func_0x00f78af4();
                pdVar21 = pdVar24;
                pdVar31 = pdVar22;
code_r0x02f88674:
                pdVar24 = auVar41._0_8_;
                *(dword **)(puVar11 + -0x30) = pdVar34;
                *(dword **)(puVar11 + -0x28) = pdVar32;
                *(dword **)(puVar11 + -0x20) = pdVar31;
                *(dword **)(puVar11 + -0x18) = pdVar21;
                *(undefined1 **)(puVar11 + -0x10) = puVar36;
                *(undefined **)(puVar11 + -8) = puVar37;
                pdVar32 = pdVar24;
                if ((bRam0000000003ebc652 & 1) == 0) {
                  pdVar32 = (dword *)func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc652 = 1;
                }
                lVar28 = *(long *)(pdVar24 + 0x1c);
                if (lVar28 != 0) {
                  uVar30 = auVar41._8_4_;
                  if (*(uint *)(lVar28 + 0x18) <= uVar30) {
                    pdVar32 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(long *)(*(long *)(lVar28 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
                    return pdVar32;
                  }
                  lVar28 = *(long *)(pdVar24 + 0x1c);
                  if (lVar28 != 0) {
                    if (*(uint *)(lVar28 + 0x18) <= uVar30) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar28 = *(long *)(*(long *)(lVar28 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
                    if ((lVar28 != 0) &&
                       (plVar23 = *(long **)(lVar28 + 0x28), plVar23 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pdVar32 = (dword *)(**(code **)(*plVar23 + 0x178))
                                                   (plVar23,pdVar25,
                                                    *(undefined8 *)(*plVar23 + 0x180));
                      return pdVar32;
                    }
                  }
                }
                auVar38 = func_0x00f78af4();
                uVar20 = auVar38._0_8_;
                *(long *)(puVar11 + -0x50) = auVar41._8_8_;
                *(dword **)(puVar11 + -0x48) = pdVar25;
                *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
                *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
                *(undefined8 *)(puVar11 + -0x68) = 0;
                *(undefined8 *)(puVar11 + -0x70) = 0;
                *(undefined8 *)(puVar11 + -0x58) = 0;
                *(undefined8 *)(puVar11 + -0x60) = 0;
                pdVar32 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar20,auVar38._8_8_,puVar11 + -0x70);
                if ((int)pdVar32 != 0) {
                  /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar20,*(undefined8 *)(puVar11 + -0x60),
                                  *(undefined8 *)(puVar11 + -0x58));
                  *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
                  *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
                  *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
                  *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
                  pdVar32 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar20,puVar11 + -0x90,1);
                }
                return pdVar32;
              }
              puVar36 = *(undefined1 **)((long)register0x00000008 + -0x60);
              puVar37 = *(undefined **)((long)register0x00000008 + -0x58);
            }
            else {
              pdVar25 = (dword *)0x0;
              uVar26 = 0;
              puVar37 = &UNK_01470820;
              pdVar22 = pdVar21;
              pdVar24 = pdVar32;
            }
            *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
            *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
            *(dword **)((long)register0x00000008 + -0x78) = pdVar32;
            *(dword **)((long)register0x00000008 + -0x70) = pdVar31;
            *(dword **)((long)register0x00000008 + -0x68) = pdVar21;
            *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
            *(undefined **)((long)register0x00000008 + -0x58) = puVar37;
            if ((bRam0000000003ebc64a & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64a = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x130) = uVar33;
            *(undefined8 *)((long)register0x00000008 + -0x128) = uVar2;
            *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
            *(dword **)((long)register0x00000008 + -0x118) = pdVar22;
            *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
            *(undefined8 *)((long)register0x00000008 + -0x108) = uVar26;
            *(long *)((long)register0x00000008 + -0x100) = lVar28;
            *(dword **)((long)register0x00000008 + -0xf8) = pdVar25;
            *(undefined1 **)((long)register0x00000008 + -0xf0) =
                 (undefined1 *)((long)register0x00000008 + -0x60);
            *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
            if ((bRam0000000003ebc64e & 1) == 0) {
              func_0x00f78a20(0x3d3ddf0);
              func_0x00f78a20(0x3d3ddf8);
              bRam0000000003ebc64e = 1;
            }
            lVar16 = *(long *)(lVar28 + 0x78);
            if (lVar16 == 0) goto code_r0x02f8812c;
            iVar15 = *(int *)(lVar16 + 0x18);
            if (iVar15 < 1) {
              return (dword *)0x0;
            }
            iVar14 = 1;
            pdVar32 = (dword *)((long)&MACH_HEADER.magic + 1);
            goto code_r0x02f880d0;
          }
        }
      }
    }
    param_1 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar32;
    *(long *)((long)register0x00000008 + -0x68) = lVar28;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Contexts_FrontEndContextMatchMakingState__OnEnter;
    if ((bRam0000000003eb510a & 1) == 0) {
      func_0x00f78a20(0x3d2a168);
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1b4b8);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bf0);
      func_0x00f78a20(0x3d56bf8);
      func_0x00f78a20(0x3d56c00);
      func_0x00f78a20(0x3d405f0);
      func_0x00f78a20(0x3d405f8);
      bRam0000000003eb510a = 1;
    }
    plVar23 = (long *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
    if (plVar23 == (long *)0x0) {
code_r0x0158d190:
      func_0x00f78af4();
code_r0x0158d194:
      pdVar32 = (dword *)func_0x00f78e5c();
      return pdVar32;
    }
    (**(code **)(*plVar23 + 0x178))(plVar23,*(undefined8 *)(*plVar23 + 0x180));
    lVar28 = *(long *)(param_1 + 0xb0);
    if (lVar28 == 0) goto code_r0x0158d190;
    uVar33 = *(undefined8 *)(lVar28 + 0x10);
    uVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar20,param_1,uRam0000000003d56bf8,0);
    plVar23 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar33,uVar20,0);
    if ((plVar23 != (long *)0x0) && (*plVar23 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x0158d194;
    *(long **)(lVar28 + 0x10) = plVar23;
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar28 = *(long *)(*(long *)(param_1 + 0x80) + 0x30), lVar28 == 0)) goto code_r0x0158d190;
    uVar33 = *(undefined8 *)(lVar28 + 0x68);
    uVar20 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar20,param_1,uRam0000000003d56bf0,uRam0000000003d2a168);
    plVar23 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar33,uVar20,0);
    if ((plVar23 != (long *)0x0) && (*plVar23 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0158d194;
    *(long **)(lVar28 + 0x68) = plVar23;
    lVar28 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
    if (lVar28 == 0) goto code_r0x0158d190;
    *(undefined1 *)(lVar28 + 0x11) = 1;
    if (*(long *)(param_1 + 0xb0) == 0) goto code_r0x0158d190;
    uVar18 = /*Atlas.Networking.MatchMakingManager$$IsMatchMakingOrInGroup*/ func_0x0148efec(*(long *)(param_1 + 0xb0),0);
    if ((uVar18 & 1) == 0) {
      lVar16 = *(long *)(param_1 + 0xb0);
      lVar28 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if ((lVar28 == 0) || (lVar16 == 0)) goto code_r0x0158d190;
      /*Atlas.Networking.MatchMakingManager$$StartMatchMaking*/ func_0x0148ef90(lVar16,*(undefined8 *)(lVar28 + 0x10),0);
    }
    if (*(long *)(param_1 + 0xb0) == 0) goto code_r0x0158d190;
    iVar15 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb0),0);
    if (iVar15 != 0) {
      lVar16 = *(long *)(param_1 + 0xb0);
      lVar28 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if ((lVar28 == 0) || (lVar16 == 0)) goto code_r0x0158d190;
      *(undefined8 *)(lVar16 + 0xb0) = *(undefined8 *)(lVar28 + 0x10);
      if (*(long *)(param_1 + 0xb0) == 0) goto code_r0x0158d190;
      /*Atlas.Networking.MatchMakingManager$$SetVisuals*/ func_0x01490534(*(long *)(param_1 + 0xb0),0);
      if (*(long *)(param_1 + 0xb0) == 0) goto code_r0x0158d190;
      /*Atlas.Networking.MatchMakingManager$$AddDelegates*/ func_0x0148f85c(*(long *)(param_1 + 0xb0),0);
    }
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (plVar23 = *(long **)(*(long *)(param_1 + 0x80) + 0x30), plVar23 == (long *)0x0))
    goto code_r0x0158d190;
    uVar18 = (**(code **)(*plVar23 + 0x348))(plVar23,*(undefined8 *)(*plVar23 + 0x350));
    lVar28 = *(long *)(param_1 + 0x88);
    if ((uVar18 & 1) == 0) {
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x28) == 0)) goto code_r0x0158d190;
      if (*(char *)(*(long *)(lVar28 + 0x28) + 0x99) != '\0') goto code_r0x0158d0e8;
    }
    else {
      if (lVar28 == 0) goto code_r0x0158d190;
code_r0x0158d0e8:
      if ((*(long *)(lVar28 + 0x20) == 0) ||
         (lVar28 = *(long *)(*(long *)(lVar28 + 0x20) + 0x10), lVar28 == 0)) goto code_r0x0158d190;
      uVar33 = *(undefined8 *)(lVar28 + 0x40);
      uVar20 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar20,param_1,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar23 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar33,uVar20,0);
      if ((plVar23 != (long *)0x0) && (*plVar23 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto code_r0x0158d194;
      *(long **)(lVar28 + 0x40) = plVar23;
      lVar28 = *(long *)(param_1 + 0x88);
      if (lVar28 == 0) goto code_r0x0158d190;
    }
    if (*(long *)(lVar28 + 0x28) == 0) goto code_r0x0158d190;
    /*Atlas.Networking.NetworkLobby$$SetLocalPlayerInLobby*/ func_0x014aa3cc(*(long *)(lVar28 + 0x28),1,0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x98);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
code_r0x02f883b0:
  puVar7 = puVar8 + -0x30;
  *(dword **)(puVar8 + -0x30) = pdVar34;
  *(dword **)(puVar8 + -0x28) = pdVar32;
  *(dword **)(puVar8 + -0x20) = pdVar31;
  *(dword **)(puVar8 + -0x18) = pdVar21;
  *(undefined1 **)(puVar8 + -0x10) = puVar36;
  *(undefined **)(puVar8 + -8) = puVar37;
  puVar36 = puVar8 + -0x10;
  puVar37 = &UNK_02f883d8;
  pdVar25 = pdVar22;
  pdVar21 = pdVar24;
  pdVar32 = pdVar22;
  pdVar34 = auVar38._0_8_;
code_r0x02f877a8:
  pdVar31 = auVar38._0_8_;
  puVar12 = puVar7 + -0x60;
  *(dword **)(puVar7 + -0x30) = pdVar34;
  *(long *)(puVar7 + -0x28) = auVar38._8_8_;
  *(dword **)(puVar7 + -0x20) = pdVar32;
  *(dword **)(puVar7 + -0x18) = pdVar21;
  *(undefined1 **)(puVar7 + -0x10) = puVar36;
  *(undefined **)(puVar7 + -8) = puVar37;
  puVar36 = puVar7 + -0x10;
  pdVar32 = pdVar31;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar32 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar30 = (uint)pdVar22;
  if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
    return pdVar32;
  }
  lVar28 = *(long *)(pdVar31 + 0x1c);
  if (lVar28 == 0) {
code_r0x02f878a4:
    lVar28 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
    *(dword **)(puVar7 + -0x90) = pdVar34;
    *(undefined8 *)(puVar7 + -0x88) = 0;
    *(dword **)(puVar7 + -0x80) = pdVar31;
    *(dword **)(puVar7 + -0x78) = pdVar22;
    *(undefined1 **)(puVar7 + -0x70) = puVar36;
    *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar20,0);
    if (0 < *(int *)(lVar28 + 0x50)) {
      iVar15 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar28,iVar15);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar28,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar28 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar28);
    *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
    *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
    *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
    *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar32 = (dword *)(*pcRam0000000003ec05a0)(uVar20);
    return pdVar32;
  }
  if (*(uint *)(lVar28 + 0x18) <= uVar30) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar28 = *(long *)(lVar28 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
  pdVar34 = *(dword **)(lVar28 + 0x20);
  pdVar21 = *(dword **)(lVar28 + 0x28);
  *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar28 + 0x42);
  *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar28 + 0x46);
  if (pdVar21 == (dword *)0x0) {
    lVar28 = *(long *)(pdVar31 + 0x1c);
    if (lVar28 != 0) {
      *(dword **)(puVar7 + -0x58) = pdVar34;
      *(undefined8 *)(puVar7 + -0x50) = 0;
      *(undefined8 *)(puVar7 + -0x48) = 0;
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined2 *)(puVar7 + -0x38) = 0;
      *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
      *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
      pdVar32 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar28,pdVar22,puVar7 + -0x58,uRam0000000003d3ddd0);
      return pdVar32;
    }
    goto code_r0x02f878a4;
  }
  puVar37 = &UNK_02f87848;
  pdVar32 = pdVar21;
code_r0x02f882d8:
  *(dword **)(puVar12 + -0x20) = pdVar31;
  *(dword **)(puVar12 + -0x18) = pdVar22;
  *(undefined1 **)(puVar12 + -0x10) = puVar36;
  *(undefined **)(puVar12 + -8) = puVar37;
  (**(code **)(*(long *)pdVar21 + 0x218))(pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x220));
  if (*(long *)(pdVar21 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar21 + 10),0);
    pdVar21[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar32 = (dword *)(**(code **)(*(long *)pdVar21 + 0x228))
                                 (pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x230));
    return pdVar32;
  }
  func_0x00f78af4();
  puVar8 = puVar12 + -0x40;
  *(dword **)(puVar12 + -0x40) = pdVar31;
  *(dword **)(puVar12 + -0x38) = pdVar21;
  *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar36 = puVar12 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar28 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar20 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar20,lVar28);
    pdVar32 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar32;
  }
  puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar38 = func_0x00f78af4();
  pdVar22 = pdVar25;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar19 = *(long *)(puVar36 + lVar28 * 8);
  pcVar35 = *(code **)(lVar19 + 0x10);
  plVar1 = *(long **)(lVar19 + 0x20);
  lVar19 = *(long *)(lVar19 + 0x28);
  if (*(short *)(lVar19 + 0x48) == -1) {
    func_0x00f78ad8(lVar19);
  }
  iVar15 = func_0x00f78a4c(lVar19);
  bVar13 = *(char *)(lVar19 + 0x4a) == '\x03';
  if (iVar15 == 0) {
    if (bVar13) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar32 = (dword *)(*pcVar35)(plVar23,pdVar22,pdVar24,lVar19);
      }
      else {
        if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71aac;
        iVar15 = func_0x00f78a44(lVar19);
        iVar14 = func_0x00f78ec0(lVar19);
        if (iVar15 == 0) {
          uVar5 = *(ushort *)(lVar19 + 0x48);
          if (iVar14 == 0) {
            lVar19 = *plVar1 + (ulong)uVar5 * 0x10;
            pdVar32 = (dword *)(**(code **)(lVar19 + 0x138))
                                         (plVar1,plVar23,pdVar22,pdVar24,
                                          *(undefined8 *)(lVar19 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar27 = *plVar1;
          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
          if (uVar18 != 0) {
            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar19) {
                puVar17 = (undefined8 *)
                          (lVar27 + (long)(int)(*piVar29 + (uint)uVar5) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar29 = piVar29 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar5);
code_r0x01e71d74:
          pcVar35 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar14 == 0) {
            uVar20 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar27 = *plVar1;
            uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar18 != 0) {
              piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar27 = lVar27 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar29 = piVar29 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar20 = *(undefined8 *)(lVar27 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
          pcVar35 = (code *)*puVar17;
        }
        pdVar32 = (dword *)(*pcVar35)(plVar1,plVar23,pdVar22,pdVar24,puVar17);
      }
    }
    else {
      if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71bbc;
      iVar15 = func_0x00f78a44(lVar19);
      iVar14 = func_0x00f78ec0(lVar19);
      if (iVar15 == 0) {
        uVar5 = *(ushort *)(lVar19 + 0x48);
        if (iVar14 == 0) {
          lVar19 = *plVar23 + (ulong)uVar5 * 0x10;
          pdVar32 = (dword *)(**(code **)(lVar19 + 0x138))
                                       (plVar23,pdVar22,pdVar24,*(undefined8 *)(lVar19 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar19 = func_0x00f78a48(lVar19);
        lVar27 = *plVar23;
        uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
        if (uVar18 != 0) {
          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar19) {
              puVar17 = (undefined8 *)(lVar27 + (long)(int)(*piVar29 + (uint)uVar5) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar29 = piVar29 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar23,lVar19,(ulong)uVar5);
code_r0x01e71d00:
        pcVar35 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        if (iVar14 == 0) {
          uVar20 = *(undefined8 *)(*plVar23 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar27 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
          if (uVar18 != 0) {
            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)(lVar19 + 0x18)) {
                lVar27 = lVar27 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar29 = piVar29 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71cd8:
          uVar20 = *(undefined8 *)(lVar27 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
        pcVar35 = (code *)*puVar17;
      }
      pdVar32 = (dword *)(*pcVar35)(plVar23,pdVar22,pdVar24,puVar17);
    }
  }
  else {
    if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar32 = (dword *)(*pcVar35)(plVar1,plVar23,pdVar22,pdVar24,lVar19);
  }
code_r0x01e71bd0:
  lVar28 = lVar28 + 1;
  if (lVar28 == lVar16) {
    return pdVar32;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar16,pdVar22,5,0);
    if ((uVar18 & 1) != 0) {
      return pdVar32;
    }
    pdVar32 = (dword *)(ulong)(iVar14 < iVar15);
    if (iVar15 == iVar14) {
      return pdVar32;
    }
    lVar16 = *(long *)(lVar28 + 0x78);
    iVar14 = iVar14 + 1;
    if (lVar16 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar16 + 0x18) <= iVar14 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
    if (lVar16 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x158ce50 | Atlas.Contexts.FrontEndContextMatchMakingState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextMatchMakingState__OnEnter(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  dword *pdVar19;
  undefined8 *puVar20;
  long lVar21;
  dword *pdVar22;
  long *extraout_x1;
  dword *pdVar23;
  dword *pdVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  long unaff_x19;
  dword *unaff_x20;
  undefined8 uVar30;
  long lVar31;
  dword *pdVar32;
  long unaff_x21;
  dword *pdVar33;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar34;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar37;
  code *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb510a & 1) == 0) {
      func_0x00f78a20(0x3d2a168);
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1b4b8);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bf0);
      func_0x00f78a20(0x3d56bf8);
      func_0x00f78a20(0x3d56c00);
      func_0x00f78a20(0x3d405f0);
      func_0x00f78a20(0x3d405f8);
      bRam0000000003eb510a = 1;
    }
    plVar16 = (long *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
    if (plVar16 == (long *)0x0) {
LAB_0158d190:
      func_0x00f78af4();
LAB_0158d194:
      pdVar19 = (dword *)func_0x00f78e5c();
      return pdVar19;
    }
    (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    lVar34 = *(long *)(param_1 + 0xb0);
    if (lVar34 == 0) goto LAB_0158d190;
    uVar30 = *(undefined8 *)(lVar34 + 0x10);
    uVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar17,param_1,uRam0000000003d56bf8,0);
    plVar16 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar30,uVar17,0);
    if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto LAB_0158d194;
    *(long **)(lVar34 + 0x10) = plVar16;
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar34 = *(long *)(*(long *)(param_1 + 0x80) + 0x30), lVar34 == 0)) goto LAB_0158d190;
    uVar30 = *(undefined8 *)(lVar34 + 0x68);
    uVar17 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar17,param_1,uRam0000000003d56bf0,uRam0000000003d2a168);
    plVar16 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar30,uVar17,0);
    if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto LAB_0158d194;
    *(long **)(lVar34 + 0x68) = plVar16;
    lVar34 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
    if (lVar34 == 0) goto LAB_0158d190;
    *(undefined1 *)(lVar34 + 0x11) = 1;
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0158d190;
    uVar18 = /*Atlas.Networking.MatchMakingManager$$IsMatchMakingOrInGroup*/ func_0x0148efec(*(long *)(param_1 + 0xb0),0);
    if ((uVar18 & 1) == 0) {
      lVar31 = *(long *)(param_1 + 0xb0);
      lVar34 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if ((lVar34 == 0) || (lVar31 == 0)) goto LAB_0158d190;
      /*Atlas.Networking.MatchMakingManager$$StartMatchMaking*/ func_0x0148ef90(lVar31,*(undefined8 *)(lVar34 + 0x10),0);
    }
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0158d190;
    iVar14 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb0),0);
    if (iVar14 != 0) {
      lVar31 = *(long *)(param_1 + 0xb0);
      lVar34 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if ((lVar34 != 0) && (lVar31 != 0)) {
        *(undefined8 *)(lVar31 + 0xb0) = *(undefined8 *)(lVar34 + 0x10);
        if (*(long *)(param_1 + 0xb0) != 0) {
          /*Atlas.Networking.MatchMakingManager$$SetVisuals*/ func_0x01490534(*(long *)(param_1 + 0xb0),0);
          if (*(long *)(param_1 + 0xb0) != 0) {
            /*Atlas.Networking.MatchMakingManager$$AddDelegates*/ func_0x0148f85c(*(long *)(param_1 + 0xb0),0);
            goto LAB_0158d0a4;
          }
        }
      }
      goto LAB_0158d190;
    }
LAB_0158d0a4:
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (plVar16 = *(long **)(*(long *)(param_1 + 0x80) + 0x30), plVar16 == (long *)0x0))
    goto LAB_0158d190;
    uVar18 = (**(code **)(*plVar16 + 0x348))(plVar16,*(undefined8 *)(*plVar16 + 0x350));
    lVar34 = *(long *)(param_1 + 0x88);
    if ((uVar18 & 1) != 0) {
      if (lVar34 != 0) {
LAB_0158d0e8:
        if ((*(long *)(lVar34 + 0x20) != 0) &&
           (lVar34 = *(long *)(*(long *)(lVar34 + 0x20) + 0x10), lVar34 != 0)) {
          uVar30 = *(undefined8 *)(lVar34 + 0x40);
          uVar17 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
          /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar17,param_1,uRam0000000003d56c00,uRam0000000003d2a238);
          plVar16 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar30,uVar17,0);
          if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto LAB_0158d194;
          *(long **)(lVar34 + 0x40) = plVar16;
          lVar34 = *(long *)(param_1 + 0x88);
          if (lVar34 != 0) goto code_r0x0158d160;
        }
      }
      goto LAB_0158d190;
    }
    if ((lVar34 == 0) || (*(long *)(lVar34 + 0x28) == 0)) goto LAB_0158d190;
    if (*(char *)(*(long *)(lVar34 + 0x28) + 0x99) != '\0') goto LAB_0158d0e8;
code_r0x0158d160:
    if (*(long *)(lVar34 + 0x28) == 0) goto LAB_0158d190;
    /*Atlas.Networking.NetworkLobby$$SetLocalPlayerInLobby*/ func_0x014aa3cc(*(long *)(lVar34 + 0x28),1,0);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = (dword *)0x3eb5000;
    if ((bRam0000000003eb5109 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d281f8);
      func_0x00f78a20(0x3d56be8);
      func_0x00f78a20(0x3d56c08);
      func_0x00f78a20(0x3d56be0);
      func_0x00f78a20(0x3d405f8);
      func_0x00f78a20(0x3d28208);
      bRam0000000003eb5109 = 1;
    }
    unaff_x19 = param_1;
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar17 = 0x3d29bc0;
      unaff_x24 = 0x3d56000;
      /*Atlas.Networking.MPErrorManager$$ResetErroredState*/ func_0x0148b834(*(long *)(param_1 + 0xb8),0);
      unaff_x20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.MultiplayerLobbyScreen.TransitionData_TypeInfo*/ uRam0000000003d28208);
      /*Atlas.UI.Screens.MultiplayerLobbyScreen.TransitionData$$.ctor*/ func_0x01560640(unaff_x20,0);
      unaff_x21 = *(long *)(param_1 + 0x98);
      unaff_x22 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x22,param_1,uRam0000000003d56be0,0);
      unaff_x23 = 0x3d29bc0;
      if (unaff_x21 != 0) {
        unaff_x24 = 0x3d40000;
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(unaff_x21,0,unaff_x22,0);
        lVar34 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
        unaff_x23 = uVar17;
        if ((lVar34 != 0) && (unaff_x20 != (dword *)0x0)) {
          unaff_x24 = 0x3d56000;
          unaff_x25 = 0x3d56000;
          unaff_x22 = 0x3d1feb8;
          lVar31 = *(long *)(param_1 + 0xa8);
          *(long *)(unaff_x20 + 4) = *(long *)(lVar34 + 0x10);
          *(long *)(unaff_x20 + 6) = lVar31;
          lVar34 = func_0x00f78aec(/*Atlas.UI.Screens.MultiplayerLobbyScreen.ButtonPressed_TypeInfo*/ uRam0000000003d281f8);
          /*Atlas.UI.Screens.MultiplayerLobbyScreen.ButtonPressed$$.ctor*/ func_0x0156012c(lVar34,param_1,uRam0000000003d56be8,0);
          *(long *)(unaff_x20 + 8) = lVar34;
          unaff_x21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
          /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x21,param_1,uRam0000000003d56c08,0);
          *(long *)(unaff_x20 + 10) = unaff_x21;
          pdVar19 = *(dword **)(param_1 + 0x90);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x19 = 0;
          if (pdVar19 != (dword *)0x0) break;
        }
      }
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextMatchMakingState__OnEnter;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
  pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x38);
  pdVar25 = (dword *)0x0;
  uVar26 = 0;
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar36 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar33 = (dword *)0x0;
  pdVar24 = unaff_x20;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar34 = *(long *)(pdVar19 + 4);
  if (lVar34 != 0) {
    pdVar25 = (dword *)0x0;
    uVar26 = 0;
    puVar37 = &UNK_01470820;
    pdVar23 = pdVar22;
    pdVar24 = unaff_x20;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar19;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar22;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = uVar30;
    *(undefined8 *)((long)register0x00000008 + -0x128) = uVar2;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar23;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar26;
    *(long *)((long)register0x00000008 + -0x100) = lVar34;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar25;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar31 = *(long *)(lVar34 + 0x78);
    if (lVar31 != 0) {
      iVar14 = *(int *)(lVar31 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar15 = 1;
      pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar31 + 0x18) <= iVar15 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
        if (lVar31 == 0) break;
        uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar31,pdVar23,5,0);
        if ((uVar18 & 1) != 0) {
          return pdVar19;
        }
        pdVar19 = (dword *)(ulong)(iVar15 < iVar14);
        if (iVar14 == iVar15) {
          return pdVar19;
        }
        lVar31 = *(long *)(lVar34 + 0x78);
        iVar15 = iVar15 + 1;
      } while (lVar31 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar38 = func_0x00f78af4();
  pdVar23 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar34 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar34 != 0) {
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar38 = func_0x00f78af4();
  uVar26 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar34 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar34 != 0) {
    pdVar25 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar19;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar22;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar31 = *(long *)(lVar34 + 0x70);
    if (lVar31 != 0) {
      lVar21 = lVar31;
      if (*(uint *)(lVar31 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar21 = *(long *)(lVar34 + 0x70);
      }
      if (lVar21 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10) + (long)(int)auVar38._8_4_ * 0x28;
        uVar30 = *(undefined8 *)(lVar31 + 0x28);
        uVar17 = *(undefined8 *)(lVar31 + 0x20);
        uVar3 = *(undefined4 *)(lVar31 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar3;
        uVar6 = *(undefined2 *)(lVar31 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar3;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar6;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,uVar26,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,uVar26);
        return pdVar19;
      }
    }
    auVar38 = func_0x00f78af4();
    pdVar23 = auVar38._8_8_;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar31;
    *(long *)((long)register0x00000008 + -0x100) = lVar34;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar26;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar36 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar34 = *(long *)(auVar38._0_8_ + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= auVar38._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar38._8_4_ * 0x28 + 0x28);
      if (lVar34 == 0) {
        pdVar19 = (dword *)0x0;
      }
      else {
        pdVar19 = *(dword **)(lVar34 + 0x40);
      }
      return pdVar19;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar22 = (dword *)func_0x00f78af4();
    pdVar19 = (dword *)0x0;
    unaff_x20 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar38 = func_0x00f78af4();
  pdVar23 = auVar38._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar34 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = unaff_x20;
  auVar38._0_8_ = lVar34;
  if (lVar34 != 0) {
    pdVar25 = (dword *)0x0;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar32 = pdVar19;
    goto code_r0x02f877a8;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar34 = *(long *)(auVar38._0_8_ + 0x10);
  auVar38._8_8_ = auVar38._8_8_;
  auVar38._0_8_ = lVar34;
  if (lVar34 != 0) {
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar23 = pdVar25;
    while( true ) {
      puVar7 = puVar8 + -0x30;
      *(dword **)(puVar8 + -0x30) = pdVar33;
      *(dword **)(puVar8 + -0x28) = unaff_x20;
      *(dword **)(puVar8 + -0x20) = pdVar19;
      *(dword **)(puVar8 + -0x18) = pdVar22;
      *(undefined1 **)(puVar8 + -0x10) = puVar36;
      *(undefined **)(puVar8 + -8) = puVar37;
      puVar36 = puVar8 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar25 = pdVar23;
      pdVar22 = pdVar24;
      pdVar32 = pdVar23;
      pdVar33 = auVar38._0_8_;
code_r0x02f877a8:
      pdVar19 = auVar38._0_8_;
      puVar12 = puVar7 + -0x60;
      *(dword **)(puVar7 + -0x30) = pdVar33;
      *(long *)(puVar7 + -0x28) = auVar38._8_8_;
      *(dword **)(puVar7 + -0x20) = pdVar32;
      *(dword **)(puVar7 + -0x18) = pdVar22;
      *(undefined1 **)(puVar7 + -0x10) = puVar36;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar36 = puVar7 + -0x10;
      pdVar22 = pdVar19;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar22 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar29 = (uint)pdVar23;
      if (((int)uVar29 < 0) || ((int)*(long *)(pdVar19 + 0x14) <= (int)uVar29)) {
        return pdVar22;
      }
      lVar34 = *(long *)(pdVar19 + 0x1c);
      if (lVar34 == 0) break;
      if (*(uint *)(lVar34 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(lVar34 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
      pdVar33 = *(dword **)(lVar34 + 0x20);
      pdVar22 = *(dword **)(lVar34 + 0x28);
      *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar34 + 0x42);
      *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar34 + 0x46);
      if (pdVar22 == (dword *)0x0) {
        lVar34 = *(long *)(pdVar19 + 0x1c);
        if (lVar34 != 0) {
          *(dword **)(puVar7 + -0x58) = pdVar33;
          *(undefined8 *)(puVar7 + -0x50) = 0;
          *(undefined8 *)(puVar7 + -0x48) = 0;
          *(undefined8 *)(puVar7 + -0x40) = 0;
          *(undefined2 *)(puVar7 + -0x38) = 0;
          *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
          *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
          pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar34,pdVar23,puVar7 + -0x58,uRam0000000003d3ddd0);
          return pdVar19;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      unaff_x20 = pdVar22;
code_r0x02f882d8:
      *(dword **)(puVar12 + -0x20) = pdVar19;
      *(dword **)(puVar12 + -0x18) = pdVar23;
      *(undefined1 **)(puVar12 + -0x10) = puVar36;
      *(undefined **)(puVar12 + -8) = puVar37;
      (**(code **)(*(long *)pdVar22 + 0x218))(pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x220));
      if (*(long *)(pdVar22 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar22 + 10),0);
        pdVar22[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*(long *)pdVar22 + 0x228))
                                     (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x230));
        return pdVar19;
      }
      func_0x00f78af4();
      puVar8 = puVar12 + -0x40;
      *(dword **)(puVar12 + -0x40) = pdVar19;
      *(dword **)(puVar12 + -0x38) = pdVar22;
      *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
      *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar36 = puVar12 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar34 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar17 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar17,lVar34);
        pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar19;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar38 = func_0x00f78af4();
      pdVar23 = pdVar25;
    }
    lVar34 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
    *(dword **)(puVar7 + -0x90) = pdVar33;
    *(undefined8 *)(puVar7 + -0x88) = 0;
    *(dword **)(puVar7 + -0x80) = pdVar19;
    *(dword **)(puVar7 + -0x78) = pdVar23;
    *(undefined1 **)(puVar7 + -0x70) = puVar36;
    *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar17,0);
    if (0 < *(int *)(lVar34 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar34,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar34 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar34);
    *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
    *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
    *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
    *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar17);
    return pdVar19;
  }
  auVar38 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar34 = *(long *)(auVar38._0_8_ + 0x10);
  if (lVar34 == 0) {
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar34 = *(long *)(auVar38._0_8_ + 0x10);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._0_8_ = lVar34;
    if (lVar34 != 0) {
      pdVar24 = (dword *)0x0;
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar36 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar37 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar38 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar34 = *(long *)(auVar38._0_8_ + 0x10);
    auVar40._8_8_ = auVar38._8_8_;
    auVar40._0_8_ = lVar34;
    if (lVar34 == 0) {
      auVar38 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar34 = *(long *)(auVar38._0_8_ + 0x10);
      auVar41._8_8_ = auVar38._8_8_;
      auVar41._0_8_ = lVar34;
      if (lVar34 == 0) {
        pdVar33 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = unaff_x20;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar19;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar22;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar17 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar17,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar33 + 0xc) = uVar17;
        return pdVar33;
      }
      puVar11 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar36 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar37 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar10 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar37 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar24 = pdVar25;
    pdVar33 = unaff_x20;
  }
  else {
    pdVar24 = (dword *)0x0;
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar19;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar22;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar36 = (undefined1 *)((long)register0x00000008 + -0xa0);
    unaff_x20 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar29 = auVar38._8_4_;
    if (((int)uVar29 < 0) || (*(int *)(lVar34 + 0x50) <= (int)uVar29)) {
      return (dword *)0x0;
    }
    lVar34 = *(long *)(lVar34 + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar31 = *(long *)(lVar34 + 0x10) + ((ulong)auVar38._8_8_ & 0xffffffff) * 0x28;
      lVar34 = *(long *)(lVar31 + 0x28);
      cVar4 = *(char *)(lVar31 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar31 + 0x30),0);
      if (iVar14 == 0 || cVar4 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar34 != 0) && (*(int *)(lVar34 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar39 = func_0x00f78af4();
    pdVar19 = (dword *)0x0;
    pdVar22 = auVar38._8_8_;
code_r0x02f884dc:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = 0;
    *(dword **)(puVar9 + -0x28) = unaff_x20;
    *(dword **)(puVar9 + -0x20) = pdVar19;
    *(dword **)(puVar9 + -0x18) = pdVar22;
    *(undefined1 **)(puVar9 + -0x10) = puVar36;
    *(undefined **)(puVar9 + -8) = puVar37;
    puVar36 = puVar9 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar34 = *(long *)(auVar39._0_8_ + 0x70);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= auVar39._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar39._8_4_ * 0x28 + 0x28);
      if (lVar34 == 0) {
        pdVar19 = &MACH_HEADER.cputype;
      }
      else {
        pdVar19 = (dword *)(ulong)*(uint *)(lVar34 + 0x4c);
      }
      return pdVar19;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar40 = func_0x00f78af4();
    pdVar19 = (dword *)0x0;
    pdVar22 = auVar39._8_8_;
    pdVar33 = (dword *)0x3ebc000;
  }
  pdVar23 = auVar40._8_8_;
  unaff_x20 = auVar40._0_8_;
  puVar11 = puVar10 + -0x40;
  *(undefined8 *)(puVar10 + -0x40) = uVar17;
  *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar10 + -0x30) = 0;
  *(dword **)(puVar10 + -0x28) = pdVar33;
  *(dword **)(puVar10 + -0x20) = pdVar19;
  *(dword **)(puVar10 + -0x18) = pdVar22;
  *(undefined1 **)(puVar10 + -0x10) = puVar36;
  *(undefined **)(puVar10 + -8) = puVar37;
  puVar36 = puVar10 + -0x10;
  pdVar33 = (dword *)0x3ebc000;
  pdVar25 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a) != 0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar19 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x20 + 0x1a),pdVar23,pdVar25,0);
    lVar34 = *(long *)(unaff_x20 + 0x1c);
    pdVar33 = (dword *)0x0;
    if (lVar34 != 0) {
      uVar29 = auVar40._8_4_;
      if (*(uint *)(lVar34 + 0x18) <= uVar29) {
        pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) ||
         (pdVar33 = *(dword **)(unaff_x20 + 0xc), pdVar33 == (dword *)0x0)) {
        return pdVar19;
      }
      lVar34 = *(long *)(unaff_x20 + 0x1c);
      unaff_x20 = (dword *)0x0;
      if (lVar34 != 0) {
        if (*(uint *)(lVar34 + 0x18) <= uVar29) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = *(long **)(*(long *)(lVar34 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
        *(undefined8 *)(puVar10 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar10 + -0x50) = uVar30;
        *(undefined8 *)(puVar10 + -0x48) = uVar2;
        *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
        *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
        *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
        *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
        *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
        *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        *(dword **)(puVar10 + -0x68) = pdVar33;
        lVar34 = *(long *)(pdVar33 + 0x1a);
        if (lVar34 == 0) {
          puVar36 = puVar10 + -0x68;
          lVar31 = 1;
        }
        else {
          lVar31 = *(long *)(lVar34 + 0x18);
          if (lVar31 == 0) {
            return pdVar33;
          }
          puVar36 = (undefined1 *)(lVar34 + 0x20);
        }
        lVar34 = 0;
        do {
          lVar21 = *(long *)(puVar36 + lVar34 * 8);
          pcVar35 = *(code **)(lVar21 + 0x10);
          plVar1 = *(long **)(lVar21 + 0x20);
          lVar21 = *(long *)(lVar21 + 0x28);
          if (*(short *)(lVar21 + 0x48) == -1) {
            func_0x00f78ad8(lVar21);
          }
          iVar14 = func_0x00f78a4c(lVar21);
          bVar13 = *(char *)(lVar21 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar13) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar19 = (dword *)(*pcVar35)(plVar16,pdVar23,pdVar24,lVar21);
              }
              else {
                if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar33 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar21);
                iVar15 = func_0x00f78ec0(lVar21);
                if (iVar14 == 0) {
                  uVar5 = *(ushort *)(lVar21 + 0x48);
                  if (iVar15 == 0) {
                    lVar21 = *plVar1 + (ulong)uVar5 * 0x10;
                    pdVar19 = (dword *)(**(code **)(lVar21 + 0x138))
                                                 (plVar1,plVar16,pdVar23,pdVar24,
                                                  *(undefined8 *)(lVar21 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar21 = func_0x00f78a48(lVar21);
                  lVar27 = *plVar1;
                  uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar18 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar21) {
                        puVar20 = (undefined8 *)
                                  (lVar27 + (long)(int)(*piVar28 + (uint)uVar5) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar28 = piVar28 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar21,(ulong)uVar5);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar15 == 0) {
                    uVar17 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar27 = *plVar1;
                    uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                    if (uVar18 != 0) {
                      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == *(long *)(lVar21 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar21 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar28 = piVar28 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar17 = *(undefined8 *)(lVar27 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar17,lVar21);
                  pcVar35 = (code *)*puVar20;
                }
                pdVar19 = (dword *)(*pcVar35)(plVar1,plVar16,pdVar23,pdVar24,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(pdVar33 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar21);
              iVar15 = func_0x00f78ec0(lVar21);
              if (iVar14 == 0) {
                uVar5 = *(ushort *)(lVar21 + 0x48);
                if (iVar15 == 0) {
                  lVar21 = *plVar16 + (ulong)uVar5 * 0x10;
                  pdVar19 = (dword *)(**(code **)(lVar21 + 0x138))
                                               (plVar16,pdVar23,pdVar24,
                                                *(undefined8 *)(lVar21 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar21 = func_0x00f78a48(lVar21);
                lVar27 = *plVar16;
                uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar18 != 0) {
                  piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar21) {
                      puVar20 = (undefined8 *)
                                (lVar27 + (long)(int)(*piVar28 + (uint)uVar5) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar28 = piVar28 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar16,lVar21,(ulong)uVar5);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar15 == 0) {
                  uVar17 = *(undefined8 *)
                            (*plVar16 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar27 = *plVar16;
                  uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar18 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)(lVar21 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar21 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar28 = piVar28 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar27 = func_0x00fac1f0(plVar16);
code_r0x01e71cd8:
                  uVar17 = *(undefined8 *)(lVar27 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar17,lVar21);
                pcVar35 = (code *)*puVar20;
              }
              pdVar19 = (dword *)(*pcVar35)(plVar16,pdVar23,pdVar24,puVar20);
            }
          }
          else {
            if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar19 = (dword *)(*pcVar35)(plVar1,plVar16,pdVar23,pdVar24,lVar21);
          }
code_r0x01e71bd0:
          lVar34 = lVar34 + 1;
          if (lVar34 == lVar31) {
            return pdVar19;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar41 = func_0x00f78af4();
  pdVar22 = pdVar24;
  pdVar19 = pdVar23;
code_r0x02f88674:
  pdVar24 = auVar41._0_8_;
  *(dword **)(puVar11 + -0x30) = pdVar33;
  *(dword **)(puVar11 + -0x28) = unaff_x20;
  *(dword **)(puVar11 + -0x20) = pdVar19;
  *(dword **)(puVar11 + -0x18) = pdVar22;
  *(undefined1 **)(puVar11 + -0x10) = puVar36;
  *(undefined **)(puVar11 + -8) = puVar37;
  pdVar19 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar34 = *(long *)(pdVar24 + 0x1c);
  if (lVar34 != 0) {
    uVar29 = auVar41._8_4_;
    if (*(uint *)(lVar34 + 0x18) <= uVar29) {
      pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) {
      return pdVar19;
    }
    lVar34 = *(long *)(pdVar24 + 0x1c);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
      if ((lVar34 != 0) && (plVar16 = *(long **)(lVar34 + 0x28), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*plVar16 + 0x178))
                                     (plVar16,pdVar25,*(undefined8 *)(*plVar16 + 0x180));
        return pdVar19;
      }
    }
  }
  auVar38 = func_0x00f78af4();
  uVar17 = auVar38._0_8_;
  *(long *)(puVar11 + -0x50) = auVar41._8_8_;
  *(dword **)(puVar11 + -0x48) = pdVar25;
  *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar11 + -0x68) = 0;
  *(undefined8 *)(puVar11 + -0x70) = 0;
  *(undefined8 *)(puVar11 + -0x58) = 0;
  *(undefined8 *)(puVar11 + -0x60) = 0;
  pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar17,auVar38._8_8_,puVar11 + -0x70);
  if ((int)pdVar19 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar17,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
    *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
    *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
    *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
    *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
    pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar17,puVar11 + -0x90,1);
  }
  return pdVar19;
}



// ============================================================
// RVA: 0x158d198 | Atlas.Contexts.FrontEndContextMatchMakingState.OnLateUpdate
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x158d19c | Atlas.Contexts.FrontEndContextMatchMakingState.OnFixedUpdate
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x158d1a0 | Atlas.Contexts.FrontEndContextMatchMakingState.OnExit
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnExit(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar14;
  
  puVar3 = (undefined1 *)register0x00000008;
  do {
    lVar10 = param_1;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510b & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bf8);
      bRam0000000003eb510b = 1;
    }
    if ((*(long *)(lVar10 + 0x88) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28), lVar5 == 0)) {
code_r0x0158d27c:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerInLobby*/ func_0x014aa3cc(lVar5,0,0);
      unaff_x22 = *(long *)(lVar10 + 0xb0);
      if (unaff_x22 == 0) goto code_r0x0158d27c;
      unaff_x23 = 0x3d1fa78;
      unaff_x24 = 0x3d56000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x10);
      unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,lVar10,uRam0000000003d56bf8,0);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) break;
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnDeInit;
    param_1 = func_0x00f78e5c();
    puVar3 = puVar3 + -0x40;
    unaff_x19 = lVar10;
  } while( true );
  *(long **)(unaff_x22 + 0x10) = plVar6;
  uVar8 = *(undefined8 *)(puVar3 + -0x28);
  uVar1 = *(undefined8 *)(puVar3 + -0x40);
  lVar12 = *(long *)(puVar3 + -0x38);
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = uVar1;
  *(long *)(puVar3 + -0x38) = lVar12;
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = uVar8;
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  uVar11 = 0x3eb5000;
  lVar5 = 0x3d405f0;
  if ((bRam0000000003eb510c & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d56bf0);
    func_0x00f78a20(0x3d56c00);
    func_0x00f78a20(0x3d405f0);
    bRam0000000003eb510c = 1;
  }
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x11) == '\0') {
      return;
    }
    if ((*(long *)(lVar10 + 0x80) != 0) &&
       (lVar12 = *(long *)(*(long *)(lVar10 + 0x80) + 0x30), lVar12 != 0)) {
      uVar13 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar12 + 0x68);
      uVar8 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar8,lVar10,uRam0000000003d56bf0,uRam0000000003d2a168);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0158d444;
      *(long **)(lVar12 + 0x68) = plVar6;
      uVar1 = 0x3d1b4b8;
      if (*(long *)(lVar10 + 0x88) != 0) {
        lVar7 = *(long *)(*(long *)(lVar10 + 0x88) + 0x20);
        if (lVar7 != 0) {
          lVar12 = *(long *)(lVar7 + 0x10);
          if (lVar12 == 0) goto code_r0x0158d440;
          uVar11 = *(undefined8 *)(lVar12 + 0x40);
          uVar13 = 0x3d1b518;
          uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
          /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar10,uRam0000000003d56c00,uRam0000000003d2a238);
          plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
          if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto code_r0x0158d444;
          *(long **)(lVar12 + 0x40) = plVar6;
        }
        lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
        uVar1 = uVar13;
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x11) = 0;
          return;
        }
      }
    }
  }
code_r0x0158d440:
  uVar13 = uVar1;
  func_0x00f78af4();
code_r0x0158d444:
  puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnMatchStarted;
  lVar7 = func_0x00f78e5c();
  puVar2 = puVar3 + -0x50;
  do {
    lVar9 = lVar7;
    puVar4 = puVar2;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = uVar13;
    *(long *)(puVar4 + -0x38) = lVar12;
    *(long *)(puVar4 + -0x30) = lVar5;
    *(undefined8 *)(puVar4 + -0x28) = uVar8;
    *(undefined8 *)(puVar4 + -0x20) = uVar11;
    *(long *)(puVar4 + -0x18) = lVar10;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar4 + -8) = puVar14;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar9 + 0x88) == 0) {
code_r0x0158d530:
      func_0x00f78af4();
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar9 + 0x88) + 0x20);
      if (lVar10 == 0) {
        return;
      }
      lVar5 = *(long *)(lVar10 + 0x10);
      if (lVar5 == 0) goto code_r0x0158d530;
      lVar12 = 0x3d1b518;
      uVar13 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar5 + 0x40);
      uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar9,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar8,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(lVar5 + 0x40) = plVar6;
        return;
      }
    }
    puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    lVar7 = func_0x00f78e5c();
    puVar2 = puVar4 + -0x50;
    lVar10 = lVar9;
    puVar3 = puVar4;
  } while( true );
}



// ============================================================
// RVA: 0x158d1a4 | Atlas.Contexts.FrontEndContextMatchMakingState.ExitState
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__ExitState(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 *puVar4;
  
  do {
    lVar10 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510b & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bf8);
      bRam0000000003eb510b = 1;
    }
    if ((*(long *)(lVar10 + 0x88) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28), lVar5 == 0)) {
LAB_0158d27c:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerInLobby*/ func_0x014aa3cc(lVar5,0,0);
      unaff_x22 = *(long *)(lVar10 + 0xb0);
      if (unaff_x22 == 0) goto LAB_0158d27c;
      unaff_x23 = 0x3d1fa78;
      unaff_x24 = 0x3d56000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x10);
      unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,lVar10,uRam0000000003d56bf8,0);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) break;
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnDeInit;
    param_1 = func_0x00f78e5c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar10;
  } while( true );
  *(long **)(unaff_x22 + 0x10) = plVar6;
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x40);
  lVar12 = *(long *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar1;
  *(long *)((long)register0x00000008 + -0x38) = lVar12;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar11 = 0x3eb5000;
  lVar5 = 0x3d405f0;
  if ((bRam0000000003eb510c & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d56bf0);
    func_0x00f78a20(0x3d56c00);
    func_0x00f78a20(0x3d405f0);
    bRam0000000003eb510c = 1;
  }
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x11) == '\0') {
      return;
    }
    if ((*(long *)(lVar10 + 0x80) != 0) &&
       (lVar12 = *(long *)(*(long *)(lVar10 + 0x80) + 0x30), lVar12 != 0)) {
      uVar13 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar12 + 0x68);
      uVar8 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar8,lVar10,uRam0000000003d56bf0,uRam0000000003d2a168);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0158d444;
      *(long **)(lVar12 + 0x68) = plVar6;
      uVar1 = 0x3d1b4b8;
      if (*(long *)(lVar10 + 0x88) != 0) {
        lVar7 = *(long *)(*(long *)(lVar10 + 0x88) + 0x20);
        if (lVar7 != 0) {
          lVar12 = *(long *)(lVar7 + 0x10);
          if (lVar12 == 0) goto code_r0x0158d440;
          uVar11 = *(undefined8 *)(lVar12 + 0x40);
          uVar13 = 0x3d1b518;
          uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
          /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar10,uRam0000000003d56c00,uRam0000000003d2a238);
          plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
          if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto code_r0x0158d444;
          *(long **)(lVar12 + 0x40) = plVar6;
        }
        lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
        uVar1 = uVar13;
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x11) = 0;
          return;
        }
      }
    }
  }
code_r0x0158d440:
  uVar13 = uVar1;
  func_0x00f78af4();
code_r0x0158d444:
  puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnMatchStarted;
  lVar7 = func_0x00f78e5c();
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
  puVar3 = (undefined1 *)register0x00000008;
  do {
    lVar9 = lVar7;
    puVar4 = puVar2;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = uVar13;
    *(long *)(puVar4 + -0x38) = lVar12;
    *(long *)(puVar4 + -0x30) = lVar5;
    *(undefined8 *)(puVar4 + -0x28) = uVar8;
    *(undefined8 *)(puVar4 + -0x20) = uVar11;
    *(long *)(puVar4 + -0x18) = lVar10;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar4 + -8) = puVar14;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar9 + 0x88) == 0) {
code_r0x0158d530:
      func_0x00f78af4();
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar9 + 0x88) + 0x20);
      if (lVar10 == 0) {
        return;
      }
      lVar5 = *(long *)(lVar10 + 0x10);
      if (lVar5 == 0) goto code_r0x0158d530;
      lVar12 = 0x3d1b518;
      uVar13 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar5 + 0x40);
      uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar9,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar8,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(lVar5 + 0x40) = plVar6;
        return;
      }
    }
    puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    lVar7 = func_0x00f78e5c();
    puVar2 = puVar4 + -0x50;
    lVar10 = lVar9;
    puVar3 = puVar4;
  } while( true );
}



// ============================================================
// RVA: 0x158d284 | Atlas.Contexts.FrontEndContextMatchMakingState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnDeInit(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar14;
  undefined1 *puVar4;
  
  do {
    lVar10 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510b & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bf8);
      bRam0000000003eb510b = 1;
    }
    if ((*(long *)(lVar10 + 0x88) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28), lVar5 == 0)) {
LAB_0158d27c:
      func_0x00f78af4();
    }
    else {
      /*Atlas.Networking.NetworkLobby$$SetLocalPlayerInLobby*/ func_0x014aa3cc(lVar5,0,0);
      unaff_x22 = *(long *)(lVar10 + 0xb0);
      if (unaff_x22 == 0) goto LAB_0158d27c;
      unaff_x23 = 0x3d1fa78;
      unaff_x24 = 0x3d56000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x10);
      unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,lVar10,uRam0000000003d56bf8,0);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) break;
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextMatchMakingState__OnDeInit;
    param_1 = func_0x00f78e5c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar10;
  } while( true );
  *(long **)(unaff_x22 + 0x10) = plVar6;
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar1 = *(undefined8 *)((long)register0x00000008 + -0x40);
  lVar12 = *(long *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar1;
  *(long *)((long)register0x00000008 + -0x38) = lVar12;
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar11 = 0x3eb5000;
  lVar5 = 0x3d405f0;
  if ((bRam0000000003eb510c & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d56bf0);
    func_0x00f78a20(0x3d56c00);
    func_0x00f78a20(0x3d405f0);
    bRam0000000003eb510c = 1;
  }
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x11) == '\0') {
      return;
    }
    if ((*(long *)(lVar10 + 0x80) != 0) &&
       (lVar12 = *(long *)(*(long *)(lVar10 + 0x80) + 0x30), lVar12 != 0)) {
      uVar13 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar12 + 0x68);
      uVar8 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(uVar8,lVar10,uRam0000000003d56bf0,uRam0000000003d2a168);
      plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto code_r0x0158d444;
      *(long **)(lVar12 + 0x68) = plVar6;
      uVar1 = 0x3d1b4b8;
      if (*(long *)(lVar10 + 0x88) != 0) {
        lVar7 = *(long *)(*(long *)(lVar10 + 0x88) + 0x20);
        if (lVar7 != 0) {
          lVar12 = *(long *)(lVar7 + 0x10);
          if (lVar12 == 0) goto code_r0x0158d440;
          uVar11 = *(undefined8 *)(lVar12 + 0x40);
          uVar13 = 0x3d1b518;
          uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
          /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar10,uRam0000000003d56c00,uRam0000000003d2a238);
          plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
          if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto code_r0x0158d444;
          *(long **)(lVar12 + 0x40) = plVar6;
        }
        lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d405f0);
        uVar1 = uVar13;
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x11) = 0;
          return;
        }
      }
    }
  }
code_r0x0158d440:
  uVar13 = uVar1;
  func_0x00f78af4();
code_r0x0158d444:
  puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnMatchStarted;
  lVar7 = func_0x00f78e5c();
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
  puVar3 = (undefined1 *)register0x00000008;
  do {
    lVar9 = lVar7;
    puVar4 = puVar2;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = uVar13;
    *(long *)(puVar4 + -0x38) = lVar12;
    *(long *)(puVar4 + -0x30) = lVar5;
    *(undefined8 *)(puVar4 + -0x28) = uVar8;
    *(undefined8 *)(puVar4 + -0x20) = uVar11;
    *(long *)(puVar4 + -0x18) = lVar10;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar4 + -8) = puVar14;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar9 + 0x88) == 0) {
code_r0x0158d530:
      func_0x00f78af4();
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar9 + 0x88) + 0x20);
      if (lVar10 == 0) {
        return;
      }
      lVar5 = *(long *)(lVar10 + 0x10);
      if (lVar5 == 0) goto code_r0x0158d530;
      lVar12 = 0x3d1b518;
      uVar13 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      uVar11 = *(undefined8 *)(lVar5 + 0x40);
      uVar8 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar8,lVar9,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,uVar8,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(lVar5 + 0x40) = plVar6;
        return;
      }
    }
    puVar14 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    lVar7 = func_0x00f78e5c();
    puVar2 = puVar4 + -0x50;
    lVar10 = lVar9;
    puVar3 = puVar4;
  } while( true );
}



// ============================================================
// RVA: 0x158d288 | Atlas.Contexts.FrontEndContextMatchMakingState.RemoveDelegates
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__RemoveDelegates(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar9;
  undefined1 *puVar3;
  
  uVar8 = 0x3eb5000;
  lVar7 = 0x3d405f0;
  if ((bRam0000000003eb510c & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d56bf0);
    func_0x00f78a20(0x3d56c00);
    func_0x00f78a20(0x3d405f0);
    bRam0000000003eb510c = 1;
  }
  lVar4 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x11) == '\0') {
      return;
    }
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (unaff_x23 = *(long *)(*(long *)(param_1 + 0x80) + 0x30), unaff_x23 != 0)) {
      unaff_x24 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      uVar8 = *(undefined8 *)(unaff_x23 + 0x68);
      unaff_x21 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(unaff_x21,param_1,uRam0000000003d56bf0,uRam0000000003d2a168);
      plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,unaff_x21,0);
      if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) goto LAB_0158d444;
      *(long **)(unaff_x23 + 0x68) = plVar5;
      if (*(long *)(param_1 + 0x88) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
        if (lVar4 != 0) {
          unaff_x23 = *(long *)(lVar4 + 0x10);
          if (unaff_x23 == 0) goto LAB_0158d440;
          uVar8 = *(undefined8 *)(unaff_x23 + 0x40);
          unaff_x24 = 0x3d1b518;
          unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
          /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,param_1,uRam0000000003d56c00,uRam0000000003d2a238);
          plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar8,unaff_x21,0);
          if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) goto LAB_0158d444;
          *(long **)(unaff_x23 + 0x40) = plVar5;
        }
        lVar4 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405f0);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x11) = 0;
          return;
        }
      }
    }
  }
LAB_0158d440:
  func_0x00f78af4();
LAB_0158d444:
  puVar9 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnMatchStarted;
  lVar4 = func_0x00f78e5c();
  puVar1 = &stack0xffffffffffffffb0;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    lVar6 = lVar4;
    puVar3 = puVar1;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(long *)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = lVar7;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar8;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar9;
    uVar8 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar6 + 0x88) == 0) {
code_r0x0158d530:
      func_0x00f78af4();
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x88) + 0x20);
      if (lVar7 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) goto code_r0x0158d530;
      unaff_x23 = 0x3d1b518;
      unaff_x24 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      uVar8 = *(undefined8 *)(lVar7 + 0x40);
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,lVar6,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,unaff_x21,0);
      if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(lVar7 + 0x40) = plVar5;
        return;
      }
    }
    puVar9 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    lVar4 = func_0x00f78e5c();
    puVar1 = puVar3 + -0x50;
    param_1 = lVar6;
    puVar2 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x158d448 | Atlas.Contexts.FrontEndContextMatchMakingState.OnMatchStarted
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnMatchStarted(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    lVar2 = param_1;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar2 + 0x88) == 0) {
code_r0x0158d530:
      func_0x00f78af4();
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar2 + 0x88) + 0x20);
      if (lVar4 == 0) {
        return;
      }
      unaff_x22 = *(long *)(lVar4 + 0x10);
      if (unaff_x22 == 0) goto code_r0x0158d530;
      unaff_x23 = 0x3d1b518;
      unaff_x24 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,lVar2,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(unaff_x20,unaff_x21,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar3;
        return;
      }
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    param_1 = func_0x00f78e5c();
    puVar1 = puVar1 + -0x50;
    unaff_x19 = lVar2;
  } while( true );
}



// ============================================================
// RVA: 0x158d44c | Atlas.Contexts.FrontEndContextMatchMakingState.MatchStarted
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__MatchStarted(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  do {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar1 + 0x88) == 0) {
LAB_0158d530:
      func_0x00f78af4();
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar1 + 0x88) + 0x20);
      if (lVar3 == 0) {
        return;
      }
      unaff_x22 = *(long *)(lVar3 + 0x10);
      if (unaff_x22 == 0) goto LAB_0158d530;
      unaff_x23 = 0x3d1b518;
      unaff_x24 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,lVar1,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(unaff_x20,unaff_x21,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar2;
        return;
      }
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    param_1 = func_0x00f78e5c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = lVar1;
  } while( true );
}



// ============================================================
// RVA: 0x158d538 | Atlas.Contexts.FrontEndContextMatchMakingState.OnSinglePlayerFallback
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb510d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d56c00);
      bRam0000000003eb510d = 1;
    }
    if (*(long *)(lVar2 + 0x88) == 0) {
LAB_0158d530:
      func_0x00f78af4();
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x88) + 0x20);
      if (lVar3 == 0) {
        return;
      }
      unaff_x22 = *(long *)(lVar3 + 0x10);
      if (unaff_x22 == 0) goto LAB_0158d530;
      unaff_x23 = 0x3d1b518;
      unaff_x24 = 0x3d56000;
      unaff_x25 = 0x3d2a000;
      unaff_x20 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,lVar2,uRam0000000003d56c00,uRam0000000003d2a238);
      plVar1 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(unaff_x20,unaff_x21,0);
      if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar1;
        return;
      }
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextMatchMakingState__OnSinglePlayerFallback;
    param_1 = func_0x00f78e5c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = lVar2;
  } while( true );
}



// ============================================================
// RVA: 0x158d53c | Atlas.Contexts.FrontEndContextMatchMakingState.OnVoteStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x0158d7e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0158d7e8) */

long Atlas_Contexts_FrontEndContextMatchMakingState__OnVoteStarted
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 unaff_x22;
  undefined8 uVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar18;
  undefined8 unaff_x26;
  long lVar19;
  undefined8 unaff_x27;
  undefined1 *puVar20;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar21 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb510e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d405f8);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb510e = 1;
  }
  Atlas_Contexts_FrontEndContextMatchMakingState__RemoveDelegates(param_1);
  uVar7 = 0x3eb5000;
  uVar15 = unaff_x21;
  uVar17 = unaff_x22;
  uVar16 = unaff_x23;
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar10 != 0)) {
    uVar4 = *(uint *)(lVar10 + 0x9c);
    uVar15 = (ulong)uVar4;
    if (uVar4 != 0) {
      lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      uVar7 = 0x3d405f8;
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) goto LAB_0158d690;
      *(uint *)(*(long *)(lVar10 + 0x10) + 0x10) = uVar4;
    }
    lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
    uVar7 = 0x3d405f8;
    if (lVar10 != 0) {
      uVar17 = 0x3d1a000;
      uVar16 = *(undefined8 *)(lVar10 + 0x10);
      uVar7 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      param_3 = (undefined8 *)0x0;
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar7,uVar16,0,0);
      uVar15 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      lVar10 = *(long *)(param_1 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
      param_1 = 0;
      uVar16 = 0x3d25000;
      if (lVar10 != 0) {
        uVar17 = 1;
        puVar9 = (undefined8 *)register0x00000008;
        goto code_r0x01e7159c;
      }
    }
  }
LAB_0158d690:
  unaff_x23 = uVar16;
  lVar10 = func_0x00f78af4();
  puVar9 = &uStack_70;
  puStack_48 = &Atlas_Contexts_FrontEndContextMatchMakingState__BackOut;
  unaff_x29 = &puStack_50;
  uStack_70 = uVar17;
  uStack_68 = uVar15;
  uStack_60 = uVar7;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb510f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d405f8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb510f = 1;
  }
  lVar11 = *(long *)(lVar10 + 0xb0);
  if (lVar11 != 0) {
    if ((*(char *)(lVar11 + 0x90) != '\0') || (*(char *)(lVar11 + 0xac) != '\0')) {
      return 0;
    }
    if ((*(long *)(lVar10 + 0x88) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28), lVar11 != 0)) {
      if (*(char *)(lVar11 + 200) != '\0') {
        return 0;
      }
      lVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar10,uRam0000000003d405f8);
      if (lVar11 != 0) {
        unaff_x22 = *(undefined8 *)(lVar11 + 0x10);
        uVar7 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
        param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar7,unaff_x22,1,0)
        ;
        unaff_x20 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
        lVar10 = *(long *)(lVar10 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x20,0);
        if (lVar10 != 0) {
          uVar17 = 0;
          unaff_x30 = &UNK_0158d7e8;
          unaff_x19 = lVar10;
          unaff_x21 = uVar7;
code_r0x01e7159c:
          *(undefined8 *)((long)puVar9 + -0x60) = unaff_x28;
          *(undefined8 *)((long)puVar9 + -0x58) = unaff_x27;
          *(undefined8 *)((long)puVar9 + -0x50) = unaff_x26;
          *(undefined8 *)((long)puVar9 + -0x48) = unaff_x25;
          *(undefined8 *)((long)puVar9 + -0x40) = unaff_x24;
          *(undefined8 *)((long)puVar9 + -0x38) = unaff_x23;
          *(undefined8 *)((long)puVar9 + -0x30) = unaff_x22;
          *(ulong *)((long)puVar9 + -0x28) = unaff_x21;
          *(undefined8 *)((long)puVar9 + -0x20) = unaff_x20;
          *(long *)((long)puVar9 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)puVar9 + -0x10) = unaff_x29;
          *(undefined **)((long)puVar9 + -8) = unaff_x30;
          *(long *)((long)puVar9 + -0x68) = lVar10;
          lVar11 = *(long *)(lVar10 + 0x68);
          if (lVar11 == 0) {
            puVar20 = (undefined1 *)((long)puVar9 + -0x68);
            lVar19 = 1;
          }
          else {
            lVar19 = *(long *)(lVar11 + 0x18);
            if (lVar19 == 0) {
              return lVar10;
            }
            puVar20 = (undefined1 *)(lVar11 + 0x20);
          }
          lVar11 = 0;
          do {
            lVar12 = *(long *)(puVar20 + lVar11 * 8);
            pcVar18 = *(code **)(lVar12 + 0x10);
            plVar1 = *(long **)(lVar12 + 0x20);
            lVar12 = *(long *)(lVar12 + 0x28);
            if (*(short *)(lVar12 + 0x48) == -1) {
              func_0x00f78ad8(lVar12);
            }
            iVar5 = func_0x00f78a4c(lVar12);
            bVar3 = *(char *)(lVar12 + 0x4a) == '\x03';
            if (iVar5 == 0) {
              if (bVar3) {
                if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                  lVar12 = (*pcVar18)(plVar8,uVar17,uVar7,lVar12);
                }
                else {
                  if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                     || (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x01e7162c;
                  iVar5 = func_0x00f78a44(lVar12);
                  iVar6 = func_0x00f78ec0(lVar12);
                  if (iVar5 == 0) {
                    uVar2 = *(ushort *)(lVar12 + 0x48);
                    if (iVar6 == 0) {
                      lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
                      lVar12 = (**(code **)(lVar12 + 0x138))
                                         (plVar1,plVar8,uVar17,uVar7,*(undefined8 *)(lVar12 + 0x140)
                                         );
                      goto code_r0x01e71750;
                    }
                    lVar12 = func_0x00f78a48(lVar12);
                    lVar13 = *plVar1;
                    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar15 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar12) {
                          puVar9 = (undefined8 *)
                                   (lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x01e718f4;
                        }
                        piVar14 = piVar14 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e718f4:
                    pcVar18 = (code *)*puVar9;
                    puVar9 = (undefined8 *)puVar9[1];
                  }
                  else {
                    if (iVar6 == 0) {
                      uVar16 = *(undefined8 *)
                                (*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar13 = *plVar1;
                      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                      if (uVar15 != 0) {
                        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                            lVar13 = lVar13 + (long)(int)(*piVar14 +
                                                         (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e718cc;
                          }
                          piVar14 = piVar14 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                      uVar16 = *(undefined8 *)(lVar13 + 8);
                    }
                    puVar9 = (undefined8 *)func_0x00f78acc(uVar16,lVar12);
                    pcVar18 = (code *)*puVar9;
                  }
                  lVar12 = (*pcVar18)(plVar1,plVar8,uVar17,uVar7,puVar9);
                }
              }
              else {
                if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
                goto code_r0x01e7173c;
                iVar5 = func_0x00f78a44(lVar12);
                iVar6 = func_0x00f78ec0(lVar12);
                if (iVar5 == 0) {
                  uVar2 = *(ushort *)(lVar12 + 0x48);
                  if (iVar6 == 0) {
                    lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
                    lVar12 = (**(code **)(lVar12 + 0x138))
                                       (plVar8,uVar17,uVar7,*(undefined8 *)(lVar12 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar12 = func_0x00f78a48(lVar12);
                  lVar13 = *plVar8;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar15 != 0) {
                    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == lVar12) {
                        puVar9 = (undefined8 *)
                                 (lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e71880;
                      }
                      piVar14 = piVar14 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01e71880:
                  pcVar18 = (code *)*puVar9;
                  puVar9 = (undefined8 *)puVar9[1];
                }
                else {
                  if (iVar6 == 0) {
                    uVar16 = *(undefined8 *)
                              (*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar13 = *plVar8;
                    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar15 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)(lVar12 + 0x18)) {
                          lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar12 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71858;
                        }
                        piVar14 = piVar14 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar13 = func_0x00fac1f0(plVar8);
code_r0x01e71858:
                    uVar16 = *(undefined8 *)(lVar13 + 8);
                  }
                  puVar9 = (undefined8 *)func_0x00f78acc(uVar16,lVar12);
                  pcVar18 = (code *)*puVar9;
                }
                lVar12 = (*pcVar18)(plVar8,uVar17,uVar7,puVar9);
              }
            }
            else {
              if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
              lVar12 = (*pcVar18)(plVar1,plVar8,uVar17,uVar7,lVar12);
            }
code_r0x01e71750:
            lVar11 = lVar11 + 1;
            if (lVar11 == lVar19) {
              return lVar12;
            }
          } while( true );
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb5110 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70ec0);
    bRam0000000003eb5110 = 1;
  }
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (*(long *)(lVar10 + 0xb0) == 0) goto code_r0x0158dae8;
  lVar11 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar10 + 0xb0),0);
  if ((int)lVar11 != 0) {
    if (*(long *)(lVar10 + 0x80) == 0) goto code_r0x0158dae8;
    plVar8 = *(long **)(*(long *)(lVar10 + 0x80) + 0x30);
    if (plVar8 == (long *)0x0) goto code_r0x0158dae8;
    lVar11 = (**(code **)(*plVar8 + 0x858))(plVar8,*(undefined8 *)(*plVar8 + 0x860));
    if ((int)lVar11 != 0) {
      if (*(long *)(lVar10 + 0x88) == 0) goto code_r0x0158dae8;
      lVar11 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28);
      if (lVar11 == 0) goto code_r0x0158dae8;
      lVar11 = *(long *)(lVar11 + 0xd0);
      if (lVar11 == 0) goto code_r0x0158dae8;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_258,lVar11,uRam0000000003d3b4c0);
      uStack_d8 = uStack_1f0;
      uStack_e0 = uStack_1f8;
      uStack_c8 = uStack_1e0;
      uStack_d0 = uStack_1e8;
      uStack_c0 = uStack_1d8;
      uStack_118 = uStack_230;
      uStack_120 = uStack_238;
      uStack_108 = uStack_220;
      uStack_110 = uStack_228;
      uStack_f8 = uStack_210;
      uStack_100 = uStack_218;
      uStack_e8 = uStack_200;
      uStack_f0 = uStack_208;
      uStack_138 = uStack_250;
      uStack_140 = uStack_258;
      uStack_128 = uStack_240;
      uStack_130 = uStack_248;
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_140,uRam0000000003d32b50);
        if ((uVar4 & 1) == 0) break;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_150 = uStack_c0;
        uStack_1b8 = uStack_128;
        uStack_1c0 = uStack_130;
        uStack_1a8 = uStack_118;
        uStack_1b0 = uStack_120;
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        uStack_188 = uStack_f8;
        uStack_190 = uStack_100;
        if (*(long *)(lVar10 + 0xb0) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x158dae8);
          (*pcVar18)();
        }
        param_3 = (undefined8 *)0x0;
        uVar15 = /*Atlas.Networking.MatchMakingManager$$IsGroupPlayerAbleToBeginMatch*/ func_0x014905f8(*(long *)(lVar10 + 0xb0),&uStack_1c0);
      } while ((uVar15 & 1) != 0);
      iStack_1d0 = 0x76;
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_140,uRam0000000003d32b48);
      if (iStack_1d0 == 0x76) {
        uStack_1c8 = 0;
      }
      do {
        if (((*(long *)(lVar10 + 0x88) != 0) &&
            (lVar11 = *(long *)(*(long *)(lVar10 + 0x88) + 0x28), lVar11 != 0)) &&
           (lVar11 = *(long *)(lVar11 + 0xd0), lVar11 != 0)) {
          if (uVar4 == 0) {
            iVar5 = *(int *)(lVar11 + 0x18);
            if (iVar5 + 1 < 2) {
              return 0;
            }
            lVar11 = *(long *)(lVar10 + 0xb0);
            if (lVar11 != 0) {
              if ((*(char *)(lVar11 + 0xc6) == '\0') || (iVar5 == 7)) {
                /*Atlas.Networking.MatchMakingManager$$CreatePrivateMatch*/ func_0x0148f354(lVar11,0);
              }
              else {
                /*Atlas.Networking.MatchMakingManager$$FindPublicMatchWithGroup*/ func_0x0148f410(lVar11,0);
              }
              return 1;
            }
          }
          else {
            lVar11 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
            /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar11,0);
            uVar17 = /*STR('PLAY_FRIENDS_ROOM_AWAY_BODY')*/ uRam0000000003d70ec0;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x28) = /*STR('PLAY_FRIENDS_ROOM_AWAY_TITLE')*/ uRam0000000003d70ec8;
              *(undefined8 *)(lVar11 + 0x30) = uVar17;
              *(undefined8 *)(lVar11 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
              if (*(long *)(lVar10 + 0xc0) != 0) {
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0xc0),lVar11,uRam0000000003d3e0e8);
                return 0;
              }
            }
          }
        }
code_r0x0158dae8:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x0158db2c;
        plVar8 = (long *)___cxa_begin_catch();
        lVar11 = *plVar8;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_140,uRam0000000003d32b48);
        uVar4 = 0;
      } while (lVar11 == 0);
      func_0x00f78ac0(lVar11,0);
code_r0x0158db2c:
      lVar10 = __Unwind_Resume();
      if ((bRam0000000003eb5111 & 1) == 0) {
        func_0x00f78a20(0x3d405e8);
        bRam0000000003eb5111 = 1;
      }
      if (lVar10 == 0) {
        auVar21 = func_0x00f78af4(0,uRam0000000003d405e8);
        lVar10 = auVar21._0_8_;
        *(undefined8 *)(lVar10 + 0x10) = *param_3;
        *(long *)(lVar10 + 0x20) = auVar21._8_8_;
        *(undefined8 **)(lVar10 + 0x28) = param_3;
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar11;
}



// ============================================================
// RVA: 0x158d694 | Atlas.Contexts.FrontEndContextMatchMakingState.BackOut
// ============================================================

long Atlas_Contexts_FrontEndContextMatchMakingState__BackOut
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  undefined4 uStack_188;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb510f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d405f8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb510f = 1;
  }
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0x90) != '\0') || (*(char *)(lVar8 + 0xac) != '\0')) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar8 != 0)) {
      if (*(char *)(lVar8 + 200) != '\0') {
        return 0;
      }
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x10);
        uVar4 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
        param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar4,uVar9,1,0);
        uVar9 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
        lVar8 = *(long *)(param_1 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
        if (lVar8 != 0) {
          /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar8,uVar9,0,uVar4,uRam0000000003d2a5b0);
          return 1;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb5110 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70ec0);
    bRam0000000003eb5110 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(lVar8 + 0xb0) == 0) goto code_r0x0158dae8;
  lVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar8 + 0xb0),0);
  if ((int)lVar5 != 0) {
    if (*(long *)(lVar8 + 0x80) == 0) goto code_r0x0158dae8;
    plVar6 = *(long **)(*(long *)(lVar8 + 0x80) + 0x30);
    if (plVar6 == (long *)0x0) goto code_r0x0158dae8;
    lVar5 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((int)lVar5 != 0) {
      if (*(long *)(lVar8 + 0x88) == 0) goto code_r0x0158dae8;
      lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28);
      if (lVar5 == 0) goto code_r0x0158dae8;
      lVar5 = *(long *)(lVar5 + 0xd0);
      if (lVar5 == 0) goto code_r0x0158dae8;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_218,lVar5,uRam0000000003d3b4c0);
      uStack_98 = uStack_1b0;
      uStack_a0 = uStack_1b8;
      uStack_88 = uStack_1a0;
      uStack_90 = uStack_1a8;
      uStack_80 = uStack_198;
      uStack_d8 = uStack_1f0;
      uStack_e0 = uStack_1f8;
      uStack_c8 = uStack_1e0;
      uStack_d0 = uStack_1e8;
      uStack_b8 = uStack_1d0;
      uStack_c0 = uStack_1d8;
      uStack_a8 = uStack_1c0;
      uStack_b0 = uStack_1c8;
      uStack_f8 = uStack_210;
      uStack_100 = uStack_218;
      uStack_e8 = uStack_200;
      uStack_f0 = uStack_208;
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_100,uRam0000000003d32b50);
        if ((uVar3 & 1) == 0) break;
        uStack_138 = uStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_110 = uStack_80;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        if (*(long *)(lVar8 + 0xb0) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x158dae8);
          (*pcVar2)();
        }
        param_3 = (undefined8 *)0x0;
        uVar7 = /*Atlas.Networking.MatchMakingManager$$IsGroupPlayerAbleToBeginMatch*/ func_0x014905f8(*(long *)(lVar8 + 0xb0),&uStack_180);
      } while ((uVar7 & 1) != 0);
      iStack_190 = 0x76;
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
      if (iStack_190 == 0x76) {
        uStack_188 = 0;
      }
      do {
        if (((*(long *)(lVar8 + 0x88) != 0) &&
            (lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0xd0), lVar5 != 0)) {
          if (uVar3 == 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            if (iVar1 + 1 < 2) {
              return 0;
            }
            lVar5 = *(long *)(lVar8 + 0xb0);
            if (lVar5 != 0) {
              if ((*(char *)(lVar5 + 0xc6) == '\0') || (iVar1 == 7)) {
                /*Atlas.Networking.MatchMakingManager$$CreatePrivateMatch*/ func_0x0148f354(lVar5,0);
              }
              else {
                /*Atlas.Networking.MatchMakingManager$$FindPublicMatchWithGroup*/ func_0x0148f410(lVar5,0);
              }
              return 1;
            }
          }
          else {
            lVar5 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
            /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar5,0);
            uVar9 = /*STR('PLAY_FRIENDS_ROOM_AWAY_BODY')*/ uRam0000000003d70ec0;
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x28) = /*STR('PLAY_FRIENDS_ROOM_AWAY_TITLE')*/ uRam0000000003d70ec8;
              *(undefined8 *)(lVar5 + 0x30) = uVar9;
              *(undefined8 *)(lVar5 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
              if (*(long *)(lVar8 + 0xc0) != 0) {
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0xc0),lVar5,uRam0000000003d3e0e8);
                return 0;
              }
            }
          }
        }
code_r0x0158dae8:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x0158db2c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar5 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
        uVar3 = 0;
      } while (lVar5 == 0);
      func_0x00f78ac0(lVar5,0);
code_r0x0158db2c:
      lVar8 = __Unwind_Resume();
      if ((bRam0000000003eb5111 & 1) == 0) {
        func_0x00f78a20(0x3d405e8);
        bRam0000000003eb5111 = 1;
      }
      if (lVar8 != 0) {
        return lVar8;
      }
      auVar10 = func_0x00f78af4(0,uRam0000000003d405e8);
      lVar8 = auVar10._0_8_;
      *(undefined8 *)(lVar8 + 0x10) = *param_3;
      *(long *)(lVar8 + 0x20) = auVar10._8_8_;
      *(undefined8 **)(lVar8 + 0x28) = param_3;
      return lVar8;
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x158d69c | Atlas.Contexts.FrontEndContextMatchMakingState.BackToLoadout
// ============================================================

long Atlas_Contexts_FrontEndContextMatchMakingState__BackToLoadout
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  undefined4 uStack_188;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb510f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d405f8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb510f = 1;
  }
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0x90) != '\0') || (*(char *)(lVar8 + 0xac) != '\0')) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar8 != 0)) {
      if (*(char *)(lVar8 + 200) != '\0') {
        return 0;
      }
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x10);
        uVar4 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
        Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor
                  (uVar4,uVar9,param_2,0);
        uVar9 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
        lVar8 = *(long *)(param_1 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
        param_3 = param_2;
        if (lVar8 != 0) {
          /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar8,uVar9,0,uVar4,uRam0000000003d2a5b0);
          return 1;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb5110 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70ec0);
    bRam0000000003eb5110 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(lVar8 + 0xb0) == 0) goto code_r0x0158dae8;
  lVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar8 + 0xb0),0);
  if ((int)lVar5 != 0) {
    if (*(long *)(lVar8 + 0x80) == 0) goto code_r0x0158dae8;
    plVar6 = *(long **)(*(long *)(lVar8 + 0x80) + 0x30);
    if (plVar6 == (long *)0x0) goto code_r0x0158dae8;
    lVar5 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((int)lVar5 != 0) {
      if (*(long *)(lVar8 + 0x88) == 0) goto code_r0x0158dae8;
      lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28);
      if (lVar5 == 0) goto code_r0x0158dae8;
      lVar5 = *(long *)(lVar5 + 0xd0);
      if (lVar5 == 0) goto code_r0x0158dae8;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_218,lVar5,uRam0000000003d3b4c0);
      uStack_98 = uStack_1b0;
      uStack_a0 = uStack_1b8;
      uStack_88 = uStack_1a0;
      uStack_90 = uStack_1a8;
      uStack_80 = uStack_198;
      uStack_d8 = uStack_1f0;
      uStack_e0 = uStack_1f8;
      uStack_c8 = uStack_1e0;
      uStack_d0 = uStack_1e8;
      uStack_b8 = uStack_1d0;
      uStack_c0 = uStack_1d8;
      uStack_a8 = uStack_1c0;
      uStack_b0 = uStack_1c8;
      uStack_f8 = uStack_210;
      uStack_100 = uStack_218;
      uStack_e8 = uStack_200;
      uStack_f0 = uStack_208;
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_100,uRam0000000003d32b50);
        if ((uVar3 & 1) == 0) break;
        uStack_138 = uStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_110 = uStack_80;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        if (*(long *)(lVar8 + 0xb0) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x158dae8);
          (*pcVar2)();
        }
        param_3 = (undefined8 *)0x0;
        uVar7 = /*Atlas.Networking.MatchMakingManager$$IsGroupPlayerAbleToBeginMatch*/ func_0x014905f8(*(long *)(lVar8 + 0xb0),&uStack_180);
      } while ((uVar7 & 1) != 0);
      iStack_190 = 0x76;
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
      if (iStack_190 == 0x76) {
        uStack_188 = 0;
      }
      do {
        if (((*(long *)(lVar8 + 0x88) != 0) &&
            (lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0xd0), lVar5 != 0)) {
          if (uVar3 == 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            if (iVar1 + 1 < 2) {
              return 0;
            }
            lVar5 = *(long *)(lVar8 + 0xb0);
            if (lVar5 != 0) {
              if ((*(char *)(lVar5 + 0xc6) == '\0') || (iVar1 == 7)) {
                /*Atlas.Networking.MatchMakingManager$$CreatePrivateMatch*/ func_0x0148f354(lVar5,0);
              }
              else {
                /*Atlas.Networking.MatchMakingManager$$FindPublicMatchWithGroup*/ func_0x0148f410(lVar5,0);
              }
              return 1;
            }
          }
          else {
            lVar5 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
            /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar5,0);
            uVar9 = /*STR('PLAY_FRIENDS_ROOM_AWAY_BODY')*/ uRam0000000003d70ec0;
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x28) = /*STR('PLAY_FRIENDS_ROOM_AWAY_TITLE')*/ uRam0000000003d70ec8;
              *(undefined8 *)(lVar5 + 0x30) = uVar9;
              *(undefined8 *)(lVar5 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
              if (*(long *)(lVar8 + 0xc0) != 0) {
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0xc0),lVar5,uRam0000000003d3e0e8);
                return 0;
              }
            }
          }
        }
code_r0x0158dae8:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x0158db2c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar5 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
        uVar3 = 0;
      } while (lVar5 == 0);
      func_0x00f78ac0(lVar5,0);
code_r0x0158db2c:
      lVar8 = __Unwind_Resume();
      if ((bRam0000000003eb5111 & 1) == 0) {
        func_0x00f78a20(0x3d405e8);
        bRam0000000003eb5111 = 1;
      }
      if (lVar8 != 0) {
        return lVar8;
      }
      auVar10 = func_0x00f78af4(0,uRam0000000003d405e8);
      lVar8 = auVar10._0_8_;
      *(undefined8 *)(lVar8 + 0x10) = *param_3;
      *(long *)(lVar8 + 0x20) = auVar10._8_8_;
      *(undefined8 **)(lVar8 + 0x28) = param_3;
      return lVar8;
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x158d7f4 | Atlas.Contexts.FrontEndContextMatchMakingState.StartGroupMatch
// ============================================================

long Atlas_Contexts_FrontEndContextMatchMakingState__StartGroupMatch
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  undefined1 auVar8 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  int iStack_160;
  undefined4 uStack_158;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5110 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70ec0);
    bRam0000000003eb5110 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0158dae8;
  lVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb0),0);
  if ((int)lVar5 != 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_0158dae8;
    plVar6 = *(long **)(*(long *)(param_1 + 0x80) + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_0158dae8;
    lVar5 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((int)lVar5 != 0) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_0158dae8;
      lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x28);
      if (lVar5 == 0) goto LAB_0158dae8;
      lVar5 = *(long *)(lVar5 + 0xd0);
      if (lVar5 == 0) goto LAB_0158dae8;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_1e8,lVar5,uRam0000000003d3b4c0);
      uStack_68 = uStack_180;
      uStack_70 = uStack_188;
      uStack_58 = uStack_170;
      uStack_60 = uStack_178;
      uStack_50 = uStack_168;
      uStack_a8 = uStack_1c0;
      uStack_b0 = uStack_1c8;
      uStack_98 = uStack_1b0;
      uStack_a0 = uStack_1b8;
      uStack_88 = uStack_1a0;
      uStack_90 = uStack_1a8;
      uStack_78 = uStack_190;
      uStack_80 = uStack_198;
      uStack_c8 = uStack_1e0;
      uStack_d0 = uStack_1e8;
      uStack_b8 = uStack_1d0;
      uStack_c0 = uStack_1d8;
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_d0,uRam0000000003d32b50);
        if ((uVar4 & 1) == 0) break;
        uStack_108 = uStack_78;
        uStack_110 = uStack_80;
        uStack_f8 = uStack_68;
        uStack_100 = uStack_70;
        uStack_e8 = uStack_58;
        uStack_f0 = uStack_60;
        uStack_e0 = uStack_50;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        uStack_138 = uStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        if (*(long *)(param_1 + 0xb0) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x158dae8);
          (*pcVar3)();
        }
        param_3 = (undefined8 *)0x0;
        uVar7 = /*Atlas.Networking.MatchMakingManager$$IsGroupPlayerAbleToBeginMatch*/ func_0x014905f8(*(long *)(param_1 + 0xb0),&uStack_150);
      } while ((uVar7 & 1) != 0);
      iStack_160 = 0x76;
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_d0,uRam0000000003d32b48);
      if (iStack_160 == 0x76) {
        uStack_158 = 0;
      }
      do {
        if (((*(long *)(param_1 + 0x88) != 0) &&
            (lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0xd0), lVar5 != 0)) {
          if (uVar4 == 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            if (iVar1 + 1 < 2) {
              return 0;
            }
            lVar5 = *(long *)(param_1 + 0xb0);
            if (lVar5 != 0) {
              if ((*(char *)(lVar5 + 0xc6) == '\0') || (iVar1 == 7)) {
                /*Atlas.Networking.MatchMakingManager$$CreatePrivateMatch*/ func_0x0148f354(lVar5,0);
              }
              else {
                /*Atlas.Networking.MatchMakingManager$$FindPublicMatchWithGroup*/ func_0x0148f410(lVar5,0);
              }
              return 1;
            }
          }
          else {
            lVar5 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
            /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar5,0);
            uVar2 = /*STR('PLAY_FRIENDS_ROOM_AWAY_BODY')*/ uRam0000000003d70ec0;
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x28) = /*STR('PLAY_FRIENDS_ROOM_AWAY_TITLE')*/ uRam0000000003d70ec8;
              *(undefined8 *)(lVar5 + 0x30) = uVar2;
              *(undefined8 *)(lVar5 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
              if (*(long *)(param_1 + 0xc0) != 0) {
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(param_1 + 0xc0),lVar5,uRam0000000003d3e0e8);
                return 0;
              }
            }
          }
        }
LAB_0158dae8:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x0158db2c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar5 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_d0,uRam0000000003d32b48);
        uVar4 = 0;
      } while (lVar5 == 0);
      func_0x00f78ac0(lVar5,0);
code_r0x0158db2c:
      lVar5 = __Unwind_Resume();
      if ((bRam0000000003eb5111 & 1) == 0) {
        func_0x00f78a20(0x3d405e8);
        bRam0000000003eb5111 = 1;
      }
      if (lVar5 != 0) {
        return lVar5;
      }
      auVar8 = func_0x00f78af4(0,uRam0000000003d405e8);
      lVar5 = auVar8._0_8_;
      *(undefined8 *)(lVar5 + 0x10) = *param_3;
      *(long *)(lVar5 + 0x20) = auVar8._8_8_;
      *(undefined8 **)(lVar5 + 0x28) = param_3;
      return lVar5;
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x158db30 | Atlas.Contexts.FrontEndContextMatchMakingState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextMatchMakingState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5111 & 1) == 0) {
    func_0x00f78a20(0x3d405e8);
    bRam0000000003eb5111 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405e8);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x158db84 | Atlas.Contexts.FrontEndContextMatchMakingState.<ShowLobbyScreen>b__15_0
// ============================================================

long Atlas_Contexts_FrontEndContextMatchMakingState___ShowLobbyScreen_b__15_0
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  undefined4 uStack_188;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb510f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d405f8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb510f = 1;
  }
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0x90) != '\0') || (*(char *)(lVar8 + 0xac) != '\0')) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 0x28), lVar8 != 0)) {
      if (*(char *)(lVar8 + 200) != '\0') {
        return 0;
      }
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405f8);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(lVar8 + 0x10);
        uVar4 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
        param_3 = (undefined8 *)0x0;
        Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar4,uVar9,0,0);
        uVar9 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
        lVar8 = *(long *)(param_1 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
        if (lVar8 != 0) {
          /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar8,uVar9,0,uVar4,uRam0000000003d2a5b0);
          return 1;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb5110 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4d8);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d70ec8);
    func_0x00f78a20(0x3d70ec0);
    bRam0000000003eb5110 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(lVar8 + 0xb0) == 0) goto LAB_0158dae8;
  lVar5 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar8 + 0xb0),0);
  if ((int)lVar5 != 0) {
    if (*(long *)(lVar8 + 0x80) == 0) goto LAB_0158dae8;
    plVar6 = *(long **)(*(long *)(lVar8 + 0x80) + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_0158dae8;
    lVar5 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
    if ((int)lVar5 != 0) {
      if (*(long *)(lVar8 + 0x88) == 0) goto LAB_0158dae8;
      lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28);
      if (lVar5 == 0) goto LAB_0158dae8;
      lVar5 = *(long *)(lVar5 + 0xd0);
      if (lVar5 == 0) goto LAB_0158dae8;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_218,lVar5,uRam0000000003d3b4c0);
      uStack_98 = uStack_1b0;
      uStack_a0 = uStack_1b8;
      uStack_88 = uStack_1a0;
      uStack_90 = uStack_1a8;
      uStack_80 = uStack_198;
      uStack_d8 = uStack_1f0;
      uStack_e0 = uStack_1f8;
      uStack_c8 = uStack_1e0;
      uStack_d0 = uStack_1e8;
      uStack_b8 = uStack_1d0;
      uStack_c0 = uStack_1d8;
      uStack_a8 = uStack_1c0;
      uStack_b0 = uStack_1c8;
      uStack_f8 = uStack_210;
      uStack_100 = uStack_218;
      uStack_e8 = uStack_200;
      uStack_f0 = uStack_208;
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_100,uRam0000000003d32b50);
        if ((uVar3 & 1) == 0) break;
        uStack_138 = uStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_110 = uStack_80;
        uStack_178 = uStack_e8;
        uStack_180 = uStack_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        uStack_158 = uStack_c8;
        uStack_160 = uStack_d0;
        uStack_148 = uStack_b8;
        uStack_150 = uStack_c0;
        if (*(long *)(lVar8 + 0xb0) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x158dae8);
          (*pcVar2)();
        }
        param_3 = (undefined8 *)0x0;
        uVar7 = /*Atlas.Networking.MatchMakingManager$$IsGroupPlayerAbleToBeginMatch*/ func_0x014905f8(*(long *)(lVar8 + 0xb0),&uStack_180);
      } while ((uVar7 & 1) != 0);
      iStack_190 = 0x76;
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
      if (iStack_190 == 0x76) {
        uStack_188 = 0;
      }
      do {
        if (((*(long *)(lVar8 + 0x88) != 0) &&
            (lVar5 = *(long *)(*(long *)(lVar8 + 0x88) + 0x28), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0xd0), lVar5 != 0)) {
          if (uVar3 == 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            if (iVar1 + 1 < 2) {
              return 0;
            }
            lVar5 = *(long *)(lVar8 + 0xb0);
            if (lVar5 != 0) {
              if ((*(char *)(lVar5 + 0xc6) == '\0') || (iVar1 == 7)) {
                /*Atlas.Networking.MatchMakingManager$$CreatePrivateMatch*/ func_0x0148f354(lVar5,0);
              }
              else {
                /*Atlas.Networking.MatchMakingManager$$FindPublicMatchWithGroup*/ func_0x0148f410(lVar5,0);
              }
              return 1;
            }
          }
          else {
            lVar5 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
            /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(lVar5,0);
            uVar9 = /*STR('PLAY_FRIENDS_ROOM_AWAY_BODY')*/ uRam0000000003d70ec0;
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x28) = /*STR('PLAY_FRIENDS_ROOM_AWAY_TITLE')*/ uRam0000000003d70ec8;
              *(undefined8 *)(lVar5 + 0x30) = uVar9;
              *(undefined8 *)(lVar5 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
              if (*(long *)(lVar8 + 0xc0) != 0) {
                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0xc0),lVar5,uRam0000000003d3e0e8);
                return 0;
              }
            }
          }
        }
LAB_0158dae8:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x0158db2c;
        plVar6 = (long *)___cxa_begin_catch();
        lVar5 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_100,uRam0000000003d32b48);
        uVar3 = 0;
      } while (lVar5 == 0);
      func_0x00f78ac0(lVar5,0);
code_r0x0158db2c:
      lVar8 = __Unwind_Resume();
      if ((bRam0000000003eb5111 & 1) == 0) {
        func_0x00f78a20(0x3d405e8);
        bRam0000000003eb5111 = 1;
      }
      if (lVar8 != 0) {
        return lVar8;
      }
      auVar10 = func_0x00f78af4(0,uRam0000000003d405e8);
      lVar8 = auVar10._0_8_;
      *(undefined8 *)(lVar8 + 0x10) = *param_3;
      *(long *)(lVar8 + 0x20) = auVar10._8_8_;
      *(undefined8 **)(lVar8 + 0x28) = param_3;
      return lVar8;
    }
  }
  return lVar5;
}



