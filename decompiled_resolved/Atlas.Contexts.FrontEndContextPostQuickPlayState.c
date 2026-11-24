// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextPostQuickPlayState

// ============================================================
// RVA: 0x1588f00 | Atlas.Contexts.FrontEndContextPostQuickPlayState.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15890a0 | Atlas.Contexts.FrontEndContextPostQuickPlayState.add_OnExitPostEvent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158a254 | Atlas.Contexts.FrontEndContextPostQuickPlayState.remove_OnExitPostEvent
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextPostQuickPlayState__remove_OnExitPostEvent
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
  ulong uStack_120;
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
  code *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5130 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5130 = 1;
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
  puStack_38 = &Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
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
  uStack_90 = 0x3d1b6e0;
  pcStack_68 = Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = &puStack_40;
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
  uStack_c0 = 0x3d1b6e0;
  puStack_98 = &Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
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
  uStack_f0 = 0x3d1b6e0;
  puStack_c8 = &Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
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
  puVar3 = &uStack_120;
  uStack_120 = 0x3d1b6e0;
  puStack_f8 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_118 = uVar17;
  puStack_110 = puVar23;
  uStack_108 = uVar18;
  ppppuStack_100 = &ppppuStack_d0;
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
    pppppuVar27 = &ppppuStack_100;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_110;
    auVar1._0_8_ = uStack_108;
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
        auVar34._8_8_ = puStack_110;
        auVar34._0_8_ = uStack_108;
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
        puVar4 = &uStack_f0;
        uVar17 = uStack_118;
        uVar24 = uStack_120;
        pppppuVar27 = (undefined8 *****)ppppuStack_100;
        puVar28 = puStack_f8;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_f0;
    uVar9 = param_4;
    uVar17 = uStack_118;
    uVar24 = uStack_120;
    pppppuVar27 = (undefined8 *****)ppppuStack_100;
    puVar28 = puStack_f8;
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
// RVA: 0x158f980 | Atlas.Contexts.FrontEndContextPostQuickPlayState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextPostQuickPlayState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x158f990 | Atlas.Contexts.FrontEndContextPostQuickPlayState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0158fb7c: Changing call to branch */
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__OnEnter(dword *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  dword **ppdVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  dword *pdVar18;
  dword *pdVar19;
  dword *pdVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  dword *pdVar25;
  long *extraout_x1;
  dword *pdVar26;
  long *plVar27;
  dword *pdVar28;
  dword *pdVar29;
  undefined8 uVar30;
  long lVar31;
  int *piVar32;
  uint uVar33;
  undefined8 uVar34;
  dword *unaff_x20;
  undefined8 uVar35;
  dword *unaff_x21;
  undefined8 uVar36;
  undefined8 unaff_x22;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar39;
  undefined8 unaff_x25;
  code *pcVar40;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar41;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined4 extraout_s0;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  dword *pdStack_90;
  dword *pdStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(param_1 + 0x28),1,0,0,0,0);
    *(undefined1 *)((long)param_1 + 0xc9) = 1;
    return pdVar18;
  }
  pdVar19 = (dword *)func_0x00f78af4();
  ppdVar12 = (dword **)&stack0xffffffffffffffb0;
  puStack_28 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__OnUpdate;
  pdVar18 = (dword *)0x3eb5000;
  pdVar20 = pdVar19;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5132 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d28988);
    func_0x00f78a20(0x3d56c90);
    func_0x00f78a20(0x3d56ca0);
    func_0x00f78a20(0x3d56ca8);
    func_0x00f78a20(0x3d28718);
    func_0x00f78a20(0x3d40598);
    func_0x00f78a20(0x3d28998);
    pdVar20 = (dword *)func_0x00f78a20(0x3d28720);
    bRam0000000003eb5132 = 1;
  }
  pdVar25 = unaff_x21;
  uVar30 = unaff_x22;
  if (*(char *)(pdVar19 + 0x32) == '\0') {
    if (*(char *)((long)pdVar19 + 0xc9) == '\0') {
      return pdVar20;
    }
    if (*(long *)(pdVar19 + 0x28) != 0) {
      pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(pdVar19 + 0x28),0);
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      *(undefined1 *)((long)pdVar19 + 0xc9) = 0;
      pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.TransitionData_TypeInfo*/ uRam0000000003d28998);
      /*Atlas.UI.Screens.ResultsScreen.TransitionData$$.ctor*/ func_0x01565c5c(pdVar18,0);
      uVar37 = 0x3d40598;
      lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
      uVar30 = 0x3d40598;
      if ((lVar21 != 0) && (uVar30 = uVar37, pdVar18 != (dword *)0x0)) {
        *(long *)(pdVar18 + 4) = *(long *)(lVar21 + 0x18);
        pdVar25 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28988);
        /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$.ctor*/ func_0x01564de4(pdVar25,pdVar19,uRam0000000003d56ca8,0);
        *(dword **)(pdVar18 + 6) = pdVar25;
        lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
        if (lVar21 != 0) {
          *(undefined1 *)(pdVar18 + 8) = *(undefined1 *)(lVar21 + 0x20);
          pdVar20 = *(dword **)(pdVar19 + 0x20);
          pdVar25 = (dword *)0x3d1feb8;
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          pdVar19 = (dword *)0x0;
          if (pdVar20 != (dword *)0x0) {
            pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70);
            ppdVar12 = (dword **)&stack0xffffffffffffffe0;
            pppppppuVar42 = pppppppuStack_30;
            puVar43 = puStack_28;
            goto code_r0x0147079c;
          }
        }
      }
    }
  }
  else if (*(long *)(pdVar19 + 0x28) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(pdVar19 + 0x28),0);
    if ((int)pdVar18 == 0) {
      return pdVar18;
    }
    *(undefined1 *)(pdVar19 + 0x32) = 0;
    pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
    /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(pdVar18,0);
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
    if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x10), lVar21 != 0)) &&
       (pdVar18 != (dword *)0x0)) {
      lVar24 = *(long *)(lVar21 + 0x38);
      lVar39 = *(long *)(lVar21 + 0x30);
      lVar45 = *(long *)(lVar21 + 0x48);
      lVar31 = *(long *)(lVar21 + 0x40);
      lVar46 = *(long *)(lVar21 + 0x50);
      lVar48 = *(long *)(lVar21 + 0x68);
      lVar47 = *(long *)(lVar21 + 0x60);
      *(long *)(pdVar18 + 0xe) = *(long *)(lVar21 + 0x58);
      *(long *)(pdVar18 + 0xc) = lVar46;
      *(long *)(pdVar18 + 0x12) = lVar48;
      *(long *)(pdVar18 + 0x10) = lVar47;
      *(long *)(pdVar18 + 6) = lVar24;
      *(long *)(pdVar18 + 4) = lVar39;
      *(long *)(pdVar18 + 10) = lVar45;
      *(long *)(pdVar18 + 8) = lVar31;
      lVar21 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar21,pdVar19,uRam0000000003d56ca0,0);
      *(long *)(pdVar18 + 0x14) = lVar21;
      lVar21 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar21,pdVar19,uRam0000000003d56c90,0);
      *(long *)(pdVar18 + 0x16) = lVar21;
      pdVar20 = *(dword **)(pdVar19 + 0x20);
      unaff_x22 = 0x3d1feb8;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar25 = (dword *)0x0;
      uVar30 = unaff_x22;
      if (pdVar20 != (dword *)0x0) {
        pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
        param_1 = pdVar19;
        unaff_x20 = pdVar18;
        unaff_x21 = pdVar20;
        pppppppuVar42 = &pppppppuStack_30;
        puVar43 = &UNK_0158fb80;
code_r0x0147079c:
        uVar30 = 0;
        pdVar28 = (dword *)0x0;
        *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
        *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
        *(undefined8 *)((long)ppdVar12 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar12 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar12 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar12 + -0x18) = param_1;
        *(undefined8 ********)((long)ppdVar12 + -0x10) = pppppppuVar42;
        *(undefined **)((long)ppdVar12 + -8) = puVar43;
        puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
        pdVar19 = (dword *)0x0;
        pdVar29 = pdVar18;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        *(undefined8 *)((long)ppdVar12 + -0x48) = 0;
        lVar21 = *(long *)(pdVar20 + 4);
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          uVar30 = 0;
          puVar43 = &UNK_01470820;
          pdVar26 = pdVar25;
          pdVar29 = pdVar18;
code_r0x02f87f38:
          *(undefined8 *)((long)ppdVar12 + -0x90) = unaff_x24;
          *(undefined8 *)((long)ppdVar12 + -0x88) = 0x3eb4000;
          *(undefined8 *)((long)ppdVar12 + -0x80) = 0;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x70) = pdVar20;
          *(dword **)((long)ppdVar12 + -0x68) = pdVar25;
          *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
          *(undefined **)((long)ppdVar12 + -0x58) = puVar43;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          *(undefined8 *)((long)ppdVar12 + -0x130) = unaff_x26;
          *(undefined8 *)((long)ppdVar12 + -0x128) = unaff_x25;
          *(undefined8 *)((long)ppdVar12 + -0x120) = 0x3ebc000;
          *(dword **)((long)ppdVar12 + -0x118) = pdVar26;
          *(dword **)((long)ppdVar12 + -0x110) = pdVar29;
          *(undefined8 *)((long)ppdVar12 + -0x108) = uVar30;
          *(long *)((long)ppdVar12 + -0x100) = lVar21;
          *(dword **)((long)ppdVar12 + -0xf8) = pdVar28;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x60);
          *(undefined **)((long)ppdVar12 + -0xe8) = &UNK_02f87f9c;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar39 = *(long *)(lVar21 + 0x78);
          if (lVar39 != 0) {
            iVar17 = *(int *)(lVar39 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar16 = 1;
            pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar39 + 0x18) <= iVar16 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
              if (lVar39 == 0) break;
              uVar23 = /*System.String$$Equals*/ func_0x029caa48(lVar39,pdVar26,5,0);
              if ((uVar23 & 1) != 0) {
                return pdVar18;
              }
              pdVar18 = (dword *)(ulong)(iVar16 < iVar17);
              if (iVar17 == iVar16) {
                return pdVar18;
              }
              lVar39 = *(long *)(lVar21 + 0x78);
              iVar16 = iVar16 + 1;
            } while (lVar39 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar49 = func_0x00f78af4();
        pdVar26 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
        *(undefined **)((long)ppdVar12 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 != 0) {
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x60);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x58);
          goto code_r0x02f87f38;
        }
        auVar49 = func_0x00f78af4();
        uVar30 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x70) = (undefined1 *)((long)ppdVar12 + -0x60);
        *(undefined **)((long)ppdVar12 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          *(undefined8 *)((long)ppdVar12 + -0x90) = 0;
          *(dword **)((long)ppdVar12 + -0x88) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x80) = pdVar20;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar25;
          *(undefined8 *)((long)ppdVar12 + -0x70) = *(undefined8 *)((long)ppdVar12 + -0x70);
          *(undefined8 *)((long)ppdVar12 + -0x68) = *(undefined8 *)((long)ppdVar12 + -0x68);
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar39 = *(long *)(lVar21 + 0x70);
          if (lVar39 != 0) {
            lVar24 = lVar39;
            if (*(uint *)(lVar39 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar24 = *(long *)(lVar21 + 0x70);
            }
            if (lVar24 != 0) {
              lVar39 = *(long *)(lVar39 + 0x10) + (long)(int)auVar49._8_4_ * 0x28;
              uVar35 = *(undefined8 *)(lVar39 + 0x28);
              uVar37 = *(undefined8 *)(lVar39 + 0x20);
              uVar2 = *(undefined4 *)(lVar39 + 0x42);
              *(undefined4 *)((long)ppdVar12 + -0xd8) = uVar2;
              uVar5 = *(undefined2 *)(lVar39 + 0x46);
              *(undefined2 *)((long)ppdVar12 + -0xd4) = uVar5;
              *(undefined8 *)((long)ppdVar12 + -200) = uVar35;
              *(undefined8 *)((long)ppdVar12 + -0xd0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb8) = uVar35;
              *(undefined8 *)((long)ppdVar12 + -0xc0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb0) = 0;
              *(undefined8 *)((long)ppdVar12 + -0xa8) = 0;
              *(undefined2 *)((long)ppdVar12 + -0xa0) = 1;
              *(undefined4 *)((long)ppdVar12 + -0x9e) = uVar2;
              *(undefined2 *)((long)ppdVar12 + -0x9a) = uVar5;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar24,uVar30,(undefined1 *)((long)ppdVar12 + -0xc0),
                              uRam0000000003d3ddd0);
              pdVar18 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar21,uVar30);
              return pdVar18;
            }
          }
          auVar49 = func_0x00f78af4();
          pdVar26 = auVar49._8_8_;
          puVar14 = (undefined1 *)((long)ppdVar12 + -0x110);
          *(undefined8 *)((long)ppdVar12 + -0x110) = 0;
          *(long *)((long)ppdVar12 + -0x108) = lVar39;
          *(long *)((long)ppdVar12 + -0x100) = lVar21;
          *(undefined8 *)((long)ppdVar12 + -0xf8) = uVar30;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x70);
          *(undefined **)((long)ppdVar12 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xf0);
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar21 = *(long *)(auVar49._0_8_ + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar49._8_4_ * 0x28 + 0x28);
            if (lVar21 == 0) {
              pdVar18 = (dword *)0x0;
            }
            else {
              pdVar18 = *(dword **)(lVar21 + 0x40);
            }
            return pdVar18;
          }
          puVar43 = &Core_UI2_UIScreen__ForceExit;
          pdVar25 = (dword *)func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar18 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar49 = func_0x00f78af4();
        pdVar26 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x80) = (undefined1 *)((long)ppdVar12 + -0x70);
        *(undefined **)((long)ppdVar12 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = pdVar18;
        auVar49._0_8_ = lVar21;
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          puVar7 = (undefined1 *)((long)ppdVar12 + -0x70);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x80);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x78);
          pdVar18 = pdVar20;
          goto code_r0x02f877a8;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0x90) = (undefined1 *)((long)ppdVar12 + -0x80);
        *(undefined **)((long)ppdVar12 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = auVar49._8_8_;
        auVar49._0_8_ = lVar21;
        if (lVar21 != 0) {
          puVar8 = (undefined1 *)((long)ppdVar12 + -0x80);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x90);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x88);
          pdVar26 = pdVar28;
          while( true ) {
            puVar7 = puVar8 + -0x30;
            *(dword **)(puVar8 + -0x30) = pdVar19;
            *(dword **)(puVar8 + -0x28) = pdVar18;
            *(dword **)(puVar8 + -0x20) = pdVar20;
            *(dword **)(puVar8 + -0x18) = pdVar25;
            *(undefined1 **)(puVar8 + -0x10) = puVar41;
            *(undefined **)(puVar8 + -8) = puVar43;
            puVar41 = puVar8 + -0x10;
            puVar43 = &UNK_02f883d8;
            pdVar28 = pdVar26;
            pdVar25 = pdVar29;
            pdVar18 = pdVar26;
            pdVar19 = auVar49._0_8_;
code_r0x02f877a8:
            pdVar20 = auVar49._0_8_;
            puVar14 = puVar7 + -0x60;
            *(dword **)(puVar7 + -0x30) = pdVar19;
            *(long *)(puVar7 + -0x28) = auVar49._8_8_;
            *(dword **)(puVar7 + -0x20) = pdVar18;
            *(dword **)(puVar7 + -0x18) = pdVar25;
            *(undefined1 **)(puVar7 + -0x10) = puVar41;
            *(undefined **)(puVar7 + -8) = puVar43;
            puVar41 = puVar7 + -0x10;
            pdVar18 = pdVar20;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar18 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar33 = (uint)pdVar26;
            if (((int)uVar33 < 0) || ((int)*(long *)(pdVar20 + 0x14) <= (int)uVar33)) {
              return pdVar18;
            }
            lVar21 = *(long *)(pdVar20 + 0x1c);
            if (lVar21 == 0) break;
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(lVar21 + 0x10) + ((ulong)pdVar26 & 0xffffffff) * 0x28;
            pdVar19 = *(dword **)(lVar21 + 0x20);
            pdVar25 = *(dword **)(lVar21 + 0x28);
            *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar21 + 0x42);
            *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar21 + 0x46);
            if (pdVar25 == (dword *)0x0) {
              lVar21 = *(long *)(pdVar20 + 0x1c);
              if (lVar21 != 0) {
                *(dword **)(puVar7 + -0x58) = pdVar19;
                *(undefined8 *)(puVar7 + -0x50) = 0;
                *(undefined8 *)(puVar7 + -0x48) = 0;
                *(undefined8 *)(puVar7 + -0x40) = 0;
                *(undefined2 *)(puVar7 + -0x38) = 0;
                *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
                *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
                pdVar18 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,pdVar26,puVar7 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar18;
              }
              break;
            }
            puVar43 = &UNK_02f87848;
            pdVar18 = pdVar25;
code_r0x02f882d8:
            *(dword **)(puVar14 + -0x20) = pdVar20;
            *(dword **)(puVar14 + -0x18) = pdVar26;
            *(undefined1 **)(puVar14 + -0x10) = puVar41;
            *(undefined **)(puVar14 + -8) = puVar43;
            (**(code **)(*(long *)pdVar25 + 0x218))
                      (pdVar25,*(undefined8 *)(*(long *)pdVar25 + 0x220));
            if (*(long *)(pdVar25 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar25 + 10),0);
              pdVar25[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar25,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*(long *)pdVar25 + 0x228))
                                           (pdVar25,*(undefined8 *)(*(long *)pdVar25 + 0x230));
              return pdVar18;
            }
            func_0x00f78af4();
            puVar8 = puVar14 + -0x40;
            *(dword **)(puVar14 + -0x40) = pdVar20;
            *(dword **)(puVar14 + -0x38) = pdVar25;
            *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
            *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar41 = puVar14 + -0x30;
            if (extraout_x1 != (long *)0x0) {
              lVar21 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar30 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar30,lVar21);
              pdVar18 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar18;
            }
            puVar43 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar49 = func_0x00f78af4();
            pdVar26 = pdVar28;
          }
          lVar21 = func_0x00f78af4();
          *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
          *(dword **)(puVar7 + -0x90) = pdVar19;
          *(undefined8 *)(puVar7 + -0x88) = 0;
          *(dword **)(puVar7 + -0x80) = pdVar20;
          *(dword **)(puVar7 + -0x78) = pdVar26;
          *(undefined1 **)(puVar7 + -0x70) = puVar41;
          *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar30 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar30,0);
          if (0 < *(int *)(lVar21 + 0x50)) {
            iVar17 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar21,iVar17);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar21,iVar17);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar21 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar21);
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
          pdVar18 = (dword *)(*pcRam0000000003ec05a0)(uVar30);
          return pdVar18;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0xa0) = (undefined1 *)((long)ppdVar12 + -0x90);
        *(undefined **)((long)ppdVar12 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 == 0) {
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xb0) = (undefined1 *)((long)ppdVar12 + -0xa0);
          *(undefined **)((long)ppdVar12 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
          lVar21 = *(long *)(auVar49._0_8_ + 0x10);
          auVar50._8_8_ = auVar49._8_8_;
          auVar50._0_8_ = lVar21;
          if (lVar21 != 0) {
            pdVar29 = (dword *)0x0;
            puVar9 = (undefined1 *)((long)ppdVar12 + -0xa0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xb0);
            puVar43 = *(undefined **)((long)ppdVar12 + -0xa8);
            goto code_r0x02f884dc;
          }
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xc0) = (undefined1 *)((long)ppdVar12 + -0xb0);
          *(undefined **)((long)ppdVar12 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
          lVar21 = *(long *)(auVar49._0_8_ + 0x10);
          auVar51._8_8_ = auVar49._8_8_;
          auVar51._0_8_ = lVar21;
          if (lVar21 == 0) {
            auVar49 = func_0x00f78af4();
            *(undefined1 **)((long)ppdVar12 + -0xd0) = (undefined1 *)((long)ppdVar12 + -0xc0);
            *(undefined **)((long)ppdVar12 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar21 = *(long *)(auVar49._0_8_ + 0x10);
            auVar52._8_8_ = auVar49._8_8_;
            auVar52._0_8_ = lVar21;
            if (lVar21 == 0) {
              pdVar19 = (dword *)func_0x00f78af4();
              *(undefined8 *)((long)ppdVar12 + -0x100) = 0;
              *(dword **)((long)ppdVar12 + -0xf8) = pdVar18;
              *(dword **)((long)ppdVar12 + -0xf0) = pdVar20;
              *(dword **)((long)ppdVar12 + -0xe8) = pdVar25;
              *(undefined1 **)((long)ppdVar12 + -0xe0) = (undefined1 *)((long)ppdVar12 + -0xd0);
              *(undefined **)((long)ppdVar12 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
              }
              uVar30 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar30,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar19 + 0xc) = uVar30;
              return pdVar19;
            }
            puVar11 = (undefined1 *)((long)ppdVar12 + -0xc0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xd0);
            puVar43 = *(undefined **)((long)ppdVar12 + -200);
            goto code_r0x02f88674;
          }
          puVar10 = (undefined1 *)((long)ppdVar12 + -0xb0);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0xc0);
          puVar43 = *(undefined **)((long)ppdVar12 + -0xb8);
          pdVar29 = pdVar28;
          pdVar19 = pdVar18;
        }
        else {
          pdVar29 = (dword *)0x0;
          puVar9 = (undefined1 *)((long)ppdVar12 + -0xc0);
          *(undefined8 *)((long)ppdVar12 + -0xc0) = 0;
          *(dword **)((long)ppdVar12 + -0xb8) = pdVar18;
          *(dword **)((long)ppdVar12 + -0xb0) = pdVar20;
          *(dword **)((long)ppdVar12 + -0xa8) = pdVar25;
          *(undefined8 *)((long)ppdVar12 + -0xa0) = *(undefined8 *)((long)ppdVar12 + -0xa0);
          *(undefined8 *)((long)ppdVar12 + -0x98) = *(undefined8 *)((long)ppdVar12 + -0x98);
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xa0);
          pdVar18 = (dword *)0x3ebc000;
          if ((bRam0000000003ebc64f & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar33 = auVar49._8_4_;
          if (((int)uVar33 < 0) || (*(int *)(lVar21 + 0x50) <= (int)uVar33)) {
            return (dword *)0x0;
          }
          lVar21 = *(long *)(lVar21 + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(lVar21 + 0x10) + ((ulong)auVar49._8_8_ & 0xffffffff) * 0x28;
            lVar21 = *(long *)(lVar39 + 0x28);
            cVar3 = *(char *)(lVar39 + 0x40);
            iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar39 + 0x30),0);
            if (iVar17 == 0 || cVar3 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar21 != 0) && (*(int *)(lVar21 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          puVar43 = &Core_UI2_UIManager__GetLayerState;
          auVar50 = func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar25 = auVar49._8_8_;
code_r0x02f884dc:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = 0;
          *(dword **)(puVar9 + -0x28) = pdVar18;
          *(dword **)(puVar9 + -0x20) = pdVar20;
          *(dword **)(puVar9 + -0x18) = pdVar25;
          *(undefined1 **)(puVar9 + -0x10) = puVar41;
          *(undefined **)(puVar9 + -8) = puVar43;
          puVar41 = puVar9 + -0x10;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar21 = *(long *)(auVar50._0_8_ + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= auVar50._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar50._8_4_ * 0x28 + 0x28);
            if (lVar21 == 0) {
              pdVar18 = &MACH_HEADER.cputype;
            }
            else {
              pdVar18 = (dword *)(ulong)*(uint *)(lVar21 + 0x4c);
            }
            return pdVar18;
          }
          puVar43 = &Core_UI2_UIManager__EnableInput;
          auVar51 = func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar25 = auVar50._8_8_;
          pdVar19 = (dword *)0x3ebc000;
        }
        pdVar26 = auVar51._8_8_;
        pdVar18 = auVar51._0_8_;
        puVar11 = puVar10 + -0x40;
        *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
        *(undefined8 *)(puVar10 + -0x30) = 0;
        *(dword **)(puVar10 + -0x28) = pdVar19;
        *(dword **)(puVar10 + -0x20) = pdVar20;
        *(dword **)(puVar10 + -0x18) = pdVar25;
        *(undefined1 **)(puVar10 + -0x10) = puVar41;
        *(undefined **)(puVar10 + -8) = puVar43;
        puVar41 = puVar10 + -0x10;
        pdVar19 = (dword *)0x3ebc000;
        pdVar28 = pdVar29;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(pdVar18 + 0x1a) != 0) {
          pdVar28 = (dword *)(ulong)((uint)pdVar29 ^ 1);
          pdVar20 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar18 + 0x1a),pdVar26,pdVar28,0);
          lVar21 = *(long *)(pdVar18 + 0x1c);
          pdVar19 = (dword *)0x0;
          if (lVar21 != 0) {
            uVar33 = auVar51._8_4_;
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              pdVar20 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) ||
               (pdVar19 = *(dword **)(pdVar18 + 0xc), pdVar19 == (dword *)0x0)) {
              return pdVar20;
            }
            lVar21 = *(long *)(pdVar18 + 0x1c);
            pdVar18 = (dword *)0x0;
            if (lVar21 != 0) {
              if (*(uint *)(lVar21 + 0x18) <= uVar33) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar27 = *(long **)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
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
              *(dword **)(puVar10 + -0x68) = pdVar19;
              lVar21 = *(long *)(pdVar19 + 0x1a);
              if (lVar21 == 0) {
                puVar41 = puVar10 + -0x68;
                lVar39 = 1;
              }
              else {
                lVar39 = *(long *)(lVar21 + 0x18);
                if (lVar39 == 0) {
                  return pdVar19;
                }
                puVar41 = (undefined1 *)(lVar21 + 0x20);
              }
              lVar21 = 0;
              do {
                lVar24 = *(long *)(puVar41 + lVar21 * 8);
                pcVar40 = *(code **)(lVar24 + 0x10);
                plVar1 = *(long **)(lVar24 + 0x20);
                lVar24 = *(long *)(lVar24 + 0x28);
                if (*(short *)(lVar24 + 0x48) == -1) {
                  func_0x00f78ad8(lVar24);
                }
                iVar17 = func_0x00f78a4c(lVar24);
                bVar15 = *(char *)(lVar24 + 0x4a) == '\x03';
                if (iVar17 == 0) {
                  if (bVar15) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar18 = (dword *)(*pcVar40)(plVar27,pdVar26,pdVar29,lVar24);
                    }
                    else {
                      if (((*(short *)(lVar24 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar19 + 6) == 0))
                      goto code_r0x01e71aac;
                      iVar17 = func_0x00f78a44(lVar24);
                      iVar16 = func_0x00f78ec0(lVar24);
                      if (iVar17 == 0) {
                        uVar4 = *(ushort *)(lVar24 + 0x48);
                        if (iVar16 == 0) {
                          lVar24 = *plVar1 + (ulong)uVar4 * 0x10;
                          pdVar18 = (dword *)(**(code **)(lVar24 + 0x138))
                                                       (plVar1,plVar27,pdVar26,pdVar29,
                                                        *(undefined8 *)(lVar24 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar24 = func_0x00f78a48(lVar24);
                        lVar31 = *plVar1;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == lVar24) {
                              puVar22 = (undefined8 *)
                                        (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x00fac1f0(plVar1,lVar24,(ulong)uVar4);
code_r0x01e71d74:
                        pcVar40 = (code *)*puVar22;
                        puVar22 = (undefined8 *)puVar22[1];
                      }
                      else {
                        if (iVar16 == 0) {
                          uVar30 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar31 = *plVar1;
                          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                          if (uVar23 != 0) {
                            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                                lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                             (uint)*(ushort *)(lVar24 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar32 = piVar32 + 4;
                              uVar23 = uVar23 - 1;
                            } while (uVar23 != 0);
                          }
                          lVar31 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar30 = *(undefined8 *)(lVar31 + 8);
                        }
                        puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                        pcVar40 = (code *)*puVar22;
                      }
                      pdVar18 = (dword *)(*pcVar40)(plVar1,plVar27,pdVar26,pdVar29,puVar22);
                    }
                  }
                  else {
                    if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(pdVar19 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar17 = func_0x00f78a44(lVar24);
                    iVar16 = func_0x00f78ec0(lVar24);
                    if (iVar17 == 0) {
                      uVar4 = *(ushort *)(lVar24 + 0x48);
                      if (iVar16 == 0) {
                        lVar24 = *plVar27 + (ulong)uVar4 * 0x10;
                        pdVar18 = (dword *)(**(code **)(lVar24 + 0x138))
                                                     (plVar27,pdVar26,pdVar29,
                                                      *(undefined8 *)(lVar24 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar24 = func_0x00f78a48(lVar24);
                      lVar31 = *plVar27;
                      uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                      if (uVar23 != 0) {
                        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar32 + -2) == lVar24) {
                            puVar22 = (undefined8 *)
                                      (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar32 = piVar32 + 4;
                          uVar23 = uVar23 - 1;
                        } while (uVar23 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x00fac1f0(plVar27,lVar24,(ulong)uVar4);
code_r0x01e71d00:
                      pcVar40 = (code *)*puVar22;
                      puVar22 = (undefined8 *)puVar22[1];
                    }
                    else {
                      if (iVar16 == 0) {
                        uVar30 = *(undefined8 *)
                                  (*plVar27 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar31 = *plVar27;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                              lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                           (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        lVar31 = func_0x00fac1f0(plVar27);
code_r0x01e71cd8:
                        uVar30 = *(undefined8 *)(lVar31 + 8);
                      }
                      puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                      pcVar40 = (code *)*puVar22;
                    }
                    pdVar18 = (dword *)(*pcVar40)(plVar27,pdVar26,pdVar29,puVar22);
                  }
                }
                else {
                  if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar18 = (dword *)(*pcVar40)(plVar1,plVar27,pdVar26,pdVar29,lVar24);
                }
code_r0x01e71bd0:
                lVar21 = lVar21 + 1;
                if (lVar21 == lVar39) {
                  return pdVar18;
                }
              } while( true );
            }
          }
        }
        puVar43 = &Core_UI2_UIManager__SetScreenVisible;
        auVar52 = func_0x00f78af4();
        pdVar25 = pdVar29;
        pdVar20 = pdVar26;
code_r0x02f88674:
        pdVar29 = auVar52._0_8_;
        *(dword **)(puVar11 + -0x30) = pdVar19;
        *(dword **)(puVar11 + -0x28) = pdVar18;
        *(dword **)(puVar11 + -0x20) = pdVar20;
        *(dword **)(puVar11 + -0x18) = pdVar25;
        *(undefined1 **)(puVar11 + -0x10) = puVar41;
        *(undefined **)(puVar11 + -8) = puVar43;
        pdVar18 = pdVar29;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar18 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar21 = *(long *)(pdVar29 + 0x1c);
        if (lVar21 != 0) {
          uVar33 = auVar52._8_4_;
          if (*(uint *)(lVar21 + 0x18) <= uVar33) {
            pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) {
            return pdVar18;
          }
          lVar21 = *(long *)(pdVar29 + 0x1c);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
            if ((lVar21 != 0) && (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*plVar27 + 0x178))
                                           (plVar27,pdVar28,*(undefined8 *)(*plVar27 + 0x180));
              return pdVar18;
            }
          }
        }
        auVar49 = func_0x00f78af4();
        uVar30 = auVar49._0_8_;
        *(long *)(puVar11 + -0x50) = auVar52._8_8_;
        *(dword **)(puVar11 + -0x48) = pdVar28;
        *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)(puVar11 + -0x68) = 0;
        *(undefined8 *)(puVar11 + -0x70) = 0;
        *(undefined8 *)(puVar11 + -0x58) = 0;
        *(undefined8 *)(puVar11 + -0x60) = 0;
        pdVar18 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar30,auVar49._8_8_,puVar11 + -0x70);
        if ((int)pdVar18 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar30,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
          *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
          *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
          *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
          *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
          pdVar18 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar30,puVar11 + -0x90,1);
        }
        return pdVar18;
      }
    }
  }
  lVar21 = func_0x00f78af4();
  puStack_58 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__OnExit;
  pdStack_70 = pdVar18;
  pdStack_68 = pdVar19;
  pppppppuStack_60 = &pppppppuStack_30;
  if ((bRam0000000003eb5133 & 1) == 0) {
    func_0x00f78a20(0x3d40598);
    bRam0000000003eb5133 = 1;
  }
  pdVar18 = (dword *)0x3eb5000;
  if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
  lVar39 = *(long *)(*(long *)(lVar21 + 0x98) + 0x20);
  if (lVar39 == 0) {
    pdVar18 = (dword *)0x0;
  }
  else {
    pdVar18 = (dword *)(ulong)(*(char *)(lVar39 + 0x19c) == '\0');
  }
  lVar39 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40598);
  if ((lVar39 == 0) || (*(long *)(lVar39 + 0x10) == 0)) goto code_r0x0158fd9c;
  uVar33 = (uint)pdVar18;
  if (*(int *)(*(long *)(lVar39 + 0x10) + 0x10) == 2) {
    if (*(long *)(lVar21 + 0xb8) == 0) goto code_r0x0158fd9c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar21 + 0xb8),0);
    pdVar19 = pdVar18;
    if (iVar17 != 0) {
      if ((*(long *)(lVar21 + 0x98) == 0) ||
         (lVar39 = *(long *)(*(long *)(lVar21 + 0x98) + 0x20), lVar39 == 0)) goto code_r0x0158fd9c;
      pdVar20 = (dword *)/*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar39,0);
      uVar6 = (uint)pdVar20 | uVar33;
      pdVar19 = (dword *)(ulong)uVar6;
      if (uVar33 == 0) {
        if (uVar6 == 0) {
          return pdVar20;
        }
        goto code_r0x0158fd74;
      }
    }
    pdVar18 = pdVar19;
    if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
    pdVar20 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar21 + 0x98),0);
    if (((ulong)pdVar19 & 1) == 0) {
      return pdVar20;
    }
  }
  else if (uVar33 != 0) {
    if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar21 + 0x98),0);
  }
code_r0x0158fd74:
  pdVar20 = pdStack_68;
  pdVar19 = pdStack_70;
  lVar39 = *(long *)(lVar21 + 0xb8);
  if (lVar39 != 0) {
    if (*(long *)(lVar39 + 0x38) != 0) {
      plVar27 = *(long **)(*(long *)(lVar39 + 0x38) + 0x30);
      if (plVar27 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar18 = (dword *)(**(code **)(*plVar27 + 0x678))
                                     (plVar27,*(undefined8 *)(*plVar27 + 0x680));
        return pdVar18;
      }
      return (dword *)0x0;
    }
    lVar21 = func_0x00f78af4(lVar39,0);
    pdStack_68 = (dword *)&Atlas_Networking_MatchMakingManager__LeaveGroup;
    if (*(long *)(lVar21 + 0x38) != 0) {
      plVar27 = *(long **)(*(long *)(lVar21 + 0x38) + 0x30);
      if (plVar27 != (long *)0x0) {
        pdStack_70 = (dword *)&pppppppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar18 = (dword *)(**(code **)(*plVar27 + 0x808))
                                     (plVar27,*(undefined8 *)(*plVar27 + 0x810));
        return pdVar18;
      }
      return (dword *)0x0;
    }
    pdStack_70 = (dword *)&pppppppuStack_60;
    lVar21 = func_0x00f78af4();
    pdStack_90 = pdVar19;
    pdStack_88 = pdVar20;
    puStack_78 = &Atlas_Networking_MatchMakingManager__SetVisuals;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar39 = *(long *)(lVar21 + 0xb0);
    pppppppuStack_80 = (undefined8 *******)&pdStack_70;
    if (lVar39 != 0) {
      uStack_188 = *(undefined8 *)(lVar39 + 0x38);
      uStack_190 = *(undefined8 *)(lVar39 + 0x30);
      uStack_178 = *(undefined8 *)(lVar39 + 0x48);
      uStack_180 = *(undefined8 *)(lVar39 + 0x40);
      uStack_168 = *(undefined8 *)(lVar39 + 0x58);
      uStack_170 = *(undefined8 *)(lVar39 + 0x50);
      uStack_158 = *(undefined8 *)(lVar39 + 0x68);
      uStack_160 = *(undefined8 *)(lVar39 + 0x60);
      uStack_110 = uStack_190;
      uStack_108 = uStack_188;
      uStack_100 = uStack_180;
      uStack_f8 = uStack_178;
      uStack_f0 = uStack_170;
      uStack_e8 = uStack_168;
      uStack_e0 = uStack_160;
      uStack_d8 = uStack_158;
      pppppppuStack_80 = (undefined8 *******)&pdStack_70;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_150,&uStack_190,*(undefined8 *)(lVar21 + 0x48),
                 *(undefined8 *)(lVar21 + 0x88),*(undefined8 *)(lVar21 + 0x70),0);
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_d0,&uStack_1d0,0);
      if ((*(long *)(lVar21 + 0x40) != 0) &&
         (lVar21 = *(long *)(*(long *)(lVar21 + 0x40) + 0x28), lVar21 != 0)) {
        uStack_208 = uStack_c8;
        uStack_210 = uStack_d0;
        uStack_1f8 = uStack_b8;
        uStack_200 = uStack_c0;
        uStack_1e8 = uStack_a8;
        uStack_1f0 = uStack_b0;
        uStack_1d8 = uStack_98;
        uStack_1e0 = uStack_a0;
        pdVar18 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar21,&uStack_210,0);
        return pdVar18;
      }
    }
    auVar49 = func_0x00f78af4();
    *(long *)(auVar49._0_8_ + 0x2c) = auVar49._8_8_;
    return auVar49._0_8_;
  }
code_r0x0158fd9c:
  lVar39 = func_0x00f78af4();
  ppdVar12 = &pdStack_90;
  puStack_78 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowPostEventScreen;
  pppppppuVar42 = &pppppppuStack_80;
  pdStack_90 = pdVar18;
  pdStack_88 = (dword *)lVar21;
  pppppppuStack_80 = &pppppppuStack_60;
  if (*(long *)(lVar39 + 0xa0) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar39 + 0xa0),1,0,0,0,0);
    *(undefined1 *)(lVar39 + 200) = 1;
    return pdVar18;
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen;
  lVar21 = func_0x00f78af4();
code_r0x0158fde8:
  puVar13 = (undefined1 *)((long)ppdVar12 + -0x40);
  *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppdVar12 + -0x30) = uVar30;
  *(dword **)((long)ppdVar12 + -0x28) = pdVar25;
  *(dword **)((long)ppdVar12 + -0x20) = pdVar18;
  *(long *)((long)ppdVar12 + -0x18) = lVar39;
  *(undefined8 ********)((long)ppdVar12 + -0x10) = pppppppuVar42;
  *(undefined **)((long)ppdVar12 + -8) = puVar43;
  puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
  unaff_x23 = 0x3d28bc0;
  uVar30 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar18,0);
  lVar39 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar22 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar39,lVar21,puRam0000000003d56c98,0);
  if (pdVar18 != (dword *)0x0) {
    uVar30 = 0x3d1feb8;
    *(long *)(pdVar18 + 4) = lVar39;
    pdVar20 = *(dword **)(lVar21 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar21 = 0;
    if (pdVar20 != (dword *)0x0) {
      pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
      pppppppuVar42 = *(undefined8 ********)((long)ppdVar12 + -0x10);
      puVar43 = *(undefined **)((long)ppdVar12 + -8);
      unaff_x20 = *(dword **)((long)ppdVar12 + -0x20);
      param_1 = *(dword **)((long)ppdVar12 + -0x18);
      unaff_x22 = *(undefined8 *)((long)ppdVar12 + -0x30);
      unaff_x21 = *(dword **)((long)ppdVar12 + -0x28);
      unaff_x24 = *(undefined8 *)((long)ppdVar12 + -0x40);
      unaff_x23 = *(undefined8 *)((long)ppdVar12 + -0x38);
      goto code_r0x0147079c;
    }
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
  lVar24 = func_0x00f78af4();
  do {
    *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar13 + -0x30) = uVar30;
    *(long *)(puVar13 + -0x28) = lVar39;
    *(dword **)(puVar13 + -0x20) = pdVar18;
    *(long *)(puVar13 + -0x18) = lVar21;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar35 = 0x3eb5000;
    uVar37 = 0x3d40598;
    if ((bRam0000000003eb5135 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c0);
      func_0x00f78a20(0x3d27618);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5135 = 1;
    }
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar24,uRam0000000003d40598);
    if (lVar21 != 0) {
      lVar21 = *(long *)(lVar21 + 0x10);
      uVar37 = 0;
      if (lVar21 == 0) goto code_r0x0159003c;
      unaff_x23 = 0x3d194c0;
      uVar30 = 0x3d25458;
      uVar37 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      *(undefined8 *)(lVar21 + 0x20) = uVar37;
      if (*(int *)(lVar21 + 0x10) == 2) {
        *(undefined8 *)(lVar21 + 0x18) = uVar37;
      }
      uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      puVar22 = (undefined8 *)0x0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(uVar35,lVar21)
      ;
      uVar37 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
      pdVar18 = *(dword **)(lVar24 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar27 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar24 = 0;
      if (pdVar18 == (dword *)0x0) goto code_r0x0159003c;
      uVar30 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar34 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar36 = *(undefined8 *)(puVar13 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar13 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar13 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
      *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x30) = uVar38;
      *(undefined8 *)(puVar13 + -0x28) = uVar36;
      *(undefined8 *)(puVar13 + -0x20) = uVar37;
      *(undefined8 *)(puVar13 + -0x18) = uVar34;
      *(undefined8 *)(puVar13 + -0x10) = uVar30;
      *(undefined8 *)(puVar13 + -8) = uVar44;
      *(dword **)(puVar13 + -0x68) = pdVar18;
      lVar21 = *(long *)(pdVar18 + 0x1a);
      if (lVar21 == 0) {
        puVar41 = puVar13 + -0x68;
        lVar39 = 1;
      }
      else {
        lVar39 = *(long *)(lVar21 + 0x18);
        if (lVar39 == 0) {
          return pdVar18;
        }
        puVar41 = (undefined1 *)(lVar21 + 0x20);
      }
      lVar21 = 0;
      goto code_r0x01e715f4;
    }
code_r0x0159003c:
    lVar21 = func_0x00f78af4();
    *(undefined8 *)(puVar13 + -0x70) = uVar30;
    *(undefined8 *)(puVar13 + -0x68) = uVar37;
    *(undefined8 *)(puVar13 + -0x60) = uVar35;
    *(long *)(puVar13 + -0x58) = lVar24;
    *(undefined1 **)(puVar13 + -0x50) = puVar13 + -0x10;
    *(undefined **)(puVar13 + -0x48) =
         &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
    puVar41 = puVar13 + -0x50;
    uVar35 = 0x3eb5000;
    if ((bRam0000000003eb5136 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5136 = 1;
    }
    if (*(long *)(lVar21 + 0xa8) == 0) {
code_r0x01590110:
      puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
      lVar24 = func_0x00f78af4();
      puVar13 = puVar13 + -0x70;
    }
    else {
      uVar37 = 0x3d23000;
      uVar35 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar21 + 0xa8),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar22 = (undefined8 *)0x0;
      iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar35,0);
      if (iVar17 != 0) {
        if (*(long *)(lVar21 + 0xa8) == 0) goto code_r0x01590110;
        uVar23 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(lVar21 + 0xa8),0);
        if ((uVar23 & 1) == 0) {
          if (*(long *)(lVar21 + 0xb0) == 0) goto code_r0x01590110;
          puVar22 = (undefined8 *)0x0;
          iVar17 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(lVar21 + 0xb0),2);
          if (iVar17 != 0) break;
        }
      }
      puVar41 = *(undefined1 **)(puVar13 + -0x50);
      puVar43 = *(undefined **)(puVar13 + -0x48);
      uVar35 = *(undefined8 *)(puVar13 + -0x60);
      plVar27 = (long *)(puVar13 + -0x58);
      uVar30 = *(undefined8 *)(puVar13 + -0x70);
      uVar37 = *(undefined8 *)(puVar13 + -0x68);
      puVar13 = puVar13 + -0x40;
      lVar24 = lVar21;
      lVar21 = *plVar27;
    }
    *(undefined8 *)(puVar13 + -0x30) = uVar30;
    *(undefined8 *)(puVar13 + -0x28) = uVar37;
    *(undefined8 *)(puVar13 + -0x20) = uVar35;
    *(long *)(puVar13 + -0x18) = lVar21;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar35 = 0x3eb5000;
    if ((bRam0000000003eb5137 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d27628);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5137 = 1;
    }
    if (*(long *)(lVar24 + 0xb8) == 0) goto code_r0x0159024c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar24 + 0xb8),0);
    if (iVar17 == 0) {
      lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar24,uRam0000000003d40598);
      if (lVar21 == 0) {
code_r0x0159024c:
        pdVar18 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar13 + -0x60) = uVar30;
        *(undefined8 *)(puVar13 + -0x58) = uVar37;
        *(undefined8 *)(puVar13 + -0x50) = uVar35;
        *(long *)(puVar13 + -0x48) = lVar24;
        *(undefined1 **)(puVar13 + -0x40) = puVar13 + -0x10;
        *(undefined **)(puVar13 + -0x38) = &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
        if ((bRam0000000003eb5138 & 1) == 0) {
          func_0x00f78a20(0x3d40590);
          bRam0000000003eb5138 = 1;
        }
        if (pdVar18 == (dword *)0x0) {
          *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(puVar13 + -0x40);
          *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(puVar13 + -0x38);
          auVar49 = func_0x00f78af4(0,uRam0000000003d40590);
          pdVar18 = auVar49._0_8_;
          *(undefined8 *)(pdVar18 + 4) = *puVar22;
          *(long *)(pdVar18 + 8) = auVar49._8_8_;
          *(undefined8 **)(pdVar18 + 10) = puVar22;
          return pdVar18;
        }
        return pdVar18;
      }
      uVar37 = *(undefined8 *)(lVar21 + 0x10);
      uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
      puVar22 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                (uVar35,uVar37,1,0);
      uVar37 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
      pdVar18 = *(dword **)(lVar24 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar27 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar24 = 0;
      if (pdVar18 == (dword *)0x0) goto code_r0x0159024c;
      uVar30 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar34 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar36 = *(undefined8 *)(puVar13 + -0x28);
      goto System_Action_Type__bool__TransitionData___Invoke;
    }
    puVar41 = *(undefined1 **)(puVar13 + -0x10);
    puVar43 = *(undefined **)(puVar13 + -8);
    pdVar18 = *(dword **)(puVar13 + -0x20);
    lVar21 = *(long *)(puVar13 + -0x18);
    uVar30 = *(undefined8 *)(puVar13 + -0x30);
    lVar39 = *(long *)(puVar13 + -0x28);
  } while( true );
  pppppppuVar42 = *(undefined8 ********)(puVar13 + -0x50);
  puVar43 = *(undefined **)(puVar13 + -0x48);
  pdVar18 = *(dword **)(puVar13 + -0x60);
  lVar39 = *(long *)(puVar13 + -0x58);
  ppdVar12 = (dword **)(puVar13 + -0x40);
  uVar30 = *(undefined8 *)(puVar13 + -0x70);
  pdVar25 = *(dword **)(puVar13 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar24 = *(long *)(puVar41 + lVar21 * 8);
  pcVar40 = *(code **)(lVar24 + 0x10);
  plVar1 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24);
  }
  iVar17 = func_0x00f78a4c(lVar24);
  bVar15 = *(char *)(lVar24 + 0x4a) == '\x03';
  if (iVar17 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar19 = (dword *)(*pcVar40)(plVar27,0,uVar35,lVar24);
      }
      else {
        if (((*(short *)(lVar24 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar18 + 6) == 0)) goto code_r0x01e7162c;
        iVar17 = func_0x00f78a44(lVar24);
        iVar16 = func_0x00f78ec0(lVar24);
        if (iVar17 == 0) {
          uVar4 = *(ushort *)(lVar24 + 0x48);
          if (iVar16 == 0) {
            lVar24 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar19 = (dword *)(**(code **)(lVar24 + 0x138))
                                         (plVar1,plVar27,0,uVar35,*(undefined8 *)(lVar24 + 0x140));
            goto code_r0x01e71750;
          }
          lVar24 = func_0x00f78a48(lVar24);
          lVar31 = *plVar1;
          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar23 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar24) {
                puVar22 = (undefined8 *)
                          (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar32 = piVar32 + 4;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          puVar22 = (undefined8 *)func_0x00fac1f0(plVar1,lVar24,(ulong)uVar4);
code_r0x01e718f4:
          pcVar40 = (code *)*puVar22;
          puVar22 = (undefined8 *)puVar22[1];
        }
        else {
          if (iVar16 == 0) {
            uVar30 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar31 = *plVar1;
            uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
            if (uVar23 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                  lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar32 = piVar32 + 4;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            lVar31 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar30 = *(undefined8 *)(lVar31 + 8);
          }
          puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
          pcVar40 = (code *)*puVar22;
        }
        pdVar19 = (dword *)(*pcVar40)(plVar1,plVar27,0,uVar35,puVar22);
      }
    }
    else {
      if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(pdVar18 + 6) == 0)) goto code_r0x01e7173c;
      iVar17 = func_0x00f78a44(lVar24);
      iVar16 = func_0x00f78ec0(lVar24);
      if (iVar17 == 0) {
        uVar4 = *(ushort *)(lVar24 + 0x48);
        if (iVar16 == 0) {
          lVar24 = *plVar27 + (ulong)uVar4 * 0x10;
          pdVar19 = (dword *)(**(code **)(lVar24 + 0x138))
                                       (plVar27,0,uVar35,*(undefined8 *)(lVar24 + 0x140));
          goto code_r0x01e71750;
        }
        lVar24 = func_0x00f78a48(lVar24);
        lVar31 = *plVar27;
        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
        if (uVar23 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar32 = piVar32 + 4;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        puVar22 = (undefined8 *)func_0x00fac1f0(plVar27,lVar24,(ulong)uVar4);
code_r0x01e71880:
        pcVar40 = (code *)*puVar22;
        puVar22 = (undefined8 *)puVar22[1];
      }
      else {
        if (iVar16 == 0) {
          uVar30 = *(undefined8 *)(*plVar27 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar31 = *plVar27;
          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar23 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar32 = piVar32 + 4;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          lVar31 = func_0x00fac1f0(plVar27);
code_r0x01e71858:
          uVar30 = *(undefined8 *)(lVar31 + 8);
        }
        puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
        pcVar40 = (code *)*puVar22;
      }
      pdVar19 = (dword *)(*pcVar40)(plVar27,0,uVar35,puVar22);
    }
  }
  else {
    if (bVar15) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar19 = (dword *)(*pcVar40)(plVar1,plVar27,0,uVar35,lVar24);
  }
code_r0x01e71750:
  lVar21 = lVar21 + 1;
  if (lVar21 == lVar39) {
    return pdVar19;
  }
  goto code_r0x01e715f4;
}



// ============================================================
// RVA: 0x158f994 | Atlas.Contexts.FrontEndContextPostQuickPlayState.ShowResultsScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0158fb7c: Changing call to branch */
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowResultsScreen(dword *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  dword **ppdVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  dword *pdVar18;
  dword *pdVar19;
  dword *pdVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  dword *pdVar25;
  long *extraout_x1;
  dword *pdVar26;
  long *plVar27;
  dword *pdVar28;
  dword *pdVar29;
  undefined8 uVar30;
  long lVar31;
  int *piVar32;
  uint uVar33;
  undefined8 uVar34;
  dword *unaff_x20;
  undefined8 uVar35;
  dword *unaff_x21;
  undefined8 uVar36;
  undefined8 unaff_x22;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar39;
  undefined8 unaff_x25;
  code *pcVar40;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar41;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined4 extraout_s0;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  dword *pdStack_90;
  dword *pdStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(param_1 + 0x28),1,0,0,0,0);
    *(undefined1 *)((long)param_1 + 0xc9) = 1;
    return pdVar18;
  }
  pdVar19 = (dword *)func_0x00f78af4();
  ppdVar12 = (dword **)&stack0xffffffffffffffb0;
  puStack_28 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__OnUpdate;
  pdVar18 = (dword *)0x3eb5000;
  pdVar20 = pdVar19;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5132 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d28988);
    func_0x00f78a20(0x3d56c90);
    func_0x00f78a20(0x3d56ca0);
    func_0x00f78a20(0x3d56ca8);
    func_0x00f78a20(0x3d28718);
    func_0x00f78a20(0x3d40598);
    func_0x00f78a20(0x3d28998);
    pdVar20 = (dword *)func_0x00f78a20(0x3d28720);
    bRam0000000003eb5132 = 1;
  }
  pdVar25 = unaff_x21;
  uVar30 = unaff_x22;
  if (*(char *)(pdVar19 + 0x32) == '\0') {
    if (*(char *)((long)pdVar19 + 0xc9) == '\0') {
      return pdVar20;
    }
    if (*(long *)(pdVar19 + 0x28) != 0) {
      pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(pdVar19 + 0x28),0);
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      *(undefined1 *)((long)pdVar19 + 0xc9) = 0;
      pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.TransitionData_TypeInfo*/ uRam0000000003d28998);
      /*Atlas.UI.Screens.ResultsScreen.TransitionData$$.ctor*/ func_0x01565c5c(pdVar18,0);
      uVar37 = 0x3d40598;
      lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
      uVar30 = 0x3d40598;
      if ((lVar21 != 0) && (uVar30 = uVar37, pdVar18 != (dword *)0x0)) {
        *(long *)(pdVar18 + 4) = *(long *)(lVar21 + 0x18);
        pdVar25 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28988);
        /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$.ctor*/ func_0x01564de4(pdVar25,pdVar19,uRam0000000003d56ca8,0);
        *(dword **)(pdVar18 + 6) = pdVar25;
        lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
        if (lVar21 != 0) {
          *(undefined1 *)(pdVar18 + 8) = *(undefined1 *)(lVar21 + 0x20);
          pdVar20 = *(dword **)(pdVar19 + 0x20);
          pdVar25 = (dword *)0x3d1feb8;
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          pdVar19 = (dword *)0x0;
          if (pdVar20 != (dword *)0x0) {
            pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70);
            ppdVar12 = (dword **)&stack0xffffffffffffffe0;
            pppppppuVar42 = pppppppuStack_30;
            puVar43 = puStack_28;
            goto code_r0x0147079c;
          }
        }
      }
    }
  }
  else if (*(long *)(pdVar19 + 0x28) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(pdVar19 + 0x28),0);
    if ((int)pdVar18 == 0) {
      return pdVar18;
    }
    *(undefined1 *)(pdVar19 + 0x32) = 0;
    pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
    /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(pdVar18,0);
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(pdVar19,uRam0000000003d40598);
    if (((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x10), lVar21 != 0)) &&
       (pdVar18 != (dword *)0x0)) {
      lVar24 = *(long *)(lVar21 + 0x38);
      lVar39 = *(long *)(lVar21 + 0x30);
      lVar45 = *(long *)(lVar21 + 0x48);
      lVar31 = *(long *)(lVar21 + 0x40);
      lVar46 = *(long *)(lVar21 + 0x50);
      lVar48 = *(long *)(lVar21 + 0x68);
      lVar47 = *(long *)(lVar21 + 0x60);
      *(long *)(pdVar18 + 0xe) = *(long *)(lVar21 + 0x58);
      *(long *)(pdVar18 + 0xc) = lVar46;
      *(long *)(pdVar18 + 0x12) = lVar48;
      *(long *)(pdVar18 + 0x10) = lVar47;
      *(long *)(pdVar18 + 6) = lVar24;
      *(long *)(pdVar18 + 4) = lVar39;
      *(long *)(pdVar18 + 10) = lVar45;
      *(long *)(pdVar18 + 8) = lVar31;
      lVar21 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar21,pdVar19,uRam0000000003d56ca0,0);
      *(long *)(pdVar18 + 0x14) = lVar21;
      lVar21 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar21,pdVar19,uRam0000000003d56c90,0);
      *(long *)(pdVar18 + 0x16) = lVar21;
      pdVar20 = *(dword **)(pdVar19 + 0x20);
      unaff_x22 = 0x3d1feb8;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar25 = (dword *)0x0;
      uVar30 = unaff_x22;
      if (pdVar20 != (dword *)0x0) {
        pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
        param_1 = pdVar19;
        unaff_x20 = pdVar18;
        unaff_x21 = pdVar20;
        pppppppuVar42 = &pppppppuStack_30;
        puVar43 = &UNK_0158fb80;
code_r0x0147079c:
        uVar30 = 0;
        pdVar28 = (dword *)0x0;
        *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
        *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
        *(undefined8 *)((long)ppdVar12 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar12 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar12 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar12 + -0x18) = param_1;
        *(undefined8 ********)((long)ppdVar12 + -0x10) = pppppppuVar42;
        *(undefined **)((long)ppdVar12 + -8) = puVar43;
        puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
        pdVar19 = (dword *)0x0;
        pdVar29 = pdVar18;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        *(undefined8 *)((long)ppdVar12 + -0x48) = 0;
        lVar21 = *(long *)(pdVar20 + 4);
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          uVar30 = 0;
          puVar43 = &UNK_01470820;
          pdVar26 = pdVar25;
          pdVar29 = pdVar18;
code_r0x02f87f38:
          *(undefined8 *)((long)ppdVar12 + -0x90) = unaff_x24;
          *(undefined8 *)((long)ppdVar12 + -0x88) = 0x3eb4000;
          *(undefined8 *)((long)ppdVar12 + -0x80) = 0;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x70) = pdVar20;
          *(dword **)((long)ppdVar12 + -0x68) = pdVar25;
          *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
          *(undefined **)((long)ppdVar12 + -0x58) = puVar43;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          *(undefined8 *)((long)ppdVar12 + -0x130) = unaff_x26;
          *(undefined8 *)((long)ppdVar12 + -0x128) = unaff_x25;
          *(undefined8 *)((long)ppdVar12 + -0x120) = 0x3ebc000;
          *(dword **)((long)ppdVar12 + -0x118) = pdVar26;
          *(dword **)((long)ppdVar12 + -0x110) = pdVar29;
          *(undefined8 *)((long)ppdVar12 + -0x108) = uVar30;
          *(long *)((long)ppdVar12 + -0x100) = lVar21;
          *(dword **)((long)ppdVar12 + -0xf8) = pdVar28;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x60);
          *(undefined **)((long)ppdVar12 + -0xe8) = &UNK_02f87f9c;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar39 = *(long *)(lVar21 + 0x78);
          if (lVar39 != 0) {
            iVar17 = *(int *)(lVar39 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar16 = 1;
            pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar39 + 0x18) <= iVar16 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
              if (lVar39 == 0) break;
              uVar23 = /*System.String$$Equals*/ func_0x029caa48(lVar39,pdVar26,5,0);
              if ((uVar23 & 1) != 0) {
                return pdVar18;
              }
              pdVar18 = (dword *)(ulong)(iVar16 < iVar17);
              if (iVar17 == iVar16) {
                return pdVar18;
              }
              lVar39 = *(long *)(lVar21 + 0x78);
              iVar16 = iVar16 + 1;
            } while (lVar39 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar49 = func_0x00f78af4();
        pdVar26 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
        *(undefined **)((long)ppdVar12 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 != 0) {
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x60);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x58);
          goto code_r0x02f87f38;
        }
        auVar49 = func_0x00f78af4();
        uVar30 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x70) = (undefined1 *)((long)ppdVar12 + -0x60);
        *(undefined **)((long)ppdVar12 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          *(undefined8 *)((long)ppdVar12 + -0x90) = 0;
          *(dword **)((long)ppdVar12 + -0x88) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x80) = pdVar20;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar25;
          *(undefined8 *)((long)ppdVar12 + -0x70) = *(undefined8 *)((long)ppdVar12 + -0x70);
          *(undefined8 *)((long)ppdVar12 + -0x68) = *(undefined8 *)((long)ppdVar12 + -0x68);
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar39 = *(long *)(lVar21 + 0x70);
          if (lVar39 != 0) {
            lVar24 = lVar39;
            if (*(uint *)(lVar39 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar24 = *(long *)(lVar21 + 0x70);
            }
            if (lVar24 != 0) {
              lVar39 = *(long *)(lVar39 + 0x10) + (long)(int)auVar49._8_4_ * 0x28;
              uVar35 = *(undefined8 *)(lVar39 + 0x28);
              uVar37 = *(undefined8 *)(lVar39 + 0x20);
              uVar2 = *(undefined4 *)(lVar39 + 0x42);
              *(undefined4 *)((long)ppdVar12 + -0xd8) = uVar2;
              uVar5 = *(undefined2 *)(lVar39 + 0x46);
              *(undefined2 *)((long)ppdVar12 + -0xd4) = uVar5;
              *(undefined8 *)((long)ppdVar12 + -200) = uVar35;
              *(undefined8 *)((long)ppdVar12 + -0xd0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb8) = uVar35;
              *(undefined8 *)((long)ppdVar12 + -0xc0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb0) = 0;
              *(undefined8 *)((long)ppdVar12 + -0xa8) = 0;
              *(undefined2 *)((long)ppdVar12 + -0xa0) = 1;
              *(undefined4 *)((long)ppdVar12 + -0x9e) = uVar2;
              *(undefined2 *)((long)ppdVar12 + -0x9a) = uVar5;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar24,uVar30,(undefined1 *)((long)ppdVar12 + -0xc0),
                              uRam0000000003d3ddd0);
              pdVar18 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar21,uVar30);
              return pdVar18;
            }
          }
          auVar49 = func_0x00f78af4();
          pdVar26 = auVar49._8_8_;
          puVar14 = (undefined1 *)((long)ppdVar12 + -0x110);
          *(undefined8 *)((long)ppdVar12 + -0x110) = 0;
          *(long *)((long)ppdVar12 + -0x108) = lVar39;
          *(long *)((long)ppdVar12 + -0x100) = lVar21;
          *(undefined8 *)((long)ppdVar12 + -0xf8) = uVar30;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x70);
          *(undefined **)((long)ppdVar12 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xf0);
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar21 = *(long *)(auVar49._0_8_ + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar49._8_4_ * 0x28 + 0x28);
            if (lVar21 == 0) {
              pdVar18 = (dword *)0x0;
            }
            else {
              pdVar18 = *(dword **)(lVar21 + 0x40);
            }
            return pdVar18;
          }
          puVar43 = &Core_UI2_UIScreen__ForceExit;
          pdVar25 = (dword *)func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar18 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar49 = func_0x00f78af4();
        pdVar26 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x80) = (undefined1 *)((long)ppdVar12 + -0x70);
        *(undefined **)((long)ppdVar12 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = pdVar18;
        auVar49._0_8_ = lVar21;
        if (lVar21 != 0) {
          pdVar28 = (dword *)0x0;
          puVar7 = (undefined1 *)((long)ppdVar12 + -0x70);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x80);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x78);
          pdVar18 = pdVar20;
          goto code_r0x02f877a8;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0x90) = (undefined1 *)((long)ppdVar12 + -0x80);
        *(undefined **)((long)ppdVar12 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = auVar49._8_8_;
        auVar49._0_8_ = lVar21;
        if (lVar21 != 0) {
          puVar8 = (undefined1 *)((long)ppdVar12 + -0x80);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x90);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x88);
          pdVar26 = pdVar28;
          while( true ) {
            puVar7 = puVar8 + -0x30;
            *(dword **)(puVar8 + -0x30) = pdVar19;
            *(dword **)(puVar8 + -0x28) = pdVar18;
            *(dword **)(puVar8 + -0x20) = pdVar20;
            *(dword **)(puVar8 + -0x18) = pdVar25;
            *(undefined1 **)(puVar8 + -0x10) = puVar41;
            *(undefined **)(puVar8 + -8) = puVar43;
            puVar41 = puVar8 + -0x10;
            puVar43 = &UNK_02f883d8;
            pdVar28 = pdVar26;
            pdVar25 = pdVar29;
            pdVar18 = pdVar26;
            pdVar19 = auVar49._0_8_;
code_r0x02f877a8:
            pdVar20 = auVar49._0_8_;
            puVar14 = puVar7 + -0x60;
            *(dword **)(puVar7 + -0x30) = pdVar19;
            *(long *)(puVar7 + -0x28) = auVar49._8_8_;
            *(dword **)(puVar7 + -0x20) = pdVar18;
            *(dword **)(puVar7 + -0x18) = pdVar25;
            *(undefined1 **)(puVar7 + -0x10) = puVar41;
            *(undefined **)(puVar7 + -8) = puVar43;
            puVar41 = puVar7 + -0x10;
            pdVar18 = pdVar20;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar18 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar33 = (uint)pdVar26;
            if (((int)uVar33 < 0) || ((int)*(long *)(pdVar20 + 0x14) <= (int)uVar33)) {
              return pdVar18;
            }
            lVar21 = *(long *)(pdVar20 + 0x1c);
            if (lVar21 == 0) break;
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(lVar21 + 0x10) + ((ulong)pdVar26 & 0xffffffff) * 0x28;
            pdVar19 = *(dword **)(lVar21 + 0x20);
            pdVar25 = *(dword **)(lVar21 + 0x28);
            *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar21 + 0x42);
            *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar21 + 0x46);
            if (pdVar25 == (dword *)0x0) {
              lVar21 = *(long *)(pdVar20 + 0x1c);
              if (lVar21 != 0) {
                *(dword **)(puVar7 + -0x58) = pdVar19;
                *(undefined8 *)(puVar7 + -0x50) = 0;
                *(undefined8 *)(puVar7 + -0x48) = 0;
                *(undefined8 *)(puVar7 + -0x40) = 0;
                *(undefined2 *)(puVar7 + -0x38) = 0;
                *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
                *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
                pdVar18 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,pdVar26,puVar7 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar18;
              }
              break;
            }
            puVar43 = &UNK_02f87848;
            pdVar18 = pdVar25;
code_r0x02f882d8:
            *(dword **)(puVar14 + -0x20) = pdVar20;
            *(dword **)(puVar14 + -0x18) = pdVar26;
            *(undefined1 **)(puVar14 + -0x10) = puVar41;
            *(undefined **)(puVar14 + -8) = puVar43;
            (**(code **)(*(long *)pdVar25 + 0x218))
                      (pdVar25,*(undefined8 *)(*(long *)pdVar25 + 0x220));
            if (*(long *)(pdVar25 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar25 + 10),0);
              pdVar25[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar25,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*(long *)pdVar25 + 0x228))
                                           (pdVar25,*(undefined8 *)(*(long *)pdVar25 + 0x230));
              return pdVar18;
            }
            func_0x00f78af4();
            puVar8 = puVar14 + -0x40;
            *(dword **)(puVar14 + -0x40) = pdVar20;
            *(dword **)(puVar14 + -0x38) = pdVar25;
            *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
            *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar41 = puVar14 + -0x30;
            if (extraout_x1 != (long *)0x0) {
              lVar21 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar30 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar30,lVar21);
              pdVar18 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar18;
            }
            puVar43 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar49 = func_0x00f78af4();
            pdVar26 = pdVar28;
          }
          lVar21 = func_0x00f78af4();
          *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
          *(dword **)(puVar7 + -0x90) = pdVar19;
          *(undefined8 *)(puVar7 + -0x88) = 0;
          *(dword **)(puVar7 + -0x80) = pdVar20;
          *(dword **)(puVar7 + -0x78) = pdVar26;
          *(undefined1 **)(puVar7 + -0x70) = puVar41;
          *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar30 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar30,0);
          if (0 < *(int *)(lVar21 + 0x50)) {
            iVar17 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar21,iVar17);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar21,iVar17);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar21 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar21);
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
          pdVar18 = (dword *)(*pcRam0000000003ec05a0)(uVar30);
          return pdVar18;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0xa0) = (undefined1 *)((long)ppdVar12 + -0x90);
        *(undefined **)((long)ppdVar12 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar21 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar21 == 0) {
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xb0) = (undefined1 *)((long)ppdVar12 + -0xa0);
          *(undefined **)((long)ppdVar12 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
          lVar21 = *(long *)(auVar49._0_8_ + 0x10);
          auVar50._8_8_ = auVar49._8_8_;
          auVar50._0_8_ = lVar21;
          if (lVar21 != 0) {
            pdVar29 = (dword *)0x0;
            puVar9 = (undefined1 *)((long)ppdVar12 + -0xa0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xb0);
            puVar43 = *(undefined **)((long)ppdVar12 + -0xa8);
            goto code_r0x02f884dc;
          }
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xc0) = (undefined1 *)((long)ppdVar12 + -0xb0);
          *(undefined **)((long)ppdVar12 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
          lVar21 = *(long *)(auVar49._0_8_ + 0x10);
          auVar51._8_8_ = auVar49._8_8_;
          auVar51._0_8_ = lVar21;
          if (lVar21 == 0) {
            auVar49 = func_0x00f78af4();
            *(undefined1 **)((long)ppdVar12 + -0xd0) = (undefined1 *)((long)ppdVar12 + -0xc0);
            *(undefined **)((long)ppdVar12 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar21 = *(long *)(auVar49._0_8_ + 0x10);
            auVar52._8_8_ = auVar49._8_8_;
            auVar52._0_8_ = lVar21;
            if (lVar21 == 0) {
              pdVar19 = (dword *)func_0x00f78af4();
              *(undefined8 *)((long)ppdVar12 + -0x100) = 0;
              *(dword **)((long)ppdVar12 + -0xf8) = pdVar18;
              *(dword **)((long)ppdVar12 + -0xf0) = pdVar20;
              *(dword **)((long)ppdVar12 + -0xe8) = pdVar25;
              *(undefined1 **)((long)ppdVar12 + -0xe0) = (undefined1 *)((long)ppdVar12 + -0xd0);
              *(undefined **)((long)ppdVar12 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
              }
              uVar30 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar30,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar19 + 0xc) = uVar30;
              return pdVar19;
            }
            puVar11 = (undefined1 *)((long)ppdVar12 + -0xc0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xd0);
            puVar43 = *(undefined **)((long)ppdVar12 + -200);
            goto code_r0x02f88674;
          }
          puVar10 = (undefined1 *)((long)ppdVar12 + -0xb0);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0xc0);
          puVar43 = *(undefined **)((long)ppdVar12 + -0xb8);
          pdVar29 = pdVar28;
          pdVar19 = pdVar18;
        }
        else {
          pdVar29 = (dword *)0x0;
          puVar9 = (undefined1 *)((long)ppdVar12 + -0xc0);
          *(undefined8 *)((long)ppdVar12 + -0xc0) = 0;
          *(dword **)((long)ppdVar12 + -0xb8) = pdVar18;
          *(dword **)((long)ppdVar12 + -0xb0) = pdVar20;
          *(dword **)((long)ppdVar12 + -0xa8) = pdVar25;
          *(undefined8 *)((long)ppdVar12 + -0xa0) = *(undefined8 *)((long)ppdVar12 + -0xa0);
          *(undefined8 *)((long)ppdVar12 + -0x98) = *(undefined8 *)((long)ppdVar12 + -0x98);
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xa0);
          pdVar18 = (dword *)0x3ebc000;
          if ((bRam0000000003ebc64f & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar33 = auVar49._8_4_;
          if (((int)uVar33 < 0) || (*(int *)(lVar21 + 0x50) <= (int)uVar33)) {
            return (dword *)0x0;
          }
          lVar21 = *(long *)(lVar21 + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(lVar21 + 0x10) + ((ulong)auVar49._8_8_ & 0xffffffff) * 0x28;
            lVar21 = *(long *)(lVar39 + 0x28);
            cVar3 = *(char *)(lVar39 + 0x40);
            iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar39 + 0x30),0);
            if (iVar17 == 0 || cVar3 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar21 != 0) && (*(int *)(lVar21 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          puVar43 = &Core_UI2_UIManager__GetLayerState;
          auVar50 = func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar25 = auVar49._8_8_;
code_r0x02f884dc:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = 0;
          *(dword **)(puVar9 + -0x28) = pdVar18;
          *(dword **)(puVar9 + -0x20) = pdVar20;
          *(dword **)(puVar9 + -0x18) = pdVar25;
          *(undefined1 **)(puVar9 + -0x10) = puVar41;
          *(undefined **)(puVar9 + -8) = puVar43;
          puVar41 = puVar9 + -0x10;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar21 = *(long *)(auVar50._0_8_ + 0x70);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= auVar50._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)auVar50._8_4_ * 0x28 + 0x28);
            if (lVar21 == 0) {
              pdVar18 = &MACH_HEADER.cputype;
            }
            else {
              pdVar18 = (dword *)(ulong)*(uint *)(lVar21 + 0x4c);
            }
            return pdVar18;
          }
          puVar43 = &Core_UI2_UIManager__EnableInput;
          auVar51 = func_0x00f78af4();
          pdVar20 = (dword *)0x0;
          pdVar25 = auVar50._8_8_;
          pdVar19 = (dword *)0x3ebc000;
        }
        pdVar26 = auVar51._8_8_;
        pdVar18 = auVar51._0_8_;
        puVar11 = puVar10 + -0x40;
        *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
        *(undefined8 *)(puVar10 + -0x30) = 0;
        *(dword **)(puVar10 + -0x28) = pdVar19;
        *(dword **)(puVar10 + -0x20) = pdVar20;
        *(dword **)(puVar10 + -0x18) = pdVar25;
        *(undefined1 **)(puVar10 + -0x10) = puVar41;
        *(undefined **)(puVar10 + -8) = puVar43;
        puVar41 = puVar10 + -0x10;
        pdVar19 = (dword *)0x3ebc000;
        pdVar28 = pdVar29;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(pdVar18 + 0x1a) != 0) {
          pdVar28 = (dword *)(ulong)((uint)pdVar29 ^ 1);
          pdVar20 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar18 + 0x1a),pdVar26,pdVar28,0);
          lVar21 = *(long *)(pdVar18 + 0x1c);
          pdVar19 = (dword *)0x0;
          if (lVar21 != 0) {
            uVar33 = auVar51._8_4_;
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              pdVar20 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) ||
               (pdVar19 = *(dword **)(pdVar18 + 0xc), pdVar19 == (dword *)0x0)) {
              return pdVar20;
            }
            lVar21 = *(long *)(pdVar18 + 0x1c);
            pdVar18 = (dword *)0x0;
            if (lVar21 != 0) {
              if (*(uint *)(lVar21 + 0x18) <= uVar33) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar27 = *(long **)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
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
              *(dword **)(puVar10 + -0x68) = pdVar19;
              lVar21 = *(long *)(pdVar19 + 0x1a);
              if (lVar21 == 0) {
                puVar41 = puVar10 + -0x68;
                lVar39 = 1;
              }
              else {
                lVar39 = *(long *)(lVar21 + 0x18);
                if (lVar39 == 0) {
                  return pdVar19;
                }
                puVar41 = (undefined1 *)(lVar21 + 0x20);
              }
              lVar21 = 0;
              do {
                lVar24 = *(long *)(puVar41 + lVar21 * 8);
                pcVar40 = *(code **)(lVar24 + 0x10);
                plVar1 = *(long **)(lVar24 + 0x20);
                lVar24 = *(long *)(lVar24 + 0x28);
                if (*(short *)(lVar24 + 0x48) == -1) {
                  func_0x00f78ad8(lVar24);
                }
                iVar17 = func_0x00f78a4c(lVar24);
                bVar15 = *(char *)(lVar24 + 0x4a) == '\x03';
                if (iVar17 == 0) {
                  if (bVar15) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar18 = (dword *)(*pcVar40)(plVar27,pdVar26,pdVar29,lVar24);
                    }
                    else {
                      if (((*(short *)(lVar24 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar19 + 6) == 0))
                      goto code_r0x01e71aac;
                      iVar17 = func_0x00f78a44(lVar24);
                      iVar16 = func_0x00f78ec0(lVar24);
                      if (iVar17 == 0) {
                        uVar4 = *(ushort *)(lVar24 + 0x48);
                        if (iVar16 == 0) {
                          lVar24 = *plVar1 + (ulong)uVar4 * 0x10;
                          pdVar18 = (dword *)(**(code **)(lVar24 + 0x138))
                                                       (plVar1,plVar27,pdVar26,pdVar29,
                                                        *(undefined8 *)(lVar24 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar24 = func_0x00f78a48(lVar24);
                        lVar31 = *plVar1;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == lVar24) {
                              puVar22 = (undefined8 *)
                                        (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        puVar22 = (undefined8 *)func_0x00fac1f0(plVar1,lVar24,(ulong)uVar4);
code_r0x01e71d74:
                        pcVar40 = (code *)*puVar22;
                        puVar22 = (undefined8 *)puVar22[1];
                      }
                      else {
                        if (iVar16 == 0) {
                          uVar30 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar31 = *plVar1;
                          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                          if (uVar23 != 0) {
                            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                                lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                             (uint)*(ushort *)(lVar24 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar32 = piVar32 + 4;
                              uVar23 = uVar23 - 1;
                            } while (uVar23 != 0);
                          }
                          lVar31 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar30 = *(undefined8 *)(lVar31 + 8);
                        }
                        puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                        pcVar40 = (code *)*puVar22;
                      }
                      pdVar18 = (dword *)(*pcVar40)(plVar1,plVar27,pdVar26,pdVar29,puVar22);
                    }
                  }
                  else {
                    if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(pdVar19 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar17 = func_0x00f78a44(lVar24);
                    iVar16 = func_0x00f78ec0(lVar24);
                    if (iVar17 == 0) {
                      uVar4 = *(ushort *)(lVar24 + 0x48);
                      if (iVar16 == 0) {
                        lVar24 = *plVar27 + (ulong)uVar4 * 0x10;
                        pdVar18 = (dword *)(**(code **)(lVar24 + 0x138))
                                                     (plVar27,pdVar26,pdVar29,
                                                      *(undefined8 *)(lVar24 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar24 = func_0x00f78a48(lVar24);
                      lVar31 = *plVar27;
                      uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                      if (uVar23 != 0) {
                        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar32 + -2) == lVar24) {
                            puVar22 = (undefined8 *)
                                      (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar32 = piVar32 + 4;
                          uVar23 = uVar23 - 1;
                        } while (uVar23 != 0);
                      }
                      puVar22 = (undefined8 *)func_0x00fac1f0(plVar27,lVar24,(ulong)uVar4);
code_r0x01e71d00:
                      pcVar40 = (code *)*puVar22;
                      puVar22 = (undefined8 *)puVar22[1];
                    }
                    else {
                      if (iVar16 == 0) {
                        uVar30 = *(undefined8 *)
                                  (*plVar27 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar31 = *plVar27;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                              lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                           (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        lVar31 = func_0x00fac1f0(plVar27);
code_r0x01e71cd8:
                        uVar30 = *(undefined8 *)(lVar31 + 8);
                      }
                      puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
                      pcVar40 = (code *)*puVar22;
                    }
                    pdVar18 = (dword *)(*pcVar40)(plVar27,pdVar26,pdVar29,puVar22);
                  }
                }
                else {
                  if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar18 = (dword *)(*pcVar40)(plVar1,plVar27,pdVar26,pdVar29,lVar24);
                }
code_r0x01e71bd0:
                lVar21 = lVar21 + 1;
                if (lVar21 == lVar39) {
                  return pdVar18;
                }
              } while( true );
            }
          }
        }
        puVar43 = &Core_UI2_UIManager__SetScreenVisible;
        auVar52 = func_0x00f78af4();
        pdVar25 = pdVar29;
        pdVar20 = pdVar26;
code_r0x02f88674:
        pdVar29 = auVar52._0_8_;
        *(dword **)(puVar11 + -0x30) = pdVar19;
        *(dword **)(puVar11 + -0x28) = pdVar18;
        *(dword **)(puVar11 + -0x20) = pdVar20;
        *(dword **)(puVar11 + -0x18) = pdVar25;
        *(undefined1 **)(puVar11 + -0x10) = puVar41;
        *(undefined **)(puVar11 + -8) = puVar43;
        pdVar18 = pdVar29;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar18 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar21 = *(long *)(pdVar29 + 0x1c);
        if (lVar21 != 0) {
          uVar33 = auVar52._8_4_;
          if (*(uint *)(lVar21 + 0x18) <= uVar33) {
            pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) {
            return pdVar18;
          }
          lVar21 = *(long *)(pdVar29 + 0x1c);
          if (lVar21 != 0) {
            if (*(uint *)(lVar21 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
            if ((lVar21 != 0) && (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*plVar27 + 0x178))
                                           (plVar27,pdVar28,*(undefined8 *)(*plVar27 + 0x180));
              return pdVar18;
            }
          }
        }
        auVar49 = func_0x00f78af4();
        uVar30 = auVar49._0_8_;
        *(long *)(puVar11 + -0x50) = auVar52._8_8_;
        *(dword **)(puVar11 + -0x48) = pdVar28;
        *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)(puVar11 + -0x68) = 0;
        *(undefined8 *)(puVar11 + -0x70) = 0;
        *(undefined8 *)(puVar11 + -0x58) = 0;
        *(undefined8 *)(puVar11 + -0x60) = 0;
        pdVar18 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar30,auVar49._8_8_,puVar11 + -0x70);
        if ((int)pdVar18 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar30,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
          *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
          *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
          *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
          *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
          pdVar18 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar30,puVar11 + -0x90,1);
        }
        return pdVar18;
      }
    }
  }
  lVar21 = func_0x00f78af4();
  puStack_58 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__OnExit;
  pdStack_70 = pdVar18;
  pdStack_68 = pdVar19;
  pppppppuStack_60 = &pppppppuStack_30;
  if ((bRam0000000003eb5133 & 1) == 0) {
    func_0x00f78a20(0x3d40598);
    bRam0000000003eb5133 = 1;
  }
  pdVar18 = (dword *)0x3eb5000;
  if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
  lVar39 = *(long *)(*(long *)(lVar21 + 0x98) + 0x20);
  if (lVar39 == 0) {
    pdVar18 = (dword *)0x0;
  }
  else {
    pdVar18 = (dword *)(ulong)(*(char *)(lVar39 + 0x19c) == '\0');
  }
  lVar39 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40598);
  if ((lVar39 == 0) || (*(long *)(lVar39 + 0x10) == 0)) goto code_r0x0158fd9c;
  uVar33 = (uint)pdVar18;
  if (*(int *)(*(long *)(lVar39 + 0x10) + 0x10) == 2) {
    if (*(long *)(lVar21 + 0xb8) == 0) goto code_r0x0158fd9c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar21 + 0xb8),0);
    pdVar19 = pdVar18;
    if (iVar17 != 0) {
      if ((*(long *)(lVar21 + 0x98) == 0) ||
         (lVar39 = *(long *)(*(long *)(lVar21 + 0x98) + 0x20), lVar39 == 0)) goto code_r0x0158fd9c;
      pdVar20 = (dword *)/*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar39,0);
      uVar6 = (uint)pdVar20 | uVar33;
      pdVar19 = (dword *)(ulong)uVar6;
      if (uVar33 == 0) {
        if (uVar6 == 0) {
          return pdVar20;
        }
        goto code_r0x0158fd74;
      }
    }
    pdVar18 = pdVar19;
    if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
    pdVar20 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar21 + 0x98),0);
    if (((ulong)pdVar19 & 1) == 0) {
      return pdVar20;
    }
  }
  else if (uVar33 != 0) {
    if (*(long *)(lVar21 + 0x98) == 0) goto code_r0x0158fd9c;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar21 + 0x98),0);
  }
code_r0x0158fd74:
  pdVar20 = pdStack_68;
  pdVar19 = pdStack_70;
  lVar39 = *(long *)(lVar21 + 0xb8);
  if (lVar39 != 0) {
    if (*(long *)(lVar39 + 0x38) != 0) {
      plVar27 = *(long **)(*(long *)(lVar39 + 0x38) + 0x30);
      if (plVar27 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar18 = (dword *)(**(code **)(*plVar27 + 0x678))
                                     (plVar27,*(undefined8 *)(*plVar27 + 0x680));
        return pdVar18;
      }
      return (dword *)0x0;
    }
    lVar21 = func_0x00f78af4(lVar39,0);
    pdStack_68 = (dword *)&Atlas_Networking_MatchMakingManager__LeaveGroup;
    if (*(long *)(lVar21 + 0x38) != 0) {
      plVar27 = *(long **)(*(long *)(lVar21 + 0x38) + 0x30);
      if (plVar27 != (long *)0x0) {
        pdStack_70 = (dword *)&pppppppuStack_60;
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar18 = (dword *)(**(code **)(*plVar27 + 0x808))
                                     (plVar27,*(undefined8 *)(*plVar27 + 0x810));
        return pdVar18;
      }
      return (dword *)0x0;
    }
    pdStack_70 = (dword *)&pppppppuStack_60;
    lVar21 = func_0x00f78af4();
    pdStack_90 = pdVar19;
    pdStack_88 = pdVar20;
    puStack_78 = &Atlas_Networking_MatchMakingManager__SetVisuals;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar39 = *(long *)(lVar21 + 0xb0);
    pppppppuStack_80 = (undefined8 *******)&pdStack_70;
    if (lVar39 != 0) {
      uStack_188 = *(undefined8 *)(lVar39 + 0x38);
      uStack_190 = *(undefined8 *)(lVar39 + 0x30);
      uStack_178 = *(undefined8 *)(lVar39 + 0x48);
      uStack_180 = *(undefined8 *)(lVar39 + 0x40);
      uStack_168 = *(undefined8 *)(lVar39 + 0x58);
      uStack_170 = *(undefined8 *)(lVar39 + 0x50);
      uStack_158 = *(undefined8 *)(lVar39 + 0x68);
      uStack_160 = *(undefined8 *)(lVar39 + 0x60);
      uStack_110 = uStack_190;
      uStack_108 = uStack_188;
      uStack_100 = uStack_180;
      uStack_f8 = uStack_178;
      uStack_f0 = uStack_170;
      uStack_e8 = uStack_168;
      uStack_e0 = uStack_160;
      uStack_d8 = uStack_158;
      pppppppuStack_80 = (undefined8 *******)&pdStack_70;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_150,&uStack_190,*(undefined8 *)(lVar21 + 0x48),
                 *(undefined8 *)(lVar21 + 0x88),*(undefined8 *)(lVar21 + 0x70),0);
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_d0,&uStack_1d0,0);
      if ((*(long *)(lVar21 + 0x40) != 0) &&
         (lVar21 = *(long *)(*(long *)(lVar21 + 0x40) + 0x28), lVar21 != 0)) {
        uStack_208 = uStack_c8;
        uStack_210 = uStack_d0;
        uStack_1f8 = uStack_b8;
        uStack_200 = uStack_c0;
        uStack_1e8 = uStack_a8;
        uStack_1f0 = uStack_b0;
        uStack_1d8 = uStack_98;
        uStack_1e0 = uStack_a0;
        pdVar18 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar21,&uStack_210,0);
        return pdVar18;
      }
    }
    auVar49 = func_0x00f78af4();
    *(long *)(auVar49._0_8_ + 0x2c) = auVar49._8_8_;
    return auVar49._0_8_;
  }
code_r0x0158fd9c:
  lVar39 = func_0x00f78af4();
  ppdVar12 = &pdStack_90;
  puStack_78 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowPostEventScreen;
  pppppppuVar42 = &pppppppuStack_80;
  pdStack_90 = pdVar18;
  pdStack_88 = (dword *)lVar21;
  pppppppuStack_80 = &pppppppuStack_60;
  if (*(long *)(lVar39 + 0xa0) != 0) {
    pdVar18 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar39 + 0xa0),1,0,0,0,0);
    *(undefined1 *)(lVar39 + 200) = 1;
    return pdVar18;
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen;
  lVar21 = func_0x00f78af4();
code_r0x0158fde8:
  puVar13 = (undefined1 *)((long)ppdVar12 + -0x40);
  *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppdVar12 + -0x30) = uVar30;
  *(dword **)((long)ppdVar12 + -0x28) = pdVar25;
  *(dword **)((long)ppdVar12 + -0x20) = pdVar18;
  *(long *)((long)ppdVar12 + -0x18) = lVar39;
  *(undefined8 ********)((long)ppdVar12 + -0x10) = pppppppuVar42;
  *(undefined **)((long)ppdVar12 + -8) = puVar43;
  puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
  unaff_x23 = 0x3d28bc0;
  uVar30 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar18,0);
  lVar39 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar22 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar39,lVar21,puRam0000000003d56c98,0);
  if (pdVar18 != (dword *)0x0) {
    uVar30 = 0x3d1feb8;
    *(long *)(pdVar18 + 4) = lVar39;
    pdVar20 = *(dword **)(lVar21 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar21 = 0;
    if (pdVar20 != (dword *)0x0) {
      pdVar25 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
      pppppppuVar42 = *(undefined8 ********)((long)ppdVar12 + -0x10);
      puVar43 = *(undefined **)((long)ppdVar12 + -8);
      unaff_x20 = *(dword **)((long)ppdVar12 + -0x20);
      param_1 = *(dword **)((long)ppdVar12 + -0x18);
      unaff_x22 = *(undefined8 *)((long)ppdVar12 + -0x30);
      unaff_x21 = *(dword **)((long)ppdVar12 + -0x28);
      unaff_x24 = *(undefined8 *)((long)ppdVar12 + -0x40);
      unaff_x23 = *(undefined8 *)((long)ppdVar12 + -0x38);
      goto code_r0x0147079c;
    }
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
  lVar24 = func_0x00f78af4();
  do {
    *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar13 + -0x30) = uVar30;
    *(long *)(puVar13 + -0x28) = lVar39;
    *(dword **)(puVar13 + -0x20) = pdVar18;
    *(long *)(puVar13 + -0x18) = lVar21;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar35 = 0x3eb5000;
    uVar37 = 0x3d40598;
    if ((bRam0000000003eb5135 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c0);
      func_0x00f78a20(0x3d27618);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5135 = 1;
    }
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar24,uRam0000000003d40598);
    if (lVar21 != 0) {
      lVar21 = *(long *)(lVar21 + 0x10);
      uVar37 = 0;
      if (lVar21 == 0) goto code_r0x0159003c;
      unaff_x23 = 0x3d194c0;
      uVar30 = 0x3d25458;
      uVar37 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      *(undefined8 *)(lVar21 + 0x20) = uVar37;
      if (*(int *)(lVar21 + 0x10) == 2) {
        *(undefined8 *)(lVar21 + 0x18) = uVar37;
      }
      uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      puVar22 = (undefined8 *)0x0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(uVar35,lVar21)
      ;
      uVar37 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
      pdVar18 = *(dword **)(lVar24 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar27 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar24 = 0;
      if (pdVar18 == (dword *)0x0) goto code_r0x0159003c;
      uVar30 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar34 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar36 = *(undefined8 *)(puVar13 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar13 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar13 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
      *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x30) = uVar38;
      *(undefined8 *)(puVar13 + -0x28) = uVar36;
      *(undefined8 *)(puVar13 + -0x20) = uVar37;
      *(undefined8 *)(puVar13 + -0x18) = uVar34;
      *(undefined8 *)(puVar13 + -0x10) = uVar30;
      *(undefined8 *)(puVar13 + -8) = uVar44;
      *(dword **)(puVar13 + -0x68) = pdVar18;
      lVar21 = *(long *)(pdVar18 + 0x1a);
      if (lVar21 == 0) {
        puVar41 = puVar13 + -0x68;
        lVar39 = 1;
      }
      else {
        lVar39 = *(long *)(lVar21 + 0x18);
        if (lVar39 == 0) {
          return pdVar18;
        }
        puVar41 = (undefined1 *)(lVar21 + 0x20);
      }
      lVar21 = 0;
      goto code_r0x01e715f4;
    }
code_r0x0159003c:
    lVar21 = func_0x00f78af4();
    *(undefined8 *)(puVar13 + -0x70) = uVar30;
    *(undefined8 *)(puVar13 + -0x68) = uVar37;
    *(undefined8 *)(puVar13 + -0x60) = uVar35;
    *(long *)(puVar13 + -0x58) = lVar24;
    *(undefined1 **)(puVar13 + -0x50) = puVar13 + -0x10;
    *(undefined **)(puVar13 + -0x48) =
         &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
    puVar41 = puVar13 + -0x50;
    uVar35 = 0x3eb5000;
    if ((bRam0000000003eb5136 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5136 = 1;
    }
    if (*(long *)(lVar21 + 0xa8) == 0) {
code_r0x01590110:
      puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
      lVar24 = func_0x00f78af4();
      puVar13 = puVar13 + -0x70;
    }
    else {
      uVar37 = 0x3d23000;
      uVar35 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar21 + 0xa8),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar22 = (undefined8 *)0x0;
      iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar35,0);
      if (iVar17 != 0) {
        if (*(long *)(lVar21 + 0xa8) == 0) goto code_r0x01590110;
        uVar23 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(lVar21 + 0xa8),0);
        if ((uVar23 & 1) == 0) {
          if (*(long *)(lVar21 + 0xb0) == 0) goto code_r0x01590110;
          puVar22 = (undefined8 *)0x0;
          iVar17 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(lVar21 + 0xb0),2);
          if (iVar17 != 0) break;
        }
      }
      puVar41 = *(undefined1 **)(puVar13 + -0x50);
      puVar43 = *(undefined **)(puVar13 + -0x48);
      uVar35 = *(undefined8 *)(puVar13 + -0x60);
      plVar27 = (long *)(puVar13 + -0x58);
      uVar30 = *(undefined8 *)(puVar13 + -0x70);
      uVar37 = *(undefined8 *)(puVar13 + -0x68);
      puVar13 = puVar13 + -0x40;
      lVar24 = lVar21;
      lVar21 = *plVar27;
    }
    *(undefined8 *)(puVar13 + -0x30) = uVar30;
    *(undefined8 *)(puVar13 + -0x28) = uVar37;
    *(undefined8 *)(puVar13 + -0x20) = uVar35;
    *(long *)(puVar13 + -0x18) = lVar21;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar35 = 0x3eb5000;
    if ((bRam0000000003eb5137 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d27628);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5137 = 1;
    }
    if (*(long *)(lVar24 + 0xb8) == 0) goto code_r0x0159024c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar24 + 0xb8),0);
    if (iVar17 == 0) {
      lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar24,uRam0000000003d40598);
      if (lVar21 == 0) {
code_r0x0159024c:
        pdVar18 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar13 + -0x60) = uVar30;
        *(undefined8 *)(puVar13 + -0x58) = uVar37;
        *(undefined8 *)(puVar13 + -0x50) = uVar35;
        *(long *)(puVar13 + -0x48) = lVar24;
        *(undefined1 **)(puVar13 + -0x40) = puVar13 + -0x10;
        *(undefined **)(puVar13 + -0x38) = &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
        if ((bRam0000000003eb5138 & 1) == 0) {
          func_0x00f78a20(0x3d40590);
          bRam0000000003eb5138 = 1;
        }
        if (pdVar18 == (dword *)0x0) {
          *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(puVar13 + -0x40);
          *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(puVar13 + -0x38);
          auVar49 = func_0x00f78af4(0,uRam0000000003d40590);
          pdVar18 = auVar49._0_8_;
          *(undefined8 *)(pdVar18 + 4) = *puVar22;
          *(long *)(pdVar18 + 8) = auVar49._8_8_;
          *(undefined8 **)(pdVar18 + 10) = puVar22;
          return pdVar18;
        }
        return pdVar18;
      }
      uVar37 = *(undefined8 *)(lVar21 + 0x10);
      uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
      puVar22 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                (uVar35,uVar37,1,0);
      uVar37 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
      pdVar18 = *(dword **)(lVar24 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar27 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar24 = 0;
      if (pdVar18 == (dword *)0x0) goto code_r0x0159024c;
      uVar30 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar34 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar36 = *(undefined8 *)(puVar13 + -0x28);
      goto System_Action_Type__bool__TransitionData___Invoke;
    }
    puVar41 = *(undefined1 **)(puVar13 + -0x10);
    puVar43 = *(undefined **)(puVar13 + -8);
    pdVar18 = *(dword **)(puVar13 + -0x20);
    lVar21 = *(long *)(puVar13 + -0x18);
    uVar30 = *(undefined8 *)(puVar13 + -0x30);
    lVar39 = *(long *)(puVar13 + -0x28);
  } while( true );
  pppppppuVar42 = *(undefined8 ********)(puVar13 + -0x50);
  puVar43 = *(undefined **)(puVar13 + -0x48);
  pdVar18 = *(dword **)(puVar13 + -0x60);
  lVar39 = *(long *)(puVar13 + -0x58);
  ppdVar12 = (dword **)(puVar13 + -0x40);
  uVar30 = *(undefined8 *)(puVar13 + -0x70);
  pdVar25 = *(dword **)(puVar13 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar24 = *(long *)(puVar41 + lVar21 * 8);
  pcVar40 = *(code **)(lVar24 + 0x10);
  plVar1 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24);
  }
  iVar17 = func_0x00f78a4c(lVar24);
  bVar15 = *(char *)(lVar24 + 0x4a) == '\x03';
  if (iVar17 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar19 = (dword *)(*pcVar40)(plVar27,0,uVar35,lVar24);
      }
      else {
        if (((*(short *)(lVar24 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar18 + 6) == 0)) goto code_r0x01e7162c;
        iVar17 = func_0x00f78a44(lVar24);
        iVar16 = func_0x00f78ec0(lVar24);
        if (iVar17 == 0) {
          uVar4 = *(ushort *)(lVar24 + 0x48);
          if (iVar16 == 0) {
            lVar24 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar19 = (dword *)(**(code **)(lVar24 + 0x138))
                                         (plVar1,plVar27,0,uVar35,*(undefined8 *)(lVar24 + 0x140));
            goto code_r0x01e71750;
          }
          lVar24 = func_0x00f78a48(lVar24);
          lVar31 = *plVar1;
          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar23 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar24) {
                puVar22 = (undefined8 *)
                          (lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar32 = piVar32 + 4;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          puVar22 = (undefined8 *)func_0x00fac1f0(plVar1,lVar24,(ulong)uVar4);
code_r0x01e718f4:
          pcVar40 = (code *)*puVar22;
          puVar22 = (undefined8 *)puVar22[1];
        }
        else {
          if (iVar16 == 0) {
            uVar30 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar31 = *plVar1;
            uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
            if (uVar23 != 0) {
              piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                  lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar32 = piVar32 + 4;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            lVar31 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar30 = *(undefined8 *)(lVar31 + 8);
          }
          puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
          pcVar40 = (code *)*puVar22;
        }
        pdVar19 = (dword *)(*pcVar40)(plVar1,plVar27,0,uVar35,puVar22);
      }
    }
    else {
      if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(pdVar18 + 6) == 0)) goto code_r0x01e7173c;
      iVar17 = func_0x00f78a44(lVar24);
      iVar16 = func_0x00f78ec0(lVar24);
      if (iVar17 == 0) {
        uVar4 = *(ushort *)(lVar24 + 0x48);
        if (iVar16 == 0) {
          lVar24 = *plVar27 + (ulong)uVar4 * 0x10;
          pdVar19 = (dword *)(**(code **)(lVar24 + 0x138))
                                       (plVar27,0,uVar35,*(undefined8 *)(lVar24 + 0x140));
          goto code_r0x01e71750;
        }
        lVar24 = func_0x00f78a48(lVar24);
        lVar31 = *plVar27;
        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
        if (uVar23 != 0) {
          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar24) {
              puVar22 = (undefined8 *)(lVar31 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar32 = piVar32 + 4;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        puVar22 = (undefined8 *)func_0x00fac1f0(plVar27,lVar24,(ulong)uVar4);
code_r0x01e71880:
        pcVar40 = (code *)*puVar22;
        puVar22 = (undefined8 *)puVar22[1];
      }
      else {
        if (iVar16 == 0) {
          uVar30 = *(undefined8 *)(*plVar27 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar31 = *plVar27;
          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar23 != 0) {
            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar31 = lVar31 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar32 = piVar32 + 4;
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          lVar31 = func_0x00fac1f0(plVar27);
code_r0x01e71858:
          uVar30 = *(undefined8 *)(lVar31 + 8);
        }
        puVar22 = (undefined8 *)func_0x00f78acc(uVar30,lVar24);
        pcVar40 = (code *)*puVar22;
      }
      pdVar19 = (dword *)(*pcVar40)(plVar27,0,uVar35,puVar22);
    }
  }
  else {
    if (bVar15) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar19 = (dword *)(*pcVar40)(plVar1,plVar27,0,uVar35,lVar24);
  }
code_r0x01e71750:
  lVar21 = lVar21 + 1;
  if (lVar21 == lVar39) {
    return pdVar19;
  }
  goto code_r0x01e715f4;
}



// ============================================================
// RVA: 0x158f9dc | Atlas.Contexts.FrontEndContextPostQuickPlayState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0158fb7c: Changing call to branch */
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__OnUpdate(dword *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  dword **ppdVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  dword *pdVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  undefined8 uVar28;
  long lVar29;
  int *piVar30;
  uint uVar31;
  dword *unaff_x19;
  undefined8 uVar32;
  dword *unaff_x20;
  dword *pdVar33;
  undefined8 uVar34;
  dword *unaff_x21;
  undefined8 uVar35;
  dword *pdVar36;
  undefined8 unaff_x22;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar39;
  undefined8 unaff_x25;
  code *pcVar40;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar41;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar42;
  undefined *puVar43;
  undefined8 unaff_x30;
  undefined8 uVar44;
  undefined4 extraout_s0;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  dword *pdStack_50;
  dword *pdStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  pdVar33 = (dword *)0x3eb5000;
  pdVar18 = param_1;
  if ((bRam0000000003eb5132 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d28988);
    func_0x00f78a20(0x3d56c90);
    func_0x00f78a20(0x3d56ca0);
    func_0x00f78a20(0x3d56ca8);
    func_0x00f78a20(0x3d28718);
    func_0x00f78a20(0x3d40598);
    func_0x00f78a20(0x3d28998);
    pdVar18 = (dword *)func_0x00f78a20(0x3d28720);
    bRam0000000003eb5132 = 1;
  }
  pdVar23 = unaff_x21;
  uVar28 = unaff_x22;
  if (*(char *)(param_1 + 0x32) == '\0') {
    if (*(char *)((long)param_1 + 0xc9) == '\0') {
      return pdVar18;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      pdVar33 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(param_1 + 0x28),0);
      if ((int)pdVar33 == 0) {
        return pdVar33;
      }
      *(undefined1 *)((long)param_1 + 0xc9) = 0;
      pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.TransitionData_TypeInfo*/ uRam0000000003d28998);
      /*Atlas.UI.Screens.ResultsScreen.TransitionData$$.ctor*/ func_0x01565c5c(pdVar33,0);
      uVar37 = 0x3d40598;
      lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
      uVar28 = 0x3d40598;
      if ((lVar19 != 0) && (uVar28 = uVar37, pdVar33 != (dword *)0x0)) {
        *(long *)(pdVar33 + 4) = *(long *)(lVar19 + 0x18);
        pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28988);
        /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$.ctor*/ func_0x01564de4(pdVar23,param_1,uRam0000000003d56ca8,0);
        *(dword **)(pdVar33 + 6) = pdVar23;
        lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
        if (lVar19 != 0) {
          *(undefined1 *)(pdVar33 + 8) = *(undefined1 *)(lVar19 + 0x20);
          pdVar18 = *(dword **)(param_1 + 0x20);
          pdVar23 = (dword *)0x3d1feb8;
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_1 = (dword *)0x0;
          if (pdVar18 != (dword *)0x0) {
            pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x70);
            ppdVar12 = (dword **)register0x00000008;
            goto code_r0x0147079c;
          }
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    pdVar33 = (dword *)/*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(param_1 + 0x28),0);
    if ((int)pdVar33 == 0) {
      return pdVar33;
    }
    *(undefined1 *)(param_1 + 0x32) = 0;
    pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
    /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(pdVar33,0);
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
    if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x10), lVar19 != 0)) &&
       (pdVar33 != (dword *)0x0)) {
      lVar22 = *(long *)(lVar19 + 0x38);
      lVar39 = *(long *)(lVar19 + 0x30);
      lVar45 = *(long *)(lVar19 + 0x48);
      lVar29 = *(long *)(lVar19 + 0x40);
      lVar46 = *(long *)(lVar19 + 0x50);
      lVar48 = *(long *)(lVar19 + 0x68);
      lVar47 = *(long *)(lVar19 + 0x60);
      *(long *)(pdVar33 + 0xe) = *(long *)(lVar19 + 0x58);
      *(long *)(pdVar33 + 0xc) = lVar46;
      *(long *)(pdVar33 + 0x12) = lVar48;
      *(long *)(pdVar33 + 0x10) = lVar47;
      *(long *)(pdVar33 + 6) = lVar22;
      *(long *)(pdVar33 + 4) = lVar39;
      *(long *)(pdVar33 + 10) = lVar45;
      *(long *)(pdVar33 + 8) = lVar29;
      lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar19,param_1,uRam0000000003d56ca0,0);
      *(long *)(pdVar33 + 0x14) = lVar19;
      lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
      /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar19,param_1,uRam0000000003d56c90,0);
      *(long *)(pdVar33 + 0x16) = lVar19;
      pdVar18 = *(dword **)(param_1 + 0x20);
      unaff_x22 = 0x3d1feb8;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar23 = (dword *)0x0;
      uVar28 = unaff_x22;
      if (pdVar18 != (dword *)0x0) {
        pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
        unaff_x30 = 0x158fb80;
        ppdVar12 = (dword **)&stack0xffffffffffffffd0;
        unaff_x19 = param_1;
        unaff_x20 = pdVar33;
        unaff_x21 = pdVar18;
        unaff_x29 = &stack0xfffffffffffffff0;
code_r0x0147079c:
        uVar28 = 0;
        pdVar26 = (dword *)0x0;
        *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
        *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
        *(undefined8 *)((long)ppdVar12 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar12 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar12 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar12 + -0x18) = unaff_x19;
        *(undefined1 **)((long)ppdVar12 + -0x10) = unaff_x29;
        *(undefined8 *)((long)ppdVar12 + -8) = unaff_x30;
        puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
        pdVar36 = (dword *)0x0;
        pdVar27 = pdVar33;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        *(undefined8 *)((long)ppdVar12 + -0x48) = 0;
        lVar19 = *(long *)(pdVar18 + 4);
        if (lVar19 != 0) {
          pdVar26 = (dword *)0x0;
          uVar28 = 0;
          puVar43 = &UNK_01470820;
          pdVar24 = pdVar23;
          pdVar27 = pdVar33;
code_r0x02f87f38:
          *(undefined8 *)((long)ppdVar12 + -0x90) = unaff_x24;
          *(undefined8 *)((long)ppdVar12 + -0x88) = 0x3eb4000;
          *(undefined8 *)((long)ppdVar12 + -0x80) = 0;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar33;
          *(dword **)((long)ppdVar12 + -0x70) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x68) = pdVar23;
          *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
          *(undefined **)((long)ppdVar12 + -0x58) = puVar43;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          *(undefined8 *)((long)ppdVar12 + -0x130) = unaff_x26;
          *(undefined8 *)((long)ppdVar12 + -0x128) = unaff_x25;
          *(undefined8 *)((long)ppdVar12 + -0x120) = 0x3ebc000;
          *(dword **)((long)ppdVar12 + -0x118) = pdVar24;
          *(dword **)((long)ppdVar12 + -0x110) = pdVar27;
          *(undefined8 *)((long)ppdVar12 + -0x108) = uVar28;
          *(long *)((long)ppdVar12 + -0x100) = lVar19;
          *(dword **)((long)ppdVar12 + -0xf8) = pdVar26;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x60);
          *(undefined **)((long)ppdVar12 + -0xe8) = &UNK_02f87f9c;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar39 = *(long *)(lVar19 + 0x78);
          if (lVar39 != 0) {
            iVar17 = *(int *)(lVar39 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar16 = 1;
            pdVar33 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar39 + 0x18) <= iVar16 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar39 = *(long *)(*(long *)(lVar39 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
              if (lVar39 == 0) break;
              uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar39,pdVar24,5,0);
              if ((uVar21 & 1) != 0) {
                return pdVar33;
              }
              pdVar33 = (dword *)(ulong)(iVar16 < iVar17);
              if (iVar17 == iVar16) {
                return pdVar33;
              }
              lVar39 = *(long *)(lVar19 + 0x78);
              iVar16 = iVar16 + 1;
            } while (lVar39 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar49 = func_0x00f78af4();
        pdVar24 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x60) = puVar41;
        *(undefined **)((long)ppdVar12 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar19 != 0) {
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x60);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x58);
          goto code_r0x02f87f38;
        }
        auVar49 = func_0x00f78af4();
        uVar28 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x70) = (undefined1 *)((long)ppdVar12 + -0x60);
        *(undefined **)((long)ppdVar12 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar19 != 0) {
          pdVar26 = (dword *)0x0;
          *(undefined8 *)((long)ppdVar12 + -0x90) = 0;
          *(dword **)((long)ppdVar12 + -0x88) = pdVar33;
          *(dword **)((long)ppdVar12 + -0x80) = pdVar18;
          *(dword **)((long)ppdVar12 + -0x78) = pdVar23;
          *(undefined8 *)((long)ppdVar12 + -0x70) = *(undefined8 *)((long)ppdVar12 + -0x70);
          *(undefined8 *)((long)ppdVar12 + -0x68) = *(undefined8 *)((long)ppdVar12 + -0x68);
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar39 = *(long *)(lVar19 + 0x70);
          if (lVar39 != 0) {
            lVar22 = lVar39;
            if (*(uint *)(lVar39 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar22 = *(long *)(lVar19 + 0x70);
            }
            if (lVar22 != 0) {
              lVar39 = *(long *)(lVar39 + 0x10) + (long)(int)auVar49._8_4_ * 0x28;
              uVar34 = *(undefined8 *)(lVar39 + 0x28);
              uVar37 = *(undefined8 *)(lVar39 + 0x20);
              uVar2 = *(undefined4 *)(lVar39 + 0x42);
              *(undefined4 *)((long)ppdVar12 + -0xd8) = uVar2;
              uVar5 = *(undefined2 *)(lVar39 + 0x46);
              *(undefined2 *)((long)ppdVar12 + -0xd4) = uVar5;
              *(undefined8 *)((long)ppdVar12 + -200) = uVar34;
              *(undefined8 *)((long)ppdVar12 + -0xd0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb8) = uVar34;
              *(undefined8 *)((long)ppdVar12 + -0xc0) = uVar37;
              *(undefined8 *)((long)ppdVar12 + -0xb0) = 0;
              *(undefined8 *)((long)ppdVar12 + -0xa8) = 0;
              *(undefined2 *)((long)ppdVar12 + -0xa0) = 1;
              *(undefined4 *)((long)ppdVar12 + -0x9e) = uVar2;
              *(undefined2 *)((long)ppdVar12 + -0x9a) = uVar5;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar28,(undefined1 *)((long)ppdVar12 + -0xc0),
                              uRam0000000003d3ddd0);
              pdVar33 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar19,uVar28);
              return pdVar33;
            }
          }
          auVar49 = func_0x00f78af4();
          pdVar24 = auVar49._8_8_;
          puVar14 = (undefined1 *)((long)ppdVar12 + -0x110);
          *(undefined8 *)((long)ppdVar12 + -0x110) = 0;
          *(long *)((long)ppdVar12 + -0x108) = lVar39;
          *(long *)((long)ppdVar12 + -0x100) = lVar19;
          *(undefined8 *)((long)ppdVar12 + -0xf8) = uVar28;
          *(undefined1 **)((long)ppdVar12 + -0xf0) = (undefined1 *)((long)ppdVar12 + -0x70);
          *(undefined **)((long)ppdVar12 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xf0);
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar19 = *(long *)(auVar49._0_8_ + 0x70);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= auVar49._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)auVar49._8_4_ * 0x28 + 0x28);
            if (lVar19 == 0) {
              pdVar33 = (dword *)0x0;
            }
            else {
              pdVar33 = *(dword **)(lVar19 + 0x40);
            }
            return pdVar33;
          }
          puVar43 = &Core_UI2_UIScreen__ForceExit;
          pdVar23 = (dword *)func_0x00f78af4();
          pdVar18 = (dword *)0x0;
          pdVar33 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar49 = func_0x00f78af4();
        pdVar24 = auVar49._8_8_;
        *(undefined1 **)((long)ppdVar12 + -0x80) = (undefined1 *)((long)ppdVar12 + -0x70);
        *(undefined **)((long)ppdVar12 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = pdVar33;
        auVar49._0_8_ = lVar19;
        if (lVar19 != 0) {
          pdVar26 = (dword *)0x0;
          puVar7 = (undefined1 *)((long)ppdVar12 + -0x70);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x80);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x78);
          pdVar33 = pdVar18;
          goto code_r0x02f877a8;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0x90) = (undefined1 *)((long)ppdVar12 + -0x80);
        *(undefined **)((long)ppdVar12 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        auVar49._8_8_ = auVar49._8_8_;
        auVar49._0_8_ = lVar19;
        if (lVar19 != 0) {
          puVar8 = (undefined1 *)((long)ppdVar12 + -0x80);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0x90);
          puVar43 = *(undefined **)((long)ppdVar12 + -0x88);
          pdVar24 = pdVar26;
          while( true ) {
            puVar7 = puVar8 + -0x30;
            *(dword **)(puVar8 + -0x30) = pdVar36;
            *(dword **)(puVar8 + -0x28) = pdVar33;
            *(dword **)(puVar8 + -0x20) = pdVar18;
            *(dword **)(puVar8 + -0x18) = pdVar23;
            *(undefined1 **)(puVar8 + -0x10) = puVar41;
            *(undefined **)(puVar8 + -8) = puVar43;
            puVar41 = puVar8 + -0x10;
            puVar43 = &UNK_02f883d8;
            pdVar26 = pdVar24;
            pdVar23 = pdVar27;
            pdVar33 = pdVar24;
            pdVar36 = auVar49._0_8_;
code_r0x02f877a8:
            pdVar18 = auVar49._0_8_;
            puVar14 = puVar7 + -0x60;
            *(dword **)(puVar7 + -0x30) = pdVar36;
            *(long *)(puVar7 + -0x28) = auVar49._8_8_;
            *(dword **)(puVar7 + -0x20) = pdVar33;
            *(dword **)(puVar7 + -0x18) = pdVar23;
            *(undefined1 **)(puVar7 + -0x10) = puVar41;
            *(undefined **)(puVar7 + -8) = puVar43;
            puVar41 = puVar7 + -0x10;
            pdVar33 = pdVar18;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar33 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar31 = (uint)pdVar24;
            if (((int)uVar31 < 0) || ((int)*(long *)(pdVar18 + 0x14) <= (int)uVar31)) {
              return pdVar33;
            }
            lVar19 = *(long *)(pdVar18 + 0x1c);
            if (lVar19 == 0) break;
            if (*(uint *)(lVar19 + 0x18) <= uVar31) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(lVar19 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
            pdVar36 = *(dword **)(lVar19 + 0x20);
            pdVar23 = *(dword **)(lVar19 + 0x28);
            *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar19 + 0x42);
            *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar19 + 0x46);
            if (pdVar23 == (dword *)0x0) {
              lVar19 = *(long *)(pdVar18 + 0x1c);
              if (lVar19 != 0) {
                *(dword **)(puVar7 + -0x58) = pdVar36;
                *(undefined8 *)(puVar7 + -0x50) = 0;
                *(undefined8 *)(puVar7 + -0x48) = 0;
                *(undefined8 *)(puVar7 + -0x40) = 0;
                *(undefined2 *)(puVar7 + -0x38) = 0;
                *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
                *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
                pdVar33 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,pdVar24,puVar7 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar33;
              }
              break;
            }
            puVar43 = &UNK_02f87848;
            pdVar33 = pdVar23;
code_r0x02f882d8:
            *(dword **)(puVar14 + -0x20) = pdVar18;
            *(dword **)(puVar14 + -0x18) = pdVar24;
            *(undefined1 **)(puVar14 + -0x10) = puVar41;
            *(undefined **)(puVar14 + -8) = puVar43;
            (**(code **)(*(long *)pdVar23 + 0x218))
                      (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
            if (*(long *)(pdVar23 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
              pdVar23[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar33 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                           (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
              return pdVar33;
            }
            func_0x00f78af4();
            puVar8 = puVar14 + -0x40;
            *(dword **)(puVar14 + -0x40) = pdVar18;
            *(dword **)(puVar14 + -0x38) = pdVar23;
            *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
            *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar41 = puVar14 + -0x30;
            if (extraout_x1 != (long *)0x0) {
              lVar19 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar28 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar28,lVar19);
              pdVar33 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar33;
            }
            puVar43 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar49 = func_0x00f78af4();
            pdVar24 = pdVar26;
          }
          lVar19 = func_0x00f78af4();
          *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
          *(dword **)(puVar7 + -0x90) = pdVar36;
          *(undefined8 *)(puVar7 + -0x88) = 0;
          *(dword **)(puVar7 + -0x80) = pdVar18;
          *(dword **)(puVar7 + -0x78) = pdVar24;
          *(undefined1 **)(puVar7 + -0x70) = puVar41;
          *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar28 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar28,0);
          if (0 < *(int *)(lVar19 + 0x50)) {
            iVar17 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar19,iVar17);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar19,iVar17);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(lVar19 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar19);
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
          pdVar33 = (dword *)(*pcRam0000000003ec05a0)(uVar28);
          return pdVar33;
        }
        auVar49 = func_0x00f78af4();
        *(undefined1 **)((long)ppdVar12 + -0xa0) = (undefined1 *)((long)ppdVar12 + -0x90);
        *(undefined **)((long)ppdVar12 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar19 = *(long *)(auVar49._0_8_ + 0x10);
        if (lVar19 == 0) {
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xb0) = (undefined1 *)((long)ppdVar12 + -0xa0);
          *(undefined **)((long)ppdVar12 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
          lVar19 = *(long *)(auVar49._0_8_ + 0x10);
          auVar50._8_8_ = auVar49._8_8_;
          auVar50._0_8_ = lVar19;
          if (lVar19 != 0) {
            pdVar27 = (dword *)0x0;
            puVar9 = (undefined1 *)((long)ppdVar12 + -0xa0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xb0);
            puVar43 = *(undefined **)((long)ppdVar12 + -0xa8);
            goto code_r0x02f884dc;
          }
          auVar49 = func_0x00f78af4();
          *(undefined1 **)((long)ppdVar12 + -0xc0) = (undefined1 *)((long)ppdVar12 + -0xb0);
          *(undefined **)((long)ppdVar12 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
          lVar19 = *(long *)(auVar49._0_8_ + 0x10);
          auVar51._8_8_ = auVar49._8_8_;
          auVar51._0_8_ = lVar19;
          if (lVar19 == 0) {
            auVar49 = func_0x00f78af4();
            *(undefined1 **)((long)ppdVar12 + -0xd0) = (undefined1 *)((long)ppdVar12 + -0xc0);
            *(undefined **)((long)ppdVar12 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar19 = *(long *)(auVar49._0_8_ + 0x10);
            auVar52._8_8_ = auVar49._8_8_;
            auVar52._0_8_ = lVar19;
            if (lVar19 == 0) {
              pdVar36 = (dword *)func_0x00f78af4();
              *(undefined8 *)((long)ppdVar12 + -0x100) = 0;
              *(dword **)((long)ppdVar12 + -0xf8) = pdVar33;
              *(dword **)((long)ppdVar12 + -0xf0) = pdVar18;
              *(dword **)((long)ppdVar12 + -0xe8) = pdVar23;
              *(undefined1 **)((long)ppdVar12 + -0xe0) = (undefined1 *)((long)ppdVar12 + -0xd0);
              *(undefined **)((long)ppdVar12 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
              }
              uVar28 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar28,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar36 + 0xc) = uVar28;
              return pdVar36;
            }
            puVar11 = (undefined1 *)((long)ppdVar12 + -0xc0);
            puVar41 = *(undefined1 **)((long)ppdVar12 + -0xd0);
            puVar43 = *(undefined **)((long)ppdVar12 + -200);
            goto code_r0x02f88674;
          }
          puVar10 = (undefined1 *)((long)ppdVar12 + -0xb0);
          puVar41 = *(undefined1 **)((long)ppdVar12 + -0xc0);
          puVar43 = *(undefined **)((long)ppdVar12 + -0xb8);
          pdVar27 = pdVar26;
          pdVar36 = pdVar33;
        }
        else {
          pdVar27 = (dword *)0x0;
          puVar9 = (undefined1 *)((long)ppdVar12 + -0xc0);
          *(undefined8 *)((long)ppdVar12 + -0xc0) = 0;
          *(dword **)((long)ppdVar12 + -0xb8) = pdVar33;
          *(dword **)((long)ppdVar12 + -0xb0) = pdVar18;
          *(dword **)((long)ppdVar12 + -0xa8) = pdVar23;
          *(undefined8 *)((long)ppdVar12 + -0xa0) = *(undefined8 *)((long)ppdVar12 + -0xa0);
          *(undefined8 *)((long)ppdVar12 + -0x98) = *(undefined8 *)((long)ppdVar12 + -0x98);
          puVar41 = (undefined1 *)((long)ppdVar12 + -0xa0);
          pdVar33 = (dword *)0x3ebc000;
          if ((bRam0000000003ebc64f & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar31 = auVar49._8_4_;
          if (((int)uVar31 < 0) || (*(int *)(lVar19 + 0x50) <= (int)uVar31)) {
            return (dword *)0x0;
          }
          lVar19 = *(long *)(lVar19 + 0x70);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar31) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar39 = *(long *)(lVar19 + 0x10) + ((ulong)auVar49._8_8_ & 0xffffffff) * 0x28;
            lVar19 = *(long *)(lVar39 + 0x28);
            cVar3 = *(char *)(lVar39 + 0x40);
            iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar39 + 0x30),0);
            if (iVar17 == 0 || cVar3 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar19 != 0) && (*(int *)(lVar19 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          puVar43 = &Core_UI2_UIManager__GetLayerState;
          auVar50 = func_0x00f78af4();
          pdVar18 = (dword *)0x0;
          pdVar23 = auVar49._8_8_;
code_r0x02f884dc:
          puVar10 = puVar9 + -0x30;
          *(undefined8 *)(puVar9 + -0x30) = 0;
          *(dword **)(puVar9 + -0x28) = pdVar33;
          *(dword **)(puVar9 + -0x20) = pdVar18;
          *(dword **)(puVar9 + -0x18) = pdVar23;
          *(undefined1 **)(puVar9 + -0x10) = puVar41;
          *(undefined **)(puVar9 + -8) = puVar43;
          puVar41 = puVar9 + -0x10;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar19 = *(long *)(auVar50._0_8_ + 0x70);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= auVar50._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)auVar50._8_4_ * 0x28 + 0x28);
            if (lVar19 == 0) {
              pdVar33 = &MACH_HEADER.cputype;
            }
            else {
              pdVar33 = (dword *)(ulong)*(uint *)(lVar19 + 0x4c);
            }
            return pdVar33;
          }
          puVar43 = &Core_UI2_UIManager__EnableInput;
          auVar51 = func_0x00f78af4();
          pdVar18 = (dword *)0x0;
          pdVar23 = auVar50._8_8_;
          pdVar36 = (dword *)0x3ebc000;
        }
        pdVar24 = auVar51._8_8_;
        pdVar33 = auVar51._0_8_;
        puVar11 = puVar10 + -0x40;
        *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
        *(undefined8 *)(puVar10 + -0x30) = 0;
        *(dword **)(puVar10 + -0x28) = pdVar36;
        *(dword **)(puVar10 + -0x20) = pdVar18;
        *(dword **)(puVar10 + -0x18) = pdVar23;
        *(undefined1 **)(puVar10 + -0x10) = puVar41;
        *(undefined **)(puVar10 + -8) = puVar43;
        puVar41 = puVar10 + -0x10;
        pdVar36 = (dword *)0x3ebc000;
        pdVar26 = pdVar27;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(pdVar33 + 0x1a) != 0) {
          pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
          pdVar18 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar33 + 0x1a),pdVar24,pdVar26,0);
          lVar19 = *(long *)(pdVar33 + 0x1c);
          pdVar36 = (dword *)0x0;
          if (lVar19 != 0) {
            uVar31 = auVar51._8_4_;
            if (*(uint *)(lVar19 + 0x18) <= uVar31) {
              pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) ||
               (pdVar36 = *(dword **)(pdVar33 + 0xc), pdVar36 == (dword *)0x0)) {
              return pdVar18;
            }
            lVar19 = *(long *)(pdVar33 + 0x1c);
            pdVar33 = (dword *)0x0;
            if (lVar19 != 0) {
              if (*(uint *)(lVar19 + 0x18) <= uVar31) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar25 = *(long **)(*(long *)(lVar19 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
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
              *(dword **)(puVar10 + -0x68) = pdVar36;
              lVar19 = *(long *)(pdVar36 + 0x1a);
              if (lVar19 == 0) {
                puVar41 = puVar10 + -0x68;
                lVar39 = 1;
              }
              else {
                lVar39 = *(long *)(lVar19 + 0x18);
                if (lVar39 == 0) {
                  return pdVar36;
                }
                puVar41 = (undefined1 *)(lVar19 + 0x20);
              }
              lVar19 = 0;
              do {
                lVar22 = *(long *)(puVar41 + lVar19 * 8);
                pcVar40 = *(code **)(lVar22 + 0x10);
                plVar1 = *(long **)(lVar22 + 0x20);
                lVar22 = *(long *)(lVar22 + 0x28);
                if (*(short *)(lVar22 + 0x48) == -1) {
                  func_0x00f78ad8(lVar22);
                }
                iVar17 = func_0x00f78a4c(lVar22);
                bVar15 = *(char *)(lVar22 + 0x4a) == '\x03';
                if (iVar17 == 0) {
                  if (bVar15) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar33 = (dword *)(*pcVar40)(plVar25,pdVar24,pdVar27,lVar22);
                    }
                    else {
                      if (((*(short *)(lVar22 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar36 + 6) == 0))
                      goto code_r0x01e71aac;
                      iVar17 = func_0x00f78a44(lVar22);
                      iVar16 = func_0x00f78ec0(lVar22);
                      if (iVar17 == 0) {
                        uVar4 = *(ushort *)(lVar22 + 0x48);
                        if (iVar16 == 0) {
                          lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
                          pdVar33 = (dword *)(**(code **)(lVar22 + 0x138))
                                                       (plVar1,plVar25,pdVar24,pdVar27,
                                                        *(undefined8 *)(lVar22 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar22 = func_0x00f78a48(lVar22);
                        lVar29 = *plVar1;
                        uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                        if (uVar21 != 0) {
                          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar30 + -2) == lVar22) {
                              puVar20 = (undefined8 *)
                                        (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar30 = piVar30 + 4;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e71d74:
                        pcVar40 = (code *)*puVar20;
                        puVar20 = (undefined8 *)puVar20[1];
                      }
                      else {
                        if (iVar16 == 0) {
                          uVar28 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar29 = *plVar1;
                          uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                          if (uVar21 != 0) {
                            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                                lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                             (uint)*(ushort *)(lVar22 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar30 = piVar30 + 4;
                              uVar21 = uVar21 - 1;
                            } while (uVar21 != 0);
                          }
                          lVar29 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar28 = *(undefined8 *)(lVar29 + 8);
                        }
                        puVar20 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                        pcVar40 = (code *)*puVar20;
                      }
                      pdVar33 = (dword *)(*pcVar40)(plVar1,plVar25,pdVar24,pdVar27,puVar20);
                    }
                  }
                  else {
                    if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar36 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar17 = func_0x00f78a44(lVar22);
                    iVar16 = func_0x00f78ec0(lVar22);
                    if (iVar17 == 0) {
                      uVar4 = *(ushort *)(lVar22 + 0x48);
                      if (iVar16 == 0) {
                        lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
                        pdVar33 = (dword *)(**(code **)(lVar22 + 0x138))
                                                     (plVar25,pdVar24,pdVar27,
                                                      *(undefined8 *)(lVar22 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar22 = func_0x00f78a48(lVar22);
                      lVar29 = *plVar25;
                      uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                      if (uVar21 != 0) {
                        piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar30 + -2) == lVar22) {
                            puVar20 = (undefined8 *)
                                      (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar30 = piVar30 + 4;
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
                      puVar20 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e71d00:
                      pcVar40 = (code *)*puVar20;
                      puVar20 = (undefined8 *)puVar20[1];
                    }
                    else {
                      if (iVar16 == 0) {
                        uVar28 = *(undefined8 *)
                                  (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar29 = *plVar25;
                        uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                        if (uVar21 != 0) {
                          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                              lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                           (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar30 = piVar30 + 4;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                        uVar28 = *(undefined8 *)(lVar29 + 8);
                      }
                      puVar20 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                      pcVar40 = (code *)*puVar20;
                    }
                    pdVar33 = (dword *)(*pcVar40)(plVar25,pdVar24,pdVar27,puVar20);
                  }
                }
                else {
                  if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar33 = (dword *)(*pcVar40)(plVar1,plVar25,pdVar24,pdVar27,lVar22);
                }
code_r0x01e71bd0:
                lVar19 = lVar19 + 1;
                if (lVar19 == lVar39) {
                  return pdVar33;
                }
              } while( true );
            }
          }
        }
        puVar43 = &Core_UI2_UIManager__SetScreenVisible;
        auVar52 = func_0x00f78af4();
        pdVar23 = pdVar27;
        pdVar18 = pdVar24;
code_r0x02f88674:
        pdVar27 = auVar52._0_8_;
        *(dword **)(puVar11 + -0x30) = pdVar36;
        *(dword **)(puVar11 + -0x28) = pdVar33;
        *(dword **)(puVar11 + -0x20) = pdVar18;
        *(dword **)(puVar11 + -0x18) = pdVar23;
        *(undefined1 **)(puVar11 + -0x10) = puVar41;
        *(undefined **)(puVar11 + -8) = puVar43;
        pdVar33 = pdVar27;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar33 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar19 = *(long *)(pdVar27 + 0x1c);
        if (lVar19 != 0) {
          uVar31 = auVar52._8_4_;
          if (*(uint *)(lVar19 + 0x18) <= uVar31) {
            pdVar33 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) {
            return pdVar33;
          }
          lVar19 = *(long *)(pdVar27 + 0x1c);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar31) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
            if ((lVar19 != 0) && (plVar25 = *(long **)(lVar19 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar33 = (dword *)(**(code **)(*plVar25 + 0x178))
                                           (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
              return pdVar33;
            }
          }
        }
        auVar49 = func_0x00f78af4();
        uVar28 = auVar49._0_8_;
        *(long *)(puVar11 + -0x50) = auVar52._8_8_;
        *(dword **)(puVar11 + -0x48) = pdVar26;
        *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)(puVar11 + -0x68) = 0;
        *(undefined8 *)(puVar11 + -0x70) = 0;
        *(undefined8 *)(puVar11 + -0x58) = 0;
        *(undefined8 *)(puVar11 + -0x60) = 0;
        pdVar33 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar28,auVar49._8_8_,puVar11 + -0x70);
        if ((int)pdVar33 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar28,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
          *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
          *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
          *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
          *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
          pdVar33 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar28,puVar11 + -0x90,1);
        }
        return pdVar33;
      }
    }
  }
  lVar19 = func_0x00f78af4();
  puStack_38 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__OnExit;
  pdStack_50 = pdVar33;
  pdStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5133 & 1) == 0) {
    func_0x00f78a20(0x3d40598);
    bRam0000000003eb5133 = 1;
  }
  pdVar33 = (dword *)0x3eb5000;
  if (*(long *)(lVar19 + 0x98) == 0) goto code_r0x0158fd9c;
  lVar39 = *(long *)(*(long *)(lVar19 + 0x98) + 0x20);
  if (lVar39 == 0) {
    pdVar33 = (dword *)0x0;
  }
  else {
    pdVar33 = (dword *)(ulong)(*(char *)(lVar39 + 0x19c) == '\0');
  }
  lVar39 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar19,uRam0000000003d40598);
  if ((lVar39 == 0) || (*(long *)(lVar39 + 0x10) == 0)) goto code_r0x0158fd9c;
  uVar31 = (uint)pdVar33;
  if (*(int *)(*(long *)(lVar39 + 0x10) + 0x10) == 2) {
    if (*(long *)(lVar19 + 0xb8) == 0) goto code_r0x0158fd9c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar19 + 0xb8),0);
    pdVar18 = pdVar33;
    if (iVar17 != 0) {
      if ((*(long *)(lVar19 + 0x98) == 0) ||
         (lVar39 = *(long *)(*(long *)(lVar19 + 0x98) + 0x20), lVar39 == 0)) goto code_r0x0158fd9c;
      pdVar36 = (dword *)/*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar39,0);
      uVar6 = (uint)pdVar36 | uVar31;
      pdVar18 = (dword *)(ulong)uVar6;
      if (uVar31 == 0) {
        if (uVar6 == 0) {
          return pdVar36;
        }
        goto code_r0x0158fd74;
      }
    }
    pdVar33 = pdVar18;
    if (*(long *)(lVar19 + 0x98) == 0) goto code_r0x0158fd9c;
    pdVar36 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar19 + 0x98),0);
    if (((ulong)pdVar18 & 1) == 0) {
      return pdVar36;
    }
  }
  else if (uVar31 != 0) {
    if (*(long *)(lVar19 + 0x98) == 0) goto code_r0x0158fd9c;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar19 + 0x98),0);
  }
code_r0x0158fd74:
  pdVar36 = pdStack_48;
  pdVar18 = pdStack_50;
  lVar39 = *(long *)(lVar19 + 0xb8);
  if (lVar39 != 0) {
    if (*(long *)(lVar39 + 0x38) != 0) {
      plVar25 = *(long **)(*(long *)(lVar39 + 0x38) + 0x30);
      if (plVar25 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar33 = (dword *)(**(code **)(*plVar25 + 0x678))
                                     (plVar25,*(undefined8 *)(*plVar25 + 0x680));
        return pdVar33;
      }
      return (dword *)0x0;
    }
    lVar19 = func_0x00f78af4(lVar39,0);
    pdStack_48 = (dword *)&Atlas_Networking_MatchMakingManager__LeaveGroup;
    if (*(long *)(lVar19 + 0x38) != 0) {
      plVar25 = *(long **)(*(long *)(lVar19 + 0x38) + 0x30);
      if (plVar25 != (long *)0x0) {
        pdStack_50 = (dword *)&puStack_40;
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar33 = (dword *)(**(code **)(*plVar25 + 0x808))
                                     (plVar25,*(undefined8 *)(*plVar25 + 0x810));
        return pdVar33;
      }
      return (dword *)0x0;
    }
    pdStack_50 = (dword *)&puStack_40;
    lVar19 = func_0x00f78af4();
    pdStack_70 = pdVar18;
    pdStack_68 = pdVar36;
    puStack_58 = &Atlas_Networking_MatchMakingManager__SetVisuals;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lVar39 = *(long *)(lVar19 + 0xb0);
    ppuStack_60 = (undefined1 **)&pdStack_50;
    if (lVar39 != 0) {
      uStack_168 = *(undefined8 *)(lVar39 + 0x38);
      uStack_170 = *(undefined8 *)(lVar39 + 0x30);
      uStack_158 = *(undefined8 *)(lVar39 + 0x48);
      uStack_160 = *(undefined8 *)(lVar39 + 0x40);
      uStack_148 = *(undefined8 *)(lVar39 + 0x58);
      uStack_150 = *(undefined8 *)(lVar39 + 0x50);
      uStack_138 = *(undefined8 *)(lVar39 + 0x68);
      uStack_140 = *(undefined8 *)(lVar39 + 0x60);
      uStack_f0 = uStack_170;
      uStack_e8 = uStack_168;
      uStack_e0 = uStack_160;
      uStack_d8 = uStack_158;
      uStack_d0 = uStack_150;
      uStack_c8 = uStack_148;
      uStack_c0 = uStack_140;
      uStack_b8 = uStack_138;
      ppuStack_60 = (undefined1 **)&pdStack_50;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_130,&uStack_170,*(undefined8 *)(lVar19 + 0x48),
                 *(undefined8 *)(lVar19 + 0x88),*(undefined8 *)(lVar19 + 0x70),0);
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_198 = uStack_118;
      uStack_1a0 = uStack_120;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_b0,&uStack_1b0,0);
      if ((*(long *)(lVar19 + 0x40) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x40) + 0x28), lVar19 != 0)) {
        uStack_1e8 = uStack_a8;
        uStack_1f0 = uStack_b0;
        uStack_1d8 = uStack_98;
        uStack_1e0 = uStack_a0;
        uStack_1c8 = uStack_88;
        uStack_1d0 = uStack_90;
        uStack_1b8 = uStack_78;
        uStack_1c0 = uStack_80;
        pdVar33 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar19,&uStack_1f0,0);
        return pdVar33;
      }
    }
    auVar49 = func_0x00f78af4();
    *(long *)(auVar49._0_8_ + 0x2c) = auVar49._8_8_;
    return auVar49._0_8_;
  }
code_r0x0158fd9c:
  lVar39 = func_0x00f78af4();
  ppdVar12 = &pdStack_70;
  puStack_58 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowPostEventScreen;
  pppuVar42 = &ppuStack_60;
  pdStack_70 = pdVar33;
  pdStack_68 = (dword *)lVar19;
  ppuStack_60 = &puStack_40;
  if (*(long *)(lVar39 + 0xa0) != 0) {
    pdVar33 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar39 + 0xa0),1,0,0,0,0);
    *(undefined1 *)(lVar39 + 200) = 1;
    return pdVar33;
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen;
  lVar19 = func_0x00f78af4();
code_r0x0158fde8:
  puVar13 = (undefined1 *)((long)ppdVar12 + -0x40);
  *(undefined8 *)((long)ppdVar12 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar12 + -0x38) = unaff_x23;
  *(undefined8 *)((long)ppdVar12 + -0x30) = uVar28;
  *(dword **)((long)ppdVar12 + -0x28) = pdVar23;
  *(dword **)((long)ppdVar12 + -0x20) = pdVar33;
  *(long *)((long)ppdVar12 + -0x18) = lVar39;
  *(undefined1 ****)((long)ppdVar12 + -0x10) = pppuVar42;
  *(undefined **)((long)ppdVar12 + -8) = puVar43;
  puVar41 = (undefined1 *)((long)ppdVar12 + -0x10);
  unaff_x23 = 0x3d28bc0;
  uVar28 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar33,0);
  lVar39 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar20 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar39,lVar19,puRam0000000003d56c98,0);
  if (pdVar33 != (dword *)0x0) {
    uVar28 = 0x3d1feb8;
    *(long *)(pdVar33 + 4) = lVar39;
    pdVar18 = *(dword **)(lVar19 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = 0;
    if (pdVar18 != (dword *)0x0) {
      pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
      unaff_x29 = *(undefined1 **)((long)ppdVar12 + -0x10);
      unaff_x30 = *(undefined8 *)((long)ppdVar12 + -8);
      unaff_x20 = *(dword **)((long)ppdVar12 + -0x20);
      unaff_x19 = *(dword **)((long)ppdVar12 + -0x18);
      unaff_x22 = *(undefined8 *)((long)ppdVar12 + -0x30);
      unaff_x21 = *(dword **)((long)ppdVar12 + -0x28);
      unaff_x24 = *(undefined8 *)((long)ppdVar12 + -0x40);
      unaff_x23 = *(undefined8 *)((long)ppdVar12 + -0x38);
      goto code_r0x0147079c;
    }
  }
  puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
  lVar22 = func_0x00f78af4();
  do {
    *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar13 + -0x30) = uVar28;
    *(long *)(puVar13 + -0x28) = lVar39;
    *(dword **)(puVar13 + -0x20) = pdVar33;
    *(long *)(puVar13 + -0x18) = lVar19;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar34 = 0x3eb5000;
    uVar37 = 0x3d40598;
    if ((bRam0000000003eb5135 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c0);
      func_0x00f78a20(0x3d27618);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5135 = 1;
    }
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar22,uRam0000000003d40598);
    if (lVar19 != 0) {
      lVar19 = *(long *)(lVar19 + 0x10);
      uVar37 = 0;
      if (lVar19 == 0) goto code_r0x0159003c;
      unaff_x23 = 0x3d194c0;
      uVar28 = 0x3d25458;
      uVar37 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      *(undefined8 *)(lVar19 + 0x20) = uVar37;
      if (*(int *)(lVar19 + 0x10) == 2) {
        *(undefined8 *)(lVar19 + 0x18) = uVar37;
      }
      uVar34 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      puVar20 = (undefined8 *)0x0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor(uVar34,lVar19)
      ;
      uVar37 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
      pdVar33 = *(dword **)(lVar22 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar25 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar22 = 0;
      if (pdVar33 == (dword *)0x0) goto code_r0x0159003c;
      uVar28 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar32 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar35 = *(undefined8 *)(puVar13 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar13 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar13 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
      *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x30) = uVar38;
      *(undefined8 *)(puVar13 + -0x28) = uVar35;
      *(undefined8 *)(puVar13 + -0x20) = uVar37;
      *(undefined8 *)(puVar13 + -0x18) = uVar32;
      *(undefined8 *)(puVar13 + -0x10) = uVar28;
      *(undefined8 *)(puVar13 + -8) = uVar44;
      *(dword **)(puVar13 + -0x68) = pdVar33;
      lVar19 = *(long *)(pdVar33 + 0x1a);
      if (lVar19 == 0) {
        puVar41 = puVar13 + -0x68;
        lVar39 = 1;
      }
      else {
        lVar39 = *(long *)(lVar19 + 0x18);
        if (lVar39 == 0) {
          return pdVar33;
        }
        puVar41 = (undefined1 *)(lVar19 + 0x20);
      }
      lVar19 = 0;
      goto code_r0x01e715f4;
    }
code_r0x0159003c:
    lVar19 = func_0x00f78af4();
    *(undefined8 *)(puVar13 + -0x70) = uVar28;
    *(undefined8 *)(puVar13 + -0x68) = uVar37;
    *(undefined8 *)(puVar13 + -0x60) = uVar34;
    *(long *)(puVar13 + -0x58) = lVar22;
    *(undefined1 **)(puVar13 + -0x50) = puVar13 + -0x10;
    *(undefined **)(puVar13 + -0x48) =
         &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
    puVar41 = puVar13 + -0x50;
    uVar34 = 0x3eb5000;
    if ((bRam0000000003eb5136 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5136 = 1;
    }
    if (*(long *)(lVar19 + 0xa8) == 0) {
code_r0x01590110:
      puVar43 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
      lVar22 = func_0x00f78af4();
      puVar13 = puVar13 + -0x70;
    }
    else {
      uVar37 = 0x3d23000;
      uVar34 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar19 + 0xa8),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar20 = (undefined8 *)0x0;
      iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar34,0);
      if (iVar17 != 0) {
        if (*(long *)(lVar19 + 0xa8) == 0) goto code_r0x01590110;
        uVar21 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(lVar19 + 0xa8),0);
        if ((uVar21 & 1) == 0) {
          if (*(long *)(lVar19 + 0xb0) == 0) goto code_r0x01590110;
          puVar20 = (undefined8 *)0x0;
          iVar17 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(lVar19 + 0xb0),2);
          if (iVar17 != 0) break;
        }
      }
      puVar41 = *(undefined1 **)(puVar13 + -0x50);
      puVar43 = *(undefined **)(puVar13 + -0x48);
      uVar34 = *(undefined8 *)(puVar13 + -0x60);
      plVar25 = (long *)(puVar13 + -0x58);
      uVar28 = *(undefined8 *)(puVar13 + -0x70);
      uVar37 = *(undefined8 *)(puVar13 + -0x68);
      puVar13 = puVar13 + -0x40;
      lVar22 = lVar19;
      lVar19 = *plVar25;
    }
    *(undefined8 *)(puVar13 + -0x30) = uVar28;
    *(undefined8 *)(puVar13 + -0x28) = uVar37;
    *(undefined8 *)(puVar13 + -0x20) = uVar34;
    *(long *)(puVar13 + -0x18) = lVar19;
    *(undefined1 **)(puVar13 + -0x10) = puVar41;
    *(undefined **)(puVar13 + -8) = puVar43;
    uVar34 = 0x3eb5000;
    if ((bRam0000000003eb5137 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d27628);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5137 = 1;
    }
    if (*(long *)(lVar22 + 0xb8) == 0) goto code_r0x0159024c;
    iVar17 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar22 + 0xb8),0);
    if (iVar17 == 0) {
      lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar22,uRam0000000003d40598);
      if (lVar19 == 0) {
code_r0x0159024c:
        pdVar33 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar13 + -0x60) = uVar28;
        *(undefined8 *)(puVar13 + -0x58) = uVar37;
        *(undefined8 *)(puVar13 + -0x50) = uVar34;
        *(long *)(puVar13 + -0x48) = lVar22;
        *(undefined1 **)(puVar13 + -0x40) = puVar13 + -0x10;
        *(undefined **)(puVar13 + -0x38) = &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
        if ((bRam0000000003eb5138 & 1) == 0) {
          func_0x00f78a20(0x3d40590);
          bRam0000000003eb5138 = 1;
        }
        if (pdVar33 == (dword *)0x0) {
          *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(puVar13 + -0x40);
          *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(puVar13 + -0x38);
          auVar49 = func_0x00f78af4(0,uRam0000000003d40590);
          pdVar33 = auVar49._0_8_;
          *(undefined8 *)(pdVar33 + 4) = *puVar20;
          *(long *)(pdVar33 + 8) = auVar49._8_8_;
          *(undefined8 **)(pdVar33 + 10) = puVar20;
          return pdVar33;
        }
        return pdVar33;
      }
      uVar37 = *(undefined8 *)(lVar19 + 0x10);
      uVar34 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
      puVar20 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                (uVar34,uVar37,1,0);
      uVar37 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
      pdVar33 = *(dword **)(lVar22 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar25 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar37,0);
      lVar22 = 0;
      if (pdVar33 == (dword *)0x0) goto code_r0x0159024c;
      uVar28 = *(undefined8 *)(puVar13 + -0x10);
      uVar44 = *(undefined8 *)(puVar13 + -8);
      uVar37 = *(undefined8 *)(puVar13 + -0x20);
      uVar32 = *(undefined8 *)(puVar13 + -0x18);
      uVar38 = *(undefined8 *)(puVar13 + -0x30);
      uVar35 = *(undefined8 *)(puVar13 + -0x28);
      goto System_Action_Type__bool__TransitionData___Invoke;
    }
    puVar41 = *(undefined1 **)(puVar13 + -0x10);
    puVar43 = *(undefined **)(puVar13 + -8);
    pdVar33 = *(dword **)(puVar13 + -0x20);
    lVar19 = *(long *)(puVar13 + -0x18);
    uVar28 = *(undefined8 *)(puVar13 + -0x30);
    lVar39 = *(long *)(puVar13 + -0x28);
  } while( true );
  pppuVar42 = *(undefined1 ****)(puVar13 + -0x50);
  puVar43 = *(undefined **)(puVar13 + -0x48);
  pdVar33 = *(dword **)(puVar13 + -0x60);
  lVar39 = *(long *)(puVar13 + -0x58);
  ppdVar12 = (dword **)(puVar13 + -0x40);
  uVar28 = *(undefined8 *)(puVar13 + -0x70);
  pdVar23 = *(dword **)(puVar13 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar22 = *(long *)(puVar41 + lVar19 * 8);
  pcVar40 = *(code **)(lVar22 + 0x10);
  plVar1 = *(long **)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  if (*(short *)(lVar22 + 0x48) == -1) {
    func_0x00f78ad8(lVar22);
  }
  iVar17 = func_0x00f78a4c(lVar22);
  bVar15 = *(char *)(lVar22 + 0x4a) == '\x03';
  if (iVar17 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar18 = (dword *)(*pcVar40)(plVar25,0,uVar34,lVar22);
      }
      else {
        if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar33 + 6) == 0)) goto code_r0x01e7162c;
        iVar17 = func_0x00f78a44(lVar22);
        iVar16 = func_0x00f78ec0(lVar22);
        if (iVar17 == 0) {
          uVar4 = *(ushort *)(lVar22 + 0x48);
          if (iVar16 == 0) {
            lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar18 = (dword *)(**(code **)(lVar22 + 0x138))
                                         (plVar1,plVar25,0,uVar34,*(undefined8 *)(lVar22 + 0x140));
            goto code_r0x01e71750;
          }
          lVar22 = func_0x00f78a48(lVar22);
          lVar29 = *plVar1;
          uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
          if (uVar21 != 0) {
            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == lVar22) {
                puVar20 = (undefined8 *)
                          (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar30 = piVar30 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e718f4:
          pcVar40 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar16 == 0) {
            uVar28 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar29 = *plVar1;
            uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
            if (uVar21 != 0) {
              piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
              do {
                if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                  lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar30 = piVar30 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar29 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar28 = *(undefined8 *)(lVar29 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
          pcVar40 = (code *)*puVar20;
        }
        pdVar18 = (dword *)(*pcVar40)(plVar1,plVar25,0,uVar34,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar33 + 6) == 0)) goto code_r0x01e7173c;
      iVar17 = func_0x00f78a44(lVar22);
      iVar16 = func_0x00f78ec0(lVar22);
      if (iVar17 == 0) {
        uVar4 = *(ushort *)(lVar22 + 0x48);
        if (iVar16 == 0) {
          lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
          pdVar18 = (dword *)(**(code **)(lVar22 + 0x138))
                                       (plVar25,0,uVar34,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x01e71750;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar29 = *plVar25;
        uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
        if (uVar21 != 0) {
          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
          do {
            if (*(long *)(piVar30 + -2) == lVar22) {
              puVar20 = (undefined8 *)(lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar30 = piVar30 + 4;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e71880:
        pcVar40 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar16 == 0) {
          uVar28 = *(undefined8 *)(*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar29 = *plVar25;
          uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
          if (uVar21 != 0) {
            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar30 = piVar30 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e71858:
          uVar28 = *(undefined8 *)(lVar29 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
        pcVar40 = (code *)*puVar20;
      }
      pdVar18 = (dword *)(*pcVar40)(plVar25,0,uVar34,puVar20);
    }
  }
  else {
    if (bVar15) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar18 = (dword *)(*pcVar40)(plVar1,plVar25,0,uVar34,lVar22);
  }
code_r0x01e71750:
  lVar19 = lVar19 + 1;
  if (lVar19 == lVar39) {
    return pdVar18;
  }
  goto code_r0x01e715f4;
}



// ============================================================
// RVA: 0x158fc90 | Atlas.Contexts.FrontEndContextPostQuickPlayState.OnExit
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__OnExit(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  long *plVar18;
  int iVar17;
  dword *pdVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  dword *pdVar25;
  dword *pdVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  uint uVar33;
  dword *pdVar34;
  undefined8 uVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 unaff_x21;
  undefined8 uVar38;
  dword *pdVar39;
  undefined8 unaff_x22;
  undefined8 uVar40;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar41;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar42;
  undefined8 unaff_x28;
  undefined1 **ppuVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
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
  ulong uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb5133 & 1) == 0) {
    func_0x00f78a20(0x3d40598);
    bRam0000000003eb5133 = 1;
  }
  uVar36 = 0x3eb5000;
  if (*(long *)(param_1 + 0x98) == 0) goto LAB_0158fd9c;
  lVar31 = *(long *)(*(long *)(param_1 + 0x98) + 0x20);
  if (lVar31 == 0) {
    uVar36 = 0;
  }
  else {
    uVar36 = (ulong)(*(char *)(lVar31 + 0x19c) == '\0');
  }
  lVar31 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
  if ((lVar31 == 0) || (*(long *)(lVar31 + 0x10) == 0)) goto LAB_0158fd9c;
  uVar33 = (uint)uVar36;
  if (*(int *)(*(long *)(lVar31 + 0x10) + 0x10) == 2) {
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0158fd9c;
    iVar16 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb8),0);
    uVar29 = uVar36;
    if (iVar16 != 0) {
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar31 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar31 == 0)) goto LAB_0158fd9c;
      pdVar19 = (dword *)/*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar31,0);
      uVar6 = (uint)pdVar19 | uVar33;
      uVar29 = (ulong)uVar6;
      if (uVar33 == 0) {
        if (uVar6 == 0) {
          return pdVar19;
        }
        goto code_r0x0158fd74;
      }
    }
    uVar36 = uVar29;
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_0158fd9c;
    pdVar19 = (dword *)/*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(param_1 + 0x98),0);
    if ((uVar29 & 1) == 0) {
      return pdVar19;
    }
  }
  else if (uVar33 != 0) {
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_0158fd9c;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(param_1 + 0x98),0);
  }
code_r0x0158fd74:
  lVar31 = *(long *)(param_1 + 0xb8);
  if (lVar31 != 0) {
    if (*(long *)(lVar31 + 0x38) != 0) {
      plVar18 = *(long **)(*(long *)(lVar31 + 0x38) + 0x30);
      if (plVar18 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014904ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*plVar18 + 0x678))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x680));
        return pdVar19;
      }
      return (dword *)0x0;
    }
    lVar31 = func_0x00f78af4(lVar31,0);
    if (*(long *)(lVar31 + 0x38) != 0) {
      plVar18 = *(long **)(*(long *)(lVar31 + 0x38) + 0x30);
      if (plVar18 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01490524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar19 = (dword *)(**(code **)(*plVar18 + 0x808))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x810));
        return pdVar19;
      }
      return (dword *)0x0;
    }
    lVar31 = func_0x00f78af4();
    puStack_28 = &Atlas_Networking_MatchMakingManager__SetVisuals;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lVar28 = *(long *)(lVar31 + 0xb0);
    puStack_30 = &stack0xffffffffffffffe0;
    if (lVar28 != 0) {
      uStack_138 = *(undefined8 *)(lVar28 + 0x38);
      uStack_140 = *(undefined8 *)(lVar28 + 0x30);
      uStack_128 = *(undefined8 *)(lVar28 + 0x48);
      uStack_130 = *(undefined8 *)(lVar28 + 0x40);
      uStack_118 = *(undefined8 *)(lVar28 + 0x58);
      uStack_120 = *(undefined8 *)(lVar28 + 0x50);
      uStack_108 = *(undefined8 *)(lVar28 + 0x68);
      uStack_110 = *(undefined8 *)(lVar28 + 0x60);
      uStack_c0 = uStack_140;
      uStack_b8 = uStack_138;
      uStack_b0 = uStack_130;
      uStack_a8 = uStack_128;
      uStack_a0 = uStack_120;
      uStack_98 = uStack_118;
      uStack_90 = uStack_110;
      uStack_88 = uStack_108;
      puStack_30 = &stack0xffffffffffffffe0;
      Atlas_Gameplay_KartLoadout__FixInvalidKartLoadoutWithAvailable
                (&uStack_100,&uStack_140,*(undefined8 *)(lVar31 + 0x48),
                 *(undefined8 *)(lVar31 + 0x88),*(undefined8 *)(lVar31 + 0x70),0);
      uStack_178 = uStack_f8;
      uStack_180 = uStack_100;
      uStack_168 = uStack_e8;
      uStack_170 = uStack_f0;
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_148 = uStack_c8;
      uStack_150 = uStack_d0;
      /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&uStack_80,&uStack_180,0);
      if ((*(long *)(lVar31 + 0x40) != 0) &&
         (lVar31 = *(long *)(*(long *)(lVar31 + 0x40) + 0x28), lVar31 != 0)) {
        uStack_1b8 = uStack_78;
        uStack_1c0 = uStack_80;
        uStack_1a8 = uStack_68;
        uStack_1b0 = uStack_70;
        uStack_198 = uStack_58;
        uStack_1a0 = uStack_60;
        uStack_188 = uStack_48;
        uStack_190 = uStack_50;
        pdVar19 = (dword *)/*Atlas.Networking.NetworkLobby$$SetLocalPlayerVisuals*/ func_0x014a9570(lVar31,&uStack_1c0,0);
        return pdVar19;
      }
    }
    auVar46 = func_0x00f78af4();
    *(long *)(auVar46._0_8_ + 0x2c) = auVar46._8_8_;
    return auVar46._0_8_;
  }
LAB_0158fd9c:
  lVar31 = func_0x00f78af4();
  puVar12 = &uStack_40;
  puStack_28 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowPostEventScreen;
  ppuVar43 = &puStack_30;
  uStack_40 = uVar36;
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar31 + 0xa0) != 0) {
    pdVar19 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar31 + 0xa0),1,0,0,0,0);
    *(undefined1 *)(lVar31 + 200) = 1;
    return pdVar19;
  }
  puVar44 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen;
  lVar28 = func_0x00f78af4();
code_r0x0158fde8:
  puVar13 = (undefined1 *)((long)puVar12 + -0x40);
  *(undefined8 *)((long)puVar12 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar12 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar12 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar12 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar12 + -0x20) = uVar36;
  *(long *)((long)puVar12 + -0x18) = lVar31;
  *(undefined1 ***)((long)puVar12 + -0x10) = ppuVar43;
  *(undefined **)((long)puVar12 + -8) = puVar44;
  puVar42 = (undefined1 *)((long)puVar12 + -0x10);
  unaff_x23 = 0x3d28bc0;
  uVar22 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar19 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar19,0);
  lVar31 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar20 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar31,lVar28,puRam0000000003d56c98,0);
  if (pdVar19 == (dword *)0x0) {
code_r0x0158feec:
    puVar44 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
    lVar21 = func_0x00f78af4();
    do {
      *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x30) = uVar22;
      *(long *)(puVar13 + -0x28) = lVar31;
      *(dword **)(puVar13 + -0x20) = pdVar19;
      *(long *)(puVar13 + -0x18) = lVar28;
      *(undefined1 **)(puVar13 + -0x10) = puVar42;
      *(undefined **)(puVar13 + -8) = puVar44;
      uVar37 = 0x3eb5000;
      uVar27 = 0x3d40598;
      if ((bRam0000000003eb5135 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c0);
        func_0x00f78a20(0x3d27618);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5135 = 1;
      }
      lVar31 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40598);
      if (lVar31 != 0) {
        lVar31 = *(long *)(lVar31 + 0x10);
        uVar27 = 0;
        if (lVar31 == 0) goto code_r0x0159003c;
        unaff_x23 = 0x3d194c0;
        uVar22 = 0x3d25458;
        uVar27 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        *(undefined8 *)(lVar31 + 0x20) = uVar27;
        if (*(int *)(lVar31 + 0x10) == 2) {
          *(undefined8 *)(lVar31 + 0x18) = uVar27;
        }
        uVar37 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
        puVar20 = (undefined8 *)0x0;
        Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                  (uVar37,lVar31);
        uVar27 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
        pdVar19 = *(dword **)(lVar21 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        lVar21 = 0;
        if (pdVar19 == (dword *)0x0) goto code_r0x0159003c;
        uVar22 = *(undefined8 *)(puVar13 + -0x10);
        uVar45 = *(undefined8 *)(puVar13 + -8);
        uVar27 = *(undefined8 *)(puVar13 + -0x20);
        uVar35 = *(undefined8 *)(puVar13 + -0x18);
        uVar40 = *(undefined8 *)(puVar13 + -0x30);
        uVar38 = *(undefined8 *)(puVar13 + -0x28);
        unaff_x24 = *(undefined8 *)(puVar13 + -0x40);
        unaff_x23 = *(undefined8 *)(puVar13 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
        *(undefined8 *)(puVar13 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar13 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar13 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar13 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar13 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar13 + -0x30) = uVar40;
        *(undefined8 *)(puVar13 + -0x28) = uVar38;
        *(undefined8 *)(puVar13 + -0x20) = uVar27;
        *(undefined8 *)(puVar13 + -0x18) = uVar35;
        *(undefined8 *)(puVar13 + -0x10) = uVar22;
        *(undefined8 *)(puVar13 + -8) = uVar45;
        *(dword **)(puVar13 + -0x68) = pdVar19;
        lVar31 = *(long *)(pdVar19 + 0x1a);
        if (lVar31 == 0) {
          puVar42 = puVar13 + -0x68;
          lVar28 = 1;
        }
        else {
          lVar28 = *(long *)(lVar31 + 0x18);
          if (lVar28 == 0) {
            return pdVar19;
          }
          puVar42 = (undefined1 *)(lVar31 + 0x20);
        }
        lVar31 = 0;
        goto code_r0x01e715f4;
      }
code_r0x0159003c:
      lVar28 = func_0x00f78af4();
      *(undefined8 *)(puVar13 + -0x70) = uVar22;
      *(undefined8 *)(puVar13 + -0x68) = uVar27;
      *(undefined8 *)(puVar13 + -0x60) = uVar37;
      *(long *)(puVar13 + -0x58) = lVar21;
      *(undefined1 **)(puVar13 + -0x50) = puVar13 + -0x10;
      *(undefined **)(puVar13 + -0x48) =
           &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
      puVar42 = puVar13 + -0x50;
      uVar37 = 0x3eb5000;
      if ((bRam0000000003eb5136 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5136 = 1;
      }
      if (*(long *)(lVar28 + 0xa8) == 0) {
code_r0x01590110:
        puVar44 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
        lVar21 = func_0x00f78af4();
        puVar13 = puVar13 + -0x70;
      }
      else {
        uVar27 = 0x3d23000;
        uVar37 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar28 + 0xa8),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar20 = (undefined8 *)0x0;
        iVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar37,0);
        if (iVar16 != 0) {
          if (*(long *)(lVar28 + 0xa8) == 0) goto code_r0x01590110;
          uVar36 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(lVar28 + 0xa8),0);
          if ((uVar36 & 1) == 0) {
            if (*(long *)(lVar28 + 0xb0) == 0) goto code_r0x01590110;
            puVar20 = (undefined8 *)0x0;
            iVar16 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(lVar28 + 0xb0),2);
            if (iVar16 != 0) goto code_r0x015900e8;
          }
        }
        puVar42 = *(undefined1 **)(puVar13 + -0x50);
        puVar44 = *(undefined **)(puVar13 + -0x48);
        uVar37 = *(undefined8 *)(puVar13 + -0x60);
        plVar18 = (long *)(puVar13 + -0x58);
        uVar22 = *(undefined8 *)(puVar13 + -0x70);
        uVar27 = *(undefined8 *)(puVar13 + -0x68);
        puVar13 = puVar13 + -0x40;
        lVar21 = lVar28;
        lVar28 = *plVar18;
      }
      *(undefined8 *)(puVar13 + -0x30) = uVar22;
      *(undefined8 *)(puVar13 + -0x28) = uVar27;
      *(undefined8 *)(puVar13 + -0x20) = uVar37;
      *(long *)(puVar13 + -0x18) = lVar28;
      *(undefined1 **)(puVar13 + -0x10) = puVar42;
      *(undefined **)(puVar13 + -8) = puVar44;
      uVar37 = 0x3eb5000;
      if ((bRam0000000003eb5137 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c8);
        func_0x00f78a20(0x3d27628);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5137 = 1;
      }
      if (*(long *)(lVar21 + 0xb8) == 0) goto code_r0x0159024c;
      iVar16 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar21 + 0xb8),0);
      if (iVar16 == 0) {
        lVar31 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40598);
        if (lVar31 == 0) {
code_r0x0159024c:
          pdVar19 = (dword *)func_0x00f78af4();
          *(undefined8 *)(puVar13 + -0x60) = uVar22;
          *(undefined8 *)(puVar13 + -0x58) = uVar27;
          *(undefined8 *)(puVar13 + -0x50) = uVar37;
          *(long *)(puVar13 + -0x48) = lVar21;
          *(undefined1 **)(puVar13 + -0x40) = puVar13 + -0x10;
          *(undefined **)(puVar13 + -0x38) =
               &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
          if ((bRam0000000003eb5138 & 1) == 0) {
            func_0x00f78a20(0x3d40590);
            bRam0000000003eb5138 = 1;
          }
          if (pdVar19 == (dword *)0x0) {
            *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(puVar13 + -0x40);
            *(undefined8 *)(puVar13 + -0x38) = *(undefined8 *)(puVar13 + -0x38);
            auVar46 = func_0x00f78af4(0,uRam0000000003d40590);
            pdVar19 = auVar46._0_8_;
            *(undefined8 *)(pdVar19 + 4) = *puVar20;
            *(long *)(pdVar19 + 8) = auVar46._8_8_;
            *(undefined8 **)(pdVar19 + 10) = puVar20;
            return pdVar19;
          }
          return pdVar19;
        }
        uVar27 = *(undefined8 *)(lVar31 + 0x10);
        uVar37 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
        puVar20 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                  (uVar37,uVar27,1,0);
        uVar27 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
        pdVar19 = *(dword **)(lVar21 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        lVar21 = 0;
        if (pdVar19 == (dword *)0x0) goto code_r0x0159024c;
        uVar22 = *(undefined8 *)(puVar13 + -0x10);
        uVar45 = *(undefined8 *)(puVar13 + -8);
        uVar27 = *(undefined8 *)(puVar13 + -0x20);
        uVar35 = *(undefined8 *)(puVar13 + -0x18);
        uVar40 = *(undefined8 *)(puVar13 + -0x30);
        uVar38 = *(undefined8 *)(puVar13 + -0x28);
        goto System_Action_Type__bool__TransitionData___Invoke;
      }
      puVar42 = *(undefined1 **)(puVar13 + -0x10);
      puVar44 = *(undefined **)(puVar13 + -8);
      pdVar19 = *(dword **)(puVar13 + -0x20);
      lVar28 = *(long *)(puVar13 + -0x18);
      uVar22 = *(undefined8 *)(puVar13 + -0x30);
      lVar31 = *(long *)(puVar13 + -0x28);
    } while( true );
  }
  uVar22 = 0x3d1feb8;
  *(long *)(pdVar19 + 4) = lVar31;
  pdVar34 = *(dword **)(lVar28 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar28 = 0;
  if (pdVar34 == (dword *)0x0) goto code_r0x0158feec;
  pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
  pdVar26 = (dword *)0x0;
  uVar27 = 0;
  uVar22 = *(undefined8 *)((long)puVar12 + -0x40);
  *(undefined8 *)((long)puVar12 + -0x40) = uVar22;
  *(undefined8 *)((long)puVar12 + -0x38) = *(undefined8 *)((long)puVar12 + -0x38);
  *(undefined8 *)((long)puVar12 + -0x30) = *(undefined8 *)((long)puVar12 + -0x30);
  *(undefined8 *)((long)puVar12 + -0x28) = *(undefined8 *)((long)puVar12 + -0x28);
  *(undefined8 *)((long)puVar12 + -0x20) = *(undefined8 *)((long)puVar12 + -0x20);
  *(undefined8 *)((long)puVar12 + -0x18) = *(undefined8 *)((long)puVar12 + -0x18);
  *(undefined8 *)((long)puVar12 + -0x10) = *(undefined8 *)((long)puVar12 + -0x10);
  *(undefined8 *)((long)puVar12 + -8) = *(undefined8 *)((long)puVar12 + -8);
  puVar42 = (undefined1 *)((long)puVar12 + -0x10);
  pdVar39 = (dword *)0x0;
  pdVar25 = pdVar19;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)puVar12 + -0x48) = 0;
  lVar31 = *(long *)(pdVar34 + 4);
  if (lVar31 == 0) {
    auVar46 = func_0x00f78af4();
    pdVar24 = auVar46._8_8_;
    *(undefined1 **)((long)puVar12 + -0x60) = puVar42;
    *(undefined **)((long)puVar12 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
    lVar31 = *(long *)(auVar46._0_8_ + 0x10);
    if (lVar31 == 0) {
      auVar46 = func_0x00f78af4();
      uVar27 = auVar46._8_8_;
      *(undefined1 **)((long)puVar12 + -0x70) = (undefined1 *)((long)puVar12 + -0x60);
      *(undefined **)((long)puVar12 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
      lVar31 = *(long *)(auVar46._0_8_ + 0x10);
      if (lVar31 != 0) {
        pdVar26 = (dword *)0x0;
        *(undefined8 *)((long)puVar12 + -0x90) = 0;
        *(dword **)((long)puVar12 + -0x88) = pdVar19;
        *(dword **)((long)puVar12 + -0x80) = pdVar34;
        *(dword **)((long)puVar12 + -0x78) = pdVar23;
        *(undefined8 *)((long)puVar12 + -0x70) = *(undefined8 *)((long)puVar12 + -0x70);
        *(undefined8 *)((long)puVar12 + -0x68) = *(undefined8 *)((long)puVar12 + -0x68);
        if ((bRam0000000003ebc64b & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar28 = *(long *)(lVar31 + 0x70);
        if (lVar28 != 0) {
          lVar21 = lVar28;
          if (*(uint *)(lVar28 + 0x18) <= auVar46._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar21 = *(long *)(lVar31 + 0x70);
          }
          if (lVar21 != 0) {
            lVar28 = *(long *)(lVar28 + 0x10) + (long)(int)auVar46._8_4_ * 0x28;
            uVar37 = *(undefined8 *)(lVar28 + 0x28);
            uVar22 = *(undefined8 *)(lVar28 + 0x20);
            uVar2 = *(undefined4 *)(lVar28 + 0x42);
            *(undefined4 *)((long)puVar12 + -0xd8) = uVar2;
            uVar5 = *(undefined2 *)(lVar28 + 0x46);
            *(undefined2 *)((long)puVar12 + -0xd4) = uVar5;
            *(undefined8 *)((long)puVar12 + -200) = uVar37;
            *(undefined8 *)((long)puVar12 + -0xd0) = uVar22;
            *(undefined8 *)((long)puVar12 + -0xb8) = uVar37;
            *(undefined8 *)((long)puVar12 + -0xc0) = uVar22;
            *(undefined8 *)((long)puVar12 + -0xb0) = 0;
            *(undefined8 *)((long)puVar12 + -0xa8) = 0;
            *(undefined2 *)((long)puVar12 + -0xa0) = 1;
            *(undefined4 *)((long)puVar12 + -0x9e) = uVar2;
            *(undefined2 *)((long)puVar12 + -0x9a) = uVar5;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,uVar27,(undefined1 *)((long)puVar12 + -0xc0),uRam0000000003d3ddd0
                           );
            pdVar19 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar31,uVar27);
            return pdVar19;
          }
        }
        auVar46 = func_0x00f78af4();
        pdVar24 = auVar46._8_8_;
        puVar14 = (undefined1 *)((long)puVar12 + -0x110);
        *(undefined8 *)((long)puVar12 + -0x110) = 0;
        *(long *)((long)puVar12 + -0x108) = lVar28;
        *(long *)((long)puVar12 + -0x100) = lVar31;
        *(undefined8 *)((long)puVar12 + -0xf8) = uVar27;
        *(undefined1 **)((long)puVar12 + -0xf0) = (undefined1 *)((long)puVar12 + -0x70);
        *(undefined **)((long)puVar12 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
        puVar42 = (undefined1 *)((long)puVar12 + -0xf0);
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar31 = *(long *)(auVar46._0_8_ + 0x70);
        if (lVar31 != 0) {
          if (*(uint *)(lVar31 + 0x18) <= auVar46._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)auVar46._8_4_ * 0x28 + 0x28);
          if (lVar31 == 0) {
            pdVar19 = (dword *)0x0;
          }
          else {
            pdVar19 = *(dword **)(lVar31 + 0x40);
          }
          return pdVar19;
        }
        puVar44 = &Core_UI2_UIScreen__ForceExit;
        pdVar23 = (dword *)func_0x00f78af4();
        pdVar34 = (dword *)0x0;
        pdVar19 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar46 = func_0x00f78af4();
      pdVar24 = auVar46._8_8_;
      *(undefined1 **)((long)puVar12 + -0x80) = (undefined1 *)((long)puVar12 + -0x70);
      *(undefined **)((long)puVar12 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
      lVar31 = *(long *)(auVar46._0_8_ + 0x10);
      auVar46._8_8_ = pdVar19;
      auVar46._0_8_ = lVar31;
      if (lVar31 != 0) {
        pdVar26 = (dword *)0x0;
        puVar7 = (undefined1 *)((long)puVar12 + -0x70);
        puVar42 = *(undefined1 **)((long)puVar12 + -0x80);
        puVar44 = *(undefined **)((long)puVar12 + -0x78);
        pdVar19 = pdVar34;
        goto code_r0x02f877a8;
      }
      auVar46 = func_0x00f78af4();
      *(undefined1 **)((long)puVar12 + -0x90) = (undefined1 *)((long)puVar12 + -0x80);
      *(undefined **)((long)puVar12 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar31 = *(long *)(auVar46._0_8_ + 0x10);
      auVar46._8_8_ = auVar46._8_8_;
      auVar46._0_8_ = lVar31;
      if (lVar31 != 0) {
        puVar8 = (undefined1 *)((long)puVar12 + -0x80);
        puVar42 = *(undefined1 **)((long)puVar12 + -0x90);
        puVar44 = *(undefined **)((long)puVar12 + -0x88);
        pdVar24 = pdVar26;
        goto code_r0x02f883b0;
      }
      auVar46 = func_0x00f78af4();
      *(undefined1 **)((long)puVar12 + -0xa0) = (undefined1 *)((long)puVar12 + -0x90);
      *(undefined **)((long)puVar12 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar31 = *(long *)(auVar46._0_8_ + 0x10);
      if (lVar31 == 0) {
        auVar46 = func_0x00f78af4();
        *(undefined1 **)((long)puVar12 + -0xb0) = (undefined1 *)((long)puVar12 + -0xa0);
        *(undefined **)((long)puVar12 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
        lVar31 = *(long *)(auVar46._0_8_ + 0x10);
        auVar47._8_8_ = auVar46._8_8_;
        auVar47._0_8_ = lVar31;
        if (lVar31 != 0) {
          pdVar25 = (dword *)0x0;
          puVar9 = (undefined1 *)((long)puVar12 + -0xa0);
          puVar42 = *(undefined1 **)((long)puVar12 + -0xb0);
          puVar44 = *(undefined **)((long)puVar12 + -0xa8);
          goto code_r0x02f884dc;
        }
        auVar46 = func_0x00f78af4();
        *(undefined1 **)((long)puVar12 + -0xc0) = (undefined1 *)((long)puVar12 + -0xb0);
        *(undefined **)((long)puVar12 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
        lVar31 = *(long *)(auVar46._0_8_ + 0x10);
        auVar48._8_8_ = auVar46._8_8_;
        auVar48._0_8_ = lVar31;
        if (lVar31 == 0) {
          auVar46 = func_0x00f78af4();
          *(undefined1 **)((long)puVar12 + -0xd0) = (undefined1 *)((long)puVar12 + -0xc0);
          *(undefined **)((long)puVar12 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar31 = *(long *)(auVar46._0_8_ + 0x10);
          auVar49._8_8_ = auVar46._8_8_;
          auVar49._0_8_ = lVar31;
          if (lVar31 == 0) {
            pdVar39 = (dword *)func_0x00f78af4();
            *(undefined8 *)((long)puVar12 + -0x100) = 0;
            *(dword **)((long)puVar12 + -0xf8) = pdVar19;
            *(dword **)((long)puVar12 + -0xf0) = pdVar34;
            *(dword **)((long)puVar12 + -0xe8) = pdVar23;
            *(undefined1 **)((long)puVar12 + -0xe0) = (undefined1 *)((long)puVar12 + -0xd0);
            *(undefined **)((long)puVar12 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar22 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar22,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar39 + 0xc) = uVar22;
            return pdVar39;
          }
          puVar11 = (undefined1 *)((long)puVar12 + -0xc0);
          puVar42 = *(undefined1 **)((long)puVar12 + -0xd0);
          puVar44 = *(undefined **)((long)puVar12 + -200);
          goto code_r0x02f88674;
        }
        puVar10 = (undefined1 *)((long)puVar12 + -0xb0);
        puVar42 = *(undefined1 **)((long)puVar12 + -0xc0);
        puVar44 = *(undefined **)((long)puVar12 + -0xb8);
        pdVar25 = pdVar26;
        pdVar39 = pdVar19;
      }
      else {
        pdVar25 = (dword *)0x0;
        puVar9 = (undefined1 *)((long)puVar12 + -0xc0);
        *(undefined8 *)((long)puVar12 + -0xc0) = 0;
        *(dword **)((long)puVar12 + -0xb8) = pdVar19;
        *(dword **)((long)puVar12 + -0xb0) = pdVar34;
        *(dword **)((long)puVar12 + -0xa8) = pdVar23;
        *(undefined8 *)((long)puVar12 + -0xa0) = *(undefined8 *)((long)puVar12 + -0xa0);
        *(undefined8 *)((long)puVar12 + -0x98) = *(undefined8 *)((long)puVar12 + -0x98);
        puVar42 = (undefined1 *)((long)puVar12 + -0xa0);
        pdVar19 = (dword *)0x3ebc000;
        if ((bRam0000000003ebc64f & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar33 = auVar46._8_4_;
        if (((int)uVar33 < 0) || (*(int *)(lVar31 + 0x50) <= (int)uVar33)) {
          return (dword *)0x0;
        }
        lVar31 = *(long *)(lVar31 + 0x70);
        if (lVar31 != 0) {
          if (*(uint *)(lVar31 + 0x18) <= uVar33) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar28 = *(long *)(lVar31 + 0x10) + ((ulong)auVar46._8_8_ & 0xffffffff) * 0x28;
          lVar31 = *(long *)(lVar28 + 0x28);
          cVar3 = *(char *)(lVar28 + 0x40);
          iVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar28 + 0x30),0);
          if (iVar16 == 0 || cVar3 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar31 != 0) && (*(int *)(lVar31 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar44 = &Core_UI2_UIManager__GetLayerState;
        auVar47 = func_0x00f78af4();
        pdVar34 = (dword *)0x0;
        pdVar23 = auVar46._8_8_;
code_r0x02f884dc:
        puVar10 = puVar9 + -0x30;
        *(undefined8 *)(puVar9 + -0x30) = 0;
        *(dword **)(puVar9 + -0x28) = pdVar19;
        *(dword **)(puVar9 + -0x20) = pdVar34;
        *(dword **)(puVar9 + -0x18) = pdVar23;
        *(undefined1 **)(puVar9 + -0x10) = puVar42;
        *(undefined **)(puVar9 + -8) = puVar44;
        puVar42 = puVar9 + -0x10;
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar31 = *(long *)(auVar47._0_8_ + 0x70);
        if (lVar31 != 0) {
          if (*(uint *)(lVar31 + 0x18) <= auVar47._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)auVar47._8_4_ * 0x28 + 0x28);
          if (lVar31 == 0) {
            pdVar19 = &MACH_HEADER.cputype;
          }
          else {
            pdVar19 = (dword *)(ulong)*(uint *)(lVar31 + 0x4c);
          }
          return pdVar19;
        }
        puVar44 = &Core_UI2_UIManager__EnableInput;
        auVar48 = func_0x00f78af4();
        pdVar34 = (dword *)0x0;
        pdVar23 = auVar47._8_8_;
        pdVar39 = (dword *)0x3ebc000;
      }
      pdVar24 = auVar48._8_8_;
      pdVar19 = auVar48._0_8_;
      puVar11 = puVar10 + -0x40;
      *(undefined8 *)(puVar10 + -0x40) = uVar22;
      *(undefined8 *)(puVar10 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar10 + -0x30) = 0;
      *(dword **)(puVar10 + -0x28) = pdVar39;
      *(dword **)(puVar10 + -0x20) = pdVar34;
      *(dword **)(puVar10 + -0x18) = pdVar23;
      *(undefined1 **)(puVar10 + -0x10) = puVar42;
      *(undefined **)(puVar10 + -8) = puVar44;
      puVar42 = puVar10 + -0x10;
      pdVar39 = (dword *)0x3ebc000;
      pdVar26 = pdVar25;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar19 + 0x1a) != 0) {
        pdVar26 = (dword *)(ulong)((uint)pdVar25 ^ 1);
        pdVar34 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar19 + 0x1a),pdVar24,pdVar26,0);
        lVar31 = *(long *)(pdVar19 + 0x1c);
        pdVar39 = (dword *)0x0;
        if (lVar31 != 0) {
          uVar33 = auVar48._8_4_;
          if (*(uint *)(lVar31 + 0x18) <= uVar33) {
            pdVar34 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar31 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) ||
             (pdVar39 = *(dword **)(pdVar19 + 0xc), pdVar39 == (dword *)0x0)) {
            return pdVar34;
          }
          lVar31 = *(long *)(pdVar19 + 0x1c);
          pdVar19 = (dword *)0x0;
          if (lVar31 != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar33) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar18 = *(long **)(*(long *)(lVar31 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
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
            *(dword **)(puVar10 + -0x68) = pdVar39;
            lVar31 = *(long *)(pdVar39 + 0x1a);
            if (lVar31 == 0) {
              puVar42 = puVar10 + -0x68;
              lVar28 = 1;
            }
            else {
              lVar28 = *(long *)(lVar31 + 0x18);
              if (lVar28 == 0) {
                return pdVar39;
              }
              puVar42 = (undefined1 *)(lVar31 + 0x20);
            }
            lVar31 = 0;
            goto code_r0x01e71a74;
          }
        }
      }
      puVar44 = &Core_UI2_UIManager__SetScreenVisible;
      auVar49 = func_0x00f78af4();
      pdVar23 = pdVar25;
      pdVar34 = pdVar24;
code_r0x02f88674:
      pdVar25 = auVar49._0_8_;
      *(dword **)(puVar11 + -0x30) = pdVar39;
      *(dword **)(puVar11 + -0x28) = pdVar19;
      *(dword **)(puVar11 + -0x20) = pdVar34;
      *(dword **)(puVar11 + -0x18) = pdVar23;
      *(undefined1 **)(puVar11 + -0x10) = puVar42;
      *(undefined **)(puVar11 + -8) = puVar44;
      pdVar19 = pdVar25;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar19 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar31 = *(long *)(pdVar25 + 0x1c);
      if (lVar31 != 0) {
        uVar33 = auVar49._8_4_;
        if (*(uint *)(lVar31 + 0x18) <= uVar33) {
          pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar31 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28) == 0) {
          return pdVar19;
        }
        lVar31 = *(long *)(pdVar25 + 0x1c);
        if (lVar31 != 0) {
          if (*(uint *)(lVar31 + 0x18) <= uVar33) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar31 = *(long *)(*(long *)(lVar31 + 0x10) + (long)(int)uVar33 * 0x28 + 0x28);
          if ((lVar31 != 0) && (plVar18 = *(long **)(lVar31 + 0x28), plVar18 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar19 = (dword *)(**(code **)(*plVar18 + 0x178))
                                         (plVar18,pdVar26,*(undefined8 *)(*plVar18 + 0x180));
            return pdVar19;
          }
        }
      }
      auVar46 = func_0x00f78af4();
      uVar22 = auVar46._0_8_;
      *(long *)(puVar11 + -0x50) = auVar49._8_8_;
      *(dword **)(puVar11 + -0x48) = pdVar26;
      *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar11 + -0x68) = 0;
      *(undefined8 *)(puVar11 + -0x70) = 0;
      *(undefined8 *)(puVar11 + -0x58) = 0;
      *(undefined8 *)(puVar11 + -0x60) = 0;
      pdVar19 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar22,auVar46._8_8_,puVar11 + -0x70);
      if ((int)pdVar19 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar22,*(undefined8 *)(puVar11 + -0x60),*(undefined8 *)(puVar11 + -0x58));
        *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x68);
        *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x70);
        *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x58);
        *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x60);
        pdVar19 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar22,puVar11 + -0x90,1);
      }
      return pdVar19;
    }
    puVar42 = *(undefined1 **)((long)puVar12 + -0x60);
    puVar44 = *(undefined **)((long)puVar12 + -0x58);
  }
  else {
    pdVar26 = (dword *)0x0;
    uVar27 = 0;
    puVar44 = &UNK_01470820;
    pdVar24 = pdVar23;
    pdVar25 = pdVar19;
  }
  *(undefined8 *)((long)puVar12 + -0x90) = uVar22;
  *(undefined8 *)((long)puVar12 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)puVar12 + -0x80) = 0;
  *(dword **)((long)puVar12 + -0x78) = pdVar19;
  *(dword **)((long)puVar12 + -0x70) = pdVar34;
  *(dword **)((long)puVar12 + -0x68) = pdVar23;
  *(undefined1 **)((long)puVar12 + -0x60) = puVar42;
  *(undefined **)((long)puVar12 + -0x58) = puVar44;
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  *(undefined8 *)((long)puVar12 + -0x130) = unaff_x26;
  *(undefined8 *)((long)puVar12 + -0x128) = unaff_x25;
  *(undefined8 *)((long)puVar12 + -0x120) = 0x3ebc000;
  *(dword **)((long)puVar12 + -0x118) = pdVar24;
  *(dword **)((long)puVar12 + -0x110) = pdVar25;
  *(undefined8 *)((long)puVar12 + -0x108) = uVar27;
  *(long *)((long)puVar12 + -0x100) = lVar31;
  *(dword **)((long)puVar12 + -0xf8) = pdVar26;
  *(undefined1 **)((long)puVar12 + -0xf0) = (undefined1 *)((long)puVar12 + -0x60);
  *(undefined **)((long)puVar12 + -0xe8) = &UNK_02f87f9c;
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar28 = *(long *)(lVar31 + 0x78);
  if (lVar28 == 0) goto code_r0x02f8812c;
  iVar16 = *(int *)(lVar28 + 0x18);
  if (iVar16 < 1) {
    return (dword *)0x0;
  }
  iVar17 = 1;
  pdVar19 = (dword *)((long)&MACH_HEADER.magic + 1);
  goto code_r0x02f880d0;
code_r0x015900e8:
  ppuVar43 = *(undefined1 ***)(puVar13 + -0x50);
  puVar44 = *(undefined **)(puVar13 + -0x48);
  uVar36 = *(ulong *)(puVar13 + -0x60);
  lVar31 = *(long *)(puVar13 + -0x58);
  puVar12 = (ulong *)(puVar13 + -0x40);
  unaff_x22 = *(undefined8 *)(puVar13 + -0x70);
  unaff_x21 = *(undefined8 *)(puVar13 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar21 = *(long *)(puVar42 + lVar31 * 8);
  pcVar41 = *(code **)(lVar21 + 0x10);
  plVar1 = *(long **)(lVar21 + 0x20);
  lVar21 = *(long *)(lVar21 + 0x28);
  if (*(short *)(lVar21 + 0x48) == -1) {
    func_0x00f78ad8(lVar21);
  }
  iVar16 = func_0x00f78a4c(lVar21);
  bVar15 = *(char *)(lVar21 + 0x4a) == '\x03';
  if (iVar16 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar34 = (dword *)(*pcVar41)(plVar18,0,uVar37,lVar21);
      }
      else {
        if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar19 + 6) == 0)) goto code_r0x01e7162c;
        iVar16 = func_0x00f78a44(lVar21);
        iVar17 = func_0x00f78ec0(lVar21);
        if (iVar16 == 0) {
          uVar4 = *(ushort *)(lVar21 + 0x48);
          if (iVar17 == 0) {
            lVar21 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar34 = (dword *)(**(code **)(lVar21 + 0x138))
                                         (plVar1,plVar18,0,uVar37,*(undefined8 *)(lVar21 + 0x140));
            goto code_r0x01e71750;
          }
          lVar21 = func_0x00f78a48(lVar21);
          lVar30 = *plVar1;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar36 != 0) {
            piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar21) {
                puVar20 = (undefined8 *)
                          (lVar30 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar32 = piVar32 + 4;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar21,(ulong)uVar4);
code_r0x01e718f4:
          pcVar41 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar17 == 0) {
            uVar22 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar30 = *plVar1;
            uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
            if (uVar36 != 0) {
              piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar21 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar32 = piVar32 + 4;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
            lVar30 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar22 = *(undefined8 *)(lVar30 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar22,lVar21);
          pcVar41 = (code *)*puVar20;
        }
        pdVar34 = (dword *)(*pcVar41)(plVar1,plVar18,0,uVar37,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(pdVar19 + 6) == 0)) goto code_r0x01e7173c;
      iVar16 = func_0x00f78a44(lVar21);
      iVar17 = func_0x00f78ec0(lVar21);
      if (iVar16 == 0) {
        uVar4 = *(ushort *)(lVar21 + 0x48);
        if (iVar17 == 0) {
          lVar21 = *plVar18 + (ulong)uVar4 * 0x10;
          pdVar34 = (dword *)(**(code **)(lVar21 + 0x138))
                                       (plVar18,0,uVar37,*(undefined8 *)(lVar21 + 0x140));
          goto code_r0x01e71750;
        }
        lVar21 = func_0x00f78a48(lVar21);
        lVar30 = *plVar18;
        uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
        if (uVar36 != 0) {
          piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar21) {
              puVar20 = (undefined8 *)(lVar30 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar32 = piVar32 + 4;
            uVar36 = uVar36 - 1;
          } while (uVar36 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar18,lVar21,(ulong)uVar4);
code_r0x01e71880:
        pcVar41 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar17 == 0) {
          uVar22 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar30 = *plVar18;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar36 != 0) {
            piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)(lVar21 + 0x18)) {
                lVar30 = lVar30 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar32 = piVar32 + 4;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          lVar30 = func_0x00fac1f0(plVar18);
code_r0x01e71858:
          uVar22 = *(undefined8 *)(lVar30 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar22,lVar21);
        pcVar41 = (code *)*puVar20;
      }
      pdVar34 = (dword *)(*pcVar41)(plVar18,0,uVar37,puVar20);
    }
  }
  else {
    if (bVar15) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar34 = (dword *)(*pcVar41)(plVar1,plVar18,0,uVar37,lVar21);
  }
code_r0x01e71750:
  lVar31 = lVar31 + 1;
  if (lVar31 == lVar28) {
    return pdVar34;
  }
  goto code_r0x01e715f4;
code_r0x02f883b0:
  puVar7 = puVar8 + -0x30;
  *(dword **)(puVar8 + -0x30) = pdVar39;
  *(dword **)(puVar8 + -0x28) = pdVar19;
  *(dword **)(puVar8 + -0x20) = pdVar34;
  *(dword **)(puVar8 + -0x18) = pdVar23;
  *(undefined1 **)(puVar8 + -0x10) = puVar42;
  *(undefined **)(puVar8 + -8) = puVar44;
  puVar42 = puVar8 + -0x10;
  puVar44 = &UNK_02f883d8;
  pdVar26 = pdVar24;
  pdVar23 = pdVar25;
  pdVar19 = pdVar24;
  pdVar39 = auVar46._0_8_;
code_r0x02f877a8:
  pdVar34 = auVar46._0_8_;
  puVar14 = puVar7 + -0x60;
  *(dword **)(puVar7 + -0x30) = pdVar39;
  *(long *)(puVar7 + -0x28) = auVar46._8_8_;
  *(dword **)(puVar7 + -0x20) = pdVar19;
  *(dword **)(puVar7 + -0x18) = pdVar23;
  *(undefined1 **)(puVar7 + -0x10) = puVar42;
  *(undefined **)(puVar7 + -8) = puVar44;
  puVar42 = puVar7 + -0x10;
  pdVar19 = pdVar34;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar33 = (uint)pdVar24;
  if (((int)uVar33 < 0) || ((int)*(long *)(pdVar34 + 0x14) <= (int)uVar33)) {
    return pdVar19;
  }
  lVar31 = *(long *)(pdVar34 + 0x1c);
  if (lVar31 == 0) {
code_r0x02f878a4:
    lVar31 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
    *(dword **)(puVar7 + -0x90) = pdVar39;
    *(undefined8 *)(puVar7 + -0x88) = 0;
    *(dword **)(puVar7 + -0x80) = pdVar34;
    *(dword **)(puVar7 + -0x78) = pdVar24;
    *(undefined1 **)(puVar7 + -0x70) = puVar42;
    *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar22 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar22,0);
    if (0 < *(int *)(lVar31 + 0x50)) {
      iVar16 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar31,iVar16);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar31,iVar16);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar31 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar31);
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
    pdVar19 = (dword *)(*pcRam0000000003ec05a0)(uVar22);
    return pdVar19;
  }
  if (*(uint *)(lVar31 + 0x18) <= uVar33) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar31 = *(long *)(lVar31 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
  pdVar39 = *(dword **)(lVar31 + 0x20);
  pdVar23 = *(dword **)(lVar31 + 0x28);
  *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar31 + 0x42);
  *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar31 + 0x46);
  if (pdVar23 == (dword *)0x0) {
    lVar31 = *(long *)(pdVar34 + 0x1c);
    if (lVar31 != 0) {
      *(dword **)(puVar7 + -0x58) = pdVar39;
      *(undefined8 *)(puVar7 + -0x50) = 0;
      *(undefined8 *)(puVar7 + -0x48) = 0;
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined2 *)(puVar7 + -0x38) = 0;
      *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
      *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
      pdVar19 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar31,pdVar24,puVar7 + -0x58,uRam0000000003d3ddd0);
      return pdVar19;
    }
    goto code_r0x02f878a4;
  }
  puVar44 = &UNK_02f87848;
  pdVar19 = pdVar23;
code_r0x02f882d8:
  *(dword **)(puVar14 + -0x20) = pdVar34;
  *(dword **)(puVar14 + -0x18) = pdVar24;
  *(undefined1 **)(puVar14 + -0x10) = puVar42;
  *(undefined **)(puVar14 + -8) = puVar44;
  (**(code **)(*(long *)pdVar23 + 0x218))(pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
  if (*(long *)(pdVar23 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
    pdVar23[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar19 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                 (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
    return pdVar19;
  }
  func_0x00f78af4();
  puVar8 = puVar14 + -0x40;
  *(dword **)(puVar14 + -0x40) = pdVar34;
  *(dword **)(puVar14 + -0x38) = pdVar23;
  *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
  *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar42 = puVar14 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar31 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar22 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar22,lVar31);
    pdVar19 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar19;
  }
  puVar44 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar46 = func_0x00f78af4();
  pdVar24 = pdVar26;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar21 = *(long *)(puVar42 + lVar31 * 8);
  pcVar41 = *(code **)(lVar21 + 0x10);
  plVar1 = *(long **)(lVar21 + 0x20);
  lVar21 = *(long *)(lVar21 + 0x28);
  if (*(short *)(lVar21 + 0x48) == -1) {
    func_0x00f78ad8(lVar21);
  }
  iVar16 = func_0x00f78a4c(lVar21);
  bVar15 = *(char *)(lVar21 + 0x4a) == '\x03';
  if (iVar16 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar19 = (dword *)(*pcVar41)(plVar18,pdVar24,pdVar25,lVar21);
      }
      else {
        if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar39 + 6) == 0)) goto code_r0x01e71aac;
        iVar16 = func_0x00f78a44(lVar21);
        iVar17 = func_0x00f78ec0(lVar21);
        if (iVar16 == 0) {
          uVar4 = *(ushort *)(lVar21 + 0x48);
          if (iVar17 == 0) {
            lVar21 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar19 = (dword *)(**(code **)(lVar21 + 0x138))
                                         (plVar1,plVar18,pdVar24,pdVar25,
                                          *(undefined8 *)(lVar21 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar21 = func_0x00f78a48(lVar21);
          lVar30 = *plVar1;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar36 != 0) {
            piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == lVar21) {
                puVar20 = (undefined8 *)
                          (lVar30 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar32 = piVar32 + 4;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar21,(ulong)uVar4);
code_r0x01e71d74:
          pcVar41 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar17 == 0) {
            uVar22 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar30 = *plVar1;
            uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
            if (uVar36 != 0) {
              piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar32 + -2) == *(long *)(lVar21 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar32 = piVar32 + 4;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
            lVar30 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar22 = *(undefined8 *)(lVar30 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar22,lVar21);
          pcVar41 = (code *)*puVar20;
        }
        pdVar19 = (dword *)(*pcVar41)(plVar1,plVar18,pdVar24,pdVar25,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(pdVar39 + 6) == 0)) goto code_r0x01e71bbc;
      iVar16 = func_0x00f78a44(lVar21);
      iVar17 = func_0x00f78ec0(lVar21);
      if (iVar16 == 0) {
        uVar4 = *(ushort *)(lVar21 + 0x48);
        if (iVar17 == 0) {
          lVar21 = *plVar18 + (ulong)uVar4 * 0x10;
          pdVar19 = (dword *)(**(code **)(lVar21 + 0x138))
                                       (plVar18,pdVar24,pdVar25,*(undefined8 *)(lVar21 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar21 = func_0x00f78a48(lVar21);
        lVar30 = *plVar18;
        uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
        if (uVar36 != 0) {
          piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == lVar21) {
              puVar20 = (undefined8 *)(lVar30 + (long)(int)(*piVar32 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar32 = piVar32 + 4;
            uVar36 = uVar36 - 1;
          } while (uVar36 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar18,lVar21,(ulong)uVar4);
code_r0x01e71d00:
        pcVar41 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar17 == 0) {
          uVar22 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar30 = *plVar18;
          uVar36 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar36 != 0) {
            piVar32 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)(lVar21 + 0x18)) {
                lVar30 = lVar30 + (long)(int)(*piVar32 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar32 = piVar32 + 4;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          lVar30 = func_0x00fac1f0(plVar18);
code_r0x01e71cd8:
          uVar22 = *(undefined8 *)(lVar30 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar22,lVar21);
        pcVar41 = (code *)*puVar20;
      }
      pdVar19 = (dword *)(*pcVar41)(plVar18,pdVar24,pdVar25,puVar20);
    }
  }
  else {
    if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar19 = (dword *)(*pcVar41)(plVar1,plVar18,pdVar24,pdVar25,lVar21);
  }
code_r0x01e71bd0:
  lVar31 = lVar31 + 1;
  if (lVar31 == lVar28) {
    return pdVar19;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar36 = /*System.String$$Equals*/ func_0x029caa48(lVar28,pdVar24,5,0);
    if ((uVar36 & 1) != 0) {
      return pdVar19;
    }
    pdVar19 = (dword *)(ulong)(iVar17 < iVar16);
    if (iVar16 == iVar17) {
      return pdVar19;
    }
    lVar28 = *(long *)(lVar31 + 0x78);
    iVar17 = iVar17 + 1;
    if (lVar28 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar28 + 0x18) <= iVar17 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0x10) + (long)(int)(iVar17 - 1U) * 0x20 + 0x20);
    if (lVar28 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x158fda0 | Atlas.Contexts.FrontEndContextPostQuickPlayState.ShowPostEventScreen
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowPostEventScreen(long param_1)

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
  undefined1 *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  dword *pdVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  dword *pdVar24;
  long *extraout_x1;
  dword *pdVar25;
  long *plVar26;
  dword *pdVar27;
  dword *pdVar28;
  undefined8 uVar29;
  long lVar30;
  int *piVar31;
  uint uVar32;
  dword *pdVar33;
  undefined8 uVar34;
  undefined8 unaff_x20;
  undefined8 uVar35;
  undefined8 unaff_x21;
  undefined8 uVar36;
  dword *pdVar37;
  undefined8 unaff_x22;
  undefined8 uVar38;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar39;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar40;
  undefined8 unaff_x28;
  undefined *puVar41;
  undefined8 uVar42;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  puVar11 = &stack0xffffffffffffffe0;
  puVar40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    pdVar17 = (dword *)/*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(param_1 + 0xa0),1,0,0,0,0);
    *(undefined1 *)(param_1 + 200) = 1;
    return pdVar17;
  }
  puVar41 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen;
  lVar18 = func_0x00f78af4();
code_r0x0158fde8:
  puVar12 = puVar11 + -0x40;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar11 + -0x20) = unaff_x20;
  *(long *)(puVar11 + -0x18) = param_1;
  *(undefined1 **)(puVar11 + -0x10) = puVar40;
  *(undefined **)(puVar11 + -8) = puVar41;
  puVar40 = puVar11 + -0x10;
  unaff_x23 = 0x3d28bc0;
  uVar23 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar17,0);
  lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar20 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar19,lVar18,puRam0000000003d56c98,0);
  if (pdVar17 == (dword *)0x0) {
code_r0x0158feec:
    puVar41 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
    lVar22 = func_0x00f78af4();
    do {
      *(undefined8 *)(puVar12 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar12 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar12 + -0x30) = uVar23;
      *(long *)(puVar12 + -0x28) = lVar19;
      *(dword **)(puVar12 + -0x20) = pdVar17;
      *(long *)(puVar12 + -0x18) = lVar18;
      *(undefined1 **)(puVar12 + -0x10) = puVar40;
      *(undefined **)(puVar12 + -8) = puVar41;
      uVar35 = 0x3eb5000;
      uVar29 = 0x3d40598;
      if ((bRam0000000003eb5135 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c0);
        func_0x00f78a20(0x3d27618);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5135 = 1;
      }
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar22,uRam0000000003d40598);
      if (lVar18 != 0) {
        lVar18 = *(long *)(lVar18 + 0x10);
        uVar29 = 0;
        if (lVar18 == 0) goto code_r0x0159003c;
        unaff_x23 = 0x3d194c0;
        uVar23 = 0x3d25458;
        uVar29 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        *(undefined8 *)(lVar18 + 0x20) = uVar29;
        if (*(int *)(lVar18 + 0x10) == 2) {
          *(undefined8 *)(lVar18 + 0x18) = uVar29;
        }
        uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
        puVar20 = (undefined8 *)0x0;
        Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                  (uVar35,lVar18);
        uVar29 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
        pdVar17 = *(dword **)(lVar22 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar26 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar29,0);
        lVar22 = 0;
        if (pdVar17 == (dword *)0x0) goto code_r0x0159003c;
        uVar23 = *(undefined8 *)(puVar12 + -0x10);
        uVar42 = *(undefined8 *)(puVar12 + -8);
        uVar29 = *(undefined8 *)(puVar12 + -0x20);
        uVar34 = *(undefined8 *)(puVar12 + -0x18);
        uVar38 = *(undefined8 *)(puVar12 + -0x30);
        uVar36 = *(undefined8 *)(puVar12 + -0x28);
        unaff_x24 = *(undefined8 *)(puVar12 + -0x40);
        unaff_x23 = *(undefined8 *)(puVar12 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
        *(undefined8 *)(puVar12 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar12 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar12 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar12 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar12 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar12 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar12 + -0x30) = uVar38;
        *(undefined8 *)(puVar12 + -0x28) = uVar36;
        *(undefined8 *)(puVar12 + -0x20) = uVar29;
        *(undefined8 *)(puVar12 + -0x18) = uVar34;
        *(undefined8 *)(puVar12 + -0x10) = uVar23;
        *(undefined8 *)(puVar12 + -8) = uVar42;
        *(dword **)(puVar12 + -0x68) = pdVar17;
        lVar18 = *(long *)(pdVar17 + 0x1a);
        if (lVar18 == 0) {
          puVar40 = puVar12 + -0x68;
          lVar19 = 1;
        }
        else {
          lVar19 = *(long *)(lVar18 + 0x18);
          if (lVar19 == 0) {
            return pdVar17;
          }
          puVar40 = (undefined1 *)(lVar18 + 0x20);
        }
        lVar18 = 0;
        goto code_r0x01e715f4;
      }
code_r0x0159003c:
      lVar18 = func_0x00f78af4();
      *(undefined8 *)(puVar12 + -0x70) = uVar23;
      *(undefined8 *)(puVar12 + -0x68) = uVar29;
      *(undefined8 *)(puVar12 + -0x60) = uVar35;
      *(long *)(puVar12 + -0x58) = lVar22;
      *(undefined1 **)(puVar12 + -0x50) = puVar12 + -0x10;
      *(undefined **)(puVar12 + -0x48) =
           &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
      puVar40 = puVar12 + -0x50;
      uVar35 = 0x3eb5000;
      if ((bRam0000000003eb5136 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5136 = 1;
      }
      if (*(long *)(lVar18 + 0xa8) == 0) {
code_r0x01590110:
        puVar41 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
        lVar22 = func_0x00f78af4();
        puVar12 = puVar12 + -0x70;
      }
      else {
        uVar29 = 0x3d23000;
        uVar35 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar18 + 0xa8),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar20 = (undefined8 *)0x0;
        iVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar35,0);
        if (iVar16 != 0) {
          if (*(long *)(lVar18 + 0xa8) == 0) goto code_r0x01590110;
          uVar21 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(lVar18 + 0xa8),0);
          if ((uVar21 & 1) == 0) {
            if (*(long *)(lVar18 + 0xb0) == 0) goto code_r0x01590110;
            puVar20 = (undefined8 *)0x0;
            iVar16 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(lVar18 + 0xb0),2);
            if (iVar16 != 0) goto code_r0x015900e8;
          }
        }
        puVar40 = *(undefined1 **)(puVar12 + -0x50);
        puVar41 = *(undefined **)(puVar12 + -0x48);
        uVar35 = *(undefined8 *)(puVar12 + -0x60);
        plVar26 = (long *)(puVar12 + -0x58);
        uVar23 = *(undefined8 *)(puVar12 + -0x70);
        uVar29 = *(undefined8 *)(puVar12 + -0x68);
        puVar12 = puVar12 + -0x40;
        lVar22 = lVar18;
        lVar18 = *plVar26;
      }
      *(undefined8 *)(puVar12 + -0x30) = uVar23;
      *(undefined8 *)(puVar12 + -0x28) = uVar29;
      *(undefined8 *)(puVar12 + -0x20) = uVar35;
      *(long *)(puVar12 + -0x18) = lVar18;
      *(undefined1 **)(puVar12 + -0x10) = puVar40;
      *(undefined **)(puVar12 + -8) = puVar41;
      uVar35 = 0x3eb5000;
      if ((bRam0000000003eb5137 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c8);
        func_0x00f78a20(0x3d27628);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5137 = 1;
      }
      if (*(long *)(lVar22 + 0xb8) == 0) goto code_r0x0159024c;
      iVar16 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar22 + 0xb8),0);
      if (iVar16 == 0) {
        lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar22,uRam0000000003d40598);
        if (lVar18 == 0) {
code_r0x0159024c:
          pdVar17 = (dword *)func_0x00f78af4();
          *(undefined8 *)(puVar12 + -0x60) = uVar23;
          *(undefined8 *)(puVar12 + -0x58) = uVar29;
          *(undefined8 *)(puVar12 + -0x50) = uVar35;
          *(long *)(puVar12 + -0x48) = lVar22;
          *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
          *(undefined **)(puVar12 + -0x38) =
               &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
          if ((bRam0000000003eb5138 & 1) == 0) {
            func_0x00f78a20(0x3d40590);
            bRam0000000003eb5138 = 1;
          }
          if (pdVar17 == (dword *)0x0) {
            *(undefined8 *)(puVar12 + -0x40) = *(undefined8 *)(puVar12 + -0x40);
            *(undefined8 *)(puVar12 + -0x38) = *(undefined8 *)(puVar12 + -0x38);
            auVar43 = func_0x00f78af4(0,uRam0000000003d40590);
            pdVar17 = auVar43._0_8_;
            *(undefined8 *)(pdVar17 + 4) = *puVar20;
            *(long *)(pdVar17 + 8) = auVar43._8_8_;
            *(undefined8 **)(pdVar17 + 10) = puVar20;
            return pdVar17;
          }
          return pdVar17;
        }
        uVar29 = *(undefined8 *)(lVar18 + 0x10);
        uVar35 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
        puVar20 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                  (uVar35,uVar29,1,0);
        uVar29 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
        pdVar17 = *(dword **)(lVar22 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar26 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar29,0);
        lVar22 = 0;
        if (pdVar17 == (dword *)0x0) goto code_r0x0159024c;
        uVar23 = *(undefined8 *)(puVar12 + -0x10);
        uVar42 = *(undefined8 *)(puVar12 + -8);
        uVar29 = *(undefined8 *)(puVar12 + -0x20);
        uVar34 = *(undefined8 *)(puVar12 + -0x18);
        uVar38 = *(undefined8 *)(puVar12 + -0x30);
        uVar36 = *(undefined8 *)(puVar12 + -0x28);
        goto System_Action_Type__bool__TransitionData___Invoke;
      }
      puVar40 = *(undefined1 **)(puVar12 + -0x10);
      puVar41 = *(undefined **)(puVar12 + -8);
      pdVar17 = *(dword **)(puVar12 + -0x20);
      lVar18 = *(long *)(puVar12 + -0x18);
      uVar23 = *(undefined8 *)(puVar12 + -0x30);
      lVar19 = *(long *)(puVar12 + -0x28);
    } while( true );
  }
  uVar23 = 0x3d1feb8;
  *(long *)(pdVar17 + 4) = lVar19;
  pdVar33 = *(dword **)(lVar18 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar18 = 0;
  if (pdVar33 == (dword *)0x0) goto code_r0x0158feec;
  pdVar24 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
  pdVar28 = (dword *)0x0;
  uVar29 = 0;
  uVar23 = *(undefined8 *)(puVar11 + -0x40);
  *(undefined8 *)(puVar11 + -0x40) = uVar23;
  *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
  *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
  *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
  *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
  *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
  *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
  *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  puVar40 = puVar11 + -0x10;
  pdVar37 = (dword *)0x0;
  pdVar27 = pdVar17;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)(puVar11 + -0x48) = 0;
  lVar18 = *(long *)(pdVar33 + 4);
  if (lVar18 == 0) {
    auVar43 = func_0x00f78af4();
    pdVar25 = auVar43._8_8_;
    *(undefined1 **)(puVar11 + -0x60) = puVar40;
    *(undefined **)(puVar11 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
    lVar18 = *(long *)(auVar43._0_8_ + 0x10);
    if (lVar18 == 0) {
      auVar43 = func_0x00f78af4();
      uVar29 = auVar43._8_8_;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
      *(undefined **)(puVar11 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
      lVar18 = *(long *)(auVar43._0_8_ + 0x10);
      if (lVar18 != 0) {
        pdVar28 = (dword *)0x0;
        *(undefined8 *)(puVar11 + -0x90) = 0;
        *(dword **)(puVar11 + -0x88) = pdVar17;
        *(dword **)(puVar11 + -0x80) = pdVar33;
        *(dword **)(puVar11 + -0x78) = pdVar24;
        *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
        *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
        if ((bRam0000000003ebc64b & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar19 = *(long *)(lVar18 + 0x70);
        if (lVar19 != 0) {
          lVar22 = lVar19;
          if (*(uint *)(lVar19 + 0x18) <= auVar43._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar22 = *(long *)(lVar18 + 0x70);
          }
          if (lVar22 != 0) {
            lVar19 = *(long *)(lVar19 + 0x10) + (long)(int)auVar43._8_4_ * 0x28;
            uVar35 = *(undefined8 *)(lVar19 + 0x28);
            uVar23 = *(undefined8 *)(lVar19 + 0x20);
            uVar2 = *(undefined4 *)(lVar19 + 0x42);
            *(undefined4 *)(puVar11 + -0xd8) = uVar2;
            uVar5 = *(undefined2 *)(lVar19 + 0x46);
            *(undefined2 *)(puVar11 + -0xd4) = uVar5;
            *(undefined8 *)(puVar11 + -200) = uVar35;
            *(undefined8 *)(puVar11 + -0xd0) = uVar23;
            *(undefined8 *)(puVar11 + -0xb8) = uVar35;
            *(undefined8 *)(puVar11 + -0xc0) = uVar23;
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(undefined8 *)(puVar11 + -0xa8) = 0;
            *(undefined2 *)(puVar11 + -0xa0) = 1;
            *(undefined4 *)(puVar11 + -0x9e) = uVar2;
            *(undefined2 *)(puVar11 + -0x9a) = uVar5;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar29,puVar11 + -0xc0,uRam0000000003d3ddd0);
            pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,uVar29);
            return pdVar17;
          }
        }
        auVar43 = func_0x00f78af4();
        pdVar25 = auVar43._8_8_;
        puVar13 = puVar11 + -0x110;
        *(undefined8 *)(puVar11 + -0x110) = 0;
        *(long *)(puVar11 + -0x108) = lVar19;
        *(long *)(puVar11 + -0x100) = lVar18;
        *(undefined8 *)(puVar11 + -0xf8) = uVar29;
        *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x70;
        *(undefined **)(puVar11 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
        puVar40 = puVar11 + -0xf0;
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar18 = *(long *)(auVar43._0_8_ + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= auVar43._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
          if (lVar18 == 0) {
            pdVar17 = (dword *)0x0;
          }
          else {
            pdVar17 = *(dword **)(lVar18 + 0x40);
          }
          return pdVar17;
        }
        puVar41 = &Core_UI2_UIScreen__ForceExit;
        pdVar24 = (dword *)func_0x00f78af4();
        pdVar33 = (dword *)0x0;
        pdVar17 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar43 = func_0x00f78af4();
      pdVar25 = auVar43._8_8_;
      *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x70;
      *(undefined **)(puVar11 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
      lVar18 = *(long *)(auVar43._0_8_ + 0x10);
      auVar43._8_8_ = pdVar17;
      auVar43._0_8_ = lVar18;
      if (lVar18 != 0) {
        pdVar28 = (dword *)0x0;
        puVar6 = puVar11 + -0x70;
        puVar40 = *(undefined1 **)(puVar11 + -0x80);
        puVar41 = *(undefined **)(puVar11 + -0x78);
        pdVar17 = pdVar33;
        goto code_r0x02f877a8;
      }
      auVar43 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x80;
      *(undefined **)(puVar11 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar18 = *(long *)(auVar43._0_8_ + 0x10);
      auVar43._8_8_ = auVar43._8_8_;
      auVar43._0_8_ = lVar18;
      if (lVar18 != 0) {
        puVar7 = puVar11 + -0x80;
        puVar40 = *(undefined1 **)(puVar11 + -0x90);
        puVar41 = *(undefined **)(puVar11 + -0x88);
        pdVar25 = pdVar28;
        goto code_r0x02f883b0;
      }
      auVar43 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0xa0) = puVar11 + -0x90;
      *(undefined **)(puVar11 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar18 = *(long *)(auVar43._0_8_ + 0x10);
      if (lVar18 == 0) {
        auVar43 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0xa0;
        *(undefined **)(puVar11 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
        lVar18 = *(long *)(auVar43._0_8_ + 0x10);
        auVar44._8_8_ = auVar43._8_8_;
        auVar44._0_8_ = lVar18;
        if (lVar18 != 0) {
          pdVar27 = (dword *)0x0;
          puVar8 = puVar11 + -0xa0;
          puVar40 = *(undefined1 **)(puVar11 + -0xb0);
          puVar41 = *(undefined **)(puVar11 + -0xa8);
          goto code_r0x02f884dc;
        }
        auVar43 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0xb0;
        *(undefined **)(puVar11 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
        lVar18 = *(long *)(auVar43._0_8_ + 0x10);
        auVar45._8_8_ = auVar43._8_8_;
        auVar45._0_8_ = lVar18;
        if (lVar18 == 0) {
          auVar43 = func_0x00f78af4();
          *(undefined1 **)(puVar11 + -0xd0) = puVar11 + -0xc0;
          *(undefined **)(puVar11 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar18 = *(long *)(auVar43._0_8_ + 0x10);
          auVar46._8_8_ = auVar43._8_8_;
          auVar46._0_8_ = lVar18;
          if (lVar18 == 0) {
            pdVar37 = (dword *)func_0x00f78af4();
            *(undefined8 *)(puVar11 + -0x100) = 0;
            *(dword **)(puVar11 + -0xf8) = pdVar17;
            *(dword **)(puVar11 + -0xf0) = pdVar33;
            *(dword **)(puVar11 + -0xe8) = pdVar24;
            *(undefined1 **)(puVar11 + -0xe0) = puVar11 + -0xd0;
            *(undefined **)(puVar11 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar23 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar23,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar37 + 0xc) = uVar23;
            return pdVar37;
          }
          puVar10 = puVar11 + -0xc0;
          puVar40 = *(undefined1 **)(puVar11 + -0xd0);
          puVar41 = *(undefined **)(puVar11 + -200);
          goto code_r0x02f88674;
        }
        puVar9 = puVar11 + -0xb0;
        puVar40 = *(undefined1 **)(puVar11 + -0xc0);
        puVar41 = *(undefined **)(puVar11 + -0xb8);
        pdVar27 = pdVar28;
        pdVar37 = pdVar17;
      }
      else {
        pdVar27 = (dword *)0x0;
        puVar8 = puVar11 + -0xc0;
        *(undefined8 *)(puVar11 + -0xc0) = 0;
        *(dword **)(puVar11 + -0xb8) = pdVar17;
        *(dword **)(puVar11 + -0xb0) = pdVar33;
        *(dword **)(puVar11 + -0xa8) = pdVar24;
        *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xa0);
        *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0x98);
        puVar40 = puVar11 + -0xa0;
        pdVar17 = (dword *)0x3ebc000;
        if ((bRam0000000003ebc64f & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar32 = auVar43._8_4_;
        if (((int)uVar32 < 0) || (*(int *)(lVar18 + 0x50) <= (int)uVar32)) {
          return (dword *)0x0;
        }
        lVar18 = *(long *)(lVar18 + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar32) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar19 = *(long *)(lVar18 + 0x10) + ((ulong)auVar43._8_8_ & 0xffffffff) * 0x28;
          lVar18 = *(long *)(lVar19 + 0x28);
          cVar3 = *(char *)(lVar19 + 0x40);
          iVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar19 + 0x30),0);
          if (iVar16 == 0 || cVar3 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar18 != 0) && (*(int *)(lVar18 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar41 = &Core_UI2_UIManager__GetLayerState;
        auVar44 = func_0x00f78af4();
        pdVar33 = (dword *)0x0;
        pdVar24 = auVar43._8_8_;
code_r0x02f884dc:
        puVar9 = puVar8 + -0x30;
        *(undefined8 *)(puVar8 + -0x30) = 0;
        *(dword **)(puVar8 + -0x28) = pdVar17;
        *(dword **)(puVar8 + -0x20) = pdVar33;
        *(dword **)(puVar8 + -0x18) = pdVar24;
        *(undefined1 **)(puVar8 + -0x10) = puVar40;
        *(undefined **)(puVar8 + -8) = puVar41;
        puVar40 = puVar8 + -0x10;
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar18 = *(long *)(auVar44._0_8_ + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
          if (lVar18 == 0) {
            pdVar17 = &MACH_HEADER.cputype;
          }
          else {
            pdVar17 = (dword *)(ulong)*(uint *)(lVar18 + 0x4c);
          }
          return pdVar17;
        }
        puVar41 = &Core_UI2_UIManager__EnableInput;
        auVar45 = func_0x00f78af4();
        pdVar33 = (dword *)0x0;
        pdVar24 = auVar44._8_8_;
        pdVar37 = (dword *)0x3ebc000;
      }
      pdVar25 = auVar45._8_8_;
      pdVar17 = auVar45._0_8_;
      puVar10 = puVar9 + -0x40;
      *(undefined8 *)(puVar9 + -0x40) = uVar23;
      *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(dword **)(puVar9 + -0x28) = pdVar37;
      *(dword **)(puVar9 + -0x20) = pdVar33;
      *(dword **)(puVar9 + -0x18) = pdVar24;
      *(undefined1 **)(puVar9 + -0x10) = puVar40;
      *(undefined **)(puVar9 + -8) = puVar41;
      puVar40 = puVar9 + -0x10;
      pdVar37 = (dword *)0x3ebc000;
      pdVar28 = pdVar27;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar17 + 0x1a) != 0) {
        pdVar28 = (dword *)(ulong)((uint)pdVar27 ^ 1);
        pdVar33 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar17 + 0x1a),pdVar25,pdVar28,0);
        lVar18 = *(long *)(pdVar17 + 0x1c);
        pdVar37 = (dword *)0x0;
        if (lVar18 != 0) {
          uVar32 = auVar45._8_4_;
          if (*(uint *)(lVar18 + 0x18) <= uVar32) {
            pdVar33 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar32 * 0x28 + 0x28) == 0) ||
             (pdVar37 = *(dword **)(pdVar17 + 0xc), pdVar37 == (dword *)0x0)) {
            return pdVar33;
          }
          lVar18 = *(long *)(pdVar17 + 0x1c);
          pdVar17 = (dword *)0x0;
          if (lVar18 != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar32) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar26 = *(long **)(*(long *)(lVar18 + 0x10) + (long)(int)uVar32 * 0x28 + 0x28);
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
            *(dword **)(puVar9 + -0x68) = pdVar37;
            lVar18 = *(long *)(pdVar37 + 0x1a);
            if (lVar18 == 0) {
              puVar40 = puVar9 + -0x68;
              lVar19 = 1;
            }
            else {
              lVar19 = *(long *)(lVar18 + 0x18);
              if (lVar19 == 0) {
                return pdVar37;
              }
              puVar40 = (undefined1 *)(lVar18 + 0x20);
            }
            lVar18 = 0;
            goto code_r0x01e71a74;
          }
        }
      }
      puVar41 = &Core_UI2_UIManager__SetScreenVisible;
      auVar46 = func_0x00f78af4();
      pdVar24 = pdVar27;
      pdVar33 = pdVar25;
code_r0x02f88674:
      pdVar27 = auVar46._0_8_;
      *(dword **)(puVar10 + -0x30) = pdVar37;
      *(dword **)(puVar10 + -0x28) = pdVar17;
      *(dword **)(puVar10 + -0x20) = pdVar33;
      *(dword **)(puVar10 + -0x18) = pdVar24;
      *(undefined1 **)(puVar10 + -0x10) = puVar40;
      *(undefined **)(puVar10 + -8) = puVar41;
      pdVar17 = pdVar27;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar18 = *(long *)(pdVar27 + 0x1c);
      if (lVar18 != 0) {
        uVar32 = auVar46._8_4_;
        if (*(uint *)(lVar18 + 0x18) <= uVar32) {
          pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar32 * 0x28 + 0x28) == 0) {
          return pdVar17;
        }
        lVar18 = *(long *)(pdVar27 + 0x1c);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar32) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar32 * 0x28 + 0x28);
          if ((lVar18 != 0) && (plVar26 = *(long **)(lVar18 + 0x28), plVar26 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar17 = (dword *)(**(code **)(*plVar26 + 0x178))
                                         (plVar26,pdVar28,*(undefined8 *)(*plVar26 + 0x180));
            return pdVar17;
          }
        }
      }
      auVar43 = func_0x00f78af4();
      uVar23 = auVar43._0_8_;
      *(long *)(puVar10 + -0x50) = auVar46._8_8_;
      *(dword **)(puVar10 + -0x48) = pdVar28;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x58) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar23,auVar43._8_8_,puVar10 + -0x70);
      if ((int)pdVar17 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar23,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
        *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
        pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar23,puVar10 + -0x90,1);
      }
      return pdVar17;
    }
    puVar40 = *(undefined1 **)(puVar11 + -0x60);
    puVar41 = *(undefined **)(puVar11 + -0x58);
  }
  else {
    pdVar28 = (dword *)0x0;
    uVar29 = 0;
    puVar41 = &UNK_01470820;
    pdVar25 = pdVar24;
    pdVar27 = pdVar17;
  }
  *(undefined8 *)(puVar11 + -0x90) = uVar23;
  *(undefined8 *)(puVar11 + -0x88) = 0x3eb4000;
  *(undefined8 *)(puVar11 + -0x80) = 0;
  *(dword **)(puVar11 + -0x78) = pdVar17;
  *(dword **)(puVar11 + -0x70) = pdVar33;
  *(dword **)(puVar11 + -0x68) = pdVar24;
  *(undefined1 **)(puVar11 + -0x60) = puVar40;
  *(undefined **)(puVar11 + -0x58) = puVar41;
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  *(undefined8 *)(puVar11 + -0x130) = unaff_x26;
  *(undefined8 *)(puVar11 + -0x128) = unaff_x25;
  *(undefined8 *)(puVar11 + -0x120) = 0x3ebc000;
  *(dword **)(puVar11 + -0x118) = pdVar25;
  *(dword **)(puVar11 + -0x110) = pdVar27;
  *(undefined8 *)(puVar11 + -0x108) = uVar29;
  *(long *)(puVar11 + -0x100) = lVar18;
  *(dword **)(puVar11 + -0xf8) = pdVar28;
  *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x60;
  *(undefined **)(puVar11 + -0xe8) = &UNK_02f87f9c;
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar19 = *(long *)(lVar18 + 0x78);
  if (lVar19 == 0) goto code_r0x02f8812c;
  iVar16 = *(int *)(lVar19 + 0x18);
  if (iVar16 < 1) {
    return (dword *)0x0;
  }
  iVar15 = 1;
  pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
  goto code_r0x02f880d0;
code_r0x015900e8:
  puVar40 = *(undefined1 **)(puVar12 + -0x50);
  puVar41 = *(undefined **)(puVar12 + -0x48);
  unaff_x20 = *(undefined8 *)(puVar12 + -0x60);
  param_1 = *(long *)(puVar12 + -0x58);
  puVar11 = puVar12 + -0x40;
  unaff_x22 = *(undefined8 *)(puVar12 + -0x70);
  unaff_x21 = *(undefined8 *)(puVar12 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar22 = *(long *)(puVar40 + lVar18 * 8);
  pcVar39 = *(code **)(lVar22 + 0x10);
  plVar1 = *(long **)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  if (*(short *)(lVar22 + 0x48) == -1) {
    func_0x00f78ad8(lVar22);
  }
  iVar16 = func_0x00f78a4c(lVar22);
  bVar14 = *(char *)(lVar22 + 0x4a) == '\x03';
  if (iVar16 == 0) {
    if (bVar14) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar33 = (dword *)(*pcVar39)(plVar26,0,uVar35,lVar22);
      }
      else {
        if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e7162c;
        iVar16 = func_0x00f78a44(lVar22);
        iVar15 = func_0x00f78ec0(lVar22);
        if (iVar16 == 0) {
          uVar4 = *(ushort *)(lVar22 + 0x48);
          if (iVar15 == 0) {
            lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar33 = (dword *)(**(code **)(lVar22 + 0x138))
                                         (plVar1,plVar26,0,uVar35,*(undefined8 *)(lVar22 + 0x140));
            goto code_r0x01e71750;
          }
          lVar22 = func_0x00f78a48(lVar22);
          lVar30 = *plVar1;
          uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar21 != 0) {
            piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == lVar22) {
                puVar20 = (undefined8 *)
                          (lVar30 + (long)(int)(*piVar31 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar31 = piVar31 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e718f4:
          pcVar39 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar15 == 0) {
            uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar30 = *plVar1;
            uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
            if (uVar21 != 0) {
              piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)(lVar22 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar31 = piVar31 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar30 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar23 = *(undefined8 *)(lVar30 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar23,lVar22);
          pcVar39 = (code *)*puVar20;
        }
        pdVar33 = (dword *)(*pcVar39)(plVar1,plVar26,0,uVar35,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e7173c;
      iVar16 = func_0x00f78a44(lVar22);
      iVar15 = func_0x00f78ec0(lVar22);
      if (iVar16 == 0) {
        uVar4 = *(ushort *)(lVar22 + 0x48);
        if (iVar15 == 0) {
          lVar22 = *plVar26 + (ulong)uVar4 * 0x10;
          pdVar33 = (dword *)(**(code **)(lVar22 + 0x138))
                                       (plVar26,0,uVar35,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x01e71750;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar30 = *plVar26;
        uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
        if (uVar21 != 0) {
          piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar22) {
              puVar20 = (undefined8 *)(lVar30 + (long)(int)(*piVar31 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar31 = piVar31 + 4;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar26,lVar22,(ulong)uVar4);
code_r0x01e71880:
        pcVar39 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar15 == 0) {
          uVar23 = *(undefined8 *)(*plVar26 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar30 = *plVar26;
          uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar21 != 0) {
            piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar30 = lVar30 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar31 = piVar31 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          lVar30 = func_0x00fac1f0(plVar26);
code_r0x01e71858:
          uVar23 = *(undefined8 *)(lVar30 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar23,lVar22);
        pcVar39 = (code *)*puVar20;
      }
      pdVar33 = (dword *)(*pcVar39)(plVar26,0,uVar35,puVar20);
    }
  }
  else {
    if (bVar14) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar33 = (dword *)(*pcVar39)(plVar1,plVar26,0,uVar35,lVar22);
  }
code_r0x01e71750:
  lVar18 = lVar18 + 1;
  if (lVar18 == lVar19) {
    return pdVar33;
  }
  goto code_r0x01e715f4;
code_r0x02f883b0:
  puVar6 = puVar7 + -0x30;
  *(dword **)(puVar7 + -0x30) = pdVar37;
  *(dword **)(puVar7 + -0x28) = pdVar17;
  *(dword **)(puVar7 + -0x20) = pdVar33;
  *(dword **)(puVar7 + -0x18) = pdVar24;
  *(undefined1 **)(puVar7 + -0x10) = puVar40;
  *(undefined **)(puVar7 + -8) = puVar41;
  puVar40 = puVar7 + -0x10;
  puVar41 = &UNK_02f883d8;
  pdVar28 = pdVar25;
  pdVar24 = pdVar27;
  pdVar17 = pdVar25;
  pdVar37 = auVar43._0_8_;
code_r0x02f877a8:
  pdVar33 = auVar43._0_8_;
  puVar13 = puVar6 + -0x60;
  *(dword **)(puVar6 + -0x30) = pdVar37;
  *(long *)(puVar6 + -0x28) = auVar43._8_8_;
  *(dword **)(puVar6 + -0x20) = pdVar17;
  *(dword **)(puVar6 + -0x18) = pdVar24;
  *(undefined1 **)(puVar6 + -0x10) = puVar40;
  *(undefined **)(puVar6 + -8) = puVar41;
  puVar40 = puVar6 + -0x10;
  pdVar17 = pdVar33;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar17 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar32 = (uint)pdVar25;
  if (((int)uVar32 < 0) || ((int)*(long *)(pdVar33 + 0x14) <= (int)uVar32)) {
    return pdVar17;
  }
  lVar18 = *(long *)(pdVar33 + 0x1c);
  if (lVar18 == 0) {
code_r0x02f878a4:
    lVar18 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar37;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar33;
    *(dword **)(puVar6 + -0x78) = pdVar25;
    *(undefined1 **)(puVar6 + -0x70) = puVar40;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar23,0);
    if (0 < *(int *)(lVar18 + 0x50)) {
      iVar16 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,iVar16);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar18,iVar16);
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(lVar18 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar18);
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
    pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar23);
    return pdVar17;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar32) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar18 = *(long *)(lVar18 + 0x10) + ((ulong)pdVar25 & 0xffffffff) * 0x28;
  pdVar37 = *(dword **)(lVar18 + 0x20);
  pdVar24 = *(dword **)(lVar18 + 0x28);
  *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar18 + 0x42);
  *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar18 + 0x46);
  if (pdVar24 == (dword *)0x0) {
    lVar18 = *(long *)(pdVar33 + 0x1c);
    if (lVar18 != 0) {
      *(dword **)(puVar6 + -0x58) = pdVar37;
      *(undefined8 *)(puVar6 + -0x50) = 0;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined2 *)(puVar6 + -0x38) = 0;
      *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
      *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
      pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,pdVar25,puVar6 + -0x58,uRam0000000003d3ddd0);
      return pdVar17;
    }
    goto code_r0x02f878a4;
  }
  puVar41 = &UNK_02f87848;
  pdVar17 = pdVar24;
code_r0x02f882d8:
  *(dword **)(puVar13 + -0x20) = pdVar33;
  *(dword **)(puVar13 + -0x18) = pdVar25;
  *(undefined1 **)(puVar13 + -0x10) = puVar40;
  *(undefined **)(puVar13 + -8) = puVar41;
  (**(code **)(*(long *)pdVar24 + 0x218))(pdVar24,*(undefined8 *)(*(long *)pdVar24 + 0x220));
  if (*(long *)(pdVar24 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar24 + 10),0);
    pdVar24[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar24,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar17 = (dword *)(**(code **)(*(long *)pdVar24 + 0x228))
                                 (pdVar24,*(undefined8 *)(*(long *)pdVar24 + 0x230));
    return pdVar17;
  }
  func_0x00f78af4();
  puVar7 = puVar13 + -0x40;
  *(dword **)(puVar13 + -0x40) = pdVar33;
  *(dword **)(puVar13 + -0x38) = pdVar24;
  *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar40 = puVar13 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar18 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar23 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar23,lVar18);
    pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar17;
  }
  puVar41 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar43 = func_0x00f78af4();
  pdVar25 = pdVar28;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar22 = *(long *)(puVar40 + lVar18 * 8);
  pcVar39 = *(code **)(lVar22 + 0x10);
  plVar1 = *(long **)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  if (*(short *)(lVar22 + 0x48) == -1) {
    func_0x00f78ad8(lVar22);
  }
  iVar16 = func_0x00f78a4c(lVar22);
  bVar14 = *(char *)(lVar22 + 0x4a) == '\x03';
  if (iVar16 == 0) {
    if (bVar14) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar17 = (dword *)(*pcVar39)(plVar26,pdVar25,pdVar27,lVar22);
      }
      else {
        if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar37 + 6) == 0)) goto code_r0x01e71aac;
        iVar16 = func_0x00f78a44(lVar22);
        iVar15 = func_0x00f78ec0(lVar22);
        if (iVar16 == 0) {
          uVar4 = *(ushort *)(lVar22 + 0x48);
          if (iVar15 == 0) {
            lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar17 = (dword *)(**(code **)(lVar22 + 0x138))
                                         (plVar1,plVar26,pdVar25,pdVar27,
                                          *(undefined8 *)(lVar22 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar22 = func_0x00f78a48(lVar22);
          lVar30 = *plVar1;
          uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar21 != 0) {
            piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == lVar22) {
                puVar20 = (undefined8 *)
                          (lVar30 + (long)(int)(*piVar31 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar31 = piVar31 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e71d74:
          pcVar39 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar15 == 0) {
            uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar30 = *plVar1;
            uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
            if (uVar21 != 0) {
              piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
              do {
                if (*(long *)(piVar31 + -2) == *(long *)(lVar22 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar31 = piVar31 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            lVar30 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar23 = *(undefined8 *)(lVar30 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar23,lVar22);
          pcVar39 = (code *)*puVar20;
        }
        pdVar17 = (dword *)(*pcVar39)(plVar1,plVar26,pdVar25,pdVar27,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar37 + 6) == 0)) goto code_r0x01e71bbc;
      iVar16 = func_0x00f78a44(lVar22);
      iVar15 = func_0x00f78ec0(lVar22);
      if (iVar16 == 0) {
        uVar4 = *(ushort *)(lVar22 + 0x48);
        if (iVar15 == 0) {
          lVar22 = *plVar26 + (ulong)uVar4 * 0x10;
          pdVar17 = (dword *)(**(code **)(lVar22 + 0x138))
                                       (plVar26,pdVar25,pdVar27,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar30 = *plVar26;
        uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
        if (uVar21 != 0) {
          piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
          do {
            if (*(long *)(piVar31 + -2) == lVar22) {
              puVar20 = (undefined8 *)(lVar30 + (long)(int)(*piVar31 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar31 = piVar31 + 4;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar26,lVar22,(ulong)uVar4);
code_r0x01e71d00:
        pcVar39 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar15 == 0) {
          uVar23 = *(undefined8 *)(*plVar26 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar30 = *plVar26;
          uVar21 = (ulong)*(ushort *)(lVar30 + 0x12a);
          if (uVar21 != 0) {
            piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
            do {
              if (*(long *)(piVar31 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar30 = lVar30 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar31 = piVar31 + 4;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          lVar30 = func_0x00fac1f0(plVar26);
code_r0x01e71cd8:
          uVar23 = *(undefined8 *)(lVar30 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar23,lVar22);
        pcVar39 = (code *)*puVar20;
      }
      pdVar17 = (dword *)(*pcVar39)(plVar26,pdVar25,pdVar27,puVar20);
    }
  }
  else {
    if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar17 = (dword *)(*pcVar39)(plVar1,plVar26,pdVar25,pdVar27,lVar22);
  }
code_r0x01e71bd0:
  lVar18 = lVar18 + 1;
  if (lVar18 == lVar19) {
    return pdVar17;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar19,pdVar25,5,0);
    if ((uVar21 & 1) != 0) {
      return pdVar17;
    }
    pdVar17 = (dword *)(ulong)(iVar15 < iVar16);
    if (iVar16 == iVar15) {
      return pdVar17;
    }
    lVar19 = *(long *)(lVar18 + 0x78);
    iVar15 = iVar15 + 1;
    if (lVar19 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar19 + 0x18) <= iVar15 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
    if (lVar19 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x158fde8 | Atlas.Contexts.FrontEndContextPostQuickPlayState.ShowSeasonsScreen
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__ShowSeasonsScreen(long param_1)

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
  int iVar15;
  dword *pdVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  dword *pdVar22;
  long *extraout_x1;
  dword *pdVar23;
  long *plVar24;
  dword *pdVar25;
  dword *pdVar26;
  undefined8 uVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  undefined8 unaff_x19;
  dword *pdVar31;
  undefined8 uVar32;
  undefined8 unaff_x20;
  undefined8 uVar33;
  undefined8 unaff_x21;
  undefined8 uVar34;
  dword *pdVar35;
  undefined8 unaff_x22;
  undefined8 uVar36;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar37;
  undefined8 unaff_x25;
  code *pcVar38;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar39;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar40;
  undefined8 unaff_x30;
  undefined8 uVar41;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
code_r0x0158fde8:
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar39 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x23 = 0x3d28bc0;
  uVar21 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar16,0);
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  puVar18 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar17,param_1,puRam0000000003d56c98,0);
  if (pdVar16 == (dword *)0x0) {
LAB_0158feec:
    puVar40 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
    lVar37 = func_0x00f78af4();
    do {
      *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar11 + -0x30) = uVar21;
      *(long *)(puVar11 + -0x28) = lVar17;
      *(dword **)(puVar11 + -0x20) = pdVar16;
      *(long *)(puVar11 + -0x18) = param_1;
      *(undefined1 **)(puVar11 + -0x10) = puVar39;
      *(undefined **)(puVar11 + -8) = puVar40;
      uVar33 = 0x3eb5000;
      uVar27 = 0x3d40598;
      if ((bRam0000000003eb5135 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c0);
        func_0x00f78a20(0x3d27618);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5135 = 1;
      }
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar37,uRam0000000003d40598);
      if (lVar17 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10);
        uVar27 = 0;
        if (lVar17 == 0) goto code_r0x0159003c;
        unaff_x23 = 0x3d194c0;
        uVar21 = 0x3d25458;
        uVar27 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        *(undefined8 *)(lVar17 + 0x20) = uVar27;
        if (*(int *)(lVar17 + 0x10) == 2) {
          *(undefined8 *)(lVar17 + 0x18) = uVar27;
        }
        uVar33 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
        puVar18 = (undefined8 *)0x0;
        Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                  (uVar33,lVar17);
        uVar27 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
        pdVar16 = *(dword **)(lVar37 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar24 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        lVar37 = 0;
        if (pdVar16 == (dword *)0x0) goto code_r0x0159003c;
        uVar21 = *(undefined8 *)(puVar11 + -0x10);
        uVar41 = *(undefined8 *)(puVar11 + -8);
        uVar27 = *(undefined8 *)(puVar11 + -0x20);
        uVar32 = *(undefined8 *)(puVar11 + -0x18);
        uVar36 = *(undefined8 *)(puVar11 + -0x30);
        uVar34 = *(undefined8 *)(puVar11 + -0x28);
        unaff_x24 = *(undefined8 *)(puVar11 + -0x40);
        unaff_x23 = *(undefined8 *)(puVar11 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
        *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar11 + -0x30) = uVar36;
        *(undefined8 *)(puVar11 + -0x28) = uVar34;
        *(undefined8 *)(puVar11 + -0x20) = uVar27;
        *(undefined8 *)(puVar11 + -0x18) = uVar32;
        *(undefined8 *)(puVar11 + -0x10) = uVar21;
        *(undefined8 *)(puVar11 + -8) = uVar41;
        *(dword **)(puVar11 + -0x68) = pdVar16;
        lVar17 = *(long *)(pdVar16 + 0x1a);
        if (lVar17 == 0) {
          puVar39 = puVar11 + -0x68;
          lVar37 = 1;
        }
        else {
          lVar37 = *(long *)(lVar17 + 0x18);
          if (lVar37 == 0) {
            return pdVar16;
          }
          puVar39 = (undefined1 *)(lVar17 + 0x20);
        }
        lVar17 = 0;
        goto code_r0x01e715f4;
      }
code_r0x0159003c:
      param_1 = func_0x00f78af4();
      *(undefined8 *)(puVar11 + -0x70) = uVar21;
      *(undefined8 *)(puVar11 + -0x68) = uVar27;
      *(undefined8 *)(puVar11 + -0x60) = uVar33;
      *(long *)(puVar11 + -0x58) = lVar37;
      *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x48) =
           &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
      puVar39 = puVar11 + -0x50;
      uVar33 = 0x3eb5000;
      if ((bRam0000000003eb5136 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5136 = 1;
      }
      if (*(long *)(param_1 + 0xa8) == 0) {
code_r0x01590110:
        puVar40 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
        lVar37 = func_0x00f78af4();
        puVar11 = puVar11 + -0x70;
      }
      else {
        uVar27 = 0x3d23000;
        uVar33 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(param_1 + 0xa8),0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar18 = (undefined8 *)0x0;
        iVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar33,0);
        if (iVar15 != 0) {
          if (*(long *)(param_1 + 0xa8) == 0) goto code_r0x01590110;
          uVar19 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(param_1 + 0xa8),0);
          if ((uVar19 & 1) == 0) {
            if (*(long *)(param_1 + 0xb0) == 0) goto code_r0x01590110;
            puVar18 = (undefined8 *)0x0;
            iVar15 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(param_1 + 0xb0),2);
            if (iVar15 != 0) goto code_r0x015900e8;
          }
        }
        puVar39 = *(undefined1 **)(puVar11 + -0x50);
        puVar40 = *(undefined **)(puVar11 + -0x48);
        uVar33 = *(undefined8 *)(puVar11 + -0x60);
        plVar24 = (long *)(puVar11 + -0x58);
        uVar21 = *(undefined8 *)(puVar11 + -0x70);
        uVar27 = *(undefined8 *)(puVar11 + -0x68);
        puVar11 = puVar11 + -0x40;
        lVar37 = param_1;
        param_1 = *plVar24;
      }
      *(undefined8 *)(puVar11 + -0x30) = uVar21;
      *(undefined8 *)(puVar11 + -0x28) = uVar27;
      *(undefined8 *)(puVar11 + -0x20) = uVar33;
      *(long *)(puVar11 + -0x18) = param_1;
      *(undefined1 **)(puVar11 + -0x10) = puVar39;
      *(undefined **)(puVar11 + -8) = puVar40;
      uVar33 = 0x3eb5000;
      if ((bRam0000000003eb5137 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c8);
        func_0x00f78a20(0x3d27628);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5137 = 1;
      }
      if (*(long *)(lVar37 + 0xb8) == 0) goto code_r0x0159024c;
      iVar15 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(lVar37 + 0xb8),0);
      if (iVar15 == 0) {
        lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar37,uRam0000000003d40598);
        if (lVar17 == 0) {
code_r0x0159024c:
          pdVar16 = (dword *)func_0x00f78af4();
          *(undefined8 *)(puVar11 + -0x60) = uVar21;
          *(undefined8 *)(puVar11 + -0x58) = uVar27;
          *(undefined8 *)(puVar11 + -0x50) = uVar33;
          *(long *)(puVar11 + -0x48) = lVar37;
          *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
          *(undefined **)(puVar11 + -0x38) =
               &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
          if ((bRam0000000003eb5138 & 1) == 0) {
            func_0x00f78a20(0x3d40590);
            bRam0000000003eb5138 = 1;
          }
          if (pdVar16 == (dword *)0x0) {
            *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
            *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
            auVar42 = func_0x00f78af4(0,uRam0000000003d40590);
            pdVar16 = auVar42._0_8_;
            *(undefined8 *)(pdVar16 + 4) = *puVar18;
            *(long *)(pdVar16 + 8) = auVar42._8_8_;
            *(undefined8 **)(pdVar16 + 10) = puVar18;
            return pdVar16;
          }
          return pdVar16;
        }
        uVar27 = *(undefined8 *)(lVar17 + 0x10);
        uVar33 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
        puVar18 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                  (uVar33,uVar27,1,0);
        uVar27 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
        pdVar16 = *(dword **)(lVar37 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar24 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        lVar37 = 0;
        if (pdVar16 == (dword *)0x0) goto code_r0x0159024c;
        uVar21 = *(undefined8 *)(puVar11 + -0x10);
        uVar41 = *(undefined8 *)(puVar11 + -8);
        uVar27 = *(undefined8 *)(puVar11 + -0x20);
        uVar32 = *(undefined8 *)(puVar11 + -0x18);
        uVar36 = *(undefined8 *)(puVar11 + -0x30);
        uVar34 = *(undefined8 *)(puVar11 + -0x28);
        goto System_Action_Type__bool__TransitionData___Invoke;
      }
      puVar39 = *(undefined1 **)(puVar11 + -0x10);
      puVar40 = *(undefined **)(puVar11 + -8);
      pdVar16 = *(dword **)(puVar11 + -0x20);
      param_1 = *(long *)(puVar11 + -0x18);
      uVar21 = *(undefined8 *)(puVar11 + -0x30);
      lVar17 = *(long *)(puVar11 + -0x28);
    } while( true );
  }
  uVar21 = 0x3d1feb8;
  *(long *)(pdVar16 + 4) = lVar17;
  pdVar31 = *(dword **)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1 = 0;
  if (pdVar31 == (dword *)0x0) goto LAB_0158feec;
  pdVar22 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
  pdVar26 = (dword *)0x0;
  uVar27 = 0;
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar21;
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
  puVar39 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar35 = (dword *)0x0;
  pdVar25 = pdVar16;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar17 = *(long *)(pdVar31 + 4);
  if (lVar17 == 0) {
    auVar42 = func_0x00f78af4();
    pdVar23 = auVar42._8_8_;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar39;
    *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
    lVar17 = *(long *)(auVar42._0_8_ + 0x10);
    if (lVar17 == 0) {
      auVar42 = func_0x00f78af4();
      uVar27 = auVar42._8_8_;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
      lVar17 = *(long *)(auVar42._0_8_ + 0x10);
      if (lVar17 != 0) {
        pdVar26 = (dword *)0x0;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(dword **)((long)register0x00000008 + -0x88) = pdVar16;
        *(dword **)((long)register0x00000008 + -0x80) = pdVar31;
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
        lVar37 = *(long *)(lVar17 + 0x70);
        if (lVar37 != 0) {
          lVar20 = lVar37;
          if (*(uint *)(lVar37 + 0x18) <= auVar42._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar20 = *(long *)(lVar17 + 0x70);
          }
          if (lVar20 != 0) {
            lVar37 = *(long *)(lVar37 + 0x10) + (long)(int)auVar42._8_4_ * 0x28;
            uVar33 = *(undefined8 *)(lVar37 + 0x28);
            uVar21 = *(undefined8 *)(lVar37 + 0x20);
            uVar2 = *(undefined4 *)(lVar37 + 0x42);
            *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar2;
            uVar5 = *(undefined2 *)(lVar37 + 0x46);
            *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar5;
            *(undefined8 *)((long)register0x00000008 + -200) = uVar33;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar33;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
            *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
            *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar2;
            *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar5;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar27,(undefined1 *)((long)register0x00000008 + -0xc0),
                            uRam0000000003d3ddd0);
            pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,uVar27);
            return pdVar16;
          }
        }
        auVar42 = func_0x00f78af4();
        pdVar23 = auVar42._8_8_;
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(long *)((long)register0x00000008 + -0x108) = lVar37;
        *(long *)((long)register0x00000008 + -0x100) = lVar17;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar27;
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
        puVar39 = (undefined1 *)((long)register0x00000008 + -0xf0);
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar17 = *(long *)(auVar42._0_8_ + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= auVar42._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
          if (lVar17 == 0) {
            pdVar16 = (dword *)0x0;
          }
          else {
            pdVar16 = *(dword **)(lVar17 + 0x40);
          }
          return pdVar16;
        }
        puVar40 = &Core_UI2_UIScreen__ForceExit;
        pdVar22 = (dword *)func_0x00f78af4();
        pdVar31 = (dword *)0x0;
        pdVar16 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar42 = func_0x00f78af4();
      pdVar23 = auVar42._8_8_;
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
      lVar17 = *(long *)(auVar42._0_8_ + 0x10);
      auVar42._8_8_ = pdVar16;
      auVar42._0_8_ = lVar17;
      if (lVar17 != 0) {
        pdVar26 = (dword *)0x0;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
        puVar39 = *(undefined1 **)((long)register0x00000008 + -0x80);
        puVar40 = *(undefined **)((long)register0x00000008 + -0x78);
        pdVar16 = pdVar31;
        goto code_r0x02f877a8;
      }
      auVar42 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined **)((long)register0x00000008 + -0x88) =
           &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar17 = *(long *)(auVar42._0_8_ + 0x10);
      auVar42._8_8_ = auVar42._8_8_;
      auVar42._0_8_ = lVar17;
      if (lVar17 != 0) {
        puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
        puVar39 = *(undefined1 **)((long)register0x00000008 + -0x90);
        puVar40 = *(undefined **)((long)register0x00000008 + -0x88);
        pdVar23 = pdVar26;
        goto code_r0x02f883b0;
      }
      auVar42 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar17 = *(long *)(auVar42._0_8_ + 0x10);
      if (lVar17 == 0) {
        auVar42 = func_0x00f78af4();
        *(undefined1 **)((long)register0x00000008 + -0xb0) =
             (undefined1 *)((long)register0x00000008 + -0xa0);
        *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
        lVar17 = *(long *)(auVar42._0_8_ + 0x10);
        auVar43._8_8_ = auVar42._8_8_;
        auVar43._0_8_ = lVar17;
        if (lVar17 != 0) {
          pdVar25 = (dword *)0x0;
          puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
          puVar39 = *(undefined1 **)((long)register0x00000008 + -0xb0);
          puVar40 = *(undefined **)((long)register0x00000008 + -0xa8);
          goto code_r0x02f884dc;
        }
        auVar42 = func_0x00f78af4();
        *(undefined1 **)((long)register0x00000008 + -0xc0) =
             (undefined1 *)((long)register0x00000008 + -0xb0);
        *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
        lVar17 = *(long *)(auVar42._0_8_ + 0x10);
        auVar44._8_8_ = auVar42._8_8_;
        auVar44._0_8_ = lVar17;
        if (lVar17 == 0) {
          auVar42 = func_0x00f78af4();
          *(undefined1 **)((long)register0x00000008 + -0xd0) =
               (undefined1 *)((long)register0x00000008 + -0xc0);
          *(undefined **)((long)register0x00000008 + -200) =
               &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar17 = *(long *)(auVar42._0_8_ + 0x10);
          auVar45._8_8_ = auVar42._8_8_;
          auVar45._0_8_ = lVar17;
          if (lVar17 == 0) {
            pdVar35 = (dword *)func_0x00f78af4();
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(dword **)((long)register0x00000008 + -0xf8) = pdVar16;
            *(dword **)((long)register0x00000008 + -0xf0) = pdVar31;
            *(dword **)((long)register0x00000008 + -0xe8) = pdVar22;
            *(undefined1 **)((long)register0x00000008 + -0xe0) =
                 (undefined1 *)((long)register0x00000008 + -0xd0);
            *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar21 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar21,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar35 + 0xc) = uVar21;
            return pdVar35;
          }
          puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
          puVar39 = *(undefined1 **)((long)register0x00000008 + -0xd0);
          puVar40 = *(undefined **)((long)register0x00000008 + -200);
          goto code_r0x02f88674;
        }
        puVar9 = (undefined1 *)((long)register0x00000008 + -0xb0);
        puVar39 = *(undefined1 **)((long)register0x00000008 + -0xc0);
        puVar40 = *(undefined **)((long)register0x00000008 + -0xb8);
        pdVar25 = pdVar26;
        pdVar35 = pdVar16;
      }
      else {
        pdVar25 = (dword *)0x0;
        puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
        *(dword **)((long)register0x00000008 + -0xb8) = pdVar16;
        *(dword **)((long)register0x00000008 + -0xb0) = pdVar31;
        *(dword **)((long)register0x00000008 + -0xa8) = pdVar22;
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        puVar39 = (undefined1 *)((long)register0x00000008 + -0xa0);
        pdVar16 = (dword *)0x3ebc000;
        if ((bRam0000000003ebc64f & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar30 = auVar42._8_4_;
        if (((int)uVar30 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar30)) {
          return (dword *)0x0;
        }
        lVar17 = *(long *)(lVar17 + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar37 = *(long *)(lVar17 + 0x10) + ((ulong)auVar42._8_8_ & 0xffffffff) * 0x28;
          lVar17 = *(long *)(lVar37 + 0x28);
          cVar3 = *(char *)(lVar37 + 0x40);
          iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar37 + 0x30),0);
          if (iVar15 == 0 || cVar3 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar40 = &Core_UI2_UIManager__GetLayerState;
        auVar43 = func_0x00f78af4();
        pdVar31 = (dword *)0x0;
        pdVar22 = auVar42._8_8_;
code_r0x02f884dc:
        puVar9 = puVar8 + -0x30;
        *(undefined8 *)(puVar8 + -0x30) = 0;
        *(dword **)(puVar8 + -0x28) = pdVar16;
        *(dword **)(puVar8 + -0x20) = pdVar31;
        *(dword **)(puVar8 + -0x18) = pdVar22;
        *(undefined1 **)(puVar8 + -0x10) = puVar39;
        *(undefined **)(puVar8 + -8) = puVar40;
        puVar39 = puVar8 + -0x10;
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar17 = *(long *)(auVar43._0_8_ + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= auVar43._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
          if (lVar17 == 0) {
            pdVar16 = &MACH_HEADER.cputype;
          }
          else {
            pdVar16 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
          }
          return pdVar16;
        }
        puVar40 = &Core_UI2_UIManager__EnableInput;
        auVar44 = func_0x00f78af4();
        pdVar31 = (dword *)0x0;
        pdVar22 = auVar43._8_8_;
        pdVar35 = (dword *)0x3ebc000;
      }
      pdVar23 = auVar44._8_8_;
      pdVar16 = auVar44._0_8_;
      puVar10 = puVar9 + -0x40;
      *(undefined8 *)(puVar9 + -0x40) = uVar21;
      *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(dword **)(puVar9 + -0x28) = pdVar35;
      *(dword **)(puVar9 + -0x20) = pdVar31;
      *(dword **)(puVar9 + -0x18) = pdVar22;
      *(undefined1 **)(puVar9 + -0x10) = puVar39;
      *(undefined **)(puVar9 + -8) = puVar40;
      puVar39 = puVar9 + -0x10;
      pdVar35 = (dword *)0x3ebc000;
      pdVar26 = pdVar25;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar16 + 0x1a) != 0) {
        pdVar26 = (dword *)(ulong)((uint)pdVar25 ^ 1);
        pdVar31 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar23,pdVar26,0);
        lVar17 = *(long *)(pdVar16 + 0x1c);
        pdVar35 = (dword *)0x0;
        if (lVar17 != 0) {
          uVar30 = auVar44._8_4_;
          if (*(uint *)(lVar17 + 0x18) <= uVar30) {
            pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
             (pdVar35 = *(dword **)(pdVar16 + 0xc), pdVar35 == (dword *)0x0)) {
            return pdVar31;
          }
          lVar17 = *(long *)(pdVar16 + 0x1c);
          pdVar16 = (dword *)0x0;
          if (lVar17 != 0) {
            if (*(uint *)(lVar17 + 0x18) <= uVar30) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar24 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
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
            *(dword **)(puVar9 + -0x68) = pdVar35;
            lVar17 = *(long *)(pdVar35 + 0x1a);
            if (lVar17 == 0) {
              puVar39 = puVar9 + -0x68;
              lVar37 = 1;
            }
            else {
              lVar37 = *(long *)(lVar17 + 0x18);
              if (lVar37 == 0) {
                return pdVar35;
              }
              puVar39 = (undefined1 *)(lVar17 + 0x20);
            }
            lVar17 = 0;
            goto code_r0x01e71a74;
          }
        }
      }
      puVar40 = &Core_UI2_UIManager__SetScreenVisible;
      auVar45 = func_0x00f78af4();
      pdVar22 = pdVar25;
      pdVar31 = pdVar23;
code_r0x02f88674:
      pdVar25 = auVar45._0_8_;
      *(dword **)(puVar10 + -0x30) = pdVar35;
      *(dword **)(puVar10 + -0x28) = pdVar16;
      *(dword **)(puVar10 + -0x20) = pdVar31;
      *(dword **)(puVar10 + -0x18) = pdVar22;
      *(undefined1 **)(puVar10 + -0x10) = puVar39;
      *(undefined **)(puVar10 + -8) = puVar40;
      pdVar16 = pdVar25;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar17 = *(long *)(pdVar25 + 0x1c);
      if (lVar17 != 0) {
        uVar30 = auVar45._8_4_;
        if (*(uint *)(lVar17 + 0x18) <= uVar30) {
          pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
          return pdVar16;
        }
        lVar17 = *(long *)(pdVar25 + 0x1c);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
          if ((lVar17 != 0) && (plVar24 = *(long **)(lVar17 + 0x28), plVar24 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar16 = (dword *)(**(code **)(*plVar24 + 0x178))
                                         (plVar24,pdVar26,*(undefined8 *)(*plVar24 + 0x180));
            return pdVar16;
          }
        }
      }
      auVar42 = func_0x00f78af4();
      uVar21 = auVar42._0_8_;
      *(long *)(puVar10 + -0x50) = auVar45._8_8_;
      *(dword **)(puVar10 + -0x48) = pdVar26;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x58) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar21,auVar42._8_8_,puVar10 + -0x70);
      if ((int)pdVar16 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar21,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
        *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
        pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar21,puVar10 + -0x90,1);
      }
      return pdVar16;
    }
    puVar39 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar40 = *(undefined **)((long)register0x00000008 + -0x58);
  }
  else {
    pdVar26 = (dword *)0x0;
    uVar27 = 0;
    puVar40 = &UNK_01470820;
    pdVar23 = pdVar22;
    pdVar25 = pdVar16;
  }
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(dword **)((long)register0x00000008 + -0x78) = pdVar16;
  *(dword **)((long)register0x00000008 + -0x70) = pdVar31;
  *(dword **)((long)register0x00000008 + -0x68) = pdVar22;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar39;
  *(undefined **)((long)register0x00000008 + -0x58) = puVar40;
  if ((bRam0000000003ebc64a & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64a = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
  *(dword **)((long)register0x00000008 + -0x118) = pdVar23;
  *(dword **)((long)register0x00000008 + -0x110) = pdVar25;
  *(undefined8 *)((long)register0x00000008 + -0x108) = uVar27;
  *(long *)((long)register0x00000008 + -0x100) = lVar17;
  *(dword **)((long)register0x00000008 + -0xf8) = pdVar26;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
  if ((bRam0000000003ebc64e & 1) == 0) {
    func_0x00f78a20(0x3d3ddf0);
    func_0x00f78a20(0x3d3ddf8);
    bRam0000000003ebc64e = 1;
  }
  lVar37 = *(long *)(lVar17 + 0x78);
  if (lVar37 == 0) goto code_r0x02f8812c;
  iVar15 = *(int *)(lVar37 + 0x18);
  if (iVar15 < 1) {
    return (dword *)0x0;
  }
  iVar14 = 1;
  pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
  goto code_r0x02f880d0;
code_r0x015900e8:
  unaff_x29 = *(undefined8 *)(puVar11 + -0x50);
  unaff_x30 = *(undefined8 *)(puVar11 + -0x48);
  unaff_x20 = *(undefined8 *)(puVar11 + -0x60);
  unaff_x19 = *(undefined8 *)(puVar11 + -0x58);
  register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x40);
  unaff_x22 = *(undefined8 *)(puVar11 + -0x70);
  unaff_x21 = *(undefined8 *)(puVar11 + -0x68);
  goto code_r0x0158fde8;
code_r0x01e715f4:
  lVar20 = *(long *)(puVar39 + lVar17 * 8);
  pcVar38 = *(code **)(lVar20 + 0x10);
  plVar1 = *(long **)(lVar20 + 0x20);
  lVar20 = *(long *)(lVar20 + 0x28);
  if (*(short *)(lVar20 + 0x48) == -1) {
    func_0x00f78ad8(lVar20);
  }
  iVar15 = func_0x00f78a4c(lVar20);
  bVar13 = *(char *)(lVar20 + 0x4a) == '\x03';
  if (iVar15 == 0) {
    if (bVar13) {
      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
        pdVar31 = (dword *)(*pcVar38)(plVar24,0,uVar33,lVar20);
      }
      else {
        if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e7162c;
        iVar15 = func_0x00f78a44(lVar20);
        iVar14 = func_0x00f78ec0(lVar20);
        if (iVar15 == 0) {
          uVar4 = *(ushort *)(lVar20 + 0x48);
          if (iVar14 == 0) {
            lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar31 = (dword *)(**(code **)(lVar20 + 0x138))
                                         (plVar1,plVar24,0,uVar33,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x01e71750;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar28 = *plVar1;
          uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
          if (uVar19 != 0) {
            piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar20) {
                puVar18 = (undefined8 *)
                          (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e718f4;
              }
              piVar29 = piVar29 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e718f4:
          pcVar38 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          if (iVar14 == 0) {
            uVar21 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar28 = *plVar1;
            uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
            if (uVar19 != 0) {
              piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e718cc;
                }
                piVar29 = piVar29 + 4;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
            uVar21 = *(undefined8 *)(lVar28 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar21,lVar20);
          pcVar38 = (code *)*puVar18;
        }
        pdVar31 = (dword *)(*pcVar38)(plVar1,plVar24,0,uVar33,puVar18);
      }
    }
    else {
      if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e7173c;
      iVar15 = func_0x00f78a44(lVar20);
      iVar14 = func_0x00f78ec0(lVar20);
      if (iVar15 == 0) {
        uVar4 = *(ushort *)(lVar20 + 0x48);
        if (iVar14 == 0) {
          lVar20 = *plVar24 + (ulong)uVar4 * 0x10;
          pdVar31 = (dword *)(**(code **)(lVar20 + 0x138))
                                       (plVar24,0,uVar33,*(undefined8 *)(lVar20 + 0x140));
          goto code_r0x01e71750;
        }
        lVar20 = func_0x00f78a48(lVar20);
        lVar28 = *plVar24;
        uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
        if (uVar19 != 0) {
          piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar20) {
              puVar18 = (undefined8 *)(lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71880;
            }
            piVar29 = piVar29 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar24,lVar20,(ulong)uVar4);
code_r0x01e71880:
        pcVar38 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar14 == 0) {
          uVar21 = *(undefined8 *)(*plVar24 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar28 = *plVar24;
          uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
          if (uVar19 != 0) {
            piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71858;
              }
              piVar29 = piVar29 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          lVar28 = func_0x00fac1f0(plVar24);
code_r0x01e71858:
          uVar21 = *(undefined8 *)(lVar28 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar21,lVar20);
        pcVar38 = (code *)*puVar18;
      }
      pdVar31 = (dword *)(*pcVar38)(plVar24,0,uVar33,puVar18);
    }
  }
  else {
    if (bVar13) goto code_r0x01e7173c;
code_r0x01e7162c:
    pdVar31 = (dword *)(*pcVar38)(plVar1,plVar24,0,uVar33,lVar20);
  }
code_r0x01e71750:
  lVar17 = lVar17 + 1;
  if (lVar17 == lVar37) {
    return pdVar31;
  }
  goto code_r0x01e715f4;
code_r0x02f883b0:
  puVar6 = puVar7 + -0x30;
  *(dword **)(puVar7 + -0x30) = pdVar35;
  *(dword **)(puVar7 + -0x28) = pdVar16;
  *(dword **)(puVar7 + -0x20) = pdVar31;
  *(dword **)(puVar7 + -0x18) = pdVar22;
  *(undefined1 **)(puVar7 + -0x10) = puVar39;
  *(undefined **)(puVar7 + -8) = puVar40;
  puVar39 = puVar7 + -0x10;
  puVar40 = &UNK_02f883d8;
  pdVar26 = pdVar23;
  pdVar22 = pdVar25;
  pdVar16 = pdVar23;
  pdVar35 = auVar42._0_8_;
code_r0x02f877a8:
  pdVar31 = auVar42._0_8_;
  puVar12 = puVar6 + -0x60;
  *(dword **)(puVar6 + -0x30) = pdVar35;
  *(long *)(puVar6 + -0x28) = auVar42._8_8_;
  *(dword **)(puVar6 + -0x20) = pdVar16;
  *(dword **)(puVar6 + -0x18) = pdVar22;
  *(undefined1 **)(puVar6 + -0x10) = puVar39;
  *(undefined **)(puVar6 + -8) = puVar40;
  puVar39 = puVar6 + -0x10;
  pdVar16 = pdVar31;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar30 = (uint)pdVar23;
  if (((int)uVar30 < 0) || ((int)*(long *)(pdVar31 + 0x14) <= (int)uVar30)) {
    return pdVar16;
  }
  lVar17 = *(long *)(pdVar31 + 0x1c);
  if (lVar17 == 0) {
code_r0x02f878a4:
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar35;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar31;
    *(dword **)(puVar6 + -0x78) = pdVar23;
    *(undefined1 **)(puVar6 + -0x70) = puVar39;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar21 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar21,0);
    if (0 < *(int *)(lVar17 + 0x50)) {
      iVar15 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,iVar15);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar17,iVar15);
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar17 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar17);
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
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar21);
    return pdVar16;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar30) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar23 & 0xffffffff) * 0x28;
  pdVar35 = *(dword **)(lVar17 + 0x20);
  pdVar22 = *(dword **)(lVar17 + 0x28);
  *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
  *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
  if (pdVar22 == (dword *)0x0) {
    lVar17 = *(long *)(pdVar31 + 0x1c);
    if (lVar17 != 0) {
      *(dword **)(puVar6 + -0x58) = pdVar35;
      *(undefined8 *)(puVar6 + -0x50) = 0;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined2 *)(puVar6 + -0x38) = 0;
      *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
      *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
      pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar23,puVar6 + -0x58,uRam0000000003d3ddd0);
      return pdVar16;
    }
    goto code_r0x02f878a4;
  }
  puVar40 = &UNK_02f87848;
  pdVar16 = pdVar22;
code_r0x02f882d8:
  *(dword **)(puVar12 + -0x20) = pdVar31;
  *(dword **)(puVar12 + -0x18) = pdVar23;
  *(undefined1 **)(puVar12 + -0x10) = puVar39;
  *(undefined **)(puVar12 + -8) = puVar40;
  (**(code **)(*(long *)pdVar22 + 0x218))(pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x220));
  if (*(long *)(pdVar22 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar22 + 10),0);
    pdVar22[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar22,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(**(code **)(*(long *)pdVar22 + 0x228))
                                 (pdVar22,*(undefined8 *)(*(long *)pdVar22 + 0x230));
    return pdVar16;
  }
  func_0x00f78af4();
  puVar7 = puVar12 + -0x40;
  *(dword **)(puVar12 + -0x40) = pdVar31;
  *(dword **)(puVar12 + -0x38) = pdVar22;
  *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar39 = puVar12 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar17 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar21 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar21,lVar17);
    pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar16;
  }
  puVar40 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar42 = func_0x00f78af4();
  pdVar23 = pdVar26;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar20 = *(long *)(puVar39 + lVar17 * 8);
  pcVar38 = *(code **)(lVar20 + 0x10);
  plVar1 = *(long **)(lVar20 + 0x20);
  lVar20 = *(long *)(lVar20 + 0x28);
  if (*(short *)(lVar20 + 0x48) == -1) {
    func_0x00f78ad8(lVar20);
  }
  iVar15 = func_0x00f78a4c(lVar20);
  bVar13 = *(char *)(lVar20 + 0x4a) == '\x03';
  if (iVar15 == 0) {
    if (bVar13) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar16 = (dword *)(*pcVar38)(plVar24,pdVar23,pdVar25,lVar20);
      }
      else {
        if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar35 + 6) == 0)) goto code_r0x01e71aac;
        iVar15 = func_0x00f78a44(lVar20);
        iVar14 = func_0x00f78ec0(lVar20);
        if (iVar15 == 0) {
          uVar4 = *(ushort *)(lVar20 + 0x48);
          if (iVar14 == 0) {
            lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                         (plVar1,plVar24,pdVar23,pdVar25,
                                          *(undefined8 *)(lVar20 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar28 = *plVar1;
          uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
          if (uVar19 != 0) {
            piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == lVar20) {
                puVar18 = (undefined8 *)
                          (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar29 = piVar29 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e71d74:
          pcVar38 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          if (iVar14 == 0) {
            uVar21 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar28 = *plVar1;
            uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
            if (uVar19 != 0) {
              piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
              do {
                if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar29 = piVar29 + 4;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar21 = *(undefined8 *)(lVar28 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar21,lVar20);
          pcVar38 = (code *)*puVar18;
        }
        pdVar16 = (dword *)(*pcVar38)(plVar1,plVar24,pdVar23,pdVar25,puVar18);
      }
    }
    else {
      if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar35 + 6) == 0)) goto code_r0x01e71bbc;
      iVar15 = func_0x00f78a44(lVar20);
      iVar14 = func_0x00f78ec0(lVar20);
      if (iVar15 == 0) {
        uVar4 = *(ushort *)(lVar20 + 0x48);
        if (iVar14 == 0) {
          lVar20 = *plVar24 + (ulong)uVar4 * 0x10;
          pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                       (plVar24,pdVar23,pdVar25,*(undefined8 *)(lVar20 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar20 = func_0x00f78a48(lVar20);
        lVar28 = *plVar24;
        uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
        if (uVar19 != 0) {
          piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
          do {
            if (*(long *)(piVar29 + -2) == lVar20) {
              puVar18 = (undefined8 *)(lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar29 = piVar29 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar24,lVar20,(ulong)uVar4);
code_r0x01e71d00:
        pcVar38 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar14 == 0) {
          uVar21 = *(undefined8 *)(*plVar24 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar28 = *plVar24;
          uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
          if (uVar19 != 0) {
            piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
            do {
              if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar29 = piVar29 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          lVar28 = func_0x00fac1f0(plVar24);
code_r0x01e71cd8:
          uVar21 = *(undefined8 *)(lVar28 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar21,lVar20);
        pcVar38 = (code *)*puVar18;
      }
      pdVar16 = (dword *)(*pcVar38)(plVar24,pdVar23,pdVar25,puVar18);
    }
  }
  else {
    if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar16 = (dword *)(*pcVar38)(plVar1,plVar24,pdVar23,pdVar25,lVar20);
  }
code_r0x01e71bd0:
  lVar17 = lVar17 + 1;
  if (lVar17 == lVar37) {
    return pdVar16;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar37,pdVar23,5,0);
    if ((uVar19 & 1) != 0) {
      return pdVar16;
    }
    pdVar16 = (dword *)(ulong)(iVar14 < iVar15);
    if (iVar15 == iVar14) {
      return pdVar16;
    }
    lVar37 = *(long *)(lVar17 + 0x78);
    iVar14 = iVar14 + 1;
    if (lVar37 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar37 + 0x18) <= iVar14 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar37 = *(long *)(*(long *)(lVar37 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
    if (lVar37 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x158fef0 | Atlas.Contexts.FrontEndContextPostQuickPlayState.PlayAgainSelected
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected
                  (long param_1,undefined8 param_2,undefined8 *param_3)

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
  int iVar14;
  long lVar15;
  long *plVar16;
  dword *pdVar17;
  undefined8 *puVar18;
  dword *pdVar19;
  long *extraout_x1;
  dword *pdVar20;
  dword *pdVar21;
  dword *pdVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  long unaff_x19;
  dword *pdVar29;
  undefined8 uVar30;
  dword *unaff_x20;
  undefined8 uVar31;
  dword *pdVar32;
  long unaff_x21;
  undefined8 uVar33;
  undefined8 unaff_x22;
  undefined8 uVar34;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar35;
  undefined8 unaff_x26;
  long lVar36;
  undefined8 unaff_x27;
  undefined1 *puVar37;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar38;
  code *unaff_x30;
  undefined8 uVar39;
  undefined4 extraout_s0;
  undefined8 uVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
code_r0x0158fef0:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar31 = 0x3eb5000;
    uVar25 = 0x3d40598;
    if ((bRam0000000003eb5135 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c0);
      func_0x00f78a20(0x3d27618);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5135 = 1;
    }
    lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
    if (lVar15 != 0) {
      lVar15 = *(long *)(lVar15 + 0x10);
      uVar25 = 0;
      if (lVar15 != 0) {
        unaff_x23 = 0x3d194c0;
        unaff_x22 = 0x3d25458;
        uVar25 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        *(undefined8 *)(lVar15 + 0x20) = uVar25;
        if (*(int *)(lVar15 + 0x10) == 2) {
          *(undefined8 *)(lVar15 + 0x18) = uVar25;
        }
        uVar31 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
        param_3 = (undefined8 *)0x0;
        Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                  (uVar31,lVar15);
        uVar25 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
        pdVar29 = *(dword **)(param_1 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar16 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
        param_1 = 0;
        if (pdVar29 != (dword *)0x0) {
          uVar25 = *(undefined8 *)((long)register0x00000008 + -0x10);
          uVar39 = *(undefined8 *)((long)register0x00000008 + -8);
          uVar40 = *(undefined8 *)((long)register0x00000008 + -0x20);
          uVar30 = *(undefined8 *)((long)register0x00000008 + -0x18);
          uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
          uVar33 = *(undefined8 *)((long)register0x00000008 + -0x28);
          unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
          unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
          goto System_Action_Type__bool__TransitionData___Invoke;
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar31;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
    puVar37 = (undefined1 *)((long)register0x00000008 + -0x50);
    uVar31 = 0x3eb5000;
    if ((bRam0000000003eb5136 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5136 = 1;
    }
    if (*(long *)(unaff_x19 + 0xa8) == 0) {
code_r0x01590110:
      puVar38 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    }
    else {
      uVar25 = 0x3d23000;
      uVar31 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(unaff_x19 + 0xa8),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      iVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar31,0);
      if (iVar13 != 0) {
        if (*(long *)(unaff_x19 + 0xa8) == 0) goto code_r0x01590110;
        uVar26 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(unaff_x19 + 0xa8),0);
        if ((uVar26 & 1) != 0) goto code_r0x015900fc;
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto code_r0x01590110;
        param_3 = (undefined8 *)0x0;
        iVar13 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(unaff_x19 + 0xb0),2);
        if (iVar13 == 0) goto code_r0x015900fc;
        *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
        unaff_x23 = 0x3d28bc0;
        unaff_x22 = 0x3d56c98;
        if ((bRam0000000003eb5134 & 1) == 0) {
          func_0x00f78a20(0x3d1feb8);
          func_0x00f78a20(0x3d56c98);
          func_0x00f78a20(0x3d28bb8);
          func_0x00f78a20(0x3d28bc0);
          bRam0000000003eb5134 = 1;
        }
        unaff_x20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
        /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(unaff_x20,0);
        unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
        param_3 = puRam0000000003d56c98;
        /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(unaff_x21,unaff_x19,puRam0000000003d56c98,0);
        if (unaff_x20 != (dword *)0x0) {
          unaff_x22 = 0x3d1feb8;
          *(long *)(unaff_x20 + 4) = unaff_x21;
          pdVar29 = *(dword **)(unaff_x19 + 0x80);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          unaff_x19 = 0;
          if (pdVar29 != (dword *)0x0) {
            pdVar19 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
            pdVar22 = (dword *)0x0;
            uVar31 = 0;
            uVar25 = *(undefined8 *)((long)register0x00000008 + -0x80);
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar25;
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x78);
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0x70);
            *(undefined8 *)((long)register0x00000008 + -0x68) =
                 *(undefined8 *)((long)register0x00000008 + -0x68);
            *(undefined8 *)((long)register0x00000008 + -0x60) =
                 *(undefined8 *)((long)register0x00000008 + -0x60);
            *(undefined8 *)((long)register0x00000008 + -0x58) =
                 *(undefined8 *)((long)register0x00000008 + -0x58);
            *(undefined8 *)((long)register0x00000008 + -0x50) =
                 *(undefined8 *)((long)register0x00000008 + -0x50);
            *(undefined8 *)((long)register0x00000008 + -0x48) =
                 *(undefined8 *)((long)register0x00000008 + -0x48);
            puVar37 = (undefined1 *)((long)register0x00000008 + -0x50);
            pdVar17 = (dword *)0x0;
            pdVar21 = unaff_x20;
            if ((bRam0000000003eb486f & 1) == 0) {
              func_0x00f78a20(0x3d53980);
              func_0x00f78a20(0x3d2fb90);
              func_0x00f78a20(0x3d6d050);
              bRam0000000003eb486f = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
            lVar15 = *(long *)(pdVar29 + 4);
            if (lVar15 == 0) {
              auVar41 = func_0x00f78af4();
              pdVar20 = auVar41._8_8_;
              *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar37;
              *(undefined **)((long)register0x00000008 + -0x98) =
                   &Atlas_UI_AtlasUIManager__ShowScreen;
              lVar15 = *(long *)(auVar41._0_8_ + 0x10);
              if (lVar15 == 0) {
                auVar41 = func_0x00f78af4();
                uVar31 = auVar41._8_8_;
                *(undefined1 **)((long)register0x00000008 + -0xb0) =
                     (undefined1 *)((long)register0x00000008 + -0xa0);
                *(undefined **)((long)register0x00000008 + -0xa8) =
                     &Atlas_UI_AtlasUIManager__HideScreen;
                lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                if (lVar15 != 0) {
                  pdVar22 = (dword *)0x0;
                  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
                  *(dword **)((long)register0x00000008 + -200) = unaff_x20;
                  *(dword **)((long)register0x00000008 + -0xc0) = pdVar29;
                  *(dword **)((long)register0x00000008 + -0xb8) = pdVar19;
                  *(undefined8 *)((long)register0x00000008 + -0xb0) =
                       *(undefined8 *)((long)register0x00000008 + -0xb0);
                  *(undefined8 *)((long)register0x00000008 + -0xa8) =
                       *(undefined8 *)((long)register0x00000008 + -0xa8);
                  if ((bRam0000000003ebc64b & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    func_0x00f78a20(0x3d3ddd0);
                    bRam0000000003ebc64b = 1;
                  }
                  lVar36 = *(long *)(lVar15 + 0x70);
                  if (lVar36 != 0) {
                    lVar23 = lVar36;
                    if (*(uint *)(lVar36 + 0x18) <= auVar41._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar23 = *(long *)(lVar15 + 0x70);
                    }
                    if (lVar23 != 0) {
                      lVar36 = *(long *)(lVar36 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
                      uVar40 = *(undefined8 *)(lVar36 + 0x28);
                      uVar25 = *(undefined8 *)(lVar36 + 0x20);
                      uVar2 = *(undefined4 *)(lVar36 + 0x42);
                      *(undefined4 *)((long)register0x00000008 + -0x118) = uVar2;
                      uVar5 = *(undefined2 *)(lVar36 + 0x46);
                      *(undefined2 *)((long)register0x00000008 + -0x114) = uVar5;
                      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar40;
                      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar25;
                      *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar40;
                      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar25;
                      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
                      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
                      *(undefined2 *)((long)register0x00000008 + -0xe0) = 1;
                      *(undefined4 *)((long)register0x00000008 + -0xde) = uVar2;
                      *(undefined2 *)((long)register0x00000008 + -0xda) = uVar5;
                      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar23,uVar31,
                                      (undefined1 *)((long)register0x00000008 + -0x100),
                                      uRam0000000003d3ddd0);
                      pdVar29 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar31);
                      return pdVar29;
                    }
                  }
                  auVar41 = func_0x00f78af4();
                  pdVar20 = auVar41._8_8_;
                  puVar11 = (undefined1 *)((long)register0x00000008 + -0x150);
                  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
                  *(long *)((long)register0x00000008 + -0x148) = lVar36;
                  *(long *)((long)register0x00000008 + -0x140) = lVar15;
                  *(undefined8 *)((long)register0x00000008 + -0x138) = uVar31;
                  *(undefined1 **)((long)register0x00000008 + -0x130) =
                       (undefined1 *)((long)register0x00000008 + -0xb0);
                  *(undefined **)((long)register0x00000008 + -0x128) =
                       &Core_UI2_UIManager__GetCurrentScreenID;
                  puVar37 = (undefined1 *)((long)register0x00000008 + -0x130);
                  if ((bRam0000000003ebc64c & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64c = 1;
                  }
                  lVar15 = *(long *)(auVar41._0_8_ + 0x70);
                  if (lVar15 != 0) {
                    if (*(uint *)(lVar15 + 0x18) <= auVar41._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 +
                                      0x28);
                    if (lVar15 == 0) {
                      pdVar29 = (dword *)0x0;
                    }
                    else {
                      pdVar29 = *(dword **)(lVar15 + 0x40);
                    }
                    return pdVar29;
                  }
                  puVar38 = &Core_UI2_UIScreen__ForceExit;
                  pdVar19 = (dword *)func_0x00f78af4();
                  pdVar29 = (dword *)0x0;
                  unaff_x20 = (dword *)0x3ebc000;
                  goto code_r0x02f882d8;
                }
                auVar41 = func_0x00f78af4();
                pdVar20 = auVar41._8_8_;
                *(undefined1 **)((long)register0x00000008 + -0xc0) =
                     (undefined1 *)((long)register0x00000008 + -0xb0);
                *(undefined **)((long)register0x00000008 + -0xb8) =
                     &Atlas_UI_AtlasUIManager__ClearLayer;
                lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                auVar41._8_8_ = unaff_x20;
                auVar41._0_8_ = lVar15;
                if (lVar15 != 0) {
                  pdVar22 = (dword *)0x0;
                  puVar6 = (undefined1 *)((long)register0x00000008 + -0xb0);
                  puVar37 = *(undefined1 **)((long)register0x00000008 + -0xc0);
                  puVar38 = *(undefined **)((long)register0x00000008 + -0xb8);
                  pdVar32 = pdVar29;
                  goto code_r0x02f877a8;
                }
                auVar41 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0xd0) =
                     (undefined1 *)((long)register0x00000008 + -0xc0);
                *(undefined **)((long)register0x00000008 + -200) =
                     &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
                lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                auVar41._8_8_ = auVar41._8_8_;
                auVar41._0_8_ = lVar15;
                if (lVar15 != 0) {
                  puVar7 = (undefined1 *)((long)register0x00000008 + -0xc0);
                  puVar37 = *(undefined1 **)((long)register0x00000008 + -0xd0);
                  puVar38 = *(undefined **)((long)register0x00000008 + -200);
                  pdVar20 = pdVar22;
                  break;
                }
                auVar41 = func_0x00f78af4();
                *(undefined1 **)((long)register0x00000008 + -0xe0) =
                     (undefined1 *)((long)register0x00000008 + -0xd0);
                *(undefined **)((long)register0x00000008 + -0xd8) =
                     &Atlas_UI_AtlasUIManager__IsLayerReady;
                lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                if (lVar15 == 0) {
                  auVar41 = func_0x00f78af4();
                  *(undefined1 **)((long)register0x00000008 + -0xf0) =
                       (undefined1 *)((long)register0x00000008 + -0xe0);
                  *(undefined **)((long)register0x00000008 + -0xe8) =
                       &Atlas_UI_AtlasUIManager__GetLayerState;
                  lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                  auVar42._8_8_ = auVar41._8_8_;
                  auVar42._0_8_ = lVar15;
                  if (lVar15 != 0) {
                    pdVar21 = (dword *)0x0;
                    puVar8 = (undefined1 *)((long)register0x00000008 + -0xe0);
                    puVar37 = *(undefined1 **)((long)register0x00000008 + -0xf0);
                    puVar38 = *(undefined **)((long)register0x00000008 + -0xe8);
                    goto code_r0x02f884dc;
                  }
                  auVar41 = func_0x00f78af4();
                  *(undefined1 **)((long)register0x00000008 + -0x100) =
                       (undefined1 *)((long)register0x00000008 + -0xf0);
                  *(undefined **)((long)register0x00000008 + -0xf8) =
                       &Atlas_UI_AtlasUIManager__EnableInput;
                  lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                  auVar43._8_8_ = auVar41._8_8_;
                  auVar43._0_8_ = lVar15;
                  if (lVar15 == 0) {
                    auVar41 = func_0x00f78af4();
                    *(undefined1 **)((long)register0x00000008 + -0x110) =
                         (undefined1 *)((long)register0x00000008 + -0x100);
                    *(undefined **)((long)register0x00000008 + -0x108) =
                         &Atlas_UI_AtlasUIManager__SetScreenVisible;
                    lVar15 = *(long *)(auVar41._0_8_ + 0x10);
                    auVar44._8_8_ = auVar41._8_8_;
                    auVar44._0_8_ = lVar15;
                    if (lVar15 == 0) {
                      pdVar17 = (dword *)func_0x00f78af4();
                      *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
                      *(dword **)((long)register0x00000008 + -0x138) = unaff_x20;
                      *(dword **)((long)register0x00000008 + -0x130) = pdVar29;
                      *(dword **)((long)register0x00000008 + -0x128) = pdVar19;
                      *(undefined1 **)((long)register0x00000008 + -0x120) =
                           (undefined1 *)((long)register0x00000008 + -0x110);
                      *(undefined **)((long)register0x00000008 + -0x118) =
                           &Atlas_UI_AtlasUIManager___ctor;
                      if ((bRam0000000003eb4871 & 1) == 0) {
                        func_0x00f78a20(0x3d2fb80);
                        func_0x00f78a20(0x3d1c478);
                        bRam0000000003eb4871 = 1;
                      }
                      uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
                      *(undefined8 *)(pdVar17 + 0xc) = uVar25;
                      return pdVar17;
                    }
                    puVar10 = (undefined1 *)((long)register0x00000008 + -0x100);
                    puVar37 = *(undefined1 **)((long)register0x00000008 + -0x110);
                    puVar38 = *(undefined **)((long)register0x00000008 + -0x108);
                    goto code_r0x02f88674;
                  }
                  puVar9 = (undefined1 *)((long)register0x00000008 + -0xf0);
                  puVar37 = *(undefined1 **)((long)register0x00000008 + -0x100);
                  puVar38 = *(undefined **)((long)register0x00000008 + -0xf8);
                  pdVar21 = pdVar22;
                  pdVar17 = unaff_x20;
                }
                else {
                  pdVar21 = (dword *)0x0;
                  puVar8 = (undefined1 *)((long)register0x00000008 + -0x100);
                  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
                  *(dword **)((long)register0x00000008 + -0xf8) = unaff_x20;
                  *(dword **)((long)register0x00000008 + -0xf0) = pdVar29;
                  *(dword **)((long)register0x00000008 + -0xe8) = pdVar19;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) =
                       *(undefined8 *)((long)register0x00000008 + -0xe0);
                  *(undefined8 *)((long)register0x00000008 + -0xd8) =
                       *(undefined8 *)((long)register0x00000008 + -0xd8);
                  puVar37 = (undefined1 *)((long)register0x00000008 + -0xe0);
                  unaff_x20 = (dword *)0x3ebc000;
                  if ((bRam0000000003ebc64f & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64f = 1;
                  }
                  uVar28 = auVar41._8_4_;
                  if (((int)uVar28 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar28)) {
                    return (dword *)0x0;
                  }
                  lVar15 = *(long *)(lVar15 + 0x70);
                  if (lVar15 != 0) {
                    if (*(uint *)(lVar15 + 0x18) <= uVar28) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar36 = *(long *)(lVar15 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
                    lVar15 = *(long *)(lVar36 + 0x28);
                    cVar3 = *(char *)(lVar36 + 0x40);
                    iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar36 + 0x30),0);
                    if (iVar13 == 0 || cVar3 != '\0') {
                      return (dword *)0x0;
                    }
                    if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
                      return (dword *)0x0;
                    }
                    return (dword *)((long)&MACH_HEADER.magic + 1);
                  }
                  puVar38 = &Core_UI2_UIManager__GetLayerState;
                  auVar42 = func_0x00f78af4();
                  pdVar29 = (dword *)0x0;
                  pdVar19 = auVar41._8_8_;
code_r0x02f884dc:
                  puVar9 = puVar8 + -0x30;
                  *(undefined8 *)(puVar8 + -0x30) = 0;
                  *(dword **)(puVar8 + -0x28) = unaff_x20;
                  *(dword **)(puVar8 + -0x20) = pdVar29;
                  *(dword **)(puVar8 + -0x18) = pdVar19;
                  *(undefined1 **)(puVar8 + -0x10) = puVar37;
                  *(undefined **)(puVar8 + -8) = puVar38;
                  puVar37 = puVar8 + -0x10;
                  if ((bRam0000000003ebc650 & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc650 = 1;
                  }
                  lVar15 = *(long *)(auVar42._0_8_ + 0x70);
                  if (lVar15 != 0) {
                    if (*(uint *)(lVar15 + 0x18) <= auVar42._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 +
                                      0x28);
                    if (lVar15 == 0) {
                      pdVar29 = &MACH_HEADER.cputype;
                    }
                    else {
                      pdVar29 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
                    }
                    return pdVar29;
                  }
                  puVar38 = &Core_UI2_UIManager__EnableInput;
                  auVar43 = func_0x00f78af4();
                  pdVar29 = (dword *)0x0;
                  pdVar19 = auVar42._8_8_;
                  pdVar17 = (dword *)0x3ebc000;
                }
                pdVar20 = auVar43._8_8_;
                unaff_x20 = auVar43._0_8_;
                puVar10 = puVar9 + -0x40;
                *(undefined8 *)(puVar9 + -0x40) = uVar25;
                *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
                *(undefined8 *)(puVar9 + -0x30) = 0;
                *(dword **)(puVar9 + -0x28) = pdVar17;
                *(dword **)(puVar9 + -0x20) = pdVar29;
                *(dword **)(puVar9 + -0x18) = pdVar19;
                *(undefined1 **)(puVar9 + -0x10) = puVar37;
                *(undefined **)(puVar9 + -8) = puVar38;
                puVar37 = puVar9 + -0x10;
                pdVar17 = (dword *)0x3ebc000;
                pdVar22 = pdVar21;
                if ((bRam0000000003ebc651 & 1) == 0) {
                  func_0x00f78a20(0x3d2a5c0);
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc651 = 1;
                }
                if (*(long *)(unaff_x20 + 0x1a) != 0) {
                  pdVar22 = (dword *)(ulong)((uint)pdVar21 ^ 1);
                  pdVar29 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x20 + 0x1a),pdVar20,pdVar22,0);
                  lVar15 = *(long *)(unaff_x20 + 0x1c);
                  pdVar17 = (dword *)0x0;
                  if (lVar15 != 0) {
                    uVar28 = auVar43._8_4_;
                    if (*(uint *)(lVar15 + 0x18) <= uVar28) {
                      pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0)
                       || (pdVar17 = *(dword **)(unaff_x20 + 0xc), pdVar17 == (dword *)0x0)) {
                      return pdVar29;
                    }
                    lVar15 = *(long *)(unaff_x20 + 0x1c);
                    unaff_x20 = (dword *)0x0;
                    if (lVar15 != 0) {
                      if (*(uint *)(lVar15 + 0x18) <= uVar28) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      plVar16 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 +
                                          0x28);
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
                      *(dword **)(puVar9 + -0x68) = pdVar17;
                      lVar15 = *(long *)(pdVar17 + 0x1a);
                      if (lVar15 == 0) {
                        puVar37 = puVar9 + -0x68;
                        lVar36 = 1;
                      }
                      else {
                        lVar36 = *(long *)(lVar15 + 0x18);
                        if (lVar36 == 0) {
                          return pdVar17;
                        }
                        puVar37 = (undefined1 *)(lVar15 + 0x20);
                      }
                      lVar15 = 0;
                      goto code_r0x01e71a74;
                    }
                  }
                }
                puVar38 = &Core_UI2_UIManager__SetScreenVisible;
                auVar44 = func_0x00f78af4();
                pdVar19 = pdVar21;
                pdVar29 = pdVar20;
code_r0x02f88674:
                pdVar21 = auVar44._0_8_;
                *(dword **)(puVar10 + -0x30) = pdVar17;
                *(dword **)(puVar10 + -0x28) = unaff_x20;
                *(dword **)(puVar10 + -0x20) = pdVar29;
                *(dword **)(puVar10 + -0x18) = pdVar19;
                *(undefined1 **)(puVar10 + -0x10) = puVar37;
                *(undefined **)(puVar10 + -8) = puVar38;
                pdVar29 = pdVar21;
                if ((bRam0000000003ebc652 & 1) == 0) {
                  pdVar29 = (dword *)func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc652 = 1;
                }
                lVar15 = *(long *)(pdVar21 + 0x1c);
                if (lVar15 != 0) {
                  uVar28 = auVar44._8_4_;
                  if (*(uint *)(lVar15 + 0x18) <= uVar28) {
                    pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
                    return pdVar29;
                  }
                  lVar15 = *(long *)(pdVar21 + 0x1c);
                  if (lVar15 != 0) {
                    if (*(uint *)(lVar15 + 0x18) <= uVar28) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
                    if ((lVar15 != 0) &&
                       (plVar16 = *(long **)(lVar15 + 0x28), plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pdVar29 = (dword *)(**(code **)(*plVar16 + 0x178))
                                                   (plVar16,pdVar22,
                                                    *(undefined8 *)(*plVar16 + 0x180));
                      return pdVar29;
                    }
                  }
                }
                auVar41 = func_0x00f78af4();
                uVar25 = auVar41._0_8_;
                *(long *)(puVar10 + -0x50) = auVar44._8_8_;
                *(dword **)(puVar10 + -0x48) = pdVar22;
                *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
                *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
                *(undefined8 *)(puVar10 + -0x68) = 0;
                *(undefined8 *)(puVar10 + -0x70) = 0;
                *(undefined8 *)(puVar10 + -0x58) = 0;
                *(undefined8 *)(puVar10 + -0x60) = 0;
                pdVar29 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar41._8_8_,puVar10 + -0x70);
                if ((int)pdVar29 != 0) {
                  /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,*(undefined8 *)(puVar10 + -0x60),
                                  *(undefined8 *)(puVar10 + -0x58));
                  *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
                  *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
                  *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
                  *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
                  pdVar29 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,puVar10 + -0x90,1);
                }
                return pdVar29;
              }
              puVar37 = *(undefined1 **)((long)register0x00000008 + -0xa0);
              puVar38 = *(undefined **)((long)register0x00000008 + -0x98);
            }
            else {
              pdVar22 = (dword *)0x0;
              uVar31 = 0;
              puVar38 = &UNK_01470820;
              pdVar20 = pdVar19;
              pdVar21 = unaff_x20;
            }
            *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar25;
            *(undefined8 *)((long)register0x00000008 + -200) = 0x3eb4000;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(dword **)((long)register0x00000008 + -0xb8) = unaff_x20;
            *(dword **)((long)register0x00000008 + -0xb0) = pdVar29;
            *(dword **)((long)register0x00000008 + -0xa8) = pdVar19;
            *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar37;
            *(undefined **)((long)register0x00000008 + -0x98) = puVar38;
            if ((bRam0000000003ebc64a & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64a = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x168) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3ebc000;
            *(dword **)((long)register0x00000008 + -0x158) = pdVar20;
            *(dword **)((long)register0x00000008 + -0x150) = pdVar21;
            *(undefined8 *)((long)register0x00000008 + -0x148) = uVar31;
            *(long *)((long)register0x00000008 + -0x140) = lVar15;
            *(dword **)((long)register0x00000008 + -0x138) = pdVar22;
            *(undefined1 **)((long)register0x00000008 + -0x130) =
                 (undefined1 *)((long)register0x00000008 + -0xa0);
            *(undefined **)((long)register0x00000008 + -0x128) = &UNK_02f87f9c;
            if ((bRam0000000003ebc64e & 1) == 0) {
              func_0x00f78a20(0x3d3ddf0);
              func_0x00f78a20(0x3d3ddf8);
              bRam0000000003ebc64e = 1;
            }
            lVar36 = *(long *)(lVar15 + 0x78);
            if (lVar36 == 0) goto code_r0x02f8812c;
            iVar13 = *(int *)(lVar36 + 0x18);
            if (iVar13 < 1) {
              return (dword *)0x0;
            }
            iVar14 = 1;
            pdVar29 = (dword *)((long)&MACH_HEADER.magic + 1);
            goto code_r0x02f880d0;
          }
        }
        unaff_x30 = Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
        param_1 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        goto code_r0x0158fef0;
      }
code_r0x015900fc:
      puVar37 = *(undefined1 **)((long)register0x00000008 + -0x50);
      puVar38 = *(undefined **)((long)register0x00000008 + -0x48);
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0x60);
      plVar16 = (long *)((long)register0x00000008 + -0x58);
      unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x70);
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x68);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      param_1 = unaff_x19;
      unaff_x19 = *plVar16;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar31;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar37;
    *(undefined **)((long)register0x00000008 + -8) = puVar38;
    uVar31 = 0x3eb5000;
    if ((bRam0000000003eb5137 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d27628);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5137 = 1;
    }
    if (*(long *)(param_1 + 0xb8) == 0) goto code_r0x0159024c;
    iVar13 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb8),0);
    if (iVar13 == 0) goto code_r0x015901a0;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(code **)((long)register0x00000008 + -8);
    unaff_x20 = *(dword **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
  } while( true );
code_r0x02f883b0:
  puVar6 = puVar7 + -0x30;
  *(dword **)(puVar7 + -0x30) = pdVar17;
  *(dword **)(puVar7 + -0x28) = unaff_x20;
  *(dword **)(puVar7 + -0x20) = pdVar29;
  *(dword **)(puVar7 + -0x18) = pdVar19;
  *(undefined1 **)(puVar7 + -0x10) = puVar37;
  *(undefined **)(puVar7 + -8) = puVar38;
  puVar37 = puVar7 + -0x10;
  puVar38 = &UNK_02f883d8;
  pdVar22 = pdVar20;
  pdVar19 = pdVar21;
  pdVar32 = pdVar20;
  pdVar17 = auVar41._0_8_;
code_r0x02f877a8:
  pdVar29 = auVar41._0_8_;
  puVar11 = puVar6 + -0x60;
  *(dword **)(puVar6 + -0x30) = pdVar17;
  *(long *)(puVar6 + -0x28) = auVar41._8_8_;
  *(dword **)(puVar6 + -0x20) = pdVar32;
  *(dword **)(puVar6 + -0x18) = pdVar19;
  *(undefined1 **)(puVar6 + -0x10) = puVar37;
  *(undefined **)(puVar6 + -8) = puVar38;
  puVar37 = puVar6 + -0x10;
  pdVar19 = pdVar29;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar28 = (uint)pdVar20;
  if (((int)uVar28 < 0) || ((int)*(long *)(pdVar29 + 0x14) <= (int)uVar28)) {
    return pdVar19;
  }
  lVar15 = *(long *)(pdVar29 + 0x1c);
  if (lVar15 == 0) {
code_r0x02f878a4:
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar17;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar29;
    *(dword **)(puVar6 + -0x78) = pdVar20;
    *(undefined1 **)(puVar6 + -0x70) = puVar37;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
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
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar13 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar13);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
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
    pdVar29 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
    return pdVar29;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar28) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar20 & 0xffffffff) * 0x28;
  pdVar17 = *(dword **)(lVar15 + 0x20);
  pdVar19 = *(dword **)(lVar15 + 0x28);
  *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
  *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
  if (pdVar19 == (dword *)0x0) {
    lVar15 = *(long *)(pdVar29 + 0x1c);
    if (lVar15 != 0) {
      *(dword **)(puVar6 + -0x58) = pdVar17;
      *(undefined8 *)(puVar6 + -0x50) = 0;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined2 *)(puVar6 + -0x38) = 0;
      *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
      *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
      pdVar29 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar20,puVar6 + -0x58,uRam0000000003d3ddd0);
      return pdVar29;
    }
    goto code_r0x02f878a4;
  }
  puVar38 = &UNK_02f87848;
  unaff_x20 = pdVar19;
code_r0x02f882d8:
  *(dword **)(puVar11 + -0x20) = pdVar29;
  *(dword **)(puVar11 + -0x18) = pdVar20;
  *(undefined1 **)(puVar11 + -0x10) = puVar37;
  *(undefined **)(puVar11 + -8) = puVar38;
  (**(code **)(*(long *)pdVar19 + 0x218))(pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x220));
  if (*(long *)(pdVar19 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar19 + 10),0);
    pdVar19[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar29 = (dword *)(**(code **)(*(long *)pdVar19 + 0x228))
                                 (pdVar19,*(undefined8 *)(*(long *)pdVar19 + 0x230));
    return pdVar29;
  }
  func_0x00f78af4();
  puVar7 = puVar11 + -0x40;
  *(dword **)(puVar11 + -0x40) = pdVar29;
  *(dword **)(puVar11 + -0x38) = pdVar19;
  *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar37 = puVar11 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar15 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar25 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar15);
    pdVar29 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar29;
  }
  puVar38 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar41 = func_0x00f78af4();
  pdVar20 = pdVar22;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar23 = *(long *)(puVar37 + lVar15 * 8);
  pcVar35 = *(code **)(lVar23 + 0x10);
  plVar1 = *(long **)(lVar23 + 0x20);
  lVar23 = *(long *)(lVar23 + 0x28);
  if (*(short *)(lVar23 + 0x48) == -1) {
    func_0x00f78ad8(lVar23);
  }
  iVar13 = func_0x00f78a4c(lVar23);
  bVar12 = *(char *)(lVar23 + 0x4a) == '\x03';
  if (iVar13 == 0) {
    if (bVar12) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar29 = (dword *)(*pcVar35)(plVar16,pdVar20,pdVar21,lVar23);
      }
      else {
        if (((*(short *)(lVar23 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e71aac;
        iVar13 = func_0x00f78a44(lVar23);
        iVar14 = func_0x00f78ec0(lVar23);
        if (iVar13 == 0) {
          uVar4 = *(ushort *)(lVar23 + 0x48);
          if (iVar14 == 0) {
            lVar23 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar29 = (dword *)(**(code **)(lVar23 + 0x138))
                                         (plVar1,plVar16,pdVar20,pdVar21,
                                          *(undefined8 *)(lVar23 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar23 = func_0x00f78a48(lVar23);
          lVar24 = *plVar1;
          uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar23) {
                puVar18 = (undefined8 *)
                          (lVar24 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar27 = piVar27 + 4;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar23,(ulong)uVar4);
code_r0x01e71d74:
          pcVar35 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          if (iVar14 == 0) {
            uVar25 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar24 = *plVar1;
            uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
            if (uVar26 != 0) {
              piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)(lVar23 + 0x18)) {
                  lVar24 = lVar24 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar27 = piVar27 + 4;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            lVar24 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar25 = *(undefined8 *)(lVar24 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
          pcVar35 = (code *)*puVar18;
        }
        pdVar29 = (dword *)(*pcVar35)(plVar1,plVar16,pdVar20,pdVar21,puVar18);
      }
    }
    else {
      if ((*(short *)(lVar23 + 0x48) == -1) || (*(long *)(pdVar17 + 6) == 0)) goto code_r0x01e71bbc;
      iVar13 = func_0x00f78a44(lVar23);
      iVar14 = func_0x00f78ec0(lVar23);
      if (iVar13 == 0) {
        uVar4 = *(ushort *)(lVar23 + 0x48);
        if (iVar14 == 0) {
          lVar23 = *plVar16 + (ulong)uVar4 * 0x10;
          pdVar29 = (dword *)(**(code **)(lVar23 + 0x138))
                                       (plVar16,pdVar20,pdVar21,*(undefined8 *)(lVar23 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar23 = func_0x00f78a48(lVar23);
        lVar24 = *plVar16;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar23) {
              puVar18 = (undefined8 *)(lVar24 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar27 = piVar27 + 4;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar16,lVar23,(ulong)uVar4);
code_r0x01e71d00:
        pcVar35 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar14 == 0) {
          uVar25 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar24 = *plVar16;
          uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar26 != 0) {
            piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)(lVar23 + 0x18)) {
                lVar24 = lVar24 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar27 = piVar27 + 4;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
          lVar24 = func_0x00fac1f0(plVar16);
code_r0x01e71cd8:
          uVar25 = *(undefined8 *)(lVar24 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
        pcVar35 = (code *)*puVar18;
      }
      pdVar29 = (dword *)(*pcVar35)(plVar16,pdVar20,pdVar21,puVar18);
    }
  }
  else {
    if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar29 = (dword *)(*pcVar35)(plVar1,plVar16,pdVar20,pdVar21,lVar23);
  }
code_r0x01e71bd0:
  lVar15 = lVar15 + 1;
  if (lVar15 == lVar36) {
    return pdVar29;
  }
  goto code_r0x01e71a74;
code_r0x015901a0:
  lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
  if (lVar15 != 0) {
    uVar25 = *(undefined8 *)(lVar15 + 0x10);
    uVar31 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
    param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor(uVar31,uVar25,1,0)
    ;
    uVar25 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
    pdVar29 = *(dword **)(param_1 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
    param_1 = 0;
    if (pdVar29 != (dword *)0x0) {
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar39 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar40 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0x18);
      uVar34 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar33 = *(undefined8 *)((long)register0x00000008 + -0x28);
System_Action_Type__bool__TransitionData___Invoke:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar34;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar33;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar40;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar25;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar39;
      *(dword **)((long)register0x00000008 + -0x68) = pdVar29;
      lVar15 = *(long *)(pdVar29 + 0x1a);
      if (lVar15 == 0) {
        puVar37 = (undefined1 *)((long)register0x00000008 + -0x68);
        lVar36 = 1;
      }
      else {
        lVar36 = *(long *)(lVar15 + 0x18);
        if (lVar36 == 0) {
          return pdVar29;
        }
        puVar37 = (undefined1 *)(lVar15 + 0x20);
      }
      lVar15 = 0;
      do {
        lVar23 = *(long *)(puVar37 + lVar15 * 8);
        pcVar35 = *(code **)(lVar23 + 0x10);
        plVar1 = *(long **)(lVar23 + 0x20);
        lVar23 = *(long *)(lVar23 + 0x28);
        if (*(short *)(lVar23 + 0x48) == -1) {
          func_0x00f78ad8(lVar23);
        }
        iVar13 = func_0x00f78a4c(lVar23);
        bVar12 = *(char *)(lVar23 + 0x4a) == '\x03';
        if (iVar13 == 0) {
          if (bVar12) {
            if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
              pdVar17 = (dword *)(*pcVar35)(plVar16,0,uVar31,lVar23);
            }
            else {
              if (((*(short *)(lVar23 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (*(long *)(pdVar29 + 6) == 0)) goto code_r0x01e7162c;
              iVar13 = func_0x00f78a44(lVar23);
              iVar14 = func_0x00f78ec0(lVar23);
              if (iVar13 == 0) {
                uVar4 = *(ushort *)(lVar23 + 0x48);
                if (iVar14 == 0) {
                  lVar23 = *plVar1 + (ulong)uVar4 * 0x10;
                  pdVar17 = (dword *)(**(code **)(lVar23 + 0x138))
                                               (plVar1,plVar16,0,uVar31,
                                                *(undefined8 *)(lVar23 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar23 = func_0x00f78a48(lVar23);
                lVar24 = *plVar1;
                uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
                if (uVar26 != 0) {
                  piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar23) {
                      puVar18 = (undefined8 *)
                                (lVar24 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e718f4;
                    }
                    piVar27 = piVar27 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar23,(ulong)uVar4);
code_r0x01e718f4:
                pcVar35 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar24 = *plVar1;
                  uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
                  if (uVar26 != 0) {
                    piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar23 + 0x18)) {
                        lVar24 = lVar24 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar23 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e718cc;
                      }
                      piVar27 = piVar27 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  lVar24 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                  uVar25 = *(undefined8 *)(lVar24 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
                pcVar35 = (code *)*puVar18;
              }
              pdVar17 = (dword *)(*pcVar35)(plVar1,plVar16,0,uVar31,puVar18);
            }
          }
          else {
            if ((*(short *)(lVar23 + 0x48) == -1) || (*(long *)(pdVar29 + 6) == 0))
            goto code_r0x01e7173c;
            iVar13 = func_0x00f78a44(lVar23);
            iVar14 = func_0x00f78ec0(lVar23);
            if (iVar13 == 0) {
              uVar4 = *(ushort *)(lVar23 + 0x48);
              if (iVar14 == 0) {
                lVar23 = *plVar16 + (ulong)uVar4 * 0x10;
                pdVar17 = (dword *)(**(code **)(lVar23 + 0x138))
                                             (plVar16,0,uVar31,*(undefined8 *)(lVar23 + 0x140));
                goto code_r0x01e71750;
              }
              lVar23 = func_0x00f78a48(lVar23);
              lVar24 = *plVar16;
              uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
              if (uVar26 != 0) {
                piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == lVar23) {
                    puVar18 = (undefined8 *)
                              (lVar24 + (long)(int)(*piVar27 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01e71880;
                  }
                  piVar27 = piVar27 + 4;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar16,lVar23,(ulong)uVar4);
code_r0x01e71880:
              pcVar35 = (code *)*puVar18;
              puVar18 = (undefined8 *)puVar18[1];
            }
            else {
              if (iVar14 == 0) {
                uVar25 = *(undefined8 *)
                          (*plVar16 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar24 = *plVar16;
                uVar26 = (ulong)*(ushort *)(lVar24 + 0x12a);
                if (uVar26 != 0) {
                  piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == *(long *)(lVar23 + 0x18)) {
                      lVar24 = lVar24 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar23 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e71858;
                    }
                    piVar27 = piVar27 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                lVar24 = func_0x00fac1f0(plVar16);
code_r0x01e71858:
                uVar25 = *(undefined8 *)(lVar24 + 8);
              }
              puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
              pcVar35 = (code *)*puVar18;
            }
            pdVar17 = (dword *)(*pcVar35)(plVar16,0,uVar31,puVar18);
          }
        }
        else {
          if (bVar12) goto code_r0x01e7173c;
code_r0x01e7162c:
          pdVar17 = (dword *)(*pcVar35)(plVar1,plVar16,0,uVar31,lVar23);
        }
code_r0x01e71750:
        lVar15 = lVar15 + 1;
        if (lVar15 == lVar36) {
          return pdVar17;
        }
      } while( true );
    }
  }
code_r0x0159024c:
  pdVar29 = (dword *)func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar31;
  *(long *)((long)register0x00000008 + -0x48) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
  if ((bRam0000000003eb5138 & 1) == 0) {
    func_0x00f78a20(0x3d40590);
    bRam0000000003eb5138 = 1;
  }
  if (pdVar29 == (dword *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    auVar41 = func_0x00f78af4(0,uRam0000000003d40590);
    pdVar29 = auVar41._0_8_;
    *(undefined8 *)(pdVar29 + 4) = *param_3;
    *(long *)(pdVar29 + 8) = auVar41._8_8_;
    *(undefined8 **)(pdVar29 + 10) = param_3;
    return pdVar29;
  }
  return pdVar29;
  while( true ) {
    uVar26 = /*System.String$$Equals*/ func_0x029caa48(lVar36,pdVar20,5,0);
    if ((uVar26 & 1) != 0) {
      return pdVar29;
    }
    pdVar29 = (dword *)(ulong)(iVar14 < iVar13);
    if (iVar13 == iVar14) {
      return pdVar29;
    }
    lVar36 = *(long *)(lVar15 + 0x78);
    iVar14 = iVar14 + 1;
    if (lVar36 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar36 + 0x18) <= iVar14 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar36 = *(long *)(*(long *)(lVar36 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
    if (lVar36 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x1590040 | Atlas.Contexts.FrontEndContextPostQuickPlayState.ExitPostEventSelected
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected
                  (long param_1,undefined8 param_2,undefined8 *param_3)

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
  int iVar15;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  dword *pdVar21;
  long *extraout_x1;
  dword *pdVar22;
  long *plVar23;
  dword *pdVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  dword *pdVar30;
  long unaff_x19;
  undefined8 uVar31;
  undefined8 unaff_x20;
  undefined8 uVar32;
  undefined8 unaff_x21;
  undefined8 uVar33;
  dword *pdVar34;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar35;
  undefined8 unaff_x25;
  code *pcVar36;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar37;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar38;
  code *unaff_x30;
  undefined8 uVar39;
  undefined4 extraout_s0;
  undefined8 uVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
code_r0x01590040:
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar37 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar32 = 0x3eb5000;
  if ((bRam0000000003eb5136 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5136 = 1;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
LAB_01590110:
    puVar38 = &Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
    unaff_x19 = func_0x00f78af4();
code_r0x01590114:
    *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar11 + -0x20) = uVar32;
    *(long *)(puVar11 + -0x18) = param_1;
    *(undefined1 **)(puVar11 + -0x10) = puVar37;
    *(undefined **)(puVar11 + -8) = puVar38;
    unaff_x20 = 0x3eb5000;
    if ((bRam0000000003eb5137 & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d27628);
      func_0x00f78a20(0x3d40598);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb5137 = 1;
    }
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      iVar14 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(unaff_x19 + 0xb8),0);
      if (iVar14 != 0) {
        puVar37 = *(undefined1 **)(puVar11 + -0x10);
        pcVar36 = *(code **)(puVar11 + -8);
        pdVar16 = *(dword **)(puVar11 + -0x20);
        param_1 = *(long *)(puVar11 + -0x18);
        unaff_x22 = *(undefined8 *)(puVar11 + -0x30);
        lVar17 = *(long *)(puVar11 + -0x28);
        goto code_r0x0158fef0;
      }
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(unaff_x19,uRam0000000003d40598);
      if (lVar17 != 0) {
        uVar32 = *(undefined8 *)(lVar17 + 0x10);
        unaff_x20 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
        param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor
                  (unaff_x20,uVar32,1,0);
        unaff_x21 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
        pdVar16 = *(dword **)(unaff_x19 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar23 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
        unaff_x19 = 0;
        if (pdVar16 == (dword *)0x0) goto code_r0x0159024c;
        uVar32 = *(undefined8 *)(puVar11 + -0x10);
        uVar39 = *(undefined8 *)(puVar11 + -8);
        uVar26 = *(undefined8 *)(puVar11 + -0x20);
        uVar31 = *(undefined8 *)(puVar11 + -0x18);
        uVar40 = *(undefined8 *)(puVar11 + -0x30);
        uVar33 = *(undefined8 *)(puVar11 + -0x28);
        goto System_Action_Type__bool__TransitionData___Invoke;
      }
    }
code_r0x0159024c:
    pdVar16 = (dword *)func_0x00f78af4();
    *(undefined8 *)(puVar11 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x58) = unaff_x21;
    *(undefined8 *)(puVar11 + -0x50) = unaff_x20;
    *(long *)(puVar11 + -0x48) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x38) = &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
    if ((bRam0000000003eb5138 & 1) == 0) {
      func_0x00f78a20(0x3d40590);
      bRam0000000003eb5138 = 1;
    }
    if (pdVar16 == (dword *)0x0) {
      *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
      *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
      auVar41 = func_0x00f78af4(0,uRam0000000003d40590);
      pdVar16 = auVar41._0_8_;
      *(undefined8 *)(pdVar16 + 4) = *param_3;
      *(long *)(pdVar16 + 8) = auVar41._8_8_;
      *(undefined8 **)(pdVar16 + 10) = param_3;
      return pdVar16;
    }
    return pdVar16;
  }
  unaff_x21 = 0x3d23000;
  uVar32 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(param_1 + 0xa8),0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_3 = (undefined8 *)0x0;
  iVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar32,0);
  if (iVar14 == 0) {
LAB_015900fc:
    puVar37 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar38 = *(undefined **)((long)register0x00000008 + -8);
    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    puVar11 = (undefined1 *)register0x00000008;
    unaff_x19 = param_1;
    param_1 = *(long *)((long)register0x00000008 + -0x18);
    goto code_r0x01590114;
  }
  if (*(long *)(param_1 + 0xa8) == 0) goto LAB_01590110;
  uVar18 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(param_1 + 0xa8),0);
  if ((uVar18 & 1) != 0) goto LAB_015900fc;
  if (*(long *)(param_1 + 0xb0) == 0) goto LAB_01590110;
  param_3 = (undefined8 *)0x0;
  iVar14 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(param_1 + 0xb0),2);
  if (iVar14 == 0) goto LAB_015900fc;
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
  puVar37 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x23 = 0x3d28bc0;
  unaff_x22 = 0x3d56c98;
  if ((bRam0000000003eb5134 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56c98);
    func_0x00f78a20(0x3d28bb8);
    func_0x00f78a20(0x3d28bc0);
    bRam0000000003eb5134 = 1;
  }
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
  /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar16,0);
  lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
  param_3 = puRam0000000003d56c98;
  /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar17,param_1,puRam0000000003d56c98,0);
  if (pdVar16 != (dword *)0x0) {
    unaff_x22 = 0x3d1feb8;
    *(long *)(pdVar16 + 4) = lVar17;
    pdVar30 = *(dword **)(param_1 + 0x80);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    if (pdVar30 != (dword *)0x0) {
      pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
      pdVar25 = (dword *)0x0;
      uVar26 = 0;
      uVar32 = *(undefined8 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)((long)register0x00000008 + -0x40) = uVar32;
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
      puVar37 = (undefined1 *)((long)register0x00000008 + -0x10);
      pdVar34 = (dword *)0x0;
      pdVar24 = pdVar16;
      if ((bRam0000000003eb486f & 1) == 0) {
        func_0x00f78a20(0x3d53980);
        func_0x00f78a20(0x3d2fb90);
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb486f = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      lVar17 = *(long *)(pdVar30 + 4);
      if (lVar17 == 0) {
        auVar41 = func_0x00f78af4();
        pdVar22 = auVar41._8_8_;
        *(undefined1 **)((long)register0x00000008 + -0x60) = puVar37;
        *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
        lVar17 = *(long *)(auVar41._0_8_ + 0x10);
        if (lVar17 == 0) {
          auVar41 = func_0x00f78af4();
          uVar26 = auVar41._8_8_;
          *(undefined1 **)((long)register0x00000008 + -0x70) =
               (undefined1 *)((long)register0x00000008 + -0x60);
          *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
          lVar17 = *(long *)(auVar41._0_8_ + 0x10);
          if (lVar17 != 0) {
            pdVar25 = (dword *)0x0;
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
            *(dword **)((long)register0x00000008 + -0x88) = pdVar16;
            *(dword **)((long)register0x00000008 + -0x80) = pdVar30;
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
            lVar35 = *(long *)(lVar17 + 0x70);
            if (lVar35 != 0) {
              lVar20 = lVar35;
              if (*(uint *)(lVar35 + 0x18) <= auVar41._8_4_) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                lVar20 = *(long *)(lVar17 + 0x70);
              }
              if (lVar20 != 0) {
                lVar35 = *(long *)(lVar35 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
                uVar40 = *(undefined8 *)(lVar35 + 0x28);
                uVar32 = *(undefined8 *)(lVar35 + 0x20);
                uVar2 = *(undefined4 *)(lVar35 + 0x42);
                *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar2;
                uVar5 = *(undefined2 *)(lVar35 + 0x46);
                *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar5;
                *(undefined8 *)((long)register0x00000008 + -200) = uVar40;
                *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar40;
                *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
                *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
                *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
                *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar2;
                *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar5;
                /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar26,(undefined1 *)((long)register0x00000008 + -0xc0),
                                uRam0000000003d3ddd0);
                pdVar16 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,uVar26);
                return pdVar16;
              }
            }
            auVar41 = func_0x00f78af4();
            pdVar22 = auVar41._8_8_;
            puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
            *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
            *(long *)((long)register0x00000008 + -0x108) = lVar35;
            *(long *)((long)register0x00000008 + -0x100) = lVar17;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar26;
            *(undefined1 **)((long)register0x00000008 + -0xf0) =
                 (undefined1 *)((long)register0x00000008 + -0x70);
            *(undefined **)((long)register0x00000008 + -0xe8) =
                 &Core_UI2_UIManager__GetCurrentScreenID;
            puVar37 = (undefined1 *)((long)register0x00000008 + -0xf0);
            if ((bRam0000000003ebc64c & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              bRam0000000003ebc64c = 1;
            }
            lVar17 = *(long *)(auVar41._0_8_ + 0x70);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= auVar41._8_4_) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
              if (lVar17 == 0) {
                pdVar16 = (dword *)0x0;
              }
              else {
                pdVar16 = *(dword **)(lVar17 + 0x40);
              }
              return pdVar16;
            }
            puVar38 = &Core_UI2_UIScreen__ForceExit;
            pdVar21 = (dword *)func_0x00f78af4();
            pdVar30 = (dword *)0x0;
            pdVar16 = (dword *)0x3ebc000;
            goto code_r0x02f882d8;
          }
          auVar41 = func_0x00f78af4();
          pdVar22 = auVar41._8_8_;
          *(undefined1 **)((long)register0x00000008 + -0x80) =
               (undefined1 *)((long)register0x00000008 + -0x70);
          *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
          lVar17 = *(long *)(auVar41._0_8_ + 0x10);
          auVar41._8_8_ = pdVar16;
          auVar41._0_8_ = lVar17;
          if (lVar17 != 0) {
            pdVar25 = (dword *)0x0;
            puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
            puVar37 = *(undefined1 **)((long)register0x00000008 + -0x80);
            puVar38 = *(undefined **)((long)register0x00000008 + -0x78);
            pdVar16 = pdVar30;
            goto code_r0x02f877a8;
          }
          auVar41 = func_0x00f78af4();
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined **)((long)register0x00000008 + -0x88) =
               &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          lVar17 = *(long *)(auVar41._0_8_ + 0x10);
          auVar41._8_8_ = auVar41._8_8_;
          auVar41._0_8_ = lVar17;
          if (lVar17 != 0) {
            puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
            puVar37 = *(undefined1 **)((long)register0x00000008 + -0x90);
            puVar38 = *(undefined **)((long)register0x00000008 + -0x88);
            pdVar22 = pdVar25;
            goto code_r0x02f883b0;
          }
          auVar41 = func_0x00f78af4();
          *(undefined1 **)((long)register0x00000008 + -0xa0) =
               (undefined1 *)((long)register0x00000008 + -0x90);
          *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady
          ;
          lVar17 = *(long *)(auVar41._0_8_ + 0x10);
          if (lVar17 == 0) {
            auVar41 = func_0x00f78af4();
            *(undefined1 **)((long)register0x00000008 + -0xb0) =
                 (undefined1 *)((long)register0x00000008 + -0xa0);
            *(undefined **)((long)register0x00000008 + -0xa8) =
                 &Atlas_UI_AtlasUIManager__GetLayerState;
            lVar17 = *(long *)(auVar41._0_8_ + 0x10);
            auVar42._8_8_ = auVar41._8_8_;
            auVar42._0_8_ = lVar17;
            if (lVar17 != 0) {
              pdVar24 = (dword *)0x0;
              puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
              puVar37 = *(undefined1 **)((long)register0x00000008 + -0xb0);
              puVar38 = *(undefined **)((long)register0x00000008 + -0xa8);
              goto code_r0x02f884dc;
            }
            auVar41 = func_0x00f78af4();
            *(undefined1 **)((long)register0x00000008 + -0xc0) =
                 (undefined1 *)((long)register0x00000008 + -0xb0);
            *(undefined **)((long)register0x00000008 + -0xb8) =
                 &Atlas_UI_AtlasUIManager__EnableInput;
            lVar17 = *(long *)(auVar41._0_8_ + 0x10);
            auVar43._8_8_ = auVar41._8_8_;
            auVar43._0_8_ = lVar17;
            if (lVar17 == 0) {
              auVar41 = func_0x00f78af4();
              *(undefined1 **)((long)register0x00000008 + -0xd0) =
                   (undefined1 *)((long)register0x00000008 + -0xc0);
              *(undefined **)((long)register0x00000008 + -200) =
                   &Atlas_UI_AtlasUIManager__SetScreenVisible;
              lVar17 = *(long *)(auVar41._0_8_ + 0x10);
              auVar44._8_8_ = auVar41._8_8_;
              auVar44._0_8_ = lVar17;
              if (lVar17 == 0) {
                pdVar34 = (dword *)func_0x00f78af4();
                *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
                *(dword **)((long)register0x00000008 + -0xf8) = pdVar16;
                *(dword **)((long)register0x00000008 + -0xf0) = pdVar30;
                *(dword **)((long)register0x00000008 + -0xe8) = pdVar21;
                *(undefined1 **)((long)register0x00000008 + -0xe0) =
                     (undefined1 *)((long)register0x00000008 + -0xd0);
                *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
                if ((bRam0000000003eb4871 & 1) == 0) {
                  func_0x00f78a20(0x3d2fb80);
                  func_0x00f78a20(0x3d1c478);
                  bRam0000000003eb4871 = 1;
                }
                uVar32 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar32,uRam0000000003d2fb80);
                *(undefined8 *)(pdVar34 + 0xc) = uVar32;
                return pdVar34;
              }
              puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
              puVar37 = *(undefined1 **)((long)register0x00000008 + -0xd0);
              puVar38 = *(undefined **)((long)register0x00000008 + -200);
              goto code_r0x02f88674;
            }
            puVar9 = (undefined1 *)((long)register0x00000008 + -0xb0);
            puVar37 = *(undefined1 **)((long)register0x00000008 + -0xc0);
            puVar38 = *(undefined **)((long)register0x00000008 + -0xb8);
            pdVar24 = pdVar25;
            pdVar34 = pdVar16;
          }
          else {
            pdVar24 = (dword *)0x0;
            puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(dword **)((long)register0x00000008 + -0xb8) = pdVar16;
            *(dword **)((long)register0x00000008 + -0xb0) = pdVar30;
            *(dword **)((long)register0x00000008 + -0xa8) = pdVar21;
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            puVar37 = (undefined1 *)((long)register0x00000008 + -0xa0);
            pdVar16 = (dword *)0x3ebc000;
            if ((bRam0000000003ebc64f & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              bRam0000000003ebc64f = 1;
            }
            uVar29 = auVar41._8_4_;
            if (((int)uVar29 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar29)) {
              return (dword *)0x0;
            }
            lVar17 = *(long *)(lVar17 + 0x70);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar29) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar35 = *(long *)(lVar17 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
              lVar17 = *(long *)(lVar35 + 0x28);
              cVar3 = *(char *)(lVar35 + 0x40);
              iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar35 + 0x30),0);
              if (iVar14 == 0 || cVar3 != '\0') {
                return (dword *)0x0;
              }
              if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
                return (dword *)0x0;
              }
              return (dword *)((long)&MACH_HEADER.magic + 1);
            }
            puVar38 = &Core_UI2_UIManager__GetLayerState;
            auVar42 = func_0x00f78af4();
            pdVar30 = (dword *)0x0;
            pdVar21 = auVar41._8_8_;
code_r0x02f884dc:
            puVar9 = puVar8 + -0x30;
            *(undefined8 *)(puVar8 + -0x30) = 0;
            *(dword **)(puVar8 + -0x28) = pdVar16;
            *(dword **)(puVar8 + -0x20) = pdVar30;
            *(dword **)(puVar8 + -0x18) = pdVar21;
            *(undefined1 **)(puVar8 + -0x10) = puVar37;
            *(undefined **)(puVar8 + -8) = puVar38;
            puVar37 = puVar8 + -0x10;
            if ((bRam0000000003ebc650 & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              bRam0000000003ebc650 = 1;
            }
            lVar17 = *(long *)(auVar42._0_8_ + 0x70);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= auVar42._8_4_) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
              if (lVar17 == 0) {
                pdVar16 = &MACH_HEADER.cputype;
              }
              else {
                pdVar16 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
              }
              return pdVar16;
            }
            puVar38 = &Core_UI2_UIManager__EnableInput;
            auVar43 = func_0x00f78af4();
            pdVar30 = (dword *)0x0;
            pdVar21 = auVar42._8_8_;
            pdVar34 = (dword *)0x3ebc000;
          }
          pdVar22 = auVar43._8_8_;
          pdVar16 = auVar43._0_8_;
          puVar10 = puVar9 + -0x40;
          *(undefined8 *)(puVar9 + -0x40) = uVar32;
          *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
          *(undefined8 *)(puVar9 + -0x30) = 0;
          *(dword **)(puVar9 + -0x28) = pdVar34;
          *(dword **)(puVar9 + -0x20) = pdVar30;
          *(dword **)(puVar9 + -0x18) = pdVar21;
          *(undefined1 **)(puVar9 + -0x10) = puVar37;
          *(undefined **)(puVar9 + -8) = puVar38;
          puVar37 = puVar9 + -0x10;
          pdVar34 = (dword *)0x3ebc000;
          pdVar25 = pdVar24;
          if ((bRam0000000003ebc651 & 1) == 0) {
            func_0x00f78a20(0x3d2a5c0);
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc651 = 1;
          }
          if (*(long *)(pdVar16 + 0x1a) != 0) {
            pdVar25 = (dword *)(ulong)((uint)pdVar24 ^ 1);
            pdVar30 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar16 + 0x1a),pdVar22,pdVar25,0);
            lVar17 = *(long *)(pdVar16 + 0x1c);
            pdVar34 = (dword *)0x0;
            if (lVar17 != 0) {
              uVar29 = auVar43._8_4_;
              if (*(uint *)(lVar17 + 0x18) <= uVar29) {
                pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) ||
                 (pdVar34 = *(dword **)(pdVar16 + 0xc), pdVar34 == (dword *)0x0)) {
                return pdVar30;
              }
              lVar17 = *(long *)(pdVar16 + 0x1c);
              pdVar16 = (dword *)0x0;
              if (lVar17 != 0) {
                if (*(uint *)(lVar17 + 0x18) <= uVar29) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                plVar23 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
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
                *(dword **)(puVar9 + -0x68) = pdVar34;
                lVar17 = *(long *)(pdVar34 + 0x1a);
                if (lVar17 == 0) {
                  puVar37 = puVar9 + -0x68;
                  lVar35 = 1;
                }
                else {
                  lVar35 = *(long *)(lVar17 + 0x18);
                  if (lVar35 == 0) {
                    return pdVar34;
                  }
                  puVar37 = (undefined1 *)(lVar17 + 0x20);
                }
                lVar17 = 0;
                goto code_r0x01e71a74;
              }
            }
          }
          puVar38 = &Core_UI2_UIManager__SetScreenVisible;
          auVar44 = func_0x00f78af4();
          pdVar21 = pdVar24;
          pdVar30 = pdVar22;
code_r0x02f88674:
          pdVar24 = auVar44._0_8_;
          *(dword **)(puVar10 + -0x30) = pdVar34;
          *(dword **)(puVar10 + -0x28) = pdVar16;
          *(dword **)(puVar10 + -0x20) = pdVar30;
          *(dword **)(puVar10 + -0x18) = pdVar21;
          *(undefined1 **)(puVar10 + -0x10) = puVar37;
          *(undefined **)(puVar10 + -8) = puVar38;
          pdVar16 = pdVar24;
          if ((bRam0000000003ebc652 & 1) == 0) {
            pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc652 = 1;
          }
          lVar17 = *(long *)(pdVar24 + 0x1c);
          if (lVar17 != 0) {
            uVar29 = auVar44._8_4_;
            if (*(uint *)(lVar17 + 0x18) <= uVar29) {
              pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) {
              return pdVar16;
            }
            lVar17 = *(long *)(pdVar24 + 0x1c);
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar29) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
              if ((lVar17 != 0) && (plVar23 = *(long **)(lVar17 + 0x28), plVar23 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pdVar16 = (dword *)(**(code **)(*plVar23 + 0x178))
                                             (plVar23,pdVar25,*(undefined8 *)(*plVar23 + 0x180));
                return pdVar16;
              }
            }
          }
          auVar41 = func_0x00f78af4();
          uVar32 = auVar41._0_8_;
          *(long *)(puVar10 + -0x50) = auVar44._8_8_;
          *(dword **)(puVar10 + -0x48) = pdVar25;
          *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
          *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
          *(undefined8 *)(puVar10 + -0x68) = 0;
          *(undefined8 *)(puVar10 + -0x70) = 0;
          *(undefined8 *)(puVar10 + -0x58) = 0;
          *(undefined8 *)(puVar10 + -0x60) = 0;
          pdVar16 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar32,auVar41._8_8_,puVar10 + -0x70);
          if ((int)pdVar16 != 0) {
            /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar32,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58)
                           );
            *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
            *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
            *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
            *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
            pdVar16 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar32,puVar10 + -0x90,1);
          }
          return pdVar16;
        }
        puVar37 = *(undefined1 **)((long)register0x00000008 + -0x60);
        puVar38 = *(undefined **)((long)register0x00000008 + -0x58);
      }
      else {
        pdVar25 = (dword *)0x0;
        uVar26 = 0;
        puVar38 = &UNK_01470820;
        pdVar22 = pdVar21;
        pdVar24 = pdVar16;
      }
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar32;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(dword **)((long)register0x00000008 + -0x78) = pdVar16;
      *(dword **)((long)register0x00000008 + -0x70) = pdVar30;
      *(dword **)((long)register0x00000008 + -0x68) = pdVar21;
      *(undefined1 **)((long)register0x00000008 + -0x60) = puVar37;
      *(undefined **)((long)register0x00000008 + -0x58) = puVar38;
      if ((bRam0000000003ebc64a & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64a = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
      *(dword **)((long)register0x00000008 + -0x118) = pdVar22;
      *(dword **)((long)register0x00000008 + -0x110) = pdVar24;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar26;
      *(long *)((long)register0x00000008 + -0x100) = lVar17;
      *(dword **)((long)register0x00000008 + -0xf8) = pdVar25;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
      if ((bRam0000000003ebc64e & 1) == 0) {
        func_0x00f78a20(0x3d3ddf0);
        func_0x00f78a20(0x3d3ddf8);
        bRam0000000003ebc64e = 1;
      }
      lVar35 = *(long *)(lVar17 + 0x78);
      if (lVar35 == 0) goto code_r0x02f8812c;
      iVar14 = *(int *)(lVar35 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar15 = 1;
      pdVar16 = (dword *)((long)&MACH_HEADER.magic + 1);
      goto code_r0x02f880d0;
    }
  }
  pcVar36 = Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
  unaff_x19 = func_0x00f78af4();
code_r0x0158fef0:
  register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x40);
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
  *(long *)(puVar11 + -0x28) = lVar17;
  *(dword **)(puVar11 + -0x20) = pdVar16;
  *(long *)(puVar11 + -0x18) = param_1;
  *(undefined1 **)(puVar11 + -0x10) = puVar37;
  *(code **)(puVar11 + -8) = pcVar36;
  unaff_x29 = puVar11 + -0x10;
  unaff_x20 = 0x3eb5000;
  unaff_x21 = 0x3d40598;
  if ((bRam0000000003eb5135 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c0);
    func_0x00f78a20(0x3d27618);
    func_0x00f78a20(0x3d40598);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5135 = 1;
  }
  lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(unaff_x19,uRam0000000003d40598);
  if (lVar17 != 0) {
    lVar17 = *(long *)(lVar17 + 0x10);
    unaff_x21 = 0;
    if (lVar17 != 0) {
      unaff_x23 = 0x3d194c0;
      unaff_x22 = 0x3d25458;
      uVar32 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      *(undefined8 *)(lVar17 + 0x20) = uVar32;
      if (*(int *)(lVar17 + 0x10) == 2) {
        *(undefined8 *)(lVar17 + 0x18) = uVar32;
      }
      unaff_x20 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
      param_3 = (undefined8 *)0x0;
      Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                (unaff_x20,lVar17);
      unaff_x21 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
      pdVar16 = *(dword **)(unaff_x19 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar23 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      unaff_x19 = 0;
      if (pdVar16 != (dword *)0x0) goto code_r0x0159000c;
    }
  }
  unaff_x30 = Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
  param_1 = func_0x00f78af4();
  goto code_r0x01590040;
code_r0x02f883b0:
  puVar6 = puVar7 + -0x30;
  *(dword **)(puVar7 + -0x30) = pdVar34;
  *(dword **)(puVar7 + -0x28) = pdVar16;
  *(dword **)(puVar7 + -0x20) = pdVar30;
  *(dword **)(puVar7 + -0x18) = pdVar21;
  *(undefined1 **)(puVar7 + -0x10) = puVar37;
  *(undefined **)(puVar7 + -8) = puVar38;
  puVar37 = puVar7 + -0x10;
  puVar38 = &UNK_02f883d8;
  pdVar25 = pdVar22;
  pdVar21 = pdVar24;
  pdVar16 = pdVar22;
  pdVar34 = auVar41._0_8_;
code_r0x02f877a8:
  pdVar30 = auVar41._0_8_;
  puVar12 = puVar6 + -0x60;
  *(dword **)(puVar6 + -0x30) = pdVar34;
  *(long *)(puVar6 + -0x28) = auVar41._8_8_;
  *(dword **)(puVar6 + -0x20) = pdVar16;
  *(dword **)(puVar6 + -0x18) = pdVar21;
  *(undefined1 **)(puVar6 + -0x10) = puVar37;
  *(undefined **)(puVar6 + -8) = puVar38;
  puVar37 = puVar6 + -0x10;
  pdVar16 = pdVar30;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar16 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar29 = (uint)pdVar22;
  if (((int)uVar29 < 0) || ((int)*(long *)(pdVar30 + 0x14) <= (int)uVar29)) {
    return pdVar16;
  }
  lVar17 = *(long *)(pdVar30 + 0x1c);
  if (lVar17 == 0) {
code_r0x02f878a4:
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar34;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar30;
    *(dword **)(puVar6 + -0x78) = pdVar22;
    *(undefined1 **)(puVar6 + -0x70) = puVar37;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar32 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar32,0);
    if (0 < *(int *)(lVar17 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar17,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar17 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar17);
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
    pdVar16 = (dword *)(*pcRam0000000003ec05a0)(uVar32);
    return pdVar16;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar29) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
  pdVar34 = *(dword **)(lVar17 + 0x20);
  pdVar21 = *(dword **)(lVar17 + 0x28);
  *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
  *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
  if (pdVar21 == (dword *)0x0) {
    lVar17 = *(long *)(pdVar30 + 0x1c);
    if (lVar17 != 0) {
      *(dword **)(puVar6 + -0x58) = pdVar34;
      *(undefined8 *)(puVar6 + -0x50) = 0;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined2 *)(puVar6 + -0x38) = 0;
      *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
      *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
      pdVar16 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar22,puVar6 + -0x58,uRam0000000003d3ddd0);
      return pdVar16;
    }
    goto code_r0x02f878a4;
  }
  puVar38 = &UNK_02f87848;
  pdVar16 = pdVar21;
code_r0x02f882d8:
  *(dword **)(puVar12 + -0x20) = pdVar30;
  *(dword **)(puVar12 + -0x18) = pdVar22;
  *(undefined1 **)(puVar12 + -0x10) = puVar37;
  *(undefined **)(puVar12 + -8) = puVar38;
  (**(code **)(*(long *)pdVar21 + 0x218))(pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x220));
  if (*(long *)(pdVar21 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar21 + 10),0);
    pdVar21[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar16 = (dword *)(**(code **)(*(long *)pdVar21 + 0x228))
                                 (pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x230));
    return pdVar16;
  }
  func_0x00f78af4();
  puVar7 = puVar12 + -0x40;
  *(dword **)(puVar12 + -0x40) = pdVar30;
  *(dword **)(puVar12 + -0x38) = pdVar21;
  *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar37 = puVar12 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar17 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar32 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar32,lVar17);
    pdVar16 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar16;
  }
  puVar38 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar41 = func_0x00f78af4();
  pdVar22 = pdVar25;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar20 = *(long *)(puVar37 + lVar17 * 8);
  pcVar36 = *(code **)(lVar20 + 0x10);
  plVar1 = *(long **)(lVar20 + 0x20);
  lVar20 = *(long *)(lVar20 + 0x28);
  if (*(short *)(lVar20 + 0x48) == -1) {
    func_0x00f78ad8(lVar20);
  }
  iVar14 = func_0x00f78a4c(lVar20);
  bVar13 = *(char *)(lVar20 + 0x4a) == '\x03';
  if (iVar14 == 0) {
    if (bVar13) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar16 = (dword *)(*pcVar36)(plVar23,pdVar22,pdVar24,lVar20);
      }
      else {
        if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71aac;
        iVar14 = func_0x00f78a44(lVar20);
        iVar15 = func_0x00f78ec0(lVar20);
        if (iVar14 == 0) {
          uVar4 = *(ushort *)(lVar20 + 0x48);
          if (iVar15 == 0) {
            lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                         (plVar1,plVar23,pdVar22,pdVar24,
                                          *(undefined8 *)(lVar20 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar27 = *plVar1;
          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
          if (uVar18 != 0) {
            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar20) {
                puVar19 = (undefined8 *)
                          (lVar27 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar28 = piVar28 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e71d74:
          pcVar36 = (code *)*puVar19;
          puVar19 = (undefined8 *)puVar19[1];
        }
        else {
          if (iVar15 == 0) {
            uVar32 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar27 = *plVar1;
            uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar18 != 0) {
              piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar28 = piVar28 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar32 = *(undefined8 *)(lVar27 + 8);
          }
          puVar19 = (undefined8 *)func_0x00f78acc(uVar32,lVar20);
          pcVar36 = (code *)*puVar19;
        }
        pdVar16 = (dword *)(*pcVar36)(plVar1,plVar23,pdVar22,pdVar24,puVar19);
      }
    }
    else {
      if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71bbc;
      iVar14 = func_0x00f78a44(lVar20);
      iVar15 = func_0x00f78ec0(lVar20);
      if (iVar14 == 0) {
        uVar4 = *(ushort *)(lVar20 + 0x48);
        if (iVar15 == 0) {
          lVar20 = *plVar23 + (ulong)uVar4 * 0x10;
          pdVar16 = (dword *)(**(code **)(lVar20 + 0x138))
                                       (plVar23,pdVar22,pdVar24,*(undefined8 *)(lVar20 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar20 = func_0x00f78a48(lVar20);
        lVar27 = *plVar23;
        uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
        if (uVar18 != 0) {
          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar20) {
              puVar19 = (undefined8 *)(lVar27 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar28 = piVar28 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar19 = (undefined8 *)func_0x00fac1f0(plVar23,lVar20,(ulong)uVar4);
code_r0x01e71d00:
        pcVar36 = (code *)*puVar19;
        puVar19 = (undefined8 *)puVar19[1];
      }
      else {
        if (iVar15 == 0) {
          uVar32 = *(undefined8 *)(*plVar23 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar27 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
          if (uVar18 != 0) {
            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)(lVar20 + 0x18)) {
                lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar28 = piVar28 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71cd8:
          uVar32 = *(undefined8 *)(lVar27 + 8);
        }
        puVar19 = (undefined8 *)func_0x00f78acc(uVar32,lVar20);
        pcVar36 = (code *)*puVar19;
      }
      pdVar16 = (dword *)(*pcVar36)(plVar23,pdVar22,pdVar24,puVar19);
    }
  }
  else {
    if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar16 = (dword *)(*pcVar36)(plVar1,plVar23,pdVar22,pdVar24,lVar20);
  }
code_r0x01e71bd0:
  lVar17 = lVar17 + 1;
  if (lVar17 == lVar35) {
    return pdVar16;
  }
  goto code_r0x01e71a74;
code_r0x0159000c:
  uVar32 = *(undefined8 *)(puVar11 + -0x10);
  uVar39 = *(undefined8 *)(puVar11 + -8);
  uVar26 = *(undefined8 *)(puVar11 + -0x20);
  uVar31 = *(undefined8 *)(puVar11 + -0x18);
  uVar40 = *(undefined8 *)(puVar11 + -0x30);
  uVar33 = *(undefined8 *)(puVar11 + -0x28);
  unaff_x24 = *(undefined8 *)(puVar11 + -0x40);
  unaff_x23 = *(undefined8 *)(puVar11 + -0x38);
System_Action_Type__bool__TransitionData___Invoke:
  *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar11 + -0x30) = uVar40;
  *(undefined8 *)(puVar11 + -0x28) = uVar33;
  *(undefined8 *)(puVar11 + -0x20) = uVar26;
  *(undefined8 *)(puVar11 + -0x18) = uVar31;
  *(undefined8 *)(puVar11 + -0x10) = uVar32;
  *(undefined8 *)(puVar11 + -8) = uVar39;
  *(dword **)(puVar11 + -0x68) = pdVar16;
  lVar17 = *(long *)(pdVar16 + 0x1a);
  if (lVar17 == 0) {
    puVar37 = puVar11 + -0x68;
    lVar35 = 1;
  }
  else {
    lVar35 = *(long *)(lVar17 + 0x18);
    if (lVar35 == 0) {
      return pdVar16;
    }
    puVar37 = (undefined1 *)(lVar17 + 0x20);
  }
  lVar17 = 0;
  do {
    lVar20 = *(long *)(puVar37 + lVar17 * 8);
    pcVar36 = *(code **)(lVar20 + 0x10);
    plVar1 = *(long **)(lVar20 + 0x20);
    lVar20 = *(long *)(lVar20 + 0x28);
    if (*(short *)(lVar20 + 0x48) == -1) {
      func_0x00f78ad8(lVar20);
    }
    iVar14 = func_0x00f78a4c(lVar20);
    bVar13 = *(char *)(lVar20 + 0x4a) == '\x03';
    if (iVar14 == 0) {
      if (bVar13) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          pdVar30 = (dword *)(*pcVar36)(plVar23,0,unaff_x20,lVar20);
        }
        else {
          if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e7162c;
          iVar14 = func_0x00f78a44(lVar20);
          iVar15 = func_0x00f78ec0(lVar20);
          if (iVar14 == 0) {
            uVar4 = *(ushort *)(lVar20 + 0x48);
            if (iVar15 == 0) {
              lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
              pdVar30 = (dword *)(**(code **)(lVar20 + 0x138))
                                           (plVar1,plVar23,0,unaff_x20,
                                            *(undefined8 *)(lVar20 + 0x140));
              goto code_r0x01e71750;
            }
            lVar20 = func_0x00f78a48(lVar20);
            lVar27 = *plVar1;
            uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar18 != 0) {
              piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar20) {
                  puVar19 = (undefined8 *)
                            (lVar27 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar28 = piVar28 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e718f4:
            pcVar36 = (code *)*puVar19;
            puVar19 = (undefined8 *)puVar19[1];
          }
          else {
            if (iVar15 == 0) {
              uVar32 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar27 = *plVar1;
              uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
              if (uVar18 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == *(long *)(lVar20 + 0x18)) {
                    lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar28 = piVar28 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar32 = *(undefined8 *)(lVar27 + 8);
            }
            puVar19 = (undefined8 *)func_0x00f78acc(uVar32,lVar20);
            pcVar36 = (code *)*puVar19;
          }
          pdVar30 = (dword *)(*pcVar36)(plVar1,plVar23,0,unaff_x20,puVar19);
        }
      }
      else {
        if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
        goto code_r0x01e7173c;
        iVar14 = func_0x00f78a44(lVar20);
        iVar15 = func_0x00f78ec0(lVar20);
        if (iVar14 == 0) {
          uVar4 = *(ushort *)(lVar20 + 0x48);
          if (iVar15 == 0) {
            lVar20 = *plVar23 + (ulong)uVar4 * 0x10;
            pdVar30 = (dword *)(**(code **)(lVar20 + 0x138))
                                         (plVar23,0,unaff_x20,*(undefined8 *)(lVar20 + 0x140));
            goto code_r0x01e71750;
          }
          lVar20 = func_0x00f78a48(lVar20);
          lVar27 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
          if (uVar18 != 0) {
            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar20) {
                puVar19 = (undefined8 *)
                          (lVar27 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar28 = piVar28 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar19 = (undefined8 *)func_0x00fac1f0(plVar23,lVar20,(ulong)uVar4);
code_r0x01e71880:
          pcVar36 = (code *)*puVar19;
          puVar19 = (undefined8 *)puVar19[1];
        }
        else {
          if (iVar15 == 0) {
            uVar32 = *(undefined8 *)(*plVar23 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar27 = *plVar23;
            uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar18 != 0) {
              piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)(lVar20 + 0x18)) {
                  lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71858;
                }
                piVar28 = piVar28 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71858:
            uVar32 = *(undefined8 *)(lVar27 + 8);
          }
          puVar19 = (undefined8 *)func_0x00f78acc(uVar32,lVar20);
          pcVar36 = (code *)*puVar19;
        }
        pdVar30 = (dword *)(*pcVar36)(plVar23,0,unaff_x20,puVar19);
      }
    }
    else {
      if (bVar13) goto code_r0x01e7173c;
code_r0x01e7162c:
      pdVar30 = (dword *)(*pcVar36)(plVar1,plVar23,0,unaff_x20,lVar20);
    }
code_r0x01e71750:
    lVar17 = lVar17 + 1;
    if (lVar17 == lVar35) {
      return pdVar30;
    }
  } while( true );
  while( true ) {
    uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar35,pdVar22,5,0);
    if ((uVar18 & 1) != 0) {
      return pdVar16;
    }
    pdVar16 = (dword *)(ulong)(iVar15 < iVar14);
    if (iVar14 == iVar15) {
      return pdVar16;
    }
    lVar35 = *(long *)(lVar17 + 0x78);
    iVar15 = iVar15 + 1;
    if (lVar35 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar35 + 0x18) <= iVar15 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar35 = *(long *)(*(long *)(lVar35 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
    if (lVar35 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x1590114 | Atlas.Contexts.FrontEndContextPostQuickPlayState.ExitState
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

dword * Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState
                  (long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lVar16;
  long *plVar17;
  int iVar15;
  dword *pdVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  dword *pdVar21;
  long *extraout_x1;
  dword *pdVar22;
  dword *pdVar23;
  dword *pdVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  uint uVar29;
  dword *pdVar30;
  long unaff_x19;
  undefined8 uVar31;
  undefined8 unaff_x20;
  undefined8 uVar32;
  undefined8 unaff_x21;
  undefined8 uVar33;
  dword *pdVar34;
  undefined8 unaff_x22;
  undefined8 uVar35;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar36;
  undefined8 unaff_x26;
  long lVar37;
  undefined8 unaff_x27;
  undefined1 *puVar38;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar39;
  code *unaff_x30;
  undefined8 uVar40;
  undefined4 extraout_s0;
  undefined8 uVar41;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
code_r0x01590114:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar32 = 0x3eb5000;
  if ((bRam0000000003eb5137 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d27628);
    func_0x00f78a20(0x3d40598);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5137 = 1;
  }
  if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0159024c;
  iVar14 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(*(long *)(param_1 + 0xb8),0);
  if (iVar14 != 0) {
    puVar38 = *(undefined1 **)((long)register0x00000008 + -0x10);
    pcVar36 = *(code **)((long)register0x00000008 + -8);
    pdVar30 = *(dword **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    lVar16 = *(long *)((long)register0x00000008 + -0x28);
    puVar11 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar11 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar11 + -0x30) = unaff_x22;
      *(long *)(puVar11 + -0x28) = lVar16;
      *(dword **)(puVar11 + -0x20) = pdVar30;
      *(long *)(puVar11 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar11 + -0x10) = puVar38;
      *(code **)(puVar11 + -8) = pcVar36;
      uVar32 = 0x3eb5000;
      unaff_x21 = 0x3d40598;
      if ((bRam0000000003eb5135 & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194c0);
        func_0x00f78a20(0x3d27618);
        func_0x00f78a20(0x3d40598);
        func_0x00f78a20(0x3d24dd0);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb5135 = 1;
      }
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
      if (lVar16 != 0) {
        lVar16 = *(long *)(lVar16 + 0x10);
        unaff_x21 = 0;
        if (lVar16 != 0) {
          unaff_x23 = 0x3d194c0;
          unaff_x22 = 0x3d25458;
          uVar32 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
          *(undefined8 *)(lVar16 + 0x20) = uVar32;
          if (*(int *)(lVar16 + 0x10) == 2) {
            *(undefined8 *)(lVar16 + 0x18) = uVar32;
          }
          uVar32 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextMatchMakingState.MatchMakingTransitionData_TypeInfo*/ uRam0000000003d27618);
          param_3 = (undefined8 *)0x0;
          Atlas_Contexts_FrontEndContextMatchMakingState_MatchMakingTransitionData___ctor
                    (uVar32,lVar16);
          unaff_x21 = /*Atlas.Contexts.FrontEndContextMatchMakingState_var*/ uRam0000000003d194c0;
          pdVar30 = *(dword **)(param_1 + 0x78);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar17 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
          param_1 = 0;
          if (pdVar30 != (dword *)0x0) {
            uVar19 = *(undefined8 *)(puVar11 + -0x10);
            uVar40 = *(undefined8 *)(puVar11 + -8);
            uVar41 = *(undefined8 *)(puVar11 + -0x20);
            uVar31 = *(undefined8 *)(puVar11 + -0x18);
            uVar35 = *(undefined8 *)(puVar11 + -0x30);
            uVar33 = *(undefined8 *)(puVar11 + -0x28);
            unaff_x24 = *(undefined8 *)(puVar11 + -0x40);
            unaff_x23 = *(undefined8 *)(puVar11 + -0x38);
            register0x00000008 = (BADSPACEBASE *)puVar11;
            goto System_Action_Type__bool__TransitionData___Invoke;
          }
        }
      }
      unaff_x19 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x70);
      *(undefined8 *)(puVar11 + -0x70) = unaff_x22;
      *(undefined8 *)(puVar11 + -0x68) = unaff_x21;
      *(undefined8 *)(puVar11 + -0x60) = uVar32;
      *(long *)(puVar11 + -0x58) = param_1;
      *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x10;
      *(code **)(puVar11 + -0x48) =
           Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitPostEventSelected;
      unaff_x29 = puVar11 + -0x50;
      unaff_x20 = 0x3eb5000;
      if ((bRam0000000003eb5136 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5136 = 1;
      }
      if (*(long *)(unaff_x19 + 0xa8) == 0) {
LAB_01590110:
        unaff_x30 = Atlas_Contexts_FrontEndContextPostQuickPlayState__ExitState;
        param_1 = func_0x00f78af4();
        goto code_r0x01590114;
      }
      unaff_x21 = 0x3d23000;
      unaff_x20 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(unaff_x19 + 0xa8),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = (undefined8 *)0x0;
      iVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x20,0);
      if (iVar14 == 0) goto LAB_015900fc;
      if (*(long *)(unaff_x19 + 0xa8) == 0) goto LAB_01590110;
      uVar27 = /*Atlas.Stats.SeasonsManager$$HasUnlockedAndSeenAllRewardsInSeason*/ func_0x014f2810(*(long *)(unaff_x19 + 0xa8),0);
      if ((uVar27 & 1) != 0) goto LAB_015900fc;
      if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_01590110;
      param_3 = (undefined8 *)0x0;
      iVar14 = /*Atlas.Stats.UnlockManager$$HasAwardOfType*/ func_0x01521d48(*(long *)(unaff_x19 + 0xb0),2);
      if (iVar14 == 0) goto LAB_015900fc;
      *(undefined8 *)(puVar11 + -0x80) = unaff_x24;
      *(undefined8 *)(puVar11 + -0x78) = unaff_x23;
      *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
      *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
      *(undefined8 *)(puVar11 + -0x60) = *(undefined8 *)(puVar11 + -0x60);
      *(undefined8 *)(puVar11 + -0x58) = *(undefined8 *)(puVar11 + -0x58);
      *(undefined8 *)(puVar11 + -0x50) = *(undefined8 *)(puVar11 + -0x50);
      *(undefined8 *)(puVar11 + -0x48) = *(undefined8 *)(puVar11 + -0x48);
      puVar38 = puVar11 + -0x50;
      unaff_x23 = 0x3d28bc0;
      unaff_x22 = 0x3d56c98;
      if ((bRam0000000003eb5134 & 1) == 0) {
        func_0x00f78a20(0x3d1feb8);
        func_0x00f78a20(0x3d56c98);
        func_0x00f78a20(0x3d28bb8);
        func_0x00f78a20(0x3d28bc0);
        bRam0000000003eb5134 = 1;
      }
      pdVar30 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
      /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar30,0);
      lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
      param_3 = puRam0000000003d56c98;
      /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(lVar16,unaff_x19,puRam0000000003d56c98,0);
      if (pdVar30 != (dword *)0x0) {
        unaff_x22 = 0x3d1feb8;
        *(long *)(pdVar30 + 4) = lVar16;
        pdVar18 = *(dword **)(unaff_x19 + 0x80);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x19 = 0;
        if (pdVar18 != (dword *)0x0) {
          pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
          pdVar24 = (dword *)0x0;
          uVar19 = 0;
          uVar32 = *(undefined8 *)(puVar11 + -0x80);
          *(undefined8 *)(puVar11 + -0x80) = uVar32;
          *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x78);
          *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
          *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
          *(undefined8 *)(puVar11 + -0x60) = *(undefined8 *)(puVar11 + -0x60);
          *(undefined8 *)(puVar11 + -0x58) = *(undefined8 *)(puVar11 + -0x58);
          *(undefined8 *)(puVar11 + -0x50) = *(undefined8 *)(puVar11 + -0x50);
          *(undefined8 *)(puVar11 + -0x48) = *(undefined8 *)(puVar11 + -0x48);
          puVar38 = puVar11 + -0x50;
          pdVar34 = (dword *)0x0;
          pdVar23 = pdVar30;
          if ((bRam0000000003eb486f & 1) == 0) {
            func_0x00f78a20(0x3d53980);
            func_0x00f78a20(0x3d2fb90);
            func_0x00f78a20(0x3d6d050);
            bRam0000000003eb486f = 1;
          }
          *(undefined8 *)(puVar11 + -0x88) = 0;
          lVar16 = *(long *)(pdVar18 + 4);
          if (lVar16 == 0) {
            auVar42 = func_0x00f78af4();
            pdVar22 = auVar42._8_8_;
            *(undefined1 **)(puVar11 + -0xa0) = puVar38;
            *(undefined **)(puVar11 + -0x98) = &Atlas_UI_AtlasUIManager__ShowScreen;
            lVar16 = *(long *)(auVar42._0_8_ + 0x10);
            if (lVar16 == 0) {
              auVar42 = func_0x00f78af4();
              uVar19 = auVar42._8_8_;
              *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0xa0;
              *(undefined **)(puVar11 + -0xa8) = &Atlas_UI_AtlasUIManager__HideScreen;
              lVar16 = *(long *)(auVar42._0_8_ + 0x10);
              if (lVar16 != 0) {
                pdVar24 = (dword *)0x0;
                *(undefined8 *)(puVar11 + -0xd0) = 0;
                *(dword **)(puVar11 + -200) = pdVar30;
                *(dword **)(puVar11 + -0xc0) = pdVar18;
                *(dword **)(puVar11 + -0xb8) = pdVar21;
                *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(puVar11 + -0xb0);
                *(undefined8 *)(puVar11 + -0xa8) = *(undefined8 *)(puVar11 + -0xa8);
                if ((bRam0000000003ebc64b & 1) == 0) {
                  func_0x00f78a20(0x3d3ddc8);
                  func_0x00f78a20(0x3d3ddd0);
                  bRam0000000003ebc64b = 1;
                }
                lVar37 = *(long *)(lVar16 + 0x70);
                if (lVar37 != 0) {
                  lVar25 = lVar37;
                  if (*(uint *)(lVar37 + 0x18) <= auVar42._8_4_) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    lVar25 = *(long *)(lVar16 + 0x70);
                  }
                  if (lVar25 != 0) {
                    lVar37 = *(long *)(lVar37 + 0x10) + (long)(int)auVar42._8_4_ * 0x28;
                    uVar41 = *(undefined8 *)(lVar37 + 0x28);
                    uVar32 = *(undefined8 *)(lVar37 + 0x20);
                    uVar2 = *(undefined4 *)(lVar37 + 0x42);
                    *(undefined4 *)(puVar11 + -0x118) = uVar2;
                    uVar5 = *(undefined2 *)(lVar37 + 0x46);
                    *(undefined2 *)(puVar11 + -0x114) = uVar5;
                    *(undefined8 *)(puVar11 + -0x108) = uVar41;
                    *(undefined8 *)(puVar11 + -0x110) = uVar32;
                    *(undefined8 *)(puVar11 + -0xf8) = uVar41;
                    *(undefined8 *)(puVar11 + -0x100) = uVar32;
                    *(undefined8 *)(puVar11 + -0xf0) = 0;
                    *(undefined8 *)(puVar11 + -0xe8) = 0;
                    *(undefined2 *)(puVar11 + -0xe0) = 1;
                    *(undefined4 *)(puVar11 + -0xde) = uVar2;
                    *(undefined2 *)(puVar11 + -0xda) = uVar5;
                    /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar25,uVar19,puVar11 + -0x100,uRam0000000003d3ddd0);
                    pdVar30 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,uVar19);
                    return pdVar30;
                  }
                }
                auVar42 = func_0x00f78af4();
                pdVar22 = auVar42._8_8_;
                puVar12 = puVar11 + -0x150;
                *(undefined8 *)(puVar11 + -0x150) = 0;
                *(long *)(puVar11 + -0x148) = lVar37;
                *(long *)(puVar11 + -0x140) = lVar16;
                *(undefined8 *)(puVar11 + -0x138) = uVar19;
                *(undefined1 **)(puVar11 + -0x130) = puVar11 + -0xb0;
                *(undefined **)(puVar11 + -0x128) = &Core_UI2_UIManager__GetCurrentScreenID;
                puVar38 = puVar11 + -0x130;
                if ((bRam0000000003ebc64c & 1) == 0) {
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc64c = 1;
                }
                lVar16 = *(long *)(auVar42._0_8_ + 0x70);
                if (lVar16 != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= auVar42._8_4_) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 +
                                    0x28);
                  if (lVar16 == 0) {
                    pdVar30 = (dword *)0x0;
                  }
                  else {
                    pdVar30 = *(dword **)(lVar16 + 0x40);
                  }
                  return pdVar30;
                }
                puVar39 = &Core_UI2_UIScreen__ForceExit;
                pdVar21 = (dword *)func_0x00f78af4();
                pdVar18 = (dword *)0x0;
                pdVar30 = (dword *)0x3ebc000;
                goto code_r0x02f882d8;
              }
              auVar42 = func_0x00f78af4();
              pdVar22 = auVar42._8_8_;
              *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0xb0;
              *(undefined **)(puVar11 + -0xb8) = &Atlas_UI_AtlasUIManager__ClearLayer;
              lVar16 = *(long *)(auVar42._0_8_ + 0x10);
              auVar42._8_8_ = pdVar30;
              auVar42._0_8_ = lVar16;
              if (lVar16 != 0) {
                pdVar24 = (dword *)0x0;
                puVar6 = puVar11 + -0xb0;
                puVar38 = *(undefined1 **)(puVar11 + -0xc0);
                puVar39 = *(undefined **)(puVar11 + -0xb8);
                pdVar30 = pdVar18;
                goto code_r0x02f877a8;
              }
              auVar42 = func_0x00f78af4();
              *(undefined1 **)(puVar11 + -0xd0) = puVar11 + -0xc0;
              *(undefined **)(puVar11 + -200) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
              lVar16 = *(long *)(auVar42._0_8_ + 0x10);
              auVar42._8_8_ = auVar42._8_8_;
              auVar42._0_8_ = lVar16;
              if (lVar16 != 0) {
                puVar7 = puVar11 + -0xc0;
                puVar38 = *(undefined1 **)(puVar11 + -0xd0);
                puVar39 = *(undefined **)(puVar11 + -200);
                pdVar22 = pdVar24;
                goto code_r0x02f883b0;
              }
              auVar42 = func_0x00f78af4();
              *(undefined1 **)(puVar11 + -0xe0) = puVar11 + -0xd0;
              *(undefined **)(puVar11 + -0xd8) = &Atlas_UI_AtlasUIManager__IsLayerReady;
              lVar16 = *(long *)(auVar42._0_8_ + 0x10);
              if (lVar16 == 0) {
                auVar42 = func_0x00f78af4();
                *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0xe0;
                *(undefined **)(puVar11 + -0xe8) = &Atlas_UI_AtlasUIManager__GetLayerState;
                lVar16 = *(long *)(auVar42._0_8_ + 0x10);
                auVar43._8_8_ = auVar42._8_8_;
                auVar43._0_8_ = lVar16;
                if (lVar16 != 0) {
                  pdVar23 = (dword *)0x0;
                  puVar8 = puVar11 + -0xe0;
                  puVar38 = *(undefined1 **)(puVar11 + -0xf0);
                  puVar39 = *(undefined **)(puVar11 + -0xe8);
                  goto code_r0x02f884dc;
                }
                auVar42 = func_0x00f78af4();
                *(undefined1 **)(puVar11 + -0x100) = puVar11 + -0xf0;
                *(undefined **)(puVar11 + -0xf8) = &Atlas_UI_AtlasUIManager__EnableInput;
                lVar16 = *(long *)(auVar42._0_8_ + 0x10);
                auVar44._8_8_ = auVar42._8_8_;
                auVar44._0_8_ = lVar16;
                if (lVar16 == 0) {
                  auVar42 = func_0x00f78af4();
                  *(undefined1 **)(puVar11 + -0x110) = puVar11 + -0x100;
                  *(undefined **)(puVar11 + -0x108) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                  lVar16 = *(long *)(auVar42._0_8_ + 0x10);
                  auVar45._8_8_ = auVar42._8_8_;
                  auVar45._0_8_ = lVar16;
                  if (lVar16 == 0) {
                    pdVar34 = (dword *)func_0x00f78af4();
                    *(undefined8 *)(puVar11 + -0x140) = 0;
                    *(dword **)(puVar11 + -0x138) = pdVar30;
                    *(dword **)(puVar11 + -0x130) = pdVar18;
                    *(dword **)(puVar11 + -0x128) = pdVar21;
                    *(undefined1 **)(puVar11 + -0x120) = puVar11 + -0x110;
                    *(undefined **)(puVar11 + -0x118) = &Atlas_UI_AtlasUIManager___ctor;
                    if ((bRam0000000003eb4871 & 1) == 0) {
                      func_0x00f78a20(0x3d2fb80);
                      func_0x00f78a20(0x3d1c478);
                      bRam0000000003eb4871 = 1;
                    }
                    uVar32 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar32,uRam0000000003d2fb80);
                    *(undefined8 *)(pdVar34 + 0xc) = uVar32;
                    return pdVar34;
                  }
                  puVar10 = puVar11 + -0x100;
                  puVar38 = *(undefined1 **)(puVar11 + -0x110);
                  puVar39 = *(undefined **)(puVar11 + -0x108);
                  goto code_r0x02f88674;
                }
                puVar9 = puVar11 + -0xf0;
                puVar38 = *(undefined1 **)(puVar11 + -0x100);
                puVar39 = *(undefined **)(puVar11 + -0xf8);
                pdVar23 = pdVar24;
                pdVar34 = pdVar30;
              }
              else {
                pdVar23 = (dword *)0x0;
                puVar8 = puVar11 + -0x100;
                *(undefined8 *)(puVar11 + -0x100) = 0;
                *(dword **)(puVar11 + -0xf8) = pdVar30;
                *(dword **)(puVar11 + -0xf0) = pdVar18;
                *(dword **)(puVar11 + -0xe8) = pdVar21;
                *(undefined8 *)(puVar11 + -0xe0) = *(undefined8 *)(puVar11 + -0xe0);
                *(undefined8 *)(puVar11 + -0xd8) = *(undefined8 *)(puVar11 + -0xd8);
                puVar38 = puVar11 + -0xe0;
                pdVar30 = (dword *)0x3ebc000;
                if ((bRam0000000003ebc64f & 1) == 0) {
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc64f = 1;
                }
                uVar29 = auVar42._8_4_;
                if (((int)uVar29 < 0) || (*(int *)(lVar16 + 0x50) <= (int)uVar29)) {
                  return (dword *)0x0;
                }
                lVar16 = *(long *)(lVar16 + 0x70);
                if (lVar16 != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= uVar29) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar37 = *(long *)(lVar16 + 0x10) + ((ulong)auVar42._8_8_ & 0xffffffff) * 0x28;
                  lVar16 = *(long *)(lVar37 + 0x28);
                  cVar3 = *(char *)(lVar37 + 0x40);
                  iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar37 + 0x30),0);
                  if (iVar14 == 0 || cVar3 != '\0') {
                    return (dword *)0x0;
                  }
                  if ((lVar16 != 0) && (*(int *)(lVar16 + 0x4c) != 2)) {
                    return (dword *)0x0;
                  }
                  return (dword *)((long)&MACH_HEADER.magic + 1);
                }
                puVar39 = &Core_UI2_UIManager__GetLayerState;
                auVar43 = func_0x00f78af4();
                pdVar18 = (dword *)0x0;
                pdVar21 = auVar42._8_8_;
code_r0x02f884dc:
                puVar9 = puVar8 + -0x30;
                *(undefined8 *)(puVar8 + -0x30) = 0;
                *(dword **)(puVar8 + -0x28) = pdVar30;
                *(dword **)(puVar8 + -0x20) = pdVar18;
                *(dword **)(puVar8 + -0x18) = pdVar21;
                *(undefined1 **)(puVar8 + -0x10) = puVar38;
                *(undefined **)(puVar8 + -8) = puVar39;
                puVar38 = puVar8 + -0x10;
                if ((bRam0000000003ebc650 & 1) == 0) {
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc650 = 1;
                }
                lVar16 = *(long *)(auVar43._0_8_ + 0x70);
                if (lVar16 != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= auVar43._8_4_) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 +
                                    0x28);
                  if (lVar16 == 0) {
                    pdVar30 = &MACH_HEADER.cputype;
                  }
                  else {
                    pdVar30 = (dword *)(ulong)*(uint *)(lVar16 + 0x4c);
                  }
                  return pdVar30;
                }
                puVar39 = &Core_UI2_UIManager__EnableInput;
                auVar44 = func_0x00f78af4();
                pdVar18 = (dword *)0x0;
                pdVar21 = auVar43._8_8_;
                pdVar34 = (dword *)0x3ebc000;
              }
              pdVar22 = auVar44._8_8_;
              pdVar30 = auVar44._0_8_;
              puVar10 = puVar9 + -0x40;
              *(undefined8 *)(puVar9 + -0x40) = uVar32;
              *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
              *(undefined8 *)(puVar9 + -0x30) = 0;
              *(dword **)(puVar9 + -0x28) = pdVar34;
              *(dword **)(puVar9 + -0x20) = pdVar18;
              *(dword **)(puVar9 + -0x18) = pdVar21;
              *(undefined1 **)(puVar9 + -0x10) = puVar38;
              *(undefined **)(puVar9 + -8) = puVar39;
              puVar38 = puVar9 + -0x10;
              pdVar34 = (dword *)0x3ebc000;
              pdVar24 = pdVar23;
              if ((bRam0000000003ebc651 & 1) == 0) {
                func_0x00f78a20(0x3d2a5c0);
                func_0x00f78a20(0x3d3ddc8);
                bRam0000000003ebc651 = 1;
              }
              if (*(long *)(pdVar30 + 0x1a) != 0) {
                pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
                pdVar18 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar30 + 0x1a),pdVar22,pdVar24,0);
                lVar16 = *(long *)(pdVar30 + 0x1c);
                pdVar34 = (dword *)0x0;
                if (lVar16 != 0) {
                  uVar29 = auVar44._8_4_;
                  if (*(uint *)(lVar16 + 0x18) <= uVar29) {
                    pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0)
                     || (pdVar34 = *(dword **)(pdVar30 + 0xc), pdVar34 == (dword *)0x0)) {
                    return pdVar18;
                  }
                  lVar16 = *(long *)(pdVar30 + 0x1c);
                  pdVar30 = (dword *)0x0;
                  if (lVar16 != 0) {
                    if (*(uint *)(lVar16 + 0x18) <= uVar29) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    plVar17 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28)
                    ;
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
                    *(dword **)(puVar9 + -0x68) = pdVar34;
                    lVar16 = *(long *)(pdVar34 + 0x1a);
                    if (lVar16 == 0) {
                      puVar38 = puVar9 + -0x68;
                      lVar37 = 1;
                    }
                    else {
                      lVar37 = *(long *)(lVar16 + 0x18);
                      if (lVar37 == 0) {
                        return pdVar34;
                      }
                      puVar38 = (undefined1 *)(lVar16 + 0x20);
                    }
                    lVar16 = 0;
                    goto code_r0x01e71a74;
                  }
                }
              }
              puVar39 = &Core_UI2_UIManager__SetScreenVisible;
              auVar45 = func_0x00f78af4();
              pdVar21 = pdVar23;
              pdVar18 = pdVar22;
code_r0x02f88674:
              pdVar23 = auVar45._0_8_;
              *(dword **)(puVar10 + -0x30) = pdVar34;
              *(dword **)(puVar10 + -0x28) = pdVar30;
              *(dword **)(puVar10 + -0x20) = pdVar18;
              *(dword **)(puVar10 + -0x18) = pdVar21;
              *(undefined1 **)(puVar10 + -0x10) = puVar38;
              *(undefined **)(puVar10 + -8) = puVar39;
              pdVar30 = pdVar23;
              if ((bRam0000000003ebc652 & 1) == 0) {
                pdVar30 = (dword *)func_0x00f78a20(0x3d3ddc8);
                bRam0000000003ebc652 = 1;
              }
              lVar16 = *(long *)(pdVar23 + 0x1c);
              if (lVar16 != 0) {
                uVar29 = auVar45._8_4_;
                if (*(uint *)(lVar16 + 0x18) <= uVar29) {
                  pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if (*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) {
                  return pdVar30;
                }
                lVar16 = *(long *)(pdVar23 + 0x1c);
                if (lVar16 != 0) {
                  if (*(uint *)(lVar16 + 0x18) <= uVar29) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
                  if ((lVar16 != 0) && (plVar17 = *(long **)(lVar16 + 0x28), plVar17 != (long *)0x0)
                     ) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    pdVar30 = (dword *)(**(code **)(*plVar17 + 0x178))
                                                 (plVar17,pdVar24,*(undefined8 *)(*plVar17 + 0x180))
                    ;
                    return pdVar30;
                  }
                }
              }
              auVar42 = func_0x00f78af4();
              uVar32 = auVar42._0_8_;
              *(long *)(puVar10 + -0x50) = auVar45._8_8_;
              *(dword **)(puVar10 + -0x48) = pdVar24;
              *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
              *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
              *(undefined8 *)(puVar10 + -0x68) = 0;
              *(undefined8 *)(puVar10 + -0x70) = 0;
              *(undefined8 *)(puVar10 + -0x58) = 0;
              *(undefined8 *)(puVar10 + -0x60) = 0;
              pdVar30 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar32,auVar42._8_8_,puVar10 + -0x70);
              if ((int)pdVar30 != 0) {
                /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar32,*(undefined8 *)(puVar10 + -0x60),
                                *(undefined8 *)(puVar10 + -0x58));
                *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
                *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
                *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
                *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
                pdVar30 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar32,puVar10 + -0x90,1);
              }
              return pdVar30;
            }
            puVar38 = *(undefined1 **)(puVar11 + -0xa0);
            puVar39 = *(undefined **)(puVar11 + -0x98);
          }
          else {
            pdVar24 = (dword *)0x0;
            uVar19 = 0;
            puVar39 = &UNK_01470820;
            pdVar22 = pdVar21;
            pdVar23 = pdVar30;
          }
          *(undefined8 *)(puVar11 + -0xd0) = uVar32;
          *(undefined8 *)(puVar11 + -200) = 0x3eb4000;
          *(undefined8 *)(puVar11 + -0xc0) = 0;
          *(dword **)(puVar11 + -0xb8) = pdVar30;
          *(dword **)(puVar11 + -0xb0) = pdVar18;
          *(dword **)(puVar11 + -0xa8) = pdVar21;
          *(undefined1 **)(puVar11 + -0xa0) = puVar38;
          *(undefined **)(puVar11 + -0x98) = puVar39;
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          *(undefined8 *)(puVar11 + -0x170) = unaff_x26;
          *(undefined8 *)(puVar11 + -0x168) = unaff_x25;
          *(undefined8 *)(puVar11 + -0x160) = 0x3ebc000;
          *(dword **)(puVar11 + -0x158) = pdVar22;
          *(dword **)(puVar11 + -0x150) = pdVar23;
          *(undefined8 *)(puVar11 + -0x148) = uVar19;
          *(long *)(puVar11 + -0x140) = lVar16;
          *(dword **)(puVar11 + -0x138) = pdVar24;
          *(undefined1 **)(puVar11 + -0x130) = puVar11 + -0xa0;
          *(undefined **)(puVar11 + -0x128) = &UNK_02f87f9c;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar37 = *(long *)(lVar16 + 0x78);
          if (lVar37 == 0) goto code_r0x02f8812c;
          iVar14 = *(int *)(lVar37 + 0x18);
          if (iVar14 < 1) {
            return (dword *)0x0;
          }
          iVar15 = 1;
          pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
          goto code_r0x02f880d0;
        }
      }
      pcVar36 = Atlas_Contexts_FrontEndContextPostQuickPlayState__PlayAgainSelected;
      param_1 = func_0x00f78af4();
      puVar11 = puVar11 + -0x80;
    } while( true );
  }
  lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40598);
  if (lVar16 == 0) {
LAB_0159024c:
    pdVar30 = (dword *)func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar32;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor;
    if ((bRam0000000003eb5138 & 1) == 0) {
      func_0x00f78a20(0x3d40590);
      bRam0000000003eb5138 = 1;
    }
    if (pdVar30 == (dword *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x40) =
           *(undefined8 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x38);
      auVar42 = func_0x00f78af4(0,uRam0000000003d40590);
      pdVar30 = auVar42._0_8_;
      *(undefined8 *)(pdVar30 + 4) = *param_3;
      *(long *)(pdVar30 + 8) = auVar42._8_8_;
      *(undefined8 **)(pdVar30 + 10) = param_3;
      return pdVar30;
    }
    return pdVar30;
  }
  uVar19 = *(undefined8 *)(lVar16 + 0x10);
  uVar32 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextModeSelectState.ModeSelectTransitionData_TypeInfo*/ uRam0000000003d27628);
  param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  Atlas_Contexts_FrontEndContextModeSelectState_ModeSelectTransitionData___ctor(uVar32,uVar19,1,0);
  unaff_x21 = /*Atlas.Contexts.FrontEndContextModeSelectState_var*/ uRam0000000003d194c8;
  pdVar30 = *(dword **)(param_1 + 0x78);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar17 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
  param_1 = 0;
  if (pdVar30 == (dword *)0x0) goto LAB_0159024c;
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar40 = *(undefined8 *)((long)register0x00000008 + -8);
  uVar41 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar31 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar35 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar33 = *(undefined8 *)((long)register0x00000008 + -0x28);
System_Action_Type__bool__TransitionData___Invoke:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar35;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar33;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar41;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar40;
  *(dword **)((long)register0x00000008 + -0x68) = pdVar30;
  lVar16 = *(long *)(pdVar30 + 0x1a);
  if (lVar16 == 0) {
    puVar38 = (undefined1 *)((long)register0x00000008 + -0x68);
    lVar37 = 1;
  }
  else {
    lVar37 = *(long *)(lVar16 + 0x18);
    if (lVar37 == 0) {
      return pdVar30;
    }
    puVar38 = (undefined1 *)(lVar16 + 0x20);
  }
  lVar16 = 0;
  do {
    lVar25 = *(long *)(puVar38 + lVar16 * 8);
    pcVar36 = *(code **)(lVar25 + 0x10);
    plVar1 = *(long **)(lVar25 + 0x20);
    lVar25 = *(long *)(lVar25 + 0x28);
    if (*(short *)(lVar25 + 0x48) == -1) {
      func_0x00f78ad8(lVar25);
    }
    iVar14 = func_0x00f78a4c(lVar25);
    bVar13 = *(char *)(lVar25 + 0x4a) == '\x03';
    if (iVar14 == 0) {
      if (bVar13) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          pdVar18 = (dword *)(*pcVar36)(plVar17,0,uVar32,lVar25);
        }
        else {
          if (((*(short *)(lVar25 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(pdVar30 + 6) == 0)) goto code_r0x01e7162c;
          iVar14 = func_0x00f78a44(lVar25);
          iVar15 = func_0x00f78ec0(lVar25);
          if (iVar14 == 0) {
            uVar4 = *(ushort *)(lVar25 + 0x48);
            if (iVar15 == 0) {
              lVar25 = *plVar1 + (ulong)uVar4 * 0x10;
              pdVar18 = (dword *)(**(code **)(lVar25 + 0x138))
                                           (plVar1,plVar17,0,uVar32,*(undefined8 *)(lVar25 + 0x140))
              ;
              goto code_r0x01e71750;
            }
            lVar25 = func_0x00f78a48(lVar25);
            lVar26 = *plVar1;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar25) {
                  puVar20 = (undefined8 *)
                            (lVar26 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar28 = piVar28 + 4;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar25,(ulong)uVar4);
code_r0x01e718f4:
            pcVar36 = (code *)*puVar20;
            puVar20 = (undefined8 *)puVar20[1];
          }
          else {
            if (iVar15 == 0) {
              uVar19 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar26 = *plVar1;
              uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar27 != 0) {
                piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == *(long *)(lVar25 + 0x18)) {
                    lVar26 = lVar26 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar25 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar28 = piVar28 + 4;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar19 = *(undefined8 *)(lVar26 + 8);
            }
            puVar20 = (undefined8 *)func_0x00f78acc(uVar19,lVar25);
            pcVar36 = (code *)*puVar20;
          }
          pdVar18 = (dword *)(*pcVar36)(plVar1,plVar17,0,uVar32,puVar20);
        }
      }
      else {
        if ((*(short *)(lVar25 + 0x48) == -1) || (*(long *)(pdVar30 + 6) == 0))
        goto code_r0x01e7173c;
        iVar14 = func_0x00f78a44(lVar25);
        iVar15 = func_0x00f78ec0(lVar25);
        if (iVar14 == 0) {
          uVar4 = *(ushort *)(lVar25 + 0x48);
          if (iVar15 == 0) {
            lVar25 = *plVar17 + (ulong)uVar4 * 0x10;
            pdVar18 = (dword *)(**(code **)(lVar25 + 0x138))
                                         (plVar17,0,uVar32,*(undefined8 *)(lVar25 + 0x140));
            goto code_r0x01e71750;
          }
          lVar25 = func_0x00f78a48(lVar25);
          lVar26 = *plVar17;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar25) {
                puVar20 = (undefined8 *)
                          (lVar26 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar28 = piVar28 + 4;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar17,lVar25,(ulong)uVar4);
code_r0x01e71880:
          pcVar36 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar15 == 0) {
            uVar19 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar26 = *plVar17;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)(lVar25 + 0x18)) {
                  lVar26 = lVar26 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar25 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71858;
                }
                piVar28 = piVar28 + 4;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            lVar26 = func_0x00fac1f0(plVar17);
code_r0x01e71858:
            uVar19 = *(undefined8 *)(lVar26 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar19,lVar25);
          pcVar36 = (code *)*puVar20;
        }
        pdVar18 = (dword *)(*pcVar36)(plVar17,0,uVar32,puVar20);
      }
    }
    else {
      if (bVar13) goto code_r0x01e7173c;
code_r0x01e7162c:
      pdVar18 = (dword *)(*pcVar36)(plVar1,plVar17,0,uVar32,lVar25);
    }
code_r0x01e71750:
    lVar16 = lVar16 + 1;
    if (lVar16 == lVar37) {
      return pdVar18;
    }
  } while( true );
LAB_015900fc:
  unaff_x29 = *(undefined1 **)(puVar11 + -0x50);
  unaff_x30 = *(code **)(puVar11 + -0x48);
  unaff_x20 = *(undefined8 *)(puVar11 + -0x60);
  register0x00000008 = (BADSPACEBASE *)(puVar11 + -0x40);
  unaff_x22 = *(undefined8 *)(puVar11 + -0x70);
  unaff_x21 = *(undefined8 *)(puVar11 + -0x68);
  param_1 = unaff_x19;
  unaff_x19 = *(long *)(puVar11 + -0x58);
  goto code_r0x01590114;
code_r0x02f883b0:
  puVar6 = puVar7 + -0x30;
  *(dword **)(puVar7 + -0x30) = pdVar34;
  *(dword **)(puVar7 + -0x28) = pdVar30;
  *(dword **)(puVar7 + -0x20) = pdVar18;
  *(dword **)(puVar7 + -0x18) = pdVar21;
  *(undefined1 **)(puVar7 + -0x10) = puVar38;
  *(undefined **)(puVar7 + -8) = puVar39;
  puVar38 = puVar7 + -0x10;
  puVar39 = &UNK_02f883d8;
  pdVar24 = pdVar22;
  pdVar21 = pdVar23;
  pdVar30 = pdVar22;
  pdVar34 = auVar42._0_8_;
code_r0x02f877a8:
  pdVar18 = auVar42._0_8_;
  puVar12 = puVar6 + -0x60;
  *(dword **)(puVar6 + -0x30) = pdVar34;
  *(long *)(puVar6 + -0x28) = auVar42._8_8_;
  *(dword **)(puVar6 + -0x20) = pdVar30;
  *(dword **)(puVar6 + -0x18) = pdVar21;
  *(undefined1 **)(puVar6 + -0x10) = puVar38;
  *(undefined **)(puVar6 + -8) = puVar39;
  puVar38 = puVar6 + -0x10;
  pdVar30 = pdVar18;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar30 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar29 = (uint)pdVar22;
  if (((int)uVar29 < 0) || ((int)*(long *)(pdVar18 + 0x14) <= (int)uVar29)) {
    return pdVar30;
  }
  lVar16 = *(long *)(pdVar18 + 0x1c);
  if (lVar16 == 0) {
code_r0x02f878a4:
    lVar16 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar34;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar18;
    *(dword **)(puVar6 + -0x78) = pdVar22;
    *(undefined1 **)(puVar6 + -0x70) = puVar38;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar32 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar32,0);
    if (0 < *(int *)(lVar16 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar16,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar16,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar16 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar16);
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
    pdVar30 = (dword *)(*pcRam0000000003ec05a0)(uVar32);
    return pdVar30;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar29) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
  pdVar34 = *(dword **)(lVar16 + 0x20);
  pdVar21 = *(dword **)(lVar16 + 0x28);
  *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar16 + 0x42);
  *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar16 + 0x46);
  if (pdVar21 == (dword *)0x0) {
    lVar16 = *(long *)(pdVar18 + 0x1c);
    if (lVar16 != 0) {
      *(dword **)(puVar6 + -0x58) = pdVar34;
      *(undefined8 *)(puVar6 + -0x50) = 0;
      *(undefined8 *)(puVar6 + -0x48) = 0;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined2 *)(puVar6 + -0x38) = 0;
      *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
      *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
      pdVar30 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar16,pdVar22,puVar6 + -0x58,uRam0000000003d3ddd0);
      return pdVar30;
    }
    goto code_r0x02f878a4;
  }
  puVar39 = &UNK_02f87848;
  pdVar30 = pdVar21;
code_r0x02f882d8:
  *(dword **)(puVar12 + -0x20) = pdVar18;
  *(dword **)(puVar12 + -0x18) = pdVar22;
  *(undefined1 **)(puVar12 + -0x10) = puVar38;
  *(undefined **)(puVar12 + -8) = puVar39;
  (**(code **)(*(long *)pdVar21 + 0x218))(pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x220));
  if (*(long *)(pdVar21 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar21 + 10),0);
    pdVar21[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar30 = (dword *)(**(code **)(*(long *)pdVar21 + 0x228))
                                 (pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x230));
    return pdVar30;
  }
  func_0x00f78af4();
  puVar7 = puVar12 + -0x40;
  *(dword **)(puVar12 + -0x40) = pdVar18;
  *(dword **)(puVar12 + -0x38) = pdVar21;
  *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar38 = puVar12 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar16 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar32 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar32,lVar16);
    pdVar30 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar30;
  }
  puVar39 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar42 = func_0x00f78af4();
  pdVar22 = pdVar24;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar25 = *(long *)(puVar38 + lVar16 * 8);
  pcVar36 = *(code **)(lVar25 + 0x10);
  plVar1 = *(long **)(lVar25 + 0x20);
  lVar25 = *(long *)(lVar25 + 0x28);
  if (*(short *)(lVar25 + 0x48) == -1) {
    func_0x00f78ad8(lVar25);
  }
  iVar14 = func_0x00f78a4c(lVar25);
  bVar13 = *(char *)(lVar25 + 0x4a) == '\x03';
  if (iVar14 == 0) {
    if (bVar13) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar30 = (dword *)(*pcVar36)(plVar17,pdVar22,pdVar23,lVar25);
      }
      else {
        if (((*(short *)(lVar25 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71aac;
        iVar14 = func_0x00f78a44(lVar25);
        iVar15 = func_0x00f78ec0(lVar25);
        if (iVar14 == 0) {
          uVar4 = *(ushort *)(lVar25 + 0x48);
          if (iVar15 == 0) {
            lVar25 = *plVar1 + (ulong)uVar4 * 0x10;
            pdVar30 = (dword *)(**(code **)(lVar25 + 0x138))
                                         (plVar1,plVar17,pdVar22,pdVar23,
                                          *(undefined8 *)(lVar25 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar25 = func_0x00f78a48(lVar25);
          lVar26 = *plVar1;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == lVar25) {
                puVar20 = (undefined8 *)
                          (lVar26 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar28 = piVar28 + 4;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar25,(ulong)uVar4);
code_r0x01e71d74:
          pcVar36 = (code *)*puVar20;
          puVar20 = (undefined8 *)puVar20[1];
        }
        else {
          if (iVar15 == 0) {
            uVar32 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar26 = *plVar1;
            uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar27 != 0) {
              piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == *(long *)(lVar25 + 0x18)) {
                  lVar26 = lVar26 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar25 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar28 = piVar28 + 4;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar32 = *(undefined8 *)(lVar26 + 8);
          }
          puVar20 = (undefined8 *)func_0x00f78acc(uVar32,lVar25);
          pcVar36 = (code *)*puVar20;
        }
        pdVar30 = (dword *)(*pcVar36)(plVar1,plVar17,pdVar22,pdVar23,puVar20);
      }
    }
    else {
      if ((*(short *)(lVar25 + 0x48) == -1) || (*(long *)(pdVar34 + 6) == 0)) goto code_r0x01e71bbc;
      iVar14 = func_0x00f78a44(lVar25);
      iVar15 = func_0x00f78ec0(lVar25);
      if (iVar14 == 0) {
        uVar4 = *(ushort *)(lVar25 + 0x48);
        if (iVar15 == 0) {
          lVar25 = *plVar17 + (ulong)uVar4 * 0x10;
          pdVar30 = (dword *)(**(code **)(lVar25 + 0x138))
                                       (plVar17,pdVar22,pdVar23,*(undefined8 *)(lVar25 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar25 = func_0x00f78a48(lVar25);
        lVar26 = *plVar17;
        uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar25) {
              puVar20 = (undefined8 *)(lVar26 + (long)(int)(*piVar28 + (uint)uVar4) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar28 = piVar28 + 4;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar17,lVar25,(ulong)uVar4);
code_r0x01e71d00:
        pcVar36 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar15 == 0) {
          uVar32 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar26 = *plVar17;
          uVar27 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar27 != 0) {
            piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar28 + -2) == *(long *)(lVar25 + 0x18)) {
                lVar26 = lVar26 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar25 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar28 = piVar28 + 4;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          lVar26 = func_0x00fac1f0(plVar17);
code_r0x01e71cd8:
          uVar32 = *(undefined8 *)(lVar26 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar32,lVar25);
        pcVar36 = (code *)*puVar20;
      }
      pdVar30 = (dword *)(*pcVar36)(plVar17,pdVar22,pdVar23,puVar20);
    }
  }
  else {
    if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar30 = (dword *)(*pcVar36)(plVar1,plVar17,pdVar22,pdVar23,lVar25);
  }
code_r0x01e71bd0:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar37) {
    return pdVar30;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar27 = /*System.String$$Equals*/ func_0x029caa48(lVar37,pdVar22,5,0);
    if ((uVar27 & 1) != 0) {
      return pdVar30;
    }
    pdVar30 = (dword *)(ulong)(iVar15 < iVar14);
    if (iVar14 == iVar15) {
      return pdVar30;
    }
    lVar37 = *(long *)(lVar16 + 0x78);
    iVar15 = iVar15 + 1;
    if (lVar37 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar37 + 0x18) <= iVar15 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar37 = *(long *)(*(long *)(lVar37 + 0x10) + (long)(int)(iVar15 - 1U) * 0x20 + 0x20);
    if (lVar37 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x1590250 | Atlas.Contexts.FrontEndContextPostQuickPlayState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextPostQuickPlayState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5138 & 1) == 0) {
    func_0x00f78a20(0x3d40590);
    bRam0000000003eb5138 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d40590);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



