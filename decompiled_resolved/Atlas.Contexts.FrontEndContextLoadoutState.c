// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextLoadoutState

// ============================================================
// RVA: 0x1588b70 | Atlas.Contexts.FrontEndContextLoadoutState.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1588d20 | Atlas.Contexts.FrontEndContextLoadoutState.add_OnBackPressed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1588dc0 | Atlas.Contexts.FrontEndContextLoadoutState.add_OnKartSelected
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1588e60 | Atlas.Contexts.FrontEndContextLoadoutState.add_TryFixLoadout
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158a074 | Atlas.Contexts.FrontEndContextLoadoutState.remove_OnBackPressed
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextLoadoutState__remove_OnBackPressed
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
  ulong uStack_1b0;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb50f7 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb50f7 = 1;
  }
  puVar23 = (ulong *)(param_1 + 0x80);
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
  puStack_38 = &Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50f5 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb50f5 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar25,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar18 = auVar33._8_8_;
  uStack_90 = 0x3d1b420;
  puStack_68 = &Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb50f9 & 1) == 0) {
    func_0x00f78a20(0x3d1b4a0);
    bRam0000000003eb50f9 = 1;
  }
  puVar23 = (ulong *)(auVar33._0_8_ + 0x88);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,uVar18,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar25 = auVar33._8_8_;
  uStack_c0 = 0x3d1b4a0;
  puStack_98 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb5130 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5130 = 1;
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
  uStack_f0 = 0x3d1b6e0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
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
  puStack_f8 = &Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_118 = uVar17;
  puStack_110 = puVar23;
  uStack_108 = uVar18;
  ppppuStack_100 = &ppppuStack_d0;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
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
  puStack_128 = &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_148 = uVar17;
  puStack_140 = puVar23;
  uStack_138 = uVar25;
  ppppuStack_130 = &ppppuStack_100;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
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
  puStack_158 = &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_178 = uVar17;
  puStack_170 = puVar23;
  uStack_168 = uVar18;
  ppppuStack_160 = &ppppuStack_130;
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
  puVar3 = &uStack_1b0;
  uStack_1b0 = 0x3d1b6e0;
  puStack_188 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_1a8 = uVar17;
  puStack_1a0 = puVar23;
  uStack_198 = uVar25;
  ppppuStack_190 = &ppppuStack_160;
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
    pppppuVar27 = &ppppuStack_190;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_1a0;
    auVar1._0_8_ = uStack_198;
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
        auVar34._8_8_ = puStack_1a0;
        auVar34._0_8_ = uStack_198;
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
        puVar4 = &uStack_180;
        uVar17 = uStack_1a8;
        uVar24 = uStack_1b0;
        pppppuVar27 = (undefined8 *****)ppppuStack_190;
        puVar28 = puStack_188;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_180;
    uVar9 = param_4;
    uVar17 = uStack_1a8;
    uVar24 = uStack_1b0;
    pppppuVar27 = (undefined8 *****)ppppuStack_190;
    puVar28 = puStack_188;
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
// RVA: 0x158a114 | Atlas.Contexts.FrontEndContextLoadoutState.remove_OnKartSelected
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextLoadoutState__remove_OnKartSelected
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
  ulong uStack_180;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb50f5 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb50f5 = 1;
  }
  puVar23 = (ulong *)(param_1 + 0x78);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,param_2,0), plVar8 == (long *)0x0 ||
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
  uStack_60 = 0x3d1b420;
  puStack_38 = &Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
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
  uStack_90 = 0x3d1b4a0;
  puStack_68 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = &puStack_40;
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
  uStack_c0 = 0x3d1b6e0;
  puStack_98 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
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
  uStack_f0 = 0x3d1b6e0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
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
  uStack_120 = 0x3d1b6e0;
  puStack_f8 = &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_118 = uVar17;
  puStack_110 = puVar23;
  uStack_108 = uVar18;
  ppppuStack_100 = &ppppuStack_d0;
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
  uStack_150 = 0x3d1b6e0;
  puStack_128 = &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_148 = uVar17;
  puStack_140 = puVar23;
  uStack_138 = uVar25;
  ppppuStack_130 = &ppppuStack_100;
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
  puVar3 = &uStack_180;
  uStack_180 = 0x3d1b6e0;
  puStack_158 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_178 = uVar17;
  puStack_170 = puVar23;
  uStack_168 = uVar18;
  ppppuStack_160 = &ppppuStack_130;
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
    pppppuVar27 = &ppppuStack_160;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_170;
    auVar1._0_8_ = uStack_168;
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
        auVar34._8_8_ = puStack_170;
        auVar34._0_8_ = uStack_168;
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
        puVar4 = &uStack_150;
        uVar17 = uStack_178;
        uVar24 = uStack_180;
        pppppuVar27 = (undefined8 *****)ppppuStack_160;
        puVar28 = puStack_158;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_150;
    uVar9 = param_4;
    uVar17 = uStack_178;
    uVar24 = uStack_180;
    pppppuVar27 = (undefined8 *****)ppppuStack_160;
    puVar28 = puStack_158;
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
// RVA: 0x158a1b4 | Atlas.Contexts.FrontEndContextLoadoutState.remove_TryFixLoadout
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextLoadoutState__remove_TryFixLoadout
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
  ulong uStack_150;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb50f9 & 1) == 0) {
    func_0x00f78a20(0x3d1b4a0);
    bRam0000000003eb50f9 = 1;
  }
  puVar23 = (ulong *)(param_1 + 0x88);
  uVar17 = *puVar23;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar17,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*System.Action<KartLoadout>_TypeInfo*/ lRam0000000003d1b4a0))) {
    uVar9 = func_0x00ff0f44(puVar23,plVar8,uVar17);
    bVar5 = uVar17 == uVar9;
    uVar17 = uVar9;
    if (bVar5) {
      return uVar9;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  uVar25 = auVar33._8_8_;
  uStack_60 = 0x3d1b4a0;
  puStack_38 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5130 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5130 = 1;
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
  uStack_90 = 0x3d1b6e0;
  puStack_68 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
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
  uStack_c0 = 0x3d1b6e0;
  puStack_98 = &Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb512b & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb512b = 1;
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
  uStack_f0 = 0x3d1b6e0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb5140 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5140 = 1;
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
  puStack_f8 = &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_118 = uVar17;
  puStack_110 = puVar23;
  uStack_108 = uVar18;
  ppppuStack_100 = &ppppuStack_d0;
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
  puVar3 = &uStack_150;
  uStack_150 = 0x3d1b6e0;
  puStack_128 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_148 = uVar17;
  puStack_140 = puVar23;
  uStack_138 = uVar25;
  ppppuStack_130 = &ppppuStack_100;
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
    pppppuVar27 = &ppppuStack_130;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_140;
    auVar1._0_8_ = uStack_138;
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
        auVar34._8_8_ = puStack_140;
        auVar34._0_8_ = uStack_138;
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
        puVar4 = &uStack_120;
        uVar17 = uStack_148;
        uVar24 = uStack_150;
        pppppuVar27 = (undefined8 *****)ppppuStack_130;
        puVar28 = puStack_128;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_120;
    uVar9 = param_4;
    uVar17 = uStack_148;
    uVar24 = uStack_150;
    pppppuVar27 = (undefined8 *****)ppppuStack_130;
    puVar28 = puStack_128;
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
// RVA: 0x158b788 | Atlas.Contexts.FrontEndContextLoadoutState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// ============================================================
// RVA: 0x158b794 | Atlas.Contexts.FrontEndContextLoadoutState.OnEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158bb3c | Atlas.Contexts.FrontEndContextLoadoutState.ShowCharacterSelect
// ============================================================

/* WARNING: Possible PIC construction at 0x0158bd54: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x0158bd58) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextLoadoutState__ShowCharacterSelect(dword *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  int iVar14;
  dword *pdVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int iVar15;
  dword *pdVar24;
  long *extraout_x1;
  dword *pdVar25;
  long *plVar26;
  dword *pdVar27;
  dword *pdVar28;
  undefined8 uVar29;
  int *piVar30;
  uint uVar31;
  dword *pdVar32;
  long lVar33;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar34;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar35;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar36;
  undefined *puVar37;
  undefined4 extraout_s0;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  
  puVar6 = &stack0xffffffffffffffb0;
  lVar33 = 0x3d56bc8;
  if ((bRam0000000003eb50fd & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d26c38);
    func_0x00f78a20(0x3d26c40);
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d56b90);
    func_0x00f78a20(0x3d56bb0);
    func_0x00f78a20(0x3d56bc8);
    func_0x00f78a20(0x3d56bd0);
    func_0x00f78a20(0x3d405e0);
    func_0x00f78a20(0x3d26c48);
    bRam0000000003eb50fd = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.TransitionData_TypeInfo*/ uRam0000000003d26c48);
  /*Atlas.UI.Screens.CharacterSelectScreen.TransitionData$$.ctor*/ func_0x0154a334(pdVar16,0);
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected_TypeInfo*/ uRam0000000003d26c38);
  /*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected$$.ctor*/ func_0x01549d58(lVar17,param_1,uRam0000000003d56bc8,0);
  uVar19 = 0x3d26c38;
  if (pdVar16 == (dword *)0x0) {
LAB_0158bd74:
    lVar20 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_FrontEndContextLoadoutState__ShowKartSelect;
    lVar18 = 0x3d27d68;
    uStack_90 = unaff_x24;
    lStack_88 = lVar33;
    uStack_80 = uVar19;
    lStack_78 = lVar17;
    pdStack_70 = pdVar16;
    pdStack_68 = param_1;
    pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb5102 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d27d58);
      func_0x00f78a20(0x3d56ba0);
      func_0x00f78a20(0x3d56ba8);
      func_0x00f78a20(0x3d56bb0);
      func_0x00f78a20(0x3d27d60);
      func_0x00f78a20(0x3d27d68);
      bRam0000000003eb5102 = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.TransitionData_TypeInfo*/ uRam0000000003d27d68);
    /*Atlas.UI.Screens.KartSelectScreen.TransitionData$$.ctor*/ func_0x0155ab20(pdVar16,0);
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27d58);
    lVar33 = lRam0000000003d56ba8;
    /*Atlas.UI.Screens.KartSelectScreen.ContinueSelected$$.ctor*/ func_0x0155a7a8(lVar17,lVar20,lRam0000000003d56ba8,0);
    if (pdVar16 != (dword *)0x0) {
      lVar18 = 0x3d29000;
      unaff_x24 = 0x3d56000;
      *(long *)(pdVar16 + 4) = lVar17;
      lVar33 = func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.LoadoutTypeSelected_TypeInfo*/ uRam0000000003d27d60);
      /*Atlas.UI.Screens.KartSelectScreen.LoadoutTypeSelected$$.ctor*/ func_0x0155aa20(lVar33,lVar20,uRam0000000003d56bb0,0);
      *(long *)(pdVar16 + 6) = lVar33;
      lVar17 = *(long *)(lVar20 + 0x98);
      lVar21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      lVar33 = lRam0000000003d56ba0;
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar21,lVar20,lRam0000000003d56ba0,0);
      if (lVar17 != 0) {
        lVar18 = 0x3d1feb8;
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar17,0,lVar21,0);
        param_1 = *(dword **)(lVar20 + 0x90);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar33 = lVar21;
        if (param_1 != (dword *)0x0) {
          pdVar24 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58);
          puVar6 = &stack0xffffffffffffffb0;
          pdVar32 = pdStack_68;
          pdVar28 = pdStack_70;
          lVar17 = lStack_78;
          uVar19 = uStack_80;
          lVar33 = lStack_88;
          unaff_x24 = uStack_90;
          pppppppuVar36 = pppppppuStack_60;
          puVar37 = puStack_58;
          goto code_r0x0147079c;
        }
      }
    }
    pdVar16 = (dword *)func_0x00f78af4();
    puStack_98 = &Atlas_Contexts_FrontEndContextLoadoutState__OnExit;
    pdVar24 = (dword *)0x3eb5000;
    pppppppuStack_a0 = &pppppppuStack_60;
    if ((bRam0000000003eb50fc & 1) == 0) {
      func_0x00f78a20(0x3d2a168);
      func_0x00f78a20(0x3d1b4b8);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bb8);
      func_0x00f78a20(0x3d56bd8);
      func_0x00f78a20(0x3d405d8);
      bRam0000000003eb50fc = 1;
    }
    pdVar32 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(pdVar16,uRam0000000003d405d8);
    if (pdVar32 == (dword *)0x0) {
code_r0x0158c0bc:
      func_0x00f78af4();
    }
    else {
      if (*(char *)(pdVar32 + 0x24) == '\0') {
        return pdVar32;
      }
      if ((*(long *)(pdVar16 + 0x32) == 0) ||
         (lVar18 = *(long *)(*(long *)(pdVar16 + 0x32) + 0x30), lVar18 == 0)) goto code_r0x0158c0bc;
      unaff_x24 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      pdVar24 = *(dword **)(lVar18 + 0x68);
      lVar17 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(lVar17,pdVar16,uRam0000000003d56bb8,uRam0000000003d2a168);
      lVar33 = 0;
      plVar26 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pdVar24,lVar17);
      if ((plVar26 == (long *)0x0) || (*plVar26 == /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) {
        *(long **)(lVar18 + 0x68) = plVar26;
        lVar18 = *(long *)(pdVar16 + 0x34);
        if (lVar18 != 0) {
          unaff_x24 = 0x3d1fa78;
          unaff_x25 = 0x3d56000;
          pdVar24 = *(dword **)(lVar18 + 0x10);
          lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar17,pdVar16,uRam0000000003d56bd8,0);
          lVar33 = 0;
          plVar26 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(pdVar24,lVar17);
          if ((plVar26 != (long *)0x0) && (*plVar26 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x0158c0c0;
          *(long **)(lVar18 + 0x10) = plVar26;
          pdVar32 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(pdVar16,uRam0000000003d405d8);
          if (pdVar32 != (dword *)0x0) {
            *(undefined1 *)(pdVar32 + 0x24) = 0;
            return pdVar32;
          }
        }
        goto code_r0x0158c0bc;
      }
    }
code_r0x0158c0c0:
    lVar20 = func_0x00f78e5c();
    uStack_110 = 0x3d405d8;
    puStack_e8 = &Atlas_Contexts_FrontEndContextLoadoutState__ShowRankRewardScreen;
    uStack_120 = unaff_x24;
    lStack_118 = lVar18;
    lStack_108 = lVar17;
    pdStack_100 = pdVar24;
    pdStack_f8 = pdVar16;
    pppppppuStack_f0 = &pppppppuStack_a0;
    if ((bRam0000000003eb50fe & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56bc0);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d26c00);
      bRam0000000003eb50fe = 1;
    }
    pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
    /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar16,0);
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d405d8);
    if ((lVar17 != 0) && (pdVar16 != (dword *)0x0)) {
      lVar18 = *(long *)(lVar17 + 0x18);
      lVar33 = *(long *)(lVar17 + 0x10);
      lVar39 = *(long *)(lVar17 + 0x28);
      lVar21 = *(long *)(lVar17 + 0x20);
      lVar41 = *(long *)(lVar17 + 0x30);
      lVar46 = *(long *)(lVar17 + 0x48);
      lVar44 = *(long *)(lVar17 + 0x40);
      *(long *)(pdVar16 + 0xe) = *(long *)(lVar17 + 0x38);
      *(long *)(pdVar16 + 0xc) = lVar41;
      *(long *)(pdVar16 + 0x12) = lVar46;
      *(long *)(pdVar16 + 0x10) = lVar44;
      *(long *)(pdVar16 + 6) = lVar18;
      *(long *)(pdVar16 + 4) = lVar33;
      *(long *)(pdVar16 + 10) = lVar39;
      *(long *)(pdVar16 + 8) = lVar21;
      lVar18 = *(long *)(lVar20 + 0x98);
      lVar17 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      lVar33 = lRam0000000003d56bc0;
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar17,lVar20,lRam0000000003d56bc0,0);
      if (lVar18 != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar18,0,lVar17,0);
        param_1 = *(dword **)(lVar20 + 0x90);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar33 = lVar17;
        if (param_1 != (dword *)0x0) {
          pdVar24 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
          puVar6 = &stack0xffffffffffffff20;
          pdVar32 = pdStack_f8;
          pdVar28 = pdStack_100;
          lVar17 = lStack_108;
          uVar19 = uStack_110;
          lVar33 = lStack_118;
          unaff_x24 = uStack_120;
          pppppppuVar36 = pppppppuStack_f0;
          puVar37 = puStack_e8;
          goto code_r0x0147079c;
        }
      }
    }
    auVar47 = func_0x00f78af4();
    lVar17 = auVar47._0_8_;
    puStack_128 = &Atlas_Contexts_FrontEndContextLoadoutState__OnLoadoutTypeSelected;
    pppppppuVar36 = &pppppppuStack_130;
    pppppppuStack_130 = &pppppppuStack_f0;
    if ((bRam0000000003eb50ff & 1) == 0) {
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb50ff = 1;
    }
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    switch(auVar47._8_8_ & 0xffffffff) {
    case 0:
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 == 0) goto code_r0x0158c438;
      *(long *)(lVar18 + 0x10) = lVar33;
      break;
    case 1:
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 == 0) goto code_r0x0158c438;
      *(long *)(lVar18 + 0x18) = lVar33;
      break;
    case 2:
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 == 0) goto code_r0x0158c438;
      *(long *)(lVar18 + 0x20) = lVar33;
      break;
    case 3:
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 == 0) goto code_r0x0158c438;
      *(long *)(lVar18 + 0x28) = lVar33;
      break;
    case 4:
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 == 0) goto code_r0x0158c438;
      *(long *)(lVar18 + 0x30) = lVar33;
    }
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405e0);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
      pdVar16 = (dword *)/*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
      if ((int)pdVar16 == 0) {
        return pdVar16;
      }
      lVar33 = 0x3d405d8;
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
      if (lVar18 != 0) {
        uStack_1d8 = *(undefined8 *)(lVar18 + 0x18);
        uStack_1e0 = *(undefined8 *)(lVar18 + 0x10);
        uStack_1c8 = *(undefined8 *)(lVar18 + 0x28);
        uStack_1d0 = *(undefined8 *)(lVar18 + 0x20);
        uStack_1b8 = *(undefined8 *)(lVar18 + 0x38);
        uStack_1c0 = *(undefined8 *)(lVar18 + 0x30);
        uStack_1a8 = *(undefined8 *)(lVar18 + 0x48);
        uStack_1b0 = *(undefined8 *)(lVar18 + 0x40);
        pdVar16 = (dword *)Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked
                                     (&uStack_1e0,*(undefined8 *)(lVar17 + 0xb0),0);
        if ((int)pdVar16 == 0) {
          return pdVar16;
        }
        lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
        if (lVar18 != 0) {
          uStack_298 = *(undefined8 *)(lVar18 + 0x18);
          uStack_2a0 = *(undefined8 *)(lVar18 + 0x10);
          uStack_288 = *(undefined8 *)(lVar18 + 0x28);
          uStack_290 = *(undefined8 *)(lVar18 + 0x20);
          uStack_278 = *(undefined8 *)(lVar18 + 0x38);
          uStack_280 = *(undefined8 *)(lVar18 + 0x30);
          uStack_268 = *(undefined8 *)(lVar18 + 0x48);
          uStack_270 = *(undefined8 *)(lVar18 + 0x40);
          uStack_220 = uStack_2a0;
          uStack_218 = uStack_298;
          uStack_210 = uStack_290;
          uStack_208 = uStack_288;
          uStack_200 = uStack_280;
          uStack_1f8 = uStack_278;
          uStack_1f0 = uStack_270;
          uStack_1e8 = uStack_268;
          Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                    (&uStack_260,&uStack_2a0,*(undefined8 *)(lVar17 + 0xa0),0);
          uStack_2d8 = uStack_258;
          uStack_2e0 = uStack_260;
          uStack_2c8 = uStack_248;
          uStack_2d0 = uStack_250;
          uStack_2b8 = uStack_238;
          uStack_2c0 = uStack_240;
          uStack_2a8 = uStack_228;
          uStack_2b0 = uStack_230;
          /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_1a0,&uStack_2e0,0);
          if ((*(long *)(lVar17 + 0xc0) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x28), lVar17 != 0)) {
            uStack_318 = uStack_198;
            uStack_320 = uStack_1a0;
            uStack_308 = uStack_188;
            uStack_310 = uStack_190;
            uStack_2f8 = uStack_178;
            uStack_300 = uStack_180;
            uStack_2e8 = uStack_168;
            uStack_2f0 = uStack_170;
            pdVar16 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar17,&uStack_320,0);
            return pdVar16;
          }
        }
      }
    }
code_r0x0158c438:
    puVar37 = &Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted;
    lVar17 = func_0x00f78af4();
    puVar22 = &uStack_320;
    do {
      *(undefined8 *)((long)puVar22 + -0x30) = 0x3eb5000;
      *(long *)((long)puVar22 + -0x28) = auVar47._8_8_;
      *(long *)((long)puVar22 + -0x20) = lVar33;
      *(long *)((long)puVar22 + -0x18) = auVar47._0_8_;
      *(undefined8 ********)((long)puVar22 + -0x10) = pppppppuVar36;
      *(undefined **)((long)puVar22 + -8) = puVar37;
      pppppppuVar36 = (undefined8 *******)((long)puVar22 + -0x10);
      if ((bRam0000000003eb5104 & 1) == 0) {
        func_0x00f78a20(0x3d2a040);
        func_0x00f78a20(0x3d2a140);
        func_0x00f78a20(0x3d405d8);
        func_0x00f78a20(0x3d405e0);
        bRam0000000003eb5104 = 1;
      }
      auVar47._8_8_ = 0x3d405d8;
      auVar47._0_8_ = lVar17;
      lVar33 = *(long *)(lVar17 + 0x88);
      if (lVar33 == 0) {
code_r0x0158c4e4:
        lVar33 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
        if (*(long *)(lVar17 + 0xb8) != 0) {
          uVar19 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar17 + 0xb8),0);
          Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)puVar22 + -0x70),uVar19,0);
          if (lVar33 != 0) {
            uVar40 = *(undefined8 *)((long)puVar22 + -0x48);
            uVar38 = *(undefined8 *)((long)puVar22 + -0x50);
            uVar29 = *(undefined8 *)((long)puVar22 + -0x38);
            uVar19 = *(undefined8 *)((long)puVar22 + -0x40);
            uVar45 = *(undefined8 *)((long)puVar22 + -0x70);
            uVar43 = *(undefined8 *)((long)puVar22 + -0x58);
            uVar42 = *(undefined8 *)((long)puVar22 + -0x60);
            *(undefined8 *)(lVar33 + 0x18) = *(undefined8 *)((long)puVar22 + -0x68);
            *(undefined8 *)(lVar33 + 0x10) = uVar45;
            *(undefined8 *)(lVar33 + 0x28) = uVar43;
            *(undefined8 *)(lVar33 + 0x20) = uVar42;
            *(undefined8 *)(lVar33 + 0x38) = uVar40;
            *(undefined8 *)(lVar33 + 0x30) = uVar38;
            *(undefined8 *)(lVar33 + 0x48) = uVar29;
            *(undefined8 *)(lVar33 + 0x40) = uVar19;
            lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405e0);
            if (lVar18 != 0) {
              lVar33 = *(long *)(lVar18 + 0x18);
              lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
              if ((lVar18 != 0) && (lVar33 != 0)) {
                uVar29 = *(undefined8 *)(lVar18 + 0x18);
                uVar19 = *(undefined8 *)(lVar18 + 0x10);
                uVar40 = *(undefined8 *)(lVar18 + 0x28);
                uVar38 = *(undefined8 *)(lVar18 + 0x20);
                uVar42 = *(undefined8 *)(lVar18 + 0x30);
                uVar45 = *(undefined8 *)(lVar18 + 0x48);
                uVar43 = *(undefined8 *)(lVar18 + 0x40);
                *(undefined8 *)(lVar33 + 0x58) = *(undefined8 *)(lVar18 + 0x38);
                *(undefined8 *)(lVar33 + 0x50) = uVar42;
                *(undefined8 *)(lVar33 + 0x68) = uVar45;
                *(undefined8 *)(lVar33 + 0x60) = uVar43;
                *(undefined8 *)(lVar33 + 0x38) = uVar29;
                *(undefined8 *)(lVar33 + 0x30) = uVar19;
                *(undefined8 *)(lVar33 + 0x48) = uVar40;
                *(undefined8 *)(lVar33 + 0x40) = uVar38;
                pdVar16 = (dword *)0x0;
                if (*(long *)(lVar17 + 0x78) != 0) {
                  pdVar16 = (dword *)/*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar17 + 0x78),lVar33,
                                                     uRam0000000003d2a040);
                }
                return pdVar16;
              }
            }
          }
        }
      }
      else {
        lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
        if (lVar18 != 0) {
          uVar19 = *(undefined8 *)(lVar18 + 0x50);
          uVar38 = *(undefined8 *)(lVar18 + 0x68);
          uVar29 = *(undefined8 *)(lVar18 + 0x60);
          *(undefined8 *)((long)puVar22 + -0x68) = *(undefined8 *)(lVar18 + 0x58);
          *(undefined8 *)((long)puVar22 + -0x70) = uVar19;
          *(undefined8 *)((long)puVar22 + -0x58) = uVar38;
          *(undefined8 *)((long)puVar22 + -0x60) = uVar29;
          uVar19 = *(undefined8 *)(lVar18 + 0x70);
          uVar38 = *(undefined8 *)(lVar18 + 0x88);
          uVar29 = *(undefined8 *)(lVar18 + 0x80);
          *(undefined8 *)((long)puVar22 + -0x48) = *(undefined8 *)(lVar18 + 0x78);
          *(undefined8 *)((long)puVar22 + -0x50) = uVar19;
          *(undefined8 *)((long)puVar22 + -0x38) = uVar38;
          *(undefined8 *)((long)puVar22 + -0x40) = uVar29;
          /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar33,(undefined1 *)((long)puVar22 + -0x70),uRam0000000003d2a140);
          goto code_r0x0158c4e4;
        }
      }
      puVar37 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
      lVar17 = func_0x00f78af4();
      puVar22 = (undefined8 *)((long)puVar22 + -0x70);
    } while( true );
  }
  lVar33 = 0x3d56000;
  unaff_x24 = 0x3d56000;
  unaff_x25 = 0x3d40000;
  *(long *)(pdVar16 + 4) = lVar17;
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected_TypeInfo*/ uRam0000000003d26c40);
  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$.ctor*/ func_0x01549fd0(lVar17,param_1,uRam0000000003d56bb0,0);
  *(long *)(pdVar16 + 6) = lVar17;
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected_TypeInfo*/ uRam0000000003d26c38);
  /*Atlas.UI.Screens.CharacterSelectScreen.ButtonSelected$$.ctor*/ func_0x01549d58(lVar17,param_1,uRam0000000003d56bd0,0);
  *(long *)(pdVar16 + 8) = lVar17;
  lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
  if ((lVar18 == 0) || (uVar19 = 0x3d26c38, *(long *)(lVar18 + 0x18) == 0)) goto LAB_0158bd74;
  lVar33 = 0x3d56b90;
  lVar18 = *(long *)(*(long *)(lVar18 + 0x18) + 0x70);
  lVar17 = 0;
  if (lVar18 != 0) {
    lVar17 = *(long *)(lVar18 + 0x50);
  }
  *(long *)(pdVar16 + 10) = lVar17;
  lVar17 = *(long *)(param_1 + 0x26);
  uVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar19,param_1,uRam0000000003d56b90,0);
  if (lVar17 == 0) goto LAB_0158bd74;
  lVar33 = 0x3d1feb8;
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar17,0,uVar19,0);
  param_1 = *(dword **)(param_1 + 0x24);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_1 == (dword *)0x0) goto LAB_0158bd74;
  pdVar24 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x50);
  pdVar32 = param_1;
  pdVar28 = pdVar16;
  lVar33 = 0x3d1feb8;
  pppppppuVar36 = (undefined8 *******)&stack0xfffffffffffffff0;
  puVar37 = (undefined *)0x158bd58;
code_r0x0147079c:
  uVar29 = 0;
  pdVar27 = (dword *)0x0;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(long *)(puVar6 + -0x38) = lVar33;
  *(undefined8 *)(puVar6 + -0x30) = uVar19;
  *(long *)(puVar6 + -0x28) = lVar17;
  *(dword **)(puVar6 + -0x20) = pdVar28;
  *(dword **)(puVar6 + -0x18) = pdVar32;
  *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar36;
  *(undefined **)(puVar6 + -8) = puVar37;
  puVar35 = puVar6 + -0x10;
  pdVar32 = (dword *)0x0;
  pdVar28 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)(puVar6 + -0x48) = 0;
  lVar33 = *(long *)(param_1 + 4);
  if (lVar33 != 0) {
    pdVar27 = (dword *)0x0;
    uVar29 = 0;
    puVar37 = &UNK_01470820;
    pdVar25 = pdVar24;
    pdVar28 = pdVar16;
code_r0x02f87f38:
    *(undefined8 *)(puVar6 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar6 + -0x88) = 0x3eb4000;
    *(undefined8 *)(puVar6 + -0x80) = 0;
    *(dword **)(puVar6 + -0x78) = pdVar16;
    *(dword **)(puVar6 + -0x70) = param_1;
    *(dword **)(puVar6 + -0x68) = pdVar24;
    *(undefined1 **)(puVar6 + -0x60) = puVar35;
    *(undefined **)(puVar6 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)(puVar6 + -0x130) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x128) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x120) = 0x3ebc000;
    *(dword **)(puVar6 + -0x118) = pdVar25;
    *(dword **)(puVar6 + -0x110) = pdVar28;
    *(undefined8 *)(puVar6 + -0x108) = uVar29;
    *(long *)(puVar6 + -0x100) = lVar33;
    *(dword **)(puVar6 + -0xf8) = pdVar27;
    *(undefined1 **)(puVar6 + -0xf0) = puVar6 + -0x60;
    *(undefined **)(puVar6 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar17 = *(long *)(lVar33 + 0x78);
    if (lVar17 != 0) {
      iVar15 = *(int *)(lVar17 + 0x18);
      if (iVar15 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar17 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar17 == 0) break;
        uVar23 = /*System.String$$Equals*/ func_0x029caa48(lVar17,pdVar25,5,0);
        if ((uVar23 & 1) != 0) {
          return pdVar16;
        }
        pdVar16 = (dword *)(ulong)(iVar14 < iVar15);
        if (iVar15 == iVar14) {
          return pdVar16;
        }
        lVar17 = *(long *)(lVar33 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar17 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar47 = func_0x00f78af4();
  pdVar25 = auVar47._8_8_;
  *(undefined1 **)(puVar6 + -0x60) = puVar35;
  *(undefined **)(puVar6 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar33 != 0) {
    puVar35 = *(undefined1 **)(puVar6 + -0x60);
    puVar37 = *(undefined **)(puVar6 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar47 = func_0x00f78af4();
  uVar19 = auVar47._8_8_;
  *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x60;
  *(undefined **)(puVar6 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar33 != 0) {
    pdVar27 = (dword *)0x0;
    *(undefined8 *)(puVar6 + -0x90) = 0;
    *(dword **)(puVar6 + -0x88) = pdVar16;
    *(dword **)(puVar6 + -0x80) = param_1;
    *(dword **)(puVar6 + -0x78) = pdVar24;
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar17 = *(long *)(lVar33 + 0x70);
    if (lVar17 != 0) {
      lVar18 = lVar17;
      if (*(uint *)(lVar17 + 0x18) <= auVar47._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar18 = *(long *)(lVar33 + 0x70);
      }
      if (lVar18 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar47._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar17 + 0x28);
        uVar29 = *(undefined8 *)(lVar17 + 0x20);
        uVar2 = *(undefined4 *)(lVar17 + 0x42);
        *(undefined4 *)(puVar6 + -0xd8) = uVar2;
        uVar5 = *(undefined2 *)(lVar17 + 0x46);
        *(undefined2 *)(puVar6 + -0xd4) = uVar5;
        *(undefined8 *)(puVar6 + -200) = uVar38;
        *(undefined8 *)(puVar6 + -0xd0) = uVar29;
        *(undefined8 *)(puVar6 + -0xb8) = uVar38;
        *(undefined8 *)(puVar6 + -0xc0) = uVar29;
        *(undefined8 *)(puVar6 + -0xb0) = 0;
        *(undefined8 *)(puVar6 + -0xa8) = 0;
        *(undefined2 *)(puVar6 + -0xa0) = 1;
        *(undefined4 *)(puVar6 + -0x9e) = uVar2;
        *(undefined2 *)(puVar6 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,uVar19,puVar6 + -0xc0,uRam0000000003d3ddd0);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,uVar19);
        return pdVar16;
      }
    }
    auVar47 = func_0x00f78af4();
    pdVar25 = auVar47._8_8_;
    puVar12 = puVar6 + -0x110;
    *(undefined8 *)(puVar6 + -0x110) = 0;
    *(long *)(puVar6 + -0x108) = lVar17;
    *(long *)(puVar6 + -0x100) = lVar33;
    *(undefined8 *)(puVar6 + -0xf8) = uVar19;
    *(undefined1 **)(puVar6 + -0xf0) = puVar6 + -0x70;
    *(undefined **)(puVar6 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar35 = puVar6 + -0xf0;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar33 = *(long *)(auVar47._0_8_ + 0x70);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= auVar47._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar47._8_4_ * 0x28 + 0x28);
      if (lVar33 == 0) {
        pdVar16 = (dword *)0x0;
      }
      else {
        pdVar16 = *(dword **)(lVar33 + 0x40);
      }
      return pdVar16;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar24 = (dword *)func_0x00f78af4();
    param_1 = (dword *)0x0;
    pdVar16 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar47 = func_0x00f78af4();
  pdVar25 = auVar47._8_8_;
  *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x70;
  *(undefined **)(puVar6 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  auVar48._8_8_ = pdVar16;
  auVar48._0_8_ = lVar33;
  if (lVar33 != 0) {
    pdVar27 = (dword *)0x0;
    puVar7 = puVar6 + -0x70;
    puVar35 = *(undefined1 **)(puVar6 + -0x80);
    puVar37 = *(undefined **)(puVar6 + -0x78);
    pdVar16 = param_1;
    goto code_r0x02f877a8;
  }
  auVar47 = func_0x00f78af4();
  *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x80;
  *(undefined **)(puVar6 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  auVar48._8_8_ = auVar47._8_8_;
  auVar48._0_8_ = lVar33;
  if (lVar33 != 0) {
    puVar8 = puVar6 + -0x80;
    puVar35 = *(undefined1 **)(puVar6 + -0x90);
    puVar37 = *(undefined **)(puVar6 + -0x88);
    pdVar25 = pdVar27;
    while( true ) {
      puVar7 = puVar8 + -0x30;
      *(dword **)(puVar8 + -0x30) = pdVar32;
      *(dword **)(puVar8 + -0x28) = pdVar16;
      *(dword **)(puVar8 + -0x20) = param_1;
      *(dword **)(puVar8 + -0x18) = pdVar24;
      *(undefined1 **)(puVar8 + -0x10) = puVar35;
      *(undefined **)(puVar8 + -8) = puVar37;
      puVar35 = puVar8 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar27 = pdVar25;
      pdVar24 = pdVar28;
      pdVar16 = pdVar25;
      pdVar32 = auVar48._0_8_;
code_r0x02f877a8:
      param_1 = auVar48._0_8_;
      puVar12 = puVar7 + -0x60;
      *(dword **)(puVar7 + -0x30) = pdVar32;
      *(long *)(puVar7 + -0x28) = auVar48._8_8_;
      *(dword **)(puVar7 + -0x20) = pdVar16;
      *(dword **)(puVar7 + -0x18) = pdVar24;
      *(undefined1 **)(puVar7 + -0x10) = puVar35;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar35 = puVar7 + -0x10;
      pdVar16 = param_1;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar31 = (uint)pdVar25;
      if (((int)uVar31 < 0) || ((int)*(long *)(param_1 + 0x14) <= (int)uVar31)) {
        return pdVar16;
      }
      lVar33 = *(long *)(param_1 + 0x1c);
      if (lVar33 == 0) break;
      if (*(uint *)(lVar33 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(lVar33 + 0x10) + ((ulong)pdVar25 & 0xffffffff) * 0x28;
      pdVar32 = *(dword **)(lVar33 + 0x20);
      pdVar24 = *(dword **)(lVar33 + 0x28);
      *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar33 + 0x42);
      *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar33 + 0x46);
      if (pdVar24 == (dword *)0x0) {
        lVar33 = *(long *)(param_1 + 0x1c);
        if (lVar33 != 0) {
          *(dword **)(puVar7 + -0x58) = pdVar32;
          *(undefined8 *)(puVar7 + -0x50) = 0;
          *(undefined8 *)(puVar7 + -0x48) = 0;
          *(undefined8 *)(puVar7 + -0x40) = 0;
          *(undefined2 *)(puVar7 + -0x38) = 0;
          *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
          *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
          pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar33,pdVar25,puVar7 + -0x58,uRam0000000003d3ddd0);
          return pdVar16;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar16 = pdVar24;
code_r0x02f882d8:
      *(dword **)(puVar12 + -0x20) = param_1;
      *(dword **)(puVar12 + -0x18) = pdVar25;
      *(undefined1 **)(puVar12 + -0x10) = puVar35;
      *(undefined **)(puVar12 + -8) = puVar37;
      (**(code **)(*(long *)pdVar24 + 0x218))(pdVar24,*(undefined8 *)(*(long *)pdVar24 + 0x220));
      if (*(long *)(pdVar24 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar24 + 10),0);
        pdVar24[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar24,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*(long *)pdVar24 + 0x228))
                                     (pdVar24,*(undefined8 *)(*(long *)pdVar24 + 0x230));
        return pdVar16;
      }
      func_0x00f78af4();
      puVar8 = puVar12 + -0x40;
      *(dword **)(puVar12 + -0x40) = param_1;
      *(dword **)(puVar12 + -0x38) = pdVar24;
      *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
      *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar35 = puVar12 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar33 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar19 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar19,lVar33);
        pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar16;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar48 = func_0x00f78af4();
      pdVar25 = pdVar27;
    }
    lVar33 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
    *(dword **)(puVar7 + -0x90) = pdVar32;
    *(undefined8 *)(puVar7 + -0x88) = 0;
    *(dword **)(puVar7 + -0x80) = param_1;
    *(dword **)(puVar7 + -0x78) = pdVar25;
    *(undefined1 **)(puVar7 + -0x70) = puVar35;
    *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar19,0);
    if (0 < *(int *)(lVar33 + 0x50)) {
      iVar15 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,iVar15);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar33,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar33 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar33);
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
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar19);
    return pdVar16;
  }
  auVar47 = func_0x00f78af4();
  *(undefined1 **)(puVar6 + -0xa0) = puVar6 + -0x90;
  *(undefined **)(puVar6 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar33 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar33 == 0) {
    auVar47 = func_0x00f78af4();
    *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0xa0;
    *(undefined **)(puVar6 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar33 = *(long *)(auVar47._0_8_ + 0x10);
    auVar49._8_8_ = auVar47._8_8_;
    auVar49._0_8_ = lVar33;
    if (lVar33 != 0) {
      pdVar28 = (dword *)0x0;
      puVar9 = puVar6 + -0xa0;
      puVar35 = *(undefined1 **)(puVar6 + -0xb0);
      puVar37 = *(undefined **)(puVar6 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar47 = func_0x00f78af4();
    *(undefined1 **)(puVar6 + -0xc0) = puVar6 + -0xb0;
    *(undefined **)(puVar6 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar33 = *(long *)(auVar47._0_8_ + 0x10);
    auVar50._8_8_ = auVar47._8_8_;
    auVar50._0_8_ = lVar33;
    if (lVar33 == 0) {
      auVar47 = func_0x00f78af4();
      *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0xc0;
      *(undefined **)(puVar6 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar33 = *(long *)(auVar47._0_8_ + 0x10);
      auVar51._8_8_ = auVar47._8_8_;
      auVar51._0_8_ = lVar33;
      if (lVar33 == 0) {
        pdVar32 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar6 + -0x100) = 0;
        *(dword **)(puVar6 + -0xf8) = pdVar16;
        *(dword **)(puVar6 + -0xf0) = param_1;
        *(dword **)(puVar6 + -0xe8) = pdVar24;
        *(undefined1 **)(puVar6 + -0xe0) = puVar6 + -0xd0;
        *(undefined **)(puVar6 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar19 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar19,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar32 + 0xc) = uVar19;
        return pdVar32;
      }
      puVar11 = puVar6 + -0xc0;
      puVar35 = *(undefined1 **)(puVar6 + -0xd0);
      puVar37 = *(undefined **)(puVar6 + -200);
      goto code_r0x02f88674;
    }
    puVar10 = puVar6 + -0xb0;
    puVar35 = *(undefined1 **)(puVar6 + -0xc0);
    puVar37 = *(undefined **)(puVar6 + -0xb8);
    pdVar28 = pdVar27;
    pdVar32 = pdVar16;
  }
  else {
    pdVar28 = (dword *)0x0;
    puVar9 = puVar6 + -0xc0;
    *(undefined8 *)(puVar6 + -0xc0) = 0;
    *(dword **)(puVar6 + -0xb8) = pdVar16;
    *(dword **)(puVar6 + -0xb0) = param_1;
    *(dword **)(puVar6 + -0xa8) = pdVar24;
    *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xa0);
    *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(puVar6 + -0x98);
    puVar35 = puVar6 + -0xa0;
    pdVar16 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar31 = auVar47._8_4_;
    if (((int)uVar31 < 0) || (*(int *)(lVar33 + 0x50) <= (int)uVar31)) {
      return (dword *)0x0;
    }
    lVar33 = *(long *)(lVar33 + 0x70);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar33 + 0x10) + ((ulong)auVar47._8_8_ & 0xffffffff) * 0x28;
      lVar33 = *(long *)(lVar17 + 0x28);
      cVar3 = *(char *)(lVar17 + 0x40);
      iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
      if (iVar15 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar33 != 0) && (*(int *)(lVar33 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar49 = func_0x00f78af4();
    param_1 = (dword *)0x0;
    pdVar24 = auVar47._8_8_;
code_r0x02f884dc:
    puVar10 = puVar9 + -0x30;
    *(undefined8 *)(puVar9 + -0x30) = 0;
    *(dword **)(puVar9 + -0x28) = pdVar16;
    *(dword **)(puVar9 + -0x20) = param_1;
    *(dword **)(puVar9 + -0x18) = pdVar24;
    *(undefined1 **)(puVar9 + -0x10) = puVar35;
    *(undefined **)(puVar9 + -8) = puVar37;
    puVar35 = puVar9 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar33 = *(long *)(auVar49._0_8_ + 0x70);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= auVar49._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar49._8_4_ * 0x28 + 0x28);
      if (lVar33 == 0) {
        pdVar16 = &MACH_HEADER.cputype;
      }
      else {
        pdVar16 = (dword *)(ulong)*(uint *)(lVar33 + 0x4c);
      }
      return pdVar16;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar50 = func_0x00f78af4();
    param_1 = (dword *)0x0;
    pdVar24 = auVar49._8_8_;
    pdVar32 = (dword *)0x3ebc000;
  }
  pdVar25 = auVar50._8_8_;
  pdVar16 = auVar50._0_8_;
  puVar11 = puVar10 + -0x40;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar10 + -0x30) = 0;
  *(dword **)(puVar10 + -0x28) = pdVar32;
  *(dword **)(puVar10 + -0x20) = param_1;
  *(dword **)(puVar10 + -0x18) = pdVar24;
  *(undefined1 **)(puVar10 + -0x10) = puVar35;
  *(undefined **)(puVar10 + -8) = puVar37;
  puVar35 = puVar10 + -0x10;
  pdVar32 = (dword *)0x3ebc000;
  pdVar27 = pdVar28;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar16 + 0x1a) != 0) {
    pdVar27 = (dword *)(ulong)((uint)pdVar28 ^ 1);
    pdVar24 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar25,pdVar27,0);
    lVar33 = *(long *)(pdVar16 + 0x1c);
    pdVar32 = (dword *)0x0;
    if (lVar33 != 0) {
      uVar31 = auVar50._8_4_;
      if (*(uint *)(lVar33 + 0x18) <= uVar31) {
        pdVar24 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) ||
         (pdVar32 = *(dword **)(pdVar16 + 0xc), pdVar32 == (dword *)0x0)) {
        return pdVar24;
      }
      lVar33 = *(long *)(pdVar16 + 0x1c);
      pdVar16 = (dword *)0x0;
      if (lVar33 != 0) {
        if (*(uint *)(lVar33 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar26 = *(long **)(*(long *)(lVar33 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
        *(undefined8 *)(puVar10 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar10 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
        *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
        *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
        *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
        *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
        *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
        *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
        *(dword **)(puVar10 + -0x68) = pdVar32;
        lVar33 = *(long *)(pdVar32 + 0x1a);
        if (lVar33 == 0) {
          puVar35 = puVar10 + -0x68;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar33 + 0x18);
          if (lVar17 == 0) {
            return pdVar32;
          }
          puVar35 = (undefined1 *)(lVar33 + 0x20);
        }
        lVar33 = 0;
        do {
          lVar18 = *(long *)(puVar35 + lVar33 * 8);
          pcVar34 = *(code **)(lVar18 + 0x10);
          plVar1 = *(long **)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18);
          }
          iVar15 = func_0x00f78a4c(lVar18);
          bVar13 = *(char *)(lVar18 + 0x4a) == '\x03';
          if (iVar15 == 0) {
            if (bVar13) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar16 = (dword *)(*pcVar34)(plVar26,pdVar25,pdVar28,lVar18);
              }
              else {
                if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e71aac;
                iVar15 = func_0x00f78a44(lVar18);
                iVar14 = func_0x00f78ec0(lVar18);
                if (iVar15 == 0) {
                  uVar4 = *(ushort *)(lVar18 + 0x48);
                  if (iVar14 == 0) {
                    lVar18 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar16 = (dword *)(**(code **)(lVar18 + 0x138))
                                                 (plVar1,plVar26,pdVar25,pdVar28,
                                                  *(undefined8 *)(lVar18 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar18 = func_0x00f78a48(lVar18);
                  lVar20 = *plVar1;
                  uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar23 != 0) {
                    piVar30 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == lVar18) {
                        puVar22 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar30 = piVar30 + 4;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar34 = (code *)*puVar22;
                  puVar22 = (undefined8 *)puVar22[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar19 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar1;
                    uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar23 != 0) {
                      piVar30 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar30 + -2) == *(long *)(lVar18 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar18 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar30 = piVar30 + 4;
                        uVar23 = uVar23 - 1;
                      } while (uVar23 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar19 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar22 = (undefined8 *)func_0x00f78acc(uVar19,lVar18);
                  pcVar34 = (code *)*puVar22;
                }
                pdVar16 = (dword *)(*pcVar34)(plVar1,plVar26,pdVar25,pdVar28,puVar22);
              }
            }
            else {
              if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar15 = func_0x00f78a44(lVar18);
              iVar14 = func_0x00f78ec0(lVar18);
              if (iVar15 == 0) {
                uVar4 = *(ushort *)(lVar18 + 0x48);
                if (iVar14 == 0) {
                  lVar18 = *plVar26 + (ulong)uVar4 * 0x10;
                  pdVar16 = (dword *)(**(code **)(lVar18 + 0x138))
                                               (plVar26,pdVar25,pdVar28,
                                                *(undefined8 *)(lVar18 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar18 = func_0x00f78a48(lVar18);
                lVar20 = *plVar26;
                uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar23 != 0) {
                  piVar30 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar18) {
                      puVar22 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar30 = piVar30 + 4;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                puVar22 = (undefined8 *)func_0x00fac1f0(plVar26,lVar18,(ulong)uVar4);
code_r0x01e71d00:
                pcVar34 = (code *)*puVar22;
                puVar22 = (undefined8 *)puVar22[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar19 = *(undefined8 *)
                            (*plVar26 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar26;
                  uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar23 != 0) {
                    piVar30 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == *(long *)(lVar18 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar30 = piVar30 + 4;
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar26);
code_r0x01e71cd8:
                  uVar19 = *(undefined8 *)(lVar20 + 8);
                }
                puVar22 = (undefined8 *)func_0x00f78acc(uVar19,lVar18);
                pcVar34 = (code *)*puVar22;
              }
              pdVar16 = (dword *)(*pcVar34)(plVar26,pdVar25,pdVar28,puVar22);
            }
          }
          else {
            if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar16 = (dword *)(*pcVar34)(plVar1,plVar26,pdVar25,pdVar28,lVar18);
          }
code_r0x01e71bd0:
          lVar33 = lVar33 + 1;
          if (lVar33 == lVar17) {
            return pdVar16;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar51 = func_0x00f78af4();
  pdVar24 = pdVar28;
  param_1 = pdVar25;
code_r0x02f88674:
  pdVar28 = auVar51._0_8_;
  *(dword **)(puVar11 + -0x30) = pdVar32;
  *(dword **)(puVar11 + -0x28) = pdVar16;
  *(dword **)(puVar11 + -0x20) = param_1;
  *(dword **)(puVar11 + -0x18) = pdVar24;
  *(undefined1 **)(puVar11 + -0x10) = puVar35;
  *(undefined **)(puVar11 + -8) = puVar37;
  pdVar16 = pdVar28;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar33 = *(long *)(pdVar28 + 0x1c);
  if (lVar33 != 0) {
    uVar31 = auVar51._8_4_;
    if (*(uint *)(lVar33 + 0x18) <= uVar31) {
      pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) {
      return pdVar16;
    }
    lVar33 = *(long *)(pdVar28 + 0x1c);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
      if ((lVar33 != 0) && (plVar26 = *(long **)(lVar33 + 0x28), plVar26 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar16 = (dword *)(**(code **)(*plVar26 + 0x178))
                                     (plVar26,pdVar27,*(undefined8 *)(*plVar26 + 0x180));
        return pdVar16;
      }
    }
  }
  auVar47 = func_0x00f78af4();
  uVar19 = auVar47._0_8_;
  *(long *)(puVar11 + -0x50) = auVar51._8_8_;
  *(dword **)(puVar11 + -0x48) = pdVar27;
  *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar11 + -0x68) = 0;
  *(undefined8 *)(puVar11 + -0x70) = 0;
  *(undefined8 *)(puVar11 + -0x58) = 0;
  *(undefined8 *)(puVar11 + -0x60) = 0;
  pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar19,auVar47._8_8_,puVar11 + -0x70);
  if ((int)pdVar16 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar19,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
    *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
    *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
    *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
    *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
    pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar19,puVar11 + -0x90,1);
  }
  return pdVar16;
}



// ============================================================
// RVA: 0x158bd78 | Atlas.Contexts.FrontEndContextLoadoutState.ShowKartSelect
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextLoadoutState__ShowKartSelect(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  dword *pdVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar14;
  dword *pdVar22;
  long *extraout_x1;
  dword *pdVar23;
  long *plVar24;
  dword *pdVar25;
  dword *pdVar26;
  int *piVar27;
  uint uVar28;
  long unaff_x19;
  dword *pdVar29;
  undefined8 unaff_x20;
  undefined8 uVar30;
  long unaff_x21;
  dword *pdVar31;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar32;
  undefined8 unaff_x24;
  undefined8 uVar33;
  undefined8 unaff_x25;
  code *pcVar34;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar35;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined1 ****ppppuVar36;
  undefined *puVar37;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar32 = 0x3d27d68;
  if ((bRam0000000003eb5102 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d27d58);
    func_0x00f78a20(0x3d56ba0);
    func_0x00f78a20(0x3d56ba8);
    func_0x00f78a20(0x3d56bb0);
    func_0x00f78a20(0x3d27d60);
    func_0x00f78a20(0x3d27d68);
    bRam0000000003eb5102 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.TransitionData_TypeInfo*/ uRam0000000003d27d68);
  /*Atlas.UI.Screens.KartSelectScreen.TransitionData$$.ctor*/ func_0x0155ab20(pdVar15,0);
  lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27d58);
  lVar17 = lRam0000000003d56ba8;
  /*Atlas.UI.Screens.KartSelectScreen.ContinueSelected$$.ctor*/ func_0x0155a7a8(lVar16,param_1,lRam0000000003d56ba8,0);
  uVar33 = unaff_x24;
  if (pdVar15 == (dword *)0x0) {
LAB_0158bf24:
    lVar18 = func_0x00f78af4();
    puStack_48 = &Atlas_Contexts_FrontEndContextLoadoutState__OnExit;
    uVar30 = 0x3eb5000;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb50fc & 1) == 0) {
      func_0x00f78a20(0x3d2a168);
      func_0x00f78a20(0x3d1b4b8);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d56bb8);
      func_0x00f78a20(0x3d56bd8);
      func_0x00f78a20(0x3d405d8);
      bRam0000000003eb50fc = 1;
    }
    pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d405d8);
    if (pdVar15 == (dword *)0x0) {
code_r0x0158c0bc:
      func_0x00f78af4();
    }
    else {
      if (*(char *)(pdVar15 + 0x24) == '\0') {
        return pdVar15;
      }
      if ((*(long *)(lVar18 + 200) == 0) ||
         (lVar32 = *(long *)(*(long *)(lVar18 + 200) + 0x30), lVar32 == 0)) goto code_r0x0158c0bc;
      uVar33 = 0x3d1b4b8;
      unaff_x25 = 0x3d56000;
      unaff_x26 = 0x3d2a000;
      uVar30 = *(undefined8 *)(lVar32 + 0x68);
      lVar16 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
      /*System.Action<Match>$$.ctor*/ func_0x01b4a378(lVar16,lVar18,uRam0000000003d56bb8,uRam0000000003d2a168);
      lVar17 = 0;
      plVar24 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar30,lVar16);
      if ((plVar24 == (long *)0x0) || (*plVar24 == /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) {
        *(long **)(lVar32 + 0x68) = plVar24;
        lVar32 = *(long *)(lVar18 + 0xd0);
        if (lVar32 != 0) {
          uVar33 = 0x3d1fa78;
          unaff_x25 = 0x3d56000;
          uVar30 = *(undefined8 *)(lVar32 + 0x10);
          lVar16 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar16,lVar18,uRam0000000003d56bd8,0);
          lVar17 = 0;
          plVar24 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar30,lVar16);
          if ((plVar24 != (long *)0x0) && (*plVar24 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x0158c0c0;
          *(long **)(lVar32 + 0x10) = plVar24;
          pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d405d8);
          if (pdVar15 != (dword *)0x0) {
            *(undefined1 *)(pdVar15 + 0x24) = 0;
            return pdVar15;
          }
        }
        goto code_r0x0158c0bc;
      }
    }
code_r0x0158c0c0:
    lVar19 = func_0x00f78e5c();
    uStack_c0 = 0x3d405d8;
    puStack_98 = &Atlas_Contexts_FrontEndContextLoadoutState__ShowRankRewardScreen;
    uStack_d0 = uVar33;
    lStack_c8 = lVar32;
    lStack_b8 = lVar16;
    uStack_b0 = uVar30;
    lStack_a8 = lVar18;
    ppuStack_a0 = &puStack_50;
    if ((bRam0000000003eb50fe & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d56bc0);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d26c00);
      bRam0000000003eb50fe = 1;
    }
    pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
    /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar15,0);
    lVar32 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if ((lVar32 != 0) && (pdVar15 != (dword *)0x0)) {
      lVar16 = *(long *)(lVar32 + 0x18);
      lVar17 = *(long *)(lVar32 + 0x10);
      lVar39 = *(long *)(lVar32 + 0x28);
      lVar18 = *(long *)(lVar32 + 0x20);
      lVar41 = *(long *)(lVar32 + 0x30);
      lVar46 = *(long *)(lVar32 + 0x48);
      lVar44 = *(long *)(lVar32 + 0x40);
      *(long *)(pdVar15 + 0xe) = *(long *)(lVar32 + 0x38);
      *(long *)(pdVar15 + 0xc) = lVar41;
      *(long *)(pdVar15 + 0x12) = lVar46;
      *(long *)(pdVar15 + 0x10) = lVar44;
      *(long *)(pdVar15 + 6) = lVar16;
      *(long *)(pdVar15 + 4) = lVar17;
      *(long *)(pdVar15 + 10) = lVar39;
      *(long *)(pdVar15 + 8) = lVar18;
      lVar16 = *(long *)(lVar19 + 0x98);
      lVar32 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      lVar17 = lRam0000000003d56bc0;
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar32,lVar19,lRam0000000003d56bc0,0);
      if (lVar16 != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar16,0,lVar32,0);
        pdVar29 = *(dword **)(lVar19 + 0x90);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar17 = lVar32;
        if (pdVar29 != (dword *)0x0) {
          pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x19 = lStack_a8;
          unaff_x20 = uStack_b0;
          unaff_x21 = lStack_b8;
          unaff_x22 = uStack_c0;
          unaff_x23 = lStack_c8;
          unaff_x24 = uStack_d0;
          unaff_x29 = ppuStack_a0;
          unaff_x30 = puStack_98;
          goto Atlas_UI_AtlasUIManager__TransitionToScreen;
        }
      }
    }
    auVar47 = func_0x00f78af4();
    lVar32 = auVar47._0_8_;
    puStack_d8 = &Atlas_Contexts_FrontEndContextLoadoutState__OnLoadoutTypeSelected;
    ppppuVar36 = &pppuStack_e0;
    pppuStack_e0 = &ppuStack_a0;
    if ((bRam0000000003eb50ff & 1) == 0) {
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb50ff = 1;
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    switch(auVar47._8_8_ & 0xffffffff) {
    case 0:
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 == 0) goto code_r0x0158c438;
      *(long *)(lVar16 + 0x10) = lVar17;
      break;
    case 1:
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 == 0) goto code_r0x0158c438;
      *(long *)(lVar16 + 0x18) = lVar17;
      break;
    case 2:
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 == 0) goto code_r0x0158c438;
      *(long *)(lVar16 + 0x20) = lVar17;
      break;
    case 3:
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 == 0) goto code_r0x0158c438;
      *(long *)(lVar16 + 0x28) = lVar17;
      break;
    case 4:
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 == 0) goto code_r0x0158c438;
      *(long *)(lVar16 + 0x30) = lVar17;
    }
    lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar32,uRam0000000003d405e0);
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x18) != 0)) {
      pdVar15 = (dword *)/*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
      if ((int)pdVar15 == 0) {
        return pdVar15;
      }
      lVar17 = 0x3d405d8;
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
      if (lVar16 != 0) {
        uStack_188 = *(undefined8 *)(lVar16 + 0x18);
        uStack_190 = *(undefined8 *)(lVar16 + 0x10);
        uStack_178 = *(undefined8 *)(lVar16 + 0x28);
        uStack_180 = *(undefined8 *)(lVar16 + 0x20);
        uStack_168 = *(undefined8 *)(lVar16 + 0x38);
        uStack_170 = *(undefined8 *)(lVar16 + 0x30);
        uStack_158 = *(undefined8 *)(lVar16 + 0x48);
        uStack_160 = *(undefined8 *)(lVar16 + 0x40);
        pdVar15 = (dword *)Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked
                                     (&uStack_190,*(undefined8 *)(lVar32 + 0xb0),0);
        if ((int)pdVar15 == 0) {
          return pdVar15;
        }
        lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
        if (lVar16 != 0) {
          uStack_248 = *(undefined8 *)(lVar16 + 0x18);
          uStack_250 = *(undefined8 *)(lVar16 + 0x10);
          uStack_238 = *(undefined8 *)(lVar16 + 0x28);
          uStack_240 = *(undefined8 *)(lVar16 + 0x20);
          uStack_228 = *(undefined8 *)(lVar16 + 0x38);
          uStack_230 = *(undefined8 *)(lVar16 + 0x30);
          uStack_218 = *(undefined8 *)(lVar16 + 0x48);
          uStack_220 = *(undefined8 *)(lVar16 + 0x40);
          uStack_1d0 = uStack_250;
          uStack_1c8 = uStack_248;
          uStack_1c0 = uStack_240;
          uStack_1b8 = uStack_238;
          uStack_1b0 = uStack_230;
          uStack_1a8 = uStack_228;
          uStack_1a0 = uStack_220;
          uStack_198 = uStack_218;
          Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                    (&uStack_210,&uStack_250,*(undefined8 *)(lVar32 + 0xa0),0);
          uStack_288 = uStack_208;
          uStack_290 = uStack_210;
          uStack_278 = uStack_1f8;
          uStack_280 = uStack_200;
          uStack_268 = uStack_1e8;
          uStack_270 = uStack_1f0;
          uStack_258 = uStack_1d8;
          uStack_260 = uStack_1e0;
          /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_150,&uStack_290,0);
          if ((*(long *)(lVar32 + 0xc0) != 0) &&
             (lVar32 = *(long *)(*(long *)(lVar32 + 0xc0) + 0x28), lVar32 != 0)) {
            uStack_2c8 = uStack_148;
            uStack_2d0 = uStack_150;
            uStack_2b8 = uStack_138;
            uStack_2c0 = uStack_140;
            uStack_2a8 = uStack_128;
            uStack_2b0 = uStack_130;
            uStack_298 = uStack_118;
            uStack_2a0 = uStack_120;
            pdVar15 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar32,&uStack_2d0,0);
            return pdVar15;
          }
        }
      }
    }
code_r0x0158c438:
    puVar37 = &Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted;
    lVar32 = func_0x00f78af4();
    puVar20 = &uStack_2d0;
    do {
      *(undefined8 *)((long)puVar20 + -0x30) = 0x3eb5000;
      *(long *)((long)puVar20 + -0x28) = auVar47._8_8_;
      *(long *)((long)puVar20 + -0x20) = lVar17;
      *(long *)((long)puVar20 + -0x18) = auVar47._0_8_;
      *(undefined1 *****)((long)puVar20 + -0x10) = ppppuVar36;
      *(undefined **)((long)puVar20 + -8) = puVar37;
      ppppuVar36 = (undefined1 ****)((long)puVar20 + -0x10);
      if ((bRam0000000003eb5104 & 1) == 0) {
        func_0x00f78a20(0x3d2a040);
        func_0x00f78a20(0x3d2a140);
        func_0x00f78a20(0x3d405d8);
        func_0x00f78a20(0x3d405e0);
        bRam0000000003eb5104 = 1;
      }
      auVar47._8_8_ = 0x3d405d8;
      auVar47._0_8_ = lVar32;
      lVar17 = *(long *)(lVar32 + 0x88);
      if (lVar17 == 0) {
code_r0x0158c4e4:
        lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
        if (*(long *)(lVar32 + 0xb8) != 0) {
          uVar33 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar32 + 0xb8),0);
          Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)puVar20 + -0x70),uVar33,0);
          if (lVar17 != 0) {
            uVar40 = *(undefined8 *)((long)puVar20 + -0x48);
            uVar38 = *(undefined8 *)((long)puVar20 + -0x50);
            uVar30 = *(undefined8 *)((long)puVar20 + -0x38);
            uVar33 = *(undefined8 *)((long)puVar20 + -0x40);
            uVar45 = *(undefined8 *)((long)puVar20 + -0x70);
            uVar43 = *(undefined8 *)((long)puVar20 + -0x58);
            uVar42 = *(undefined8 *)((long)puVar20 + -0x60);
            *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)((long)puVar20 + -0x68);
            *(undefined8 *)(lVar17 + 0x10) = uVar45;
            *(undefined8 *)(lVar17 + 0x28) = uVar43;
            *(undefined8 *)(lVar17 + 0x20) = uVar42;
            *(undefined8 *)(lVar17 + 0x38) = uVar40;
            *(undefined8 *)(lVar17 + 0x30) = uVar38;
            *(undefined8 *)(lVar17 + 0x48) = uVar30;
            *(undefined8 *)(lVar17 + 0x40) = uVar33;
            lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar32,uRam0000000003d405e0);
            if (lVar16 != 0) {
              lVar17 = *(long *)(lVar16 + 0x18);
              lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
              if ((lVar16 != 0) && (lVar17 != 0)) {
                uVar30 = *(undefined8 *)(lVar16 + 0x18);
                uVar33 = *(undefined8 *)(lVar16 + 0x10);
                uVar40 = *(undefined8 *)(lVar16 + 0x28);
                uVar38 = *(undefined8 *)(lVar16 + 0x20);
                uVar42 = *(undefined8 *)(lVar16 + 0x30);
                uVar45 = *(undefined8 *)(lVar16 + 0x48);
                uVar43 = *(undefined8 *)(lVar16 + 0x40);
                *(undefined8 *)(lVar17 + 0x58) = *(undefined8 *)(lVar16 + 0x38);
                *(undefined8 *)(lVar17 + 0x50) = uVar42;
                *(undefined8 *)(lVar17 + 0x68) = uVar45;
                *(undefined8 *)(lVar17 + 0x60) = uVar43;
                *(undefined8 *)(lVar17 + 0x38) = uVar30;
                *(undefined8 *)(lVar17 + 0x30) = uVar33;
                *(undefined8 *)(lVar17 + 0x48) = uVar40;
                *(undefined8 *)(lVar17 + 0x40) = uVar38;
                pdVar15 = (dword *)0x0;
                if (*(long *)(lVar32 + 0x78) != 0) {
                  pdVar15 = (dword *)/*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar32 + 0x78),lVar17,
                                                     uRam0000000003d2a040);
                }
                return pdVar15;
              }
            }
          }
        }
      }
      else {
        lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar32,uRam0000000003d405d8);
        if (lVar16 != 0) {
          uVar33 = *(undefined8 *)(lVar16 + 0x50);
          uVar38 = *(undefined8 *)(lVar16 + 0x68);
          uVar30 = *(undefined8 *)(lVar16 + 0x60);
          *(undefined8 *)((long)puVar20 + -0x68) = *(undefined8 *)(lVar16 + 0x58);
          *(undefined8 *)((long)puVar20 + -0x70) = uVar33;
          *(undefined8 *)((long)puVar20 + -0x58) = uVar38;
          *(undefined8 *)((long)puVar20 + -0x60) = uVar30;
          uVar33 = *(undefined8 *)(lVar16 + 0x70);
          uVar38 = *(undefined8 *)(lVar16 + 0x88);
          uVar30 = *(undefined8 *)(lVar16 + 0x80);
          *(undefined8 *)((long)puVar20 + -0x48) = *(undefined8 *)(lVar16 + 0x78);
          *(undefined8 *)((long)puVar20 + -0x50) = uVar33;
          *(undefined8 *)((long)puVar20 + -0x38) = uVar38;
          *(undefined8 *)((long)puVar20 + -0x40) = uVar30;
          /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar17,(undefined1 *)((long)puVar20 + -0x70),uRam0000000003d2a140);
          goto code_r0x0158c4e4;
        }
      }
      puVar37 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
      lVar32 = func_0x00f78af4();
      puVar20 = (undefined8 *)((long)puVar20 + -0x70);
    } while( true );
  }
  lVar32 = 0x3d29000;
  uVar33 = 0x3d56000;
  *(long *)(pdVar15 + 4) = lVar16;
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.KartSelectScreen.LoadoutTypeSelected_TypeInfo*/ uRam0000000003d27d60);
  /*Atlas.UI.Screens.KartSelectScreen.LoadoutTypeSelected$$.ctor*/ func_0x0155aa20(lVar17,param_1,uRam0000000003d56bb0,0);
  *(long *)(pdVar15 + 6) = lVar17;
  lVar16 = *(long *)(param_1 + 0x98);
  lVar18 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
  lVar17 = lRam0000000003d56ba0;
  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar18,param_1,lRam0000000003d56ba0,0);
  if (lVar16 == 0) goto LAB_0158bf24;
  lVar32 = 0x3d1feb8;
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar16,0,lVar18,0);
  pdVar29 = *(dword **)(param_1 + 0x90);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar17 = lVar18;
  if (pdVar29 == (dword *)0x0) goto LAB_0158bf24;
  pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x58);
Atlas_UI_AtlasUIManager__TransitionToScreen:
  uVar33 = 0;
  pdVar25 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar35 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar31 = (dword *)0x0;
  pdVar26 = pdVar15;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar32 = *(long *)(pdVar29 + 4);
  if (lVar32 != 0) {
    pdVar25 = (dword *)0x0;
    uVar33 = 0;
    puVar37 = &UNK_01470820;
    pdVar23 = pdVar22;
    pdVar26 = pdVar15;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar15;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar29;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar22;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar35;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar23;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar26;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar33;
    *(long *)((long)register0x00000008 + -0x100) = lVar32;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar25;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar17 = *(long *)(lVar32 + 0x78);
    if (lVar17 != 0) {
      iVar14 = *(int *)(lVar17 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar17 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar17 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar17,pdVar23,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar15;
        }
        pdVar15 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar15;
        }
        lVar17 = *(long *)(lVar32 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar17 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar47 = func_0x00f78af4();
  pdVar23 = auVar47._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar35;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar32 != 0) {
    puVar35 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar47 = func_0x00f78af4();
  uVar33 = auVar47._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar32 != 0) {
    pdVar25 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar15;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar29;
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
    lVar17 = *(long *)(lVar32 + 0x70);
    if (lVar17 != 0) {
      lVar16 = lVar17;
      if (*(uint *)(lVar17 + 0x18) <= auVar47._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar16 = *(long *)(lVar32 + 0x70);
      }
      if (lVar16 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar47._8_4_ * 0x28;
        uVar38 = *(undefined8 *)(lVar17 + 0x28);
        uVar30 = *(undefined8 *)(lVar17 + 0x20);
        uVar2 = *(undefined4 *)(lVar17 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar2;
        uVar5 = *(undefined2 *)(lVar17 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar38;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar38;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar2;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,uVar33,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar32,uVar33);
        return pdVar15;
      }
    }
    auVar47 = func_0x00f78af4();
    pdVar23 = auVar47._8_8_;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar17;
    *(long *)((long)register0x00000008 + -0x100) = lVar32;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar33;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar35 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar32 = *(long *)(auVar47._0_8_ + 0x70);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= auVar47._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0x10) + (long)(int)auVar47._8_4_ * 0x28 + 0x28);
      if (lVar32 == 0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar15 = *(dword **)(lVar32 + 0x40);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar22 = (dword *)func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar15 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar47 = func_0x00f78af4();
  pdVar23 = auVar47._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  auVar48._8_8_ = pdVar15;
  auVar48._0_8_ = lVar32;
  if (lVar32 != 0) {
    pdVar25 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar35 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar15 = pdVar29;
    goto code_r0x02f877a8;
  }
  auVar47 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  auVar48._8_8_ = auVar47._8_8_;
  auVar48._0_8_ = lVar32;
  if (lVar32 != 0) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar35 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar23 = pdVar25;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar31;
      *(dword **)(puVar7 + -0x28) = pdVar15;
      *(dword **)(puVar7 + -0x20) = pdVar29;
      *(dword **)(puVar7 + -0x18) = pdVar22;
      *(undefined1 **)(puVar7 + -0x10) = puVar35;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar35 = puVar7 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar25 = pdVar23;
      pdVar22 = pdVar26;
      pdVar15 = pdVar23;
      pdVar31 = auVar48._0_8_;
code_r0x02f877a8:
      pdVar29 = auVar48._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar31;
      *(long *)(puVar6 + -0x28) = auVar48._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar15;
      *(dword **)(puVar6 + -0x18) = pdVar22;
      *(undefined1 **)(puVar6 + -0x10) = puVar35;
      *(undefined **)(puVar6 + -8) = puVar37;
      puVar35 = puVar6 + -0x10;
      pdVar15 = pdVar29;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar28 = (uint)pdVar23;
      if (((int)uVar28 < 0) || ((int)*(long *)(pdVar29 + 0x14) <= (int)uVar28)) {
        return pdVar15;
      }
      lVar32 = *(long *)(pdVar29 + 0x1c);
      if (lVar32 == 0) break;
      if (*(uint *)(lVar32 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar32 = *(long *)(lVar32 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
      pdVar31 = *(dword **)(lVar32 + 0x20);
      pdVar22 = *(dword **)(lVar32 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar32 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar32 + 0x46);
      if (pdVar22 == (dword *)0x0) {
        lVar32 = *(long *)(pdVar29 + 0x1c);
        if (lVar32 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar31;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar32,pdVar23,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar15;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar15 = pdVar22;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar29;
      *(dword **)(puVar11 + -0x18) = pdVar23;
      *(undefined1 **)(puVar11 + -0x10) = puVar35;
      *(undefined **)(puVar11 + -8) = puVar37;
      (**(code **)(*(long *)pdVar22 + 0x218))(pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x220));
      if (*(long *)(pdVar22 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar22 + 10),0);
        pdVar22[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*(long *)pdVar22 + 0x228))
                                     (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x230));
        return pdVar15;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar29;
      *(dword **)(puVar11 + -0x38) = pdVar22;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar35 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar32 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar33 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar33,lVar32);
        pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar15;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar48 = func_0x00f78af4();
      pdVar23 = pdVar25;
    }
    lVar32 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar31;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar29;
    *(dword **)(puVar6 + -0x78) = pdVar23;
    *(undefined1 **)(puVar6 + -0x70) = puVar35;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar33 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar33,0);
    if (0 < *(int *)(lVar32 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar32,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar32,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar32 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar32);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar33);
    return pdVar15;
  }
  auVar47 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar32 = *(long *)(auVar47._0_8_ + 0x10);
  if (lVar32 == 0) {
    auVar47 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar32 = *(long *)(auVar47._0_8_ + 0x10);
    auVar49._8_8_ = auVar47._8_8_;
    auVar49._0_8_ = lVar32;
    if (lVar32 != 0) {
      pdVar26 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar35 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar37 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar47 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar32 = *(long *)(auVar47._0_8_ + 0x10);
    auVar50._8_8_ = auVar47._8_8_;
    auVar50._0_8_ = lVar32;
    if (lVar32 == 0) {
      auVar47 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar32 = *(long *)(auVar47._0_8_ + 0x10);
      auVar51._8_8_ = auVar47._8_8_;
      auVar51._0_8_ = lVar32;
      if (lVar32 == 0) {
        pdVar31 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar15;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar29;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar22;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar33 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar33,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar31 + 0xc) = uVar33;
        return pdVar31;
      }
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar35 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar37 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar35 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar37 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar26 = pdVar25;
    pdVar31 = pdVar15;
  }
  else {
    pdVar26 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar15;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar29;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar22;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar35 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar15 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar28 = auVar47._8_4_;
    if (((int)uVar28 < 0) || (*(int *)(lVar32 + 0x50) <= (int)uVar28)) {
      return (dword *)0x0;
    }
    lVar32 = *(long *)(lVar32 + 0x70);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar32 + 0x10) + ((ulong)auVar47._8_8_ & 0xffffffff) * 0x28;
      lVar32 = *(long *)(lVar17 + 0x28);
      cVar3 = *(char *)(lVar17 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
      if (iVar14 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar32 != 0) && (*(int *)(lVar32 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar49 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar22 = auVar47._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar15;
    *(dword **)(puVar8 + -0x20) = pdVar29;
    *(dword **)(puVar8 + -0x18) = pdVar22;
    *(undefined1 **)(puVar8 + -0x10) = puVar35;
    *(undefined **)(puVar8 + -8) = puVar37;
    puVar35 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar32 = *(long *)(auVar49._0_8_ + 0x70);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= auVar49._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0x10) + (long)(int)auVar49._8_4_ * 0x28 + 0x28);
      if (lVar32 == 0) {
        pdVar15 = &MACH_HEADER.cputype;
      }
      else {
        pdVar15 = (dword *)(ulong)*(uint *)(lVar32 + 0x4c);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar50 = func_0x00f78af4();
    pdVar29 = (dword *)0x0;
    pdVar22 = auVar49._8_8_;
    pdVar31 = (dword *)0x3ebc000;
  }
  pdVar23 = auVar50._8_8_;
  pdVar15 = auVar50._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar31;
  *(dword **)(puVar9 + -0x20) = pdVar29;
  *(dword **)(puVar9 + -0x18) = pdVar22;
  *(undefined1 **)(puVar9 + -0x10) = puVar35;
  *(undefined **)(puVar9 + -8) = puVar37;
  puVar35 = puVar9 + -0x10;
  pdVar31 = (dword *)0x3ebc000;
  pdVar25 = pdVar26;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar15 + 0x1a) != 0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar26 ^ 1);
    pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar15 + 0x1a),pdVar23,pdVar25,0);
    lVar32 = *(long *)(pdVar15 + 0x1c);
    pdVar31 = (dword *)0x0;
    if (lVar32 != 0) {
      uVar28 = auVar50._8_4_;
      if (*(uint *)(lVar32 + 0x18) <= uVar28) {
        pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar32 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
         (pdVar31 = *(dword **)(pdVar15 + 0xc), pdVar31 == (dword *)0x0)) {
        return pdVar29;
      }
      lVar32 = *(long *)(pdVar15 + 0x1c);
      pdVar15 = (dword *)0x0;
      if (lVar32 != 0) {
        if (*(uint *)(lVar32 + 0x18) <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar24 = *(long **)(*(long *)(lVar32 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar31;
        lVar32 = *(long *)(pdVar31 + 0x1a);
        if (lVar32 == 0) {
          puVar35 = puVar9 + -0x68;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar32 + 0x18);
          if (lVar17 == 0) {
            return pdVar31;
          }
          puVar35 = (undefined1 *)(lVar32 + 0x20);
        }
        lVar32 = 0;
        do {
          lVar16 = *(long *)(puVar35 + lVar32 * 8);
          pcVar34 = *(code **)(lVar16 + 0x10);
          plVar1 = *(long **)(lVar16 + 0x20);
          lVar16 = *(long *)(lVar16 + 0x28);
          if (*(short *)(lVar16 + 0x48) == -1) {
            func_0x00f78ad8(lVar16);
          }
          iVar14 = func_0x00f78a4c(lVar16);
          bVar12 = *(char *)(lVar16 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar15 = (dword *)(*pcVar34)(plVar24,pdVar23,pdVar26,lVar16);
              }
              else {
                if (((*(short *)(lVar16 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar31 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar16);
                iVar13 = func_0x00f78ec0(lVar16);
                if (iVar14 == 0) {
                  uVar4 = *(ushort *)(lVar16 + 0x48);
                  if (iVar13 == 0) {
                    lVar16 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar15 = (dword *)(**(code **)(lVar16 + 0x138))
                                                 (plVar1,plVar24,pdVar23,pdVar26,
                                                  *(undefined8 *)(lVar16 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar16 = func_0x00f78a48(lVar16);
                  lVar18 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar21 != 0) {
                    piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar16) {
                        puVar20 = (undefined8 *)
                                  (lVar18 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar27 = piVar27 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar16,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar34 = (code *)*puVar20;
                  puVar20 = (undefined8 *)puVar20[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar33 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar18 = *plVar1;
                    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    if (uVar21 != 0) {
                      piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar16 + 0x18)) {
                          lVar18 = lVar18 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar16 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar27 = piVar27 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar18 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar33 = *(undefined8 *)(lVar18 + 8);
                  }
                  puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar16);
                  pcVar34 = (code *)*puVar20;
                }
                pdVar15 = (dword *)(*pcVar34)(plVar1,plVar24,pdVar23,pdVar26,puVar20);
              }
            }
            else {
              if ((*(short *)(lVar16 + 0x48) == -1) || (*(long *)(pdVar31 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar16);
              iVar13 = func_0x00f78ec0(lVar16);
              if (iVar14 == 0) {
                uVar4 = *(ushort *)(lVar16 + 0x48);
                if (iVar13 == 0) {
                  lVar16 = *plVar24 + (ulong)uVar4 * 0x10;
                  pdVar15 = (dword *)(**(code **)(lVar16 + 0x138))
                                               (plVar24,pdVar23,pdVar26,
                                                *(undefined8 *)(lVar16 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar16 = func_0x00f78a48(lVar16);
                lVar18 = *plVar24;
                uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar21 != 0) {
                  piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar16) {
                      puVar20 = (undefined8 *)
                                (lVar18 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar27 = piVar27 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar20 = (undefined8 *)func_0x00fac1f0(plVar24,lVar16,(ulong)uVar4);
code_r0x01e71d00:
                pcVar34 = (code *)*puVar20;
                puVar20 = (undefined8 *)puVar20[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar33 = *(undefined8 *)
                            (*plVar24 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar18 = *plVar24;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar21 != 0) {
                    piVar27 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar16 + 0x18)) {
                        lVar18 = lVar18 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar16 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar27 = piVar27 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar18 = func_0x00fac1f0(plVar24);
code_r0x01e71cd8:
                  uVar33 = *(undefined8 *)(lVar18 + 8);
                }
                puVar20 = (undefined8 *)func_0x00f78acc(uVar33,lVar16);
                pcVar34 = (code *)*puVar20;
              }
              pdVar15 = (dword *)(*pcVar34)(plVar24,pdVar23,pdVar26,puVar20);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar15 = (dword *)(*pcVar34)(plVar1,plVar24,pdVar23,pdVar26,lVar16);
          }
code_r0x01e71bd0:
          lVar32 = lVar32 + 1;
          if (lVar32 == lVar17) {
            return pdVar15;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar51 = func_0x00f78af4();
  pdVar22 = pdVar26;
  pdVar29 = pdVar23;
code_r0x02f88674:
  pdVar26 = auVar51._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar31;
  *(dword **)(puVar10 + -0x28) = pdVar15;
  *(dword **)(puVar10 + -0x20) = pdVar29;
  *(dword **)(puVar10 + -0x18) = pdVar22;
  *(undefined1 **)(puVar10 + -0x10) = puVar35;
  *(undefined **)(puVar10 + -8) = puVar37;
  pdVar15 = pdVar26;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar32 = *(long *)(pdVar26 + 0x1c);
  if (lVar32 != 0) {
    uVar28 = auVar51._8_4_;
    if (*(uint *)(lVar32 + 0x18) <= uVar28) {
      pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar32 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
      return pdVar15;
    }
    lVar32 = *(long *)(pdVar26 + 0x1c);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar32 = *(long *)(*(long *)(lVar32 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
      if ((lVar32 != 0) && (plVar24 = *(long **)(lVar32 + 0x28), plVar24 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*plVar24 + 0x178))
                                     (plVar24,pdVar25,*(undefined8 *)(*plVar24 + 0x180));
        return pdVar15;
      }
    }
  }
  auVar47 = func_0x00f78af4();
  uVar33 = auVar47._0_8_;
  *(long *)(puVar10 + -0x50) = auVar51._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar25;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar33,auVar47._8_8_,puVar10 + -0x70);
  if ((int)pdVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar33,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar33,puVar10 + -0x90,1);
  }
  return pdVar15;
}



// ============================================================
// RVA: 0x158bf28 | Atlas.Contexts.FrontEndContextLoadoutState.OnExit
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextLoadoutState__OnExit
                  (long param_1,undefined8 param_2,dword *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword ****ppppdVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  undefined1 *puVar7;
  dword ***pppdVar8;
  dword ***pppdVar9;
  dword ***pppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  dword *pdVar15;
  long *plVar16;
  long lVar17;
  dword *pdVar18;
  long lVar19;
  int iVar13;
  undefined8 *puVar20;
  ulong uVar21;
  dword *pdVar22;
  long *extraout_x1;
  dword *pdVar23;
  dword *pdVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  dword *pdVar28;
  undefined8 uVar29;
  undefined8 unaff_x21;
  long lVar30;
  long unaff_x23;
  undefined1 *unaff_x24;
  dword *unaff_x25;
  code *pcVar31;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 ***pppuVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  dword ***pppdVar35;
  undefined *puVar36;
  dword **ppdVar37;
  undefined4 extraout_s0;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  dword *pdVar44;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  dword **ppdStack_290;
  undefined8 uStack_288;
  dword **ppdStack_280;
  undefined8 uStack_278;
  dword *pdStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  dword *pdStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  dword *apdStack_1a8 [11];
  dword *apdStack_150 [2];
  dword *pdStack_140;
  dword *pdStack_138;
  dword ****ppppdStack_130;
  undefined *puStack_128;
  dword ***pppdStack_120;
  undefined *puStack_118;
  dword ***pppdStack_110;
  dword *pdStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  dword *pdStack_d8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar29 = 0x3eb5000;
  if ((bRam0000000003eb50fc & 1) == 0) {
    func_0x00f78a20(0x3d2a168);
    func_0x00f78a20(0x3d1b4b8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d56bb8);
    func_0x00f78a20(0x3d56bd8);
    func_0x00f78a20(0x3d405d8);
    bRam0000000003eb50fc = 1;
  }
  pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
  if (pdVar15 == (dword *)0x0) {
LAB_0158c0bc:
    func_0x00f78af4();
  }
  else {
    if (*(char *)(pdVar15 + 0x24) == '\0') {
      return pdVar15;
    }
    if ((*(long *)(param_1 + 200) == 0) ||
       (unaff_x23 = *(long *)(*(long *)(param_1 + 200) + 0x30), unaff_x23 == 0)) goto LAB_0158c0bc;
    unaff_x24 = (undefined1 *)0x3d1b4b8;
    unaff_x25 = (dword *)0x3d56000;
    unaff_x26 = (dword *)0x3d2a000;
    uVar29 = *(undefined8 *)(unaff_x23 + 0x68);
    unaff_x21 = func_0x00f78aec(/*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8);
    /*System.Action<Match>$$.ctor*/ func_0x01b4a378(unaff_x21,param_1,uRam0000000003d56bb8,uRam0000000003d2a168);
    param_3 = (dword *)0x0;
    plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar29,unaff_x21);
    if ((plVar16 == (long *)0x0) || (*plVar16 == /*System.Action<Match>_TypeInfo*/ lRam0000000003d1b4b8)) {
      *(long **)(unaff_x23 + 0x68) = plVar16;
      unaff_x23 = *(long *)(param_1 + 0xd0);
      if (unaff_x23 != 0) {
        unaff_x24 = (undefined1 *)0x3d1fa78;
        unaff_x25 = (dword *)0x3d56000;
        uVar29 = *(undefined8 *)(unaff_x23 + 0x10);
        unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d56bd8,0);
        param_3 = (dword *)0x0;
        plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar29,unaff_x21);
        if ((plVar16 != (long *)0x0) && (*plVar16 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto LAB_0158c0c0;
        *(long **)(unaff_x23 + 0x10) = plVar16;
        pdVar15 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
        if (pdVar15 != (dword *)0x0) {
          *(undefined1 *)(pdVar15 + 0x24) = 0;
          return pdVar15;
        }
      }
      goto LAB_0158c0bc;
    }
  }
LAB_0158c0c0:
  lVar17 = func_0x00f78e5c();
  uStack_80 = 0x3d405d8;
  puStack_58 = &Atlas_Contexts_FrontEndContextLoadoutState__ShowRankRewardScreen;
  pdVar15 = (dword *)0x3d26c00;
  lVar30 = 0x3d405d8;
  puStack_90 = unaff_x24;
  lStack_88 = unaff_x23;
  uStack_78 = unaff_x21;
  uStack_70 = uVar29;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50fe & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56bc0);
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d26c00);
    bRam0000000003eb50fe = 1;
  }
  pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
  /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar18,0);
  lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d405d8);
  if ((lVar19 != 0) && (pdVar18 != (dword *)0x0)) {
    pdVar28 = *(dword **)(lVar19 + 0x18);
    pdVar15 = *(dword **)(lVar19 + 0x10);
    pdVar24 = *(dword **)(lVar19 + 0x28);
    pdVar22 = *(dword **)(lVar19 + 0x20);
    pdVar23 = *(dword **)(lVar19 + 0x30);
    pdVar44 = *(dword **)(lVar19 + 0x48);
    pdVar14 = *(dword **)(lVar19 + 0x40);
    *(dword **)(pdVar18 + 0xe) = *(dword **)(lVar19 + 0x38);
    *(dword **)(pdVar18 + 0xc) = pdVar23;
    *(dword **)(pdVar18 + 0x12) = pdVar44;
    *(dword **)(pdVar18 + 0x10) = pdVar14;
    *(dword **)(pdVar18 + 6) = pdVar28;
    *(dword **)(pdVar18 + 4) = pdVar15;
    *(dword **)(pdVar18 + 10) = pdVar24;
    *(dword **)(pdVar18 + 8) = pdVar22;
    lVar30 = *(long *)(lVar17 + 0x98);
    pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    param_3 = pdRam0000000003d56bc0;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar15,lVar17,pdRam0000000003d56bc0,0);
    if (lVar30 != 0) {
      param_3 = pdVar15;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar30,0,pdVar15,0);
      pdVar28 = *(dword **)(lVar17 + 0x90);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar33 = puStack_90;
      lVar17 = 0;
      if (pdVar28 != (dword *)0x0) {
        pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
        pdVar24 = (dword *)0x0;
        uVar29 = 0;
        pdVar15 = (dword *)0x0;
        pdVar23 = pdVar18;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        puStack_98 = (undefined *)0x0;
        pdVar14 = *(dword **)(pdVar28 + 4);
        pdStack_b0 = (dword *)&puStack_60;
        if (pdVar14 != (dword *)0x0) {
          pdVar24 = (dword *)0x0;
          uVar29 = 0;
          puStack_a8 = &UNK_01470820;
          pdVar44 = pdVar22;
          pdVar23 = pdVar18;
code_r0x02f87f38:
          puStack_e0 = puVar33;
          pdStack_d8 = (dword *)0x3eb4000;
          pdStack_c0 = pdVar28;
          pdStack_b8 = pdVar22;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          apdStack_1a8[7] = (dword *)0x3ebc000;
          pdStack_138 = (dword *)&UNK_02f87f9c;
          apdStack_1a8[5] = unaff_x26;
          apdStack_1a8[6] = unaff_x25;
          apdStack_1a8[8] = pdVar44;
          apdStack_1a8[9] = pdVar23;
          apdStack_1a8[10] = (dword *)uVar29;
          apdStack_150[0] = pdVar14;
          apdStack_150[1] = pdVar24;
          pdStack_140 = (dword *)&pdStack_b0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar30 = *(long *)(pdVar14 + 0x1e);
          if (lVar30 != 0) {
            iVar13 = *(int *)(lVar30 + 0x18);
            if (iVar13 < 1) {
              return (dword *)0x0;
            }
            iVar12 = 1;
            pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar30 + 0x18) <= iVar12 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
              if (lVar30 == 0) break;
              uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar30,pdVar44,5,0);
              if ((uVar21 & 1) != 0) {
                return pdVar15;
              }
              pdVar15 = (dword *)(ulong)(iVar12 < iVar13);
              if (iVar13 == iVar12) {
                return pdVar15;
              }
              lVar30 = *(long *)(pdVar14 + 0x1e);
              iVar12 = iVar12 + 1;
            } while (lVar30 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar45 = func_0x00f78af4();
        pdVar44 = auVar45._8_8_;
        pdStack_c0 = (dword *)&pdStack_b0;
        puStack_a8 = &Atlas_UI_AtlasUIManager__ShowScreen;
        pdVar14 = *(dword **)(auVar45._0_8_ + 0x10);
        if (pdVar14 != (dword *)0x0) {
          puStack_a8 = &Atlas_UI_AtlasUIManager__ShowScreen;
          goto code_r0x02f87f38;
        }
        auVar45 = func_0x00f78af4();
        uVar29 = auVar45._8_8_;
        ppdVar37 = &pdStack_c0;
        pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
        lVar30 = *(long *)(auVar45._0_8_ + 0x10);
        if (lVar30 != 0) {
          pdVar24 = (dword *)0x0;
          puStack_e0 = (undefined1 *)0x0;
          pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
          pdStack_d8 = pdVar18;
          pdStack_c0 = (dword *)&pdStack_b0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            pdStack_c0 = (dword *)&pdStack_b0;
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar17 = *(long *)(lVar30 + 0x70);
          if (lVar17 != 0) {
            lVar19 = lVar17;
            if (*(uint *)(lVar17 + 0x18) <= auVar45._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar19 = *(long *)(lVar30 + 0x70);
            }
            if (lVar19 != 0) {
              lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar45._8_4_ * 0x28;
              puStack_118 = *(undefined **)(lVar17 + 0x28);
              pppdStack_120 = *(dword ****)(lVar17 + 0x20);
              puStack_128 = (undefined *)CONCAT26(puStack_128._6_2_,*(undefined6 *)(lVar17 + 0x42));
              pdStack_100 = (dword *)0x0;
              pdStack_f8 = (dword *)0x0;
              uStack_f0 = (undefined1 **)
                          CONCAT26(*(undefined2 *)(lVar17 + 0x46),
                                   CONCAT42(*(undefined4 *)(lVar17 + 0x42),1));
              pppdStack_110 = pppdStack_120;
              pdStack_108 = (dword *)puStack_118;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar29,&pppdStack_110,uRam0000000003d3ddd0);
              pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,uVar29);
              return pdVar15;
            }
          }
          auVar45 = func_0x00f78af4();
          pdVar14 = auVar45._8_8_;
          ppdVar6 = apdStack_1a8 + 9;
          apdStack_1a8[9] = (dword *)0x0;
          pdStack_138 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          puVar33 = (undefined1 *)&pdStack_140;
          apdStack_1a8[10] = (dword *)lVar17;
          apdStack_150[0] = (dword *)lVar30;
          apdStack_150[1] = (dword *)uVar29;
          pdStack_140 = (dword *)&pdStack_c0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar30 = *(long *)(auVar45._0_8_ + 0x70);
          if (lVar30 == 0) {
            puVar36 = &Core_UI2_UIScreen__ForceExit;
            pdVar22 = (dword *)func_0x00f78af4();
            pdVar28 = (dword *)0x0;
            pdVar18 = (dword *)0x3ebc000;
            goto code_r0x02f882d8;
          }
          if (*(uint *)(lVar30 + 0x18) <= auVar45._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
          if (lVar30 == 0) {
            pdVar15 = (dword *)0x0;
          }
          else {
            pdVar15 = *(dword **)(lVar30 + 0x40);
          }
          return pdVar15;
        }
        auVar45 = func_0x00f78af4();
        pdVar14 = auVar45._8_8_;
        puVar34 = &stack0xffffffffffffff30;
        lVar30 = *(long *)(auVar45._0_8_ + 0x10);
        auVar45._8_8_ = pdVar18;
        auVar45._0_8_ = lVar30;
        if (lVar30 != 0) {
          pdVar24 = (dword *)0x0;
          ppdVar5 = &pdStack_c0;
          puVar36 = &Atlas_UI_AtlasUIManager__ClearLayer;
          pdVar18 = pdVar28;
          goto code_r0x02f877a8;
        }
        auVar45 = func_0x00f78af4();
        puStack_e0 = &stack0xffffffffffffff30;
        pdStack_d8 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar30 = *(long *)(auVar45._0_8_ + 0x10);
        auVar45._8_8_ = auVar45._8_8_;
        auVar45._0_8_ = lVar30;
        if (lVar30 != 0) {
          puVar7 = &stack0xffffffffffffff30;
          puVar36 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar14 = pdVar24;
          while( true ) {
            ppdVar5 = (dword **)(puVar7 + -0x30);
            *(dword **)(puVar7 + -0x30) = pdVar15;
            *(dword **)(puVar7 + -0x28) = pdVar18;
            *(dword **)(puVar7 + -0x20) = pdVar28;
            *(dword **)(puVar7 + -0x18) = pdVar22;
            *(undefined1 **)(puVar7 + -0x10) = puVar34;
            *(undefined **)(puVar7 + -8) = puVar36;
            ppdVar37 = (dword **)(puVar7 + -0x10);
            puVar36 = &UNK_02f883d8;
            pdVar24 = pdVar14;
            pdVar22 = pdVar23;
            pdVar18 = pdVar14;
            pdVar15 = auVar45._0_8_;
code_r0x02f877a8:
            pdVar28 = auVar45._0_8_;
            ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
            *(dword **)((long)ppdVar5 + -0x30) = pdVar15;
            *(long *)((long)ppdVar5 + -0x28) = auVar45._8_8_;
            *(dword **)((long)ppdVar5 + -0x20) = pdVar18;
            *(dword **)((long)ppdVar5 + -0x18) = pdVar22;
            *(dword ***)((long)ppdVar5 + -0x10) = ppdVar37;
            *(undefined **)((long)ppdVar5 + -8) = puVar36;
            puVar33 = (undefined1 *)((long)ppdVar5 + -0x10);
            pdVar18 = pdVar28;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar18 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar27 = (uint)pdVar14;
            if (((int)uVar27 < 0) || ((int)pdVar28[0x14] <= (int)uVar27)) {
              return pdVar18;
            }
            pdVar18 = *(dword **)(pdVar28 + 0x1c);
            if (pdVar18 == (dword *)0x0) break;
            if (pdVar18[6] <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(pdVar18 + 4) + ((ulong)pdVar14 & 0xffffffff) * 0x28;
            pdVar15 = *(dword **)(lVar30 + 0x20);
            pdVar22 = *(dword **)(lVar30 + 0x28);
            *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar30 + 0x42);
            *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar30 + 0x46);
            if (pdVar22 == (dword *)0x0) {
              pdVar18 = *(dword **)(pdVar28 + 0x1c);
              if (pdVar18 != (dword *)0x0) {
                *(dword **)((long)ppdVar5 + -0x58) = pdVar15;
                *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
                *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
                *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
                *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
                *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
                *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
                pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(pdVar18,pdVar14,
                                                   (undefined1 *)((long)ppdVar5 + -0x58),
                                                   uRam0000000003d3ddd0);
                return pdVar15;
              }
              break;
            }
            puVar36 = &UNK_02f87848;
            pdVar18 = pdVar22;
code_r0x02f882d8:
            *(dword **)((long)ppdVar6 + -0x20) = pdVar28;
            *(dword **)((long)ppdVar6 + -0x18) = pdVar14;
            *(undefined1 **)((long)ppdVar6 + -0x10) = puVar33;
            *(undefined **)((long)ppdVar6 + -8) = puVar36;
            (**(code **)(*(dword **)pdVar22 + 0x86))
                      (pdVar22,*(undefined8 *)(*(dword **)pdVar22 + 0x88));
            if (*(dword **)(pdVar22 + 10) != (dword *)0x0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword **)(pdVar22 + 10),0);
              pdVar22[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar15 = (dword *)(**(code **)(*(dword **)pdVar22 + 0x8a))
                                           (pdVar22,*(undefined8 *)(*(dword **)pdVar22 + 0x8c));
              return pdVar15;
            }
            func_0x00f78af4();
            puVar7 = (undefined1 *)((long)ppdVar6 + -0x40);
            *(dword **)((long)ppdVar6 + -0x40) = pdVar28;
            *(dword **)((long)ppdVar6 + -0x38) = pdVar22;
            *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
            *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar34 = (undefined1 *)((long)ppdVar6 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar30 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar29 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar29,lVar30);
              pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar15;
            }
            puVar36 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar45 = func_0x00f78af4();
            pdVar14 = pdVar24;
          }
          lVar30 = func_0x00f78af4();
          *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
          *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
          *(dword **)((long)ppdVar5 + -0x90) = pdVar15;
          *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
          *(dword **)((long)ppdVar5 + -0x80) = pdVar28;
          *(dword **)((long)ppdVar5 + -0x78) = pdVar14;
          *(undefined1 **)((long)ppdVar5 + -0x70) = puVar33;
          *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar29 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar29,0);
          if (0 < *(int *)(lVar30 + 0x50)) {
            iVar13 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,iVar13);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar30,iVar13);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar30 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar30);
          *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
          *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
          *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
          *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar29);
          return pdVar15;
        }
        auVar45 = func_0x00f78af4();
        puStack_e8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar30 = *(long *)(auVar45._0_8_ + 0x10);
        if (lVar30 == 0) {
          uStack_f0 = &puStack_e0;
          auVar45 = func_0x00f78af4();
          pppdVar8 = (dword ***)&pdStack_100;
          pdStack_f8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
          lVar30 = *(long *)(auVar45._0_8_ + 0x10);
          auVar47._8_8_ = auVar45._8_8_;
          auVar47._0_8_ = lVar30;
          if (lVar30 != 0) {
            pdVar23 = (dword *)0x0;
            pppdVar8 = (dword ***)&uStack_f0;
            ppdVar37 = (dword **)&Atlas_UI_AtlasUIManager__GetLayerState;
            pdStack_100 = (dword *)&uStack_f0;
            goto code_r0x02f884dc;
          }
          pdStack_100 = (dword *)&uStack_f0;
          auVar45 = func_0x00f78af4();
          pppdVar35 = (dword ***)&pppdStack_110;
          pdStack_108 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
          lVar30 = *(long *)(auVar45._0_8_ + 0x10);
          auVar48._8_8_ = auVar45._8_8_;
          auVar48._0_8_ = lVar30;
          if (lVar30 == 0) {
            pppdStack_110 = (dword ***)&pdStack_100;
            auVar45 = func_0x00f78af4();
            ppppdStack_130 = &pppdStack_120;
            puStack_118 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar30 = *(long *)(auVar45._0_8_ + 0x10);
            auVar49._8_8_ = auVar45._8_8_;
            auVar49._0_8_ = lVar30;
            if (lVar30 == 0) {
              pppdStack_120 = (dword ***)&pppdStack_110;
              pdVar15 = (dword *)func_0x00f78af4();
              apdStack_150[0] = (dword *)0x0;
              puStack_128 = &Atlas_UI_AtlasUIManager___ctor;
              apdStack_150[1] = pdVar18;
              pdStack_140 = pdVar28;
              pdStack_138 = pdVar22;
              ppppdVar4 = &pppdStack_120;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                ppppdVar4 = ppppdStack_130;
              }
              ppppdStack_130 = ppppdVar4;
              uVar29 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar29,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar15 + 0xc) = uVar29;
              return pdVar15;
            }
            pppdVar10 = (dword ***)&pppdStack_110;
            ppdVar37 = (dword **)&Atlas_UI_AtlasUIManager__SetScreenVisible;
            pppdStack_120 = (dword ***)&pppdStack_110;
            goto code_r0x02f88674;
          }
          pppdVar9 = (dword ***)&pdStack_100;
          pdVar15 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
          pdVar23 = pdVar24;
          pdVar24 = pdVar18;
          pppdStack_110 = (dword ***)&pdStack_100;
        }
        else {
          pdVar23 = (dword *)0x0;
          pppdVar8 = (dword ***)&pppdStack_110;
          pppdStack_110 = (dword ***)0x0;
          puStack_e8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_108 = pdVar18;
          pdStack_100 = pdVar28;
          pdStack_f8 = pdVar22;
          uStack_f0 = &puStack_e0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_f0 = &puStack_e0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar27 = auVar45._8_4_;
          if (((int)uVar27 < 0) || (*(int *)(lVar30 + 0x50) <= (int)uVar27)) {
            return (dword *)0x0;
          }
          lVar30 = *(long *)(lVar30 + 0x70);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar17 = *(long *)(lVar30 + 0x10) + ((ulong)auVar45._8_8_ & 0xffffffff) * 0x28;
            lVar30 = *(long *)(lVar17 + 0x28);
            cVar2 = *(char *)(lVar17 + 0x40);
            iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
            if (iVar13 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar30 != 0) && (*(int *)(lVar30 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          ppdVar37 = (dword **)&Core_UI2_UIManager__GetLayerState;
          auVar47 = func_0x00f78af4();
          pdVar28 = (dword *)0x0;
          pdVar22 = auVar45._8_8_;
          pdVar18 = (dword *)0x3ebc000;
code_r0x02f884dc:
          pppdVar9 = pppdVar8 + -6;
          pppdVar8[-6] = (dword **)0x0;
          pppdVar8[-5] = (dword **)pdVar18;
          pppdVar8[-4] = (dword **)pdVar28;
          pppdVar8[-3] = (dword **)pdVar22;
          pppdVar8[-2] = (dword **)&uStack_f0;
          pppdVar8[-1] = ppdVar37;
          pppdVar8 = pppdVar8 + -2;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar30 = *(long *)(auVar47._0_8_ + 0x70);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= auVar47._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar47._8_4_ * 0x28 + 0x28);
            if (lVar30 == 0) {
              pdVar15 = &MACH_HEADER.cputype;
            }
            else {
              pdVar15 = (dword *)(ulong)*(uint *)(lVar30 + 0x4c);
            }
            return pdVar15;
          }
          pdVar15 = (dword *)&Core_UI2_UIManager__EnableInput;
          auVar48 = func_0x00f78af4();
          pdVar28 = (dword *)0x0;
          pdVar22 = auVar47._8_8_;
          pdVar24 = (dword *)0x3ebc000;
        }
        pdVar14 = auVar48._8_8_;
        pdVar18 = auVar48._0_8_;
        pppdVar10 = pppdVar9 + -8;
        pppdVar9[-8] = (dword **)puVar33;
        pppdVar9[-7] = (dword **)0x3eb4000;
        pppdVar9[-6] = (dword **)0x0;
        pppdVar9[-5] = (dword **)pdVar24;
        pppdVar9[-4] = (dword **)pdVar28;
        pppdVar9[-3] = (dword **)pdVar22;
        pppdVar9[-2] = (dword **)pppdVar8;
        pppdVar9[-1] = (dword **)pdVar15;
        pppdVar35 = pppdVar9 + -2;
        pdVar15 = (dword *)0x3ebc000;
        pdVar24 = pdVar23;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(dword **)(pdVar18 + 0x1a) != (dword *)0x0) {
          pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
          pdVar28 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword **)(pdVar18 + 0x1a),pdVar14,pdVar24,0);
          pdVar22 = *(dword **)(pdVar18 + 0x1c);
          pdVar15 = (dword *)0x0;
          if (pdVar22 != (dword *)0x0) {
            uVar27 = auVar48._8_4_;
            if (pdVar22[6] <= uVar27) {
              pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(pdVar22 + 4) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
               (pdVar15 = *(dword **)(pdVar18 + 0xc), pdVar15 == (dword *)0x0)) {
              return pdVar28;
            }
            pdVar28 = *(dword **)(pdVar18 + 0x1c);
            pdVar18 = (dword *)0x0;
            if (pdVar28 != (dword *)0x0) {
              if (pdVar28[6] <= uVar27) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar16 = *(long **)(*(long *)(pdVar28 + 4) + (long)(int)uVar27 * 0x28 + 0x28);
              pppdVar9[-0xc] = (dword **)unaff_x28;
              pppdVar9[-0xb] = (dword **)unaff_x27;
              pppdVar9[-10] = (dword **)unaff_x26;
              pppdVar9[-9] = (dword **)unaff_x25;
              pppdVar9[-8] = pppdVar9[-8];
              pppdVar9[-7] = pppdVar9[-7];
              pppdVar9[-6] = pppdVar9[-6];
              pppdVar9[-5] = pppdVar9[-5];
              pppdVar9[-4] = pppdVar9[-4];
              pppdVar9[-3] = pppdVar9[-3];
              pppdVar9[-2] = pppdVar9[-2];
              pppdVar9[-1] = pppdVar9[-1];
              pppdVar9[-0xd] = (dword **)pdVar15;
              lVar30 = *(long *)(pdVar15 + 0x1a);
              if (lVar30 == 0) {
                ppdVar37 = (dword **)(pppdVar9 + -0xd);
                lVar17 = 1;
              }
              else {
                lVar17 = *(long *)(lVar30 + 0x18);
                if (lVar17 == 0) {
                  return pdVar15;
                }
                ppdVar37 = (dword **)(lVar30 + 0x20);
              }
              lVar30 = 0;
              do {
                pdVar18 = ppdVar37[lVar30];
                pcVar31 = *(code **)(pdVar18 + 4);
                plVar1 = *(long **)(pdVar18 + 8);
                lVar19 = *(long *)(pdVar18 + 10);
                if (*(short *)(lVar19 + 0x48) == -1) {
                  func_0x00f78ad8(lVar19);
                }
                iVar13 = func_0x00f78a4c(lVar19);
                bVar11 = *(char *)(lVar19 + 0x4a) == '\x03';
                if (iVar13 == 0) {
                  if (bVar11) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar18 = (dword *)(*pcVar31)(plVar16,pdVar14,pdVar23,lVar19);
                    }
                    else {
                      if (((*(short *)(lVar19 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar15 + 6) == 0))
                      goto code_r0x01e71aac;
                      iVar13 = func_0x00f78a44(lVar19);
                      iVar12 = func_0x00f78ec0(lVar19);
                      if (iVar13 == 0) {
                        uVar3 = *(ushort *)(lVar19 + 0x48);
                        if (iVar12 == 0) {
                          lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                          pdVar18 = (dword *)(**(code **)(lVar19 + 0x138))
                                                       (plVar1,plVar16,pdVar14,pdVar23,
                                                        *(undefined8 *)(lVar19 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar19 = func_0x00f78a48(lVar19);
                        lVar25 = *plVar1;
                        uVar21 = (ulong)*(ushort *)(lVar25 + 0x12a);
                        if (uVar21 != 0) {
                          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar26 + -2) == lVar19) {
                              puVar20 = (undefined8 *)
                                        (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar26 = piVar26 + 4;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar31 = (code *)*puVar20;
                        puVar20 = (undefined8 *)puVar20[1];
                      }
                      else {
                        if (iVar12 == 0) {
                          uVar29 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar25 = *plVar1;
                          uVar21 = (ulong)*(ushort *)(lVar25 + 0x12a);
                          if (uVar21 != 0) {
                            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                                lVar25 = lVar25 + (long)(int)(*piVar26 +
                                                             (uint)*(ushort *)(lVar19 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar26 = piVar26 + 4;
                              uVar21 = uVar21 - 1;
                            } while (uVar21 != 0);
                          }
                          lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar29 = *(undefined8 *)(lVar25 + 8);
                        }
                        puVar20 = (undefined8 *)func_0x00f78acc(uVar29,lVar19);
                        pcVar31 = (code *)*puVar20;
                      }
                      pdVar18 = (dword *)(*pcVar31)(plVar1,plVar16,pdVar14,pdVar23,puVar20);
                    }
                  }
                  else {
                    if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar15 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar13 = func_0x00f78a44(lVar19);
                    iVar12 = func_0x00f78ec0(lVar19);
                    if (iVar13 == 0) {
                      uVar3 = *(ushort *)(lVar19 + 0x48);
                      if (iVar12 == 0) {
                        lVar19 = *plVar16 + (ulong)uVar3 * 0x10;
                        pdVar18 = (dword *)(**(code **)(lVar19 + 0x138))
                                                     (plVar16,pdVar14,pdVar23,
                                                      *(undefined8 *)(lVar19 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar19 = func_0x00f78a48(lVar19);
                      lVar25 = *plVar16;
                      uVar21 = (ulong)*(ushort *)(lVar25 + 0x12a);
                      if (uVar21 != 0) {
                        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == lVar19) {
                            puVar20 = (undefined8 *)
                                      (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar26 = piVar26 + 4;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
                      puVar20 = (undefined8 *)func_0x00fac1f0(plVar16,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar31 = (code *)*puVar20;
                      puVar20 = (undefined8 *)puVar20[1];
                    }
                    else {
                      if (iVar12 == 0) {
                        uVar29 = *(undefined8 *)
                                  (*plVar16 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar25 = *plVar16;
                        uVar21 = (ulong)*(ushort *)(lVar25 + 0x12a);
                        if (uVar21 != 0) {
                          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                              lVar25 = lVar25 + (long)(int)(*piVar26 +
                                                           (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar26 = piVar26 + 4;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        lVar25 = func_0x00fac1f0(plVar16);
code_r0x01e71cd8:
                        uVar29 = *(undefined8 *)(lVar25 + 8);
                      }
                      puVar20 = (undefined8 *)func_0x00f78acc(uVar29,lVar19);
                      pcVar31 = (code *)*puVar20;
                    }
                    pdVar18 = (dword *)(*pcVar31)(plVar16,pdVar14,pdVar23,puVar20);
                  }
                }
                else {
                  if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar18 = (dword *)(*pcVar31)(plVar1,plVar16,pdVar14,pdVar23,lVar19);
                }
code_r0x01e71bd0:
                lVar30 = lVar30 + 1;
                if (lVar30 == lVar17) {
                  return pdVar18;
                }
              } while( true );
            }
          }
        }
        ppdVar37 = (dword **)&Core_UI2_UIManager__SetScreenVisible;
        auVar49 = func_0x00f78af4();
        pdVar22 = pdVar23;
        pdVar28 = pdVar14;
code_r0x02f88674:
        pdVar23 = auVar49._0_8_;
        pppdVar10[-6] = (dword **)pdVar15;
        pppdVar10[-5] = (dword **)pdVar18;
        pppdVar10[-4] = (dword **)pdVar28;
        pppdVar10[-3] = (dword **)pdVar22;
        pppdVar10[-2] = (dword **)pppdVar35;
        pppdVar10[-1] = ppdVar37;
        pdVar15 = pdVar23;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar30 = *(long *)(pdVar23 + 0x1c);
        if (lVar30 != 0) {
          uVar27 = auVar49._8_4_;
          if (*(uint *)(lVar30 + 0x18) <= uVar27) {
            pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
            return pdVar15;
          }
          lVar30 = *(long *)(pdVar23 + 0x1c);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
            if ((lVar30 != 0) && (plVar16 = *(long **)(lVar30 + 0x28), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar15 = (dword *)(**(code **)(*plVar16 + 0x178))
                                           (plVar16,pdVar24,*(undefined8 *)(*plVar16 + 0x180));
              return pdVar15;
            }
          }
        }
        auVar45 = func_0x00f78af4();
        uVar29 = auVar45._0_8_;
        pppdVar10[-10] = auVar49._8_8_;
        pppdVar10[-9] = (dword **)pdVar24;
        pppdVar10[-8] = (dword **)(pppdVar10 + -2);
        pppdVar10[-7] = (dword **)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
        pppdVar10[-0xd] = (dword **)0x0;
        pppdVar10[-0xe] = (dword **)0x0;
        pppdVar10[-0xb] = (dword **)0x0;
        pppdVar10[-0xc] = (dword **)0x0;
        pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar29,auVar45._8_8_,pppdVar10 + -0xe);
        if ((int)pdVar15 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar29,pppdVar10[-0xc],pppdVar10[-0xb]);
          pppdVar10[-0x11] = pppdVar10[-0xd];
          pppdVar10[-0x12] = pppdVar10[-0xe];
          pppdVar10[-0xf] = pppdVar10[-0xb];
          pppdVar10[-0x10] = pppdVar10[-0xc];
          pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar29,pppdVar10 + -0x12,1);
        }
        return pdVar15;
      }
    }
  }
  auVar46 = func_0x00f78af4();
  lVar19 = auVar46._0_8_;
  puStack_98 = &Atlas_Contexts_FrontEndContextLoadoutState__OnLoadoutTypeSelected;
  pppuVar32 = &ppuStack_a0;
  pdStack_c0 = pdVar15;
  pdStack_b8 = (dword *)lVar30;
  pdStack_b0 = pdVar18;
  puStack_a8 = (undefined *)lVar17;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb50ff & 1) == 0) {
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d405e0);
    bRam0000000003eb50ff = 1;
  }
  puStack_e8 = (undefined *)0x0;
  uStack_f0 = (undefined1 **)0x0;
  pdStack_d8 = (dword *)0x0;
  puStack_e0 = (undefined1 *)0x0;
  pdStack_108 = (dword *)0x0;
  pppdStack_110 = (dword ***)0x0;
  pdStack_f8 = (dword *)0x0;
  pdStack_100 = (dword *)0x0;
  switch(auVar46._8_8_ & 0xffffffff) {
  case 0:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x10) = param_3;
    break;
  case 1:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x18) = param_3;
    break;
  case 2:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x20) = param_3;
    break;
  case 3:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x28) = param_3;
    break;
  case 4:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x30) = param_3;
  }
  lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar19,uRam0000000003d405e0);
  if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
    pdVar15 = (dword *)/*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
    if ((int)pdVar15 == 0) {
      return pdVar15;
    }
    param_3 = (dword *)0x3d405d8;
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
    if (lVar30 != 0) {
      apdStack_150[1] = *(dword **)(lVar30 + 0x18);
      apdStack_150[0] = *(dword **)(lVar30 + 0x10);
      pdStack_138 = *(dword **)(lVar30 + 0x28);
      pdStack_140 = *(dword **)(lVar30 + 0x20);
      puStack_128 = *(undefined **)(lVar30 + 0x38);
      ppppdStack_130 = *(dword *****)(lVar30 + 0x30);
      puStack_118 = *(undefined **)(lVar30 + 0x48);
      pppdStack_120 = *(dword ****)(lVar30 + 0x40);
      pdVar15 = (dword *)Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked
                                   ((long)apdStack_1a8 + 0x58,*(undefined8 *)(lVar19 + 0xb0),0);
      if ((int)pdVar15 == 0) {
        return pdVar15;
      }
      lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d405d8);
      if (lVar30 != 0) {
        uStack_208 = *(undefined8 *)(lVar30 + 0x18);
        uStack_210 = *(undefined8 *)(lVar30 + 0x10);
        uStack_1f8 = *(undefined8 *)(lVar30 + 0x28);
        uStack_200 = *(undefined8 *)(lVar30 + 0x20);
        uStack_1e8 = *(undefined8 *)(lVar30 + 0x38);
        uStack_1f0 = *(undefined8 *)(lVar30 + 0x30);
        lStack_1d8 = *(long *)(lVar30 + 0x48);
        uStack_1e0 = *(undefined8 *)(lVar30 + 0x40);
        apdStack_1a8[3] = (dword *)uStack_210;
        apdStack_1a8[4] = (dword *)uStack_208;
        apdStack_1a8[5] = (dword *)uStack_200;
        apdStack_1a8[6] = (dword *)uStack_1f8;
        apdStack_1a8[7] = (dword *)uStack_1f0;
        apdStack_1a8[8] = (dword *)uStack_1e8;
        apdStack_1a8[9] = (dword *)uStack_1e0;
        apdStack_1a8[10] = (dword *)lStack_1d8;
        Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                  (&uStack_1d0,&uStack_210,*(undefined8 *)(lVar19 + 0xa0),0);
        uStack_248 = uStack_1c8;
        uStack_250 = uStack_1d0;
        uStack_238 = uStack_1b8;
        uStack_240 = uStack_1c0;
        pdStack_228 = apdStack_1a8[0];
        uStack_230 = uStack_1b0;
        uStack_218 = apdStack_1a8[2];
        uStack_220 = apdStack_1a8[1];
        /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&pppdStack_110,&uStack_250,0);
        if ((*(long *)(lVar19 + 0xc0) != 0) &&
           (lVar30 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x28), lVar30 != 0)) {
          uStack_288 = pdStack_108;
          ppdStack_290 = (dword **)pppdStack_110;
          uStack_278 = pdStack_f8;
          ppdStack_280 = (dword **)pdStack_100;
          uStack_268 = puStack_e8;
          pdStack_270 = (dword *)uStack_f0;
          uStack_258 = pdStack_d8;
          puStack_260 = puStack_e0;
          pdVar15 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar30,&ppdStack_290,0);
          return pdVar15;
        }
      }
    }
  }
code_r0x0158c438:
  puVar36 = &Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted;
  lVar30 = func_0x00f78af4();
  pppdVar8 = &ppdStack_290;
  do {
    *(undefined8 *)((long)pppdVar8 + -0x30) = 0x3eb5000;
    *(long *)((long)pppdVar8 + -0x28) = auVar46._8_8_;
    *(dword **)((long)pppdVar8 + -0x20) = param_3;
    *(long *)((long)pppdVar8 + -0x18) = auVar46._0_8_;
    *(undefined1 ****)((long)pppdVar8 + -0x10) = pppuVar32;
    *(undefined **)((long)pppdVar8 + -8) = puVar36;
    pppuVar32 = (undefined1 ***)((long)pppdVar8 + -0x10);
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    auVar46._8_8_ = 0x3d405d8;
    auVar46._0_8_ = lVar30;
    param_3 = *(dword **)(lVar30 + 0x88);
    if (param_3 == (dword *)0x0) {
code_r0x0158c4e4:
      param_3 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
      if (*(long *)(lVar30 + 0xb8) != 0) {
        uVar29 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar30 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)pppdVar8 + -0x70),uVar29,0);
        if (param_3 != (dword *)0x0) {
          uVar40 = *(undefined8 *)((long)pppdVar8 + -0x48);
          uVar39 = *(undefined8 *)((long)pppdVar8 + -0x50);
          uVar38 = *(undefined8 *)((long)pppdVar8 + -0x38);
          uVar29 = *(undefined8 *)((long)pppdVar8 + -0x40);
          uVar43 = *(undefined8 *)((long)pppdVar8 + -0x70);
          uVar42 = *(undefined8 *)((long)pppdVar8 + -0x58);
          uVar41 = *(undefined8 *)((long)pppdVar8 + -0x60);
          *(undefined8 *)(param_3 + 6) = *(undefined8 *)((long)pppdVar8 + -0x68);
          *(undefined8 *)(param_3 + 4) = uVar43;
          *(undefined8 *)(param_3 + 10) = uVar42;
          *(undefined8 *)(param_3 + 8) = uVar41;
          *(undefined8 *)(param_3 + 0xe) = uVar40;
          *(undefined8 *)(param_3 + 0xc) = uVar39;
          *(undefined8 *)(param_3 + 0x12) = uVar38;
          *(undefined8 *)(param_3 + 0x10) = uVar29;
          lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar30,uRam0000000003d405e0);
          if (lVar17 != 0) {
            param_3 = *(dword **)(lVar17 + 0x18);
            lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
            if ((lVar17 != 0) && (param_3 != (dword *)0x0)) {
              uVar38 = *(undefined8 *)(lVar17 + 0x18);
              uVar29 = *(undefined8 *)(lVar17 + 0x10);
              uVar40 = *(undefined8 *)(lVar17 + 0x28);
              uVar39 = *(undefined8 *)(lVar17 + 0x20);
              uVar41 = *(undefined8 *)(lVar17 + 0x30);
              uVar43 = *(undefined8 *)(lVar17 + 0x48);
              uVar42 = *(undefined8 *)(lVar17 + 0x40);
              *(undefined8 *)(param_3 + 0x16) = *(undefined8 *)(lVar17 + 0x38);
              *(undefined8 *)(param_3 + 0x14) = uVar41;
              *(undefined8 *)(param_3 + 0x1a) = uVar43;
              *(undefined8 *)(param_3 + 0x18) = uVar42;
              *(undefined8 *)(param_3 + 0xe) = uVar38;
              *(undefined8 *)(param_3 + 0xc) = uVar29;
              *(undefined8 *)(param_3 + 0x12) = uVar40;
              *(undefined8 *)(param_3 + 0x10) = uVar39;
              pdVar15 = (dword *)0x0;
              if (*(long *)(lVar30 + 0x78) != 0) {
                pdVar15 = (dword *)/*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar30 + 0x78),param_3,
                                                   uRam0000000003d2a040);
              }
              return pdVar15;
            }
          }
        }
      }
    }
    else {
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
      if (lVar17 != 0) {
        uVar29 = *(undefined8 *)(lVar17 + 0x50);
        uVar39 = *(undefined8 *)(lVar17 + 0x68);
        uVar38 = *(undefined8 *)(lVar17 + 0x60);
        *(undefined8 *)((long)pppdVar8 + -0x68) = *(undefined8 *)(lVar17 + 0x58);
        *(undefined8 *)((long)pppdVar8 + -0x70) = uVar29;
        *(undefined8 *)((long)pppdVar8 + -0x58) = uVar39;
        *(undefined8 *)((long)pppdVar8 + -0x60) = uVar38;
        uVar29 = *(undefined8 *)(lVar17 + 0x70);
        uVar39 = *(undefined8 *)(lVar17 + 0x88);
        uVar38 = *(undefined8 *)(lVar17 + 0x80);
        *(undefined8 *)((long)pppdVar8 + -0x48) = *(undefined8 *)(lVar17 + 0x78);
        *(undefined8 *)((long)pppdVar8 + -0x50) = uVar29;
        *(undefined8 *)((long)pppdVar8 + -0x38) = uVar39;
        *(undefined8 *)((long)pppdVar8 + -0x40) = uVar38;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(param_3,(undefined1 *)((long)pppdVar8 + -0x70),uRam0000000003d2a140);
        goto code_r0x0158c4e4;
      }
    }
    puVar36 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    lVar30 = func_0x00f78af4();
    pppdVar8 = (dword ***)((long)pppdVar8 + -0x70);
  } while( true );
}



// ============================================================
// RVA: 0x158c0c4 | Atlas.Contexts.FrontEndContextLoadoutState.ShowRankRewardScreen
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
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextLoadoutState__ShowRankRewardScreen
                  (long param_1,undefined8 param_2,dword *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword ****ppppdVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  undefined1 *puVar7;
  dword ***pppdVar8;
  dword ***pppdVar9;
  dword ***pppdVar10;
  bool bVar11;
  int iVar12;
  dword *pdVar14;
  dword *pdVar15;
  long lVar16;
  dword *pdVar17;
  int iVar13;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  dword *pdVar21;
  long *extraout_x1;
  long *plVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  dword *pdVar29;
  long lVar30;
  undefined8 unaff_x24;
  dword *unaff_x25;
  code *pcVar31;
  dword *unaff_x26;
  dword *unaff_x27;
  dword *unaff_x28;
  undefined1 **ppuVar32;
  undefined1 *puVar33;
  dword ***pppdVar34;
  undefined *puVar35;
  dword **ppdVar36;
  undefined4 extraout_s0;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  dword *pdVar43;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  dword **ppdStack_240;
  undefined8 uStack_238;
  dword **ppdStack_230;
  undefined8 uStack_228;
  dword *pdStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
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
  dword *pdStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  dword *apdStack_158 [5];
  undefined8 uStack_120;
  dword *pdStack_110;
  long lStack_108;
  dword *apdStack_100 [2];
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword ****ppppdStack_e0;
  undefined *puStack_d8;
  dword ***pppdStack_d0;
  undefined *puStack_c8;
  dword ***pppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  dword *pdStack_88;
  dword *pdStack_70;
  dword *pdStack_68;
  dword *pdStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pdVar17 = (dword *)0x3d26c00;
  lVar30 = 0x3d405d8;
  if ((bRam0000000003eb50fe & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56bc0);
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d26c00);
    bRam0000000003eb50fe = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterRewardScreen.TransitionData_TypeInfo*/ uRam0000000003d26c00);
  /*Atlas.UI.Screens.CharacterRewardScreen.TransitionData$$.ctor*/ func_0x015477d8(pdVar15,0);
  lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
  if ((lVar16 != 0) && (pdVar15 != (dword *)0x0)) {
    pdVar29 = *(dword **)(lVar16 + 0x18);
    pdVar17 = *(dword **)(lVar16 + 0x10);
    pdVar24 = *(dword **)(lVar16 + 0x28);
    pdVar21 = *(dword **)(lVar16 + 0x20);
    pdVar23 = *(dword **)(lVar16 + 0x30);
    pdVar43 = *(dword **)(lVar16 + 0x48);
    pdVar14 = *(dword **)(lVar16 + 0x40);
    *(dword **)(pdVar15 + 0xe) = *(dword **)(lVar16 + 0x38);
    *(dword **)(pdVar15 + 0xc) = pdVar23;
    *(dword **)(pdVar15 + 0x12) = pdVar43;
    *(dword **)(pdVar15 + 0x10) = pdVar14;
    *(dword **)(pdVar15 + 6) = pdVar29;
    *(dword **)(pdVar15 + 4) = pdVar17;
    *(dword **)(pdVar15 + 10) = pdVar24;
    *(dword **)(pdVar15 + 8) = pdVar21;
    lVar30 = *(long *)(param_1 + 0x98);
    pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    param_3 = pdRam0000000003d56bc0;
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar17,param_1,pdRam0000000003d56bc0,0);
    if (lVar30 != 0) {
      param_3 = pdVar17;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar30,0,pdVar17,0);
      pdVar29 = *(dword **)(param_1 + 0x90);
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_1 = 0;
      if (pdVar29 != (dword *)0x0) {
        pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xc0);
        pdVar24 = (dword *)0x0;
        uVar25 = 0;
        pdVar17 = (dword *)0x0;
        pdVar23 = pdVar15;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        puStack_48 = (undefined *)0x0;
        pdVar14 = *(dword **)(pdVar29 + 4);
        pdStack_60 = (dword *)&stack0xfffffffffffffff0;
        if (pdVar14 != (dword *)0x0) {
          pdVar24 = (dword *)0x0;
          uVar25 = 0;
          puStack_58 = &UNK_01470820;
          pdVar43 = pdVar21;
          pdVar23 = pdVar15;
code_r0x02f87f38:
          pdStack_88 = (dword *)0x3eb4000;
          pdStack_70 = pdVar29;
          pdStack_68 = pdVar21;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          uStack_120 = 0x3ebc000;
          pdStack_e8 = (dword *)&UNK_02f87f9c;
          pdStack_110 = pdVar23;
          lStack_108 = uVar25;
          apdStack_100[0] = pdVar14;
          apdStack_100[1] = pdVar24;
          pdStack_f0 = (dword *)&pdStack_60;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar30 = *(long *)(pdVar14 + 0x1e);
          if (lVar30 != 0) {
            iVar13 = *(int *)(lVar30 + 0x18);
            if (iVar13 < 1) {
              return (dword *)0x0;
            }
            iVar12 = 1;
            pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar30 + 0x18) <= iVar12 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
              if (lVar30 == 0) break;
              uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar30,pdVar43,5,0);
              if ((uVar19 & 1) != 0) {
                return pdVar17;
              }
              pdVar17 = (dword *)(ulong)(iVar12 < iVar13);
              if (iVar13 == iVar12) {
                return pdVar17;
              }
              lVar30 = *(long *)(pdVar14 + 0x1e);
              iVar12 = iVar12 + 1;
            } while (lVar30 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar44 = func_0x00f78af4();
        pdVar43 = auVar44._8_8_;
        pdStack_70 = (dword *)&pdStack_60;
        puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
        pdVar14 = *(dword **)(auVar44._0_8_ + 0x10);
        if (pdVar14 != (dword *)0x0) {
          puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
          goto code_r0x02f87f38;
        }
        auVar44 = func_0x00f78af4();
        uVar25 = auVar44._8_8_;
        ppdVar36 = &pdStack_70;
        pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
        lVar30 = *(long *)(auVar44._0_8_ + 0x10);
        if (lVar30 != 0) {
          pdVar24 = (dword *)0x0;
          puStack_90 = (undefined1 *)0x0;
          pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
          pdStack_88 = pdVar15;
          pdStack_70 = (dword *)&pdStack_60;
          if ((bRam0000000003ebc64b & 1) == 0) {
            pdStack_70 = (dword *)&pdStack_60;
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar16 = *(long *)(lVar30 + 0x70);
          if (lVar16 != 0) {
            lVar20 = lVar16;
            if (*(uint *)(lVar16 + 0x18) <= auVar44._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar20 = *(long *)(lVar30 + 0x70);
            }
            if (lVar20 != 0) {
              lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)auVar44._8_4_ * 0x28;
              puStack_c8 = *(undefined **)(lVar16 + 0x28);
              pppdStack_d0 = *(dword ****)(lVar16 + 0x20);
              puStack_d8 = (undefined *)CONCAT26(puStack_d8._6_2_,*(undefined6 *)(lVar16 + 0x42));
              pdStack_b0 = (dword *)0x0;
              pdStack_a8 = (dword *)0x0;
              uStack_a0 = (undefined1 **)
                          CONCAT26(*(undefined2 *)(lVar16 + 0x46),
                                   CONCAT42(*(undefined4 *)(lVar16 + 0x42),1));
              pppdStack_c0 = pppdStack_d0;
              pdStack_b8 = (dword *)puStack_c8;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar25,&pppdStack_c0,uRam0000000003d3ddd0);
              pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,uVar25);
              return pdVar17;
            }
          }
          auVar44 = func_0x00f78af4();
          pdVar14 = auVar44._8_8_;
          ppdVar6 = &stack0xfffffffffffffef0;
          pdStack_110 = (dword *)0x0;
          pdStack_e8 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          puVar33 = (undefined1 *)&pdStack_f0;
          lStack_108 = lVar16;
          apdStack_100[0] = (dword *)lVar30;
          apdStack_100[1] = (dword *)uVar25;
          pdStack_f0 = (dword *)&pdStack_70;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar30 = *(long *)(auVar44._0_8_ + 0x70);
          if (lVar30 == 0) {
            puVar35 = &Core_UI2_UIScreen__ForceExit;
            pdVar21 = (dword *)func_0x00f78af4();
            pdVar29 = (dword *)0x0;
            pdVar15 = (dword *)0x3ebc000;
            goto code_r0x02f882d8;
          }
          if (*(uint *)(lVar30 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
          if (lVar30 == 0) {
            pdVar17 = (dword *)0x0;
          }
          else {
            pdVar17 = *(dword **)(lVar30 + 0x40);
          }
          return pdVar17;
        }
        auVar44 = func_0x00f78af4();
        pdVar14 = auVar44._8_8_;
        puVar33 = &stack0xffffffffffffff80;
        lVar30 = *(long *)(auVar44._0_8_ + 0x10);
        auVar44._8_8_ = pdVar15;
        auVar44._0_8_ = lVar30;
        if (lVar30 != 0) {
          pdVar24 = (dword *)0x0;
          ppdVar5 = &pdStack_70;
          puVar35 = &Atlas_UI_AtlasUIManager__ClearLayer;
          pdVar15 = pdVar29;
          goto code_r0x02f877a8;
        }
        auVar44 = func_0x00f78af4();
        puStack_90 = &stack0xffffffffffffff80;
        pdStack_88 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar30 = *(long *)(auVar44._0_8_ + 0x10);
        auVar44._8_8_ = auVar44._8_8_;
        auVar44._0_8_ = lVar30;
        if (lVar30 != 0) {
          puVar7 = &stack0xffffffffffffff80;
          puVar35 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar14 = pdVar24;
          while( true ) {
            ppdVar5 = (dword **)(puVar7 + -0x30);
            *(dword **)(puVar7 + -0x30) = pdVar17;
            *(dword **)(puVar7 + -0x28) = pdVar15;
            *(dword **)(puVar7 + -0x20) = pdVar29;
            *(dword **)(puVar7 + -0x18) = pdVar21;
            *(undefined1 **)(puVar7 + -0x10) = puVar33;
            *(undefined **)(puVar7 + -8) = puVar35;
            ppdVar36 = (dword **)(puVar7 + -0x10);
            puVar35 = &UNK_02f883d8;
            pdVar24 = pdVar14;
            pdVar21 = pdVar23;
            pdVar15 = pdVar14;
            pdVar17 = auVar44._0_8_;
code_r0x02f877a8:
            pdVar29 = auVar44._0_8_;
            ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
            *(dword **)((long)ppdVar5 + -0x30) = pdVar17;
            *(long *)((long)ppdVar5 + -0x28) = auVar44._8_8_;
            *(dword **)((long)ppdVar5 + -0x20) = pdVar15;
            *(dword **)((long)ppdVar5 + -0x18) = pdVar21;
            *(dword ***)((long)ppdVar5 + -0x10) = ppdVar36;
            *(undefined **)((long)ppdVar5 + -8) = puVar35;
            puVar33 = (undefined1 *)((long)ppdVar5 + -0x10);
            pdVar15 = pdVar29;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar28 = (uint)pdVar14;
            if (((int)uVar28 < 0) || ((int)pdVar29[0x14] <= (int)uVar28)) {
              return pdVar15;
            }
            pdVar15 = *(dword **)(pdVar29 + 0x1c);
            if (pdVar15 == (dword *)0x0) break;
            if (pdVar15[6] <= uVar28) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(pdVar15 + 4) + ((ulong)pdVar14 & 0xffffffff) * 0x28;
            pdVar17 = *(dword **)(lVar30 + 0x20);
            pdVar21 = *(dword **)(lVar30 + 0x28);
            *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar30 + 0x42);
            *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar30 + 0x46);
            if (pdVar21 == (dword *)0x0) {
              pdVar15 = *(dword **)(pdVar29 + 0x1c);
              if (pdVar15 != (dword *)0x0) {
                *(dword **)((long)ppdVar5 + -0x58) = pdVar17;
                *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
                *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
                *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
                *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
                *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
                *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
                pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(pdVar15,pdVar14,
                                                   (undefined1 *)((long)ppdVar5 + -0x58),
                                                   uRam0000000003d3ddd0);
                return pdVar17;
              }
              break;
            }
            puVar35 = &UNK_02f87848;
            pdVar15 = pdVar21;
code_r0x02f882d8:
            *(dword **)((long)ppdVar6 + -0x20) = pdVar29;
            *(dword **)((long)ppdVar6 + -0x18) = pdVar14;
            *(undefined1 **)((long)ppdVar6 + -0x10) = puVar33;
            *(undefined **)((long)ppdVar6 + -8) = puVar35;
            (**(code **)(*(dword **)pdVar21 + 0x86))
                      (pdVar21,*(undefined8 *)(*(dword **)pdVar21 + 0x88));
            if (*(dword **)(pdVar21 + 10) != (dword *)0x0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(dword **)(pdVar21 + 10),0);
              pdVar21[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar17 = (dword *)(**(code **)(*(dword **)pdVar21 + 0x8a))
                                           (pdVar21,*(undefined8 *)(*(dword **)pdVar21 + 0x8c));
              return pdVar17;
            }
            func_0x00f78af4();
            puVar7 = (undefined1 *)((long)ppdVar6 + -0x40);
            *(dword **)((long)ppdVar6 + -0x40) = pdVar29;
            *(dword **)((long)ppdVar6 + -0x38) = pdVar21;
            *(undefined1 **)((long)ppdVar6 + -0x30) = (undefined1 *)((long)ppdVar6 + -0x10);
            *(undefined **)((long)ppdVar6 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar33 = (undefined1 *)((long)ppdVar6 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar30 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar25 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar30);
              pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar17;
            }
            puVar35 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar44 = func_0x00f78af4();
            pdVar14 = pdVar24;
          }
          lVar30 = func_0x00f78af4();
          *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
          *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
          *(dword **)((long)ppdVar5 + -0x90) = pdVar17;
          *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
          *(dword **)((long)ppdVar5 + -0x80) = pdVar29;
          *(dword **)((long)ppdVar5 + -0x78) = pdVar14;
          *(undefined1 **)((long)ppdVar5 + -0x70) = puVar33;
          *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
          if (0 < *(int *)(lVar30 + 0x50)) {
            iVar13 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar30,iVar13);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar30,iVar13);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar30 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar30);
          *(undefined8 *)((long)ppdVar5 + -0x80) = *(undefined8 *)((long)ppdVar5 + -0x80);
          *(undefined8 *)((long)ppdVar5 + -0x78) = *(undefined8 *)((long)ppdVar5 + -0x78);
          *(undefined8 *)((long)ppdVar5 + -0x70) = *(undefined8 *)((long)ppdVar5 + -0x70);
          *(undefined8 *)((long)ppdVar5 + -0x68) = *(undefined8 *)((long)ppdVar5 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
          return pdVar17;
        }
        auVar44 = func_0x00f78af4();
        puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar30 = *(long *)(auVar44._0_8_ + 0x10);
        if (lVar30 == 0) {
          uStack_a0 = &puStack_90;
          auVar44 = func_0x00f78af4();
          pppdVar8 = (dword ***)&pdStack_b0;
          pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
          lVar30 = *(long *)(auVar44._0_8_ + 0x10);
          auVar46._8_8_ = auVar44._8_8_;
          auVar46._0_8_ = lVar30;
          if (lVar30 != 0) {
            pdVar23 = (dword *)0x0;
            pppdVar8 = (dword ***)&uStack_a0;
            ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__GetLayerState;
            pdStack_b0 = (dword *)&uStack_a0;
            goto code_r0x02f884dc;
          }
          pdStack_b0 = (dword *)&uStack_a0;
          auVar44 = func_0x00f78af4();
          pppdVar34 = (dword ***)&pppdStack_c0;
          pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
          lVar30 = *(long *)(auVar44._0_8_ + 0x10);
          auVar47._8_8_ = auVar44._8_8_;
          auVar47._0_8_ = lVar30;
          if (lVar30 == 0) {
            pppdStack_c0 = (dword ***)&pdStack_b0;
            auVar44 = func_0x00f78af4();
            ppppdStack_e0 = &pppdStack_d0;
            puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar30 = *(long *)(auVar44._0_8_ + 0x10);
            auVar48._8_8_ = auVar44._8_8_;
            auVar48._0_8_ = lVar30;
            if (lVar30 == 0) {
              pppdStack_d0 = (dword ***)&pppdStack_c0;
              pdVar17 = (dword *)func_0x00f78af4();
              apdStack_100[0] = (dword *)0x0;
              puStack_d8 = &Atlas_UI_AtlasUIManager___ctor;
              apdStack_100[1] = pdVar15;
              pdStack_f0 = pdVar29;
              pdStack_e8 = pdVar21;
              ppppdVar4 = &pppdStack_d0;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                ppppdVar4 = ppppdStack_e0;
              }
              ppppdStack_e0 = ppppdVar4;
              uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar17 + 0xc) = uVar25;
              return pdVar17;
            }
            pppdVar10 = (dword ***)&pppdStack_c0;
            ppdVar36 = (dword **)&Atlas_UI_AtlasUIManager__SetScreenVisible;
            pppdStack_d0 = (dword ***)&pppdStack_c0;
            goto code_r0x02f88674;
          }
          pppdVar9 = (dword ***)&pdStack_b0;
          pdVar17 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
          pdVar23 = pdVar24;
          pdVar24 = pdVar15;
          pppdStack_c0 = (dword ***)&pdStack_b0;
        }
        else {
          pdVar23 = (dword *)0x0;
          pppdVar8 = (dword ***)&pppdStack_c0;
          pppdStack_c0 = (dword ***)0x0;
          puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_b8 = pdVar15;
          pdStack_b0 = pdVar29;
          pdStack_a8 = pdVar21;
          uStack_a0 = &puStack_90;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_a0 = &puStack_90;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar28 = auVar44._8_4_;
          if (((int)uVar28 < 0) || (*(int *)(lVar30 + 0x50) <= (int)uVar28)) {
            return (dword *)0x0;
          }
          lVar30 = *(long *)(lVar30 + 0x70);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar28) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar16 = *(long *)(lVar30 + 0x10) + ((ulong)auVar44._8_8_ & 0xffffffff) * 0x28;
            lVar30 = *(long *)(lVar16 + 0x28);
            cVar2 = *(char *)(lVar16 + 0x40);
            iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar16 + 0x30),0);
            if (iVar13 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar30 != 0) && (*(int *)(lVar30 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          ppdVar36 = (dword **)&Core_UI2_UIManager__GetLayerState;
          auVar46 = func_0x00f78af4();
          pdVar29 = (dword *)0x0;
          pdVar21 = auVar44._8_8_;
          pdVar15 = (dword *)0x3ebc000;
code_r0x02f884dc:
          pppdVar9 = pppdVar8 + -6;
          pppdVar8[-6] = (dword **)0x0;
          pppdVar8[-5] = (dword **)pdVar15;
          pppdVar8[-4] = (dword **)pdVar29;
          pppdVar8[-3] = (dword **)pdVar21;
          pppdVar8[-2] = (dword **)&uStack_a0;
          pppdVar8[-1] = ppdVar36;
          pppdVar8 = pppdVar8 + -2;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar30 = *(long *)(auVar46._0_8_ + 0x70);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= auVar46._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)auVar46._8_4_ * 0x28 + 0x28);
            if (lVar30 == 0) {
              pdVar17 = &MACH_HEADER.cputype;
            }
            else {
              pdVar17 = (dword *)(ulong)*(uint *)(lVar30 + 0x4c);
            }
            return pdVar17;
          }
          pdVar17 = (dword *)&Core_UI2_UIManager__EnableInput;
          auVar47 = func_0x00f78af4();
          pdVar29 = (dword *)0x0;
          pdVar21 = auVar46._8_8_;
          pdVar24 = (dword *)0x3ebc000;
        }
        pdVar14 = auVar47._8_8_;
        pdVar15 = auVar47._0_8_;
        pppdVar10 = pppdVar9 + -8;
        pppdVar9[-8] = (dword **)unaff_x24;
        pppdVar9[-7] = (dword **)0x3eb4000;
        pppdVar9[-6] = (dword **)0x0;
        pppdVar9[-5] = (dword **)pdVar24;
        pppdVar9[-4] = (dword **)pdVar29;
        pppdVar9[-3] = (dword **)pdVar21;
        pppdVar9[-2] = (dword **)pppdVar8;
        pppdVar9[-1] = (dword **)pdVar17;
        pppdVar34 = pppdVar9 + -2;
        pdVar17 = (dword *)0x3ebc000;
        pdVar24 = pdVar23;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(dword **)(pdVar15 + 0x1a) != (dword *)0x0) {
          pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
          pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(dword **)(pdVar15 + 0x1a),pdVar14,pdVar24,0);
          pdVar21 = *(dword **)(pdVar15 + 0x1c);
          pdVar17 = (dword *)0x0;
          if (pdVar21 != (dword *)0x0) {
            uVar28 = auVar47._8_4_;
            if (pdVar21[6] <= uVar28) {
              pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(pdVar21 + 4) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
               (pdVar17 = *(dword **)(pdVar15 + 0xc), pdVar17 == (dword *)0x0)) {
              return pdVar29;
            }
            pdVar29 = *(dword **)(pdVar15 + 0x1c);
            pdVar15 = (dword *)0x0;
            if (pdVar29 != (dword *)0x0) {
              if (pdVar29[6] <= uVar28) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar22 = *(long **)(*(long *)(pdVar29 + 4) + (long)(int)uVar28 * 0x28 + 0x28);
              pppdVar9[-0xc] = (dword **)unaff_x28;
              pppdVar9[-0xb] = (dword **)unaff_x27;
              pppdVar9[-10] = (dword **)unaff_x26;
              pppdVar9[-9] = (dword **)unaff_x25;
              pppdVar9[-8] = pppdVar9[-8];
              pppdVar9[-7] = pppdVar9[-7];
              pppdVar9[-6] = pppdVar9[-6];
              pppdVar9[-5] = pppdVar9[-5];
              pppdVar9[-4] = pppdVar9[-4];
              pppdVar9[-3] = pppdVar9[-3];
              pppdVar9[-2] = pppdVar9[-2];
              pppdVar9[-1] = pppdVar9[-1];
              pppdVar9[-0xd] = (dword **)pdVar17;
              lVar30 = *(long *)(pdVar17 + 0x1a);
              if (lVar30 == 0) {
                ppdVar36 = (dword **)(pppdVar9 + -0xd);
                lVar16 = 1;
              }
              else {
                lVar16 = *(long *)(lVar30 + 0x18);
                if (lVar16 == 0) {
                  return pdVar17;
                }
                ppdVar36 = (dword **)(lVar30 + 0x20);
              }
              lVar30 = 0;
              do {
                pdVar15 = ppdVar36[lVar30];
                pcVar31 = *(code **)(pdVar15 + 4);
                plVar1 = *(long **)(pdVar15 + 8);
                lVar20 = *(long *)(pdVar15 + 10);
                if (*(short *)(lVar20 + 0x48) == -1) {
                  func_0x00f78ad8(lVar20);
                }
                iVar13 = func_0x00f78a4c(lVar20);
                bVar11 = *(char *)(lVar20 + 0x4a) == '\x03';
                if (iVar13 == 0) {
                  if (bVar11) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar15 = (dword *)(*pcVar31)(plVar22,pdVar14,pdVar23,lVar20);
                    }
                    else {
                      if (((*(short *)(lVar20 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar17 + 6) == 0))
                      goto code_r0x01e71aac;
                      iVar13 = func_0x00f78a44(lVar20);
                      iVar12 = func_0x00f78ec0(lVar20);
                      if (iVar13 == 0) {
                        uVar3 = *(ushort *)(lVar20 + 0x48);
                        if (iVar12 == 0) {
                          lVar20 = *plVar1 + (ulong)uVar3 * 0x10;
                          pdVar15 = (dword *)(**(code **)(lVar20 + 0x138))
                                                       (plVar1,plVar22,pdVar14,pdVar23,
                                                        *(undefined8 *)(lVar20 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar20 = func_0x00f78a48(lVar20);
                        lVar26 = *plVar1;
                        uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                        if (uVar19 != 0) {
                          piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == lVar20) {
                              puVar18 = (undefined8 *)
                                        (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar27 = piVar27 + 4;
                            uVar19 = uVar19 - 1;
                          } while (uVar19 != 0);
                        }
                        puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar31 = (code *)*puVar18;
                        puVar18 = (undefined8 *)puVar18[1];
                      }
                      else {
                        if (iVar12 == 0) {
                          uVar25 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar26 = *plVar1;
                          uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                          if (uVar19 != 0) {
                            piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                                lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                             (uint)*(ushort *)(lVar20 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar27 = piVar27 + 4;
                              uVar19 = uVar19 - 1;
                            } while (uVar19 != 0);
                          }
                          lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar25 = *(undefined8 *)(lVar26 + 8);
                        }
                        puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                        pcVar31 = (code *)*puVar18;
                      }
                      pdVar15 = (dword *)(*pcVar31)(plVar1,plVar22,pdVar14,pdVar23,puVar18);
                    }
                  }
                  else {
                    if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar17 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar13 = func_0x00f78a44(lVar20);
                    iVar12 = func_0x00f78ec0(lVar20);
                    if (iVar13 == 0) {
                      uVar3 = *(ushort *)(lVar20 + 0x48);
                      if (iVar12 == 0) {
                        lVar20 = *plVar22 + (ulong)uVar3 * 0x10;
                        pdVar15 = (dword *)(**(code **)(lVar20 + 0x138))
                                                     (plVar22,pdVar14,pdVar23,
                                                      *(undefined8 *)(lVar20 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar20 = func_0x00f78a48(lVar20);
                      lVar26 = *plVar22;
                      uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                      if (uVar19 != 0) {
                        piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == lVar20) {
                            puVar18 = (undefined8 *)
                                      (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar27 = piVar27 + 4;
                          uVar19 = uVar19 - 1;
                        } while (uVar19 != 0);
                      }
                      puVar18 = (undefined8 *)func_0x00fac1f0(plVar22,lVar20,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar31 = (code *)*puVar18;
                      puVar18 = (undefined8 *)puVar18[1];
                    }
                    else {
                      if (iVar12 == 0) {
                        uVar25 = *(undefined8 *)
                                  (*plVar22 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar26 = *plVar22;
                        uVar19 = (ulong)*(ushort *)(lVar26 + 0x12a);
                        if (uVar19 != 0) {
                          piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == *(long *)(lVar20 + 0x18)) {
                              lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                           (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar27 = piVar27 + 4;
                            uVar19 = uVar19 - 1;
                          } while (uVar19 != 0);
                        }
                        lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                        uVar25 = *(undefined8 *)(lVar26 + 8);
                      }
                      puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar20);
                      pcVar31 = (code *)*puVar18;
                    }
                    pdVar15 = (dword *)(*pcVar31)(plVar22,pdVar14,pdVar23,puVar18);
                  }
                }
                else {
                  if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar15 = (dword *)(*pcVar31)(plVar1,plVar22,pdVar14,pdVar23,lVar20);
                }
code_r0x01e71bd0:
                lVar30 = lVar30 + 1;
                if (lVar30 == lVar16) {
                  return pdVar15;
                }
              } while( true );
            }
          }
        }
        ppdVar36 = (dword **)&Core_UI2_UIManager__SetScreenVisible;
        auVar48 = func_0x00f78af4();
        pdVar21 = pdVar23;
        pdVar29 = pdVar14;
code_r0x02f88674:
        pdVar23 = auVar48._0_8_;
        pppdVar10[-6] = (dword **)pdVar17;
        pppdVar10[-5] = (dword **)pdVar15;
        pppdVar10[-4] = (dword **)pdVar29;
        pppdVar10[-3] = (dword **)pdVar21;
        pppdVar10[-2] = (dword **)pppdVar34;
        pppdVar10[-1] = ppdVar36;
        pdVar17 = pdVar23;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar30 = *(long *)(pdVar23 + 0x1c);
        if (lVar30 != 0) {
          uVar28 = auVar48._8_4_;
          if (*(uint *)(lVar30 + 0x18) <= uVar28) {
            pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
            return pdVar17;
          }
          lVar30 = *(long *)(pdVar23 + 0x1c);
          if (lVar30 != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar28) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
            if ((lVar30 != 0) && (plVar22 = *(long **)(lVar30 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar17 = (dword *)(**(code **)(*plVar22 + 0x178))
                                           (plVar22,pdVar24,*(undefined8 *)(*plVar22 + 0x180));
              return pdVar17;
            }
          }
        }
        auVar44 = func_0x00f78af4();
        uVar25 = auVar44._0_8_;
        pppdVar10[-10] = auVar48._8_8_;
        pppdVar10[-9] = (dword **)pdVar24;
        pppdVar10[-8] = (dword **)(pppdVar10 + -2);
        pppdVar10[-7] = (dword **)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
        pppdVar10[-0xd] = (dword **)0x0;
        pppdVar10[-0xe] = (dword **)0x0;
        pppdVar10[-0xb] = (dword **)0x0;
        pppdVar10[-0xc] = (dword **)0x0;
        pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar44._8_8_,pppdVar10 + -0xe);
        if ((int)pdVar17 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,pppdVar10[-0xc],pppdVar10[-0xb]);
          pppdVar10[-0x11] = pppdVar10[-0xd];
          pppdVar10[-0x12] = pppdVar10[-0xe];
          pppdVar10[-0xf] = pppdVar10[-0xb];
          pppdVar10[-0x10] = pppdVar10[-0xc];
          pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,pppdVar10 + -0x12,1);
        }
        return pdVar17;
      }
    }
  }
  auVar45 = func_0x00f78af4();
  lVar16 = auVar45._0_8_;
  puStack_48 = &Atlas_Contexts_FrontEndContextLoadoutState__OnLoadoutTypeSelected;
  ppuVar32 = &puStack_50;
  pdStack_70 = pdVar17;
  pdStack_68 = (dword *)lVar30;
  pdStack_60 = pdVar15;
  puStack_58 = (undefined *)param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50ff & 1) == 0) {
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d405e0);
    bRam0000000003eb50ff = 1;
  }
  puStack_98 = (undefined *)0x0;
  uStack_a0 = (undefined1 **)0x0;
  pdStack_88 = (dword *)0x0;
  puStack_90 = (undefined1 *)0x0;
  pdStack_b8 = (dword *)0x0;
  pppdStack_c0 = (dword ***)0x0;
  pdStack_a8 = (dword *)0x0;
  pdStack_b0 = (dword *)0x0;
  switch(auVar45._8_8_ & 0xffffffff) {
  case 0:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x10) = param_3;
    break;
  case 1:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x18) = param_3;
    break;
  case 2:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x20) = param_3;
    break;
  case 3:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x28) = param_3;
    break;
  case 4:
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 == 0) goto code_r0x0158c438;
    *(dword **)(lVar30 + 0x30) = param_3;
  }
  lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar16,uRam0000000003d405e0);
  if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
    pdVar17 = (dword *)/*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
    if ((int)pdVar17 == 0) {
      return pdVar17;
    }
    param_3 = (dword *)0x3d405d8;
    lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
    if (lVar30 != 0) {
      apdStack_100[1] = *(dword **)(lVar30 + 0x18);
      apdStack_100[0] = *(dword **)(lVar30 + 0x10);
      pdStack_e8 = *(dword **)(lVar30 + 0x28);
      pdStack_f0 = *(dword **)(lVar30 + 0x20);
      puStack_d8 = *(undefined **)(lVar30 + 0x38);
      ppppdStack_e0 = *(dword *****)(lVar30 + 0x30);
      puStack_c8 = *(undefined **)(lVar30 + 0x48);
      pppdStack_d0 = *(dword ****)(lVar30 + 0x40);
      pdVar17 = (dword *)Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked
                                   (apdStack_100,*(undefined8 *)(lVar16 + 0xb0),0);
      if ((int)pdVar17 == 0) {
        return pdVar17;
      }
      lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar16,uRam0000000003d405d8);
      if (lVar30 != 0) {
        uStack_1b8 = *(undefined8 *)(lVar30 + 0x18);
        uStack_1c0 = *(undefined8 *)(lVar30 + 0x10);
        uStack_1a8 = *(undefined8 *)(lVar30 + 0x28);
        uStack_1b0 = *(undefined8 *)(lVar30 + 0x20);
        uStack_198 = *(undefined8 *)(lVar30 + 0x38);
        uStack_1a0 = *(undefined8 *)(lVar30 + 0x30);
        lStack_188 = *(long *)(lVar30 + 0x48);
        pdStack_190 = *(dword **)(lVar30 + 0x40);
        apdStack_158[3] = (dword *)uStack_1c0;
        apdStack_158[4] = (dword *)uStack_1b8;
        uStack_120 = uStack_1a0;
        pdStack_110 = pdStack_190;
        lStack_108 = lStack_188;
        Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                  (&uStack_180,&uStack_1c0,*(undefined8 *)(lVar16 + 0xa0),0);
        uStack_1f8 = uStack_178;
        uStack_200 = uStack_180;
        uStack_1e8 = uStack_168;
        uStack_1f0 = uStack_170;
        uStack_1d8 = apdStack_158[0];
        uStack_1e0 = uStack_160;
        uStack_1c8 = apdStack_158[2];
        uStack_1d0 = apdStack_158[1];
        /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&pppdStack_c0,&uStack_200,0);
        if ((*(long *)(lVar16 + 0xc0) != 0) &&
           (lVar30 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28), lVar30 != 0)) {
          uStack_238 = pdStack_b8;
          ppdStack_240 = (dword **)pppdStack_c0;
          uStack_228 = pdStack_a8;
          ppdStack_230 = (dword **)pdStack_b0;
          uStack_218 = puStack_98;
          pdStack_220 = (dword *)uStack_a0;
          uStack_208 = pdStack_88;
          puStack_210 = puStack_90;
          pdVar17 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar30,&ppdStack_240,0);
          return pdVar17;
        }
      }
    }
  }
code_r0x0158c438:
  puVar35 = &Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted;
  lVar30 = func_0x00f78af4();
  pppdVar8 = &ppdStack_240;
  do {
    *(undefined8 *)((long)pppdVar8 + -0x30) = 0x3eb5000;
    *(long *)((long)pppdVar8 + -0x28) = auVar45._8_8_;
    *(dword **)((long)pppdVar8 + -0x20) = param_3;
    *(long *)((long)pppdVar8 + -0x18) = auVar45._0_8_;
    *(undefined1 ***)((long)pppdVar8 + -0x10) = ppuVar32;
    *(undefined **)((long)pppdVar8 + -8) = puVar35;
    ppuVar32 = (undefined1 **)((long)pppdVar8 + -0x10);
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    auVar45._8_8_ = 0x3d405d8;
    auVar45._0_8_ = lVar30;
    param_3 = *(dword **)(lVar30 + 0x88);
    if (param_3 == (dword *)0x0) {
code_r0x0158c4e4:
      param_3 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
      if (*(long *)(lVar30 + 0xb8) != 0) {
        uVar25 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar30 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame((undefined1 *)((long)pppdVar8 + -0x70),uVar25,0);
        if (param_3 != (dword *)0x0) {
          uVar39 = *(undefined8 *)((long)pppdVar8 + -0x48);
          uVar38 = *(undefined8 *)((long)pppdVar8 + -0x50);
          uVar37 = *(undefined8 *)((long)pppdVar8 + -0x38);
          uVar25 = *(undefined8 *)((long)pppdVar8 + -0x40);
          uVar42 = *(undefined8 *)((long)pppdVar8 + -0x70);
          uVar41 = *(undefined8 *)((long)pppdVar8 + -0x58);
          uVar40 = *(undefined8 *)((long)pppdVar8 + -0x60);
          *(undefined8 *)(param_3 + 6) = *(undefined8 *)((long)pppdVar8 + -0x68);
          *(undefined8 *)(param_3 + 4) = uVar42;
          *(undefined8 *)(param_3 + 10) = uVar41;
          *(undefined8 *)(param_3 + 8) = uVar40;
          *(undefined8 *)(param_3 + 0xe) = uVar39;
          *(undefined8 *)(param_3 + 0xc) = uVar38;
          *(undefined8 *)(param_3 + 0x12) = uVar37;
          *(undefined8 *)(param_3 + 0x10) = uVar25;
          lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar30,uRam0000000003d405e0);
          if (lVar16 != 0) {
            param_3 = *(dword **)(lVar16 + 0x18);
            lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
            if ((lVar16 != 0) && (param_3 != (dword *)0x0)) {
              uVar37 = *(undefined8 *)(lVar16 + 0x18);
              uVar25 = *(undefined8 *)(lVar16 + 0x10);
              uVar39 = *(undefined8 *)(lVar16 + 0x28);
              uVar38 = *(undefined8 *)(lVar16 + 0x20);
              uVar40 = *(undefined8 *)(lVar16 + 0x30);
              uVar42 = *(undefined8 *)(lVar16 + 0x48);
              uVar41 = *(undefined8 *)(lVar16 + 0x40);
              *(undefined8 *)(param_3 + 0x16) = *(undefined8 *)(lVar16 + 0x38);
              *(undefined8 *)(param_3 + 0x14) = uVar40;
              *(undefined8 *)(param_3 + 0x1a) = uVar42;
              *(undefined8 *)(param_3 + 0x18) = uVar41;
              *(undefined8 *)(param_3 + 0xe) = uVar37;
              *(undefined8 *)(param_3 + 0xc) = uVar25;
              *(undefined8 *)(param_3 + 0x12) = uVar39;
              *(undefined8 *)(param_3 + 0x10) = uVar38;
              pdVar17 = (dword *)0x0;
              if (*(long *)(lVar30 + 0x78) != 0) {
                pdVar17 = (dword *)/*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar30 + 0x78),param_3,
                                                   uRam0000000003d2a040);
              }
              return pdVar17;
            }
          }
        }
      }
    }
    else {
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d405d8);
      if (lVar16 != 0) {
        uVar25 = *(undefined8 *)(lVar16 + 0x50);
        uVar38 = *(undefined8 *)(lVar16 + 0x68);
        uVar37 = *(undefined8 *)(lVar16 + 0x60);
        *(undefined8 *)((long)pppdVar8 + -0x68) = *(undefined8 *)(lVar16 + 0x58);
        *(undefined8 *)((long)pppdVar8 + -0x70) = uVar25;
        *(undefined8 *)((long)pppdVar8 + -0x58) = uVar38;
        *(undefined8 *)((long)pppdVar8 + -0x60) = uVar37;
        uVar25 = *(undefined8 *)(lVar16 + 0x70);
        uVar38 = *(undefined8 *)(lVar16 + 0x88);
        uVar37 = *(undefined8 *)(lVar16 + 0x80);
        *(undefined8 *)((long)pppdVar8 + -0x48) = *(undefined8 *)(lVar16 + 0x78);
        *(undefined8 *)((long)pppdVar8 + -0x50) = uVar25;
        *(undefined8 *)((long)pppdVar8 + -0x38) = uVar38;
        *(undefined8 *)((long)pppdVar8 + -0x40) = uVar37;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(param_3,(undefined1 *)((long)pppdVar8 + -0x70),uRam0000000003d2a140);
        goto code_r0x0158c4e4;
      }
    }
    puVar35 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    lVar30 = func_0x00f78af4();
    pppdVar8 = (dword ***)((long)pppdVar8 + -0x70);
  } while( true );
}



// ============================================================
// RVA: 0x158c218 | Atlas.Contexts.FrontEndContextLoadoutState.OnLoadoutTypeSelected
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState__OnLoadoutTypeSelected
               (long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  undefined8 uStack_48;
  undefined1 *puVar3;
  
  if ((bRam0000000003eb50ff & 1) == 0) {
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d405e0);
    bRam0000000003eb50ff = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  switch(param_2 & 0xffffffff) {
  case 0:
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 == 0) goto code_r0x0158c438;
    *(long *)(lVar5 + 0x10) = param_3;
    break;
  case 1:
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 == 0) goto code_r0x0158c438;
    *(long *)(lVar5 + 0x18) = param_3;
    break;
  case 2:
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 == 0) goto code_r0x0158c438;
    *(long *)(lVar5 + 0x20) = param_3;
    break;
  case 3:
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 == 0) goto code_r0x0158c438;
    *(long *)(lVar5 + 0x28) = param_3;
    break;
  case 4:
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 == 0) goto code_r0x0158c438;
    *(long *)(lVar5 + 0x30) = param_3;
  }
  lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
    iVar4 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
    if (iVar4 == 0) {
      return;
    }
    param_3 = 0x3d405d8;
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar5 != 0) {
      uStack_b8 = *(undefined8 *)(lVar5 + 0x18);
      uStack_c0 = *(undefined8 *)(lVar5 + 0x10);
      uStack_a8 = *(undefined8 *)(lVar5 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar5 + 0x20);
      uStack_98 = *(undefined8 *)(lVar5 + 0x38);
      uStack_a0 = *(undefined8 *)(lVar5 + 0x30);
      uStack_88 = *(undefined8 *)(lVar5 + 0x48);
      uStack_90 = *(undefined8 *)(lVar5 + 0x40);
      iVar4 = Atlas_Gameplay_KartLoadout__IsLoadoutFullyUnlocked
                        (&uStack_c0,*(undefined8 *)(param_1 + 0xb0),0);
      if (iVar4 == 0) {
        return;
      }
      lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
      if (lVar5 != 0) {
        uStack_178 = *(undefined8 *)(lVar5 + 0x18);
        uStack_180 = *(undefined8 *)(lVar5 + 0x10);
        uStack_168 = *(undefined8 *)(lVar5 + 0x28);
        uStack_170 = *(undefined8 *)(lVar5 + 0x20);
        uStack_158 = *(undefined8 *)(lVar5 + 0x38);
        uStack_160 = *(undefined8 *)(lVar5 + 0x30);
        uStack_148 = *(undefined8 *)(lVar5 + 0x48);
        uStack_150 = *(undefined8 *)(lVar5 + 0x40);
        uStack_100 = uStack_180;
        uStack_f8 = uStack_178;
        uStack_f0 = uStack_170;
        uStack_e8 = uStack_168;
        uStack_e0 = uStack_160;
        uStack_d8 = uStack_158;
        uStack_d0 = uStack_150;
        uStack_c8 = uStack_148;
        Atlas_Gameplay_KartLoadout__FixInvalidKartLoadout
                  (&uStack_140,&uStack_180,*(undefined8 *)(param_1 + 0xa0),0);
        uStack_1b8 = uStack_138;
        uStack_1c0 = uStack_140;
        uStack_1a8 = uStack_128;
        uStack_1b0 = uStack_130;
        uStack_198 = uStack_118;
        uStack_1a0 = uStack_120;
        uStack_188 = uStack_108;
        uStack_190 = uStack_110;
        /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_80,&uStack_1c0,0);
        if ((*(long *)(param_1 + 0xc0) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28), lVar5 != 0)) {
          uStack_1f8 = uStack_78;
          uStack_200 = uStack_80;
          uStack_1e8 = uStack_68;
          uStack_1f0 = uStack_70;
          uStack_1d8 = uStack_58;
          uStack_1e0 = uStack_60;
          uStack_1c8 = uStack_48;
          uStack_1d0 = uStack_50;
          /*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar5,&uStack_200,0);
          return;
        }
      }
    }
  }
code_r0x0158c438:
  puVar8 = &Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted;
  lVar5 = func_0x00f78af4();
  puVar1 = &uStack_200;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    lVar6 = lVar5;
    puVar3 = (undefined1 *)puVar1;
    *(undefined8 *)(puVar3 + -0x30) = 0x3eb5000;
    *(ulong *)(puVar3 + -0x28) = param_2;
    *(long *)(puVar3 + -0x20) = param_3;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar8;
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    param_2 = 0x3d405d8;
    param_3 = *(long *)(lVar6 + 0x88);
    if (param_3 == 0) {
code_r0x0158c4e4:
      param_3 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d405d8);
      if (*(long *)(lVar6 + 0xb8) != 0) {
        uVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar6 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame(puVar3 + -0x70,uVar7,0);
        if (param_3 != 0) {
          uVar11 = *(undefined8 *)(puVar3 + -0x48);
          uVar10 = *(undefined8 *)(puVar3 + -0x50);
          uVar9 = *(undefined8 *)(puVar3 + -0x38);
          uVar7 = *(undefined8 *)(puVar3 + -0x40);
          uVar14 = *(undefined8 *)(puVar3 + -0x70);
          uVar13 = *(undefined8 *)(puVar3 + -0x58);
          uVar12 = *(undefined8 *)(puVar3 + -0x60);
          *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(puVar3 + -0x68);
          *(undefined8 *)(param_3 + 0x10) = uVar14;
          *(undefined8 *)(param_3 + 0x28) = uVar13;
          *(undefined8 *)(param_3 + 0x20) = uVar12;
          *(undefined8 *)(param_3 + 0x38) = uVar11;
          *(undefined8 *)(param_3 + 0x30) = uVar10;
          *(undefined8 *)(param_3 + 0x48) = uVar9;
          *(undefined8 *)(param_3 + 0x40) = uVar7;
          lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar6,uRam0000000003d405e0);
          if (lVar5 != 0) {
            param_3 = *(long *)(lVar5 + 0x18);
            lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d405d8);
            if ((lVar5 != 0) && (param_3 != 0)) {
              uVar9 = *(undefined8 *)(lVar5 + 0x18);
              uVar7 = *(undefined8 *)(lVar5 + 0x10);
              uVar11 = *(undefined8 *)(lVar5 + 0x28);
              uVar10 = *(undefined8 *)(lVar5 + 0x20);
              uVar12 = *(undefined8 *)(lVar5 + 0x30);
              uVar14 = *(undefined8 *)(lVar5 + 0x48);
              uVar13 = *(undefined8 *)(lVar5 + 0x40);
              *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(lVar5 + 0x38);
              *(undefined8 *)(param_3 + 0x50) = uVar12;
              *(undefined8 *)(param_3 + 0x68) = uVar14;
              *(undefined8 *)(param_3 + 0x60) = uVar13;
              *(undefined8 *)(param_3 + 0x38) = uVar9;
              *(undefined8 *)(param_3 + 0x30) = uVar7;
              *(undefined8 *)(param_3 + 0x48) = uVar11;
              *(undefined8 *)(param_3 + 0x40) = uVar10;
              if (*(long *)(lVar6 + 0x78) != 0) {
                /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar6 + 0x78),param_3,uRam0000000003d2a040);
              }
              return;
            }
          }
        }
      }
    }
    else {
      lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d405d8);
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x50);
        uVar10 = *(undefined8 *)(lVar5 + 0x68);
        uVar9 = *(undefined8 *)(lVar5 + 0x60);
        *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar5 + 0x58);
        *(undefined8 *)(puVar3 + -0x70) = uVar7;
        *(undefined8 *)(puVar3 + -0x58) = uVar10;
        *(undefined8 *)(puVar3 + -0x60) = uVar9;
        uVar7 = *(undefined8 *)(lVar5 + 0x70);
        uVar10 = *(undefined8 *)(lVar5 + 0x88);
        uVar9 = *(undefined8 *)(lVar5 + 0x80);
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(lVar5 + 0x78);
        *(undefined8 *)(puVar3 + -0x50) = uVar7;
        *(undefined8 *)(puVar3 + -0x38) = uVar10;
        *(undefined8 *)(puVar3 + -0x40) = uVar9;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(param_3,puVar3 + -0x70,uRam0000000003d2a140);
        goto code_r0x0158c4e4;
      }
    }
    puVar8 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    lVar5 = func_0x00f78af4();
    puVar1 = (undefined8 *)(puVar3 + -0x70);
    param_1 = lVar6;
    puVar2 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x158c43c | Atlas.Contexts.FrontEndContextLoadoutState.OnMatchStarted
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState__OnMatchStarted(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined1 *)register0x00000008;
  do {
    lVar2 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    unaff_x21 = 0x3d405d8;
    unaff_x20 = *(long *)(lVar2 + 0x88);
    if (unaff_x20 == 0) {
code_r0x0158c4e4:
      unaff_x20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar2,uRam0000000003d405d8);
      if (*(long *)(lVar2 + 0xb8) != 0) {
        uVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar2 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame(puVar1 + -0x70,uVar4,0);
        if (unaff_x20 != 0) {
          uVar7 = *(undefined8 *)(puVar1 + -0x48);
          uVar6 = *(undefined8 *)(puVar1 + -0x50);
          uVar5 = *(undefined8 *)(puVar1 + -0x38);
          uVar4 = *(undefined8 *)(puVar1 + -0x40);
          uVar10 = *(undefined8 *)(puVar1 + -0x70);
          uVar9 = *(undefined8 *)(puVar1 + -0x58);
          uVar8 = *(undefined8 *)(puVar1 + -0x60);
          *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(puVar1 + -0x68);
          *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
          *(undefined8 *)(unaff_x20 + 0x28) = uVar9;
          *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
          *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
          *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
          *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
          *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
          lVar3 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar2,uRam0000000003d405e0);
          if (lVar3 != 0) {
            unaff_x20 = *(long *)(lVar3 + 0x18);
            lVar3 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar2,uRam0000000003d405d8);
            if ((lVar3 != 0) && (unaff_x20 != 0)) {
              uVar5 = *(undefined8 *)(lVar3 + 0x18);
              uVar4 = *(undefined8 *)(lVar3 + 0x10);
              uVar7 = *(undefined8 *)(lVar3 + 0x28);
              uVar6 = *(undefined8 *)(lVar3 + 0x20);
              uVar8 = *(undefined8 *)(lVar3 + 0x30);
              uVar10 = *(undefined8 *)(lVar3 + 0x48);
              uVar9 = *(undefined8 *)(lVar3 + 0x40);
              *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(lVar3 + 0x38);
              *(undefined8 *)(unaff_x20 + 0x50) = uVar8;
              *(undefined8 *)(unaff_x20 + 0x68) = uVar10;
              *(undefined8 *)(unaff_x20 + 0x60) = uVar9;
              *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
              *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
              *(undefined8 *)(unaff_x20 + 0x48) = uVar7;
              *(undefined8 *)(unaff_x20 + 0x40) = uVar6;
              if (*(long *)(lVar2 + 0x78) != 0) {
                /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar2 + 0x78),unaff_x20,uRam0000000003d2a040);
              }
              return;
            }
          }
        }
      }
    }
    else {
      lVar3 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar2,uRam0000000003d405d8);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x50);
        uVar6 = *(undefined8 *)(lVar3 + 0x68);
        uVar5 = *(undefined8 *)(lVar3 + 0x60);
        *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(lVar3 + 0x58);
        *(undefined8 *)(puVar1 + -0x70) = uVar4;
        *(undefined8 *)(puVar1 + -0x58) = uVar6;
        *(undefined8 *)(puVar1 + -0x60) = uVar5;
        uVar4 = *(undefined8 *)(lVar3 + 0x70);
        uVar6 = *(undefined8 *)(lVar3 + 0x88);
        uVar5 = *(undefined8 *)(lVar3 + 0x80);
        *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(lVar3 + 0x78);
        *(undefined8 *)(puVar1 + -0x50) = uVar4;
        *(undefined8 *)(puVar1 + -0x38) = uVar6;
        *(undefined8 *)(puVar1 + -0x40) = uVar5;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(unaff_x20,puVar1 + -0x70,uRam0000000003d2a140);
        goto code_r0x0158c4e4;
      }
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    param_1 = func_0x00f78af4();
    puVar1 = puVar1 + -0x70;
    unaff_x19 = lVar2;
  } while( true );
}



// ============================================================
// RVA: 0x158c440 | Atlas.Contexts.FrontEndContextLoadoutState.KartSelected
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState__KartSelected(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  do {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    unaff_x21 = 0x3d405d8;
    unaff_x20 = *(long *)(lVar1 + 0x88);
    if (unaff_x20 == 0) {
LAB_0158c4e4:
      unaff_x20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar1,uRam0000000003d405d8);
      if (*(long *)(lVar1 + 0xb8) != 0) {
        uVar3 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar1 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame
                  ((undefined1 *)((long)register0x00000008 + -0x70),uVar3,0);
        if (unaff_x20 != 0) {
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x48);
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
          uVar4 = *(undefined8 *)((long)register0x00000008 + -0x38);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x40);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x70);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)((long)register0x00000008 + -0x68);
          *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
          *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
          *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
          *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
          *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
          *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
          *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
          lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar1,uRam0000000003d405e0);
          if (lVar2 != 0) {
            unaff_x20 = *(long *)(lVar2 + 0x18);
            lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar1,uRam0000000003d405d8);
            if ((lVar2 != 0) && (unaff_x20 != 0)) {
              uVar4 = *(undefined8 *)(lVar2 + 0x18);
              uVar3 = *(undefined8 *)(lVar2 + 0x10);
              uVar6 = *(undefined8 *)(lVar2 + 0x28);
              uVar5 = *(undefined8 *)(lVar2 + 0x20);
              uVar7 = *(undefined8 *)(lVar2 + 0x30);
              uVar9 = *(undefined8 *)(lVar2 + 0x48);
              uVar8 = *(undefined8 *)(lVar2 + 0x40);
              *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(lVar2 + 0x38);
              *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
              *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
              *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
              *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
              *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
              *(undefined8 *)(unaff_x20 + 0x48) = uVar6;
              *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
              if (*(long *)(lVar1 + 0x78) != 0) {
                /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar1 + 0x78),unaff_x20,uRam0000000003d2a040);
              }
              return;
            }
          }
        }
      }
    }
    else {
      lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar1,uRam0000000003d405d8);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x50);
        uVar5 = *(undefined8 *)(lVar2 + 0x68);
        uVar4 = *(undefined8 *)(lVar2 + 0x60);
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar2 + 0x58);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar3;
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar4;
        uVar3 = *(undefined8 *)(lVar2 + 0x70);
        uVar5 = *(undefined8 *)(lVar2 + 0x88);
        uVar4 = *(undefined8 *)(lVar2 + 0x80);
        *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar2 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar3;
        *(undefined8 *)((long)register0x00000008 + -0x38) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x70),
                        uRam0000000003d2a140);
        goto LAB_0158c4e4;
      }
    }
    unaff_x30 = &Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = lVar1;
  } while( true );
}



// ============================================================
// RVA: 0x158c598 | Atlas.Contexts.FrontEndContextLoadoutState.SinglePlayerFallback
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  do {
    lVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam0000000003eb5104 & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      func_0x00f78a20(0x3d405e0);
      bRam0000000003eb5104 = 1;
    }
    unaff_x21 = 0x3d405d8;
    unaff_x20 = *(long *)(lVar3 + 0x88);
    if (unaff_x20 == 0) {
LAB_0158c4e4:
      unaff_x20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar3,uRam0000000003d405d8);
      if (*(long *)(lVar3 + 0xb8) != 0) {
        uVar2 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar3 + 0xb8),0);
        Atlas_Gameplay_KartLoadout__FromSaveGame
                  ((undefined1 *)((long)register0x00000008 + -0x70),uVar2,0);
        if (unaff_x20 != 0) {
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x48);
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
          uVar4 = *(undefined8 *)((long)register0x00000008 + -0x38);
          uVar2 = *(undefined8 *)((long)register0x00000008 + -0x40);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x70);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)((long)register0x00000008 + -0x68);
          *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
          *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
          *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
          *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
          *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
          *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
          *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
          lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar3,uRam0000000003d405e0);
          if (lVar1 != 0) {
            unaff_x20 = *(long *)(lVar1 + 0x18);
            lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar3,uRam0000000003d405d8);
            if ((lVar1 != 0) && (unaff_x20 != 0)) {
              uVar4 = *(undefined8 *)(lVar1 + 0x18);
              uVar2 = *(undefined8 *)(lVar1 + 0x10);
              uVar6 = *(undefined8 *)(lVar1 + 0x28);
              uVar5 = *(undefined8 *)(lVar1 + 0x20);
              uVar7 = *(undefined8 *)(lVar1 + 0x30);
              uVar9 = *(undefined8 *)(lVar1 + 0x48);
              uVar8 = *(undefined8 *)(lVar1 + 0x40);
              *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(lVar1 + 0x38);
              *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
              *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
              *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
              *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
              *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
              *(undefined8 *)(unaff_x20 + 0x48) = uVar6;
              *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
              if (*(long *)(lVar3 + 0x78) != 0) {
                /*System.Action<InputActionRebindingExtensions.RebindingOperation>$$Invoke*/ func_0x01e47f3c(*(long *)(lVar3 + 0x78),unaff_x20,uRam0000000003d2a040);
              }
              return;
            }
          }
        }
      }
    }
    else {
      lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar3,uRam0000000003d405d8);
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x50);
        uVar5 = *(undefined8 *)(lVar1 + 0x68);
        uVar4 = *(undefined8 *)(lVar1 + 0x60);
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar4;
        uVar2 = *(undefined8 *)(lVar1 + 0x70);
        uVar5 = *(undefined8 *)(lVar1 + 0x88);
        uVar4 = *(undefined8 *)(lVar1 + 0x80);
        *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar1 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x38) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
        /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(unaff_x20,(undefined1 *)((long)register0x00000008 + -0x70),
                        uRam0000000003d2a140);
        goto LAB_0158c4e4;
      }
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextLoadoutState__SinglePlayerFallback;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x19 = lVar3;
  } while( true );
}



// ============================================================
// RVA: 0x158c59c | Atlas.Contexts.FrontEndContextLoadoutState.CharacterSelectBackPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0158c6f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextLoadoutState__CharacterSelectBackPressed
                (ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 extraout_w1;
  uint uVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5100 & 1) == 0) {
    func_0x00f78a20(0x3d56b88);
    func_0x00f78a20(0x3d56b98);
    func_0x00f78a20(0x3d280b8);
    func_0x00f78a20(0x3d280c0);
    func_0x00f78a20(0x3d405e0);
    bRam0000000003eb5100 = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
LAB_0158c708:
    puVar24 = &Atlas_Contexts_FrontEndContextLoadoutState__BackOutOfState;
    param_1 = func_0x00f78af4();
  }
  else {
    iVar5 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
    if (iVar5 != 0) {
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_0158c708;
      if (*(char *)(*(long *)(param_1 + 0xd0) + 0x90) != '\0') {
        return 0;
      }
    }
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_0158c708;
    iVar5 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4();
    if (iVar5 != 0) {
      if (*(long *)(param_1 + 0xd0) != 0) {
        iVar5 = /*Atlas.Networking.MatchMakingManager$$IsMatchMakingOrInGroup*/ func_0x0148efec(*(long *)(param_1 + 0xd0),0);
        if (iVar5 == 0) goto code_r0x0158c6ec;
        lVar8 = *(long *)(param_1 + 0xd0);
        uVar19 = func_0x00f78aec(/*Atlas.Networking.MatchMakingManager.OnQuit_TypeInfo*/ uRam0000000003d280c0);
        /*Atlas.Networking.MatchMakingManager.OnQuit$$.ctor*/ func_0x0155f1a8(uVar19,param_1,uRam0000000003d56b88,0);
        unaff_x22 = func_0x00f78aec(/*Atlas.Networking.MatchMakingManager.OnDeclineToQuit_TypeInfo*/ uRam0000000003d280b8);
        param_3 = puRam0000000003d56b98;
        /*Atlas.Networking.MatchMakingManager.OnDeclineToQuit$$.ctor*/ func_0x0155f134(unaff_x22,param_1,puRam0000000003d56b98,0);
        if (lVar8 != 0) {
          /*Atlas.Networking.MatchMakingManager$$Quit*/ func_0x014901b8(lVar8,uVar19,unaff_x22,0);
          return 1;
        }
      }
      goto LAB_0158c708;
    }
code_r0x0158c6ec:
    puVar24 = &UNK_0158c6f4;
  }
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_38 = puVar24;
  if ((bRam0000000003eb5101 & 1) == 0) {
    func_0x00f78a20(0x3d2a140);
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d405e0);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5101 = 1;
  }
  puVar16 = *(undefined1 **)(param_1 + 0x88);
  if (puVar16 == (undefined1 *)0x0) {
code_r0x0158c800:
    lVar20 = 0x3d405e0;
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
    unaff_x25 = 0x3d405e0;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
      uVar11 = *(uint *)(*(long *)(lVar8 + 0x18) + 0x10);
      puVar16 = (undefined1 *)(ulong)uVar11;
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
      unaff_x25 = lVar20;
      if (uVar11 == 3) {
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x70), lVar8 != 0)) {
          uVar17 = *(undefined8 *)(lVar8 + 0x18);
          unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
          param_3 = (undefined8 *)0x0;
          /*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData$$.ctor*/ func_0x0154eb34(unaff_x22,uVar17,0,0,0,0,0);
          puVar13 = (ulong *)0x3d194e8;
code_r0x0158c888:
          puVar18 = *(undefined1 **)(param_1 + 0x80);
          param_1 = *puVar13;
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(param_1,0);
          puVar16 = (undefined1 *)0x0;
joined_r0x0158ca28:
          if (puVar18 != (undefined1 *)0x0) {
code_r0x0158ca2c:
            uVar19 = /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(puVar18,uVar9,0,unaff_x22,uRam0000000003d2a5b0);
            return uVar19;
          }
        }
      }
      else if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
        if (*(int *)(*(long *)(lVar8 + 0x18) + 0x10) == 4) {
code_r0x0158c92c:
          uVar17 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
          puVar16 = *(undefined1 **)(param_1 + 0x80);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
          lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
          if (((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x70), lVar8 != 0)) {
            unaff_x23 = *(long *)(lVar8 + 0x18);
            lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
              unaff_x22 = *(long *)(*(long *)(lVar8 + 0x18) + 0x20);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              unaff_x24 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
              lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
                param_1 = (ulong)*(uint *)(*(long *)(lVar8 + 0x18) + 0x10);
                unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                param_3 = (undefined8 *)0x0;
                /*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData$$.ctor*/ func_0x0154eb34(unaff_x22,unaff_x23,0,unaff_x24,param_1,0,0);
                puVar18 = puVar16;
                uVar9 = uVar19;
                goto joined_r0x0158ca28;
              }
            }
          }
        }
        else {
          lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
            uVar9 = /*Atlas.Arcade.ArcadeEvent$$IsArcadeGameType*/ func_0x0144e2b0(*(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x10),0);
            if ((uVar9 & 1) != 0) goto code_r0x0158c92c;
            lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
              if (*(int *)(*(long *)(lVar8 + 0x18) + 0x10) == 9) goto code_r0x0158c92c;
              lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
                if (*(int *)(*(long *)(lVar8 + 0x18) + 0x10) == 1) {
code_r0x0158cab0:
                  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
                  if (lVar8 != 0) {
                    uVar17 = *(undefined8 *)(lVar8 + 0x18);
                    unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
                    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
                    /*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData$$.ctor*/ func_0x0154e824(unaff_x22,uVar17,1,0);
                    puVar13 = (ulong *)0x3d194c8;
                    goto code_r0x0158c888;
                  }
                }
                else {
                  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
                  uVar7 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
                    if (*(int *)(*(long *)(lVar8 + 0x18) + 0x10) == 2) goto code_r0x0158cab0;
                    puVar18 = *(undefined1 **)(param_1 + 0x80);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
                    puVar16 = (undefined1 *)0x0;
                    param_1 = uVar7;
                    if (puVar18 != (undefined1 *)0x0) {
                      unaff_x22 = 0;
                      goto code_r0x0158ca2c;
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
  else {
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar8 != 0) {
      uStack_b8 = *(undefined8 *)(lVar8 + 0x58);
      uStack_c0 = *(undefined8 *)(lVar8 + 0x50);
      uStack_a8 = *(undefined8 *)(lVar8 + 0x68);
      uStack_b0 = *(undefined8 *)(lVar8 + 0x60);
      uStack_98 = *(undefined8 *)(lVar8 + 0x78);
      uStack_a0 = *(undefined8 *)(lVar8 + 0x70);
      uStack_88 = *(undefined8 *)(lVar8 + 0x88);
      uStack_90 = *(undefined8 *)(lVar8 + 0x80);
      param_3 = puRam0000000003d2a140;
      /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(puVar16,&uStack_c0);
      goto code_r0x0158c800;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_e0 = (undefined1 *)&pppppppuStack_d0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextLoadoutState__DeclineToQuitLobby;
  puVar24 = *(undefined **)(lVar8 + 0x98);
  pppppppuStack_d0 = &ppppppuStack_40;
  if (puVar24 == (undefined *)0x0) {
    lVar8 = func_0x00f78af4();
    puStack_d8 = &Atlas_Contexts_FrontEndContextLoadoutState__KartSelectBackPressed;
    puStack_f0 = puVar16;
    uStack_e8 = param_1;
    pppppppuVar21 = &pppppppuStack_d0;
    if ((bRam0000000003eb5103 & 1) == 0) {
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      bRam0000000003eb5103 = 1;
      pppppppuVar21 = (undefined8 *******)puStack_e0;
    }
    puStack_e0 = (undefined1 *)pppppppuVar21;
    lVar20 = *(long *)(lVar8 + 0x88);
    if (lVar20 != 0) {
      lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar8,uRam0000000003d405d8);
      if (lVar10 == 0) {
        uVar19 = func_0x00f78af4();
        if ((bRam0000000003eb5105 & 1) == 0) {
          func_0x00f78a20(0x3d405d0);
          bRam0000000003eb5105 = 1;
        }
        if (uVar19 == 0) {
          auVar31 = func_0x00f78af4(0,uRam0000000003d405d0);
          uVar19 = auVar31._0_8_;
          *(undefined8 *)(uVar19 + 0x10) = *param_3;
          *(long *)(uVar19 + 0x20) = auVar31._8_8_;
          *(undefined8 **)(uVar19 + 0x28) = param_3;
          return uVar19;
        }
        return uVar19;
      }
      uStack_128 = *(undefined8 *)(lVar10 + 0x58);
      uStack_130 = *(undefined8 *)(lVar10 + 0x50);
      uStack_118 = *(undefined8 *)(lVar10 + 0x68);
      uStack_120 = *(undefined8 *)(lVar10 + 0x60);
      uStack_108 = *(undefined8 *)(lVar10 + 0x78);
      uStack_110 = *(undefined8 *)(lVar10 + 0x70);
      uStack_f8 = *(undefined8 *)(lVar10 + 0x88);
      uStack_100 = *(undefined8 *)(lVar10 + 0x80);
      /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar20,&uStack_130,puRam0000000003d2a140);
    }
    Atlas_Contexts_FrontEndContextLoadoutState__ShowCharacterSelect(lVar8);
    return 1;
  }
  puVar18 = (undefined1 *)0x1;
  uVar17 = 1;
  ppuVar2 = &puStack_e0;
  pppppppuVar21 = &pppppppuStack_d0;
  puStack_e0 = puVar16;
  puStack_d8 = (undefined *)param_1;
  if (*(long *)((long)puVar24 + 0x28) == 0) {
code_r0x0150ba34:
    puVar23 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar31 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)((long)puVar24 + 0x28),0,1,1,0);
    if (*(ulong *)((long)puVar24 + 0x28) == 0) goto code_r0x0150ba34;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulong *)((long)puVar24 + 0x28);
    puVar18 = (undefined1 *)0x0;
    ppuVar2 = (undefined1 **)&uStack_c0;
    puVar24 = puStack_d8;
    puVar16 = puStack_e0;
    pppppppuVar21 = pppppppuStack_d0;
    puVar23 = puStack_c8;
  }
  uVar9 = auVar31._0_8_;
  *(long *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = uVar19;
  *(undefined1 **)((long)ppuVar2 + -0x20) = puVar16;
  *(undefined **)((long)ppuVar2 + -0x18) = puVar24;
  *(undefined8 ********)((long)ppuVar2 + -0x10) = pppppppuVar21;
  *(undefined **)((long)ppuVar2 + -8) = puVar23;
  puVar22 = (undefined1 *)((long)ppuVar2 + -0x10);
  lVar8 = *(long *)(uVar9 + 0x70);
  puVar12 = puVar18;
  if (lVar8 != 0) {
    uVar11 = *(uint *)(lVar8 + 0x18);
    if (uVar11 != 0) {
      puVar24 = (undefined *)uVar9;
      puVar16 = puVar18;
      if (*(int *)(lVar8 + 0x5c) - 1U < 2) {
        puVar12 = (undefined1 *)0x1;
      }
      else {
        if (uVar11 < 2) goto code_r0x0150bb24;
        puVar12 = (undefined1 *)(ulong)(*(int *)(lVar8 + 0xbc) - 1U < 2);
      }
      if (4 < uVar11) {
        if (*(int *)(lVar8 + 0x1dc) - 1U < 2) {
          uVar19 = 1;
        }
        else {
          if (uVar11 < 6) goto code_r0x0150bb24;
          uVar19 = (ulong)(*(int *)(lVar8 + 0x23c) - 1U < 2);
        }
        if (((int)puVar12 == 0) || ((auVar31._8_8_ & 1) != 0)) {
          if (((uint)uVar19 & ((uint)puVar18 ^ 1)) != 1) {
            return uVar9;
          }
          auVar29._8_8_ = 7;
          auVar29._0_8_ = uVar9;
          puVar12 = (undefined1 *)0x1;
          puVar22 = *(undefined1 **)((long)ppuVar2 + -0x10);
          puVar24 = *(undefined **)((long)ppuVar2 + -8);
          auVar30._8_8_ = 1;
          auVar30._0_8_ = *(undefined8 *)((long)ppuVar2 + -0x20);
          uVar9 = *(ulong *)((long)ppuVar2 + -0x18);
          unaff_x22 = *(long *)((long)ppuVar2 + -0x30);
          uVar19 = *(ulong *)((long)ppuVar2 + -0x28);
          puVar18 = (undefined1 *)ppuVar2;
        }
        else {
          auVar29._8_8_ = 6;
          auVar29._0_8_ = uVar9;
          auVar30._8_8_ = 1;
          auVar30._0_8_ = puVar18;
          puVar24 = &UNK_0150bae4;
          puVar18 = (undefined1 *)((long)ppuVar2 + -0x30);
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
  auVar32 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  puVar18 = (undefined1 *)((long)ppuVar2 + -0x40);
  *(undefined1 **)((long)ppuVar2 + -0x40) = puVar22;
  *(undefined **)((long)ppuVar2 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar8 = *(long *)(auVar32._0_8_ + 0x28);
  auVar32._8_4_ = auVar32._8_4_;
  auVar32._0_8_ = lVar8;
  if (lVar8 == 0) {
    puVar23 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar32 = func_0x00f78af4();
  }
  else {
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x30);
    puVar18 = *(undefined1 **)((long)ppuVar2 + -0x40);
    puVar23 = *(undefined **)((long)ppuVar2 + -0x38);
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined **)(puVar3 + -8) = puVar23;
  lVar8 = *(long *)(auVar32._0_8_ + 0x70);
  if (auVar32._8_4_ < 9) {
    uVar11 = *(uint *)(&UNK_033f869c + (long)(int)auVar32._8_4_ * 4);
  }
  else {
    uVar11 = 0xffffffff;
  }
  if (lVar8 == 0) {
    func_0x00f78af4();
  }
  else if (uVar11 < *(uint *)(lVar8 + 0x18)) {
    return (ulong)*(uint *)(lVar8 + (ulong)uVar11 * 0x60 + 0x58);
  }
  uVar6 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar6,0);
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar9 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar9 + 0x28) + 0x80) = extraout_w1;
    return uVar9;
  }
  uVar9 = func_0x00f78af4();
  puVar18 = puVar3 + -0x40;
  *(undefined1 **)(puVar3 + -0x40) = puVar16;
  *(undefined **)(puVar3 + -0x38) = puVar24;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
  *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar22 = puVar3 + -0x30;
  if (*(ulong *)(uVar9 + 0x28) == 0) {
    puVar24 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar29 = func_0x00f78af4();
    auVar30._8_8_ = uVar17;
    auVar30._0_8_ = puVar16;
  }
  else {
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *(ulong *)(uVar9 + 0x28);
    puVar12 = (undefined1 *)0x0;
    auVar30._8_8_ = 1;
    auVar30._0_8_ = puVar16;
    puVar24 = &UNK_0150bbf4;
    puVar18 = puVar3 + -0x40;
  }
code_r0x0150bc48:
  do {
    uVar7 = auVar29._0_8_;
    *(long *)(puVar18 + -0x20) = auVar30._0_8_;
    *(ulong *)(puVar18 + -0x18) = uVar9;
    *(undefined1 **)(puVar18 + -0x10) = puVar22;
    *(undefined **)(puVar18 + -8) = puVar24;
    uVar11 = auVar29._8_4_;
    if (uVar11 == 0xffffffff) {
      return uVar7;
    }
    lVar8 = *(long *)(uVar7 + 0x70);
    if (lVar8 == 0) {
      func_0x00f78af4();
      uVar15 = uVar9;
    }
    else {
      uVar15 = auVar29._8_8_;
      if (uVar11 < *(uint *)(lVar8 + 0x18)) {
        uVar14 = 2;
        if ((int)puVar12 == 0) {
          uVar14 = 0;
        }
        *(undefined4 *)(lVar8 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar14;
        if ((auVar30._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar7,auVar29._8_8_);
        }
        *(undefined8 *)(puVar18 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar18 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar18 + -0x50) = unaff_x26;
        *(long *)(puVar18 + -0x48) = unaff_x25;
        *(long *)(puVar18 + -0x40) = unaff_x24;
        *(long *)(puVar18 + -0x38) = unaff_x23;
        *(long *)(puVar18 + -0x30) = unaff_x22;
        *(ulong *)(puVar18 + -0x28) = uVar19;
        *(undefined8 *)(puVar18 + -0x20) = *(undefined8 *)(puVar18 + -0x20);
        *(undefined8 *)(puVar18 + -0x18) = *(undefined8 *)(puVar18 + -0x18);
        *(undefined8 *)(puVar18 + -0x10) = *(undefined8 *)(puVar18 + -0x10);
        *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
        lVar8 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar20 = *(long *)(uVar7 + 0x70);
        if (lVar20 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar20 = lVar20 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar20 + 0x20);
        unaff_x22 = *(long *)(lVar20 + 0x28);
        uVar17 = *(undefined8 *)(lVar20 + 0x30);
        uVar25 = *(undefined8 *)(lVar20 + 0x48);
        uVar6 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined8 *)(puVar18 + -0xe8) = *(undefined8 *)(lVar20 + 0x38);
        *(undefined8 *)(puVar18 + -0xf0) = uVar17;
        *(undefined8 *)(puVar18 + -0xd8) = uVar25;
        *(undefined8 *)(puVar18 + -0xe0) = uVar6;
        lVar8 = *(long *)(lVar20 + 0x50);
        iVar5 = *(int *)(lVar20 + 0x58);
        iVar1 = *(int *)(lVar20 + 0x5c);
        unaff_x23 = *(long *)(lVar20 + 0x60);
        unaff_x24 = *(long *)(lVar20 + 0x68);
        uVar17 = *(undefined8 *)(lVar20 + 0x70);
        *(undefined8 *)(puVar18 + -0xf8) = *(undefined8 *)(lVar20 + 0x78);
        *(undefined8 *)(puVar18 + -0x100) = uVar17;
        if (iVar1 == iVar5) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
          if ((int)uVar19 == 0) {
            return uVar19;
          }
          if (lVar8 != 0) {
            uVar19 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,iVar5 == 2,0);
            return uVar19;
          }
        }
        else if (iVar5 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar6 = *(undefined8 *)(lVar20 + 0x38);
            uVar17 = *(undefined8 *)(lVar20 + 0x30);
            uVar26 = *(undefined8 *)(lVar20 + 0x48);
            uVar25 = *(undefined8 *)(lVar20 + 0x40);
            *(undefined8 *)(puVar18 + -0x118) = uVar6;
            *(undefined8 *)(puVar18 + -0x120) = uVar17;
            *(undefined8 *)(puVar18 + -0x108) = uVar26;
            *(undefined8 *)(puVar18 + -0x110) = uVar25;
            uVar28 = *(undefined8 *)(lVar20 + 0x78);
            uVar27 = *(undefined8 *)(lVar20 + 0x70);
            *(undefined8 *)(puVar18 + -0x128) = uVar28;
            *(undefined8 *)(puVar18 + -0x130) = uVar27;
            *(undefined8 *)(puVar18 + -200) = unaff_x26;
            *(long *)(puVar18 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar18 + -0xb0) = uVar6;
            *(undefined8 *)(puVar18 + -0xb8) = uVar17;
            *(undefined8 *)(puVar18 + -0xa0) = uVar26;
            *(undefined8 *)(puVar18 + -0xa8) = uVar25;
            *(long *)(puVar18 + -0x98) = lVar8;
            *(undefined8 *)(puVar18 + -0x90) = _UNK_033f8620;
            *(long *)(puVar18 + -0x88) = unaff_x23;
            *(long *)(puVar18 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar18 + -0x70) = uVar28;
            *(undefined8 *)(puVar18 + -0x78) = uVar27;
            lVar20 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar20,puVar18 + -200,uRam0000000003d2a408);
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
code_r0x0150c72c:
          lVar20 = *(long *)(uVar7 + 0x70);
          if (lVar20 != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar20 = lVar20 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar20 + 0x20) = unaff_x26;
            *(long *)(lVar20 + 0x28) = unaff_x22;
            uVar17 = *(undefined8 *)(puVar18 + -0xf0);
            uVar25 = *(undefined8 *)(puVar18 + -0xd8);
            uVar6 = *(undefined8 *)(puVar18 + -0xe0);
            *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(puVar18 + -0xe8);
            *(undefined8 *)(lVar20 + 0x30) = uVar17;
            *(undefined8 *)(lVar20 + 0x48) = uVar25;
            *(undefined8 *)(lVar20 + 0x40) = uVar6;
            *(long *)(lVar20 + 0x50) = lVar8;
            *(int *)(lVar20 + 0x58) = iVar5;
            *(int *)(lVar20 + 0x5c) = iVar1;
            *(long *)(lVar20 + 0x60) = unaff_x23;
            *(long *)(lVar20 + 0x68) = unaff_x24;
            uVar17 = *(undefined8 *)(puVar18 + -0x100);
            *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(puVar18 + -0xf8);
            *(undefined8 *)(lVar20 + 0x70) = uVar17;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar5 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar5 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar20 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar20,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar18 + -200) = unaff_x26;
            *(long *)(puVar18 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar18 + -0xb0) = *(undefined8 *)(puVar18 + -0xe8);
            *(undefined8 *)(puVar18 + -0xb8) = *(undefined8 *)(puVar18 + -0xf0);
            *(undefined8 *)(puVar18 + -0xa0) = *(undefined8 *)(puVar18 + -0xd8);
            *(undefined8 *)(puVar18 + -0xa8) = *(undefined8 *)(puVar18 + -0xe0);
            *(long *)(puVar18 + -0x98) = lVar8;
            *(undefined8 *)(puVar18 + -0x90) = _UNK_033f8628;
            *(long *)(puVar18 + -0x88) = unaff_x23;
            *(long *)(puVar18 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar18 + -0x70) = *(undefined8 *)(puVar18 + -0xf8);
            *(undefined8 *)(puVar18 + -0x78) = *(undefined8 *)(puVar18 + -0x100);
            lVar20 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar17 = func_0x00f78b24();
        auVar31 = func_0x00f78ac0(uVar17,0);
        lVar20 = auVar31._8_8_;
        *(undefined8 *)(puVar18 + -0x180) = unaff_x26;
        *(long *)(puVar18 + -0x178) = unaff_x25;
        *(long *)(puVar18 + -0x170) = unaff_x24;
        *(long *)(puVar18 + -0x168) = unaff_x23;
        *(long *)(puVar18 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar18 + -0x158) = auVar29;
        *(long *)(puVar18 + -0x148) = lVar8;
        *(undefined1 **)(puVar18 + -0x140) = puVar18 + -0x10;
        *(undefined **)(puVar18 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar17 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x1c),
                                 *(undefined4 *)(lVar20 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar20 + 0x10),0,0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,10,uRam0000000003d5e7a8);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar17,*(undefined8 *)(lVar20 + 0x58),uRam0000000003d5e6e0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar17,1,uRam0000000003d5e888);
        uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar17,auVar31._0_8_,uRam0000000003d5e850);
        if ((uVar19 != 0) && (*(char *)(uVar19 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar19 + 0x30) = *(undefined8 *)(lVar20 + 0x10);
        }
        return uVar19;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar17,0);
    puVar4 = puVar18 + -0x30;
    puVar16 = puVar18 + -0x30;
    *(undefined1 **)(puVar18 + -0x30) = puVar18 + -0x10;
    *(undefined **)(puVar18 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar8 = *(long *)(auVar31._0_8_ + 0x28);
    auVar30._8_8_ = auVar31._8_8_;
    auVar30._0_8_ = lVar8;
    if (lVar8 == 0) {
      puVar24 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar30 = func_0x00f78af4();
    }
    else {
      puVar4 = puVar18 + -0x20;
      puVar16 = *(undefined1 **)(puVar18 + -0x30);
      puVar24 = *(undefined **)(puVar18 + -0x28);
    }
    uVar9 = auVar30._8_8_;
    *(ulong *)(puVar4 + -0x20) = uVar7;
    *(ulong *)(puVar4 + -0x18) = uVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar24;
    puVar22 = puVar4 + -0x10;
    auVar29._8_8_ = 4;
    auVar29._0_8_ = auVar30._0_8_;
    puVar12 = (undefined1 *)0x0;
    puVar24 = &UNK_0150bd10;
    puVar18 = puVar4 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x158c70c | Atlas.Contexts.FrontEndContextLoadoutState.BackOutOfState
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextLoadoutState__BackOutOfState
                (ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 extraout_w1;
  uint uVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long lVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar20;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5101 & 1) == 0) {
    func_0x00f78a20(0x3d2a140);
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d405d8);
    func_0x00f78a20(0x3d405e0);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5101 = 1;
  }
  puVar16 = *(undefined1 **)(param_1 + 0x88);
  if (puVar16 == (undefined1 *)0x0) {
LAB_0158c800:
    lVar19 = 0x3d405e0;
    lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
    unaff_x25 = 0x3d405e0;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
      uVar11 = *(uint *)(*(long *)(lVar7 + 0x18) + 0x10);
      puVar16 = (undefined1 *)(ulong)uVar11;
      lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
      unaff_x25 = lVar19;
      if (uVar11 == 3) {
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + 0x70), lVar7 != 0)) {
          uVar17 = *(undefined8 *)(lVar7 + 0x18);
          unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
          param_3 = (undefined8 *)0x0;
          /*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData$$.ctor*/ func_0x0154eb34(unaff_x22,uVar17,0,0,0,0,0);
          puVar13 = (ulong *)0x3d194e8;
code_r0x0158c888:
          puVar18 = *(undefined1 **)(param_1 + 0x80);
          param_1 = *puVar13;
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(param_1,0);
          puVar16 = (undefined1 *)0x0;
joined_r0x0158ca28:
          if (puVar18 != (undefined1 *)0x0) {
LAB_0158ca2c:
            uVar8 = /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(puVar18,uVar8,0,unaff_x22,uRam0000000003d2a5b0);
            return uVar8;
          }
        }
      }
      else if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
        if (*(int *)(*(long *)(lVar7 + 0x18) + 0x10) == 4) {
code_r0x0158c92c:
          uVar17 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
          puVar16 = *(undefined1 **)(param_1 + 0x80);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
          lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
          if (((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x18) + 0x70), lVar7 != 0)) {
            unaff_x23 = *(long *)(lVar7 + 0x18);
            lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
              unaff_x22 = *(long *)(*(long *)(lVar7 + 0x18) + 0x20);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              unaff_x24 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
              lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
                param_1 = (ulong)*(uint *)(*(long *)(lVar7 + 0x18) + 0x10);
                unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
                param_3 = (undefined8 *)0x0;
                /*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData$$.ctor*/ func_0x0154eb34(unaff_x22,unaff_x23,0,unaff_x24,param_1,0,0);
                puVar18 = puVar16;
                uVar8 = unaff_x21;
                goto joined_r0x0158ca28;
              }
            }
          }
        }
        else {
          lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
            uVar8 = /*Atlas.Arcade.ArcadeEvent$$IsArcadeGameType*/ func_0x0144e2b0(*(undefined4 *)(*(long *)(lVar7 + 0x18) + 0x10),0);
            if ((uVar8 & 1) != 0) goto code_r0x0158c92c;
            lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
              if (*(int *)(*(long *)(lVar7 + 0x18) + 0x10) == 9) goto code_r0x0158c92c;
              lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
                if (*(int *)(*(long *)(lVar7 + 0x18) + 0x10) == 1) {
code_r0x0158cab0:
                  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
                  if (lVar7 != 0) {
                    uVar17 = *(undefined8 *)(lVar7 + 0x18);
                    unaff_x22 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
                    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
                    /*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData$$.ctor*/ func_0x0154e824(unaff_x22,uVar17,1,0);
                    puVar13 = (ulong *)0x3d194c8;
                    goto code_r0x0158c888;
                  }
                }
                else {
                  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405e0);
                  uVar6 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
                    if (*(int *)(*(long *)(lVar7 + 0x18) + 0x10) == 2) goto code_r0x0158cab0;
                    puVar18 = *(undefined1 **)(param_1 + 0x80);
                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar6,0);
                    puVar16 = (undefined1 *)0x0;
                    param_1 = uVar6;
                    if (puVar18 != (undefined1 *)0x0) {
                      unaff_x22 = 0;
                      goto LAB_0158ca2c;
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
  else {
    lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar7 != 0) {
      uStack_88 = *(undefined8 *)(lVar7 + 0x58);
      uStack_90 = *(undefined8 *)(lVar7 + 0x50);
      uStack_78 = *(undefined8 *)(lVar7 + 0x68);
      uStack_80 = *(undefined8 *)(lVar7 + 0x60);
      uStack_68 = *(undefined8 *)(lVar7 + 0x78);
      uStack_70 = *(undefined8 *)(lVar7 + 0x70);
      uStack_58 = *(undefined8 *)(lVar7 + 0x88);
      uStack_60 = *(undefined8 *)(lVar7 + 0x80);
      param_3 = puRam0000000003d2a140;
      /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(puVar16,&uStack_90);
      goto LAB_0158c800;
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_b0 = (undefined1 *)&pppppppuStack_a0;
  puStack_98 = &Atlas_Contexts_FrontEndContextLoadoutState__DeclineToQuitLobby;
  puVar9 = *(undefined **)(lVar7 + 0x98);
  pppppppuStack_a0 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (puVar9 == (undefined *)0x0) {
    lVar7 = func_0x00f78af4();
    puStack_a8 = &Atlas_Contexts_FrontEndContextLoadoutState__KartSelectBackPressed;
    puStack_c0 = puVar16;
    uStack_b8 = param_1;
    pppppppuVar21 = &pppppppuStack_a0;
    if ((bRam0000000003eb5103 & 1) == 0) {
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      bRam0000000003eb5103 = 1;
      pppppppuVar21 = (undefined8 *******)puStack_b0;
    }
    puStack_b0 = (undefined1 *)pppppppuVar21;
    lVar19 = *(long *)(lVar7 + 0x88);
    if (lVar19 != 0) {
      lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar7,uRam0000000003d405d8);
      if (lVar10 == 0) {
        uVar8 = func_0x00f78af4();
        if ((bRam0000000003eb5105 & 1) == 0) {
          func_0x00f78a20(0x3d405d0);
          bRam0000000003eb5105 = 1;
        }
        if (uVar8 == 0) {
          auVar30 = func_0x00f78af4(0,uRam0000000003d405d0);
          uVar8 = auVar30._0_8_;
          *(undefined8 *)(uVar8 + 0x10) = *param_3;
          *(long *)(uVar8 + 0x20) = auVar30._8_8_;
          *(undefined8 **)(uVar8 + 0x28) = param_3;
          return uVar8;
        }
        return uVar8;
      }
      uStack_f8 = *(undefined8 *)(lVar10 + 0x58);
      uStack_100 = *(undefined8 *)(lVar10 + 0x50);
      uStack_e8 = *(undefined8 *)(lVar10 + 0x68);
      uStack_f0 = *(undefined8 *)(lVar10 + 0x60);
      uStack_d8 = *(undefined8 *)(lVar10 + 0x78);
      uStack_e0 = *(undefined8 *)(lVar10 + 0x70);
      uStack_c8 = *(undefined8 *)(lVar10 + 0x88);
      uStack_d0 = *(undefined8 *)(lVar10 + 0x80);
      /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar19,&uStack_100,puRam0000000003d2a140);
    }
    Atlas_Contexts_FrontEndContextLoadoutState__ShowCharacterSelect(lVar7);
    return 1;
  }
  puVar18 = (undefined1 *)0x1;
  uVar17 = 1;
  ppuVar2 = &puStack_b0;
  pppppppuVar21 = &pppppppuStack_a0;
  puStack_b0 = puVar16;
  puStack_a8 = (undefined *)param_1;
  if (*(long *)((long)puVar9 + 0x28) == 0) {
code_r0x0150ba34:
    puVar23 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar30 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)((long)puVar9 + 0x28),0,1,1,0);
    if (*(ulong *)((long)puVar9 + 0x28) == 0) goto code_r0x0150ba34;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulong *)((long)puVar9 + 0x28);
    puVar18 = (undefined1 *)0x0;
    ppuVar2 = (undefined1 **)&uStack_90;
    puVar9 = puStack_a8;
    puVar16 = puStack_b0;
    pppppppuVar21 = pppppppuStack_a0;
    puVar23 = puStack_98;
  }
  uVar8 = auVar30._0_8_;
  *(long *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(undefined1 **)((long)ppuVar2 + -0x20) = puVar16;
  *(undefined **)((long)ppuVar2 + -0x18) = puVar9;
  *(undefined8 ********)((long)ppuVar2 + -0x10) = pppppppuVar21;
  *(undefined **)((long)ppuVar2 + -8) = puVar23;
  puVar22 = (undefined1 *)((long)ppuVar2 + -0x10);
  lVar7 = *(long *)(uVar8 + 0x70);
  puVar12 = puVar18;
  if (lVar7 != 0) {
    uVar11 = *(uint *)(lVar7 + 0x18);
    if (uVar11 != 0) {
      puVar9 = (undefined *)uVar8;
      puVar16 = puVar18;
      if (*(int *)(lVar7 + 0x5c) - 1U < 2) {
        puVar12 = (undefined1 *)0x1;
      }
      else {
        if (uVar11 < 2) goto code_r0x0150bb24;
        puVar12 = (undefined1 *)(ulong)(*(int *)(lVar7 + 0xbc) - 1U < 2);
      }
      if (4 < uVar11) {
        if (*(int *)(lVar7 + 0x1dc) - 1U < 2) {
          unaff_x21 = 1;
        }
        else {
          if (uVar11 < 6) goto code_r0x0150bb24;
          unaff_x21 = (ulong)(*(int *)(lVar7 + 0x23c) - 1U < 2);
        }
        if (((int)puVar12 == 0) || ((auVar30._8_8_ & 1) != 0)) {
          if (((uint)unaff_x21 & ((uint)puVar18 ^ 1)) != 1) {
            return uVar8;
          }
          auVar28._8_8_ = 7;
          auVar28._0_8_ = uVar8;
          puVar12 = (undefined1 *)0x1;
          puVar22 = *(undefined1 **)((long)ppuVar2 + -0x10);
          puVar9 = *(undefined **)((long)ppuVar2 + -8);
          auVar29._8_8_ = 1;
          auVar29._0_8_ = *(undefined8 *)((long)ppuVar2 + -0x20);
          uVar8 = *(ulong *)((long)ppuVar2 + -0x18);
          unaff_x22 = *(long *)((long)ppuVar2 + -0x30);
          unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
          puVar18 = (undefined1 *)ppuVar2;
        }
        else {
          auVar28._8_8_ = 6;
          auVar28._0_8_ = uVar8;
          auVar29._8_8_ = 1;
          auVar29._0_8_ = puVar18;
          puVar9 = &UNK_0150bae4;
          puVar18 = (undefined1 *)((long)ppuVar2 + -0x30);
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
  }
  auVar31 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  puVar18 = (undefined1 *)((long)ppuVar2 + -0x40);
  *(undefined1 **)((long)ppuVar2 + -0x40) = puVar22;
  *(undefined **)((long)ppuVar2 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar7 = *(long *)(auVar31._0_8_ + 0x28);
  auVar31._8_4_ = auVar31._8_4_;
  auVar31._0_8_ = lVar7;
  if (lVar7 == 0) {
    puVar23 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar31 = func_0x00f78af4();
  }
  else {
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x30);
    puVar18 = *(undefined1 **)((long)ppuVar2 + -0x40);
    puVar23 = *(undefined **)((long)ppuVar2 + -0x38);
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined **)(puVar3 + -8) = puVar23;
  lVar7 = *(long *)(auVar31._0_8_ + 0x70);
  if (auVar31._8_4_ < 9) {
    uVar11 = *(uint *)(&UNK_033f869c + (long)(int)auVar31._8_4_ * 4);
  }
  else {
    uVar11 = 0xffffffff;
  }
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (uVar11 < *(uint *)(lVar7 + 0x18)) {
    return (ulong)*(uint *)(lVar7 + (ulong)uVar11 * 0x60 + 0x58);
  }
  uVar5 = func_0x00f78b24();
  uVar8 = func_0x00f78ac0(uVar5,0);
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar8 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar8 + 0x28) + 0x80) = extraout_w1;
    return uVar8;
  }
  uVar8 = func_0x00f78af4();
  puVar18 = puVar3 + -0x40;
  *(undefined1 **)(puVar3 + -0x40) = puVar16;
  *(undefined **)(puVar3 + -0x38) = puVar9;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
  *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar22 = puVar3 + -0x30;
  if (*(ulong *)(uVar8 + 0x28) == 0) {
    puVar9 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar28 = func_0x00f78af4();
    auVar29._8_8_ = uVar17;
    auVar29._0_8_ = puVar16;
  }
  else {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulong *)(uVar8 + 0x28);
    puVar12 = (undefined1 *)0x0;
    auVar29._8_8_ = 1;
    auVar29._0_8_ = puVar16;
    puVar9 = &UNK_0150bbf4;
    puVar18 = puVar3 + -0x40;
  }
code_r0x0150bc48:
  do {
    uVar6 = auVar28._0_8_;
    *(long *)(puVar18 + -0x20) = auVar29._0_8_;
    *(ulong *)(puVar18 + -0x18) = uVar8;
    *(undefined1 **)(puVar18 + -0x10) = puVar22;
    *(undefined **)(puVar18 + -8) = puVar9;
    uVar11 = auVar28._8_4_;
    if (uVar11 == 0xffffffff) {
      return uVar6;
    }
    lVar7 = *(long *)(uVar6 + 0x70);
    if (lVar7 == 0) {
      func_0x00f78af4();
      uVar15 = uVar8;
    }
    else {
      uVar15 = auVar28._8_8_;
      if (uVar11 < *(uint *)(lVar7 + 0x18)) {
        uVar14 = 2;
        if ((int)puVar12 == 0) {
          uVar14 = 0;
        }
        *(undefined4 *)(lVar7 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar14;
        if ((auVar29._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar6,auVar28._8_8_);
        }
        *(undefined8 *)(puVar18 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar18 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar18 + -0x50) = unaff_x26;
        *(long *)(puVar18 + -0x48) = unaff_x25;
        *(long *)(puVar18 + -0x40) = unaff_x24;
        *(long *)(puVar18 + -0x38) = unaff_x23;
        *(long *)(puVar18 + -0x30) = unaff_x22;
        *(ulong *)(puVar18 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar18 + -0x20) = *(undefined8 *)(puVar18 + -0x20);
        *(undefined8 *)(puVar18 + -0x18) = *(undefined8 *)(puVar18 + -0x18);
        *(undefined8 *)(puVar18 + -0x10) = *(undefined8 *)(puVar18 + -0x10);
        *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
        lVar7 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar19 = *(long *)(uVar6 + 0x70);
        if (lVar19 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar19 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar11;
        lVar19 = lVar19 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar19 + 0x20);
        unaff_x22 = *(long *)(lVar19 + 0x28);
        uVar17 = *(undefined8 *)(lVar19 + 0x30);
        uVar24 = *(undefined8 *)(lVar19 + 0x48);
        uVar5 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined8 *)(puVar18 + -0xe8) = *(undefined8 *)(lVar19 + 0x38);
        *(undefined8 *)(puVar18 + -0xf0) = uVar17;
        *(undefined8 *)(puVar18 + -0xd8) = uVar24;
        *(undefined8 *)(puVar18 + -0xe0) = uVar5;
        lVar7 = *(long *)(lVar19 + 0x50);
        iVar20 = *(int *)(lVar19 + 0x58);
        iVar1 = *(int *)(lVar19 + 0x5c);
        unaff_x23 = *(long *)(lVar19 + 0x60);
        unaff_x24 = *(long *)(lVar19 + 0x68);
        uVar17 = *(undefined8 *)(lVar19 + 0x70);
        *(undefined8 *)(puVar18 + -0xf8) = *(undefined8 *)(lVar19 + 0x78);
        *(undefined8 *)(puVar18 + -0x100) = uVar17;
        if (iVar1 == iVar20) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          if (lVar7 != 0) {
            uVar8 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar7,iVar20 == 2,0);
            return uVar8;
          }
        }
        else if (iVar20 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar5 = *(undefined8 *)(lVar19 + 0x38);
            uVar17 = *(undefined8 *)(lVar19 + 0x30);
            uVar25 = *(undefined8 *)(lVar19 + 0x48);
            uVar24 = *(undefined8 *)(lVar19 + 0x40);
            *(undefined8 *)(puVar18 + -0x118) = uVar5;
            *(undefined8 *)(puVar18 + -0x120) = uVar17;
            *(undefined8 *)(puVar18 + -0x108) = uVar25;
            *(undefined8 *)(puVar18 + -0x110) = uVar24;
            uVar27 = *(undefined8 *)(lVar19 + 0x78);
            uVar26 = *(undefined8 *)(lVar19 + 0x70);
            *(undefined8 *)(puVar18 + -0x128) = uVar27;
            *(undefined8 *)(puVar18 + -0x130) = uVar26;
            *(undefined8 *)(puVar18 + -200) = unaff_x26;
            *(long *)(puVar18 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar18 + -0xb0) = uVar5;
            *(undefined8 *)(puVar18 + -0xb8) = uVar17;
            *(undefined8 *)(puVar18 + -0xa0) = uVar25;
            *(undefined8 *)(puVar18 + -0xa8) = uVar24;
            *(long *)(puVar18 + -0x98) = lVar7;
            *(undefined8 *)(puVar18 + -0x90) = _UNK_033f8620;
            *(long *)(puVar18 + -0x88) = unaff_x23;
            *(long *)(puVar18 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar18 + -0x70) = uVar27;
            *(undefined8 *)(puVar18 + -0x78) = uVar26;
            lVar19 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar19,puVar18 + -200,uRam0000000003d2a408);
            iVar20 = 1;
          }
          else {
            iVar20 = 2;
          }
code_r0x0150c72c:
          lVar19 = *(long *)(uVar6 + 0x70);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar19 = lVar19 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar19 + 0x20) = unaff_x26;
            *(long *)(lVar19 + 0x28) = unaff_x22;
            uVar17 = *(undefined8 *)(puVar18 + -0xf0);
            uVar24 = *(undefined8 *)(puVar18 + -0xd8);
            uVar5 = *(undefined8 *)(puVar18 + -0xe0);
            *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(puVar18 + -0xe8);
            *(undefined8 *)(lVar19 + 0x30) = uVar17;
            *(undefined8 *)(lVar19 + 0x48) = uVar24;
            *(undefined8 *)(lVar19 + 0x40) = uVar5;
            *(long *)(lVar19 + 0x50) = lVar7;
            *(int *)(lVar19 + 0x58) = iVar20;
            *(int *)(lVar19 + 0x5c) = iVar1;
            *(long *)(lVar19 + 0x60) = unaff_x23;
            *(long *)(lVar19 + 0x68) = unaff_x24;
            uVar17 = *(undefined8 *)(puVar18 + -0x100);
            *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(puVar18 + -0xf8);
            *(undefined8 *)(lVar19 + 0x70) = uVar17;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar20 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar20 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar19 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar18 + -200) = unaff_x26;
            *(long *)(puVar18 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar18 + -0xb0) = *(undefined8 *)(puVar18 + -0xe8);
            *(undefined8 *)(puVar18 + -0xb8) = *(undefined8 *)(puVar18 + -0xf0);
            *(undefined8 *)(puVar18 + -0xa0) = *(undefined8 *)(puVar18 + -0xd8);
            *(undefined8 *)(puVar18 + -0xa8) = *(undefined8 *)(puVar18 + -0xe0);
            *(long *)(puVar18 + -0x98) = lVar7;
            *(undefined8 *)(puVar18 + -0x90) = _UNK_033f8628;
            *(long *)(puVar18 + -0x88) = unaff_x23;
            *(long *)(puVar18 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar18 + -0x70) = *(undefined8 *)(puVar18 + -0xf8);
            *(undefined8 *)(puVar18 + -0x78) = *(undefined8 *)(puVar18 + -0x100);
            lVar19 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar17 = func_0x00f78b24();
        auVar30 = func_0x00f78ac0(uVar17,0);
        lVar19 = auVar30._8_8_;
        *(undefined8 *)(puVar18 + -0x180) = unaff_x26;
        *(long *)(puVar18 + -0x178) = unaff_x25;
        *(long *)(puVar18 + -0x170) = unaff_x24;
        *(long *)(puVar18 + -0x168) = unaff_x23;
        *(long *)(puVar18 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar18 + -0x158) = auVar28;
        *(long *)(puVar18 + -0x148) = lVar7;
        *(undefined1 **)(puVar18 + -0x140) = puVar18 + -0x10;
        *(undefined **)(puVar18 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar17 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x1c),
                                 *(undefined4 *)(lVar19 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar19 + 0x10),0,0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,10,uRam0000000003d5e7a8);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar17,*(undefined8 *)(lVar19 + 0x58),uRam0000000003d5e6e0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar17,1,uRam0000000003d5e888);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar17,auVar30._0_8_,uRam0000000003d5e850);
        if ((uVar8 != 0) && (*(char *)(uVar8 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar8 + 0x30) = *(undefined8 *)(lVar19 + 0x10);
        }
        return uVar8;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar30 = func_0x00f78ac0(uVar17,0);
    puVar4 = puVar18 + -0x30;
    puVar16 = puVar18 + -0x30;
    *(undefined1 **)(puVar18 + -0x30) = puVar18 + -0x10;
    *(undefined **)(puVar18 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar7 = *(long *)(auVar30._0_8_ + 0x28);
    auVar29._8_8_ = auVar30._8_8_;
    auVar29._0_8_ = lVar7;
    if (lVar7 == 0) {
      puVar9 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar29 = func_0x00f78af4();
    }
    else {
      puVar4 = puVar18 + -0x20;
      puVar16 = *(undefined1 **)(puVar18 + -0x30);
      puVar9 = *(undefined **)(puVar18 + -0x28);
    }
    uVar8 = auVar29._8_8_;
    *(ulong *)(puVar4 + -0x20) = uVar6;
    *(ulong *)(puVar4 + -0x18) = uVar15;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(undefined **)(puVar4 + -8) = puVar9;
    puVar22 = puVar4 + -0x10;
    auVar28._8_8_ = 4;
    auVar28._0_8_ = auVar29._0_8_;
    puVar12 = (undefined1 *)0x0;
    puVar9 = &UNK_0150bd10;
    puVar18 = puVar4 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x158cb44 | Atlas.Contexts.FrontEndContextLoadoutState.DeclineToQuitLobby
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Contexts_FrontEndContextLoadoutState__DeclineToQuitLobby
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 extraout_w1;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar16;
  undefined8 unaff_x28;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *unaff_x29;
  undefined *puVar19;
  undefined *unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar7 = *(ulong *)(param_1 + 0x98);
  if (uVar7 == 0) {
    lVar13 = func_0x00f78af4();
    if ((bRam0000000003eb5103 & 1) == 0) {
      func_0x00f78a20(0x3d2a140);
      func_0x00f78a20(0x3d405d8);
      bRam0000000003eb5103 = 1;
    }
    lVar14 = *(long *)(lVar13 + 0x88);
    if (lVar14 != 0) {
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar13,uRam0000000003d405d8);
      if (lVar8 == 0) {
        uVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5105 & 1) == 0) {
          func_0x00f78a20(0x3d405d0);
          bRam0000000003eb5105 = 1;
        }
        if (uVar7 == 0) {
          auVar26 = func_0x00f78af4(0,uRam0000000003d405d0);
          uVar7 = auVar26._0_8_;
          *(undefined8 *)(uVar7 + 0x10) = *param_3;
          *(long *)(uVar7 + 0x20) = auVar26._8_8_;
          *(undefined8 **)(uVar7 + 0x28) = param_3;
          return uVar7;
        }
        return uVar7;
      }
      uStack_68 = *(undefined8 *)(lVar8 + 0x58);
      uStack_70 = *(undefined8 *)(lVar8 + 0x50);
      uStack_58 = *(undefined8 *)(lVar8 + 0x68);
      uStack_60 = *(undefined8 *)(lVar8 + 0x60);
      uStack_48 = *(undefined8 *)(lVar8 + 0x78);
      uStack_50 = *(undefined8 *)(lVar8 + 0x70);
      uStack_38 = *(undefined8 *)(lVar8 + 0x88);
      uStack_40 = *(undefined8 *)(lVar8 + 0x80);
      /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar14,&uStack_70,uRam0000000003d2a140);
    }
    Atlas_Contexts_FrontEndContextLoadoutState__ShowCharacterSelect(lVar13);
    return 1;
  }
  uVar11 = 1;
  uVar12 = 1;
  puVar3 = &stack0xffffffffffffffe0;
  puVar18 = &stack0xfffffffffffffff0;
  if (*(long *)(uVar7 + 0x28) == 0) {
code_r0x0150ba34:
    unaff_x30 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar26 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)(uVar7 + 0x28),0,1,1,0);
    if (*(ulong *)(uVar7 + 0x28) == 0) goto code_r0x0150ba34;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulong *)(uVar7 + 0x28);
    uVar11 = 0;
    puVar3 = (undefined1 *)register0x00000008;
    uVar7 = unaff_x19;
    puVar18 = unaff_x29;
  }
  uVar6 = auVar26._0_8_;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(ulong *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = unaff_x20;
  *(ulong *)(puVar3 + -0x18) = uVar7;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  puVar18 = puVar3 + -0x10;
  lVar13 = *(long *)(uVar6 + 0x70);
  uVar10 = uVar11;
  if (lVar13 != 0) {
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (uVar9 != 0) {
      uVar7 = uVar6;
      unaff_x20 = uVar11;
      if (*(int *)(lVar13 + 0x5c) - 1U < 2) {
        uVar10 = 1;
      }
      else {
        if (uVar9 < 2) goto code_r0x0150bb24;
        uVar10 = (ulong)(*(int *)(lVar13 + 0xbc) - 1U < 2);
      }
      if (4 < uVar9) {
        if (*(int *)(lVar13 + 0x1dc) - 1U < 2) {
          unaff_x21 = 1;
        }
        else {
          if (uVar9 < 6) goto code_r0x0150bb24;
          unaff_x21 = (ulong)(*(int *)(lVar13 + 0x23c) - 1U < 2);
        }
        if (((int)uVar10 == 0) || ((auVar26._8_8_ & 1) != 0)) {
          if (((uint)unaff_x21 & ((uint)uVar11 ^ 1)) != 1) {
            return uVar6;
          }
          auVar24._8_8_ = 7;
          auVar24._0_8_ = uVar6;
          uVar10 = 1;
          puVar18 = *(undefined1 **)(puVar3 + -0x10);
          puVar19 = *(undefined **)(puVar3 + -8);
          auVar25._8_8_ = 1;
          auVar25._0_8_ = *(undefined8 *)(puVar3 + -0x20);
          uVar6 = *(ulong *)(puVar3 + -0x18);
          unaff_x22 = *(long *)(puVar3 + -0x30);
          unaff_x21 = *(ulong *)(puVar3 + -0x28);
        }
        else {
          auVar24._8_8_ = 6;
          auVar24._0_8_ = uVar6;
          auVar25._8_8_ = 1;
          auVar25._0_8_ = uVar11;
          puVar19 = &UNK_0150bae4;
          puVar3 = puVar3 + -0x30;
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
  }
  auVar27 = func_0x00f78af4();
  puVar2 = puVar3 + -0x40;
  puVar17 = puVar3 + -0x40;
  *(undefined1 **)(puVar3 + -0x40) = puVar18;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar13 = *(long *)(auVar27._0_8_ + 0x28);
  auVar27._8_4_ = auVar27._8_4_;
  auVar27._0_8_ = lVar13;
  if (lVar13 == 0) {
    puVar19 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar27 = func_0x00f78af4();
  }
  else {
    puVar2 = puVar3 + -0x30;
    puVar17 = *(undefined1 **)(puVar3 + -0x40);
    puVar19 = *(undefined **)(puVar3 + -0x38);
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar17;
  *(undefined **)(puVar2 + -8) = puVar19;
  lVar13 = *(long *)(auVar27._0_8_ + 0x70);
  if (auVar27._8_4_ < 9) {
    uVar9 = *(uint *)(&UNK_033f869c + (long)(int)auVar27._8_4_ * 4);
  }
  else {
    uVar9 = 0xffffffff;
  }
  if (lVar13 == 0) {
    func_0x00f78af4();
  }
  else if (uVar9 < *(uint *)(lVar13 + 0x18)) {
    return (ulong)*(uint *)(lVar13 + (ulong)uVar9 * 0x60 + 0x58);
  }
  uVar5 = func_0x00f78b24();
  uVar11 = func_0x00f78ac0(uVar5,0);
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar11 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar11 + 0x28) + 0x80) = extraout_w1;
    return uVar11;
  }
  uVar6 = func_0x00f78af4();
  puVar3 = puVar2 + -0x40;
  *(ulong *)(puVar2 + -0x40) = unaff_x20;
  *(ulong *)(puVar2 + -0x38) = uVar7;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x20;
  *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar18 = puVar2 + -0x30;
  if (*(ulong *)(uVar6 + 0x28) == 0) {
    puVar19 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar24 = func_0x00f78af4();
    auVar25._8_8_ = uVar12;
    auVar25._0_8_ = unaff_x20;
  }
  else {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)(uVar6 + 0x28);
    uVar10 = 0;
    auVar25._8_8_ = 1;
    auVar25._0_8_ = unaff_x20;
    puVar19 = &UNK_0150bbf4;
    puVar3 = puVar2 + -0x40;
  }
code_r0x0150bc48:
  do {
    uVar7 = auVar24._0_8_;
    *(long *)(puVar3 + -0x20) = auVar25._0_8_;
    *(ulong *)(puVar3 + -0x18) = uVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    uVar9 = auVar24._8_4_;
    if (uVar9 == 0xffffffff) {
      return uVar7;
    }
    lVar13 = *(long *)(uVar7 + 0x70);
    if (lVar13 == 0) {
      func_0x00f78af4();
      uVar11 = uVar6;
    }
    else {
      uVar11 = auVar24._8_8_;
      if (uVar9 < *(uint *)(lVar13 + 0x18)) {
        uVar15 = 2;
        if ((int)uVar10 == 0) {
          uVar15 = 0;
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x60 + 0x5c) = uVar15;
        if ((auVar25._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar7,auVar24._8_8_);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(ulong *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar13 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar14 = *(long *)(uVar7 + 0x70);
        if (lVar14 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar9;
        lVar14 = lVar14 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar14 + 0x20);
        unaff_x22 = *(long *)(lVar14 + 0x28);
        uVar12 = *(undefined8 *)(lVar14 + 0x30);
        uVar20 = *(undefined8 *)(lVar14 + 0x48);
        uVar5 = *(undefined8 *)(lVar14 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar14 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar12;
        *(undefined8 *)(puVar3 + -0xd8) = uVar20;
        *(undefined8 *)(puVar3 + -0xe0) = uVar5;
        lVar13 = *(long *)(lVar14 + 0x50);
        iVar16 = *(int *)(lVar14 + 0x58);
        iVar1 = *(int *)(lVar14 + 0x5c);
        unaff_x23 = *(long *)(lVar14 + 0x60);
        unaff_x24 = *(long *)(lVar14 + 0x68);
        uVar12 = *(undefined8 *)(lVar14 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar14 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar12;
        if (iVar1 == iVar16) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          if (lVar13 != 0) {
            uVar7 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar13,iVar16 == 2,0);
            return uVar7;
          }
        }
        else if (iVar16 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar5 = *(undefined8 *)(lVar14 + 0x38);
            uVar12 = *(undefined8 *)(lVar14 + 0x30);
            uVar21 = *(undefined8 *)(lVar14 + 0x48);
            uVar20 = *(undefined8 *)(lVar14 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar5;
            *(undefined8 *)(puVar3 + -0x120) = uVar12;
            *(undefined8 *)(puVar3 + -0x108) = uVar21;
            *(undefined8 *)(puVar3 + -0x110) = uVar20;
            uVar23 = *(undefined8 *)(lVar14 + 0x78);
            uVar22 = *(undefined8 *)(lVar14 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar23;
            *(undefined8 *)(puVar3 + -0x130) = uVar22;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar5;
            *(undefined8 *)(puVar3 + -0xb8) = uVar12;
            *(undefined8 *)(puVar3 + -0xa0) = uVar21;
            *(undefined8 *)(puVar3 + -0xa8) = uVar20;
            *(long *)(puVar3 + -0x98) = lVar13;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar23;
            *(undefined8 *)(puVar3 + -0x78) = uVar22;
            lVar14 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar14,puVar3 + -200,uRam0000000003d2a408);
            iVar16 = 1;
          }
          else {
            iVar16 = 2;
          }
code_r0x0150c72c:
          lVar14 = *(long *)(uVar7 + 0x70);
          if (lVar14 != 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar9) goto code_r0x0150c7d8;
            lVar14 = lVar14 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar14 + 0x20) = unaff_x26;
            *(long *)(lVar14 + 0x28) = unaff_x22;
            uVar12 = *(undefined8 *)(puVar3 + -0xf0);
            uVar20 = *(undefined8 *)(puVar3 + -0xd8);
            uVar5 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar14 + 0x30) = uVar12;
            *(undefined8 *)(lVar14 + 0x48) = uVar20;
            *(undefined8 *)(lVar14 + 0x40) = uVar5;
            *(long *)(lVar14 + 0x50) = lVar13;
            *(int *)(lVar14 + 0x58) = iVar16;
            *(int *)(lVar14 + 0x5c) = iVar1;
            *(long *)(lVar14 + 0x60) = unaff_x23;
            *(long *)(lVar14 + 0x68) = unaff_x24;
            uVar12 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar14 + 0x70) = uVar12;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar16 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar16 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar14 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar13;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar14 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar12 = func_0x00f78b24();
        auVar26 = func_0x00f78ac0(uVar12,0);
        lVar14 = auVar26._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar3 + -0x158) = auVar24;
        *(long *)(puVar3 + -0x148) = lVar13;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar12 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 0x1c),
                                 *(undefined4 *)(lVar14 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar14 + 0x10),0,0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,10,uRam0000000003d5e7a8);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar12,*(undefined8 *)(lVar14 + 0x58),uRam0000000003d5e6e0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar12,1,uRam0000000003d5e888);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar12,auVar26._0_8_,uRam0000000003d5e850);
        if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar7 + 0x30) = *(undefined8 *)(lVar14 + 0x10);
        }
        return uVar7;
      }
    }
    uVar12 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar12,0);
    puVar4 = puVar3 + -0x30;
    puVar18 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar13 = *(long *)(auVar26._0_8_ + 0x28);
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._0_8_ = lVar13;
    if (lVar13 == 0) {
      puVar19 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar25 = func_0x00f78af4();
    }
    else {
      puVar4 = puVar3 + -0x20;
      puVar18 = *(undefined1 **)(puVar3 + -0x30);
      puVar19 = *(undefined **)(puVar3 + -0x28);
    }
    uVar6 = auVar25._8_8_;
    *(ulong *)(puVar4 + -0x20) = uVar7;
    *(ulong *)(puVar4 + -0x18) = uVar11;
    *(undefined1 **)(puVar4 + -0x10) = puVar18;
    *(undefined **)(puVar4 + -8) = puVar19;
    puVar18 = puVar4 + -0x10;
    auVar24._8_8_ = 4;
    auVar24._0_8_ = auVar25._0_8_;
    uVar10 = 0;
    puVar19 = &UNK_0150bd10;
    puVar3 = puVar4 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x158cb70 | Atlas.Contexts.FrontEndContextLoadoutState.KartSelectBackPressed
// ============================================================

long Atlas_Contexts_FrontEndContextLoadoutState__KartSelectBackPressed
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb5103 & 1) == 0) {
    func_0x00f78a20(0x3d2a140);
    func_0x00f78a20(0x3d405d8);
    bRam0000000003eb5103 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d405d8);
    if (lVar1 == 0) {
      lVar2 = func_0x00f78af4();
      if ((bRam0000000003eb5105 & 1) == 0) {
        func_0x00f78a20(0x3d405d0);
        bRam0000000003eb5105 = 1;
      }
      if (lVar2 != 0) {
        return lVar2;
      }
      auVar3 = func_0x00f78af4(0,uRam0000000003d405d0);
      lVar2 = auVar3._0_8_;
      *(undefined8 *)(lVar2 + 0x10) = *param_3;
      *(long *)(lVar2 + 0x20) = auVar3._8_8_;
      *(undefined8 **)(lVar2 + 0x28) = param_3;
      return lVar2;
    }
    uStack_58 = *(undefined8 *)(lVar1 + 0x58);
    uStack_60 = *(undefined8 *)(lVar1 + 0x50);
    uStack_48 = *(undefined8 *)(lVar1 + 0x68);
    uStack_50 = *(undefined8 *)(lVar1 + 0x60);
    uStack_38 = *(undefined8 *)(lVar1 + 0x78);
    uStack_40 = *(undefined8 *)(lVar1 + 0x70);
    uStack_28 = *(undefined8 *)(lVar1 + 0x88);
    uStack_30 = *(undefined8 *)(lVar1 + 0x80);
    /*System.Action<KartLoadout>$$Invoke*/ func_0x01b4919c(lVar2,&uStack_60,uRam0000000003d2a140);
  }
  Atlas_Contexts_FrontEndContextLoadoutState__ShowCharacterSelect(param_1);
  return 1;
}



// ============================================================
// RVA: 0x158cc18 | Atlas.Contexts.FrontEndContextLoadoutState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextLoadoutState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5105 & 1) == 0) {
    func_0x00f78a20(0x3d405d0);
    bRam0000000003eb5105 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405d0);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



