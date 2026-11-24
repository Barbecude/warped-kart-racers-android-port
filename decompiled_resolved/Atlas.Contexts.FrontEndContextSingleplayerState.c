// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontEndContextSingleplayerState

// ============================================================
// RVA: 0x1589140 | Atlas.Contexts.FrontEndContextSingleplayerState.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158939c | Atlas.Contexts.FrontEndContextSingleplayerState.add_TransitionFromState
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x158a2f4 | Atlas.Contexts.FrontEndContextSingleplayerState.remove_TransitionFromState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_FrontEndContextSingleplayerState__remove_TransitionFromState
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
  ulong uStack_f0;
  ulong uStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb514f & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb514f = 1;
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
  pcStack_38 = Atlas_Contexts_FrontEndContextPlayWithFriendsState__remove_TransitionFromState;
  uStack_58 = uVar17;
  puStack_50 = puVar23;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
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
  uStack_90 = 0x3d1b6e0;
  pcStack_68 = Atlas_Contexts_FrontEndContextSettingsState__remove_TransitionFromState;
  uStack_88 = uVar17;
  puStack_80 = puVar23;
  uStack_78 = uVar25;
  ppuStack_70 = (undefined8 **)&puStack_40;
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
  uStack_c0 = 0x3d1b6e0;
  pcStack_98 = Atlas_Contexts_FrontEndContextSeasonsState__remove_TransitionFromState;
  uStack_b8 = uVar17;
  puStack_b0 = puVar23;
  uStack_a8 = uVar18;
  pppuStack_a0 = &ppuStack_70;
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
  puVar3 = &uStack_f0;
  uStack_f0 = 0x3d1b6e0;
  puStack_c8 = &Atlas_FrontEnd_FrontEndContext__ModeSelected;
  uStack_e8 = uVar17;
  puStack_e0 = puVar23;
  uStack_d8 = uVar25;
  ppppuStack_d0 = &pppuStack_a0;
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
    pppppuVar27 = &ppppuStack_d0;
    puVar28 = &Atlas_FrontEnd_FrontEndContext__StartGameContext;
    auVar1 = auVar33;
  }
  else {
    iVar6 = /*Atlas.FrontEnd.EventInfo$$get_Multiplayer*/ func_0x015838e4(lVar26);
    auVar1._8_8_ = puStack_e0;
    auVar1._0_8_ = uStack_d8;
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
        auVar34._8_8_ = puStack_e0;
        auVar34._0_8_ = uStack_d8;
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
        puVar4 = &uStack_c0;
        uVar17 = uStack_e8;
        uVar24 = uStack_f0;
        pppppuVar27 = (undefined8 *****)ppppuStack_d0;
        puVar28 = puStack_c8;
        goto Core_StateManagement_StateMachine__TryRequestState;
      }
      goto code_r0x0158a62c;
    }
    puVar3 = &uStack_c0;
    uVar9 = param_4;
    uVar17 = uStack_e8;
    uVar24 = uStack_f0;
    pppppuVar27 = (undefined8 *****)ppppuStack_d0;
    puVar28 = puStack_c8;
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
// RVA: 0x159136c | Atlas.Contexts.FrontEndContextSingleplayerState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontEndContextSingleplayerState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x1591378 | Atlas.Contexts.FrontEndContextSingleplayerState.OnEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15918b4 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowArcadeModeSelectScreen
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1591ab4 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowFreeplayDifficultyScreen
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1591dc0 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowArcadeMapSelect
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1591f40 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowFreeplay
// ============================================================

/* WARNING: Possible PIC construction at 0x01592098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159226c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015923d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x01592534) */
/* WARNING: Removing unreachable block (ram,0x015923d8) */
/* WARNING: Removing unreachable block (ram,0x01592270) */
/* WARNING: Removing unreachable block (ram,0x0159209c) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__ShowFreeplay(dword *param_1)

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
  dword *pdVar17;
  long lVar18;
  int iVar16;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  dword *pdVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  dword *pdVar28;
  long *extraout_x1;
  long *plVar29;
  dword *pdVar30;
  dword *pdVar31;
  undefined8 uVar32;
  dword *pdVar33;
  undefined8 uVar34;
  long lVar35;
  int *piVar36;
  uint uVar37;
  dword *pdVar38;
  long unaff_x24;
  undefined8 unaff_x25;
  code *pcVar39;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined1 *puVar42;
  undefined *puVar43;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb5153 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56d58);
    func_0x00f78a20(0x3d56d90);
    func_0x00f78a20(0x3d275c8);
    func_0x00f78a20(0x3d275d0);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d275d8);
    bRam0000000003eb5153 = 1;
  }
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.TransitionData_TypeInfo*/ uRam0000000003d275d8);
  /*Atlas.UI.Screens.FreeplayScreen.TransitionData$$.ctor*/ func_0x0154d8b4(pdVar17,0);
  lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.OptionSelected_TypeInfo*/ uRam0000000003d275d0);
  uVar32 = 0;
  uVar34 = uRam0000000003d56d58;
  /*Atlas.UI.Screens.FreeplayScreen.OptionSelected$$.ctor*/ func_0x0154d4c4(lVar18,param_1);
  if (pdVar17 == (dword *)0x0) {
LAB_015920b4:
    auVar44 = func_0x00f78af4();
    param_1 = auVar44._0_8_;
    puVar12 = &stack0xffffffffffffff60;
    puStack_48 = &Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter;
    pppppppuVar41 = &pppppppuStack_50;
    pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb515f & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d28ee8);
      func_0x00f78a20(0x3d56d38);
      func_0x00f78a20(0x3d56d50);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d40628);
      func_0x00f78a20(0x3d28ef0);
      func_0x00f78a20(0x3d62e48);
      func_0x00f78a20(0x3d62e50);
      func_0x00f78a20(0x3d62e58);
      func_0x00f78a20(0x3d27640);
      bRam0000000003eb515f = 1;
    }
    lVar18 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.<>c__DisplayClass35_0_TypeInfo*/ uRam0000000003d27640);
    /*Atlas.Contexts.FrontEndContextSingleplayerState.<>c__DisplayClass35_0$$.ctor*/ func_0x0154e8f4(lVar18,0);
    if (lVar18 != 0) {
      *(dword **)(lVar18 + 0x10) = param_1;
      *(long *)(lVar18 + 0x20) = auVar44._8_8_;
      if (*(long *)(param_1 + 0x24) != 0) {
        uVar19 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(*(long *)(param_1 + 0x24),auVar44._8_8_,0);
        *(undefined8 *)(lVar18 + 0x18) = uVar19;
        lVar20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
        if ((*(long *)(lVar18 + 0x18) != 0) && (lVar20 != 0)) {
          *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18);
          if (*(long *)(param_1 + 0x24) != 0) {
            puVar21 = (undefined8 *)
                      /*Atlas.Definitions.AtlasDefinitions$$GetIPDefinitionForChapter*/ func_0x014687d4(*(long *)(param_1 + 0x24),*(undefined8 *)(lVar18 + 0x20),0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar21,0,0);
            lVar20 = *(long *)(param_1 + 0x2c);
            if (iVar15 == 0) {
              if (lVar20 != 0) {
                /*Atlas.FrontEnd.FrontEndScene$$SetOverrideGenericIP*/ func_0x01593158(lVar20);
                *(undefined1 *)(param_1 + 0x34) = 1;
                pdVar38 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.TransitionData_TypeInfo*/ uRam0000000003d28ef0);
                /*Atlas.UI.Screens.SingleplayerChapterScreen.TransitionData$$.ctor*/ func_0x0156a84c(pdVar38,0);
                if (pdVar38 != (dword *)0x0) {
                  unaff_x28 = 0x3d56000;
                  unaff_x26 = 0x3d289a0;
                  unaff_x24 = 0x3d62000;
                  unaff_x25 = 0x3d62000;
                  unaff_x27 = 0x3d62000;
                  *(long *)(pdVar38 + 4) = *(long *)(lVar18 + 0x20);
                  pdVar38[6] = (dword)uVar34;
                  pdVar38[7] = (int)uVar32;
                  lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28ee8);
                  /*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected$$.ctor*/ func_0x0156a53c(lVar20,param_1,uRam0000000003d56d50,0);
                  *(long *)(pdVar38 + 8) = lVar20;
                  lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
                  /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar20,lVar18,uRam0000000003d62e48,0);
                  *(long *)(pdVar38 + 0xc) = lVar20;
                  lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
                  /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar20,lVar18,uRam0000000003d62e50,0);
                  *(long *)(pdVar38 + 0xe) = lVar20;
                  lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
                  /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar20,lVar18,uRam0000000003d62e58,0);
                  *(long *)(pdVar38 + 10) = lVar20;
                  *(long *)(pdVar38 + 0x10) = *(long *)(param_1 + 0x2c);
                  if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  pdVar28 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xa8);
                  pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
                  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar33,param_1,uRam0000000003d56d38,0);
                  puVar43 = &UNK_015923d8;
                  puVar11 = &stack0xffffffffffffff60;
                  pdVar31 = param_1;
                  pdVar17 = pdVar38;
                  pdVar30 = pdVar28;
                  pdVar22 = pdVar33;
                  pdVar23 = (dword *)0x3d56000;
                  pppppppuVar40 = pppppppuVar41;
                  goto code_r0x01592554;
                }
              }
            }
            else if ((puVar21 != (undefined8 *)0x0) && (lVar20 != 0)) {
              *(undefined8 *)(lVar20 + 0xc0) = puVar21[3];
              uVar19 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar20);
              puVar43 = &UNK_01592270;
              unaff_x24 = lVar20;
              goto code_r0x0159455c;
            }
          }
        }
      }
    }
    auVar44 = func_0x00f78af4();
    pdVar30 = auVar44._8_8_;
    param_1 = auVar44._0_8_;
    puVar11 = &stack0xffffffffffffff10;
    puStack_a8 = &Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview;
    pppppppuVar40 = &pppppppuStack_b0;
    unaff_x24 = 0x3d28f18;
    pdVar38 = (dword *)0x3d56d78;
    pppppppuStack_b0 = pppppppuVar41;
    if ((bRam0000000003eb5152 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d28f08);
      func_0x00f78a20(0x3d56d60);
      func_0x00f78a20(0x3d56d78);
      func_0x00f78a20(0x3d28f18);
      bRam0000000003eb5152 = 1;
    }
    pdVar22 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData_TypeInfo*/ uRam0000000003d28f18);
    /*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData$$.ctor*/ func_0x0156ac84(pdVar22,0);
    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28f08);
    pdVar33 = (dword *)0x0;
    pdVar17 = pdRam0000000003d56d78;
    /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$.ctor*/ func_0x0156a924(pdVar23,param_1);
    if (pdVar22 == (dword *)0x0) {
      puVar43 = &Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
      ;
      auVar44 = func_0x00f78af4();
      pdVar28 = auVar44._8_8_;
      pdVar31 = auVar44._0_8_;
    }
    else {
      unaff_x25 = 0x3d1feb8;
      unaff_x24 = 0x3d29bc0;
      pdVar38 = (dword *)0x3d56d60;
      *(dword **)(pdVar22 + 4) = pdVar23;
      *(dword **)(pdVar22 + 6) = pdVar30;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar28 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x98);
      pdVar33 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar33,param_1,uRam0000000003d56d60,0);
      puVar43 = &UNK_01592534;
      puVar11 = &stack0xffffffffffffff10;
      pdVar31 = param_1;
      pdVar17 = pdVar22;
      pdVar30 = pdVar28;
      pdVar23 = pdVar33;
    }
  }
  else {
    pdVar38 = (dword *)0x3d40000;
    *(long *)(pdVar17 + 4) = lVar18;
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.NextSelected_TypeInfo*/ uRam0000000003d275c8);
    uVar32 = 0;
    uVar34 = uRam0000000003d56d90;
    /*Atlas.UI.Screens.FreeplayScreen.NextSelected$$.ctor*/ func_0x0154d228(lVar18,param_1);
    *(long *)(pdVar17 + 8) = lVar18;
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if (lVar18 == 0) goto LAB_015920b4;
    *(long *)(pdVar17 + 6) = *(long *)(lVar18 + 0x28);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar28 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xd0);
    pdVar33 = *(dword **)(param_1 + 0x36);
    puVar43 = (undefined *)0x159209c;
    puVar11 = &stack0xffffffffffffffc0;
    pdVar31 = param_1;
    pdVar30 = pdVar17;
    pdVar22 = (dword *)0x3d1feb8;
    pdVar23 = (dword *)0x3d56000;
    pppppppuVar40 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
code_r0x01592554:
  *(dword **)(puVar11 + -0x30) = pdVar23;
  *(dword **)(puVar11 + -0x28) = pdVar22;
  *(dword **)(puVar11 + -0x20) = pdVar30;
  *(dword **)(puVar11 + -0x18) = param_1;
  *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar40;
  *(undefined **)(puVar11 + -8) = puVar43;
  pdVar22 = pdVar17;
  if (*(long *)(pdVar31 + 0x22) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar31 + 0x22),0,pdVar33,0);
    pdVar24 = *(dword **)(pdVar31 + 0x20);
    pdVar22 = pdVar33;
    param_1 = pdVar17;
    pdVar30 = pdVar28;
    if (pdVar24 != (dword *)0x0) {
      pdVar31 = (dword *)0x0;
      uVar34 = 0;
      *(long *)(puVar11 + -0x40) = unaff_x24;
      *(dword **)(puVar11 + -0x38) = pdVar38;
      *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
      *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
      *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      puVar42 = puVar11 + -0x10;
      pdVar38 = (dword *)0x0;
      pdVar30 = pdVar17;
      if ((bRam0000000003eb486f & 1) == 0) {
        func_0x00f78a20(0x3d53980);
        func_0x00f78a20(0x3d2fb90);
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb486f = 1;
      }
      *(undefined8 *)(puVar11 + -0x48) = 0;
      lVar18 = *(long *)(pdVar24 + 4);
      if (lVar18 != 0) {
        pdVar31 = (dword *)0x0;
        uVar34 = 0;
        puVar43 = &UNK_01470820;
        pdVar22 = pdVar28;
        pdVar30 = pdVar17;
code_r0x02f87f38:
        *(long *)(puVar11 + -0x90) = unaff_x24;
        *(undefined8 *)(puVar11 + -0x88) = 0x3eb4000;
        *(undefined8 *)(puVar11 + -0x80) = 0;
        *(dword **)(puVar11 + -0x78) = pdVar17;
        *(dword **)(puVar11 + -0x70) = pdVar24;
        *(dword **)(puVar11 + -0x68) = pdVar28;
        *(undefined1 **)(puVar11 + -0x60) = puVar42;
        *(undefined **)(puVar11 + -0x58) = puVar43;
        if ((bRam0000000003ebc64a & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64a = 1;
        }
        *(undefined8 *)(puVar11 + -0x130) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x128) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x120) = 0x3ebc000;
        *(dword **)(puVar11 + -0x118) = pdVar22;
        *(dword **)(puVar11 + -0x110) = pdVar30;
        *(undefined8 *)(puVar11 + -0x108) = uVar34;
        *(long *)(puVar11 + -0x100) = lVar18;
        *(dword **)(puVar11 + -0xf8) = pdVar31;
        *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x60;
        *(undefined **)(puVar11 + -0xe8) = &UNK_02f87f9c;
        if ((bRam0000000003ebc64e & 1) == 0) {
          func_0x00f78a20(0x3d3ddf0);
          func_0x00f78a20(0x3d3ddf8);
          bRam0000000003ebc64e = 1;
        }
        lVar20 = *(long *)(lVar18 + 0x78);
        if (lVar20 != 0) {
          iVar15 = *(int *)(lVar20 + 0x18);
          if (iVar15 < 1) {
            return (dword *)0x0;
          }
          iVar16 = 1;
          pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
          do {
            if (*(uint *)(lVar20 + 0x18) <= iVar16 - 1U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
            if (lVar20 == 0) break;
            uVar26 = /*System.String$$Equals*/ func_0x029caa48(lVar20,pdVar22,5,0);
            if ((uVar26 & 1) != 0) {
              return pdVar17;
            }
            pdVar17 = (dword *)(ulong)(iVar16 < iVar15);
            if (iVar15 == iVar16) {
              return pdVar17;
            }
            lVar20 = *(long *)(lVar18 + 0x78);
            iVar16 = iVar16 + 1;
          } while (lVar20 != 0);
        }
        func_0x00f78af4();
        return (dword *)0x0;
      }
      auVar44 = func_0x00f78af4();
      pdVar22 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x60) = puVar42;
      *(undefined **)(puVar11 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
      lVar18 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar18 != 0) {
        puVar42 = *(undefined1 **)(puVar11 + -0x60);
        puVar43 = *(undefined **)(puVar11 + -0x58);
        goto code_r0x02f87f38;
      }
      auVar44 = func_0x00f78af4();
      uVar34 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
      *(undefined **)(puVar11 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
      lVar18 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar18 != 0) {
        pdVar31 = (dword *)0x0;
        *(undefined8 *)(puVar11 + -0x90) = 0;
        *(dword **)(puVar11 + -0x88) = pdVar17;
        *(dword **)(puVar11 + -0x80) = pdVar24;
        *(dword **)(puVar11 + -0x78) = pdVar28;
        *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
        *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
        if ((bRam0000000003ebc64b & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar20 = *(long *)(lVar18 + 0x70);
        if (lVar20 != 0) {
          lVar27 = lVar20;
          if (*(uint *)(lVar20 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar27 = *(long *)(lVar18 + 0x70);
          }
          if (lVar27 != 0) {
            lVar20 = *(long *)(lVar20 + 0x10) + (long)(int)auVar44._8_4_ * 0x28;
            uVar19 = *(undefined8 *)(lVar20 + 0x28);
            uVar32 = *(undefined8 *)(lVar20 + 0x20);
            uVar2 = *(undefined4 *)(lVar20 + 0x42);
            *(undefined4 *)(puVar11 + -0xd8) = uVar2;
            uVar5 = *(undefined2 *)(lVar20 + 0x46);
            *(undefined2 *)(puVar11 + -0xd4) = uVar5;
            *(undefined8 *)(puVar11 + -200) = uVar19;
            *(undefined8 *)(puVar11 + -0xd0) = uVar32;
            *(undefined8 *)(puVar11 + -0xb8) = uVar19;
            *(undefined8 *)(puVar11 + -0xc0) = uVar32;
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(undefined8 *)(puVar11 + -0xa8) = 0;
            *(undefined2 *)(puVar11 + -0xa0) = 1;
            *(undefined4 *)(puVar11 + -0x9e) = uVar2;
            *(undefined2 *)(puVar11 + -0x9a) = uVar5;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar27,uVar34,puVar11 + -0xc0,uRam0000000003d3ddd0);
            pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,uVar34);
            return pdVar17;
          }
        }
        auVar44 = func_0x00f78af4();
        pdVar22 = auVar44._8_8_;
        puVar13 = puVar11 + -0x110;
        *(undefined8 *)(puVar11 + -0x110) = 0;
        *(long *)(puVar11 + -0x108) = lVar20;
        *(long *)(puVar11 + -0x100) = lVar18;
        *(undefined8 *)(puVar11 + -0xf8) = uVar34;
        *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x70;
        *(undefined **)(puVar11 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
        puVar11 = puVar11 + -0xf0;
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar18 = *(long *)(auVar44._0_8_ + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
          if (lVar18 == 0) {
            pdVar17 = (dword *)0x0;
          }
          else {
            pdVar17 = *(dword **)(lVar18 + 0x40);
          }
          return pdVar17;
        }
        puVar43 = &Core_UI2_UIScreen__ForceExit;
        pdVar28 = (dword *)func_0x00f78af4();
        pdVar24 = (dword *)0x0;
        pdVar17 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar44 = func_0x00f78af4();
      pdVar22 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x70;
      *(undefined **)(puVar11 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
      lVar18 = *(long *)(auVar44._0_8_ + 0x10);
      auVar44._8_8_ = pdVar17;
      auVar44._0_8_ = lVar18;
      if (lVar18 != 0) {
        pdVar31 = (dword *)0x0;
        puVar6 = puVar11 + -0x70;
        puVar42 = *(undefined1 **)(puVar11 + -0x80);
        puVar43 = *(undefined **)(puVar11 + -0x78);
        pdVar17 = pdVar24;
        goto code_r0x02f877a8;
      }
      auVar44 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x80;
      *(undefined **)(puVar11 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar18 = *(long *)(auVar44._0_8_ + 0x10);
      auVar44._8_8_ = auVar44._8_8_;
      auVar44._0_8_ = lVar18;
      if (lVar18 != 0) {
        puVar7 = puVar11 + -0x80;
        puVar42 = *(undefined1 **)(puVar11 + -0x90);
        puVar43 = *(undefined **)(puVar11 + -0x88);
        pdVar22 = pdVar31;
        while( true ) {
          puVar6 = puVar7 + -0x30;
          *(dword **)(puVar7 + -0x30) = pdVar38;
          *(dword **)(puVar7 + -0x28) = pdVar17;
          *(dword **)(puVar7 + -0x20) = pdVar24;
          *(dword **)(puVar7 + -0x18) = pdVar28;
          *(undefined1 **)(puVar7 + -0x10) = puVar42;
          *(undefined **)(puVar7 + -8) = puVar43;
          puVar42 = puVar7 + -0x10;
          puVar43 = &UNK_02f883d8;
          pdVar31 = pdVar22;
          pdVar28 = pdVar30;
          pdVar17 = pdVar22;
          pdVar38 = auVar44._0_8_;
code_r0x02f877a8:
          pdVar24 = auVar44._0_8_;
          puVar13 = puVar6 + -0x60;
          *(dword **)(puVar6 + -0x30) = pdVar38;
          *(long *)(puVar6 + -0x28) = auVar44._8_8_;
          *(dword **)(puVar6 + -0x20) = pdVar17;
          *(dword **)(puVar6 + -0x18) = pdVar28;
          *(undefined1 **)(puVar6 + -0x10) = puVar42;
          *(undefined **)(puVar6 + -8) = puVar43;
          puVar11 = puVar6 + -0x10;
          pdVar17 = pdVar24;
          if ((bRam0000000003ebc64d & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            pdVar17 = (dword *)func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64d = 1;
          }
          uVar37 = (uint)pdVar22;
          if (((int)uVar37 < 0) || ((int)*(long *)(pdVar24 + 0x14) <= (int)uVar37)) {
            return pdVar17;
          }
          lVar18 = *(long *)(pdVar24 + 0x1c);
          if (lVar18 == 0) break;
          if (*(uint *)(lVar18 + 0x18) <= uVar37) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(lVar18 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
          pdVar38 = *(dword **)(lVar18 + 0x20);
          pdVar28 = *(dword **)(lVar18 + 0x28);
          *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar18 + 0x42);
          *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar18 + 0x46);
          if (pdVar28 == (dword *)0x0) {
            lVar18 = *(long *)(pdVar24 + 0x1c);
            if (lVar18 != 0) {
              *(dword **)(puVar6 + -0x58) = pdVar38;
              *(undefined8 *)(puVar6 + -0x50) = 0;
              *(undefined8 *)(puVar6 + -0x48) = 0;
              *(undefined8 *)(puVar6 + -0x40) = 0;
              *(undefined2 *)(puVar6 + -0x38) = 0;
              *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
              *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
              pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar18,pdVar22,puVar6 + -0x58,uRam0000000003d3ddd0)
              ;
              return pdVar17;
            }
            break;
          }
          puVar43 = &UNK_02f87848;
          pdVar17 = pdVar28;
code_r0x02f882d8:
          *(dword **)(puVar13 + -0x20) = pdVar24;
          *(dword **)(puVar13 + -0x18) = pdVar22;
          *(undefined1 **)(puVar13 + -0x10) = puVar11;
          *(undefined **)(puVar13 + -8) = puVar43;
          (**(code **)(*(long *)pdVar28 + 0x218))(pdVar28,*(undefined8 *)(*(long *)pdVar28 + 0x220))
          ;
          if (*(long *)(pdVar28 + 10) != 0) {
            /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar28 + 10),0);
            pdVar28[0x13] = 4;
            /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar28,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar17 = (dword *)(**(code **)(*(long *)pdVar28 + 0x228))
                                         (pdVar28,*(undefined8 *)(*(long *)pdVar28 + 0x230));
            return pdVar17;
          }
          func_0x00f78af4();
          puVar7 = puVar13 + -0x40;
          *(dword **)(puVar13 + -0x40) = pdVar24;
          *(dword **)(puVar13 + -0x38) = pdVar28;
          *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
          *(undefined **)(puVar13 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
          puVar42 = puVar13 + -0x30;
          if (extraout_x1 != (long *)0x0) {
            lVar18 = extraout_x1[5];
            /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
            uVar34 = (**(code **)(*extraout_x1 + 0x238))
                               (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
            extraout_x1[5] = 0;
            extraout_x1[6] = 0;
            extraout_x1[9] = _UNK_037235c0;
            extraout_x1[7] = 0;
            extraout_x1[8] = 0;
            /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar34,lVar18);
            pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
            extraout_x1[0xb] = 0;
            return pdVar17;
          }
          puVar43 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
          auVar44 = func_0x00f78af4();
          pdVar22 = pdVar31;
        }
        lVar18 = func_0x00f78af4();
        *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
        *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
        *(dword **)(puVar6 + -0x90) = pdVar38;
        *(undefined8 *)(puVar6 + -0x88) = 0;
        *(dword **)(puVar6 + -0x80) = pdVar24;
        *(dword **)(puVar6 + -0x78) = pdVar22;
        *(undefined1 **)(puVar6 + -0x70) = puVar11;
        *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
        if ((bRam0000000003ebc647 & 1) == 0) {
          func_0x00f78a20(0x3d255c0);
          bRam0000000003ebc647 = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar34 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar34,0);
        if (0 < *(int *)(lVar18 + 0x50)) {
          iVar15 = 0;
          do {
            /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar18,iVar15);
            /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar18,iVar15);
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(lVar18 + 0x50));
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
        pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar34);
        return pdVar17;
      }
      auVar44 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0xa0) = puVar11 + -0x90;
      *(undefined **)(puVar11 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar18 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar18 == 0) {
        auVar44 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0xa0;
        *(undefined **)(puVar11 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
        lVar18 = *(long *)(auVar44._0_8_ + 0x10);
        auVar45._8_8_ = auVar44._8_8_;
        auVar45._0_8_ = lVar18;
        if (lVar18 != 0) {
          pdVar30 = (dword *)0x0;
          puVar8 = puVar11 + -0xa0;
          puVar42 = *(undefined1 **)(puVar11 + -0xb0);
          puVar43 = *(undefined **)(puVar11 + -0xa8);
          goto code_r0x02f884dc;
        }
        auVar44 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0xb0;
        *(undefined **)(puVar11 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
        lVar18 = *(long *)(auVar44._0_8_ + 0x10);
        auVar46._8_8_ = auVar44._8_8_;
        auVar46._0_8_ = lVar18;
        if (lVar18 == 0) {
          auVar44 = func_0x00f78af4();
          *(undefined1 **)(puVar11 + -0xd0) = puVar11 + -0xc0;
          *(undefined **)(puVar11 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar18 = *(long *)(auVar44._0_8_ + 0x10);
          auVar47._8_8_ = auVar44._8_8_;
          auVar47._0_8_ = lVar18;
          if (lVar18 == 0) {
            pdVar38 = (dword *)func_0x00f78af4();
            *(undefined8 *)(puVar11 + -0x100) = 0;
            *(dword **)(puVar11 + -0xf8) = pdVar17;
            *(dword **)(puVar11 + -0xf0) = pdVar24;
            *(dword **)(puVar11 + -0xe8) = pdVar28;
            *(undefined1 **)(puVar11 + -0xe0) = puVar11 + -0xd0;
            *(undefined **)(puVar11 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar34 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar34,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar38 + 0xc) = uVar34;
            return pdVar38;
          }
          puVar10 = puVar11 + -0xc0;
          puVar42 = *(undefined1 **)(puVar11 + -0xd0);
          puVar43 = *(undefined **)(puVar11 + -200);
          goto code_r0x02f88674;
        }
        puVar9 = puVar11 + -0xb0;
        puVar42 = *(undefined1 **)(puVar11 + -0xc0);
        puVar43 = *(undefined **)(puVar11 + -0xb8);
        pdVar30 = pdVar31;
        pdVar38 = pdVar17;
      }
      else {
        pdVar30 = (dword *)0x0;
        puVar8 = puVar11 + -0xc0;
        *(undefined8 *)(puVar11 + -0xc0) = 0;
        *(dword **)(puVar11 + -0xb8) = pdVar17;
        *(dword **)(puVar11 + -0xb0) = pdVar24;
        *(dword **)(puVar11 + -0xa8) = pdVar28;
        *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xa0);
        *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0x98);
        puVar42 = puVar11 + -0xa0;
        pdVar17 = (dword *)0x3ebc000;
        if ((bRam0000000003ebc64f & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar37 = auVar44._8_4_;
        if (((int)uVar37 < 0) || (*(int *)(lVar18 + 0x50) <= (int)uVar37)) {
          return (dword *)0x0;
        }
        lVar18 = *(long *)(lVar18 + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar37) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar20 = *(long *)(lVar18 + 0x10) + ((ulong)auVar44._8_8_ & 0xffffffff) * 0x28;
          lVar18 = *(long *)(lVar20 + 0x28);
          cVar3 = *(char *)(lVar20 + 0x40);
          iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar20 + 0x30),0);
          if (iVar15 == 0 || cVar3 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar18 != 0) && (*(int *)(lVar18 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar43 = &Core_UI2_UIManager__GetLayerState;
        auVar45 = func_0x00f78af4();
        pdVar24 = (dword *)0x0;
        pdVar28 = auVar44._8_8_;
code_r0x02f884dc:
        puVar9 = puVar8 + -0x30;
        *(undefined8 *)(puVar8 + -0x30) = 0;
        *(dword **)(puVar8 + -0x28) = pdVar17;
        *(dword **)(puVar8 + -0x20) = pdVar24;
        *(dword **)(puVar8 + -0x18) = pdVar28;
        *(undefined1 **)(puVar8 + -0x10) = puVar42;
        *(undefined **)(puVar8 + -8) = puVar43;
        puVar42 = puVar8 + -0x10;
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar18 = *(long *)(auVar45._0_8_ + 0x70);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= auVar45._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
          if (lVar18 == 0) {
            pdVar17 = &MACH_HEADER.cputype;
          }
          else {
            pdVar17 = (dword *)(ulong)*(uint *)(lVar18 + 0x4c);
          }
          return pdVar17;
        }
        puVar43 = &Core_UI2_UIManager__EnableInput;
        auVar46 = func_0x00f78af4();
        pdVar24 = (dword *)0x0;
        pdVar28 = auVar45._8_8_;
        pdVar38 = (dword *)0x3ebc000;
      }
      pdVar22 = auVar46._8_8_;
      pdVar17 = auVar46._0_8_;
      puVar10 = puVar9 + -0x40;
      *(long *)(puVar9 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(dword **)(puVar9 + -0x28) = pdVar38;
      *(dword **)(puVar9 + -0x20) = pdVar24;
      *(dword **)(puVar9 + -0x18) = pdVar28;
      *(undefined1 **)(puVar9 + -0x10) = puVar42;
      *(undefined **)(puVar9 + -8) = puVar43;
      puVar42 = puVar9 + -0x10;
      pdVar38 = (dword *)0x3ebc000;
      pdVar31 = pdVar30;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar17 + 0x1a) != 0) {
        pdVar31 = (dword *)(ulong)((uint)pdVar30 ^ 1);
        pdVar28 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar17 + 0x1a),pdVar22,pdVar31,0);
        lVar18 = *(long *)(pdVar17 + 0x1c);
        pdVar38 = (dword *)0x0;
        if (lVar18 != 0) {
          uVar37 = auVar46._8_4_;
          if (*(uint *)(lVar18 + 0x18) <= uVar37) {
            pdVar28 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar37 * 0x28 + 0x28) == 0) ||
             (pdVar38 = *(dword **)(pdVar17 + 0xc), pdVar38 == (dword *)0x0)) {
            return pdVar28;
          }
          lVar18 = *(long *)(pdVar17 + 0x1c);
          pdVar17 = (dword *)0x0;
          if (lVar18 != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar37) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar29 = *(long **)(*(long *)(lVar18 + 0x10) + (long)(int)uVar37 * 0x28 + 0x28);
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
            *(dword **)(puVar9 + -0x68) = pdVar38;
            lVar18 = *(long *)(pdVar38 + 0x1a);
            if (lVar18 == 0) {
              puVar11 = puVar9 + -0x68;
              lVar20 = 1;
            }
            else {
              lVar20 = *(long *)(lVar18 + 0x18);
              if (lVar20 == 0) {
                return pdVar38;
              }
              puVar11 = (undefined1 *)(lVar18 + 0x20);
            }
            lVar18 = 0;
            do {
              lVar27 = *(long *)(puVar11 + lVar18 * 8);
              pcVar39 = *(code **)(lVar27 + 0x10);
              plVar1 = *(long **)(lVar27 + 0x20);
              lVar27 = *(long *)(lVar27 + 0x28);
              if (*(short *)(lVar27 + 0x48) == -1) {
                func_0x00f78ad8(lVar27);
              }
              iVar15 = func_0x00f78a4c(lVar27);
              bVar14 = *(char *)(lVar27 + 0x4a) == '\x03';
              if (iVar15 == 0) {
                if (bVar14) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    pdVar17 = (dword *)(*pcVar39)(plVar29,pdVar22,pdVar30,lVar27);
                  }
                  else {
                    if (((*(short *)(lVar27 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar38 + 6) == 0))
                    goto code_r0x01e71aac;
                    iVar15 = func_0x00f78a44(lVar27);
                    iVar16 = func_0x00f78ec0(lVar27);
                    if (iVar15 == 0) {
                      uVar4 = *(ushort *)(lVar27 + 0x48);
                      if (iVar16 == 0) {
                        lVar27 = *plVar1 + (ulong)uVar4 * 0x10;
                        pdVar17 = (dword *)(**(code **)(lVar27 + 0x138))
                                                     (plVar1,plVar29,pdVar22,pdVar30,
                                                      *(undefined8 *)(lVar27 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar27 = func_0x00f78a48(lVar27);
                      lVar35 = *plVar1;
                      uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
                      if (uVar26 != 0) {
                        piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar36 + -2) == lVar27) {
                            puVar21 = (undefined8 *)
                                      (lVar35 + (long)(int)(*piVar36 + (uint)uVar4) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar36 = piVar36 + 4;
                          uVar26 = uVar26 - 1;
                        } while (uVar26 != 0);
                      }
                      puVar21 = (undefined8 *)func_0x00fac1f0(plVar1,lVar27,(ulong)uVar4);
code_r0x01e71d74:
                      pcVar39 = (code *)*puVar21;
                      puVar21 = (undefined8 *)puVar21[1];
                    }
                    else {
                      if (iVar16 == 0) {
                        uVar34 = *(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar35 = *plVar1;
                        uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
                        if (uVar26 != 0) {
                          piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar36 + -2) == *(long *)(lVar27 + 0x18)) {
                              lVar35 = lVar35 + (long)(int)(*piVar36 +
                                                           (uint)*(ushort *)(lVar27 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar36 = piVar36 + 4;
                            uVar26 = uVar26 - 1;
                          } while (uVar26 != 0);
                        }
                        lVar35 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar34 = *(undefined8 *)(lVar35 + 8);
                      }
                      puVar21 = (undefined8 *)func_0x00f78acc(uVar34,lVar27);
                      pcVar39 = (code *)*puVar21;
                    }
                    pdVar17 = (dword *)(*pcVar39)(plVar1,plVar29,pdVar22,pdVar30,puVar21);
                  }
                }
                else {
                  if ((*(short *)(lVar27 + 0x48) == -1) || (*(long *)(pdVar38 + 6) == 0))
                  goto code_r0x01e71bbc;
                  iVar15 = func_0x00f78a44(lVar27);
                  iVar16 = func_0x00f78ec0(lVar27);
                  if (iVar15 == 0) {
                    uVar4 = *(ushort *)(lVar27 + 0x48);
                    if (iVar16 == 0) {
                      lVar27 = *plVar29 + (ulong)uVar4 * 0x10;
                      pdVar17 = (dword *)(**(code **)(lVar27 + 0x138))
                                                   (plVar29,pdVar22,pdVar30,
                                                    *(undefined8 *)(lVar27 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar27 = func_0x00f78a48(lVar27);
                    lVar35 = *plVar29;
                    uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
                    if (uVar26 != 0) {
                      piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar36 + -2) == lVar27) {
                          puVar21 = (undefined8 *)
                                    (lVar35 + (long)(int)(*piVar36 + (uint)uVar4) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar36 = piVar36 + 4;
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    puVar21 = (undefined8 *)func_0x00fac1f0(plVar29,lVar27,(ulong)uVar4);
code_r0x01e71d00:
                    pcVar39 = (code *)*puVar21;
                    puVar21 = (undefined8 *)puVar21[1];
                  }
                  else {
                    if (iVar16 == 0) {
                      uVar34 = *(undefined8 *)
                                (*plVar29 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar35 = *plVar29;
                      uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
                      if (uVar26 != 0) {
                        piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar36 + -2) == *(long *)(lVar27 + 0x18)) {
                            lVar35 = lVar35 + (long)(int)(*piVar36 +
                                                         (uint)*(ushort *)(lVar27 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar36 = piVar36 + 4;
                          uVar26 = uVar26 - 1;
                        } while (uVar26 != 0);
                      }
                      lVar35 = func_0x00fac1f0(plVar29);
code_r0x01e71cd8:
                      uVar34 = *(undefined8 *)(lVar35 + 8);
                    }
                    puVar21 = (undefined8 *)func_0x00f78acc(uVar34,lVar27);
                    pcVar39 = (code *)*puVar21;
                  }
                  pdVar17 = (dword *)(*pcVar39)(plVar29,pdVar22,pdVar30,puVar21);
                }
              }
              else {
                if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
                pdVar17 = (dword *)(*pcVar39)(plVar1,plVar29,pdVar22,pdVar30,lVar27);
              }
code_r0x01e71bd0:
              lVar18 = lVar18 + 1;
              if (lVar18 == lVar20) {
                return pdVar17;
              }
            } while( true );
          }
        }
      }
      puVar43 = &Core_UI2_UIManager__SetScreenVisible;
      auVar47 = func_0x00f78af4();
      pdVar28 = pdVar30;
      pdVar24 = pdVar22;
code_r0x02f88674:
      pdVar30 = auVar47._0_8_;
      *(dword **)(puVar10 + -0x30) = pdVar38;
      *(dword **)(puVar10 + -0x28) = pdVar17;
      *(dword **)(puVar10 + -0x20) = pdVar24;
      *(dword **)(puVar10 + -0x18) = pdVar28;
      *(undefined1 **)(puVar10 + -0x10) = puVar42;
      *(undefined **)(puVar10 + -8) = puVar43;
      pdVar17 = pdVar30;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar18 = *(long *)(pdVar30 + 0x1c);
      if (lVar18 != 0) {
        uVar37 = auVar47._8_4_;
        if (*(uint *)(lVar18 + 0x18) <= uVar37) {
          pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar37 * 0x28 + 0x28) == 0) {
          return pdVar17;
        }
        lVar18 = *(long *)(pdVar30 + 0x1c);
        if (lVar18 != 0) {
          if (*(uint *)(lVar18 + 0x18) <= uVar37) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar37 * 0x28 + 0x28);
          if ((lVar18 != 0) && (plVar29 = *(long **)(lVar18 + 0x28), plVar29 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar17 = (dword *)(**(code **)(*plVar29 + 0x178))
                                         (plVar29,pdVar31,*(undefined8 *)(*plVar29 + 0x180));
            return pdVar17;
          }
        }
      }
      auVar44 = func_0x00f78af4();
      uVar34 = auVar44._0_8_;
      *(long *)(puVar10 + -0x50) = auVar47._8_8_;
      *(dword **)(puVar10 + -0x48) = pdVar31;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x58) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar34,auVar44._8_8_,puVar10 + -0x70);
      if ((int)pdVar17 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar34,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
        *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
        pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar34,puVar10 + -0x90,1);
      }
      return pdVar17;
    }
  }
  auVar44 = func_0x00f78af4();
  uVar34 = auVar44._0_8_;
  *(long *)(puVar11 + -0x70) = unaff_x24;
  *(dword **)(puVar11 + -0x68) = pdVar38;
  *(dword **)(puVar11 + -0x60) = pdVar23;
  *(dword **)(puVar11 + -0x58) = pdVar31;
  *(dword **)(puVar11 + -0x50) = pdVar30;
  *(dword **)(puVar11 + -0x48) = param_1;
  *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x38) = &Atlas_Contexts_FrontEndContextSingleplayerState__MapSelected;
  puVar21 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5155 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5155 = 1;
  }
  lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar34,uRam0000000003d40628);
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
    *(long *)(*(long *)(lVar18 + 0x18) + 0x18) = auVar44._8_8_;
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar34,uRam0000000003d40628);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
      *(dword **)(*(long *)(lVar18 + 0x18) + 0x20) = pdVar22;
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar34,uRam0000000003d40628);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
        *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x10) = 4;
        lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar34,uRam0000000003d40628);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar17 = (dword *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar22,0);
        auVar44 = ZEXT816(0x3d21000) << 0x40;
        if (lVar18 != 0) {
          *(dword **)(lVar18 + 0x28) = pdVar17;
          return pdVar17;
        }
      }
    }
  }
  auVar45 = func_0x00f78af4();
  uVar34 = auVar45._8_8_;
  lVar18 = auVar45._0_8_;
  *(undefined8 *)(puVar11 + -0xa0) = 0x3d40628;
  *(long *)(puVar11 + -0x98) = auVar44._8_8_;
  *(long *)(puVar11 + -0x90) = auVar44._0_8_;
  *(dword **)(puVar11 + -0x88) = pdVar22;
  *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x40;
  *(undefined **)(puVar11 + -0x78) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__DifficultySelected;
  uVar32 = 0x3eb5000;
  if ((bRam0000000003eb5158 & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5158 = 1;
  }
  if ((*(long *)(lVar18 + 0x90) != 0) &&
     (lVar20 = *(long *)(*(long *)(lVar18 + 0x90) + 0x10), lVar20 != 0)) {
    uVar32 = 0x3d40000;
    uVar34 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar20,uVar34,uRam0000000003d57278);
    pdVar17 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d40628);
    if ((pdVar17 != (dword *)0x0) && (*(long *)(pdVar17 + 6) != 0)) {
      *(undefined8 *)(*(long *)(pdVar17 + 6) + 0x70) = uVar34;
      return pdVar17;
    }
  }
  auVar44 = func_0x00f78af4();
  uVar19 = auVar44._8_8_;
  lVar20 = auVar44._0_8_;
  *(undefined8 *)(puVar11 + -0xf0) = unaff_x26;
  *(undefined8 *)(puVar11 + -0xe8) = unaff_x25;
  *(long *)(puVar11 + -0xe0) = unaff_x24;
  *(undefined8 *)(puVar11 + -0xd8) = 0x3eb5000;
  *(undefined8 *)(puVar11 + -0xd0) = 0x3d40628;
  *(undefined8 *)(puVar11 + -200) = uVar32;
  *(undefined8 *)(puVar11 + -0xc0) = uVar34;
  *(long *)(puVar11 + -0xb8) = lVar18;
  *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0x80;
  *(undefined **)(puVar11 + -0xa8) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__ArcadeModeSelected;
  lVar18 = 0x3eb5000;
  unaff_x25 = 0x3d40628;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  pdVar17 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d40628);
  uVar34 = 0x3d40628;
  if ((pdVar17 != (dword *)0x0) && (*(long *)(pdVar17 + 6) != 0)) {
    *(int *)(*(long *)(pdVar17 + 6) + 0x10) = auVar44._8_4_;
    if (auVar44._8_4_ == 4) {
      return pdVar17;
    }
    lVar27 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d40628);
    uVar34 = 0x3d40628;
    if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
      uVar34 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920
                               ,0);
      if (*(long *)(lVar20 + 0x90) != 0) {
        lVar18 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar20 + 0x90),uVar19,0);
        puVar21 = *(undefined8 **)(lVar20 + 0x90);
        lVar27 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d40628);
        if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
          unaff_x24 = *(long *)(*(long *)(lVar27 + 0x18) + 0x20);
          uVar32 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x24,0);
          unaff_x26 = 0x3d21270;
          if (puVar21 != (undefined8 *)0x0) {
            puVar21 = (undefined8 *)/*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(puVar21,uVar25,uVar19,0);
            if ((int)uVar34 == 0) {
              unaff_x26 = uVar32;
              if ((lVar18 != 0) && (puVar21 != (undefined8 *)0x0)) {
                uVar19 = *(undefined8 *)(lVar18 + 0x50);
                puVar21 = puVar21 + 6;
                *(undefined8 *)(puVar11 + -0xf8) = *puVar21;
                iVar15 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar11 + -0xf8,0);
                if (iVar15 != 0) goto code_r0x015928d0;
                goto code_r0x015928d4;
              }
            }
            else if ((lVar18 != 0) && (unaff_x26 = uVar32, puVar21 != (undefined8 *)0x0)) {
              uVar19 = *(undefined8 *)(lVar18 + 0x58);
              puVar21 = puVar21 + 7;
              *(undefined8 *)(puVar11 + -0xf8) = *puVar21;
              uVar26 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar11 + -0xf8,0);
              if ((uVar26 & 1) != 0) {
code_r0x015928d0:
                uVar19 = *puVar21;
              }
code_r0x015928d4:
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              pdVar17 = (dword *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar19,**(undefined8 **)
                                                          (/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
              if ((int)pdVar17 == 0) {
                return pdVar17;
              }
              unaff_x26 = uVar32;
              if ((*(long *)(lVar20 + 0x90) != 0) &&
                 (lVar27 = *(long *)(*(long *)(lVar20 + 0x90) + 0x10), lVar27 != 0)) {
                uVar19 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar27,uVar19,uRam0000000003d57278);
                pdVar17 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d40628);
                if ((pdVar17 != (dword *)0x0) && (*(long *)(pdVar17 + 6) != 0)) {
                  *(undefined8 *)(*(long *)(pdVar17 + 6) + 0x70) = uVar19;
                  return pdVar17;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar27 = func_0x00f78af4();
  *(undefined8 *)(puVar11 + -0x130) = uVar34;
  *(long *)(puVar11 + -0x128) = lVar18;
  *(undefined8 *)(puVar11 + -0x120) = uVar19;
  *(long *)(puVar11 + -0x118) = lVar20;
  *(undefined1 **)(puVar11 + -0x110) = puVar11 + -0xb0;
  *(undefined **)(puVar11 + -0x108) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__EnterLoadOutState;
  uVar32 = 0x3d40628;
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar27,uRam0000000003d40628);
  if (lVar18 != 0) {
    uVar34 = *(undefined8 *)(lVar18 + 0x18);
    uVar32 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
    pdVar17 = (dword *)Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor
                                 (uVar32,uVar34,1,0);
    uVar34 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
    pdVar38 = *(dword **)(lVar27 + 0x78);
    if (pdVar38 == (dword *)0x0) {
      return pdVar17;
    }
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar29 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar34,0);
    *(undefined8 *)(puVar11 + -0x160) = unaff_x28;
    *(undefined8 *)(puVar11 + -0x158) = unaff_x27;
    *(undefined8 *)(puVar11 + -0x150) = unaff_x26;
    *(undefined8 *)(puVar11 + -0x148) = 0x3d40628;
    *(long *)(puVar11 + -0x140) = unaff_x24;
    *(undefined8 **)(puVar11 + -0x138) = puVar21;
    *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x130);
    *(undefined8 *)(puVar11 + -0x128) = *(undefined8 *)(puVar11 + -0x128);
    *(undefined8 *)(puVar11 + -0x120) = *(undefined8 *)(puVar11 + -0x120);
    *(undefined8 *)(puVar11 + -0x118) = *(undefined8 *)(puVar11 + -0x118);
    *(undefined8 *)(puVar11 + -0x110) = *(undefined8 *)(puVar11 + -0x110);
    *(undefined8 *)(puVar11 + -0x108) = *(undefined8 *)(puVar11 + -0x108);
    *(dword **)(puVar11 + -0x168) = pdVar38;
    lVar18 = *(long *)(pdVar38 + 0x1a);
    if (lVar18 == 0) {
      puVar11 = puVar11 + -0x168;
      lVar20 = 1;
    }
    else {
      lVar20 = *(long *)(lVar18 + 0x18);
      if (lVar20 == 0) {
        return pdVar38;
      }
      puVar11 = (undefined1 *)(lVar18 + 0x20);
    }
    lVar18 = 0;
    do {
      lVar27 = *(long *)(puVar11 + lVar18 * 8);
      pcVar39 = *(code **)(lVar27 + 0x10);
      plVar1 = *(long **)(lVar27 + 0x20);
      lVar27 = *(long *)(lVar27 + 0x28);
      if (*(short *)(lVar27 + 0x48) == -1) {
        func_0x00f78ad8(lVar27);
      }
      iVar15 = func_0x00f78a4c(lVar27);
      bVar14 = *(char *)(lVar27 + 0x4a) == '\x03';
      if (iVar15 == 0) {
        if (bVar14) {
          if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
            pdVar17 = (dword *)(*pcVar39)(plVar29,0,uVar32,lVar27);
          }
          else {
            if (((*(short *)(lVar27 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(pdVar38 + 6) == 0)) goto code_r0x01e7162c;
            iVar15 = func_0x00f78a44(lVar27);
            iVar16 = func_0x00f78ec0(lVar27);
            if (iVar15 == 0) {
              uVar4 = *(ushort *)(lVar27 + 0x48);
              if (iVar16 == 0) {
                lVar27 = *plVar1 + (ulong)uVar4 * 0x10;
                pdVar17 = (dword *)(**(code **)(lVar27 + 0x138))
                                             (plVar1,plVar29,0,uVar32,
                                              *(undefined8 *)(lVar27 + 0x140));
                goto code_r0x01e71750;
              }
              lVar27 = func_0x00f78a48(lVar27);
              lVar35 = *plVar1;
              uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
              if (uVar26 != 0) {
                piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == lVar27) {
                    puVar21 = (undefined8 *)
                              (lVar35 + (long)(int)(*piVar36 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01e718f4;
                  }
                  piVar36 = piVar36 + 4;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              puVar21 = (undefined8 *)func_0x00fac1f0(plVar1,lVar27,(ulong)uVar4);
code_r0x01e718f4:
              pcVar39 = (code *)*puVar21;
              puVar21 = (undefined8 *)puVar21[1];
            }
            else {
              if (iVar16 == 0) {
                uVar34 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar35 = *plVar1;
                uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
                if (uVar26 != 0) {
                  piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar36 + -2) == *(long *)(lVar27 + 0x18)) {
                      lVar35 = lVar35 + (long)(int)(*piVar36 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e718cc;
                    }
                    piVar36 = piVar36 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                lVar35 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                uVar34 = *(undefined8 *)(lVar35 + 8);
              }
              puVar21 = (undefined8 *)func_0x00f78acc(uVar34,lVar27);
              pcVar39 = (code *)*puVar21;
            }
            pdVar17 = (dword *)(*pcVar39)(plVar1,plVar29,0,uVar32,puVar21);
          }
        }
        else {
          if ((*(short *)(lVar27 + 0x48) == -1) || (*(long *)(pdVar38 + 6) == 0))
          goto code_r0x01e7173c;
          iVar15 = func_0x00f78a44(lVar27);
          iVar16 = func_0x00f78ec0(lVar27);
          if (iVar15 == 0) {
            uVar4 = *(ushort *)(lVar27 + 0x48);
            if (iVar16 == 0) {
              lVar27 = *plVar29 + (ulong)uVar4 * 0x10;
              pdVar17 = (dword *)(**(code **)(lVar27 + 0x138))
                                           (plVar29,0,uVar32,*(undefined8 *)(lVar27 + 0x140));
              goto code_r0x01e71750;
            }
            lVar27 = func_0x00f78a48(lVar27);
            lVar35 = *plVar29;
            uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
            if (uVar26 != 0) {
              piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
              do {
                if (*(long *)(piVar36 + -2) == lVar27) {
                  puVar21 = (undefined8 *)
                            (lVar35 + (long)(int)(*piVar36 + (uint)uVar4) * 0x10 + 0x138);
                  goto code_r0x01e71880;
                }
                piVar36 = piVar36 + 4;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            puVar21 = (undefined8 *)func_0x00fac1f0(plVar29,lVar27,(ulong)uVar4);
code_r0x01e71880:
            pcVar39 = (code *)*puVar21;
            puVar21 = (undefined8 *)puVar21[1];
          }
          else {
            if (iVar16 == 0) {
              uVar34 = *(undefined8 *)(*plVar29 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar35 = *plVar29;
              uVar26 = (ulong)*(ushort *)(lVar35 + 0x12a);
              if (uVar26 != 0) {
                piVar36 = (int *)(*(long *)(lVar35 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar36 + -2) == *(long *)(lVar27 + 0x18)) {
                    lVar35 = lVar35 + (long)(int)(*piVar36 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e71858;
                  }
                  piVar36 = piVar36 + 4;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              lVar35 = func_0x00fac1f0(plVar29);
code_r0x01e71858:
              uVar34 = *(undefined8 *)(lVar35 + 8);
            }
            puVar21 = (undefined8 *)func_0x00f78acc(uVar34,lVar27);
            pcVar39 = (code *)*puVar21;
          }
          pdVar17 = (dword *)(*pcVar39)(plVar29,0,uVar32,puVar21);
        }
      }
      else {
        if (bVar14) goto code_r0x01e7173c;
code_r0x01e7162c:
        pdVar17 = (dword *)(*pcVar39)(plVar1,plVar29,0,uVar32,lVar27);
      }
code_r0x01e71750:
      lVar18 = lVar18 + 1;
      if (lVar18 == lVar20) {
        return pdVar17;
      }
    } while( true );
  }
  lVar18 = func_0x00f78af4();
  *(undefined8 *)(puVar11 + -0x160) = uVar34;
  *(undefined8 *)(puVar11 + -0x158) = 0x3d40628;
  *(undefined8 *)(puVar11 + -0x150) = 0x3eb5000;
  *(long *)(puVar11 + -0x148) = lVar27;
  *(undefined1 **)(puVar11 + -0x140) = puVar11 + -0x110;
  *(undefined **)(puVar11 + -0x138) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__OverviewBackPressed;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb515b & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515b = 1;
  }
  lVar20 = *(long *)(lVar18 + 0xb0);
  if (lVar20 == 0) {
    puVar43 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
    lVar20 = func_0x00f78af4();
  }
  else {
    uVar19 = 0x3d19000;
    uVar32 = 0x3d25000;
    puVar43 = &UNK_01592b20;
  }
  *(undefined8 *)(puVar11 + -400) = uVar34;
  *(undefined8 *)(puVar11 + -0x188) = uVar32;
  *(undefined8 *)(puVar11 + -0x180) = uVar19;
  *(long *)(puVar11 + -0x178) = lVar18;
  *(undefined1 **)(puVar11 + -0x170) = puVar11 + -0x140;
  *(undefined **)(puVar11 + -0x168) = puVar43;
  if ((bRam0000000003eb516d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb516d = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar20 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar19 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar20);
  pppppppuVar41 = *(undefined8 ********)(puVar11 + -0x170);
  puVar43 = *(undefined **)(puVar11 + -0x168);
  uVar34 = *(undefined8 *)(puVar11 + -0x180);
  param_1 = *(dword **)(puVar11 + -0x178);
  puVar12 = puVar11 + -0x160;
  lVar18 = *(long *)(puVar11 + -400);
  uVar32 = *(undefined8 *)(puVar11 + -0x188);
code_r0x0159455c:
  *(long *)(puVar12 + -0x30) = lVar18;
  *(undefined8 *)(puVar12 + -0x28) = uVar32;
  *(undefined8 *)(puVar12 + -0x20) = uVar34;
  *(dword **)(puVar12 + -0x18) = param_1;
  *(undefined8 ********)(puVar12 + -0x10) = pppppppuVar41;
  *(undefined **)(puVar12 + -8) = puVar43;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar34 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar20,uVar19);
  uVar32 = *(undefined8 *)(lVar20 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar17 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar32,0);
  if ((int)pdVar17 == 0) {
    return pdVar17;
  }
  plVar29 = *(long **)(lVar20 + 200);
  if (plVar29 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar17 = (dword *)(**(code **)(*plVar29 + 0x198))
                                 (plVar29,uVar34,*(undefined8 *)(*plVar29 + 0x1a0));
    return pdVar17;
  }
  auVar44 = func_0x00f78af4();
  plVar29 = auVar44._8_8_;
  pdVar38 = auVar44._0_8_;
  *(undefined8 *)(puVar12 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar12 + -0x78) = unaff_x25;
  *(long *)(puVar12 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar12 + -0x68) = puVar21;
  *(undefined8 *)(puVar12 + -0x60) = 0x3d23990;
  *(undefined8 *)(puVar12 + -0x58) = uVar32;
  *(undefined8 *)(puVar12 + -0x50) = uVar34;
  *(long *)(puVar12 + -0x48) = lVar20;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
  pdVar17 = pdVar38;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    pdVar17 = (dword *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar29 != (long *)0x0) && (*plVar29 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    pdVar17 = (dword *)func_0x00f78e5c(plVar29);
    return pdVar17;
  }
  lVar18 = *(long *)(pdVar38 + 0x24);
  if (lVar18 != 0) {
    uVar37 = 0;
    while( true ) {
      if (*(int *)(lVar18 + 0x18) <= (int)uVar37) {
        return pdVar17;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar18 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar29,uRam0000000003d5b098);
      lVar20 = *(long *)(pdVar38 + 0x24);
      if ((lVar20 == 0) || (lVar18 == 0)) break;
      uVar34 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar18,uRam0000000003d578b8);
      if (*(uint *)(lVar20 + 0x18) <= uVar37) {
code_r0x015947cc:
        uVar34 = func_0x00f78b24();
        func_0x00f78ac0(uVar34,0);
        goto code_r0x015947d8;
      }
      lVar27 = (long)(int)uVar37;
      *(undefined8 *)(lVar20 + lVar27 * 0x40 + 0x40) = uVar34;
      lVar18 = *(long *)(pdVar38 + 0x24);
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar37) goto code_r0x015947cc;
      lVar18 = *(long *)(lVar18 + lVar27 * 0x40 + 0x40);
      if (lVar18 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar18,0);
      lVar18 = *(long *)(pdVar38 + 0x24);
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar37) goto code_r0x015947cc;
      lVar18 = *(long *)(lVar18 + lVar27 * 0x40 + 0x40);
      if (lVar18 == 0) break;
      uVar34 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar18,0);
      lVar18 = *(long *)(pdVar38 + 0x24);
      if (lVar18 == 0) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar37) goto code_r0x015947cc;
      lVar18 = *(long *)(lVar18 + lVar27 * 0x40 + 0x20);
      if (((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) ||
         (lVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar18,0), lVar18 == 0)) break;
      uVar37 = uVar37 + 1;
      pdVar17 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar18,uVar34,0,0);
      lVar18 = *(long *)(pdVar38 + 0x24);
      if (lVar18 == 0) break;
    }
  }
  pdVar17 = (dword *)func_0x00f78af4();
  return pdVar17;
}



// ============================================================
// RVA: 0x15920b8 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowChapter
// ============================================================

/* WARNING: Possible PIC construction at 0x0159226c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015923d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x01592534) */
/* WARNING: Removing unreachable block (ram,0x015923d8) */
/* WARNING: Removing unreachable block (ram,0x01592270) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                  (dword *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  dword *pdVar22;
  dword *pdVar23;
  int iVar16;
  dword *pdVar24;
  dword *pdVar25;
  dword *pdVar26;
  dword *pdVar27;
  undefined8 uVar28;
  dword *pdVar29;
  ulong uVar30;
  long *extraout_x1;
  long *plVar31;
  dword *pdVar32;
  long lVar33;
  int *piVar34;
  uint uVar35;
  dword *pdVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 unaff_x25;
  code *pcVar39;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined1 *puVar42;
  undefined *puVar43;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  puVar12 = &stack0xffffffffffffffa0;
  pppppppuVar41 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb515f & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d28ee8);
    func_0x00f78a20(0x3d56d38);
    func_0x00f78a20(0x3d56d50);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d289a0);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d28ef0);
    func_0x00f78a20(0x3d62e48);
    func_0x00f78a20(0x3d62e50);
    func_0x00f78a20(0x3d62e58);
    func_0x00f78a20(0x3d27640);
    bRam0000000003eb515f = 1;
  }
  lVar17 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.<>c__DisplayClass35_0_TypeInfo*/ uRam0000000003d27640);
  /*Atlas.Contexts.FrontEndContextSingleplayerState.<>c__DisplayClass35_0$$.ctor*/ func_0x0154e8f4(lVar17,0);
  if (lVar17 == 0) {
LAB_015923f8:
    auVar44 = func_0x00f78af4();
    pdVar32 = auVar44._8_8_;
    param_1 = auVar44._0_8_;
    puVar11 = &stack0xffffffffffffff50;
    puStack_68 = &Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview;
    pppppppuVar40 = &pppppppuStack_70;
    lVar38 = 0x3d28f18;
    pdVar22 = (dword *)0x3d56d78;
    pppppppuStack_70 = pppppppuVar41;
    if ((bRam0000000003eb5152 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d28f08);
      func_0x00f78a20(0x3d56d60);
      func_0x00f78a20(0x3d56d78);
      func_0x00f78a20(0x3d28f18);
      bRam0000000003eb5152 = 1;
    }
    pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData_TypeInfo*/ uRam0000000003d28f18);
    /*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData$$.ctor*/ func_0x0156ac84(pdVar24,0);
    pdVar25 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28f08);
    pdVar23 = (dword *)0x0;
    pdVar29 = pdRam0000000003d56d78;
    /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$.ctor*/ func_0x0156a924(pdVar25,param_1);
    if (pdVar24 == (dword *)0x0) {
      puVar43 = &Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
      ;
      auVar44 = func_0x00f78af4();
      pdVar36 = auVar44._8_8_;
      pdVar26 = auVar44._0_8_;
    }
    else {
      unaff_x25 = 0x3d1feb8;
      lVar38 = 0x3d29bc0;
      pdVar22 = (dword *)0x3d56d60;
      *(dword **)(pdVar24 + 4) = pdVar25;
      *(dword **)(pdVar24 + 6) = pdVar32;
      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar36 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x98);
      pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar23,param_1,uRam0000000003d56d60,0);
      puVar43 = &UNK_01592534;
      puVar11 = &stack0xffffffffffffff50;
      pdVar26 = param_1;
      pdVar29 = pdVar24;
      pdVar32 = pdVar36;
      pdVar25 = pdVar23;
    }
  }
  else {
    *(dword **)(lVar17 + 0x10) = param_1;
    *(undefined8 *)(lVar17 + 0x20) = param_2;
    if (*(long *)(param_1 + 0x24) == 0) goto LAB_015923f8;
    uVar18 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(*(long *)(param_1 + 0x24),param_2,0);
    *(undefined8 *)(lVar17 + 0x18) = uVar18;
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((*(long *)(lVar17 + 0x18) == 0) || (lVar19 == 0)) goto LAB_015923f8;
    *(undefined8 *)(lVar19 + 0x10) = *(undefined8 *)(*(long *)(lVar17 + 0x18) + 0x18);
    if (*(long *)(param_1 + 0x24) == 0) goto LAB_015923f8;
    puVar20 = (undefined8 *)
              /*Atlas.Definitions.AtlasDefinitions$$GetIPDefinitionForChapter*/ func_0x014687d4(*(long *)(param_1 + 0x24),*(undefined8 *)(lVar17 + 0x20),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar20,0,0);
    lVar19 = *(long *)(param_1 + 0x2c);
    if (iVar15 != 0) {
      if ((puVar20 != (undefined8 *)0x0) && (lVar19 != 0)) {
        *(undefined8 *)(lVar19 + 0xc0) = puVar20[3];
        uVar21 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar19);
        uVar18 = 0x1592270;
        lVar38 = lVar19;
        goto code_r0x0159455c;
      }
      goto LAB_015923f8;
    }
    if (lVar19 == 0) goto LAB_015923f8;
    /*Atlas.FrontEnd.FrontEndScene$$SetOverrideGenericIP*/ func_0x01593158(lVar19);
    *(undefined1 *)(param_1 + 0x34) = 1;
    pdVar22 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.TransitionData_TypeInfo*/ uRam0000000003d28ef0);
    /*Atlas.UI.Screens.SingleplayerChapterScreen.TransitionData$$.ctor*/ func_0x0156a84c(pdVar22,0);
    if (pdVar22 == (dword *)0x0) goto LAB_015923f8;
    unaff_x28 = 0x3d56000;
    unaff_x26 = 0x3d289a0;
    lVar38 = 0x3d62000;
    unaff_x25 = 0x3d62000;
    unaff_x27 = 0x3d62000;
    *(long *)(pdVar22 + 4) = *(long *)(lVar17 + 0x20);
    pdVar22[6] = (dword)param_3;
    pdVar22[7] = (int)param_4;
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28ee8);
    /*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected$$.ctor*/ func_0x0156a53c(lVar19,param_1,uRam0000000003d56d50,0);
    *(long *)(pdVar22 + 8) = lVar19;
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
    /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar19,lVar17,uRam0000000003d62e48,0);
    *(long *)(pdVar22 + 0xc) = lVar19;
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
    /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar19,lVar17,uRam0000000003d62e50,0);
    *(long *)(pdVar22 + 0xe) = lVar19;
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
    /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar19,lVar17,uRam0000000003d62e58,0);
    *(long *)(pdVar22 + 10) = lVar19;
    *(long *)(pdVar22 + 0x10) = *(long *)(param_1 + 0x2c);
    if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar36 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xa8);
    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar23,param_1,uRam0000000003d56d38,0);
    puVar43 = &UNK_015923d8;
    puVar11 = &stack0xffffffffffffffa0;
    pdVar26 = param_1;
    pdVar29 = pdVar22;
    pdVar32 = pdVar36;
    pdVar24 = pdVar23;
    pdVar25 = (dword *)0x3d56000;
    pppppppuVar40 = pppppppuVar41;
  }
  *(dword **)(puVar11 + -0x30) = pdVar25;
  *(dword **)(puVar11 + -0x28) = pdVar24;
  *(dword **)(puVar11 + -0x20) = pdVar32;
  *(dword **)(puVar11 + -0x18) = param_1;
  *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar40;
  *(undefined **)(puVar11 + -8) = puVar43;
  pdVar24 = pdVar29;
  if (*(long *)(pdVar26 + 0x22) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar26 + 0x22),0,pdVar23,0);
    pdVar27 = *(dword **)(pdVar26 + 0x20);
    pdVar24 = pdVar23;
    param_1 = pdVar29;
    pdVar32 = pdVar36;
    if (pdVar27 != (dword *)0x0) {
      pdVar32 = (dword *)0x0;
      uVar18 = 0;
      *(long *)(puVar11 + -0x40) = lVar38;
      *(dword **)(puVar11 + -0x38) = pdVar22;
      *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
      *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
      *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      puVar42 = puVar11 + -0x10;
      pdVar22 = (dword *)0x0;
      pdVar24 = pdVar29;
      if ((bRam0000000003eb486f & 1) == 0) {
        func_0x00f78a20(0x3d53980);
        func_0x00f78a20(0x3d2fb90);
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb486f = 1;
      }
      *(undefined8 *)(puVar11 + -0x48) = 0;
      lVar17 = *(long *)(pdVar27 + 4);
      if (lVar17 != 0) {
        pdVar32 = (dword *)0x0;
        uVar18 = 0;
        puVar43 = &UNK_01470820;
        pdVar25 = pdVar36;
        pdVar24 = pdVar29;
code_r0x02f87f38:
        *(long *)(puVar11 + -0x90) = lVar38;
        *(undefined8 *)(puVar11 + -0x88) = 0x3eb4000;
        *(undefined8 *)(puVar11 + -0x80) = 0;
        *(dword **)(puVar11 + -0x78) = pdVar29;
        *(dword **)(puVar11 + -0x70) = pdVar27;
        *(dword **)(puVar11 + -0x68) = pdVar36;
        *(undefined1 **)(puVar11 + -0x60) = puVar42;
        *(undefined **)(puVar11 + -0x58) = puVar43;
        if ((bRam0000000003ebc64a & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64a = 1;
        }
        *(undefined8 *)(puVar11 + -0x130) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x128) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x120) = 0x3ebc000;
        *(dword **)(puVar11 + -0x118) = pdVar25;
        *(dword **)(puVar11 + -0x110) = pdVar24;
        *(undefined8 *)(puVar11 + -0x108) = uVar18;
        *(long *)(puVar11 + -0x100) = lVar17;
        *(dword **)(puVar11 + -0xf8) = pdVar32;
        *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x60;
        *(undefined **)(puVar11 + -0xe8) = &UNK_02f87f9c;
        if ((bRam0000000003ebc64e & 1) == 0) {
          func_0x00f78a20(0x3d3ddf0);
          func_0x00f78a20(0x3d3ddf8);
          bRam0000000003ebc64e = 1;
        }
        lVar19 = *(long *)(lVar17 + 0x78);
        if (lVar19 != 0) {
          iVar15 = *(int *)(lVar19 + 0x18);
          if (iVar15 < 1) {
            return (dword *)0x0;
          }
          iVar16 = 1;
          pdVar22 = (dword *)((long)&MACH_HEADER.magic + 1);
          do {
            if (*(uint *)(lVar19 + 0x18) <= iVar16 - 1U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)(iVar16 - 1U) * 0x20 + 0x20);
            if (lVar19 == 0) break;
            uVar30 = /*System.String$$Equals*/ func_0x029caa48(lVar19,pdVar25,5,0);
            if ((uVar30 & 1) != 0) {
              return pdVar22;
            }
            pdVar22 = (dword *)(ulong)(iVar16 < iVar15);
            if (iVar15 == iVar16) {
              return pdVar22;
            }
            lVar19 = *(long *)(lVar17 + 0x78);
            iVar16 = iVar16 + 1;
          } while (lVar19 != 0);
        }
        func_0x00f78af4();
        return (dword *)0x0;
      }
      auVar44 = func_0x00f78af4();
      pdVar25 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x60) = puVar42;
      *(undefined **)(puVar11 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
      lVar17 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar17 != 0) {
        puVar42 = *(undefined1 **)(puVar11 + -0x60);
        puVar43 = *(undefined **)(puVar11 + -0x58);
        goto code_r0x02f87f38;
      }
      auVar44 = func_0x00f78af4();
      uVar18 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
      *(undefined **)(puVar11 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
      lVar17 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar17 != 0) {
        pdVar32 = (dword *)0x0;
        *(undefined8 *)(puVar11 + -0x90) = 0;
        *(dword **)(puVar11 + -0x88) = pdVar29;
        *(dword **)(puVar11 + -0x80) = pdVar27;
        *(dword **)(puVar11 + -0x78) = pdVar36;
        *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0x70);
        *(undefined8 *)(puVar11 + -0x68) = *(undefined8 *)(puVar11 + -0x68);
        if ((bRam0000000003ebc64b & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar19 = *(long *)(lVar17 + 0x70);
        if (lVar19 != 0) {
          lVar38 = lVar19;
          if (*(uint *)(lVar19 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar38 = *(long *)(lVar17 + 0x70);
          }
          if (lVar38 != 0) {
            lVar19 = *(long *)(lVar19 + 0x10) + (long)(int)auVar44._8_4_ * 0x28;
            uVar37 = *(undefined8 *)(lVar19 + 0x28);
            uVar21 = *(undefined8 *)(lVar19 + 0x20);
            uVar2 = *(undefined4 *)(lVar19 + 0x42);
            *(undefined4 *)(puVar11 + -0xd8) = uVar2;
            uVar5 = *(undefined2 *)(lVar19 + 0x46);
            *(undefined2 *)(puVar11 + -0xd4) = uVar5;
            *(undefined8 *)(puVar11 + -200) = uVar37;
            *(undefined8 *)(puVar11 + -0xd0) = uVar21;
            *(undefined8 *)(puVar11 + -0xb8) = uVar37;
            *(undefined8 *)(puVar11 + -0xc0) = uVar21;
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(undefined8 *)(puVar11 + -0xa8) = 0;
            *(undefined2 *)(puVar11 + -0xa0) = 1;
            *(undefined4 *)(puVar11 + -0x9e) = uVar2;
            *(undefined2 *)(puVar11 + -0x9a) = uVar5;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar38,uVar18,puVar11 + -0xc0,uRam0000000003d3ddd0);
            pdVar22 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,uVar18);
            return pdVar22;
          }
        }
        auVar44 = func_0x00f78af4();
        pdVar25 = auVar44._8_8_;
        puVar13 = puVar11 + -0x110;
        *(undefined8 *)(puVar11 + -0x110) = 0;
        *(long *)(puVar11 + -0x108) = lVar19;
        *(long *)(puVar11 + -0x100) = lVar17;
        *(undefined8 *)(puVar11 + -0xf8) = uVar18;
        *(undefined1 **)(puVar11 + -0xf0) = puVar11 + -0x70;
        *(undefined **)(puVar11 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
        puVar11 = puVar11 + -0xf0;
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar17 = *(long *)(auVar44._0_8_ + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= auVar44._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
          if (lVar17 == 0) {
            pdVar22 = (dword *)0x0;
          }
          else {
            pdVar22 = *(dword **)(lVar17 + 0x40);
          }
          return pdVar22;
        }
        puVar43 = &Core_UI2_UIScreen__ForceExit;
        pdVar36 = (dword *)func_0x00f78af4();
        pdVar27 = (dword *)0x0;
        pdVar29 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar44 = func_0x00f78af4();
      pdVar25 = auVar44._8_8_;
      *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x70;
      *(undefined **)(puVar11 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
      lVar17 = *(long *)(auVar44._0_8_ + 0x10);
      auVar44._8_8_ = pdVar29;
      auVar44._0_8_ = lVar17;
      if (lVar17 != 0) {
        pdVar32 = (dword *)0x0;
        puVar6 = puVar11 + -0x70;
        puVar42 = *(undefined1 **)(puVar11 + -0x80);
        puVar43 = *(undefined **)(puVar11 + -0x78);
        pdVar29 = pdVar27;
        goto code_r0x02f877a8;
      }
      auVar44 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x80;
      *(undefined **)(puVar11 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar17 = *(long *)(auVar44._0_8_ + 0x10);
      auVar44._8_8_ = auVar44._8_8_;
      auVar44._0_8_ = lVar17;
      if (lVar17 != 0) {
        puVar7 = puVar11 + -0x80;
        puVar42 = *(undefined1 **)(puVar11 + -0x90);
        puVar43 = *(undefined **)(puVar11 + -0x88);
        pdVar25 = pdVar32;
        while( true ) {
          puVar6 = puVar7 + -0x30;
          *(dword **)(puVar7 + -0x30) = pdVar22;
          *(dword **)(puVar7 + -0x28) = pdVar29;
          *(dword **)(puVar7 + -0x20) = pdVar27;
          *(dword **)(puVar7 + -0x18) = pdVar36;
          *(undefined1 **)(puVar7 + -0x10) = puVar42;
          *(undefined **)(puVar7 + -8) = puVar43;
          puVar42 = puVar7 + -0x10;
          puVar43 = &UNK_02f883d8;
          pdVar32 = pdVar25;
          pdVar36 = pdVar24;
          pdVar29 = pdVar25;
          pdVar22 = auVar44._0_8_;
code_r0x02f877a8:
          pdVar27 = auVar44._0_8_;
          puVar13 = puVar6 + -0x60;
          *(dword **)(puVar6 + -0x30) = pdVar22;
          *(long *)(puVar6 + -0x28) = auVar44._8_8_;
          *(dword **)(puVar6 + -0x20) = pdVar29;
          *(dword **)(puVar6 + -0x18) = pdVar36;
          *(undefined1 **)(puVar6 + -0x10) = puVar42;
          *(undefined **)(puVar6 + -8) = puVar43;
          puVar11 = puVar6 + -0x10;
          pdVar29 = pdVar27;
          if ((bRam0000000003ebc64d & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            pdVar29 = (dword *)func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64d = 1;
          }
          uVar35 = (uint)pdVar25;
          if (((int)uVar35 < 0) || ((int)*(long *)(pdVar27 + 0x14) <= (int)uVar35)) {
            return pdVar29;
          }
          lVar17 = *(long *)(pdVar27 + 0x1c);
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= uVar35) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar25 & 0xffffffff) * 0x28;
          pdVar22 = *(dword **)(lVar17 + 0x20);
          pdVar36 = *(dword **)(lVar17 + 0x28);
          *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
          *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
          if (pdVar36 == (dword *)0x0) {
            lVar17 = *(long *)(pdVar27 + 0x1c);
            if (lVar17 != 0) {
              *(dword **)(puVar6 + -0x58) = pdVar22;
              *(undefined8 *)(puVar6 + -0x50) = 0;
              *(undefined8 *)(puVar6 + -0x48) = 0;
              *(undefined8 *)(puVar6 + -0x40) = 0;
              *(undefined2 *)(puVar6 + -0x38) = 0;
              *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
              *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
              pdVar22 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar25,puVar6 + -0x58,uRam0000000003d3ddd0)
              ;
              return pdVar22;
            }
            break;
          }
          puVar43 = &UNK_02f87848;
          pdVar29 = pdVar36;
code_r0x02f882d8:
          *(dword **)(puVar13 + -0x20) = pdVar27;
          *(dword **)(puVar13 + -0x18) = pdVar25;
          *(undefined1 **)(puVar13 + -0x10) = puVar11;
          *(undefined **)(puVar13 + -8) = puVar43;
          (**(code **)(*(long *)pdVar36 + 0x218))(pdVar36,*(undefined8 *)(*(long *)pdVar36 + 0x220))
          ;
          if (*(long *)(pdVar36 + 10) != 0) {
            /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar36 + 10),0);
            pdVar36[0x13] = 4;
            /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar36,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar22 = (dword *)(**(code **)(*(long *)pdVar36 + 0x228))
                                         (pdVar36,*(undefined8 *)(*(long *)pdVar36 + 0x230));
            return pdVar22;
          }
          func_0x00f78af4();
          puVar7 = puVar13 + -0x40;
          *(dword **)(puVar13 + -0x40) = pdVar27;
          *(dword **)(puVar13 + -0x38) = pdVar36;
          *(undefined1 **)(puVar13 + -0x30) = puVar13 + -0x10;
          *(undefined **)(puVar13 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
          puVar42 = puVar13 + -0x30;
          if (extraout_x1 != (long *)0x0) {
            lVar17 = extraout_x1[5];
            /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
            uVar18 = (**(code **)(*extraout_x1 + 0x238))
                               (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
            extraout_x1[5] = 0;
            extraout_x1[6] = 0;
            extraout_x1[9] = _UNK_037235c0;
            extraout_x1[7] = 0;
            extraout_x1[8] = 0;
            /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar18,lVar17);
            pdVar22 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
            extraout_x1[0xb] = 0;
            return pdVar22;
          }
          puVar43 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
          auVar44 = func_0x00f78af4();
          pdVar25 = pdVar32;
        }
        lVar17 = func_0x00f78af4();
        *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
        *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
        *(dword **)(puVar6 + -0x90) = pdVar22;
        *(undefined8 *)(puVar6 + -0x88) = 0;
        *(dword **)(puVar6 + -0x80) = pdVar27;
        *(dword **)(puVar6 + -0x78) = pdVar25;
        *(undefined1 **)(puVar6 + -0x70) = puVar11;
        *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
        if ((bRam0000000003ebc647 & 1) == 0) {
          func_0x00f78a20(0x3d255c0);
          bRam0000000003ebc647 = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar18 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar18,0);
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
        pdVar22 = (dword *)(*pcRam0000000003ec05a0)(uVar18);
        return pdVar22;
      }
      auVar44 = func_0x00f78af4();
      *(undefined1 **)(puVar11 + -0xa0) = puVar11 + -0x90;
      *(undefined **)(puVar11 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar17 = *(long *)(auVar44._0_8_ + 0x10);
      if (lVar17 == 0) {
        auVar44 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0xa0;
        *(undefined **)(puVar11 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
        lVar17 = *(long *)(auVar44._0_8_ + 0x10);
        auVar45._8_8_ = auVar44._8_8_;
        auVar45._0_8_ = lVar17;
        if (lVar17 != 0) {
          pdVar24 = (dword *)0x0;
          puVar8 = puVar11 + -0xa0;
          puVar42 = *(undefined1 **)(puVar11 + -0xb0);
          puVar43 = *(undefined **)(puVar11 + -0xa8);
          goto code_r0x02f884dc;
        }
        auVar44 = func_0x00f78af4();
        *(undefined1 **)(puVar11 + -0xc0) = puVar11 + -0xb0;
        *(undefined **)(puVar11 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
        lVar17 = *(long *)(auVar44._0_8_ + 0x10);
        auVar46._8_8_ = auVar44._8_8_;
        auVar46._0_8_ = lVar17;
        if (lVar17 == 0) {
          auVar44 = func_0x00f78af4();
          *(undefined1 **)(puVar11 + -0xd0) = puVar11 + -0xc0;
          *(undefined **)(puVar11 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar17 = *(long *)(auVar44._0_8_ + 0x10);
          auVar47._8_8_ = auVar44._8_8_;
          auVar47._0_8_ = lVar17;
          if (lVar17 == 0) {
            pdVar22 = (dword *)func_0x00f78af4();
            *(undefined8 *)(puVar11 + -0x100) = 0;
            *(dword **)(puVar11 + -0xf8) = pdVar29;
            *(dword **)(puVar11 + -0xf0) = pdVar27;
            *(dword **)(puVar11 + -0xe8) = pdVar36;
            *(undefined1 **)(puVar11 + -0xe0) = puVar11 + -0xd0;
            *(undefined **)(puVar11 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar18 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar18,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar22 + 0xc) = uVar18;
            return pdVar22;
          }
          puVar10 = puVar11 + -0xc0;
          puVar42 = *(undefined1 **)(puVar11 + -0xd0);
          puVar43 = *(undefined **)(puVar11 + -200);
          goto code_r0x02f88674;
        }
        puVar9 = puVar11 + -0xb0;
        puVar42 = *(undefined1 **)(puVar11 + -0xc0);
        puVar43 = *(undefined **)(puVar11 + -0xb8);
        pdVar24 = pdVar32;
        pdVar22 = pdVar29;
      }
      else {
        pdVar24 = (dword *)0x0;
        puVar8 = puVar11 + -0xc0;
        *(undefined8 *)(puVar11 + -0xc0) = 0;
        *(dword **)(puVar11 + -0xb8) = pdVar29;
        *(dword **)(puVar11 + -0xb0) = pdVar27;
        *(dword **)(puVar11 + -0xa8) = pdVar36;
        *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xa0);
        *(undefined8 *)(puVar11 + -0x98) = *(undefined8 *)(puVar11 + -0x98);
        puVar42 = puVar11 + -0xa0;
        pdVar29 = (dword *)0x3ebc000;
        if ((bRam0000000003ebc64f & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar35 = auVar44._8_4_;
        if (((int)uVar35 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar35)) {
          return (dword *)0x0;
        }
        lVar17 = *(long *)(lVar17 + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar35) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar19 = *(long *)(lVar17 + 0x10) + ((ulong)auVar44._8_8_ & 0xffffffff) * 0x28;
          lVar17 = *(long *)(lVar19 + 0x28);
          cVar3 = *(char *)(lVar19 + 0x40);
          iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar19 + 0x30),0);
          if (iVar15 == 0 || cVar3 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar43 = &Core_UI2_UIManager__GetLayerState;
        auVar45 = func_0x00f78af4();
        pdVar27 = (dword *)0x0;
        pdVar36 = auVar44._8_8_;
code_r0x02f884dc:
        puVar9 = puVar8 + -0x30;
        *(undefined8 *)(puVar8 + -0x30) = 0;
        *(dword **)(puVar8 + -0x28) = pdVar29;
        *(dword **)(puVar8 + -0x20) = pdVar27;
        *(dword **)(puVar8 + -0x18) = pdVar36;
        *(undefined1 **)(puVar8 + -0x10) = puVar42;
        *(undefined **)(puVar8 + -8) = puVar43;
        puVar42 = puVar8 + -0x10;
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar17 = *(long *)(auVar45._0_8_ + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= auVar45._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
          if (lVar17 == 0) {
            pdVar22 = &MACH_HEADER.cputype;
          }
          else {
            pdVar22 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
          }
          return pdVar22;
        }
        puVar43 = &Core_UI2_UIManager__EnableInput;
        auVar46 = func_0x00f78af4();
        pdVar27 = (dword *)0x0;
        pdVar36 = auVar45._8_8_;
        pdVar22 = (dword *)0x3ebc000;
      }
      pdVar25 = auVar46._8_8_;
      pdVar29 = auVar46._0_8_;
      puVar10 = puVar9 + -0x40;
      *(long *)(puVar9 + -0x40) = lVar38;
      *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(dword **)(puVar9 + -0x28) = pdVar22;
      *(dword **)(puVar9 + -0x20) = pdVar27;
      *(dword **)(puVar9 + -0x18) = pdVar36;
      *(undefined1 **)(puVar9 + -0x10) = puVar42;
      *(undefined **)(puVar9 + -8) = puVar43;
      puVar42 = puVar9 + -0x10;
      pdVar22 = (dword *)0x3ebc000;
      pdVar32 = pdVar24;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar29 + 0x1a) != 0) {
        pdVar32 = (dword *)(ulong)((uint)pdVar24 ^ 1);
        pdVar23 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar29 + 0x1a),pdVar25,pdVar32,0);
        lVar17 = *(long *)(pdVar29 + 0x1c);
        pdVar22 = (dword *)0x0;
        if (lVar17 != 0) {
          uVar35 = auVar46._8_4_;
          if (*(uint *)(lVar17 + 0x18) <= uVar35) {
            pdVar23 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar35 * 0x28 + 0x28) == 0) ||
             (pdVar22 = *(dword **)(pdVar29 + 0xc), pdVar22 == (dword *)0x0)) {
            return pdVar23;
          }
          lVar17 = *(long *)(pdVar29 + 0x1c);
          pdVar29 = (dword *)0x0;
          if (lVar17 != 0) {
            if (*(uint *)(lVar17 + 0x18) <= uVar35) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar31 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar35 * 0x28 + 0x28);
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
            *(dword **)(puVar9 + -0x68) = pdVar22;
            lVar17 = *(long *)(pdVar22 + 0x1a);
            if (lVar17 == 0) {
              puVar11 = puVar9 + -0x68;
              lVar19 = 1;
            }
            else {
              lVar19 = *(long *)(lVar17 + 0x18);
              if (lVar19 == 0) {
                return pdVar22;
              }
              puVar11 = (undefined1 *)(lVar17 + 0x20);
            }
            lVar17 = 0;
            do {
              lVar38 = *(long *)(puVar11 + lVar17 * 8);
              pcVar39 = *(code **)(lVar38 + 0x10);
              plVar1 = *(long **)(lVar38 + 0x20);
              lVar38 = *(long *)(lVar38 + 0x28);
              if (*(short *)(lVar38 + 0x48) == -1) {
                func_0x00f78ad8(lVar38);
              }
              iVar15 = func_0x00f78a4c(lVar38);
              bVar14 = *(char *)(lVar38 + 0x4a) == '\x03';
              if (iVar15 == 0) {
                if (bVar14) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    pdVar32 = (dword *)(*pcVar39)(plVar31,pdVar25,pdVar24,lVar38);
                  }
                  else {
                    if (((*(short *)(lVar38 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar22 + 6) == 0))
                    goto code_r0x01e71aac;
                    iVar15 = func_0x00f78a44(lVar38);
                    iVar16 = func_0x00f78ec0(lVar38);
                    if (iVar15 == 0) {
                      uVar4 = *(ushort *)(lVar38 + 0x48);
                      if (iVar16 == 0) {
                        lVar38 = *plVar1 + (ulong)uVar4 * 0x10;
                        pdVar32 = (dword *)(**(code **)(lVar38 + 0x138))
                                                     (plVar1,plVar31,pdVar25,pdVar24,
                                                      *(undefined8 *)(lVar38 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar38 = func_0x00f78a48(lVar38);
                      lVar33 = *plVar1;
                      uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
                      if (uVar30 != 0) {
                        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar34 + -2) == lVar38) {
                            puVar20 = (undefined8 *)
                                      (lVar33 + (long)(int)(*piVar34 + (uint)uVar4) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar34 = piVar34 + 4;
                          uVar30 = uVar30 - 1;
                        } while (uVar30 != 0);
                      }
                      puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar38,(ulong)uVar4);
code_r0x01e71d74:
                      pcVar39 = (code *)*puVar20;
                      puVar20 = (undefined8 *)puVar20[1];
                    }
                    else {
                      if (iVar16 == 0) {
                        uVar18 = *(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar38 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar33 = *plVar1;
                        uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
                        if (uVar30 != 0) {
                          piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar34 + -2) == *(long *)(lVar38 + 0x18)) {
                              lVar33 = lVar33 + (long)(int)(*piVar34 +
                                                           (uint)*(ushort *)(lVar38 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar34 = piVar34 + 4;
                            uVar30 = uVar30 - 1;
                          } while (uVar30 != 0);
                        }
                        lVar33 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar18 = *(undefined8 *)(lVar33 + 8);
                      }
                      puVar20 = (undefined8 *)func_0x00f78acc(uVar18,lVar38);
                      pcVar39 = (code *)*puVar20;
                    }
                    pdVar32 = (dword *)(*pcVar39)(plVar1,plVar31,pdVar25,pdVar24,puVar20);
                  }
                }
                else {
                  if ((*(short *)(lVar38 + 0x48) == -1) || (*(long *)(pdVar22 + 6) == 0))
                  goto code_r0x01e71bbc;
                  iVar15 = func_0x00f78a44(lVar38);
                  iVar16 = func_0x00f78ec0(lVar38);
                  if (iVar15 == 0) {
                    uVar4 = *(ushort *)(lVar38 + 0x48);
                    if (iVar16 == 0) {
                      lVar38 = *plVar31 + (ulong)uVar4 * 0x10;
                      pdVar32 = (dword *)(**(code **)(lVar38 + 0x138))
                                                   (plVar31,pdVar25,pdVar24,
                                                    *(undefined8 *)(lVar38 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar38 = func_0x00f78a48(lVar38);
                    lVar33 = *plVar31;
                    uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
                    if (uVar30 != 0) {
                      piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar34 + -2) == lVar38) {
                          puVar20 = (undefined8 *)
                                    (lVar33 + (long)(int)(*piVar34 + (uint)uVar4) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar34 = piVar34 + 4;
                        uVar30 = uVar30 - 1;
                      } while (uVar30 != 0);
                    }
                    puVar20 = (undefined8 *)func_0x00fac1f0(plVar31,lVar38,(ulong)uVar4);
code_r0x01e71d00:
                    pcVar39 = (code *)*puVar20;
                    puVar20 = (undefined8 *)puVar20[1];
                  }
                  else {
                    if (iVar16 == 0) {
                      uVar18 = *(undefined8 *)
                                (*plVar31 + (ulong)*(ushort *)(lVar38 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar33 = *plVar31;
                      uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
                      if (uVar30 != 0) {
                        piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar34 + -2) == *(long *)(lVar38 + 0x18)) {
                            lVar33 = lVar33 + (long)(int)(*piVar34 +
                                                         (uint)*(ushort *)(lVar38 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar34 = piVar34 + 4;
                          uVar30 = uVar30 - 1;
                        } while (uVar30 != 0);
                      }
                      lVar33 = func_0x00fac1f0(plVar31);
code_r0x01e71cd8:
                      uVar18 = *(undefined8 *)(lVar33 + 8);
                    }
                    puVar20 = (undefined8 *)func_0x00f78acc(uVar18,lVar38);
                    pcVar39 = (code *)*puVar20;
                  }
                  pdVar32 = (dword *)(*pcVar39)(plVar31,pdVar25,pdVar24,puVar20);
                }
              }
              else {
                if (bVar14) goto code_r0x01e71bbc;
code_r0x01e71aac:
                pdVar32 = (dword *)(*pcVar39)(plVar1,plVar31,pdVar25,pdVar24,lVar38);
              }
code_r0x01e71bd0:
              lVar17 = lVar17 + 1;
              if (lVar17 == lVar19) {
                return pdVar32;
              }
            } while( true );
          }
        }
      }
      puVar43 = &Core_UI2_UIManager__SetScreenVisible;
      auVar47 = func_0x00f78af4();
      pdVar36 = pdVar24;
      pdVar27 = pdVar25;
code_r0x02f88674:
      pdVar24 = auVar47._0_8_;
      *(dword **)(puVar10 + -0x30) = pdVar22;
      *(dword **)(puVar10 + -0x28) = pdVar29;
      *(dword **)(puVar10 + -0x20) = pdVar27;
      *(dword **)(puVar10 + -0x18) = pdVar36;
      *(undefined1 **)(puVar10 + -0x10) = puVar42;
      *(undefined **)(puVar10 + -8) = puVar43;
      pdVar22 = pdVar24;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar22 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar17 = *(long *)(pdVar24 + 0x1c);
      if (lVar17 != 0) {
        uVar35 = auVar47._8_4_;
        if (*(uint *)(lVar17 + 0x18) <= uVar35) {
          pdVar22 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar35 * 0x28 + 0x28) == 0) {
          return pdVar22;
        }
        lVar17 = *(long *)(pdVar24 + 0x1c);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar35) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar35 * 0x28 + 0x28);
          if ((lVar17 != 0) && (plVar31 = *(long **)(lVar17 + 0x28), plVar31 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar22 = (dword *)(**(code **)(*plVar31 + 0x178))
                                         (plVar31,pdVar32,*(undefined8 *)(*plVar31 + 0x180));
            return pdVar22;
          }
        }
      }
      auVar44 = func_0x00f78af4();
      uVar18 = auVar44._0_8_;
      *(long *)(puVar10 + -0x50) = auVar47._8_8_;
      *(dword **)(puVar10 + -0x48) = pdVar32;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x58) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      pdVar22 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar18,auVar44._8_8_,puVar10 + -0x70);
      if ((int)pdVar22 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar18,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
        *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
        pdVar22 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar18,puVar10 + -0x90,1);
      }
      return pdVar22;
    }
  }
  auVar44 = func_0x00f78af4();
  uVar18 = auVar44._0_8_;
  *(long *)(puVar11 + -0x70) = lVar38;
  *(dword **)(puVar11 + -0x68) = pdVar22;
  *(dword **)(puVar11 + -0x60) = pdVar25;
  *(dword **)(puVar11 + -0x58) = pdVar26;
  *(dword **)(puVar11 + -0x50) = pdVar32;
  *(dword **)(puVar11 + -0x48) = param_1;
  *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
  *(undefined **)(puVar11 + -0x38) = &Atlas_Contexts_FrontEndContextSingleplayerState__MapSelected;
  puVar20 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5155 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5155 = 1;
  }
  lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar18,uRam0000000003d40628);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
    *(long *)(*(long *)(lVar17 + 0x18) + 0x18) = auVar44._8_8_;
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar18,uRam0000000003d40628);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
      *(dword **)(*(long *)(lVar17 + 0x18) + 0x20) = pdVar24;
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar18,uRam0000000003d40628);
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
        *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x10) = 4;
        lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar18,uRam0000000003d40628);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar22 = (dword *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar24,0);
        auVar44 = ZEXT816(0x3d21000) << 0x40;
        if (lVar17 != 0) {
          *(dword **)(lVar17 + 0x28) = pdVar22;
          return pdVar22;
        }
      }
    }
  }
  auVar45 = func_0x00f78af4();
  uVar18 = auVar45._8_8_;
  lVar17 = auVar45._0_8_;
  *(undefined8 *)(puVar11 + -0xa0) = 0x3d40628;
  *(long *)(puVar11 + -0x98) = auVar44._8_8_;
  *(long *)(puVar11 + -0x90) = auVar44._0_8_;
  *(dword **)(puVar11 + -0x88) = pdVar24;
  *(undefined1 **)(puVar11 + -0x80) = puVar11 + -0x40;
  *(undefined **)(puVar11 + -0x78) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__DifficultySelected;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5158 & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5158 = 1;
  }
  if ((*(long *)(lVar17 + 0x90) != 0) &&
     (lVar19 = *(long *)(*(long *)(lVar17 + 0x90) + 0x10), lVar19 != 0)) {
    uVar21 = 0x3d40000;
    uVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar19,uVar18,uRam0000000003d57278);
    pdVar22 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar17,uRam0000000003d40628);
    if ((pdVar22 != (dword *)0x0) && (*(long *)(pdVar22 + 6) != 0)) {
      *(undefined8 *)(*(long *)(pdVar22 + 6) + 0x70) = uVar18;
      return pdVar22;
    }
  }
  auVar44 = func_0x00f78af4();
  uVar37 = auVar44._8_8_;
  lVar19 = auVar44._0_8_;
  *(undefined8 *)(puVar11 + -0xf0) = unaff_x26;
  *(undefined8 *)(puVar11 + -0xe8) = unaff_x25;
  *(long *)(puVar11 + -0xe0) = lVar38;
  *(undefined8 *)(puVar11 + -0xd8) = 0x3eb5000;
  *(undefined8 *)(puVar11 + -0xd0) = 0x3d40628;
  *(undefined8 *)(puVar11 + -200) = uVar21;
  *(undefined8 *)(puVar11 + -0xc0) = uVar18;
  *(long *)(puVar11 + -0xb8) = lVar17;
  *(undefined1 **)(puVar11 + -0xb0) = puVar11 + -0x80;
  *(undefined **)(puVar11 + -0xa8) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__ArcadeModeSelected;
  lVar17 = 0x3eb5000;
  unaff_x25 = 0x3d40628;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  pdVar22 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40628);
  uVar18 = 0x3d40628;
  if ((pdVar22 != (dword *)0x0) && (*(long *)(pdVar22 + 6) != 0)) {
    *(int *)(*(long *)(pdVar22 + 6) + 0x10) = auVar44._8_4_;
    if (auVar44._8_4_ == 4) {
      return pdVar22;
    }
    lVar33 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40628);
    uVar18 = 0x3d40628;
    if ((lVar33 != 0) && (*(long *)(lVar33 + 0x18) != 0)) {
      uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920
                               ,0);
      if (*(long *)(lVar19 + 0x90) != 0) {
        lVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar19 + 0x90),uVar37,0);
        puVar20 = *(undefined8 **)(lVar19 + 0x90);
        lVar33 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40628);
        if ((lVar33 != 0) && (*(long *)(lVar33 + 0x18) != 0)) {
          lVar38 = *(long *)(*(long *)(lVar33 + 0x18) + 0x20);
          uVar21 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar28 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar38,0);
          unaff_x26 = 0x3d21270;
          if (puVar20 != (undefined8 *)0x0) {
            puVar20 = (undefined8 *)/*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(puVar20,uVar28,uVar37,0);
            if ((int)uVar18 == 0) {
              unaff_x26 = uVar21;
              if ((lVar17 != 0) && (puVar20 != (undefined8 *)0x0)) {
                uVar37 = *(undefined8 *)(lVar17 + 0x50);
                puVar20 = puVar20 + 6;
                *(undefined8 *)(puVar11 + -0xf8) = *puVar20;
                iVar15 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar11 + -0xf8,0);
                if (iVar15 != 0) goto code_r0x015928d0;
                goto code_r0x015928d4;
              }
            }
            else if ((lVar17 != 0) && (unaff_x26 = uVar21, puVar20 != (undefined8 *)0x0)) {
              uVar37 = *(undefined8 *)(lVar17 + 0x58);
              puVar20 = puVar20 + 7;
              *(undefined8 *)(puVar11 + -0xf8) = *puVar20;
              uVar30 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(puVar11 + -0xf8,0);
              if ((uVar30 & 1) != 0) {
code_r0x015928d0:
                uVar37 = *puVar20;
              }
code_r0x015928d4:
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              pdVar22 = (dword *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar37,**(undefined8 **)
                                                          (/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
              if ((int)pdVar22 == 0) {
                return pdVar22;
              }
              unaff_x26 = uVar21;
              if ((*(long *)(lVar19 + 0x90) != 0) &&
                 (lVar33 = *(long *)(*(long *)(lVar19 + 0x90) + 0x10), lVar33 != 0)) {
                uVar37 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar33,uVar37,uRam0000000003d57278);
                pdVar22 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40628);
                if ((pdVar22 != (dword *)0x0) && (*(long *)(pdVar22 + 6) != 0)) {
                  *(undefined8 *)(*(long *)(pdVar22 + 6) + 0x70) = uVar37;
                  return pdVar22;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar33 = func_0x00f78af4();
  *(undefined8 *)(puVar11 + -0x130) = uVar18;
  *(long *)(puVar11 + -0x128) = lVar17;
  *(undefined8 *)(puVar11 + -0x120) = uVar37;
  *(long *)(puVar11 + -0x118) = lVar19;
  *(undefined1 **)(puVar11 + -0x110) = puVar11 + -0xb0;
  *(undefined **)(puVar11 + -0x108) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__EnterLoadOutState;
  uVar21 = 0x3d40628;
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar33,uRam0000000003d40628);
  if (lVar17 != 0) {
    uVar18 = *(undefined8 *)(lVar17 + 0x18);
    uVar21 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
    pdVar22 = (dword *)Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor
                                 (uVar21,uVar18,1,0);
    uVar18 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
    pdVar32 = *(dword **)(lVar33 + 0x78);
    if (pdVar32 == (dword *)0x0) {
      return pdVar22;
    }
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar31 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
    *(undefined8 *)(puVar11 + -0x160) = unaff_x28;
    *(undefined8 *)(puVar11 + -0x158) = unaff_x27;
    *(undefined8 *)(puVar11 + -0x150) = unaff_x26;
    *(undefined8 *)(puVar11 + -0x148) = 0x3d40628;
    *(long *)(puVar11 + -0x140) = lVar38;
    *(undefined8 **)(puVar11 + -0x138) = puVar20;
    *(undefined8 *)(puVar11 + -0x130) = *(undefined8 *)(puVar11 + -0x130);
    *(undefined8 *)(puVar11 + -0x128) = *(undefined8 *)(puVar11 + -0x128);
    *(undefined8 *)(puVar11 + -0x120) = *(undefined8 *)(puVar11 + -0x120);
    *(undefined8 *)(puVar11 + -0x118) = *(undefined8 *)(puVar11 + -0x118);
    *(undefined8 *)(puVar11 + -0x110) = *(undefined8 *)(puVar11 + -0x110);
    *(undefined8 *)(puVar11 + -0x108) = *(undefined8 *)(puVar11 + -0x108);
    *(dword **)(puVar11 + -0x168) = pdVar32;
    lVar17 = *(long *)(pdVar32 + 0x1a);
    if (lVar17 == 0) {
      puVar11 = puVar11 + -0x168;
      lVar19 = 1;
    }
    else {
      lVar19 = *(long *)(lVar17 + 0x18);
      if (lVar19 == 0) {
        return pdVar32;
      }
      puVar11 = (undefined1 *)(lVar17 + 0x20);
    }
    lVar17 = 0;
    do {
      lVar38 = *(long *)(puVar11 + lVar17 * 8);
      pcVar39 = *(code **)(lVar38 + 0x10);
      plVar1 = *(long **)(lVar38 + 0x20);
      lVar38 = *(long *)(lVar38 + 0x28);
      if (*(short *)(lVar38 + 0x48) == -1) {
        func_0x00f78ad8(lVar38);
      }
      iVar15 = func_0x00f78a4c(lVar38);
      bVar14 = *(char *)(lVar38 + 0x4a) == '\x03';
      if (iVar15 == 0) {
        if (bVar14) {
          if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
            pdVar22 = (dword *)(*pcVar39)(plVar31,0,uVar21,lVar38);
          }
          else {
            if (((*(short *)(lVar38 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e7162c;
            iVar15 = func_0x00f78a44(lVar38);
            iVar16 = func_0x00f78ec0(lVar38);
            if (iVar15 == 0) {
              uVar4 = *(ushort *)(lVar38 + 0x48);
              if (iVar16 == 0) {
                lVar38 = *plVar1 + (ulong)uVar4 * 0x10;
                pdVar22 = (dword *)(**(code **)(lVar38 + 0x138))
                                             (plVar1,plVar31,0,uVar21,
                                              *(undefined8 *)(lVar38 + 0x140));
                goto code_r0x01e71750;
              }
              lVar38 = func_0x00f78a48(lVar38);
              lVar33 = *plVar1;
              uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
              if (uVar30 != 0) {
                piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar34 + -2) == lVar38) {
                    puVar20 = (undefined8 *)
                              (lVar33 + (long)(int)(*piVar34 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01e718f4;
                  }
                  piVar34 = piVar34 + 4;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
              puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar38,(ulong)uVar4);
code_r0x01e718f4:
              pcVar39 = (code *)*puVar20;
              puVar20 = (undefined8 *)puVar20[1];
            }
            else {
              if (iVar16 == 0) {
                uVar18 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar38 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar33 = *plVar1;
                uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
                if (uVar30 != 0) {
                  piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar34 + -2) == *(long *)(lVar38 + 0x18)) {
                      lVar33 = lVar33 + (long)(int)(*piVar34 + (uint)*(ushort *)(lVar38 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e718cc;
                    }
                    piVar34 = piVar34 + 4;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                }
                lVar33 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                uVar18 = *(undefined8 *)(lVar33 + 8);
              }
              puVar20 = (undefined8 *)func_0x00f78acc(uVar18,lVar38);
              pcVar39 = (code *)*puVar20;
            }
            pdVar22 = (dword *)(*pcVar39)(plVar1,plVar31,0,uVar21,puVar20);
          }
        }
        else {
          if ((*(short *)(lVar38 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
          goto code_r0x01e7173c;
          iVar15 = func_0x00f78a44(lVar38);
          iVar16 = func_0x00f78ec0(lVar38);
          if (iVar15 == 0) {
            uVar4 = *(ushort *)(lVar38 + 0x48);
            if (iVar16 == 0) {
              lVar38 = *plVar31 + (ulong)uVar4 * 0x10;
              pdVar22 = (dword *)(**(code **)(lVar38 + 0x138))
                                           (plVar31,0,uVar21,*(undefined8 *)(lVar38 + 0x140));
              goto code_r0x01e71750;
            }
            lVar38 = func_0x00f78a48(lVar38);
            lVar33 = *plVar31;
            uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
            if (uVar30 != 0) {
              piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
              do {
                if (*(long *)(piVar34 + -2) == lVar38) {
                  puVar20 = (undefined8 *)
                            (lVar33 + (long)(int)(*piVar34 + (uint)uVar4) * 0x10 + 0x138);
                  goto code_r0x01e71880;
                }
                piVar34 = piVar34 + 4;
                uVar30 = uVar30 - 1;
              } while (uVar30 != 0);
            }
            puVar20 = (undefined8 *)func_0x00fac1f0(plVar31,lVar38,(ulong)uVar4);
code_r0x01e71880:
            pcVar39 = (code *)*puVar20;
            puVar20 = (undefined8 *)puVar20[1];
          }
          else {
            if (iVar16 == 0) {
              uVar18 = *(undefined8 *)(*plVar31 + (ulong)*(ushort *)(lVar38 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar33 = *plVar31;
              uVar30 = (ulong)*(ushort *)(lVar33 + 0x12a);
              if (uVar30 != 0) {
                piVar34 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar34 + -2) == *(long *)(lVar38 + 0x18)) {
                    lVar33 = lVar33 + (long)(int)(*piVar34 + (uint)*(ushort *)(lVar38 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e71858;
                  }
                  piVar34 = piVar34 + 4;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
              lVar33 = func_0x00fac1f0(plVar31);
code_r0x01e71858:
              uVar18 = *(undefined8 *)(lVar33 + 8);
            }
            puVar20 = (undefined8 *)func_0x00f78acc(uVar18,lVar38);
            pcVar39 = (code *)*puVar20;
          }
          pdVar22 = (dword *)(*pcVar39)(plVar31,0,uVar21,puVar20);
        }
      }
      else {
        if (bVar14) goto code_r0x01e7173c;
code_r0x01e7162c:
        pdVar22 = (dword *)(*pcVar39)(plVar1,plVar31,0,uVar21,lVar38);
      }
code_r0x01e71750:
      lVar17 = lVar17 + 1;
      if (lVar17 == lVar19) {
        return pdVar22;
      }
    } while( true );
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)(puVar11 + -0x160) = uVar18;
  *(undefined8 *)(puVar11 + -0x158) = 0x3d40628;
  *(undefined8 *)(puVar11 + -0x150) = 0x3eb5000;
  *(long *)(puVar11 + -0x148) = lVar33;
  *(undefined1 **)(puVar11 + -0x140) = puVar11 + -0x110;
  *(undefined **)(puVar11 + -0x138) =
       &Atlas_Contexts_FrontEndContextSingleplayerState__OverviewBackPressed;
  uVar37 = 0x3eb5000;
  if ((bRam0000000003eb515b & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515b = 1;
  }
  lVar19 = *(long *)(lVar17 + 0xb0);
  if (lVar19 == 0) {
    puVar43 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
    lVar19 = func_0x00f78af4();
  }
  else {
    uVar37 = 0x3d19000;
    uVar21 = 0x3d25000;
    puVar43 = &UNK_01592b20;
  }
  *(undefined8 *)(puVar11 + -400) = uVar18;
  *(undefined8 *)(puVar11 + -0x188) = uVar21;
  *(undefined8 *)(puVar11 + -0x180) = uVar37;
  *(long *)(puVar11 + -0x178) = lVar17;
  *(undefined1 **)(puVar11 + -0x170) = puVar11 + -0x140;
  *(undefined **)(puVar11 + -0x168) = puVar43;
  if ((bRam0000000003eb516d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb516d = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar19 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar21 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar19);
  pppppppuVar41 = *(undefined8 ********)(puVar11 + -0x170);
  uVar18 = *(undefined8 *)(puVar11 + -0x168);
  param_3 = *(undefined8 *)(puVar11 + -0x180);
  param_1 = *(dword **)(puVar11 + -0x178);
  puVar12 = puVar11 + -0x160;
  lVar17 = *(long *)(puVar11 + -400);
  param_4 = *(undefined8 *)(puVar11 + -0x188);
code_r0x0159455c:
  *(long *)(puVar12 + -0x30) = lVar17;
  *(undefined8 *)(puVar12 + -0x28) = param_4;
  *(undefined8 *)(puVar12 + -0x20) = param_3;
  *(dword **)(puVar12 + -0x18) = param_1;
  *(undefined8 ********)(puVar12 + -0x10) = pppppppuVar41;
  *(undefined8 *)(puVar12 + -8) = uVar18;
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar18 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar19,uVar21);
  uVar21 = *(undefined8 *)(lVar19 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar22 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar21,0);
  if ((int)pdVar22 == 0) {
    return pdVar22;
  }
  plVar31 = *(long **)(lVar19 + 200);
  if (plVar31 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar22 = (dword *)(**(code **)(*plVar31 + 0x198))
                                 (plVar31,uVar18,*(undefined8 *)(*plVar31 + 0x1a0));
    return pdVar22;
  }
  auVar44 = func_0x00f78af4();
  plVar31 = auVar44._8_8_;
  pdVar32 = auVar44._0_8_;
  *(undefined8 *)(puVar12 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar12 + -0x78) = unaff_x25;
  *(long *)(puVar12 + -0x70) = lVar38;
  *(undefined8 **)(puVar12 + -0x68) = puVar20;
  *(undefined8 *)(puVar12 + -0x60) = 0x3d23990;
  *(undefined8 *)(puVar12 + -0x58) = uVar21;
  *(undefined8 *)(puVar12 + -0x50) = uVar18;
  *(long *)(puVar12 + -0x48) = lVar19;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
  pdVar22 = pdVar32;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    pdVar22 = (dword *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar31 != (long *)0x0) && (*plVar31 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    pdVar22 = (dword *)func_0x00f78e5c(plVar31);
    return pdVar22;
  }
  lVar17 = *(long *)(pdVar32 + 0x24);
  if (lVar17 != 0) {
    uVar35 = 0;
    while( true ) {
      if (*(int *)(lVar17 + 0x18) <= (int)uVar35) {
        return pdVar22;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar17 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar31,uRam0000000003d5b098);
      lVar19 = *(long *)(pdVar32 + 0x24);
      if ((lVar19 == 0) || (lVar17 == 0)) break;
      uVar18 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar17,uRam0000000003d578b8);
      if (*(uint *)(lVar19 + 0x18) <= uVar35) {
code_r0x015947cc:
        uVar18 = func_0x00f78b24();
        func_0x00f78ac0(uVar18,0);
        goto code_r0x015947d8;
      }
      lVar38 = (long)(int)uVar35;
      *(undefined8 *)(lVar19 + lVar38 * 0x40 + 0x40) = uVar18;
      lVar17 = *(long *)(pdVar32 + 0x24);
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar35) goto code_r0x015947cc;
      lVar17 = *(long *)(lVar17 + lVar38 * 0x40 + 0x40);
      if (lVar17 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar17,0);
      lVar17 = *(long *)(pdVar32 + 0x24);
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar35) goto code_r0x015947cc;
      lVar17 = *(long *)(lVar17 + lVar38 * 0x40 + 0x40);
      if (lVar17 == 0) break;
      uVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
      lVar17 = *(long *)(pdVar32 + 0x24);
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar35) goto code_r0x015947cc;
      lVar17 = *(long *)(lVar17 + lVar38 * 0x40 + 0x20);
      if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)) ||
         (lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0), lVar17 == 0)) break;
      uVar35 = uVar35 + 1;
      pdVar22 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar17,uVar18,0,0);
      lVar17 = *(long *)(pdVar32 + 0x24);
      if (lVar17 == 0) break;
    }
  }
  pdVar22 = (dword *)func_0x00f78af4();
  return pdVar22;
}



// ============================================================
// RVA: 0x15923fc | Atlas.Contexts.FrontEndContextSingleplayerState.ShowOverview
// ============================================================

/* WARNING: Possible PIC construction at 0x01592530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x01592534) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview(dword *param_1,dword *param_2)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  dword **ppdVar5;
  dword **ppdVar6;
  dword **ppdVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  long lVar14;
  dword *pdVar15;
  dword *pdVar16;
  int iVar13;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
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
  undefined8 uVar30;
  dword *pdVar31;
  undefined1 **ppuVar32;
  long lVar33;
  undefined8 unaff_x25;
  code *pcVar34;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  dword **ppdVar35;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  dword *pdVar37;
  undefined1 *puVar38;
  undefined *puVar39;
  dword *pdVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  dword *pdStack_1b8;
  long alStack_1a0 [4];
  long lStack_178;
  undefined8 uStack_170;
  dword *apdStack_160 [2];
  long lStack_150;
  dword *pdStack_148;
  dword *pdStack_138;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  dword *pdStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  dword *pdStack_d8;
  dword *pdStack_d0;
  dword *pdStack_c8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar32 = (undefined1 **)0x3d28f18;
  uVar20 = 0x3d56d78;
  if ((bRam0000000003eb5152 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d28f08);
    func_0x00f78a20(0x3d56d60);
    func_0x00f78a20(0x3d56d78);
    func_0x00f78a20(0x3d28f18);
    bRam0000000003eb5152 = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData_TypeInfo*/ uRam0000000003d28f18);
  /*Atlas.UI.Screens.SingleplayerOverviewScreen.TransitionData$$.ctor*/ func_0x0156ac84(pdVar15,0);
  pdVar16 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28f08);
  pdVar24 = (dword *)0x0;
  pdVar31 = pdRam0000000003d56d78;
  /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$.ctor*/ func_0x0156a924(pdVar16,param_1);
  if (pdVar15 == (dword *)0x0) {
    puVar39 = &Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen;
    auVar41 = func_0x00f78af4();
    pdVar29 = auVar41._8_8_;
    pdVar23 = auVar41._0_8_;
  }
  else {
    unaff_x25 = 0x3d1feb8;
    ppuVar32 = (undefined1 **)0x3d29bc0;
    uVar20 = 0x3d56d60;
    *(dword **)(pdVar15 + 4) = pdVar16;
    *(dword **)(pdVar15 + 6) = param_2;
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar29 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x98);
    pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(pdVar24,param_1,uRam0000000003d56d60,0);
    puVar39 = (undefined *)0x1592534;
    pdVar23 = param_1;
    pdVar31 = pdVar15;
    param_2 = pdVar29;
    pdVar16 = pdVar24;
  }
  pdVar40 = pdVar31;
  pdStack_80 = pdVar16;
  pdStack_78 = pdVar15;
  pdStack_70 = param_2;
  pdStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar39;
  if (*(long *)(pdVar23 + 0x22) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(pdVar23 + 0x22),0,pdVar24,0);
    pdVar15 = *(dword **)(pdVar23 + 0x20);
    pdVar40 = pdVar24;
    param_1 = pdVar31;
    param_2 = pdVar29;
    if (pdVar15 != (dword *)0x0) {
      pdVar24 = (dword *)0x0;
      uVar25 = 0;
      pdVar16 = (dword *)0x0;
      pdVar23 = pdVar31;
      ppuStack_90 = ppuVar32;
      puStack_88 = (undefined *)uVar20;
      if ((bRam0000000003eb486f & 1) == 0) {
        func_0x00f78a20(0x3d53980);
        func_0x00f78a20(0x3d2fb90);
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb486f = 1;
      }
      pdStack_98 = (dword *)0x0;
      lVar14 = *(long *)(pdVar15 + 4);
      pdStack_b0 = (dword *)&puStack_60;
      if (lVar14 != 0) {
        pdVar24 = (dword *)0x0;
        uVar25 = 0;
        pdStack_a8 = (dword *)&UNK_01470820;
        pdVar40 = pdVar29;
        pdVar23 = pdVar31;
code_r0x02f87f38:
        pdStack_d8 = (dword *)0x3eb4000;
        pdStack_d0 = (dword *)0x0;
        ppuStack_e0 = ppuVar32;
        pdStack_c8 = pdVar31;
        pdStack_c0 = pdVar15;
        pdStack_b8 = pdVar29;
        if ((bRam0000000003ebc64a & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64a = 1;
        }
        uStack_170 = 0x3ebc000;
        pdStack_138 = (dword *)&UNK_02f87f9c;
        lStack_178 = unaff_x25;
        apdStack_160[0] = pdVar23;
        apdStack_160[1] = (dword *)uVar25;
        lStack_150 = lVar14;
        pdStack_148 = pdVar24;
        if ((bRam0000000003ebc64e & 1) == 0) {
          func_0x00f78a20(0x3d3ddf0);
          func_0x00f78a20(0x3d3ddf8);
          bRam0000000003ebc64e = 1;
        }
        lVar33 = *(long *)(lVar14 + 0x78);
        if (lVar33 != 0) {
          iVar13 = *(int *)(lVar33 + 0x18);
          if (iVar13 < 1) {
            return (dword *)0x0;
          }
          iVar12 = 1;
          pdVar31 = (dword *)((long)&MACH_HEADER.magic + 1);
          do {
            if (*(uint *)(lVar33 + 0x18) <= iVar12 - 1U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)(iVar12 - 1U) * 0x20 + 0x20);
            if (lVar33 == 0) break;
            uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar33,pdVar40,5,0);
            if ((uVar18 & 1) != 0) {
              return pdVar31;
            }
            pdVar31 = (dword *)(ulong)(iVar12 < iVar13);
            if (iVar13 == iVar12) {
              return pdVar31;
            }
            lVar33 = *(long *)(lVar14 + 0x78);
            iVar12 = iVar12 + 1;
          } while (lVar33 != 0);
        }
        func_0x00f78af4();
        return (dword *)0x0;
      }
      auVar41 = func_0x00f78af4();
      pdVar40 = auVar41._8_8_;
      pdStack_c0 = (dword *)&pdStack_b0;
      pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
      lVar14 = *(long *)(auVar41._0_8_ + 0x10);
      if (lVar14 != 0) {
        pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__ShowScreen;
        goto code_r0x02f87f38;
      }
      auVar41 = func_0x00f78af4();
      pdVar40 = auVar41._8_8_;
      ppdVar35 = &pdStack_c0;
      pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
      lVar14 = *(long *)(auVar41._0_8_ + 0x10);
      if (lVar14 != 0) {
        pdVar24 = (dword *)0x0;
        ppuStack_e0 = (undefined1 **)0x0;
        pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
        pdStack_d8 = pdVar31;
        pdStack_d0 = pdVar15;
        pdStack_c8 = pdVar29;
        pdStack_c0 = (dword *)&pdStack_b0;
        if ((bRam0000000003ebc64b & 1) == 0) {
          pdStack_c0 = (dword *)&pdStack_b0;
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar33 = *(long *)(lVar14 + 0x70);
        if (lVar33 != 0) {
          lVar19 = lVar33;
          if (*(uint *)(lVar33 + 0x18) <= auVar41._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar19 = *(long *)(lVar14 + 0x70);
          }
          if (lVar19 != 0) {
            lVar33 = *(long *)(lVar33 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
            puStack_118 = *(undefined **)(lVar33 + 0x28);
            puStack_120 = *(undefined1 **)(lVar33 + 0x20);
            pdStack_100 = (dword *)0x0;
            pdStack_f8 = (dword *)0x0;
            uStack_f0 = (undefined1 ***)
                        CONCAT26(*(undefined2 *)(lVar33 + 0x46),
                                 CONCAT42(*(undefined4 *)(lVar33 + 0x42),1));
            puStack_110 = puStack_120;
            pdStack_108 = (dword *)puStack_118;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,pdVar40,&puStack_110,uRam0000000003d3ddd0);
            pdVar31 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar14,pdVar40);
            return pdVar31;
          }
        }
        auVar41 = func_0x00f78af4();
        pdVar21 = auVar41._8_8_;
        ppdVar6 = apdStack_160;
        apdStack_160[0] = (dword *)0x0;
        pdStack_138 = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
        pdVar37 = (dword *)&stack0xfffffffffffffec0;
        apdStack_160[1] = (dword *)lVar33;
        lStack_150 = lVar14;
        pdStack_148 = pdVar40;
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar14 = *(long *)(auVar41._0_8_ + 0x70);
        if (lVar14 != 0) {
          if (*(uint *)(lVar14 + 0x18) <= auVar41._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
          if (lVar14 == 0) {
            pdVar31 = (dword *)0x0;
          }
          else {
            pdVar31 = *(dword **)(lVar14 + 0x40);
          }
          return pdVar31;
        }
        pdVar40 = (dword *)&Core_UI2_UIScreen__ForceExit;
        pdVar29 = (dword *)func_0x00f78af4();
        pdVar15 = (dword *)0x0;
        pdVar31 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar41 = func_0x00f78af4();
      pdVar21 = auVar41._8_8_;
      ppdVar6 = &pdStack_d0;
      pdStack_d0 = (dword *)&pdStack_c0;
      pdStack_c8 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
      lVar14 = *(long *)(auVar41._0_8_ + 0x10);
      auVar41._8_8_ = pdVar31;
      auVar41._0_8_ = lVar14;
      if (lVar14 != 0) {
        pdVar24 = (dword *)0x0;
        ppdVar5 = &pdStack_c0;
        puVar39 = &Atlas_UI_AtlasUIManager__ClearLayer;
        pdVar31 = pdVar15;
        goto code_r0x02f877a8;
      }
      auVar41 = func_0x00f78af4();
      ppuStack_e0 = (undefined1 **)&pdStack_d0;
      pdStack_d8 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
      lVar14 = *(long *)(auVar41._0_8_ + 0x10);
      auVar41._8_8_ = auVar41._8_8_;
      auVar41._0_8_ = lVar14;
      if (lVar14 != 0) {
        ppdVar7 = &pdStack_d0;
        puVar39 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        pdVar21 = pdVar24;
        while( true ) {
          ppdVar5 = (dword **)((long)ppdVar7 + -0x30);
          *(dword **)((long)ppdVar7 + -0x30) = pdVar16;
          *(dword **)((long)ppdVar7 + -0x28) = pdVar31;
          *(dword **)((long)ppdVar7 + -0x20) = pdVar15;
          *(dword **)((long)ppdVar7 + -0x18) = pdVar29;
          *(dword ***)((long)ppdVar7 + -0x10) = ppdVar6;
          *(undefined **)((long)ppdVar7 + -8) = puVar39;
          ppdVar35 = (dword **)((long)ppdVar7 + -0x10);
          puVar39 = &UNK_02f883d8;
          pdVar24 = pdVar21;
          pdVar29 = pdVar23;
          pdVar31 = pdVar21;
          pdVar16 = auVar41._0_8_;
code_r0x02f877a8:
          pdVar15 = auVar41._0_8_;
          ppdVar6 = (dword **)((long)ppdVar5 + -0x60);
          *(dword **)((long)ppdVar5 + -0x30) = pdVar16;
          *(long *)((long)ppdVar5 + -0x28) = auVar41._8_8_;
          *(dword **)((long)ppdVar5 + -0x20) = pdVar31;
          *(dword **)((long)ppdVar5 + -0x18) = pdVar29;
          *(dword ***)((long)ppdVar5 + -0x10) = ppdVar35;
          *(undefined **)((long)ppdVar5 + -8) = puVar39;
          pdVar37 = (dword *)((long)ppdVar5 + -0x10);
          pdVar31 = pdVar15;
          if ((bRam0000000003ebc64d & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            pdVar31 = (dword *)func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64d = 1;
          }
          uVar28 = (uint)pdVar21;
          if (((int)uVar28 < 0) || ((int)pdVar15[0x14] <= (int)uVar28)) {
            return pdVar31;
          }
          lVar14 = *(long *)(pdVar15 + 0x1c);
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = *(long *)(lVar14 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
          pdVar16 = *(dword **)(lVar14 + 0x20);
          pdVar29 = *(dword **)(lVar14 + 0x28);
          *(undefined4 *)((long)ppdVar5 + -0x60) = *(undefined4 *)(lVar14 + 0x42);
          *(undefined2 *)((long)ppdVar5 + -0x5c) = *(undefined2 *)(lVar14 + 0x46);
          if (pdVar29 == (dword *)0x0) {
            lVar14 = *(long *)(pdVar15 + 0x1c);
            if (lVar14 != 0) {
              *(dword **)((long)ppdVar5 + -0x58) = pdVar16;
              *(undefined8 *)((long)ppdVar5 + -0x50) = 0;
              *(undefined8 *)((long)ppdVar5 + -0x48) = 0;
              *(undefined8 *)((long)ppdVar5 + -0x40) = 0;
              *(undefined2 *)((long)ppdVar5 + -0x38) = 0;
              *(undefined4 *)((long)ppdVar5 + -0x36) = *(undefined4 *)((long)ppdVar5 + -0x60);
              *(undefined2 *)((long)ppdVar5 + -0x32) = *(undefined2 *)((long)ppdVar5 + -0x5c);
              pdVar31 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar14,pdVar21,
                                                 (undefined1 *)((long)ppdVar5 + -0x58),
                                                 uRam0000000003d3ddd0);
              return pdVar31;
            }
            break;
          }
          pdVar40 = (dword *)&UNK_02f87848;
          pdVar31 = pdVar29;
code_r0x02f882d8:
          ppdVar6[-4] = pdVar15;
          ppdVar6[-3] = pdVar21;
          ppdVar6[-2] = pdVar37;
          ppdVar6[-1] = pdVar40;
          (**(code **)(*(long *)pdVar29 + 0x218))(pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x220))
          ;
          if (*(long *)(pdVar29 + 10) != 0) {
            /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar29 + 10),0);
            pdVar29[0x13] = 4;
            /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar29,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar31 = (dword *)(**(code **)(*(long *)pdVar29 + 0x228))
                                         (pdVar29,*(undefined8 *)(*(long *)pdVar29 + 0x230));
            return pdVar31;
          }
          func_0x00f78af4();
          ppdVar7 = ppdVar6 + -8;
          ppdVar6[-8] = pdVar15;
          ppdVar6[-7] = pdVar29;
          ppdVar6[-6] = (dword *)(ppdVar6 + -2);
          ppdVar6[-5] = (dword *)&Core_UI2_UIManager__ReturnScreenWithBehaviour;
          ppdVar6 = ppdVar6 + -6;
          if (extraout_x1 != (long *)0x0) {
            lVar14 = extraout_x1[5];
            /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
            uVar20 = (**(code **)(*extraout_x1 + 0x238))
                               (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
            extraout_x1[5] = 0;
            extraout_x1[6] = 0;
            extraout_x1[9] = _UNK_037235c0;
            extraout_x1[7] = 0;
            extraout_x1[8] = 0;
            /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar20,lVar14);
            pdVar31 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
            extraout_x1[0xb] = 0;
            return pdVar31;
          }
          puVar39 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
          auVar41 = func_0x00f78af4();
          pdVar21 = pdVar24;
        }
        lVar14 = func_0x00f78af4();
        *(undefined8 *)((long)ppdVar5 + -0xa0) = unaff_d9;
        *(undefined8 *)((long)ppdVar5 + -0x98) = unaff_d8;
        *(dword **)((long)ppdVar5 + -0x90) = pdVar16;
        *(undefined8 *)((long)ppdVar5 + -0x88) = 0;
        *(dword **)((long)ppdVar5 + -0x80) = pdVar15;
        *(dword **)((long)ppdVar5 + -0x78) = pdVar21;
        *(dword **)((long)ppdVar5 + -0x70) = pdVar37;
        *(undefined **)((long)ppdVar5 + -0x68) = &Core_UI2_UIManager__Update;
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
        if (0 < *(int *)(lVar14 + 0x50)) {
          iVar13 = 0;
          do {
            /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar14,iVar13);
            /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar14,iVar13);
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar14 + 0x50));
        }
        /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar14);
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
        pdVar31 = (dword *)(*pcRam0000000003ec05a0)(uVar20);
        return pdVar31;
      }
      auVar41 = func_0x00f78af4();
      puStack_e8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar14 = *(long *)(auVar41._0_8_ + 0x10);
      if (lVar14 == 0) {
        uStack_f0 = &ppuStack_e0;
        auVar41 = func_0x00f78af4();
        puVar36 = (undefined1 *)&pdStack_100;
        pdStack_f8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
        lVar14 = *(long *)(auVar41._0_8_ + 0x10);
        auVar43._8_8_ = auVar41._8_8_;
        auVar43._0_8_ = lVar14;
        if (lVar14 != 0) {
          pdVar23 = (dword *)0x0;
          puVar8 = &uStack_f0;
          puVar39 = &Atlas_UI_AtlasUIManager__GetLayerState;
          pdStack_100 = (dword *)&uStack_f0;
          goto code_r0x02f884dc;
        }
        pdStack_100 = (dword *)&uStack_f0;
        auVar41 = func_0x00f78af4();
        puVar38 = (undefined1 *)&puStack_110;
        pdStack_108 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
        lVar14 = *(long *)(auVar41._0_8_ + 0x10);
        auVar44._8_8_ = auVar41._8_8_;
        auVar44._0_8_ = lVar14;
        if (lVar14 == 0) {
          puStack_110 = (undefined1 *)&pdStack_100;
          auVar41 = func_0x00f78af4();
          puStack_118 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar14 = *(long *)(auVar41._0_8_ + 0x10);
          auVar45._8_8_ = auVar41._8_8_;
          auVar45._0_8_ = lVar14;
          if (lVar14 == 0) {
            puStack_120 = (undefined1 *)&puStack_110;
            pdVar16 = (dword *)func_0x00f78af4();
            lStack_150 = 0;
            pdStack_148 = pdVar31;
            pdStack_138 = pdVar29;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar20 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar20,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar16 + 0xc) = uVar20;
            return pdVar16;
          }
          puVar10 = (undefined1 *)&puStack_110;
          puVar39 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          puStack_120 = (undefined1 *)&puStack_110;
          goto code_r0x02f88674;
        }
        puVar9 = (undefined1 *)&pdStack_100;
        puVar39 = &Atlas_UI_AtlasUIManager__EnableInput;
        pdVar23 = pdVar24;
        pdVar16 = pdVar31;
        puStack_110 = (undefined1 *)&pdStack_100;
      }
      else {
        pdVar23 = (dword *)0x0;
        puVar8 = &puStack_110;
        puStack_110 = (undefined1 *)0x0;
        puStack_e8 = &Atlas_UI_AtlasUIManager__IsLayerReady;
        pdStack_108 = pdVar31;
        pdStack_100 = pdVar15;
        pdStack_f8 = pdVar29;
        uStack_f0 = &ppuStack_e0;
        if ((bRam0000000003ebc64f & 1) == 0) {
          uStack_f0 = &ppuStack_e0;
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar28 = auVar41._8_4_;
        if (((int)uVar28 < 0) || (*(int *)(lVar14 + 0x50) <= (int)uVar28)) {
          return (dword *)0x0;
        }
        lVar14 = *(long *)(lVar14 + 0x70);
        if (lVar14 != 0) {
          if (*(uint *)(lVar14 + 0x18) <= uVar28) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar33 = *(long *)(lVar14 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
          lVar14 = *(long *)(lVar33 + 0x28);
          cVar2 = *(char *)(lVar33 + 0x40);
          iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar33 + 0x30),0);
          if (iVar13 == 0 || cVar2 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar14 != 0) && (*(int *)(lVar14 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar39 = &Core_UI2_UIManager__GetLayerState;
        auVar43 = func_0x00f78af4();
        pdVar15 = (dword *)0x0;
        pdVar29 = auVar41._8_8_;
        pdVar31 = (dword *)0x3ebc000;
code_r0x02f884dc:
        puVar9 = (undefined1 *)((long)puVar8 + -0x30);
        *(undefined8 *)((long)puVar8 + -0x30) = 0;
        *(dword **)((long)puVar8 + -0x28) = pdVar31;
        *(dword **)((long)puVar8 + -0x20) = pdVar15;
        *(dword **)((long)puVar8 + -0x18) = pdVar29;
        *(undefined8 **)((long)puVar8 + -0x10) = &uStack_f0;
        *(undefined **)((long)puVar8 + -8) = puVar39;
        puVar36 = (undefined1 *)((long)puVar8 + -0x10);
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar14 = *(long *)(auVar43._0_8_ + 0x70);
        if (lVar14 != 0) {
          if (*(uint *)(lVar14 + 0x18) <= auVar43._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
          if (lVar14 == 0) {
            pdVar31 = &MACH_HEADER.cputype;
          }
          else {
            pdVar31 = (dword *)(ulong)*(uint *)(lVar14 + 0x4c);
          }
          return pdVar31;
        }
        puVar39 = &Core_UI2_UIManager__EnableInput;
        auVar44 = func_0x00f78af4();
        pdVar15 = (dword *)0x0;
        pdVar29 = auVar43._8_8_;
        pdVar16 = (dword *)0x3ebc000;
      }
      pdVar40 = auVar44._8_8_;
      pdVar31 = auVar44._0_8_;
      puVar10 = puVar9 + -0x40;
      *(undefined1 ***)(puVar9 + -0x40) = ppuVar32;
      *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
      *(undefined8 *)(puVar9 + -0x30) = 0;
      *(dword **)(puVar9 + -0x28) = pdVar16;
      *(dword **)(puVar9 + -0x20) = pdVar15;
      *(dword **)(puVar9 + -0x18) = pdVar29;
      *(undefined1 **)(puVar9 + -0x10) = puVar36;
      *(undefined **)(puVar9 + -8) = puVar39;
      puVar38 = puVar9 + -0x10;
      pdVar16 = (dword *)0x3ebc000;
      pdVar24 = pdVar23;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(pdVar31 + 0x1a) != 0) {
        pdVar24 = (dword *)(ulong)((uint)pdVar23 ^ 1);
        pdVar15 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar31 + 0x1a),pdVar40,pdVar24,0);
        lVar14 = *(long *)(pdVar31 + 0x1c);
        pdVar16 = (dword *)0x0;
        if (lVar14 != 0) {
          uVar28 = auVar44._8_4_;
          if (*(uint *)(lVar14 + 0x18) <= uVar28) {
            pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
             (pdVar16 = *(dword **)(pdVar31 + 0xc), pdVar16 == (dword *)0x0)) {
            return pdVar15;
          }
          lVar14 = *(long *)(pdVar31 + 0x1c);
          pdVar31 = (dword *)0x0;
          if (lVar14 != 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar28) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar22 = *(long **)(*(long *)(lVar14 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
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
            *(dword **)(puVar9 + -0x68) = pdVar16;
            lVar14 = *(long *)(pdVar16 + 0x1a);
            if (lVar14 == 0) {
              puVar36 = puVar9 + -0x68;
              lVar33 = 1;
            }
            else {
              lVar33 = *(long *)(lVar14 + 0x18);
              if (lVar33 == 0) {
                return pdVar16;
              }
              puVar36 = (undefined1 *)(lVar14 + 0x20);
            }
            lVar14 = 0;
            do {
              lVar19 = *(long *)(puVar36 + lVar14 * 8);
              pcVar34 = *(code **)(lVar19 + 0x10);
              plVar1 = *(long **)(lVar19 + 0x20);
              lVar19 = *(long *)(lVar19 + 0x28);
              if (*(short *)(lVar19 + 0x48) == -1) {
                func_0x00f78ad8(lVar19);
              }
              iVar13 = func_0x00f78a4c(lVar19);
              bVar11 = *(char *)(lVar19 + 0x4a) == '\x03';
              if (iVar13 == 0) {
                if (bVar11) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    pdVar31 = (dword *)(*pcVar34)(plVar22,pdVar40,pdVar23,lVar19);
                  }
                  else {
                    if (((*(short *)(lVar19 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar16 + 6) == 0))
                    goto code_r0x01e71aac;
                    iVar13 = func_0x00f78a44(lVar19);
                    iVar12 = func_0x00f78ec0(lVar19);
                    if (iVar13 == 0) {
                      uVar3 = *(ushort *)(lVar19 + 0x48);
                      if (iVar12 == 0) {
                        lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                        pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                                     (plVar1,plVar22,pdVar40,pdVar23,
                                                      *(undefined8 *)(lVar19 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar19 = func_0x00f78a48(lVar19);
                      lVar26 = *plVar1;
                      uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                      if (uVar18 != 0) {
                        piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == lVar19) {
                            puVar17 = (undefined8 *)
                                      (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar27 = piVar27 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                      pcVar34 = (code *)*puVar17;
                      puVar17 = (undefined8 *)puVar17[1];
                    }
                    else {
                      if (iVar12 == 0) {
                        uVar20 = *(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar26 = *plVar1;
                        uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                        if (uVar18 != 0) {
                          piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                              lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                           (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar27 = piVar27 + 4;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar20 = *(undefined8 *)(lVar26 + 8);
                      }
                      puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
                      pcVar34 = (code *)*puVar17;
                    }
                    pdVar31 = (dword *)(*pcVar34)(plVar1,plVar22,pdVar40,pdVar23,puVar17);
                  }
                }
                else {
                  if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
                  goto code_r0x01e71bbc;
                  iVar13 = func_0x00f78a44(lVar19);
                  iVar12 = func_0x00f78ec0(lVar19);
                  if (iVar13 == 0) {
                    uVar3 = *(ushort *)(lVar19 + 0x48);
                    if (iVar12 == 0) {
                      lVar19 = *plVar22 + (ulong)uVar3 * 0x10;
                      pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                                   (plVar22,pdVar40,pdVar23,
                                                    *(undefined8 *)(lVar19 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar19 = func_0x00f78a48(lVar19);
                    lVar26 = *plVar22;
                    uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar18 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == lVar19) {
                          puVar17 = (undefined8 *)
                                    (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar27 = piVar27 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    puVar17 = (undefined8 *)func_0x00fac1f0(plVar22,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                    pcVar34 = (code *)*puVar17;
                    puVar17 = (undefined8 *)puVar17[1];
                  }
                  else {
                    if (iVar12 == 0) {
                      uVar20 = *(undefined8 *)
                                (*plVar22 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar26 = *plVar22;
                      uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
                      if (uVar18 != 0) {
                        piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                            lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                         (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar27 = piVar27 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71cd8:
                      uVar20 = *(undefined8 *)(lVar26 + 8);
                    }
                    puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
                    pcVar34 = (code *)*puVar17;
                  }
                  pdVar31 = (dword *)(*pcVar34)(plVar22,pdVar40,pdVar23,puVar17);
                }
              }
              else {
                if (bVar11) goto code_r0x01e71bbc;
code_r0x01e71aac:
                pdVar31 = (dword *)(*pcVar34)(plVar1,plVar22,pdVar40,pdVar23,lVar19);
              }
code_r0x01e71bd0:
              lVar14 = lVar14 + 1;
              if (lVar14 == lVar33) {
                return pdVar31;
              }
            } while( true );
          }
        }
      }
      puVar39 = &Core_UI2_UIManager__SetScreenVisible;
      auVar45 = func_0x00f78af4();
      pdVar29 = pdVar23;
      pdVar15 = pdVar40;
code_r0x02f88674:
      pdVar23 = auVar45._0_8_;
      *(dword **)(puVar10 + -0x30) = pdVar16;
      *(dword **)(puVar10 + -0x28) = pdVar31;
      *(dword **)(puVar10 + -0x20) = pdVar15;
      *(dword **)(puVar10 + -0x18) = pdVar29;
      *(undefined1 **)(puVar10 + -0x10) = puVar38;
      *(undefined **)(puVar10 + -8) = puVar39;
      pdVar31 = pdVar23;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar31 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar14 = *(long *)(pdVar23 + 0x1c);
      if (lVar14 != 0) {
        uVar28 = auVar45._8_4_;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) {
          pdVar31 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
          return pdVar31;
        }
        lVar14 = *(long *)(pdVar23 + 0x1c);
        if (lVar14 != 0) {
          if (*(uint *)(lVar14 + 0x18) <= uVar28) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
          if ((lVar14 != 0) && (plVar22 = *(long **)(lVar14 + 0x28), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar31 = (dword *)(**(code **)(*plVar22 + 0x178))
                                         (plVar22,pdVar24,*(undefined8 *)(*plVar22 + 0x180));
            return pdVar31;
          }
        }
      }
      auVar41 = func_0x00f78af4();
      uVar20 = auVar41._0_8_;
      *(long *)(puVar10 + -0x50) = auVar45._8_8_;
      *(dword **)(puVar10 + -0x48) = pdVar24;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar10 + -0x68) = 0;
      *(undefined8 *)(puVar10 + -0x70) = 0;
      *(undefined8 *)(puVar10 + -0x58) = 0;
      *(undefined8 *)(puVar10 + -0x60) = 0;
      pdVar31 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar20,auVar41._8_8_,puVar10 + -0x70);
      if ((int)pdVar31 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar20,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
        *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
        pdVar31 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar20,puVar10 + -0x90,1);
      }
      return pdVar31;
    }
  }
  auVar42 = func_0x00f78af4();
  uVar25 = auVar42._0_8_;
  puStack_88 = &Atlas_Contexts_FrontEndContextSingleplayerState__MapSelected;
  pdStack_c0 = (dword *)ppuVar32;
  pdStack_b8 = (dword *)uVar20;
  pdStack_b0 = pdVar16;
  pdStack_a8 = pdVar23;
  pdStack_a0 = param_2;
  pdStack_98 = param_1;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb5155 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5155 = 1;
  }
  lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar25,uRam0000000003d40628);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    *(long *)(*(long *)(lVar14 + 0x18) + 0x18) = auVar42._8_8_;
    lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar25,uRam0000000003d40628);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
      *(dword **)(*(long *)(lVar14 + 0x18) + 0x20) = pdVar40;
      lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar25,uRam0000000003d40628);
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x10) = 4;
        lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar25,uRam0000000003d40628);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar31 = (dword *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar40,0);
        auVar42 = ZEXT816(0x3d21000) << 0x40;
        if (lVar14 != 0) {
          *(dword **)(lVar14 + 0x28) = pdVar31;
          return pdVar31;
        }
      }
    }
  }
  auVar41 = func_0x00f78af4();
  uVar20 = auVar41._8_8_;
  lVar14 = auVar41._0_8_;
  uStack_f0 = (undefined1 ***)0x3d40628;
  pdStack_c8 = (dword *)&Atlas_Contexts_FrontEndContextSingleplayerState__DifficultySelected;
  uVar25 = 0x3eb5000;
  pdStack_d8 = pdVar40;
  pdStack_d0 = (dword *)&ppuStack_90;
  if ((bRam0000000003eb5158 & 1) == 0) {
    puStack_e8 = (undefined *)auVar42._8_8_;
    ppuStack_e0 = auVar42._0_8_;
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    auVar42._8_8_ = puStack_e8;
    auVar42._0_8_ = ppuStack_e0;
    bRam0000000003eb5158 = 1;
  }
  puStack_e8 = auVar42._8_8_;
  ppuStack_e0 = auVar42._0_8_;
  if ((*(long *)(lVar14 + 0x90) != 0) &&
     (lVar33 = *(long *)(*(long *)(lVar14 + 0x90) + 0x10), lVar33 != 0)) {
    uVar25 = 0x3d40000;
    uVar20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar33,uVar20,uRam0000000003d57278);
    pdVar31 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar14,uRam0000000003d40628);
    auVar4._8_8_ = puStack_e8;
    auVar4._0_8_ = ppuStack_e0;
    auVar42._8_8_ = puStack_e8;
    auVar42._0_8_ = ppuStack_e0;
    if ((pdVar31 != (dword *)0x0) && (auVar42 = auVar4, *(long *)(pdVar31 + 6) != 0)) {
      *(undefined8 *)(*(long *)(pdVar31 + 6) + 0x70) = uVar20;
      return pdVar31;
    }
  }
  puStack_e8 = auVar42._8_8_;
  ppuStack_e0 = auVar42._0_8_;
  auVar41 = func_0x00f78af4();
  uVar30 = auVar41._8_8_;
  lVar33 = auVar41._0_8_;
  puStack_120 = (undefined1 *)0x3d40628;
  pdStack_f8 = (dword *)&Atlas_Contexts_FrontEndContextSingleplayerState__ArcadeModeSelected;
  lVar19 = 0x3eb5000;
  pdStack_138 = (dword *)unaff_x25;
  puStack_118 = (undefined *)uVar25;
  puStack_110 = (undefined1 *)uVar20;
  pdStack_108 = (dword *)lVar14;
  pdStack_100 = (dword *)&pdStack_d0;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  pdVar31 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar33,uRam0000000003d40628);
  if ((pdVar31 == (dword *)0x0) || (*(long *)(pdVar31 + 6) == 0)) goto code_r0x01592990;
  *(int *)(*(long *)(pdVar31 + 6) + 0x10) = auVar41._8_4_;
  if (auVar41._8_4_ == 4) {
    return pdVar31;
  }
  lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar33,uRam0000000003d40628);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto code_r0x01592990;
  iVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
  if (*(long *)(lVar33 + 0x90) == 0) goto code_r0x01592990;
  lVar19 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar33 + 0x90),uVar30,0);
  lVar26 = *(long *)(lVar33 + 0x90);
  lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar33,uRam0000000003d40628);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto code_r0x01592990;
  uVar20 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x20);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
  if (lVar26 == 0) goto code_r0x01592990;
  lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(lVar26,uVar20,uVar30,0);
  if (iVar13 == 0) {
    if ((lVar19 == 0) || (lVar14 == 0)) goto code_r0x01592990;
    uVar30 = *(undefined8 *)(lVar19 + 0x50);
    puVar17 = (undefined8 *)(lVar14 + 0x30);
    pdStack_148 = (dword *)*puVar17;
    iVar13 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&pdStack_148,0);
    if (iVar13 != 0) goto code_r0x015928d0;
  }
  else {
    if ((lVar19 == 0) || (lVar14 == 0)) goto code_r0x01592990;
    uVar30 = *(undefined8 *)(lVar19 + 0x58);
    puVar17 = (undefined8 *)(lVar14 + 0x38);
    pdStack_148 = (dword *)*puVar17;
    uVar18 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&pdStack_148,0);
    if ((uVar18 & 1) != 0) {
code_r0x015928d0:
      uVar30 = *puVar17;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar31 = (dword *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar30,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  if ((int)pdVar31 == 0) {
    return pdVar31;
  }
  if ((*(long *)(lVar33 + 0x90) != 0) &&
     (lVar14 = *(long *)(*(long *)(lVar33 + 0x90) + 0x10), lVar14 != 0)) {
    uVar30 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,uVar30,uRam0000000003d57278);
    pdVar31 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar33,uRam0000000003d40628);
    if ((pdVar31 != (dword *)0x0) && (*(long *)(pdVar31 + 6) != 0)) {
      *(undefined8 *)(*(long *)(pdVar31 + 6) + 0x70) = uVar30;
      return pdVar31;
    }
  }
code_r0x01592990:
  lVar14 = func_0x00f78af4();
  apdStack_160[1] = (dword *)&Atlas_Contexts_FrontEndContextSingleplayerState__EnterLoadOutState;
  lStack_178 = lVar19;
  uStack_170 = uVar30;
  apdStack_160[0] = (dword *)&pdStack_100;
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar33 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar14,uRam0000000003d40628);
  if (lVar33 == 0) {
    lVar14 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar14 = *(long *)(lVar14 + 0xb0);
    if (lVar14 == 0) {
      pdVar31 = (dword *)&Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar14 = func_0x00f78af4();
    }
    else {
      pdVar31 = (dword *)&UNK_01592b20;
    }
    pdStack_1b8 = pdVar31;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar14 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar20 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar14);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar20 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar14,uVar20);
    uVar25 = *(undefined8 *)(lVar14 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar31 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
    if ((int)pdVar31 == 0) {
      return pdVar31;
    }
    plVar22 = *(long **)(lVar14 + 200);
    if (plVar22 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar31 = (dword *)(**(code **)(*plVar22 + 0x198))
                                   (plVar22,uVar20,*(undefined8 *)(*plVar22 + 0x1a0));
      return pdVar31;
    }
    auVar41 = func_0x00f78af4();
    plVar22 = auVar41._8_8_;
    pdVar16 = auVar41._0_8_;
    pdVar31 = pdVar16;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      pdVar31 = (dword *)func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar22 != (long *)0x0) && (*plVar22 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      pdVar31 = (dword *)func_0x00f78e5c(plVar22);
      return pdVar31;
    }
    lVar14 = *(long *)(pdVar16 + 0x24);
    if (lVar14 != 0) {
      uVar28 = 0;
      while( true ) {
        if (*(int *)(lVar14 + 0x18) <= (int)uVar28) {
          return pdVar31;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar22,uRam0000000003d5b098);
        lVar33 = *(long *)(pdVar16 + 0x24);
        if ((lVar33 == 0) || (lVar14 == 0)) break;
        uVar20 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar14,uRam0000000003d578b8);
        if (*(uint *)(lVar33 + 0x18) <= uVar28) {
code_r0x015947cc:
          uVar20 = func_0x00f78b24();
          func_0x00f78ac0(uVar20,0);
          goto code_r0x015947d8;
        }
        lVar19 = (long)(int)uVar28;
        *(undefined8 *)(lVar33 + lVar19 * 0x40 + 0x40) = uVar20;
        lVar14 = *(long *)(pdVar16 + 0x24);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto code_r0x015947cc;
        lVar14 = *(long *)(lVar14 + lVar19 * 0x40 + 0x40);
        if (lVar14 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar14,0);
        lVar14 = *(long *)(pdVar16 + 0x24);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto code_r0x015947cc;
        lVar14 = *(long *)(lVar14 + lVar19 * 0x40 + 0x40);
        if (lVar14 == 0) break;
        uVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0);
        lVar14 = *(long *)(pdVar16 + 0x24);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar28) goto code_r0x015947cc;
        lVar14 = *(long *)(lVar14 + lVar19 * 0x40 + 0x20);
        if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) ||
           (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0), lVar14 == 0)) break;
        uVar28 = uVar28 + 1;
        pdVar31 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar14,uVar20,0,0);
        lVar14 = *(long *)(pdVar16 + 0x24);
        if (lVar14 == 0) break;
      }
    }
    pdVar31 = (dword *)func_0x00f78af4();
    return pdVar31;
  }
  uVar20 = *(undefined8 *)(lVar33 + 0x18);
  uVar25 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  pdVar31 = (dword *)Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor
                               (uVar25,uVar20,1,0);
  uVar20 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  pdVar16 = *(dword **)(lVar14 + 0x78);
  if (pdVar16 == (dword *)0x0) {
    return pdVar31;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar22 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  pdStack_1b8 = pdVar16;
  lVar14 = *(long *)(pdVar16 + 0x1a);
  if (lVar14 == 0) {
    ppdVar35 = &pdStack_1b8;
    lVar33 = 1;
  }
  else {
    lVar33 = *(long *)(lVar14 + 0x18);
    if (lVar33 == 0) {
      return pdVar16;
    }
    ppdVar35 = (dword **)(lVar14 + 0x20);
  }
  lVar14 = 0;
  do {
    pdVar31 = ppdVar35[lVar14];
    pcVar34 = *(code **)(pdVar31 + 4);
    plVar1 = *(long **)(pdVar31 + 8);
    lVar19 = *(long *)(pdVar31 + 10);
    if (*(short *)(lVar19 + 0x48) == -1) {
      func_0x00f78ad8(lVar19);
    }
    iVar13 = func_0x00f78a4c(lVar19);
    bVar11 = *(char *)(lVar19 + 0x4a) == '\x03';
    if (iVar13 == 0) {
      if (bVar11) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          pdVar31 = (dword *)(*pcVar34)(plVar22,0,uVar25,lVar19);
        }
        else {
          if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(pdVar16 + 6) == 0)) goto code_r0x01e7162c;
          iVar13 = func_0x00f78a44(lVar19);
          iVar12 = func_0x00f78ec0(lVar19);
          if (iVar13 == 0) {
            uVar3 = *(ushort *)(lVar19 + 0x48);
            if (iVar12 == 0) {
              lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
              pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                           (plVar1,plVar22,0,uVar25,*(undefined8 *)(lVar19 + 0x140))
              ;
              goto code_r0x01e71750;
            }
            lVar19 = func_0x00f78a48(lVar19);
            lVar26 = *plVar1;
            uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar18 != 0) {
              piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == lVar19) {
                  puVar17 = (undefined8 *)
                            (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar27 = piVar27 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e718f4:
            pcVar34 = (code *)*puVar17;
            puVar17 = (undefined8 *)puVar17[1];
          }
          else {
            if (iVar12 == 0) {
              uVar20 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar26 = *plVar1;
              uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
              if (uVar18 != 0) {
                piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                    lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar27 = piVar27 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar20 = *(undefined8 *)(lVar26 + 8);
            }
            puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
            pcVar34 = (code *)*puVar17;
          }
          pdVar31 = (dword *)(*pcVar34)(plVar1,plVar22,0,uVar25,puVar17);
        }
      }
      else {
        if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar16 + 6) == 0))
        goto code_r0x01e7173c;
        iVar13 = func_0x00f78a44(lVar19);
        iVar12 = func_0x00f78ec0(lVar19);
        if (iVar13 == 0) {
          uVar3 = *(ushort *)(lVar19 + 0x48);
          if (iVar12 == 0) {
            lVar19 = *plVar22 + (ulong)uVar3 * 0x10;
            pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                         (plVar22,0,uVar25,*(undefined8 *)(lVar19 + 0x140));
            goto code_r0x01e71750;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar26 = *plVar22;
          uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
          if (uVar18 != 0) {
            piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar19) {
                puVar17 = (undefined8 *)
                          (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar27 = piVar27 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar22,lVar19,(ulong)uVar3);
code_r0x01e71880:
          pcVar34 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar12 == 0) {
            uVar20 = *(undefined8 *)(*plVar22 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar26 = *plVar22;
            uVar18 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar18 != 0) {
              piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71858;
                }
                piVar27 = piVar27 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            lVar26 = func_0x00fac1f0(plVar22);
code_r0x01e71858:
            uVar20 = *(undefined8 *)(lVar26 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar20,lVar19);
          pcVar34 = (code *)*puVar17;
        }
        pdVar31 = (dword *)(*pcVar34)(plVar22,0,uVar25,puVar17);
      }
    }
    else {
      if (bVar11) goto code_r0x01e7173c;
code_r0x01e7162c:
      pdVar31 = (dword *)(*pcVar34)(plVar1,plVar22,0,uVar25,lVar19);
    }
code_r0x01e71750:
    lVar14 = lVar14 + 1;
    if (lVar14 == lVar33) {
      return pdVar31;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1592554 | Atlas.Contexts.FrontEndContextSingleplayerState.SetBackButtonAndTransitionToScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x01592b70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
                  (long param_1,dword *param_2,dword *param_3,dword *param_4)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  dword **ppdVar5;
  dword **ppdVar6;
  undefined1 **ppuVar7;
  dword **ppdVar8;
  undefined1 **ppuVar9;
  bool bVar10;
  int iVar11;
  long lVar13;
  dword *pdVar14;
  int iVar12;
  dword *pdVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  dword *pdVar20;
  long *extraout_x1;
  long *plVar21;
  dword *pdVar22;
  dword *pdVar23;
  undefined8 uVar24;
  long lVar25;
  int *piVar26;
  uint uVar27;
  undefined8 uVar28;
  dword *pdVar29;
  undefined8 unaff_x24;
  long lVar30;
  undefined8 unaff_x25;
  code *pcVar31;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  dword **ppdVar32;
  undefined8 unaff_x28;
  undefined1 **ppuVar33;
  undefined *puVar34;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  dword *pdStack_168;
  dword *apdStack_150 [4];
  undefined8 uStack_120;
  dword *pdStack_118;
  dword *pdStack_110;
  undefined *puStack_108;
  long lStack_100;
  dword *pdStack_f8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  dword **ppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  dword *pdStack_80;
  dword *pdStack_78;
  
  pdVar29 = param_3;
  if (*(long *)(param_1 + 0x88) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x88),0,param_4,0);
    pdVar15 = *(dword **)(param_1 + 0x80);
    pdVar29 = param_4;
    if (pdVar15 != (dword *)0x0) {
      pdVar23 = (dword *)0x0;
      uVar24 = 0;
      pdVar29 = (dword *)0x0;
      pdVar22 = param_3;
      if ((bRam0000000003eb486f & 1) == 0) {
        func_0x00f78a20(0x3d53980);
        func_0x00f78a20(0x3d2fb90);
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb486f = 1;
      }
      lVar13 = *(long *)(pdVar15 + 4);
      if (lVar13 != 0) {
        pdVar23 = (dword *)0x0;
        uVar24 = 0;
        pdVar14 = param_2;
        pdVar22 = param_3;
code_r0x02f87f38:
        pdStack_80 = (dword *)0x0;
        pdStack_78 = param_3;
        if ((bRam0000000003ebc64a & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64a = 1;
        }
        uStack_120 = 0x3ebc000;
        pdStack_118 = pdVar14;
        pdStack_110 = pdVar22;
        puStack_108 = (undefined *)uVar24;
        lStack_100 = lVar13;
        pdStack_f8 = pdVar23;
        if ((bRam0000000003ebc64e & 1) == 0) {
          func_0x00f78a20(0x3d3ddf0);
          func_0x00f78a20(0x3d3ddf8);
          bRam0000000003ebc64e = 1;
        }
        lVar30 = *(long *)(lVar13 + 0x78);
        if (lVar30 != 0) {
          iVar12 = *(int *)(lVar30 + 0x18);
          if (iVar12 < 1) {
            return (dword *)0x0;
          }
          iVar11 = 1;
          pdVar29 = (dword *)((long)&MACH_HEADER.magic + 1);
          do {
            if (*(uint *)(lVar30 + 0x18) <= iVar11 - 1U) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar30 = *(long *)(*(long *)(lVar30 + 0x10) + (long)(int)(iVar11 - 1U) * 0x20 + 0x20);
            if (lVar30 == 0) break;
            uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar30,pdVar14,5,0);
            if ((uVar18 & 1) != 0) {
              return pdVar29;
            }
            pdVar29 = (dword *)(ulong)(iVar11 < iVar12);
            if (iVar12 == iVar11) {
              return pdVar29;
            }
            lVar30 = *(long *)(lVar13 + 0x78);
            iVar11 = iVar11 + 1;
          } while (lVar30 != 0);
        }
        func_0x00f78af4();
        return (dword *)0x0;
      }
      auVar35 = func_0x00f78af4();
      pdVar14 = auVar35._8_8_;
      lVar13 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar13 != 0) goto code_r0x02f87f38;
      auVar35 = func_0x00f78af4();
      pdVar14 = auVar35._8_8_;
      puVar16 = &stack0xffffffffffffff90;
      lVar13 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar13 != 0) {
        pdVar23 = (dword *)0x0;
        pdStack_80 = pdVar15;
        pdStack_78 = param_2;
        if ((bRam0000000003ebc64b & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64b = 1;
        }
        lVar30 = *(long *)(lVar13 + 0x70);
        if (lVar30 != 0) {
          lVar19 = lVar30;
          if (*(uint *)(lVar30 + 0x18) <= auVar35._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar19 = *(long *)(lVar13 + 0x70);
          }
          if (lVar19 != 0) {
            lVar30 = *(long *)(lVar30 + 0x10) + (long)(int)auVar35._8_4_ * 0x28;
            puStack_c8 = *(undefined **)(lVar30 + 0x28);
            ppuStack_d0 = *(undefined1 ***)(lVar30 + 0x20);
            pdStack_b0 = (dword *)0x0;
            pdStack_a8 = (dword *)0x0;
            uStack_a0 = (undefined1 *)
                        CONCAT26(*(undefined2 *)(lVar30 + 0x46),
                                 CONCAT42(*(undefined4 *)(lVar30 + 0x42),1));
            ppdStack_c0 = (dword **)ppuStack_d0;
            pdStack_b8 = (dword *)puStack_c8;
            /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,pdVar14,&stack0xffffffffffffff40,uRam0000000003d3ddd0);
            pdVar29 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar13,pdVar14);
            return pdVar29;
          }
        }
        auVar35 = func_0x00f78af4();
        pdVar20 = auVar35._8_8_;
        ppdVar5 = &stack0xfffffffffffffef0;
        pdStack_110 = (dword *)0x0;
        puVar16 = &stack0xffffffffffffff10;
        puStack_108 = (undefined *)lVar30;
        lStack_100 = lVar13;
        pdStack_f8 = pdVar14;
        if ((bRam0000000003ebc64c & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64c = 1;
        }
        lVar13 = *(long *)(auVar35._0_8_ + 0x70);
        if (lVar13 != 0) {
          if (*(uint *)(lVar13 + 0x18) <= auVar35._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)auVar35._8_4_ * 0x28 + 0x28);
          if (lVar13 == 0) {
            pdVar29 = (dword *)0x0;
          }
          else {
            pdVar29 = *(dword **)(lVar13 + 0x40);
          }
          return pdVar29;
        }
        puVar34 = &Core_UI2_UIScreen__ForceExit;
        param_2 = (dword *)func_0x00f78af4();
        pdVar14 = (dword *)0x0;
        param_3 = (dword *)0x3ebc000;
        goto code_r0x02f882d8;
      }
      auVar35 = func_0x00f78af4();
      pdVar20 = auVar35._8_8_;
      ppdVar32 = &pdStack_80;
      pdStack_80 = (dword *)&stack0xffffffffffffff90;
      pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
      pdVar14 = *(dword **)(auVar35._0_8_ + 0x10);
      if (pdVar14 != (dword *)0x0) {
        pdVar23 = (dword *)0x0;
        puVar4 = &stack0xffffffffffffff90;
        puVar34 = &Atlas_UI_AtlasUIManager__ClearLayer;
        goto code_r0x02f877a8;
      }
      auVar35 = func_0x00f78af4();
      lVar13 = *(long *)(auVar35._0_8_ + 0x10);
      auVar35._8_8_ = auVar35._8_8_;
      auVar35._0_8_ = lVar13;
      if (lVar13 != 0) {
        ppdVar6 = &pdStack_80;
        puVar34 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
        pdVar20 = pdVar23;
        while( true ) {
          pdVar14 = auVar35._0_8_;
          puVar4 = (undefined1 *)((long)ppdVar6 + -0x30);
          *(dword **)((long)ppdVar6 + -0x30) = pdVar29;
          *(dword **)((long)ppdVar6 + -0x28) = param_3;
          *(dword **)((long)ppdVar6 + -0x20) = pdVar15;
          *(dword **)((long)ppdVar6 + -0x18) = param_2;
          *(dword ***)((long)ppdVar6 + -0x10) = ppdVar32;
          *(undefined **)((long)ppdVar6 + -8) = puVar34;
          puVar16 = (undefined1 *)((long)ppdVar6 + -0x10);
          puVar34 = &UNK_02f883d8;
          pdVar23 = pdVar20;
          param_2 = pdVar22;
          pdVar15 = pdVar20;
          param_3 = auVar35._8_8_;
          pdVar29 = pdVar14;
code_r0x02f877a8:
          ppdVar5 = (dword **)(puVar4 + -0x60);
          *(dword **)(puVar4 + -0x30) = pdVar29;
          *(dword **)(puVar4 + -0x28) = param_3;
          *(dword **)(puVar4 + -0x20) = pdVar15;
          *(dword **)(puVar4 + -0x18) = param_2;
          *(undefined1 **)(puVar4 + -0x10) = puVar16;
          *(undefined **)(puVar4 + -8) = puVar34;
          puVar16 = puVar4 + -0x10;
          pdVar15 = pdVar14;
          if ((bRam0000000003ebc64d & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            pdVar15 = (dword *)func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64d = 1;
          }
          uVar27 = (uint)pdVar20;
          if (((int)uVar27 < 0) || ((int)*(long *)(pdVar14 + 0x14) <= (int)uVar27)) {
            return pdVar15;
          }
          lVar13 = *(long *)(pdVar14 + 0x1c);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(lVar13 + 0x10) + ((ulong)pdVar20 & 0xffffffff) * 0x28;
          pdVar29 = *(dword **)(lVar13 + 0x20);
          param_2 = *(dword **)(lVar13 + 0x28);
          *(undefined4 *)(puVar4 + -0x60) = *(undefined4 *)(lVar13 + 0x42);
          *(undefined2 *)(puVar4 + -0x5c) = *(undefined2 *)(lVar13 + 0x46);
          if (param_2 == (dword *)0x0) {
            lVar13 = *(long *)(pdVar14 + 0x1c);
            if (lVar13 != 0) {
              *(dword **)(puVar4 + -0x58) = pdVar29;
              *(undefined8 *)(puVar4 + -0x50) = 0;
              *(undefined8 *)(puVar4 + -0x48) = 0;
              *(undefined8 *)(puVar4 + -0x40) = 0;
              *(undefined2 *)(puVar4 + -0x38) = 0;
              *(undefined4 *)(puVar4 + -0x36) = *(undefined4 *)(puVar4 + -0x60);
              *(undefined2 *)(puVar4 + -0x32) = *(undefined2 *)(puVar4 + -0x5c);
              pdVar29 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar13,pdVar20,puVar4 + -0x58,uRam0000000003d3ddd0)
              ;
              return pdVar29;
            }
            break;
          }
          puVar34 = &UNK_02f87848;
          param_3 = param_2;
code_r0x02f882d8:
          *(dword **)((long)ppdVar5 + -0x20) = pdVar14;
          *(dword **)((long)ppdVar5 + -0x18) = pdVar20;
          *(undefined1 **)((long)ppdVar5 + -0x10) = puVar16;
          *(undefined **)((long)ppdVar5 + -8) = puVar34;
          (**(code **)(*(long *)param_2 + 0x218))(param_2,*(undefined8 *)(*(long *)param_2 + 0x220))
          ;
          if (*(long *)(param_2 + 10) != 0) {
            /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(param_2 + 10),0);
            param_2[0x13] = 4;
            /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(param_2,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar29 = (dword *)(**(code **)(*(long *)param_2 + 0x228))
                                         (param_2,*(undefined8 *)(*(long *)param_2 + 0x230));
            return pdVar29;
          }
          func_0x00f78af4();
          ppdVar6 = (dword **)((long)ppdVar5 + -0x40);
          *(dword **)((long)ppdVar5 + -0x40) = pdVar14;
          *(dword **)((long)ppdVar5 + -0x38) = param_2;
          *(undefined1 **)((long)ppdVar5 + -0x30) = (undefined1 *)((long)ppdVar5 + -0x10);
          *(undefined **)((long)ppdVar5 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
          ppdVar32 = (dword **)((long)ppdVar5 + -0x30);
          if (extraout_x1 != (long *)0x0) {
            lVar13 = extraout_x1[5];
            /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
            uVar24 = (**(code **)(*extraout_x1 + 0x238))
                               (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
            extraout_x1[5] = 0;
            extraout_x1[6] = 0;
            extraout_x1[9] = _UNK_037235c0;
            extraout_x1[7] = 0;
            extraout_x1[8] = 0;
            /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar24,lVar13);
            pdVar29 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                         (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
            extraout_x1[0xb] = 0;
            return pdVar29;
          }
          puVar34 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
          auVar35 = func_0x00f78af4();
          pdVar20 = pdVar23;
          pdVar15 = pdVar14;
        }
        lVar13 = func_0x00f78af4();
        *(undefined8 *)(puVar4 + -0xa0) = unaff_d9;
        *(undefined8 *)(puVar4 + -0x98) = unaff_d8;
        *(dword **)(puVar4 + -0x90) = pdVar29;
        *(undefined8 *)(puVar4 + -0x88) = 0;
        *(dword **)(puVar4 + -0x80) = pdVar14;
        *(dword **)(puVar4 + -0x78) = pdVar20;
        *(undefined1 **)(puVar4 + -0x70) = puVar16;
        *(undefined **)(puVar4 + -0x68) = &Core_UI2_UIManager__Update;
        if ((bRam0000000003ebc647 & 1) == 0) {
          func_0x00f78a20(0x3d255c0);
          bRam0000000003ebc647 = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar24 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar24,0);
        if (0 < *(int *)(lVar13 + 0x50)) {
          iVar12 = 0;
          do {
            /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar13,iVar12);
            /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar13,iVar12);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar13 + 0x50));
        }
        /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar13);
        *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
        *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
        if (pcRam0000000003ec05a0 == (code *)0x0) {
          pcRam0000000003ec05a0 =
               (code *)func_0x00f789d4(
                                      "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar29 = (dword *)(*pcRam0000000003ec05a0)(uVar24);
        return pdVar29;
      }
      auVar35 = func_0x00f78af4();
      puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
      lVar13 = *(long *)(auVar35._0_8_ + 0x10);
      if (lVar13 == 0) {
        uStack_a0 = &stack0xffffffffffffff70;
        auVar35 = func_0x00f78af4();
        ppdVar32 = &stack0xffffffffffffff50;
        pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
        lVar13 = *(long *)(auVar35._0_8_ + 0x10);
        auVar36._8_8_ = auVar35._8_8_;
        auVar36._0_8_ = lVar13;
        if (lVar13 != 0) {
          pdVar22 = (dword *)0x0;
          ppuVar7 = (undefined1 **)&uStack_a0;
          puVar34 = &Atlas_UI_AtlasUIManager__GetLayerState;
          pdStack_b0 = (dword *)&uStack_a0;
          goto code_r0x02f884dc;
        }
        pdStack_b0 = (dword *)&uStack_a0;
        auVar35 = func_0x00f78af4();
        ppuVar33 = (undefined1 **)&stack0xffffffffffffff40;
        pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
        lVar13 = *(long *)(auVar35._0_8_ + 0x10);
        auVar37._8_8_ = auVar35._8_8_;
        auVar37._0_8_ = lVar13;
        if (lVar13 == 0) {
          ppdStack_c0 = &stack0xffffffffffffff50;
          auVar35 = func_0x00f78af4();
          puStack_c8 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          lVar13 = *(long *)(auVar35._0_8_ + 0x10);
          auVar38._8_8_ = auVar35._8_8_;
          auVar38._0_8_ = lVar13;
          if (lVar13 == 0) {
            ppuStack_d0 = (undefined1 **)&stack0xffffffffffffff40;
            pdVar29 = (dword *)func_0x00f78af4();
            lStack_100 = 0;
            pdStack_f8 = param_3;
            if ((bRam0000000003eb4871 & 1) == 0) {
              func_0x00f78a20(0x3d2fb80);
              func_0x00f78a20(0x3d1c478);
              bRam0000000003eb4871 = 1;
            }
            uVar24 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
            /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar24,uRam0000000003d2fb80);
            *(undefined8 *)(pdVar29 + 0xc) = uVar24;
            return pdVar29;
          }
          ppuVar9 = (undefined1 **)&stack0xffffffffffffff40;
          puVar34 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
          ppuStack_d0 = (undefined1 **)&stack0xffffffffffffff40;
          goto code_r0x02f88674;
        }
        ppdVar8 = &stack0xffffffffffffff50;
        puVar34 = &Atlas_UI_AtlasUIManager__EnableInput;
        pdVar22 = pdVar23;
        pdVar29 = param_3;
        ppdStack_c0 = &stack0xffffffffffffff50;
      }
      else {
        pdVar22 = (dword *)0x0;
        ppuVar7 = (undefined1 **)&stack0xffffffffffffff40;
        ppdStack_c0 = (dword **)0x0;
        puStack_98 = &Atlas_UI_AtlasUIManager__IsLayerReady;
        pdStack_b8 = param_3;
        pdStack_b0 = pdVar15;
        pdStack_a8 = param_2;
        uStack_a0 = &stack0xffffffffffffff70;
        if ((bRam0000000003ebc64f & 1) == 0) {
          uStack_a0 = &stack0xffffffffffffff70;
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc64f = 1;
        }
        uVar27 = auVar35._8_4_;
        if (((int)uVar27 < 0) || (*(int *)(lVar13 + 0x50) <= (int)uVar27)) {
          return (dword *)0x0;
        }
        lVar13 = *(long *)(lVar13 + 0x70);
        if (lVar13 != 0) {
          if (*(uint *)(lVar13 + 0x18) <= uVar27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar30 = *(long *)(lVar13 + 0x10) + ((ulong)auVar35._8_8_ & 0xffffffff) * 0x28;
          lVar13 = *(long *)(lVar30 + 0x28);
          cVar2 = *(char *)(lVar30 + 0x40);
          iVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar30 + 0x30),0);
          if (iVar12 == 0 || cVar2 != '\0') {
            return (dword *)0x0;
          }
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0x4c) != 2)) {
            return (dword *)0x0;
          }
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        puVar34 = &Core_UI2_UIManager__GetLayerState;
        auVar36 = func_0x00f78af4();
        pdVar15 = (dword *)0x0;
        param_2 = auVar35._8_8_;
        param_3 = (dword *)0x3ebc000;
code_r0x02f884dc:
        ppdVar8 = (dword **)((long)ppuVar7 + -0x30);
        *(undefined8 *)((long)ppuVar7 + -0x30) = 0;
        *(dword **)((long)ppuVar7 + -0x28) = param_3;
        *(dword **)((long)ppuVar7 + -0x20) = pdVar15;
        *(dword **)((long)ppuVar7 + -0x18) = param_2;
        *(undefined8 **)((long)ppuVar7 + -0x10) = &uStack_a0;
        *(undefined **)((long)ppuVar7 + -8) = puVar34;
        ppdVar32 = (dword **)((long)ppuVar7 + -0x10);
        if ((bRam0000000003ebc650 & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc650 = 1;
        }
        lVar13 = *(long *)(auVar36._0_8_ + 0x70);
        if (lVar13 != 0) {
          if (*(uint *)(lVar13 + 0x18) <= auVar36._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)auVar36._8_4_ * 0x28 + 0x28);
          if (lVar13 == 0) {
            pdVar29 = &MACH_HEADER.cputype;
          }
          else {
            pdVar29 = (dword *)(ulong)*(uint *)(lVar13 + 0x4c);
          }
          return pdVar29;
        }
        puVar34 = &Core_UI2_UIManager__EnableInput;
        auVar37 = func_0x00f78af4();
        pdVar15 = (dword *)0x0;
        param_2 = auVar36._8_8_;
        pdVar29 = (dword *)0x3ebc000;
      }
      pdVar14 = auVar37._8_8_;
      param_3 = auVar37._0_8_;
      ppuVar9 = (undefined1 **)((long)ppdVar8 + -0x40);
      *(undefined8 *)((long)ppdVar8 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppdVar8 + -0x38) = 0x3eb4000;
      *(undefined8 *)((long)ppdVar8 + -0x30) = 0;
      *(dword **)((long)ppdVar8 + -0x28) = pdVar29;
      *(dword **)((long)ppdVar8 + -0x20) = pdVar15;
      *(dword **)((long)ppdVar8 + -0x18) = param_2;
      *(dword ***)((long)ppdVar8 + -0x10) = ppdVar32;
      *(undefined **)((long)ppdVar8 + -8) = puVar34;
      ppuVar33 = (undefined1 **)((long)ppdVar8 + -0x10);
      pdVar29 = (dword *)0x3ebc000;
      pdVar23 = pdVar22;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(param_3 + 0x1a) != 0) {
        pdVar23 = (dword *)(ulong)((uint)pdVar22 ^ 1);
        pdVar15 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(param_3 + 0x1a),pdVar14,pdVar23,0);
        lVar13 = *(long *)(param_3 + 0x1c);
        pdVar29 = (dword *)0x0;
        if (lVar13 != 0) {
          uVar27 = auVar37._8_4_;
          if (*(uint *)(lVar13 + 0x18) <= uVar27) {
            pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) ||
             (pdVar29 = *(dword **)(param_3 + 0xc), pdVar29 == (dword *)0x0)) {
            return pdVar15;
          }
          lVar13 = *(long *)(param_3 + 0x1c);
          param_3 = (dword *)0x0;
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar27) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar21 = *(long **)(*(long *)(lVar13 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
            *(undefined8 *)((long)ppdVar8 + -0x60) = unaff_x28;
            *(undefined8 *)((long)ppdVar8 + -0x58) = unaff_x27;
            *(undefined8 *)((long)ppdVar8 + -0x50) = unaff_x26;
            *(undefined8 *)((long)ppdVar8 + -0x48) = unaff_x25;
            *(undefined8 *)((long)ppdVar8 + -0x40) = *(undefined8 *)((long)ppdVar8 + -0x40);
            *(undefined8 *)((long)ppdVar8 + -0x38) = *(undefined8 *)((long)ppdVar8 + -0x38);
            *(undefined8 *)((long)ppdVar8 + -0x30) = *(undefined8 *)((long)ppdVar8 + -0x30);
            *(undefined8 *)((long)ppdVar8 + -0x28) = *(undefined8 *)((long)ppdVar8 + -0x28);
            *(undefined8 *)((long)ppdVar8 + -0x20) = *(undefined8 *)((long)ppdVar8 + -0x20);
            *(undefined8 *)((long)ppdVar8 + -0x18) = *(undefined8 *)((long)ppdVar8 + -0x18);
            *(undefined8 *)((long)ppdVar8 + -0x10) = *(undefined8 *)((long)ppdVar8 + -0x10);
            *(undefined8 *)((long)ppdVar8 + -8) = *(undefined8 *)((long)ppdVar8 + -8);
            *(dword **)((long)ppdVar8 + -0x68) = pdVar29;
            lVar13 = *(long *)(pdVar29 + 0x1a);
            if (lVar13 == 0) {
              puVar16 = (undefined1 *)((long)ppdVar8 + -0x68);
              lVar30 = 1;
            }
            else {
              lVar30 = *(long *)(lVar13 + 0x18);
              if (lVar30 == 0) {
                return pdVar29;
              }
              puVar16 = (undefined1 *)(lVar13 + 0x20);
            }
            lVar13 = 0;
            do {
              lVar19 = *(long *)(puVar16 + lVar13 * 8);
              pcVar31 = *(code **)(lVar19 + 0x10);
              plVar1 = *(long **)(lVar19 + 0x20);
              lVar19 = *(long *)(lVar19 + 0x28);
              if (*(short *)(lVar19 + 0x48) == -1) {
                func_0x00f78ad8(lVar19);
              }
              iVar12 = func_0x00f78a4c(lVar19);
              bVar10 = *(char *)(lVar19 + 0x4a) == '\x03';
              if (iVar12 == 0) {
                if (bVar10) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    pdVar15 = (dword *)(*pcVar31)(plVar21,pdVar14,pdVar22,lVar19);
                  }
                  else {
                    if (((*(short *)(lVar19 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar29 + 6) == 0))
                    goto code_r0x01e71aac;
                    iVar12 = func_0x00f78a44(lVar19);
                    iVar11 = func_0x00f78ec0(lVar19);
                    if (iVar12 == 0) {
                      uVar3 = *(ushort *)(lVar19 + 0x48);
                      if (iVar11 == 0) {
                        lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                        pdVar15 = (dword *)(**(code **)(lVar19 + 0x138))
                                                     (plVar1,plVar21,pdVar14,pdVar22,
                                                      *(undefined8 *)(lVar19 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar19 = func_0x00f78a48(lVar19);
                      lVar25 = *plVar1;
                      uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
                      if (uVar18 != 0) {
                        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == lVar19) {
                            puVar17 = (undefined8 *)
                                      (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar26 = piVar26 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                      pcVar31 = (code *)*puVar17;
                      puVar17 = (undefined8 *)puVar17[1];
                    }
                    else {
                      if (iVar11 == 0) {
                        uVar24 = *(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar25 = *plVar1;
                        uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
                        if (uVar18 != 0) {
                          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                              lVar25 = lVar25 + (long)(int)(*piVar26 +
                                                           (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar26 = piVar26 + 4;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar24 = *(undefined8 *)(lVar25 + 8);
                      }
                      puVar17 = (undefined8 *)func_0x00f78acc(uVar24,lVar19);
                      pcVar31 = (code *)*puVar17;
                    }
                    pdVar15 = (dword *)(*pcVar31)(plVar1,plVar21,pdVar14,pdVar22,puVar17);
                  }
                }
                else {
                  if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar29 + 6) == 0))
                  goto code_r0x01e71bbc;
                  iVar12 = func_0x00f78a44(lVar19);
                  iVar11 = func_0x00f78ec0(lVar19);
                  if (iVar12 == 0) {
                    uVar3 = *(ushort *)(lVar19 + 0x48);
                    if (iVar11 == 0) {
                      lVar19 = *plVar21 + (ulong)uVar3 * 0x10;
                      pdVar15 = (dword *)(**(code **)(lVar19 + 0x138))
                                                   (plVar21,pdVar14,pdVar22,
                                                    *(undefined8 *)(lVar19 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar19 = func_0x00f78a48(lVar19);
                    lVar25 = *plVar21;
                    uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
                    if (uVar18 != 0) {
                      piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == lVar19) {
                          puVar17 = (undefined8 *)
                                    (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar26 = piVar26 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    puVar17 = (undefined8 *)func_0x00fac1f0(plVar21,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                    pcVar31 = (code *)*puVar17;
                    puVar17 = (undefined8 *)puVar17[1];
                  }
                  else {
                    if (iVar11 == 0) {
                      uVar24 = *(undefined8 *)
                                (*plVar21 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar25 = *plVar21;
                      uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
                      if (uVar18 != 0) {
                        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                            lVar25 = lVar25 + (long)(int)(*piVar26 +
                                                         (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar26 = piVar26 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      lVar25 = func_0x00fac1f0(plVar21);
code_r0x01e71cd8:
                      uVar24 = *(undefined8 *)(lVar25 + 8);
                    }
                    puVar17 = (undefined8 *)func_0x00f78acc(uVar24,lVar19);
                    pcVar31 = (code *)*puVar17;
                  }
                  pdVar15 = (dword *)(*pcVar31)(plVar21,pdVar14,pdVar22,puVar17);
                }
              }
              else {
                if (bVar10) goto code_r0x01e71bbc;
code_r0x01e71aac:
                pdVar15 = (dword *)(*pcVar31)(plVar1,plVar21,pdVar14,pdVar22,lVar19);
              }
code_r0x01e71bd0:
              lVar13 = lVar13 + 1;
              if (lVar13 == lVar30) {
                return pdVar15;
              }
            } while( true );
          }
        }
      }
      puVar34 = &Core_UI2_UIManager__SetScreenVisible;
      auVar38 = func_0x00f78af4();
      param_2 = pdVar22;
      pdVar15 = pdVar14;
code_r0x02f88674:
      pdVar22 = auVar38._0_8_;
      *(dword **)((long)ppuVar9 + -0x30) = pdVar29;
      *(dword **)((long)ppuVar9 + -0x28) = param_3;
      *(dword **)((long)ppuVar9 + -0x20) = pdVar15;
      *(dword **)((long)ppuVar9 + -0x18) = param_2;
      *(undefined1 ***)((long)ppuVar9 + -0x10) = ppuVar33;
      *(undefined **)((long)ppuVar9 + -8) = puVar34;
      pdVar29 = pdVar22;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pdVar29 = (dword *)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar13 = *(long *)(pdVar22 + 0x1c);
      if (lVar13 != 0) {
        uVar27 = auVar38._8_4_;
        if (*(uint *)(lVar13 + 0x18) <= uVar27) {
          pdVar29 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28) == 0) {
          return pdVar29;
        }
        lVar13 = *(long *)(pdVar22 + 0x1c);
        if (lVar13 != 0) {
          if (*(uint *)(lVar13 + 0x18) <= uVar27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar27 * 0x28 + 0x28);
          if ((lVar13 != 0) && (plVar21 = *(long **)(lVar13 + 0x28), plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pdVar29 = (dword *)(**(code **)(*plVar21 + 0x178))
                                         (plVar21,pdVar23,*(undefined8 *)(*plVar21 + 0x180));
            return pdVar29;
          }
        }
      }
      auVar35 = func_0x00f78af4();
      uVar24 = auVar35._0_8_;
      *(long *)((long)ppuVar9 + -0x50) = auVar38._8_8_;
      *(dword **)((long)ppuVar9 + -0x48) = pdVar23;
      *(undefined1 **)((long)ppuVar9 + -0x40) = (undefined1 *)((long)ppuVar9 + -0x10);
      *(undefined **)((long)ppuVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)((long)ppuVar9 + -0x68) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x70) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar9 + -0x60) = 0;
      pdVar29 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar24,auVar35._8_8_,(undefined1 *)((long)ppuVar9 + -0x70))
      ;
      if ((int)pdVar29 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar24,*(undefined8 *)((long)ppuVar9 + -0x60),
                        *(undefined8 *)((long)ppuVar9 + -0x58));
        *(undefined8 *)((long)ppuVar9 + -0x88) = *(undefined8 *)((long)ppuVar9 + -0x68);
        *(undefined8 *)((long)ppuVar9 + -0x90) = *(undefined8 *)((long)ppuVar9 + -0x70);
        *(undefined8 *)((long)ppuVar9 + -0x78) = *(undefined8 *)((long)ppuVar9 + -0x58);
        *(undefined8 *)((long)ppuVar9 + -0x80) = *(undefined8 *)((long)ppuVar9 + -0x60);
        pdVar29 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar24,(undefined1 *)((long)ppuVar9 + -0x90),1);
      }
      return pdVar29;
    }
  }
  auVar35 = func_0x00f78af4();
  uVar28 = auVar35._8_8_;
  uVar24 = auVar35._0_8_;
  if ((bRam0000000003eb5155 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5155 = 1;
  }
  lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar24,uRam0000000003d40628);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
    *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18) = uVar28;
    lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar24,uRam0000000003d40628);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
      *(dword **)(*(long *)(lVar13 + 0x18) + 0x20) = pdVar29;
      lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar24,uRam0000000003d40628);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
        uVar28 = 0x3d21000;
        *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x10) = 4;
        lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(uVar24,uRam0000000003d40628);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar29 = (dword *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(pdVar29,0);
        if (lVar13 != 0) {
          *(dword **)(lVar13 + 0x28) = pdVar29;
          return pdVar29;
        }
      }
    }
  }
  auVar35 = func_0x00f78af4();
  puVar16 = auVar35._8_8_;
  lVar13 = auVar35._0_8_;
  uStack_a0 = (undefined1 *)0x3d40628;
  pdStack_78 = (dword *)&Atlas_Contexts_FrontEndContextSingleplayerState__DifficultySelected;
  uVar24 = 0x3eb5000;
  puStack_98 = (undefined *)uVar28;
  pdStack_80 = (dword *)&stack0xffffffffffffffc0;
  if ((bRam0000000003eb5158 & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5158 = 1;
  }
  if ((*(long *)(lVar13 + 0x90) != 0) &&
     (lVar30 = *(long *)(*(long *)(lVar13 + 0x90) + 0x10), lVar30 != 0)) {
    uVar24 = 0x3d40000;
    puVar16 = (undefined1 *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar30,puVar16,uRam0000000003d57278);
    pdVar29 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar13,uRam0000000003d40628);
    if ((pdVar29 != (dword *)0x0) && (*(long *)(pdVar29 + 6) != 0)) {
      *(undefined1 **)(*(long *)(pdVar29 + 6) + 0x70) = puVar16;
      return pdVar29;
    }
  }
  auVar35 = func_0x00f78af4();
  uVar28 = auVar35._8_8_;
  lVar30 = auVar35._0_8_;
  ppuStack_d0 = (undefined1 **)0x3d40628;
  pdStack_a8 = (dword *)&Atlas_Contexts_FrontEndContextSingleplayerState__ArcadeModeSelected;
  puStack_c8 = (undefined *)uVar24;
  ppdStack_c0 = (dword **)puVar16;
  pdStack_b8 = (dword *)lVar13;
  pdStack_b0 = (dword *)&pdStack_80;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  pdVar29 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d40628);
  if ((pdVar29 == (dword *)0x0) || (*(long *)(pdVar29 + 6) == 0)) goto code_r0x01592990;
  *(int *)(*(long *)(pdVar29 + 6) + 0x10) = auVar35._8_4_;
  if (auVar35._8_4_ == 4) {
    return pdVar29;
  }
  lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d40628);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) goto code_r0x01592990;
  iVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
  if (*(long *)(lVar30 + 0x90) == 0) goto code_r0x01592990;
  lVar13 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar30 + 0x90),uVar28,0);
  lVar25 = *(long *)(lVar30 + 0x90);
  lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d40628);
  if ((lVar19 == 0) || (*(long *)(lVar19 + 0x18) == 0)) goto code_r0x01592990;
  uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0x18) + 0x20);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar24 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar24,0);
  if (lVar25 == 0) goto code_r0x01592990;
  lVar19 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(lVar25,uVar24,uVar28,0);
  if (iVar12 == 0) {
    if ((lVar13 == 0) || (lVar19 == 0)) goto code_r0x01592990;
    uVar28 = *(undefined8 *)(lVar13 + 0x50);
    puVar17 = (undefined8 *)(lVar19 + 0x30);
    pdStack_f8 = (dword *)*puVar17;
    iVar12 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&pdStack_f8,0);
    if (iVar12 != 0) goto code_r0x015928d0;
  }
  else {
    if ((lVar13 == 0) || (lVar19 == 0)) goto code_r0x01592990;
    uVar28 = *(undefined8 *)(lVar13 + 0x58);
    puVar17 = (undefined8 *)(lVar19 + 0x38);
    pdStack_f8 = (dword *)*puVar17;
    uVar18 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&pdStack_f8,0);
    if ((uVar18 & 1) != 0) {
code_r0x015928d0:
      uVar28 = *puVar17;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar29 = (dword *)/*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar28,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  if ((int)pdVar29 == 0) {
    return pdVar29;
  }
  if ((*(long *)(lVar30 + 0x90) != 0) &&
     (lVar13 = *(long *)(*(long *)(lVar30 + 0x90) + 0x10), lVar13 != 0)) {
    uVar28 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uVar28,uRam0000000003d57278);
    pdVar29 = (dword *)/*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar30,uRam0000000003d40628);
    if ((pdVar29 != (dword *)0x0) && (*(long *)(pdVar29 + 6) != 0)) {
      *(undefined8 *)(*(long *)(pdVar29 + 6) + 0x70) = uVar28;
      return pdVar29;
    }
  }
code_r0x01592990:
  lVar13 = func_0x00f78af4();
  puStack_108 = &Atlas_Contexts_FrontEndContextSingleplayerState__EnterLoadOutState;
  uStack_120 = uVar28;
  pdStack_118 = (dword *)lVar30;
  pdStack_110 = (dword *)&stack0xffffffffffffff50;
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar30 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar13,uRam0000000003d40628);
  if (lVar30 == 0) {
    lVar13 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar13 = *(long *)(lVar13 + 0xb0);
    if (lVar13 == 0) {
      pdVar29 = (dword *)&Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar13 = func_0x00f78af4();
    }
    else {
      pdVar29 = (dword *)&UNK_01592b20;
    }
    pdStack_168 = pdVar29;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar13 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar24 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar13);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar24 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar13,uVar24);
    uVar28 = *(undefined8 *)(lVar13 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pdVar29 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar28,0);
    if ((int)pdVar29 == 0) {
      return pdVar29;
    }
    plVar21 = *(long **)(lVar13 + 200);
    if (plVar21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar29 = (dword *)(**(code **)(*plVar21 + 0x198))
                                   (plVar21,uVar24,*(undefined8 *)(*plVar21 + 0x1a0));
      return pdVar29;
    }
    auVar35 = func_0x00f78af4();
    plVar21 = auVar35._8_8_;
    pdVar15 = auVar35._0_8_;
    pdVar29 = pdVar15;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      pdVar29 = (dword *)func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar21 != (long *)0x0) && (*plVar21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      pdVar29 = (dword *)func_0x00f78e5c(plVar21);
      return pdVar29;
    }
    lVar13 = *(long *)(pdVar15 + 0x24);
    if (lVar13 != 0) {
      uVar27 = 0;
      while( true ) {
        if (*(int *)(lVar13 + 0x18) <= (int)uVar27) {
          return pdVar29;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar13 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar21,uRam0000000003d5b098);
        lVar30 = *(long *)(pdVar15 + 0x24);
        if ((lVar30 == 0) || (lVar13 == 0)) break;
        uVar24 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar13,uRam0000000003d578b8);
        if (*(uint *)(lVar30 + 0x18) <= uVar27) {
code_r0x015947cc:
          uVar24 = func_0x00f78b24();
          func_0x00f78ac0(uVar24,0);
          goto code_r0x015947d8;
        }
        lVar19 = (long)(int)uVar27;
        *(undefined8 *)(lVar30 + lVar19 * 0x40 + 0x40) = uVar24;
        lVar13 = *(long *)(pdVar15 + 0x24);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar27) goto code_r0x015947cc;
        lVar13 = *(long *)(lVar13 + lVar19 * 0x40 + 0x40);
        if (lVar13 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar13,0);
        lVar13 = *(long *)(pdVar15 + 0x24);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar27) goto code_r0x015947cc;
        lVar13 = *(long *)(lVar13 + lVar19 * 0x40 + 0x40);
        if (lVar13 == 0) break;
        uVar24 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
        lVar13 = *(long *)(pdVar15 + 0x24);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar27) goto code_r0x015947cc;
        lVar13 = *(long *)(lVar13 + lVar19 * 0x40 + 0x20);
        if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) ||
           (lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0), lVar13 == 0)) break;
        uVar27 = uVar27 + 1;
        pdVar29 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar13,uVar24,0,0);
        lVar13 = *(long *)(pdVar15 + 0x24);
        if (lVar13 == 0) break;
      }
    }
    pdVar29 = (dword *)func_0x00f78af4();
    return pdVar29;
  }
  uVar24 = *(undefined8 *)(lVar30 + 0x18);
  uVar28 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  pdVar29 = (dword *)Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor
                               (uVar28,uVar24,1,0);
  uVar24 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  pdVar15 = *(dword **)(lVar13 + 0x78);
  if (pdVar15 == (dword *)0x0) {
    return pdVar29;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar21 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
  pdStack_168 = pdVar15;
  lVar13 = *(long *)(pdVar15 + 0x1a);
  if (lVar13 == 0) {
    ppdVar32 = &pdStack_168;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar13 + 0x18);
    if (lVar30 == 0) {
      return pdVar15;
    }
    ppdVar32 = (dword **)(lVar13 + 0x20);
  }
  lVar13 = 0;
  do {
    pdVar29 = ppdVar32[lVar13];
    pcVar31 = *(code **)(pdVar29 + 4);
    plVar1 = *(long **)(pdVar29 + 8);
    lVar19 = *(long *)(pdVar29 + 10);
    if (*(short *)(lVar19 + 0x48) == -1) {
      func_0x00f78ad8(lVar19);
    }
    iVar12 = func_0x00f78a4c(lVar19);
    bVar10 = *(char *)(lVar19 + 0x4a) == '\x03';
    if (iVar12 == 0) {
      if (bVar10) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          pdVar29 = (dword *)(*pcVar31)(plVar21,0,uVar28,lVar19);
        }
        else {
          if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(pdVar15 + 6) == 0)) goto code_r0x01e7162c;
          iVar12 = func_0x00f78a44(lVar19);
          iVar11 = func_0x00f78ec0(lVar19);
          if (iVar12 == 0) {
            uVar3 = *(ushort *)(lVar19 + 0x48);
            if (iVar11 == 0) {
              lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
              pdVar29 = (dword *)(**(code **)(lVar19 + 0x138))
                                           (plVar1,plVar21,0,uVar28,*(undefined8 *)(lVar19 + 0x140))
              ;
              goto code_r0x01e71750;
            }
            lVar19 = func_0x00f78a48(lVar19);
            lVar25 = *plVar1;
            uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
            if (uVar18 != 0) {
              piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar19) {
                  puVar17 = (undefined8 *)
                            (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar26 = piVar26 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e718f4:
            pcVar31 = (code *)*puVar17;
            puVar17 = (undefined8 *)puVar17[1];
          }
          else {
            if (iVar11 == 0) {
              uVar24 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar25 = *plVar1;
              uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
              if (uVar18 != 0) {
                piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                    lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar26 = piVar26 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar25 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar24 = *(undefined8 *)(lVar25 + 8);
            }
            puVar17 = (undefined8 *)func_0x00f78acc(uVar24,lVar19);
            pcVar31 = (code *)*puVar17;
          }
          pdVar29 = (dword *)(*pcVar31)(plVar1,plVar21,0,uVar28,puVar17);
        }
      }
      else {
        if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar15 + 6) == 0))
        goto code_r0x01e7173c;
        iVar12 = func_0x00f78a44(lVar19);
        iVar11 = func_0x00f78ec0(lVar19);
        if (iVar12 == 0) {
          uVar3 = *(ushort *)(lVar19 + 0x48);
          if (iVar11 == 0) {
            lVar19 = *plVar21 + (ulong)uVar3 * 0x10;
            pdVar29 = (dword *)(**(code **)(lVar19 + 0x138))
                                         (plVar21,0,uVar28,*(undefined8 *)(lVar19 + 0x140));
            goto code_r0x01e71750;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar25 = *plVar21;
          uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar18 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == lVar19) {
                puVar17 = (undefined8 *)
                          (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar26 = piVar26 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar21,lVar19,(ulong)uVar3);
code_r0x01e71880:
          pcVar31 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar11 == 0) {
            uVar24 = *(undefined8 *)(*plVar21 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar25 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar25 + 0x12a);
            if (uVar18 != 0) {
              piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71858;
                }
                piVar26 = piVar26 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            lVar25 = func_0x00fac1f0(plVar21);
code_r0x01e71858:
            uVar24 = *(undefined8 *)(lVar25 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar24,lVar19);
          pcVar31 = (code *)*puVar17;
        }
        pdVar29 = (dword *)(*pcVar31)(plVar21,0,uVar28,puVar17);
      }
    }
    else {
      if (bVar10) goto code_r0x01e7173c;
code_r0x01e7162c:
      pdVar29 = (dword *)(*pcVar31)(plVar1,plVar21,0,uVar28,lVar19);
    }
code_r0x01e71750:
    lVar13 = lVar13 + 1;
    if (lVar13 == lVar30) {
      return pdVar29;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15925b4 | Atlas.Contexts.FrontEndContextSingleplayerState.MapSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */

void Atlas_Contexts_FrontEndContextSingleplayerState__MapSelected
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined *puStack_138;
  undefined8 uStack_c8;
  
  if ((bRam0000000003eb5155 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5155 = 1;
  }
  lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18) = param_2;
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x20) = param_3;
      lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
        *(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x10) = 4;
        lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_3,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar7;
          return;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  if ((bRam0000000003eb5158 & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5158 = 1;
  }
  lVar6 = *(long *)(auVar21._0_8_ + 0x90);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,auVar21._8_8_,uRam0000000003d57278);
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(auVar21._0_8_,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x70) = uVar7;
      return;
    }
  }
  auVar21 = func_0x00f78af4();
  lVar6 = auVar21._0_8_;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01592990;
  *(int *)(*(long *)(lVar8 + 0x18) + 0x10) = auVar21._8_4_;
  if (auVar21._8_4_ == 4) {
    return;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01592990;
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
  if (*(long *)(lVar6 + 0x90) == 0) goto code_r0x01592990;
  lVar8 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar6 + 0x90),auVar21._8_8_,0);
  lVar17 = *(long *)(lVar6 + 0x90);
  lVar9 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01592990;
  uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x20);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
  if (lVar17 == 0) goto code_r0x01592990;
  lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(lVar17,uVar7,auVar21._8_8_,0);
  if (iVar4 == 0) {
    if ((lVar8 == 0) || (lVar9 == 0)) goto code_r0x01592990;
    uVar7 = *(undefined8 *)(lVar8 + 0x50);
    puVar18 = (undefined8 *)(lVar9 + 0x30);
    uStack_c8 = *puVar18;
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_c8,0);
    if (iVar4 != 0) goto code_r0x015928d0;
  }
  else {
    if ((lVar8 == 0) || (lVar9 == 0)) goto code_r0x01592990;
    uVar7 = *(undefined8 *)(lVar8 + 0x58);
    puVar18 = (undefined8 *)(lVar9 + 0x38);
    uStack_c8 = *puVar18;
    uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_c8,0);
    if ((uVar10 & 1) != 0) {
code_r0x015928d0:
      uVar7 = *puVar18;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar7,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  if (iVar4 == 0) {
    return;
  }
  if ((*(long *)(lVar6 + 0x90) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar6 + 0x90) + 0x10), lVar8 != 0)) {
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar7,uRam0000000003d57278);
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x70) = uVar7;
      return;
    }
  }
code_r0x01592990:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if (lVar8 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 == 0) {
      puVar15 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar6 = func_0x00f78af4();
    }
    else {
      puVar15 = &UNK_01592b20;
    }
    puStack_138 = puVar15;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar6 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar7 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar6);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar7 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar6,uVar7);
    uVar11 = *(undefined8 *)(lVar6 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
    if (iVar4 == 0) {
      return;
    }
    plVar12 = *(long **)(lVar6 + 200);
    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x198))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x1a0));
      return;
    }
    auVar21 = func_0x00f78af4();
    plVar12 = auVar21._8_8_;
    lVar6 = auVar21._0_8_;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      func_0x00f78e5c(plVar12);
      return;
    }
    lVar8 = *(long *)(lVar6 + 0x90);
    if (lVar8 != 0) {
      uVar16 = 0;
      while( true ) {
        if (*(int *)(lVar8 + 0x18) <= (int)uVar16) {
          return;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar12,uRam0000000003d5b098);
        lVar9 = *(long *)(lVar6 + 0x90);
        if ((lVar9 == 0) || (lVar8 == 0)) break;
        uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578b8);
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
code_r0x015947cc:
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto code_r0x015947d8;
        }
        lVar17 = (long)(int)uVar16;
        *(undefined8 *)(lVar9 + lVar17 * 0x40 + 0x40) = uVar7;
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x40);
        if (lVar8 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar8,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x40);
        if (lVar8 == 0) break;
        uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x20);
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) ||
           (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0), lVar8 == 0)) break;
        uVar16 = uVar16 + 1;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,uVar7,0,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
      }
    }
    func_0x00f78af4();
    return;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar11,uVar7,1,0);
  uVar7 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  puVar15 = *(undefined **)(lVar6 + 0x78);
  if (puVar15 == (undefined *)0x0) {
    return;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  puStack_138 = puVar15;
  lVar6 = *(long *)(puVar15 + 0x68);
  if (lVar6 == 0) {
    ppuVar20 = &puStack_138;
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x18);
    if (lVar8 == 0) {
      return;
    }
    ppuVar20 = (undefined **)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    puVar13 = ppuVar20[lVar6];
    pcVar19 = *(code **)(puVar13 + 0x10);
    plVar1 = *(long **)(puVar13 + 0x20);
    lVar9 = *(long *)(puVar13 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar4 = func_0x00f78a4c(lVar9);
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          (*pcVar19)(plVar12,0,uVar11,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(puVar15 + 0x18) == 0)) goto code_r0x01e7162c;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar1,plVar12,0,uVar11,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x01e71750;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar17 = *plVar1;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar18 = (undefined8 *)
                            (lVar17 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar14 = piVar14 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01e718f4:
            pcVar19 = (code *)*puVar18;
            puVar18 = (undefined8 *)puVar18[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar17 = *plVar1;
              uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar10 != 0) {
                piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar14 = piVar14 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              lVar17 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar7 = *(undefined8 *)(lVar17 + 8);
            }
            puVar18 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
            pcVar19 = (code *)*puVar18;
          }
          (*pcVar19)(plVar1,plVar12,0,uVar11,puVar18);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(puVar15 + 0x18) == 0))
        goto code_r0x01e7173c;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *plVar12 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar12,0,uVar11,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x01e71750;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar17 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar10 != 0) {
            piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar18 = (undefined8 *)
                          (lVar17 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar14 = piVar14 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar12,lVar9,(ulong)uVar2);
code_r0x01e71880:
          pcVar19 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar17 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x01e71858;
                }
                piVar14 = piVar14 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            lVar17 = func_0x00fac1f0(plVar12);
code_r0x01e71858:
            uVar7 = *(undefined8 *)(lVar17 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
          pcVar19 = (code *)*puVar18;
        }
        (*pcVar19)(plVar12,0,uVar11,puVar18);
      }
    }
    else {
      if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
      (*pcVar19)(plVar1,plVar12,0,uVar11,lVar9);
    }
code_r0x01e71750:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar8) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15926bc | Atlas.Contexts.FrontEndContextSingleplayerState.DifficultySelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */

void Atlas_Contexts_FrontEndContextSingleplayerState__DifficultySelected
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  int *piVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined *puStack_f8;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb5158 & 1) == 0) {
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    bRam0000000003eb5158 = 1;
  }
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar6 != 0)) {
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,param_2,uRam0000000003d57278);
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x70) = uVar7;
      return;
    }
  }
  auVar21 = func_0x00f78af4();
  lVar6 = auVar21._0_8_;
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01592990;
  *(int *)(*(long *)(lVar8 + 0x18) + 0x10) = auVar21._8_4_;
  if (auVar21._8_4_ == 4) {
    return;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01592990;
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
  if (*(long *)(lVar6 + 0x90) == 0) goto code_r0x01592990;
  lVar8 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(lVar6 + 0x90),auVar21._8_8_,0);
  lVar17 = *(long *)(lVar6 + 0x90);
  lVar9 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01592990;
  uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x20);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
  if (lVar17 == 0) goto code_r0x01592990;
  lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(lVar17,uVar7,auVar21._8_8_,0);
  if (iVar4 == 0) {
    if ((lVar8 == 0) || (lVar9 == 0)) goto code_r0x01592990;
    uVar7 = *(undefined8 *)(lVar8 + 0x50);
    puVar18 = (undefined8 *)(lVar9 + 0x30);
    uStack_88 = *puVar18;
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_88,0);
    if (iVar4 != 0) goto code_r0x015928d0;
  }
  else {
    if ((lVar8 == 0) || (lVar9 == 0)) goto code_r0x01592990;
    uVar7 = *(undefined8 *)(lVar8 + 0x58);
    puVar18 = (undefined8 *)(lVar9 + 0x38);
    uStack_88 = *puVar18;
    uVar10 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_88,0);
    if ((uVar10 & 1) != 0) {
code_r0x015928d0:
      uVar7 = *puVar18;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar7,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  if (iVar4 == 0) {
    return;
  }
  if ((*(long *)(lVar6 + 0x90) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar6 + 0x90) + 0x10), lVar8 != 0)) {
    uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar7,uRam0000000003d57278);
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x70) = uVar7;
      return;
    }
  }
code_r0x01592990:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if (lVar8 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 == 0) {
      puVar15 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar6 = func_0x00f78af4();
    }
    else {
      puVar15 = &UNK_01592b20;
    }
    puStack_f8 = puVar15;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar6 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar7 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar6);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar7 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar6,uVar7);
    uVar11 = *(undefined8 *)(lVar6 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
    if (iVar4 == 0) {
      return;
    }
    plVar12 = *(long **)(lVar6 + 200);
    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x198))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x1a0));
      return;
    }
    auVar21 = func_0x00f78af4();
    plVar12 = auVar21._8_8_;
    lVar6 = auVar21._0_8_;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      func_0x00f78e5c(plVar12);
      return;
    }
    lVar8 = *(long *)(lVar6 + 0x90);
    if (lVar8 != 0) {
      uVar16 = 0;
      while( true ) {
        if (*(int *)(lVar8 + 0x18) <= (int)uVar16) {
          return;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar12,uRam0000000003d5b098);
        lVar9 = *(long *)(lVar6 + 0x90);
        if ((lVar9 == 0) || (lVar8 == 0)) break;
        uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578b8);
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
code_r0x015947cc:
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto code_r0x015947d8;
        }
        lVar17 = (long)(int)uVar16;
        *(undefined8 *)(lVar9 + lVar17 * 0x40 + 0x40) = uVar7;
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x40);
        if (lVar8 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar8,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x40);
        if (lVar8 == 0) break;
        uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto code_r0x015947cc;
        lVar8 = *(long *)(lVar8 + lVar17 * 0x40 + 0x20);
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) ||
           (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0), lVar8 == 0)) break;
        uVar16 = uVar16 + 1;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,uVar7,0,0);
        lVar8 = *(long *)(lVar6 + 0x90);
        if (lVar8 == 0) break;
      }
    }
    func_0x00f78af4();
    return;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  uVar11 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar11,uVar7,1,0);
  uVar7 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  puVar15 = *(undefined **)(lVar6 + 0x78);
  if (puVar15 == (undefined *)0x0) {
    return;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  puStack_f8 = puVar15;
  lVar6 = *(long *)(puVar15 + 0x68);
  if (lVar6 == 0) {
    ppuVar20 = &puStack_f8;
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x18);
    if (lVar8 == 0) {
      return;
    }
    ppuVar20 = (undefined **)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    puVar13 = ppuVar20[lVar6];
    pcVar19 = *(code **)(puVar13 + 0x10);
    plVar1 = *(long **)(puVar13 + 0x20);
    lVar9 = *(long *)(puVar13 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar4 = func_0x00f78a4c(lVar9);
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          (*pcVar19)(plVar12,0,uVar11,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(puVar15 + 0x18) == 0)) goto code_r0x01e7162c;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar1,plVar12,0,uVar11,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x01e71750;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar17 = *plVar1;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar18 = (undefined8 *)
                            (lVar17 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar14 = piVar14 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01e718f4:
            pcVar19 = (code *)*puVar18;
            puVar18 = (undefined8 *)puVar18[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar17 = *plVar1;
              uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar10 != 0) {
                piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar14 = piVar14 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              lVar17 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar7 = *(undefined8 *)(lVar17 + 8);
            }
            puVar18 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
            pcVar19 = (code *)*puVar18;
          }
          (*pcVar19)(plVar1,plVar12,0,uVar11,puVar18);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(puVar15 + 0x18) == 0))
        goto code_r0x01e7173c;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *plVar12 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar12,0,uVar11,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x01e71750;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar17 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar10 != 0) {
            piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar18 = (undefined8 *)
                          (lVar17 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar14 = piVar14 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar12,lVar9,(ulong)uVar2);
code_r0x01e71880:
          pcVar19 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar17 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar10 != 0) {
              piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x01e71858;
                }
                piVar14 = piVar14 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            lVar17 = func_0x00fac1f0(plVar12);
code_r0x01e71858:
            uVar7 = *(undefined8 *)(lVar17 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
          pcVar19 = (code *)*puVar18;
        }
        (*pcVar19)(plVar12,0,uVar11,puVar18);
      }
    }
    else {
      if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
      (*pcVar19)(plVar1,plVar12,0,uVar11,lVar9);
    }
code_r0x01e71750:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar8) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1592760 | Atlas.Contexts.FrontEndContextSingleplayerState.ArcadeModeSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */

void Atlas_Contexts_FrontEndContextSingleplayerState__ArcadeModeSelected
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  int *piVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined *puStack_c8;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5159 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d71920);
    bRam0000000003eb5159 = 1;
  }
  lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_01592990;
  *(int *)(*(long *)(lVar6 + 0x18) + 0x10) = (int)param_2;
  if ((int)param_2 == 4) {
    return;
  }
  lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_01592990;
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18),/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_01592990;
  lVar6 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeMode*/ func_0x01468e40(*(long *)(param_1 + 0x90),param_2,0);
  lVar16 = *(long *)(param_1 + 0x90);
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_01592990;
  uVar18 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x20);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar18,0);
  if (lVar16 == 0) goto LAB_01592990;
  lVar7 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(lVar16,uVar18,param_2,0);
  if (iVar4 == 0) {
    if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_01592990;
    uVar18 = *(undefined8 *)(lVar6 + 0x50);
    puVar17 = (undefined8 *)(lVar7 + 0x30);
    uStack_58 = *puVar17;
    iVar4 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_58,0);
    if (iVar4 != 0) goto code_r0x015928d0;
  }
  else {
    if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_01592990;
    uVar18 = *(undefined8 *)(lVar6 + 0x58);
    puVar17 = (undefined8 *)(lVar7 + 0x38);
    uStack_58 = *puVar17;
    uVar8 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_58,0);
    if ((uVar8 & 1) != 0) {
code_r0x015928d0:
      uVar18 = *puVar17;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar18,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
  if (iVar4 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar6 != 0)) {
    uVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uVar18,uRam0000000003d57278);
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x70) = uVar18;
      return;
    }
  }
LAB_01592990:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40628);
  if (lVar7 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 == 0) {
      puVar14 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar6 = func_0x00f78af4();
    }
    else {
      puVar14 = &UNK_01592b20;
    }
    puStack_c8 = puVar14;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar6 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar18 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar6);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar18 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar6,uVar18);
    uVar9 = *(undefined8 *)(lVar6 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
    if (iVar4 == 0) {
      return;
    }
    plVar10 = *(long **)(lVar6 + 200);
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x198))(plVar10,uVar18,*(undefined8 *)(*plVar10 + 0x1a0));
      return;
    }
    auVar21 = func_0x00f78af4();
    plVar10 = auVar21._8_8_;
    lVar6 = auVar21._0_8_;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      func_0x00f78e5c(plVar10);
      return;
    }
    lVar7 = *(long *)(lVar6 + 0x90);
    if (lVar7 != 0) {
      uVar15 = 0;
      while( true ) {
        if (*(int *)(lVar7 + 0x18) <= (int)uVar15) {
          return;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar10,uRam0000000003d5b098);
        lVar16 = *(long *)(lVar6 + 0x90);
        if ((lVar16 == 0) || (lVar7 == 0)) break;
        uVar18 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d578b8);
        if (*(uint *)(lVar16 + 0x18) <= uVar15) {
code_r0x015947cc:
          uVar18 = func_0x00f78b24();
          func_0x00f78ac0(uVar18,0);
          goto code_r0x015947d8;
        }
        lVar12 = (long)(int)uVar15;
        *(undefined8 *)(lVar16 + lVar12 * 0x40 + 0x40) = uVar18;
        lVar7 = *(long *)(lVar6 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar12 * 0x40 + 0x40);
        if (lVar7 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar7,0);
        lVar7 = *(long *)(lVar6 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar12 * 0x40 + 0x40);
        if (lVar7 == 0) break;
        uVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        lVar7 = *(long *)(lVar6 + 0x90);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto code_r0x015947cc;
        lVar7 = *(long *)(lVar7 + lVar12 * 0x40 + 0x20);
        if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) ||
           (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar7 == 0)) break;
        uVar15 = uVar15 + 1;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,uVar18,0,0);
        lVar7 = *(long *)(lVar6 + 0x90);
        if (lVar7 == 0) break;
      }
    }
    func_0x00f78af4();
    return;
  }
  uVar18 = *(undefined8 *)(lVar7 + 0x18);
  uVar9 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar9,uVar18,1,0);
  uVar18 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  puVar14 = *(undefined **)(lVar6 + 0x78);
  if (puVar14 == (undefined *)0x0) {
    return;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
  puStack_c8 = puVar14;
  lVar6 = *(long *)(puVar14 + 0x68);
  if (lVar6 == 0) {
    ppuVar20 = &puStack_c8;
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x18);
    if (lVar7 == 0) {
      return;
    }
    ppuVar20 = (undefined **)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    puVar11 = ppuVar20[lVar6];
    pcVar19 = *(code **)(puVar11 + 0x10);
    plVar1 = *(long **)(puVar11 + 0x20);
    lVar16 = *(long *)(puVar11 + 0x28);
    if (*(short *)(lVar16 + 0x48) == -1) {
      func_0x00f78ad8(lVar16);
    }
    iVar4 = func_0x00f78a4c(lVar16);
    bVar3 = *(char *)(lVar16 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          (*pcVar19)(plVar10,0,uVar9,lVar16);
        }
        else {
          if (((*(short *)(lVar16 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(puVar14 + 0x18) == 0)) goto code_r0x01e7162c;
          iVar4 = func_0x00f78a44(lVar16);
          iVar5 = func_0x00f78ec0(lVar16);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar16 + 0x48);
            if (iVar5 == 0) {
              lVar16 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar16 + 0x138))(plVar1,plVar10,0,uVar9,*(undefined8 *)(lVar16 + 0x140));
              goto code_r0x01e71750;
            }
            lVar16 = func_0x00f78a48(lVar16);
            lVar12 = *plVar1;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar16) {
                  puVar17 = (undefined8 *)
                            (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar13 = piVar13 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar16,(ulong)uVar2);
code_r0x01e718f4:
            pcVar19 = (code *)*puVar17;
            puVar17 = (undefined8 *)puVar17[1];
          }
          else {
            if (iVar5 == 0) {
              uVar18 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar16 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar16 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar13 = piVar13 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar18 = *(undefined8 *)(lVar12 + 8);
            }
            puVar17 = (undefined8 *)func_0x00f78acc(uVar18,lVar16);
            pcVar19 = (code *)*puVar17;
          }
          (*pcVar19)(plVar1,plVar10,0,uVar9,puVar17);
        }
      }
      else {
        if ((*(short *)(lVar16 + 0x48) == -1) || (*(long *)(puVar14 + 0x18) == 0))
        goto code_r0x01e7173c;
        iVar4 = func_0x00f78a44(lVar16);
        iVar5 = func_0x00f78ec0(lVar16);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar16 + 0x48);
          if (iVar5 == 0) {
            lVar16 = *plVar10 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar16 + 0x138))(plVar10,0,uVar9,*(undefined8 *)(lVar16 + 0x140));
            goto code_r0x01e71750;
          }
          lVar16 = func_0x00f78a48(lVar16);
          lVar12 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar16) {
                puVar17 = (undefined8 *)
                          (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar13 = piVar13 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,(ulong)uVar2);
code_r0x01e71880:
          pcVar19 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar5 == 0) {
            uVar18 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar16 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71858;
                }
                piVar13 = piVar13 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar10);
code_r0x01e71858:
            uVar18 = *(undefined8 *)(lVar12 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar18,lVar16);
          pcVar19 = (code *)*puVar17;
        }
        (*pcVar19)(plVar10,0,uVar9,puVar17);
      }
    }
    else {
      if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
      (*pcVar19)(plVar1,plVar10,0,uVar9,lVar16);
    }
code_r0x01e71750:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar7) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1592994 | Atlas.Contexts.FrontEndContextSingleplayerState.EnterLoadOutState
// ============================================================

/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */
/* WARNING: Removing unreachable block (ram,0x01592b70) */

void Atlas_Contexts_FrontEndContextSingleplayerState__EnterLoadOutState(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined *puStack_68;
  
  if ((bRam0000000003eb515a & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d40628);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515a = 1;
  }
  lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb515b & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194c8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb515b = 1;
    }
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 == 0) {
      puVar15 = &Atlas_FrontEnd_FrontEndScene__ClearOverrideIP;
      lVar6 = func_0x00f78af4();
    }
    else {
      puVar15 = &UNK_01592b20;
    }
    puStack_68 = puVar15;
    if ((bRam0000000003eb516d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb516d = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar6 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    uVar16 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar6);
    if ((bRam0000000003eb516e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb516e = 1;
    }
    uVar16 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar6,uVar16);
    uVar7 = *(undefined8 *)(lVar6 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
    if (iVar4 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar6 + 200);
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x198))(plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x1a0));
      return;
    }
    auVar21 = func_0x00f78af4();
    plVar8 = auVar21._8_8_;
    lVar6 = auVar21._0_8_;
    if ((bRam0000000003eb5170 & 1) == 0) {
      func_0x00f78a20(0x3d578b8);
      func_0x00f78a20(0x3d21b60);
      func_0x00f78a20(0x3d5b098);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5170 = 1;
    }
    if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
      func_0x00f78e5c(plVar8);
      return;
    }
    lVar19 = *(long *)(lVar6 + 0x90);
    if (lVar19 != 0) {
      uVar17 = 0;
      while( true ) {
        if (*(int *)(lVar19 + 0x18) <= (int)uVar17) {
          return;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar19 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar8,uRam0000000003d5b098);
        lVar9 = *(long *)(lVar6 + 0x90);
        if ((lVar9 == 0) || (lVar19 == 0)) break;
        uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar19,uRam0000000003d578b8);
        if (*(uint *)(lVar9 + 0x18) <= uVar17) {
code_r0x015947cc:
          uVar16 = func_0x00f78b24();
          func_0x00f78ac0(uVar16,0);
          goto code_r0x015947d8;
        }
        lVar12 = (long)(int)uVar17;
        *(undefined8 *)(lVar9 + lVar12 * 0x40 + 0x40) = uVar16;
        lVar19 = *(long *)(lVar6 + 0x90);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x015947cc;
        lVar19 = *(long *)(lVar19 + lVar12 * 0x40 + 0x40);
        if (lVar19 == 0) break;
        /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar19,0);
        lVar19 = *(long *)(lVar6 + 0x90);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x015947cc;
        lVar19 = *(long *)(lVar19 + lVar12 * 0x40 + 0x40);
        if (lVar19 == 0) break;
        uVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0);
        lVar19 = *(long *)(lVar6 + 0x90);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x015947cc;
        lVar19 = *(long *)(lVar19 + lVar12 * 0x40 + 0x20);
        if (((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)) ||
           (lVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar19,0), lVar19 == 0)) break;
        uVar17 = uVar17 + 1;
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar19,uVar16,0,0);
        lVar19 = *(long *)(lVar6 + 0x90);
        if (lVar19 == 0) break;
      }
    }
    func_0x00f78af4();
    return;
  }
  uVar16 = *(undefined8 *)(lVar6 + 0x18);
  uVar7 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextLoadoutState.LoadoutTransitionData_TypeInfo*/ uRam0000000003d27600);
  Atlas_Contexts_FrontEndContextLoadoutState_LoadoutTransitionData___ctor(uVar7,uVar16,1,0);
  uVar16 = /*Atlas.Contexts.FrontEndContextLoadoutState_var*/ uRam0000000003d194b8;
  puVar15 = *(undefined **)(param_1 + 0x78);
  if (puVar15 == (undefined *)0x0) {
    return;
  }
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  puStack_68 = puVar15;
  lVar6 = *(long *)(puVar15 + 0x68);
  if (lVar6 == 0) {
    ppuVar20 = &puStack_68;
    lVar19 = 1;
  }
  else {
    lVar19 = *(long *)(lVar6 + 0x18);
    if (lVar19 == 0) {
      return;
    }
    ppuVar20 = (undefined **)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    puVar11 = ppuVar20[lVar6];
    pcVar18 = *(code **)(puVar11 + 0x10);
    plVar1 = *(long **)(puVar11 + 0x20);
    lVar9 = *(long *)(puVar11 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9);
    }
    iVar4 = func_0x00f78a4c(lVar9);
    bVar3 = *(char *)(lVar9 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
          (*pcVar18)(plVar8,0,uVar7,lVar9);
        }
        else {
          if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(puVar15 + 0x18) == 0)) goto code_r0x01e7162c;
          iVar4 = func_0x00f78a44(lVar9);
          iVar5 = func_0x00f78ec0(lVar9);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar9 + 0x48);
            if (iVar5 == 0) {
              lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar9 + 0x138))(plVar1,plVar8,0,uVar7,*(undefined8 *)(lVar9 + 0x140));
              goto code_r0x01e71750;
            }
            lVar9 = func_0x00f78a48(lVar9);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar10 = (undefined8 *)
                            (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e718f4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01e718f4:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar5 == 0) {
              uVar16 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10
                             + 0x138;
                    goto code_r0x01e718cc;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
              uVar16 = *(undefined8 *)(lVar12 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar16,lVar9);
            pcVar18 = (code *)*puVar10;
          }
          (*pcVar18)(plVar1,plVar8,0,uVar7,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(puVar15 + 0x18) == 0))
        goto code_r0x01e7173c;
        iVar4 = func_0x00f78a44(lVar9);
        iVar5 = func_0x00f78ec0(lVar9);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar9 + 0x48);
          if (iVar5 == 0) {
            lVar9 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar9 + 0x138))(plVar8,0,uVar7,*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x01e71750;
          }
          lVar9 = func_0x00f78a48(lVar9);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar10 = (undefined8 *)
                          (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e71880;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar8,lVar9,(ulong)uVar2);
code_r0x01e71880:
          pcVar18 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar5 == 0) {
            uVar16 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x01e71858;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar8);
code_r0x01e71858:
            uVar16 = *(undefined8 *)(lVar12 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar16,lVar9);
          pcVar18 = (code *)*puVar10;
        }
        (*pcVar18)(plVar8,0,uVar7,puVar10);
      }
    }
    else {
      if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
      (*pcVar18)(plVar1,plVar8,0,uVar7,lVar9);
    }
code_r0x01e71750:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar19) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1592ab8 | Atlas.Contexts.FrontEndContextSingleplayerState.OverviewBackPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01592b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01592b20) */
/* WARNING: Removing unreachable block (ram,0x01592b34) */
/* WARNING: Removing unreachable block (ram,0x01592b3c) */
/* WARNING: Removing unreachable block (ram,0x01592b40) */
/* WARNING: Removing unreachable block (ram,0x01592b50) */

void Atlas_Contexts_FrontEndContextSingleplayerState__OverviewBackPressed(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb515b & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194c8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb515b = 1;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
  }
  if ((bRam0000000003eb516d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb516d = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar2 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar3 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574(lVar2);
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar3 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar2,uVar3);
  uVar6 = *(undefined8 *)(lVar2 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar1 == 0) {
    return;
  }
  plVar4 = *(long **)(lVar2 + 200);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x198))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x1a0));
    return;
  }
  auVar10 = func_0x00f78af4();
  plVar4 = auVar10._8_8_;
  lVar2 = auVar10._0_8_;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    func_0x00f78e5c(plVar4);
    return;
  }
  lVar5 = *(long *)(lVar2 + 0x90);
  if (lVar5 != 0) {
    uVar8 = 0;
    while( true ) {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar8) {
        return;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar4,uRam0000000003d5b098);
      lVar7 = *(long *)(lVar2 + 0x90);
      if ((lVar7 == 0) || (lVar5 == 0)) break;
      uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_r0x015947cc:
        uVar3 = func_0x00f78b24();
        func_0x00f78ac0(uVar3,0);
        goto code_r0x015947d8;
      }
      lVar9 = (long)(int)uVar8;
      *(undefined8 *)(lVar7 + lVar9 * 0x40 + 0x40) = uVar3;
      lVar5 = *(long *)(lVar2 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar5,0);
      lVar5 = *(long *)(lVar2 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x40);
      if (lVar5 == 0) break;
      uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
      lVar5 = *(long *)(lVar2 + 0x90);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x015947cc;
      lVar5 = *(long *)(lVar5 + lVar9 * 0x40 + 0x20);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
      uVar8 = uVar8 + 1;
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar3,0,0);
      lVar5 = *(long *)(lVar2 + 0x90);
      if (lVar5 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1592c0c | Atlas.Contexts.FrontEndContextSingleplayerState.ShowCampaign
// ============================================================

/* WARNING: Possible PIC construction at 0x0147da0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01592d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x0147dd28) */
/* WARNING: Removing unreachable block (ram,0x0147da10) */
/* WARNING: Removing unreachable block (ram,0x01592d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__ShowCampaign
                  (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  int iVar17;
  long lVar22;
  undefined8 uVar23;
  dword *pdVar24;
  long lVar25;
  int iVar18;
  undefined8 *puVar26;
  dword *pdVar27;
  dword *pdVar28;
  long *extraout_x1;
  long *plVar29;
  dword *pdVar30;
  dword *pdVar31;
  dword *pdVar32;
  ulong uVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  dword *pdVar37;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar38;
  undefined8 unaff_x21;
  dword *pdVar39;
  undefined8 uVar40;
  undefined8 unaff_x22;
  long lVar41;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar42;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar43;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined *puVar44;
  undefined8 unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar41 = 0x3eb5000;
    if ((bRam0000000003eb515c & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d28ec8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d56d80);
      func_0x00f78a20(0x3d40628);
      func_0x00f78a20(0x3d28ed0);
      func_0x00f78a20(0x3d69c08);
      func_0x00f78a20(0x3d69c18);
      func_0x00f78a20(0x3d69bf8);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb515c = 1;
    }
    lVar22 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if (lVar22 == 0) {
LAB_01592efc:
      puVar44 = &Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter;
      auVar46 = func_0x00f78af4();
    }
    else {
      *(undefined8 *)(lVar22 + 0x10) = param_2;
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_01592efc;
      iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(*(long *)(param_1 + 0x90),param_2,0);
      if (iVar17 != 1) {
        if (iVar17 != 0) {
          lVar22 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData_TypeInfo*/ uRam0000000003d28ed0);
          /*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData$$.ctor*/ func_0x0156a4d8(lVar22,0);
          lVar41 = 0;
          if (lVar22 != 0) {
            *(undefined8 *)(lVar22 + 0x10) = param_2;
            *(undefined8 *)(lVar22 + 0x20) = param_3;
            uVar23 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28ec8);
            /*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected$$.ctor*/ func_0x0156a1a4(uVar23,param_1,uRam0000000003d56d80,0);
            *(undefined8 *)(lVar22 + 0x18) = uVar23;
            if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
                      (param_1,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xa0),lVar22
                       ,*(undefined8 *)(param_1 + 0xd8));
            goto LAB_01592e50;
          }
          goto LAB_01592efc;
        }
        param_3 = 0x3d21270;
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Freeplay')*/ uRam0000000003d69c08,0);
        iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(param_2,uVar23,0);
        if (iVar17 != 0) {
          Atlas_Contexts_FrontEndContextSingleplayerState__ShowFreeplay(param_1);
LAB_01592e50:
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Arcade')*/ uRam0000000003d69bf8,0);
        iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(param_2,uVar23,0);
        if (iVar17 != 0) {
          Atlas_Contexts_FrontEndContextSingleplayerState__ShowArcadeMapSelect(param_1);
          goto LAB_01592e50;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
        pdVar24 = (dword *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(param_2,uVar23,0);
        if ((int)pdVar24 == 0) {
          return pdVar24;
        }
        lVar22 = *(long *)(param_1 + 0xb8);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
        param_1 = 0;
        if (lVar22 == 0) goto LAB_01592efc;
        uVar33 = 0;
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x40);
        lVar19 = *(long *)((long)register0x00000008 + -0x38);
        puVar13 = (undefined1 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = uVar23;
        *(long *)((long)register0x00000008 + -0x38) = lVar19;
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
        puVar43 = (undefined1 *)((long)register0x00000008 + -0x10);
        lVar41 = 0x3d27ed8;
        if ((bRam0000000003eb48ce & 1) == 0) {
          func_0x00f78a20(0x3d1feb8);
          func_0x00f78a20(0x3d56d48);
          func_0x00f78a20(0x3d27ec0);
          func_0x00f78a20(0x3d59ee8);
          func_0x00f78a20(0x3d59ef0);
          func_0x00f78a20(0x3d27ec8);
          func_0x00f78a20(0x3d27ed0);
          func_0x00f78a20(0x3d27ed8);
          bRam0000000003eb48ce = 1;
        }
        pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData_TypeInfo*/ uRam0000000003d27ed8);
        /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData$$.ctor*/ func_0x0155dd18(pdVar24,0);
        if ((*(long *)(lVar22 + 0x20) == 0) || (pdVar24 == (dword *)0x0)) {
code_r0x0147da30:
          auVar45 = func_0x00f78af4();
          lVar38 = auVar45._8_8_;
          lVar34 = auVar45._0_8_;
          *(long *)((long)register0x00000008 + -0x90) = lVar41;
          *(dword **)((long)register0x00000008 + -0x88) = pdVar24;
          *(long *)((long)register0x00000008 + -0x80) = lVar25;
          *(long *)((long)register0x00000008 + -0x78) = lVar22;
          *(undefined1 **)((long)register0x00000008 + -0x70) = puVar43;
          *(undefined **)((long)register0x00000008 + -0x68) =
               &Atlas_League_LeagueModeUIManager__LeagueDaySelected;
          if ((bRam0000000003eb48cf & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d572d0);
            func_0x00f78a20(0x3d71920);
            func_0x00f78a20(0x3d6f370);
            bRam0000000003eb48cf = 1;
          }
          lVar41 = *(long *)(lVar34 + 0x10);
          if ((lVar41 != 0) && (lVar22 = *(long *)(lVar41 + 0x18), lVar22 != 0)) {
            *(long *)(lVar22 + 0x18) = lVar38;
            *(ulong *)(lVar22 + 0x20) = uVar33;
            *(undefined4 *)(lVar22 + 0x10) = 9;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar40 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar33,0);
            *(undefined8 *)(lVar41 + 0x30) = uVar40;
            if ((*(long *)(lVar34 + 0x10) != 0) &&
               (lVar22 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar22 != 0)) {
              uVar20 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar22 + 0x18),/*STR('RaceGameContext')*/ lRam0000000003d71920,0);
              if (*(long *)(lVar34 + 0x20) != 0) {
                lVar38 = *(long *)(*(long *)(lVar34 + 0x20) + 0x10);
                uVar40 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('LeagueMode')*/ uRam0000000003d6f370,0);
                uVar33 = uVar20;
                if (lVar38 != 0) {
                  lVar22 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar38,uVar40,uRam0000000003d572d0);
                  if ((uVar20 & 1) == 0) {
                    if ((lVar22 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                      uVar33 = *(ulong *)(lVar22 + 0x28);
                      pdVar24 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
                      if ((pdVar24 != (dword *)0x0) && (uVar33 != 0)) {
                        puVar26 = (undefined8 *)(pdVar24 + 0x14);
                        goto code_r0x0147dba0;
                      }
                    }
                  }
                  else if ((lVar22 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                    uVar33 = *(ulong *)(lVar22 + 0x20);
                    pdVar24 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
                    if ((pdVar24 != (dword *)0x0) && (uVar33 != 0)) {
                      puVar26 = (undefined8 *)(pdVar24 + 0x12);
code_r0x0147dba0:
                      *(undefined8 *)(uVar33 + 0x68) = *puVar26;
                      if ((*(long *)(lVar34 + 0x10) != 0) &&
                         (lVar22 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar22 != 0)) {
                        *(ulong *)(lVar22 + 0x70) = uVar33;
                        return pdVar24;
                      }
                    }
                  }
                }
              }
            }
          }
          auVar45 = func_0x00f78af4();
          lVar22 = auVar45._0_8_;
          puVar13 = (undefined1 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar23;
          *(long *)((long)register0x00000008 + -200) = lVar19;
          *(long *)((long)register0x00000008 + -0xc0) = lVar41;
          *(long *)((long)register0x00000008 + -0xb8) = lVar38;
          *(ulong *)((long)register0x00000008 + -0xb0) = uVar33;
          *(long *)((long)register0x00000008 + -0xa8) = lVar34;
          *(undefined1 **)((long)register0x00000008 + -0xa0) =
               (undefined1 *)((long)register0x00000008 + -0x70);
          *(undefined **)((long)register0x00000008 + -0x98) =
               &Atlas_League_LeagueModeUIManager__ShowLeaderboardPostEvent;
          puVar43 = (undefined1 *)((long)register0x00000008 + -0xa0);
          lVar41 = 0x3d27e58;
          if ((bRam0000000003eb48d0 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d27e28);
            func_0x00f78a20(0x3d27e30);
            func_0x00f78a20(0x3d63588);
            func_0x00f78a20(0x3d27e58);
            bRam0000000003eb48d0 = 1;
          }
          lVar25 = func_0x00f78aec(/*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d27e58);
          /*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0$$.ctor*/ func_0x0155bc64(lVar25,0);
          if (lVar25 != 0) {
            lVar19 = 0x3d63000;
            *(undefined1 (*) [16])(lVar25 + 0x10) = auVar45;
            pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
            auVar6._8_8_ = pdVar24;
            auVar6._0_8_ = lVar22;
            auVar5._8_8_ = pdVar24;
            auVar5._0_8_ = lVar22;
            auVar45._8_8_ = pdVar24;
            auVar45._0_8_ = lVar22;
            /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar24,0);
            lVar41 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
            /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar41,lVar25,uRam0000000003d63588,0);
            if (pdVar24 != (dword *)0x0) {
              *(long *)(pdVar24 + 6) = lVar41;
              auVar45 = auVar5;
              if (*(long *)(lVar22 + 0x20) != 0) {
                *(long *)(pdVar24 + 4) = *(long *)(*(long *)(lVar22 + 0x20) + 0x10);
                *(long *)(pdVar24 + 8) = *(long *)(lVar22 + 0x28);
                auVar45 = auVar6;
                if (*(long *)(lVar22 + 0x38) != 0) {
                  pdVar39 = (dword *)0x3d1feb8;
                  lVar25 = 0x3d1feb8;
                  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0x38),0,0,0);
                  pdVar37 = *(dword **)(lVar22 + 0x30);
                  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = pdVar24;
                  auVar45 = auVar7 << 0x40;
                  if (pdVar37 != (dword *)0x0) {
                    pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
                    puVar44 = &UNK_0147dd28;
                    pdVar31 = pdVar37;
                    pdVar32 = pdVar24;
                    goto code_r0x0147079c;
                  }
                }
              }
            }
          }
          lVar34 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x110) = uVar23;
          *(long *)((long)register0x00000008 + -0x108) = lVar19;
          *(long *)((long)register0x00000008 + -0x100) = lVar41;
          *(long *)((long)register0x00000008 + -0xf8) = lVar25;
          *(long *)((long)register0x00000008 + -0xf0) = auVar45._8_8_;
          *(long *)((long)register0x00000008 + -0xe8) = auVar45._0_8_;
          *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar43;
          *(undefined **)((long)register0x00000008 + -0xd8) =
               &Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton;
          lVar22 = 0x3d27e30;
          if ((bRam0000000003eb48d1 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d29bc0);
            func_0x00f78a20(0x3d59ee0);
            func_0x00f78a20(0x3d27e30);
            bRam0000000003eb48d1 = 1;
          }
          pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
          /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar24,0);
          if (pdVar24 != (dword *)0x0) {
            lVar25 = *(long *)(lVar34 + 0x20);
            lVar38 = *(long *)(lVar34 + 0x28);
            *(long *)(pdVar24 + 6) = 0;
            *(long *)(pdVar24 + 8) = lVar38;
            if (lVar25 != 0) {
              lVar19 = 0x3d59000;
              *(long *)(pdVar24 + 4) = *(long *)(lVar25 + 0x10);
              lVar22 = *(long *)(lVar34 + 0x38);
              lVar41 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
              /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar41,lVar34,uRam0000000003d59ee0,0);
              if (lVar22 != 0) {
                lVar19 = 0x3d1feb8;
                /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar22,0,lVar41,0);
                pdVar37 = *(dword **)(lVar34 + 0x30);
                if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar34 = 0;
                if (pdVar37 != (dword *)0x0) {
                  pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
                  puVar43 = *(undefined1 **)((long)register0x00000008 + -0xe0);
                  puVar44 = *(undefined **)((long)register0x00000008 + -0xd8);
                  pdVar32 = *(dword **)((long)register0x00000008 + -0xf0);
                  pdVar31 = *(dword **)((long)register0x00000008 + -0xe8);
                  lVar41 = *(long *)((long)register0x00000008 + -0x100);
                  pdVar39 = *(dword **)((long)register0x00000008 + -0xf8);
                  puVar13 = (undefined1 *)((long)register0x00000008 + -0xd0);
                  uVar23 = *(undefined8 *)((long)register0x00000008 + -0x110);
                  lVar19 = *(long *)((long)register0x00000008 + -0x108);
                  goto code_r0x0147079c;
                }
              }
            }
          }
          lVar25 = func_0x00f78af4();
          *(long *)((long)register0x00000008 + -0x140) = lVar41;
          *(long *)((long)register0x00000008 + -0x138) = lVar22;
          *(dword **)((long)register0x00000008 + -0x130) = pdVar24;
          *(long *)((long)register0x00000008 + -0x128) = lVar34;
          *(undefined1 **)((long)register0x00000008 + -0x120) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
          *(undefined **)((long)register0x00000008 + -0x118) =
               &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
          uVar40 = 0x3eb4000;
          if ((bRam0000000003eb48d2 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d27e68);
            func_0x00f78a20(0x3d59ef8);
            func_0x00f78a20(0x3d27e78);
            bRam0000000003eb48d2 = 1;
          }
          if ((*(long *)(lVar25 + 0x28) == 0) ||
             (lVar34 = *(long *)(*(long *)(lVar25 + 0x28) + 0x80), lVar34 == 0)) {
            puVar44 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
            lVar34 = func_0x00f78af4();
          }
          else {
            uVar40 = 0x3d27000;
            lVar22 = 0x3d27000;
            lVar41 = 0x3d59000;
            puVar44 = &UNK_0147df04;
          }
          *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar40;
          *(long *)((long)register0x00000008 + -0x198) = lVar25;
          *(undefined1 **)((long)register0x00000008 + -400) =
               (undefined1 *)((long)register0x00000008 + -0x120);
          *(undefined **)((long)register0x00000008 + -0x188) = puVar44;
          if ((bRam0000000003eb493a & 1) == 0) {
            func_0x00f78a20(0x3d3d470);
            bRam0000000003eb493a = 1;
          }
          pdVar24 = *(dword **)(lVar34 + 0x18);
          if (pdVar24 != (dword *)0x0) {
            *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                 *(undefined8 *)((long)register0x00000008 + -0x1a0);
            *(undefined8 *)((long)register0x00000008 + -0x198) =
                 *(undefined8 *)((long)register0x00000008 + -0x198);
            *(undefined8 *)((long)register0x00000008 + -400) =
                 *(undefined8 *)((long)register0x00000008 + -400);
            *(undefined8 *)((long)register0x00000008 + -0x188) =
                 *(undefined8 *)((long)register0x00000008 + -0x188);
            pdVar37 = pdVar24;
            if (0 < (int)pdVar24[6]) {
              pdVar37 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar24 + 4),0,pdVar24[6],0);
              pdVar24[6] = 0;
            }
            pdVar24[7] = pdVar24[7] + 1;
            return pdVar37;
          }
          lVar25 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar23;
          *(long *)((long)register0x00000008 + -0x1d8) = lVar19;
          *(long *)((long)register0x00000008 + -0x1d0) = lVar41;
          *(long *)((long)register0x00000008 + -0x1c8) = lVar22;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3eb4000;
          *(long *)((long)register0x00000008 + -0x1b8) = lVar34;
          *(undefined1 **)((long)register0x00000008 + -0x1b0) =
               (undefined1 *)((long)register0x00000008 + -400);
          *(undefined **)((long)register0x00000008 + -0x1a8) =
               &Atlas_League_LeagueModeUIManager__ShowPromotion;
          lVar41 = 0x3d59f00;
          if ((bRam0000000003eb48d3 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d27e88);
            func_0x00f78a20(0x3d59f00);
            func_0x00f78a20(0x3d27e90);
            bRam0000000003eb48d3 = 1;
          }
          pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
          /*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData$$.ctor*/ func_0x0155cc58(pdVar24,0);
          pdVar39 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
          /*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected$$.ctor*/ func_0x0155c9e0(pdVar39,lVar25,uRam0000000003d59f00,0);
          if (pdVar24 != (dword *)0x0) {
            *(dword **)(pdVar24 + 4) = pdVar39;
            if (*(long *)(lVar25 + 0x38) != 0) {
              pdVar39 = (dword *)0x3d1feb8;
              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar25 + 0x38),0,0,0);
              pdVar37 = *(dword **)(lVar25 + 0x30);
              if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar25 = 0;
              if (pdVar37 != (dword *)0x0) {
                pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
                puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
                puVar44 = *(undefined **)((long)register0x00000008 + -0x1a8);
                pdVar32 = *(dword **)((long)register0x00000008 + -0x1c0);
                pdVar31 = *(dword **)((long)register0x00000008 + -0x1b8);
                lVar41 = *(long *)((long)register0x00000008 + -0x1d0);
                pdVar39 = *(dword **)((long)register0x00000008 + -0x1c8);
                puVar13 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                uVar23 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
                lVar19 = *(long *)((long)register0x00000008 + -0x1d8);
                goto code_r0x0147079c;
              }
            }
          }
          lVar22 = func_0x00f78af4();
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x220);
          *(undefined8 *)((long)register0x00000008 + -0x220) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3d27e90;
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0x3d59f00;
          *(dword **)((long)register0x00000008 + -0x208) = pdVar39;
          *(dword **)((long)register0x00000008 + -0x200) = pdVar24;
          *(long *)((long)register0x00000008 + -0x1f8) = lVar25;
          *(undefined1 **)((long)register0x00000008 + -0x1f0) =
               (undefined1 *)((long)register0x00000008 + -0x1b0);
          *(undefined **)((long)register0x00000008 + -0x1e8) =
               &Atlas_League_LeagueModeUIManager__ShowReward;
          puVar43 = (undefined1 *)((long)register0x00000008 + -0x1f0);
          uVar40 = 0x3eb4000;
          if ((bRam0000000003eb48d4 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d59f08);
            func_0x00f78a20(0x3d289a0);
            func_0x00f78a20(0x3d289a8);
            bRam0000000003eb48d4 = 1;
          }
          lVar25 = lVar22;
          lVar19 = 0x3d27e90;
          if (*(long *)(lVar22 + 0x50) == 0) {
code_r0x0147e318:
            puVar44 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
            lVar22 = func_0x00f78af4();
          }
          else {
            uVar40 = /*Atlas.League.LeagueManager$$GetUnlockedRewardOrNull*/ func_0x015f4360(*(long *)(lVar22 + 0x50),0);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar21 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
            iVar17 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar40,uVar21,0);
            if (iVar17 != 0) {
              pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
              /*Atlas.UI.Screens.RewardScreen.TransitionData$$.ctor*/ func_0x01565edc(pdVar24,0);
              lVar41 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
              /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar41,lVar22,uRam0000000003d59f08,0);
              pdVar39 = pdVar24;
              lVar19 = 0x3d21270;
              if (pdVar24 != (dword *)0x0) {
                *(long *)(pdVar24 + 4) = lVar41;
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar40,0);
                *(long *)(pdVar24 + 0xc) = lVar25;
                pdVar37 = *(dword **)(lVar22 + 0x30);
                *(long *)(pdVar24 + 0xe) = *(long *)(lVar22 + 0x28);
                *(undefined1 *)(pdVar24 + 0x10) = 1;
                uVar40 = 0x3d1feb8;
                if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar25 = 0;
                lVar19 = 0x3d21270;
                if (pdVar37 != (dword *)0x0) {
                  pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
                  puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
                  puVar44 = *(undefined **)((long)register0x00000008 + -0x1e8);
                  pdVar32 = *(dword **)((long)register0x00000008 + -0x200);
                  pdVar31 = *(dword **)((long)register0x00000008 + -0x1f8);
                  lVar41 = *(long *)((long)register0x00000008 + -0x210);
                  pdVar39 = *(dword **)((long)register0x00000008 + -0x208);
                  puVar13 = (undefined1 *)((long)register0x00000008 + -0x1e0);
                  uVar23 = *(undefined8 *)((long)register0x00000008 + -0x220);
                  lVar19 = *(long *)((long)register0x00000008 + -0x218);
                  goto code_r0x0147079c;
                }
              }
              goto code_r0x0147e318;
            }
            puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
            puVar44 = *(undefined **)((long)register0x00000008 + -0x1e8);
            uVar40 = *(undefined8 *)((long)register0x00000008 + -0x200);
            lVar25 = *(long *)((long)register0x00000008 + -0x1f8);
            lVar41 = *(long *)((long)register0x00000008 + -0x210);
            pdVar39 = *(dword **)((long)register0x00000008 + -0x208);
            puVar13 = (undefined1 *)((long)register0x00000008 + -0x1e0);
            uVar23 = *(undefined8 *)((long)register0x00000008 + -0x220);
            lVar19 = *(long *)((long)register0x00000008 + -0x218);
          }
          *(long *)(puVar13 + -0x30) = lVar41;
          *(dword **)(puVar13 + -0x28) = pdVar39;
          *(undefined8 *)(puVar13 + -0x20) = uVar40;
          *(long *)(puVar13 + -0x18) = lVar25;
          *(undefined1 **)(puVar13 + -0x10) = puVar43;
          *(undefined **)(puVar13 + -8) = puVar44;
          puVar43 = puVar13 + -0x10;
          pdVar24 = (dword *)0x3eb4000;
          if ((bRam0000000003eb48d5 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d21070);
            func_0x00f78a20(0x3d21688);
            func_0x00f78a20(0x3d59f00);
            func_0x00f78a20(0x3d28bb8);
            func_0x00f78a20(0x3d28bc0);
            func_0x00f78a20(0x3d71920);
            bRam0000000003eb48d5 = 1;
          }
          lVar25 = lVar22;
          if (*(long *)(lVar22 + 0x50) == 0) {
code_r0x0147e554:
            puVar44 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
            lVar22 = func_0x00f78af4();
            puVar13 = puVar13 + -0x30;
          }
          else {
            iVar17 = /*Atlas.League.LeagueManager$$StarsAwardedLatch*/ func_0x015f4340(*(long *)(lVar22 + 0x50),0);
            if (iVar17 == 0) {
              pdVar24 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
              /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(pdVar24,0);
              if (pdVar24 != (dword *)0x0) {
                pdVar24[4] = 9;
                *(long *)(pdVar24 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
                pdVar39 = *(dword **)(lVar22 + 0x60);
                if (pdVar39 != (dword *)0x0) {
                  uVar40 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(pdVar39,0);
                  uVar16 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(pdVar39,uVar40,0);
                  pdVar39[0x10] = uVar16;
                  if (*(long *)(lVar22 + 0x50) != 0) {
                    pdVar39 = *(dword **)(lVar22 + 0x58);
                    lVar41 = /*Atlas.League.LeagueManager$$GetPlayerStars*/ func_0x015f41e0(*(long *)(lVar22 + 0x50),0);
                    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar40 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
                    if (pdVar39 != (dword *)0x0) {
                      /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(pdVar39,lVar41,uVar40,*(undefined8 *)(lVar22 + 0x40),pdVar24,0
                                     );
                      if (*(long *)(lVar22 + 0x50) != 0) {
                        /*Atlas.League.LeagueManager$$SetStarsAwardedLatch*/ func_0x015f431c(*(long *)(lVar22 + 0x50),0);
                        if (*(long *)(lVar22 + 0x38) != 0) {
                          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0x38),0,0,0);
                          pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                          /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar24,0);
                          pdVar39 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                          /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(pdVar39,lVar22,uRam0000000003d59f00,0);
                          if (pdVar24 != (dword *)0x0) {
                            *(dword **)(pdVar24 + 4) = pdVar39;
                            *(undefined1 *)((long)pdVar24 + 0x19) = 1;
                            pdVar37 = *(dword **)(lVar22 + 0x30);
                            pdVar39 = (dword *)0x3d1feb8;
                            if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar25 = 0;
                            if (pdVar37 != (dword *)0x0) {
                              pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                              puVar43 = *(undefined1 **)(puVar13 + -0x10);
                              puVar44 = *(undefined **)(puVar13 + -8);
                              pdVar32 = *(dword **)(puVar13 + -0x20);
                              pdVar31 = *(dword **)(puVar13 + -0x18);
                              lVar41 = *(long *)(puVar13 + -0x30);
                              pdVar39 = *(dword **)(puVar13 + -0x28);
                              goto code_r0x0147079c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto code_r0x0147e554;
            }
            puVar43 = *(undefined1 **)(puVar13 + -0x10);
            puVar44 = *(undefined **)(puVar13 + -8);
            pdVar24 = *(dword **)(puVar13 + -0x20);
            lVar25 = *(long *)(puVar13 + -0x18);
            lVar41 = *(long *)(puVar13 + -0x30);
            pdVar39 = *(dword **)(puVar13 + -0x28);
          }
          *(undefined8 *)(puVar13 + -0x40) = uVar23;
          *(long *)(puVar13 + -0x38) = lVar19;
          *(long *)(puVar13 + -0x30) = lVar41;
          *(dword **)(puVar13 + -0x28) = pdVar39;
          *(dword **)(puVar13 + -0x20) = pdVar24;
          *(long *)(puVar13 + -0x18) = lVar25;
          *(undefined1 **)(puVar13 + -0x10) = puVar43;
          *(undefined **)(puVar13 + -8) = puVar44;
          if ((bRam0000000003eb48d6 & 1) == 0) {
            func_0x00f78a20(0x3d1feb8);
            func_0x00f78a20(0x3d59ed8);
            func_0x00f78a20(0x3d27e28);
            func_0x00f78a20(0x3d27e30);
            bRam0000000003eb48d6 = 1;
          }
          pdVar24 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
          /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar24,0);
          lVar41 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
          /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar41,lVar22,uRam0000000003d59ed8,0);
          if (pdVar24 == (dword *)0x0) {
code_r0x0147e694:
            pdVar24 = (dword *)func_0x00f78af4();
            return pdVar24;
          }
          *(long *)(pdVar24 + 6) = lVar41;
          if (*(long *)(lVar22 + 0x20) == 0) goto code_r0x0147e694;
          *(long *)(pdVar24 + 4) = *(long *)(*(long *)(lVar22 + 0x20) + 0x10);
          *(long *)(pdVar24 + 8) = *(long *)(lVar22 + 0x28);
          *(undefined1 *)(pdVar24 + 10) = 1;
          if (*(long *)(lVar22 + 0x38) == 0) goto code_r0x0147e694;
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0x38),0,0,0);
          pdVar37 = *(dword **)(lVar22 + 0x30);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (pdVar37 == (dword *)0x0) goto code_r0x0147e694;
          pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
          puVar43 = *(undefined1 **)(puVar13 + -0x10);
          puVar44 = *(undefined **)(puVar13 + -8);
          pdVar32 = *(dword **)(puVar13 + -0x20);
          pdVar31 = *(dword **)(puVar13 + -0x18);
          lVar41 = *(long *)(puVar13 + -0x30);
          pdVar39 = *(dword **)(puVar13 + -0x28);
          uVar23 = *(undefined8 *)(puVar13 + -0x40);
          lVar19 = *(long *)(puVar13 + -0x38);
        }
        else {
          uVar23 = 0x3d27000;
          unaff_x25 = 0x3d56000;
          unaff_x26 = 0x3d27000;
          unaff_x27 = 0x3d59000;
          *(long *)(pdVar24 + 4) = *(long *)(*(long *)(lVar22 + 0x20) + 0x10);
          lVar41 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected_TypeInfo*/ uRam0000000003d27ed0);
          /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected$$.ctor*/ func_0x0155d928(lVar41,lVar22,uRam0000000003d59ee8,0);
          *(long *)(pdVar24 + 6) = lVar41;
          uVar40 = *(undefined8 *)(lVar22 + 0x18);
          lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected_TypeInfo*/ uRam0000000003d27ec8);
          /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected$$.ctor*/ func_0x0155d6b0(lVar19,uVar40,uRam0000000003d56d48,0);
          *(long *)(pdVar24 + 10) = lVar19;
          lVar41 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected_TypeInfo*/ uRam0000000003d27ec0);
          uVar33 = uRam0000000003d59ef0;
          /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected$$.ctor*/ func_0x0155d438(lVar41,lVar22,uRam0000000003d59ef0,0);
          *(long *)(pdVar24 + 8) = lVar25;
          lVar34 = *(long *)(lVar22 + 0x28);
          *(long *)(pdVar24 + 0xc) = lVar41;
          *(long *)(pdVar24 + 0xe) = lVar34;
          if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x0147da30;
          *(long *)(*(long *)(lVar22 + 0x10) + 0x30) = lVar25;
          if (*(long *)(lVar22 + 0x38) == 0) goto code_r0x0147da30;
          lVar25 = 0x3d1feb8;
          uVar33 = *(ulong *)(lVar22 + 0x70);
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar22 + 0x38),0,uVar33,0);
          pdVar37 = *(dword **)(lVar22 + 0x30);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar22 = 0;
          if (pdVar37 == (dword *)0x0) goto code_r0x0147da30;
          pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138);
          puVar44 = &UNK_0147da10;
          pdVar31 = pdVar37;
          pdVar32 = (dword *)0x3d1feb8;
          pdVar39 = pdVar24;
        }
code_r0x0147079c:
        uVar40 = 0;
        pdVar30 = (dword *)0x0;
        *(undefined8 *)(puVar13 + -0x40) = uVar23;
        *(long *)(puVar13 + -0x38) = lVar19;
        *(long *)(puVar13 + -0x30) = lVar41;
        *(dword **)(puVar13 + -0x28) = pdVar39;
        *(dword **)(puVar13 + -0x20) = pdVar32;
        *(dword **)(puVar13 + -0x18) = pdVar31;
        *(undefined1 **)(puVar13 + -0x10) = puVar43;
        *(undefined **)(puVar13 + -8) = puVar44;
        puVar43 = puVar13 + -0x10;
        pdVar39 = (dword *)0x0;
        pdVar32 = pdVar24;
        if ((bRam0000000003eb486f & 1) == 0) {
          func_0x00f78a20(0x3d53980);
          func_0x00f78a20(0x3d2fb90);
          func_0x00f78a20(0x3d6d050);
          bRam0000000003eb486f = 1;
        }
        *(undefined8 *)(puVar13 + -0x48) = 0;
        lVar41 = *(long *)(pdVar37 + 4);
        if (lVar41 == 0) {
          auVar45 = func_0x00f78af4();
          pdVar31 = auVar45._8_8_;
          *(undefined1 **)(puVar13 + -0x60) = puVar43;
          *(undefined **)(puVar13 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
          lVar41 = *(long *)(auVar45._0_8_ + 0x10);
          if (lVar41 == 0) {
            auVar45 = func_0x00f78af4();
            uVar40 = auVar45._8_8_;
            *(undefined1 **)(puVar13 + -0x70) = puVar13 + -0x60;
            *(undefined **)(puVar13 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
            lVar41 = *(long *)(auVar45._0_8_ + 0x10);
            if (lVar41 != 0) {
              pdVar31 = (dword *)0x0;
              *(undefined8 *)(puVar13 + -0x90) = 0;
              *(dword **)(puVar13 + -0x88) = pdVar24;
              *(dword **)(puVar13 + -0x80) = pdVar37;
              *(dword **)(puVar13 + -0x78) = pdVar27;
              *(undefined8 *)(puVar13 + -0x70) = *(undefined8 *)(puVar13 + -0x70);
              *(undefined8 *)(puVar13 + -0x68) = *(undefined8 *)(puVar13 + -0x68);
              if ((bRam0000000003ebc64b & 1) == 0) {
                func_0x00f78a20(0x3d3ddc8);
                func_0x00f78a20(0x3d3ddd0);
                bRam0000000003ebc64b = 1;
              }
              lVar22 = *(long *)(lVar41 + 0x70);
              if (lVar22 != 0) {
                lVar25 = lVar22;
                if (*(uint *)(lVar22 + 0x18) <= auVar45._8_4_) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  lVar25 = *(long *)(lVar41 + 0x70);
                }
                if (lVar25 != 0) {
                  lVar22 = *(long *)(lVar22 + 0x10) + (long)(int)auVar45._8_4_ * 0x28;
                  uVar21 = *(undefined8 *)(lVar22 + 0x28);
                  uVar23 = *(undefined8 *)(lVar22 + 0x20);
                  uVar16 = *(undefined4 *)(lVar22 + 0x42);
                  *(undefined4 *)(puVar13 + -0xd8) = uVar16;
                  uVar4 = *(undefined2 *)(lVar22 + 0x46);
                  *(undefined2 *)(puVar13 + -0xd4) = uVar4;
                  *(undefined8 *)(puVar13 + -200) = uVar21;
                  *(undefined8 *)(puVar13 + -0xd0) = uVar23;
                  *(undefined8 *)(puVar13 + -0xb8) = uVar21;
                  *(undefined8 *)(puVar13 + -0xc0) = uVar23;
                  *(undefined8 *)(puVar13 + -0xb0) = 0;
                  *(undefined8 *)(puVar13 + -0xa8) = 0;
                  *(undefined2 *)(puVar13 + -0xa0) = 1;
                  *(undefined4 *)(puVar13 + -0x9e) = uVar16;
                  *(undefined2 *)(puVar13 + -0x9a) = uVar4;
                  /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar25,uVar40,puVar13 + -0xc0,uRam0000000003d3ddd0);
                  pdVar24 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar41,uVar40);
                  return pdVar24;
                }
              }
              auVar45 = func_0x00f78af4();
              pdVar28 = auVar45._8_8_;
              puVar14 = puVar13 + -0x110;
              *(undefined8 *)(puVar13 + -0x110) = 0;
              *(long *)(puVar13 + -0x108) = lVar22;
              *(long *)(puVar13 + -0x100) = lVar41;
              *(undefined8 *)(puVar13 + -0xf8) = uVar40;
              *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x70;
              *(undefined **)(puVar13 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
              puVar43 = puVar13 + -0xf0;
              if ((bRam0000000003ebc64c & 1) == 0) {
                func_0x00f78a20(0x3d3ddc8);
                bRam0000000003ebc64c = 1;
              }
              lVar41 = *(long *)(auVar45._0_8_ + 0x70);
              if (lVar41 != 0) {
                if (*(uint *)(lVar41 + 0x18) <= auVar45._8_4_) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar41 = *(long *)(*(long *)(lVar41 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28
                                  );
                if (lVar41 == 0) {
                  pdVar24 = (dword *)0x0;
                }
                else {
                  pdVar24 = *(dword **)(lVar41 + 0x40);
                }
                return pdVar24;
              }
              puVar44 = &Core_UI2_UIScreen__ForceExit;
              pdVar27 = (dword *)func_0x00f78af4();
              pdVar37 = (dword *)0x0;
              pdVar24 = (dword *)0x3ebc000;
              goto code_r0x02f882d8;
            }
            auVar45 = func_0x00f78af4();
            pdVar28 = auVar45._8_8_;
            *(undefined1 **)(puVar13 + -0x80) = puVar13 + -0x70;
            *(undefined **)(puVar13 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
            lVar41 = *(long *)(auVar45._0_8_ + 0x10);
            auVar47._8_8_ = pdVar24;
            auVar47._0_8_ = lVar41;
            if (lVar41 != 0) {
              pdVar31 = (dword *)0x0;
              puVar8 = puVar13 + -0x70;
              puVar43 = *(undefined1 **)(puVar13 + -0x80);
              puVar44 = *(undefined **)(puVar13 + -0x78);
              pdVar24 = pdVar37;
              goto code_r0x02f877a8;
            }
            auVar45 = func_0x00f78af4();
            *(undefined1 **)(puVar13 + -0x90) = puVar13 + -0x80;
            *(undefined **)(puVar13 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
            lVar41 = *(long *)(auVar45._0_8_ + 0x10);
            auVar47._8_8_ = auVar45._8_8_;
            auVar47._0_8_ = lVar41;
            if (lVar41 != 0) {
              puVar9 = puVar13 + -0x80;
              puVar43 = *(undefined1 **)(puVar13 + -0x90);
              puVar44 = *(undefined **)(puVar13 + -0x88);
              pdVar28 = pdVar30;
              break;
            }
            auVar45 = func_0x00f78af4();
            *(undefined1 **)(puVar13 + -0xa0) = puVar13 + -0x90;
            *(undefined **)(puVar13 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
            lVar41 = *(long *)(auVar45._0_8_ + 0x10);
            if (lVar41 == 0) {
              auVar45 = func_0x00f78af4();
              *(undefined1 **)(puVar13 + -0xb0) = puVar13 + -0xa0;
              *(undefined **)(puVar13 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
              lVar41 = *(long *)(auVar45._0_8_ + 0x10);
              auVar48._8_8_ = auVar45._8_8_;
              auVar48._0_8_ = lVar41;
              if (lVar41 != 0) {
                pdVar32 = (dword *)0x0;
                puVar10 = puVar13 + -0xa0;
                puVar43 = *(undefined1 **)(puVar13 + -0xb0);
                puVar44 = *(undefined **)(puVar13 + -0xa8);
                goto code_r0x02f884dc;
              }
              auVar45 = func_0x00f78af4();
              *(undefined1 **)(puVar13 + -0xc0) = puVar13 + -0xb0;
              *(undefined **)(puVar13 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
              lVar41 = *(long *)(auVar45._0_8_ + 0x10);
              auVar49._8_8_ = auVar45._8_8_;
              auVar49._0_8_ = lVar41;
              if (lVar41 == 0) {
                auVar45 = func_0x00f78af4();
                *(undefined1 **)(puVar13 + -0xd0) = puVar13 + -0xc0;
                *(undefined **)(puVar13 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                lVar41 = *(long *)(auVar45._0_8_ + 0x10);
                auVar50._8_8_ = auVar45._8_8_;
                auVar50._0_8_ = lVar41;
                if (lVar41 == 0) {
                  pdVar39 = (dword *)func_0x00f78af4();
                  *(undefined8 *)(puVar13 + -0x100) = 0;
                  *(dword **)(puVar13 + -0xf8) = pdVar24;
                  *(dword **)(puVar13 + -0xf0) = pdVar37;
                  *(dword **)(puVar13 + -0xe8) = pdVar27;
                  *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0xd0;
                  *(undefined **)(puVar13 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
                  if ((bRam0000000003eb4871 & 1) == 0) {
                    func_0x00f78a20(0x3d2fb80);
                    func_0x00f78a20(0x3d1c478);
                    bRam0000000003eb4871 = 1;
                  }
                  uVar23 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar23,uRam0000000003d2fb80);
                  *(undefined8 *)(pdVar39 + 0xc) = uVar23;
                  return pdVar39;
                }
                puVar12 = puVar13 + -0xc0;
                puVar43 = *(undefined1 **)(puVar13 + -0xd0);
                puVar44 = *(undefined **)(puVar13 + -200);
                goto code_r0x02f88674;
              }
              puVar11 = puVar13 + -0xb0;
              puVar43 = *(undefined1 **)(puVar13 + -0xc0);
              puVar44 = *(undefined **)(puVar13 + -0xb8);
              pdVar32 = pdVar30;
              pdVar39 = pdVar24;
            }
            else {
              pdVar32 = (dword *)0x0;
              puVar10 = puVar13 + -0xc0;
              *(undefined8 *)(puVar13 + -0xc0) = 0;
              *(dword **)(puVar13 + -0xb8) = pdVar24;
              *(dword **)(puVar13 + -0xb0) = pdVar37;
              *(dword **)(puVar13 + -0xa8) = pdVar27;
              *(undefined8 *)(puVar13 + -0xa0) = *(undefined8 *)(puVar13 + -0xa0);
              *(undefined8 *)(puVar13 + -0x98) = *(undefined8 *)(puVar13 + -0x98);
              puVar43 = puVar13 + -0xa0;
              pdVar24 = (dword *)0x3ebc000;
              if ((bRam0000000003ebc64f & 1) == 0) {
                func_0x00f78a20(0x3d3ddc8);
                bRam0000000003ebc64f = 1;
              }
              uVar36 = auVar45._8_4_;
              if (((int)uVar36 < 0) || (*(int *)(lVar41 + 0x50) <= (int)uVar36)) {
                return (dword *)0x0;
              }
              lVar41 = *(long *)(lVar41 + 0x70);
              if (lVar41 != 0) {
                if (*(uint *)(lVar41 + 0x18) <= uVar36) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar22 = *(long *)(lVar41 + 0x10) + ((ulong)auVar45._8_8_ & 0xffffffff) * 0x28;
                lVar41 = *(long *)(lVar22 + 0x28);
                cVar2 = *(char *)(lVar22 + 0x40);
                iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar22 + 0x30),0);
                if (iVar17 == 0 || cVar2 != '\0') {
                  return (dword *)0x0;
                }
                if ((lVar41 != 0) && (*(int *)(lVar41 + 0x4c) != 2)) {
                  return (dword *)0x0;
                }
                return (dword *)((long)&MACH_HEADER.magic + 1);
              }
              puVar44 = &Core_UI2_UIManager__GetLayerState;
              auVar48 = func_0x00f78af4();
              pdVar37 = (dword *)0x0;
              pdVar27 = auVar45._8_8_;
code_r0x02f884dc:
              puVar11 = puVar10 + -0x30;
              *(undefined8 *)(puVar10 + -0x30) = 0;
              *(dword **)(puVar10 + -0x28) = pdVar24;
              *(dword **)(puVar10 + -0x20) = pdVar37;
              *(dword **)(puVar10 + -0x18) = pdVar27;
              *(undefined1 **)(puVar10 + -0x10) = puVar43;
              *(undefined **)(puVar10 + -8) = puVar44;
              puVar43 = puVar10 + -0x10;
              if ((bRam0000000003ebc650 & 1) == 0) {
                func_0x00f78a20(0x3d3ddc8);
                bRam0000000003ebc650 = 1;
              }
              lVar41 = *(long *)(auVar48._0_8_ + 0x70);
              if (lVar41 != 0) {
                if (*(uint *)(lVar41 + 0x18) <= auVar48._8_4_) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar41 = *(long *)(*(long *)(lVar41 + 0x10) + (long)(int)auVar48._8_4_ * 0x28 + 0x28
                                  );
                if (lVar41 == 0) {
                  pdVar24 = &MACH_HEADER.cputype;
                }
                else {
                  pdVar24 = (dword *)(ulong)*(uint *)(lVar41 + 0x4c);
                }
                return pdVar24;
              }
              puVar44 = &Core_UI2_UIManager__EnableInput;
              auVar49 = func_0x00f78af4();
              pdVar37 = (dword *)0x0;
              pdVar27 = auVar48._8_8_;
              pdVar39 = (dword *)0x3ebc000;
            }
            pdVar31 = auVar49._8_8_;
            pdVar24 = auVar49._0_8_;
            puVar12 = puVar11 + -0x40;
            *(undefined8 *)(puVar11 + -0x40) = uVar23;
            *(undefined8 *)(puVar11 + -0x38) = 0x3eb4000;
            *(undefined8 *)(puVar11 + -0x30) = 0;
            *(dword **)(puVar11 + -0x28) = pdVar39;
            *(dword **)(puVar11 + -0x20) = pdVar37;
            *(dword **)(puVar11 + -0x18) = pdVar27;
            *(undefined1 **)(puVar11 + -0x10) = puVar43;
            *(undefined **)(puVar11 + -8) = puVar44;
            puVar43 = puVar11 + -0x10;
            pdVar39 = (dword *)0x3ebc000;
            pdVar30 = pdVar32;
            if ((bRam0000000003ebc651 & 1) == 0) {
              func_0x00f78a20(0x3d2a5c0);
              func_0x00f78a20(0x3d3ddc8);
              bRam0000000003ebc651 = 1;
            }
            if (*(long *)(pdVar24 + 0x1a) != 0) {
              pdVar30 = (dword *)(ulong)((uint)pdVar32 ^ 1);
              pdVar37 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar24 + 0x1a),pdVar31,pdVar30,0);
              lVar41 = *(long *)(pdVar24 + 0x1c);
              pdVar39 = (dword *)0x0;
              if (lVar41 != 0) {
                uVar36 = auVar49._8_4_;
                if (*(uint *)(lVar41 + 0x18) <= uVar36) {
                  pdVar37 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if ((*(long *)(*(long *)(lVar41 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0) ||
                   (pdVar39 = *(dword **)(pdVar24 + 0xc), pdVar39 == (dword *)0x0)) {
                  return pdVar37;
                }
                lVar41 = *(long *)(pdVar24 + 0x1c);
                pdVar24 = (dword *)0x0;
                if (lVar41 != 0) {
                  if (*(uint *)(lVar41 + 0x18) <= uVar36) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  plVar29 = *(long **)(*(long *)(lVar41 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28);
                  *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
                  *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
                  *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
                  *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
                  *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
                  *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
                  *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
                  *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
                  *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
                  *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
                  *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
                  *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
                  *(dword **)(puVar11 + -0x68) = pdVar39;
                  lVar41 = *(long *)(pdVar39 + 0x1a);
                  if (lVar41 == 0) {
                    puVar43 = puVar11 + -0x68;
                    lVar22 = 1;
                  }
                  else {
                    lVar22 = *(long *)(lVar41 + 0x18);
                    if (lVar22 == 0) {
                      return pdVar39;
                    }
                    puVar43 = (undefined1 *)(lVar41 + 0x20);
                  }
                  lVar41 = 0;
                  goto code_r0x01e71a74;
                }
              }
            }
            puVar44 = &Core_UI2_UIManager__SetScreenVisible;
            auVar50 = func_0x00f78af4();
            pdVar27 = pdVar32;
            pdVar37 = pdVar31;
code_r0x02f88674:
            pdVar32 = auVar50._0_8_;
            *(dword **)(puVar12 + -0x30) = pdVar39;
            *(dword **)(puVar12 + -0x28) = pdVar24;
            *(dword **)(puVar12 + -0x20) = pdVar37;
            *(dword **)(puVar12 + -0x18) = pdVar27;
            *(undefined1 **)(puVar12 + -0x10) = puVar43;
            *(undefined **)(puVar12 + -8) = puVar44;
            pdVar24 = pdVar32;
            if ((bRam0000000003ebc652 & 1) == 0) {
              pdVar24 = (dword *)func_0x00f78a20(0x3d3ddc8);
              bRam0000000003ebc652 = 1;
            }
            lVar41 = *(long *)(pdVar32 + 0x1c);
            if (lVar41 != 0) {
              uVar36 = auVar50._8_4_;
              if (*(uint *)(lVar41 + 0x18) <= uVar36) {
                pdVar24 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(long *)(*(long *)(lVar41 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0) {
                return pdVar24;
              }
              lVar41 = *(long *)(pdVar32 + 0x1c);
              if (lVar41 != 0) {
                if (*(uint *)(lVar41 + 0x18) <= uVar36) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar41 = *(long *)(*(long *)(lVar41 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28);
                if ((lVar41 != 0) && (plVar29 = *(long **)(lVar41 + 0x28), plVar29 != (long *)0x0))
                {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pdVar24 = (dword *)(**(code **)(*plVar29 + 0x178))
                                               (plVar29,pdVar30,*(undefined8 *)(*plVar29 + 0x180));
                  return pdVar24;
                }
              }
            }
            auVar45 = func_0x00f78af4();
            uVar23 = auVar45._0_8_;
            *(long *)(puVar12 + -0x50) = auVar50._8_8_;
            *(dword **)(puVar12 + -0x48) = pdVar30;
            *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
            *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
            *(undefined8 *)(puVar12 + -0x68) = 0;
            *(undefined8 *)(puVar12 + -0x70) = 0;
            *(undefined8 *)(puVar12 + -0x58) = 0;
            *(undefined8 *)(puVar12 + -0x60) = 0;
            pdVar24 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar23,auVar45._8_8_,puVar12 + -0x70);
            if ((int)pdVar24 != 0) {
              /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar23,*(undefined8 *)(puVar12 + -0x60),
                              *(undefined8 *)(puVar12 + -0x58));
              *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
              *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
              *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
              *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
              pdVar24 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar23,puVar12 + -0x90,1);
            }
            return pdVar24;
          }
          puVar43 = *(undefined1 **)(puVar13 + -0x60);
          puVar44 = *(undefined **)(puVar13 + -0x58);
        }
        else {
          pdVar30 = (dword *)0x0;
          uVar40 = 0;
          puVar44 = &UNK_01470820;
          pdVar31 = pdVar27;
          pdVar32 = pdVar24;
        }
        *(undefined8 *)(puVar13 + -0x90) = uVar23;
        *(undefined8 *)(puVar13 + -0x88) = 0x3eb4000;
        *(undefined8 *)(puVar13 + -0x80) = 0;
        *(dword **)(puVar13 + -0x78) = pdVar24;
        *(dword **)(puVar13 + -0x70) = pdVar37;
        *(dword **)(puVar13 + -0x68) = pdVar27;
        *(undefined1 **)(puVar13 + -0x60) = puVar43;
        *(undefined **)(puVar13 + -0x58) = puVar44;
        if ((bRam0000000003ebc64a & 1) == 0) {
          func_0x00f78a20(0x3d3ddc8);
          func_0x00f78a20(0x3d3ddd0);
          bRam0000000003ebc64a = 1;
        }
        *(undefined8 *)(puVar13 + -0x130) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x128) = unaff_x25;
        *(undefined8 *)(puVar13 + -0x120) = 0x3ebc000;
        *(dword **)(puVar13 + -0x118) = pdVar31;
        *(dword **)(puVar13 + -0x110) = pdVar32;
        *(undefined8 *)(puVar13 + -0x108) = uVar40;
        *(long *)(puVar13 + -0x100) = lVar41;
        *(dword **)(puVar13 + -0xf8) = pdVar30;
        *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x60;
        *(undefined **)(puVar13 + -0xe8) = &UNK_02f87f9c;
        if ((bRam0000000003ebc64e & 1) == 0) {
          func_0x00f78a20(0x3d3ddf0);
          func_0x00f78a20(0x3d3ddf8);
          bRam0000000003ebc64e = 1;
        }
        lVar22 = *(long *)(lVar41 + 0x78);
        if (lVar22 == 0) goto code_r0x02f8812c;
        iVar17 = *(int *)(lVar22 + 0x18);
        if (iVar17 < 1) {
          return (dword *)0x0;
        }
        iVar18 = 1;
        pdVar24 = (dword *)((long)&MACH_HEADER.magic + 1);
        goto code_r0x02f880d0;
      }
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar22 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstChapterForChampaign*/ func_0x01468434(*(long *)(param_1 + 0x90),param_2,0), lVar22 == 0))
      goto LAB_01592efc;
      auVar46._8_8_ = *(undefined8 *)(lVar22 + 0x18);
      auVar46._0_8_ = param_1;
      puVar44 = &UNK_01592d6c;
    }
    lVar22 = auVar46._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d40628;
    *(long *)((long)register0x00000008 + -0x70) = lVar41;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x60) = param_2;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = puVar44;
    uVar23 = 0x3eb5000;
    if ((bRam0000000003eb515e & 1) == 0) {
      func_0x00f78a20(0x3d57268);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb515e = 1;
    }
    unaff_x23 = 0x3d40628;
    if ((*(long *)(lVar22 + 0x90) != 0) &&
       (lVar25 = *(long *)(*(long *)(lVar22 + 0x90) + 0x10), lVar25 != 0)) {
      uVar23 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar25,auVar46._8_8_,uRam0000000003d57268);
      unaff_x23 = 0x3d40628;
      if (*(long *)(lVar22 + 0xa0) != 0) {
        unaff_x23 = 0x3d23000;
        lVar41 = /*Atlas.Stats.UnlockManager$$GetFirstEventWithUncompletedChallenges*/ func_0x01520c74(*(long *)(lVar22 + 0xa0),uVar23,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar41,0,0);
        if (iVar17 == 0) {
          uVar23 = 0;
code_r0x01592fe4:
          Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                    (lVar22,auVar46._8_8_,uVar23,0xffffffff);
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        if ((lVar41 != 0) && (*(long *)(lVar22 + 0x90) != 0)) {
          uVar23 = /*Atlas.Definitions.AtlasDefinitions$$GetEventIndexInChapter*/ func_0x01467f84(*(long *)(lVar22 + 0x90),*(undefined8 *)(lVar41 + 0x18),uVar23,0)
          ;
          goto code_r0x01592fe4;
        }
      }
    }
    param_1 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0xb0) = lVar41;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar23;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xa0) = auVar46;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_Contexts_FrontEndContextSingleplayerState__BackOutOfEventSelect;
    if ((bRam0000000003eb515d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d40628);
      bRam0000000003eb515d = 1;
    }
    lVar25 = *(long *)(param_1 + 0x90);
    lVar22 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((lVar22 == 0) || (lVar25 == 0)) goto code_r0x01593128;
    iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(lVar25,*(undefined8 *)(lVar22 + 0x10),0);
    if (iVar17 == 1) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview
                (param_1,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8));
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    lVar22 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if (lVar22 == 0) goto code_r0x01593128;
    param_2 = *(undefined8 *)(lVar22 + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
code_r0x02f883b0:
  puVar8 = puVar9 + -0x30;
  *(dword **)(puVar9 + -0x30) = pdVar39;
  *(dword **)(puVar9 + -0x28) = pdVar24;
  *(dword **)(puVar9 + -0x20) = pdVar37;
  *(dword **)(puVar9 + -0x18) = pdVar27;
  *(undefined1 **)(puVar9 + -0x10) = puVar43;
  *(undefined **)(puVar9 + -8) = puVar44;
  puVar43 = puVar9 + -0x10;
  puVar44 = &UNK_02f883d8;
  pdVar31 = pdVar28;
  pdVar27 = pdVar32;
  pdVar24 = pdVar28;
  pdVar39 = auVar47._0_8_;
code_r0x02f877a8:
  pdVar37 = auVar47._0_8_;
  puVar14 = puVar8 + -0x60;
  *(dword **)(puVar8 + -0x30) = pdVar39;
  *(long *)(puVar8 + -0x28) = auVar47._8_8_;
  *(dword **)(puVar8 + -0x20) = pdVar24;
  *(dword **)(puVar8 + -0x18) = pdVar27;
  *(undefined1 **)(puVar8 + -0x10) = puVar43;
  *(undefined **)(puVar8 + -8) = puVar44;
  puVar43 = puVar8 + -0x10;
  pdVar24 = pdVar37;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar24 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar36 = (uint)pdVar28;
  if (((int)uVar36 < 0) || ((int)*(long *)(pdVar37 + 0x14) <= (int)uVar36)) {
    return pdVar24;
  }
  lVar41 = *(long *)(pdVar37 + 0x1c);
  if (lVar41 == 0) {
code_r0x02f878a4:
    lVar41 = func_0x00f78af4();
    *(undefined8 *)(puVar8 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar8 + -0x98) = unaff_d8;
    *(dword **)(puVar8 + -0x90) = pdVar39;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(dword **)(puVar8 + -0x80) = pdVar37;
    *(dword **)(puVar8 + -0x78) = pdVar28;
    *(undefined1 **)(puVar8 + -0x70) = puVar43;
    *(undefined **)(puVar8 + -0x68) = &Core_UI2_UIManager__Update;
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
    if (0 < *(int *)(lVar41 + 0x50)) {
      iVar17 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar41,iVar17);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar41,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(lVar41 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar41);
    *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x80);
    *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x78);
    *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
    *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar24 = (dword *)(*pcRam0000000003ec05a0)(uVar23);
    return pdVar24;
  }
  if (*(uint *)(lVar41 + 0x18) <= uVar36) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar41 = *(long *)(lVar41 + 0x10) + ((ulong)pdVar28 & 0xffffffff) * 0x28;
  pdVar39 = *(dword **)(lVar41 + 0x20);
  pdVar27 = *(dword **)(lVar41 + 0x28);
  *(undefined4 *)(puVar8 + -0x60) = *(undefined4 *)(lVar41 + 0x42);
  *(undefined2 *)(puVar8 + -0x5c) = *(undefined2 *)(lVar41 + 0x46);
  if (pdVar27 == (dword *)0x0) {
    lVar41 = *(long *)(pdVar37 + 0x1c);
    if (lVar41 != 0) {
      *(dword **)(puVar8 + -0x58) = pdVar39;
      *(undefined8 *)(puVar8 + -0x50) = 0;
      *(undefined8 *)(puVar8 + -0x48) = 0;
      *(undefined8 *)(puVar8 + -0x40) = 0;
      *(undefined2 *)(puVar8 + -0x38) = 0;
      *(undefined4 *)(puVar8 + -0x36) = *(undefined4 *)(puVar8 + -0x60);
      *(undefined2 *)(puVar8 + -0x32) = *(undefined2 *)(puVar8 + -0x5c);
      pdVar24 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar41,pdVar28,puVar8 + -0x58,uRam0000000003d3ddd0);
      return pdVar24;
    }
    goto code_r0x02f878a4;
  }
  puVar44 = &UNK_02f87848;
  pdVar24 = pdVar27;
code_r0x02f882d8:
  *(dword **)(puVar14 + -0x20) = pdVar37;
  *(dword **)(puVar14 + -0x18) = pdVar28;
  *(undefined1 **)(puVar14 + -0x10) = puVar43;
  *(undefined **)(puVar14 + -8) = puVar44;
  (**(code **)(*(long *)pdVar27 + 0x218))(pdVar27,*(undefined8 *)(*(long *)pdVar27 + 0x220));
  if (*(long *)(pdVar27 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar27 + 10),0);
    pdVar27[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar27,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar24 = (dword *)(**(code **)(*(long *)pdVar27 + 0x228))
                                 (pdVar27,*(undefined8 *)(*(long *)pdVar27 + 0x230));
    return pdVar24;
  }
  func_0x00f78af4();
  puVar9 = puVar14 + -0x40;
  *(dword **)(puVar14 + -0x40) = pdVar37;
  *(dword **)(puVar14 + -0x38) = pdVar27;
  *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
  *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar43 = puVar14 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar41 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar23 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar23,lVar41);
    pdVar24 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar24;
  }
  puVar44 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar47 = func_0x00f78af4();
  pdVar28 = pdVar31;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar25 = *(long *)(puVar43 + lVar41 * 8);
  pcVar42 = *(code **)(lVar25 + 0x10);
  plVar1 = *(long **)(lVar25 + 0x20);
  lVar25 = *(long *)(lVar25 + 0x28);
  if (*(short *)(lVar25 + 0x48) == -1) {
    func_0x00f78ad8(lVar25);
  }
  iVar17 = func_0x00f78a4c(lVar25);
  bVar15 = *(char *)(lVar25 + 0x4a) == '\x03';
  if (iVar17 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar24 = (dword *)(*pcVar42)(plVar29,pdVar31,pdVar32,lVar25);
      }
      else {
        if (((*(short *)(lVar25 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar39 + 6) == 0)) goto code_r0x01e71aac;
        iVar17 = func_0x00f78a44(lVar25);
        iVar18 = func_0x00f78ec0(lVar25);
        if (iVar17 == 0) {
          uVar3 = *(ushort *)(lVar25 + 0x48);
          if (iVar18 == 0) {
            lVar25 = *plVar1 + (ulong)uVar3 * 0x10;
            pdVar24 = (dword *)(**(code **)(lVar25 + 0x138))
                                         (plVar1,plVar29,pdVar31,pdVar32,
                                          *(undefined8 *)(lVar25 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar25 = func_0x00f78a48(lVar25);
          lVar19 = *plVar1;
          uVar33 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar33 != 0) {
            piVar35 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == lVar25) {
                puVar26 = (undefined8 *)
                          (lVar19 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar35 = piVar35 + 4;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          puVar26 = (undefined8 *)func_0x00fac1f0(plVar1,lVar25,(ulong)uVar3);
code_r0x01e71d74:
          pcVar42 = (code *)*puVar26;
          puVar26 = (undefined8 *)puVar26[1];
        }
        else {
          if (iVar18 == 0) {
            uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar19 = *plVar1;
            uVar33 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar33 != 0) {
              piVar35 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)(lVar25 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar25 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar35 = piVar35 + 4;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
            }
            lVar19 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar23 = *(undefined8 *)(lVar19 + 8);
          }
          puVar26 = (undefined8 *)func_0x00f78acc(uVar23,lVar25);
          pcVar42 = (code *)*puVar26;
        }
        pdVar24 = (dword *)(*pcVar42)(plVar1,plVar29,pdVar31,pdVar32,puVar26);
      }
    }
    else {
      if ((*(short *)(lVar25 + 0x48) == -1) || (*(long *)(pdVar39 + 6) == 0)) goto code_r0x01e71bbc;
      iVar17 = func_0x00f78a44(lVar25);
      iVar18 = func_0x00f78ec0(lVar25);
      if (iVar17 == 0) {
        uVar3 = *(ushort *)(lVar25 + 0x48);
        if (iVar18 == 0) {
          lVar25 = *plVar29 + (ulong)uVar3 * 0x10;
          pdVar24 = (dword *)(**(code **)(lVar25 + 0x138))
                                       (plVar29,pdVar31,pdVar32,*(undefined8 *)(lVar25 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar25 = func_0x00f78a48(lVar25);
        lVar19 = *plVar29;
        uVar33 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar33 != 0) {
          piVar35 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == lVar25) {
              puVar26 = (undefined8 *)(lVar19 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar35 = piVar35 + 4;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
        puVar26 = (undefined8 *)func_0x00fac1f0(plVar29,lVar25,(ulong)uVar3);
code_r0x01e71d00:
        pcVar42 = (code *)*puVar26;
        puVar26 = (undefined8 *)puVar26[1];
      }
      else {
        if (iVar18 == 0) {
          uVar23 = *(undefined8 *)(*plVar29 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar19 = *plVar29;
          uVar33 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar33 != 0) {
            piVar35 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == *(long *)(lVar25 + 0x18)) {
                lVar19 = lVar19 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar25 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar35 = piVar35 + 4;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          lVar19 = func_0x00fac1f0(plVar29);
code_r0x01e71cd8:
          uVar23 = *(undefined8 *)(lVar19 + 8);
        }
        puVar26 = (undefined8 *)func_0x00f78acc(uVar23,lVar25);
        pcVar42 = (code *)*puVar26;
      }
      pdVar24 = (dword *)(*pcVar42)(plVar29,pdVar31,pdVar32,puVar26);
    }
  }
  else {
    if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar24 = (dword *)(*pcVar42)(plVar1,plVar29,pdVar31,pdVar32,lVar25);
  }
code_r0x01e71bd0:
  lVar41 = lVar41 + 1;
  if (lVar41 == lVar22) {
    return pdVar24;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar33 = /*System.String$$Equals*/ func_0x029caa48(lVar22,pdVar31,5,0);
    if ((uVar33 & 1) != 0) {
      return pdVar24;
    }
    pdVar24 = (dword *)(ulong)(iVar18 < iVar17);
    if (iVar17 == iVar18) {
      return pdVar24;
    }
    lVar22 = *(long *)(lVar41 + 0x78);
    iVar18 = iVar18 + 1;
    if (lVar22 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar22 + 0x18) <= iVar18 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + (long)(int)(iVar18 - 1U) * 0x20 + 0x20);
    if (lVar22 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
code_r0x01593128:
  auVar45 = func_0x00f78af4();
  lVar22 = auVar45._0_8_;
  *(long *)((long)register0x00000008 + -0xd0) = lVar25;
  *(long *)((long)register0x00000008 + -200) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_FrontEnd_FrontEndScene__SetOverrideIP;
  *(long *)(lVar22 + 0xc0) = auVar45._8_8_;
  uVar23 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574();
  *(long *)((long)register0x00000008 + -0xe0) = lVar41;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x3d40628;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  *(undefined8 *)((long)register0x00000008 + -0xc0) =
       *(undefined8 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0xb8) =
       *(undefined8 *)((long)register0x00000008 + -0xb8);
  if ((bRam0000000003eb516e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb516e = 1;
  }
  uVar23 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar22,uVar23);
  uVar40 = *(undefined8 *)(lVar22 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar24 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar40,0);
  if ((int)pdVar24 == 0) {
    return pdVar24;
  }
  plVar29 = *(long **)(lVar22 + 200);
  if (plVar29 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar24 = (dword *)(**(code **)(*plVar29 + 0x198))
                                 (plVar29,uVar23,*(undefined8 *)(*plVar29 + 0x1a0));
    return pdVar24;
  }
  auVar45 = func_0x00f78af4();
  plVar29 = auVar45._8_8_;
  pdVar37 = auVar45._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d23990;
  *(undefined8 *)((long)register0x00000008 + -0x108) = uVar40;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar23;
  *(long *)((long)register0x00000008 + -0xf8) = lVar22;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined **)((long)register0x00000008 + -0xe8) =
       &Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
  pdVar24 = pdVar37;
  if ((bRam0000000003eb5170 & 1) == 0) {
    func_0x00f78a20(0x3d578b8);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b098);
    pdVar24 = (dword *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb5170 = 1;
  }
  if ((plVar29 != (long *)0x0) && (*plVar29 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
code_r0x015947d8:
    pdVar24 = (dword *)func_0x00f78e5c(plVar29);
    return pdVar24;
  }
  lVar41 = *(long *)(pdVar37 + 0x24);
  if (lVar41 != 0) {
    uVar36 = 0;
    while( true ) {
      if (*(int *)(lVar41 + 0x18) <= (int)uVar36) {
        return pdVar24;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar41 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar29,uRam0000000003d5b098);
      lVar22 = *(long *)(pdVar37 + 0x24);
      if ((lVar22 == 0) || (lVar41 == 0)) break;
      uVar23 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar41,uRam0000000003d578b8);
      if (*(uint *)(lVar22 + 0x18) <= uVar36) {
code_r0x015947cc:
        uVar23 = func_0x00f78b24();
        func_0x00f78ac0(uVar23,0);
        goto code_r0x015947d8;
      }
      lVar25 = (long)(int)uVar36;
      *(undefined8 *)(lVar22 + lVar25 * 0x40 + 0x40) = uVar23;
      lVar41 = *(long *)(pdVar37 + 0x24);
      if (lVar41 == 0) break;
      if (*(uint *)(lVar41 + 0x18) <= uVar36) goto code_r0x015947cc;
      lVar41 = *(long *)(lVar41 + lVar25 * 0x40 + 0x40);
      if (lVar41 == 0) break;
      /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar41,0);
      lVar41 = *(long *)(pdVar37 + 0x24);
      if (lVar41 == 0) break;
      if (*(uint *)(lVar41 + 0x18) <= uVar36) goto code_r0x015947cc;
      lVar41 = *(long *)(lVar41 + lVar25 * 0x40 + 0x40);
      if (lVar41 == 0) break;
      uVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar41,0);
      lVar41 = *(long *)(pdVar37 + 0x24);
      if (lVar41 == 0) break;
      if (*(uint *)(lVar41 + 0x18) <= uVar36) goto code_r0x015947cc;
      lVar41 = *(long *)(lVar41 + lVar25 * 0x40 + 0x20);
      if (((lVar41 == 0) || (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) ||
         (lVar41 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar41,0), lVar41 == 0)) break;
      uVar36 = uVar36 + 1;
      pdVar24 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar41,uVar23,0,0);
      lVar41 = *(long *)(pdVar37 + 0x24);
      if (lVar41 == 0) break;
    }
  }
  pdVar24 = (dword *)func_0x00f78af4();
  return pdVar24;
}



// ============================================================
// RVA: 0x1592f00 | Atlas.Contexts.FrontEndContextSingleplayerState.ShowChapter
// ============================================================

/* WARNING: Possible PIC construction at 0x0147da0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x0147dd28) */
/* WARNING: Removing unreachable block (ram,0x0147da10) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                  (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  dword *pdVar23;
  int iVar17;
  int iVar18;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  dword *pdVar27;
  dword *pdVar28;
  long *extraout_x1;
  long *plVar29;
  dword *pdVar30;
  dword *pdVar31;
  dword *pdVar32;
  ulong uVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  dword *pdVar37;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar38;
  undefined8 unaff_x21;
  undefined8 uVar39;
  dword *pdVar40;
  undefined8 uVar41;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar42;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar43;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar44;
  code *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  auVar45._8_8_ = param_2;
  auVar45._0_8_ = param_1;
  do {
    lVar25 = auVar45._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar39 = 0x3eb5000;
    if ((bRam0000000003eb515e & 1) == 0) {
      func_0x00f78a20(0x3d57268);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb515e = 1;
    }
    if ((*(long *)(lVar25 + 0x90) != 0) &&
       (lVar24 = *(long *)(*(long *)(lVar25 + 0x90) + 0x10), lVar24 != 0)) {
      uVar39 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar24,auVar45._8_8_,uRam0000000003d57268);
      if (*(long *)(lVar25 + 0xa0) != 0) {
        unaff_x23 = 0x3d23000;
        unaff_x22 = /*Atlas.Stats.UnlockManager$$GetFirstEventWithUncompletedChallenges*/ func_0x01520c74(*(long *)(lVar25 + 0xa0),uVar39,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
        if (iVar17 == 0) {
          uVar39 = 0;
LAB_01592fe4:
          Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                    (lVar25,auVar45._8_8_,uVar39,0xffffffff);
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
        if ((unaff_x22 != 0) && (*(long *)(lVar25 + 0x90) != 0)) {
          uVar39 = /*Atlas.Definitions.AtlasDefinitions$$GetEventIndexInChapter*/ func_0x01467f84(*(long *)(lVar25 + 0x90),*(undefined8 *)(unaff_x22 + 0x18),uVar39
                                   ,0);
          goto LAB_01592fe4;
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar39;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar45;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Contexts_FrontEndContextSingleplayerState__BackOutOfEventSelect;
    if ((bRam0000000003eb515d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d40628);
      bRam0000000003eb515d = 1;
    }
    lVar24 = *(long *)(unaff_x19 + 0x90);
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(unaff_x19,uRam0000000003d40628);
    if ((lVar25 == 0) || (lVar24 == 0)) {
code_r0x01593128:
      auVar45 = func_0x00f78af4();
      lVar25 = auVar45._0_8_;
      *(long *)((long)register0x00000008 + -0x90) = lVar24;
      *(long *)((long)register0x00000008 + -0x88) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x50);
      *(undefined **)((long)register0x00000008 + -0x78) =
           &Atlas_FrontEnd_FrontEndScene__SetOverrideIP;
      *(long *)(lVar25 + 0xc0) = auVar45._8_8_;
      uVar39 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574();
      *(long *)((long)register0x00000008 + -0xa0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d40628;
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      if ((bRam0000000003eb516e & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb516e = 1;
      }
      uVar39 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar25,uVar39);
      uVar41 = *(undefined8 *)(lVar25 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar23 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar41,0);
      if ((int)pdVar23 == 0) {
        return pdVar23;
      }
      plVar29 = *(long **)(lVar25 + 200);
      if (plVar29 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar23 = (dword *)(**(code **)(*plVar29 + 0x198))
                                     (plVar29,uVar39,*(undefined8 *)(*plVar29 + 0x1a0));
        return pdVar23;
      }
      auVar45 = func_0x00f78af4();
      plVar29 = auVar45._8_8_;
      pdVar37 = auVar45._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d23990;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar41;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar39;
      *(long *)((long)register0x00000008 + -0xb8) = lVar25;
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined **)((long)register0x00000008 + -0xa8) =
           &Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
      pdVar23 = pdVar37;
      if ((bRam0000000003eb5170 & 1) == 0) {
        func_0x00f78a20(0x3d578b8);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d5b098);
        pdVar23 = (dword *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb5170 = 1;
      }
      if ((plVar29 != (long *)0x0) && (*plVar29 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) goto code_r0x015947d8;
      lVar25 = *(long *)(pdVar37 + 0x24);
      if (lVar25 == 0) goto code_r0x015947b0;
      uVar36 = 0;
      break;
    }
    iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(lVar24,*(undefined8 *)(lVar25 + 0x10),0);
    if (iVar17 == 1) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview
                (unaff_x19,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8));
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(unaff_x19,uRam0000000003d40628);
    if (lVar25 == 0) goto code_r0x01593128;
    unaff_x20 = *(undefined8 *)(lVar25 + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x21 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
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
    unaff_x22 = 0x3eb5000;
    unaff_x23 = 0x3d40628;
    if ((bRam0000000003eb515c & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d28ec8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d56d80);
      func_0x00f78a20(0x3d40628);
      func_0x00f78a20(0x3d28ed0);
      func_0x00f78a20(0x3d69c08);
      func_0x00f78a20(0x3d69c18);
      func_0x00f78a20(0x3d69bf8);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb515c = 1;
    }
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(unaff_x19,uRam0000000003d40628);
    if (lVar25 != 0) {
      *(undefined8 *)(lVar25 + 0x10) = unaff_x20;
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(*(long *)(unaff_x19 + 0x90),unaff_x20,0);
        if (iVar17 == 1) {
          if ((*(long *)(unaff_x19 + 0x90) != 0) &&
             (lVar25 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstChapterForChampaign*/ func_0x01468434(*(long *)(unaff_x19 + 0x90),unaff_x20,0), lVar25 != 0)) {
            Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                      (unaff_x19,*(undefined8 *)(lVar25 + 0x18));
            goto LAB_01592e50;
          }
        }
        else if (iVar17 == 0) {
          unaff_x21 = 0x3d21270;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar39 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Freeplay')*/ uRam0000000003d69c08,0);
          iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x20,uVar39,0);
          if (iVar17 != 0) {
            Atlas_Contexts_FrontEndContextSingleplayerState__ShowFreeplay(unaff_x19);
LAB_01592e50:
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar39 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Arcade')*/ uRam0000000003d69bf8,0);
          iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x20,uVar39,0);
          if (iVar17 != 0) {
            Atlas_Contexts_FrontEndContextSingleplayerState__ShowArcadeMapSelect(unaff_x19);
            goto LAB_01592e50;
          }
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar39 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
          pdVar23 = (dword *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x20,uVar39,0);
          if ((int)pdVar23 == 0) {
            return pdVar23;
          }
          lVar25 = *(long *)(unaff_x19 + 0xb8);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar24 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
          unaff_x19 = 0;
          if (lVar25 != 0) goto code_r0x01592edc;
        }
        else {
          lVar25 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData_TypeInfo*/ uRam0000000003d28ed0);
          /*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData$$.ctor*/ func_0x0156a4d8(lVar25,0);
          unaff_x22 = 0;
          if (lVar25 != 0) {
            *(undefined8 *)(lVar25 + 0x10) = unaff_x20;
            *(undefined8 *)(lVar25 + 0x20) = unaff_x21;
            uVar39 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28ec8);
            /*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected$$.ctor*/ func_0x0156a1a4(uVar39,unaff_x19,uRam0000000003d56d80,0);
            *(undefined8 *)(lVar25 + 0x18) = uVar39;
            if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
                      (unaff_x19,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xa0),
                       lVar25,*(undefined8 *)(unaff_x19 + 0xd8));
            goto LAB_01592e50;
          }
        }
      }
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter;
    auVar45 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
code_r0x015946b0:
  if (*(int *)(lVar25 + 0x18) <= (int)uVar36) {
    return pdVar23;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar25 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar29,uRam0000000003d5b098);
  lVar24 = *(long *)(pdVar37 + 0x24);
  if ((lVar24 == 0) || (lVar25 == 0)) {
code_r0x015947b0:
    pdVar23 = (dword *)func_0x00f78af4();
    return pdVar23;
  }
  uVar39 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar25,uRam0000000003d578b8);
  if (*(uint *)(lVar24 + 0x18) <= uVar36) {
code_r0x015947cc:
    uVar39 = func_0x00f78b24();
    func_0x00f78ac0(uVar39,0);
code_r0x015947d8:
    pdVar23 = (dword *)func_0x00f78e5c(plVar29);
    return pdVar23;
  }
  lVar19 = (long)(int)uVar36;
  *(undefined8 *)(lVar24 + lVar19 * 0x40 + 0x40) = uVar39;
  lVar25 = *(long *)(pdVar37 + 0x24);
  if (lVar25 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar25 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar25 = *(long *)(lVar25 + lVar19 * 0x40 + 0x40);
  if (lVar25 == 0) goto code_r0x015947b0;
  /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar25,0);
  lVar25 = *(long *)(pdVar37 + 0x24);
  if (lVar25 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar25 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar25 = *(long *)(lVar25 + lVar19 * 0x40 + 0x40);
  if (lVar25 == 0) goto code_r0x015947b0;
  uVar39 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar25,0);
  lVar25 = *(long *)(pdVar37 + 0x24);
  if (lVar25 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar25 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar25 = *(long *)(lVar25 + lVar19 * 0x40 + 0x20);
  if (((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x18), lVar25 == 0)) ||
     (lVar25 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar25,0), lVar25 == 0)) goto code_r0x015947b0;
  uVar36 = uVar36 + 1;
  pdVar23 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar25,uVar39,0,0);
  lVar25 = *(long *)(pdVar37 + 0x24);
  if (lVar25 == 0) goto code_r0x015947b0;
  goto code_r0x015946b0;
code_r0x01592edc:
  uVar33 = 0;
  uVar39 = *(undefined8 *)((long)register0x00000008 + -0x80);
  lVar20 = *(long *)((long)register0x00000008 + -0x78);
  puVar13 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar39;
  *(long *)((long)register0x00000008 + -0x78) = lVar20;
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
  puVar43 = (undefined1 *)((long)register0x00000008 + -0x50);
  lVar19 = 0x3d27ed8;
  if ((bRam0000000003eb48ce & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56d48);
    func_0x00f78a20(0x3d27ec0);
    func_0x00f78a20(0x3d59ee8);
    func_0x00f78a20(0x3d59ef0);
    func_0x00f78a20(0x3d27ec8);
    func_0x00f78a20(0x3d27ed0);
    func_0x00f78a20(0x3d27ed8);
    bRam0000000003eb48ce = 1;
  }
  pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData_TypeInfo*/ uRam0000000003d27ed8);
  /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData$$.ctor*/ func_0x0155dd18(pdVar23,0);
  if ((*(long *)(lVar25 + 0x20) == 0) || (pdVar23 == (dword *)0x0)) {
code_r0x0147da30:
    auVar45 = func_0x00f78af4();
    lVar38 = auVar45._8_8_;
    lVar34 = auVar45._0_8_;
    *(long *)((long)register0x00000008 + -0xd0) = lVar19;
    *(dword **)((long)register0x00000008 + -200) = pdVar23;
    *(long *)((long)register0x00000008 + -0xc0) = lVar24;
    *(long *)((long)register0x00000008 + -0xb8) = lVar25;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar43;
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &Atlas_League_LeagueModeUIManager__LeagueDaySelected;
    if ((bRam0000000003eb48cf & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d572d0);
      func_0x00f78a20(0x3d71920);
      func_0x00f78a20(0x3d6f370);
      bRam0000000003eb48cf = 1;
    }
    lVar25 = *(long *)(lVar34 + 0x10);
    if ((lVar25 != 0) && (lVar24 = *(long *)(lVar25 + 0x18), lVar24 != 0)) {
      *(long *)(lVar24 + 0x18) = lVar38;
      *(ulong *)(lVar24 + 0x20) = uVar33;
      *(undefined4 *)(lVar24 + 0x10) = 9;
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar41 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar33,0);
      *(undefined8 *)(lVar25 + 0x30) = uVar41;
      if ((*(long *)(lVar34 + 0x10) != 0) &&
         (lVar24 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar24 != 0)) {
        uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar24 + 0x18),/*STR('RaceGameContext')*/ lRam0000000003d71920,0);
        if (*(long *)(lVar34 + 0x20) != 0) {
          lVar38 = *(long *)(*(long *)(lVar34 + 0x20) + 0x10);
          uVar41 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('LeagueMode')*/ uRam0000000003d6f370,0);
          uVar33 = uVar21;
          if (lVar38 != 0) {
            lVar24 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar38,uVar41,uRam0000000003d572d0);
            if ((uVar21 & 1) == 0) {
              if ((lVar24 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                uVar33 = *(ulong *)(lVar24 + 0x28);
                pdVar23 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
                if ((pdVar23 != (dword *)0x0) && (uVar33 != 0)) {
                  puVar26 = (undefined8 *)(pdVar23 + 0x14);
                  goto code_r0x0147dba0;
                }
              }
            }
            else if ((lVar24 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
              uVar33 = *(ulong *)(lVar24 + 0x20);
              pdVar23 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
              if ((pdVar23 != (dword *)0x0) && (uVar33 != 0)) {
                puVar26 = (undefined8 *)(pdVar23 + 0x12);
code_r0x0147dba0:
                *(undefined8 *)(uVar33 + 0x68) = *puVar26;
                if ((*(long *)(lVar34 + 0x10) != 0) &&
                   (lVar24 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar24 != 0)) {
                  *(ulong *)(lVar24 + 0x70) = uVar33;
                  return pdVar23;
                }
              }
            }
          }
        }
      }
    }
    auVar46 = func_0x00f78af4();
    lVar24 = auVar46._0_8_;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar39;
    *(long *)((long)register0x00000008 + -0x108) = lVar20;
    *(long *)((long)register0x00000008 + -0x100) = lVar25;
    *(long *)((long)register0x00000008 + -0xf8) = lVar38;
    *(ulong *)((long)register0x00000008 + -0xf0) = uVar33;
    *(long *)((long)register0x00000008 + -0xe8) = lVar34;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xd8) =
         &Atlas_League_LeagueModeUIManager__ShowLeaderboardPostEvent;
    puVar43 = (undefined1 *)((long)register0x00000008 + -0xe0);
    lVar19 = 0x3d27e58;
    if ((bRam0000000003eb48d0 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      func_0x00f78a20(0x3d63588);
      func_0x00f78a20(0x3d27e58);
      bRam0000000003eb48d0 = 1;
    }
    lVar25 = func_0x00f78aec(/*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d27e58);
    /*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0$$.ctor*/ func_0x0155bc64(lVar25,0);
    if (lVar25 != 0) {
      lVar20 = 0x3d63000;
      *(undefined1 (*) [16])(lVar25 + 0x10) = auVar46;
      pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
      auVar6._8_8_ = pdVar23;
      auVar6._0_8_ = lVar24;
      auVar5._8_8_ = pdVar23;
      auVar5._0_8_ = lVar24;
      auVar46._8_8_ = pdVar23;
      auVar46._0_8_ = lVar24;
      /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
      lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
      /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar19,lVar25,uRam0000000003d63588,0);
      if (pdVar23 != (dword *)0x0) {
        *(long *)(pdVar23 + 6) = lVar19;
        auVar46 = auVar5;
        if (*(long *)(lVar24 + 0x20) != 0) {
          *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar24 + 0x20) + 0x10);
          *(long *)(pdVar23 + 8) = *(long *)(lVar24 + 0x28);
          auVar46 = auVar6;
          if (*(long *)(lVar24 + 0x38) != 0) {
            pdVar40 = (dword *)0x3d1feb8;
            lVar25 = 0x3d1feb8;
            /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar24 + 0x38),0,0,0);
            pdVar37 = *(dword **)(lVar24 + 0x30);
            if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = pdVar23;
            auVar46 = auVar7 << 0x40;
            if (pdVar37 != (dword *)0x0) {
              pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
              puVar44 = &UNK_0147dd28;
              pdVar31 = pdVar37;
              pdVar32 = pdVar23;
              goto code_r0x0147079c;
            }
          }
        }
      }
    }
    lVar24 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x150) = uVar39;
    *(long *)((long)register0x00000008 + -0x148) = lVar20;
    *(long *)((long)register0x00000008 + -0x140) = lVar19;
    *(long *)((long)register0x00000008 + -0x138) = lVar25;
    *(long *)((long)register0x00000008 + -0x130) = auVar46._8_8_;
    *(long *)((long)register0x00000008 + -0x128) = auVar46._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x120) = puVar43;
    *(undefined **)((long)register0x00000008 + -0x118) =
         &Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton;
    lVar25 = 0x3d27e30;
    if ((bRam0000000003eb48d1 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d29bc0);
      func_0x00f78a20(0x3d59ee0);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d1 = 1;
    }
    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
    if (pdVar23 != (dword *)0x0) {
      lVar34 = *(long *)(lVar24 + 0x20);
      lVar38 = *(long *)(lVar24 + 0x28);
      *(long *)(pdVar23 + 6) = 0;
      *(long *)(pdVar23 + 8) = lVar38;
      if (lVar34 != 0) {
        lVar20 = 0x3d59000;
        *(long *)(pdVar23 + 4) = *(long *)(lVar34 + 0x10);
        lVar25 = *(long *)(lVar24 + 0x38);
        lVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar19,lVar24,uRam0000000003d59ee0,0);
        if (lVar25 != 0) {
          lVar20 = 0x3d1feb8;
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar25,0,lVar19,0);
          pdVar37 = *(dword **)(lVar24 + 0x30);
          if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar24 = 0;
          if (pdVar37 != (dword *)0x0) {
            pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
            puVar43 = *(undefined1 **)((long)register0x00000008 + -0x120);
            puVar44 = *(undefined **)((long)register0x00000008 + -0x118);
            pdVar32 = *(dword **)((long)register0x00000008 + -0x130);
            pdVar31 = *(dword **)((long)register0x00000008 + -0x128);
            lVar19 = *(long *)((long)register0x00000008 + -0x140);
            pdVar40 = *(dword **)((long)register0x00000008 + -0x138);
            puVar13 = (undefined1 *)((long)register0x00000008 + -0x110);
            uVar39 = *(undefined8 *)((long)register0x00000008 + -0x150);
            lVar20 = *(long *)((long)register0x00000008 + -0x148);
            goto code_r0x0147079c;
          }
        }
      }
    }
    lVar34 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x180) = lVar19;
    *(long *)((long)register0x00000008 + -0x178) = lVar25;
    *(dword **)((long)register0x00000008 + -0x170) = pdVar23;
    *(long *)((long)register0x00000008 + -0x168) = lVar24;
    *(undefined1 **)((long)register0x00000008 + -0x160) =
         (undefined1 *)((long)register0x00000008 + -0x120);
    *(undefined **)((long)register0x00000008 + -0x158) =
         &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
    uVar41 = 0x3eb4000;
    if ((bRam0000000003eb48d2 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e68);
      func_0x00f78a20(0x3d59ef8);
      func_0x00f78a20(0x3d27e78);
      bRam0000000003eb48d2 = 1;
    }
    if ((*(long *)(lVar34 + 0x28) == 0) ||
       (lVar24 = *(long *)(*(long *)(lVar34 + 0x28) + 0x80), lVar24 == 0)) {
      puVar44 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
      lVar24 = func_0x00f78af4();
    }
    else {
      uVar41 = 0x3d27000;
      lVar25 = 0x3d27000;
      lVar19 = 0x3d59000;
      puVar44 = &UNK_0147df04;
    }
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar41;
    *(long *)((long)register0x00000008 + -0x1d8) = lVar34;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -0x160);
    *(undefined **)((long)register0x00000008 + -0x1c8) = puVar44;
    if ((bRam0000000003eb493a & 1) == 0) {
      func_0x00f78a20(0x3d3d470);
      bRam0000000003eb493a = 1;
    }
    pdVar23 = *(dword **)(lVar24 + 0x18);
    if (pdVar23 != (dword *)0x0) {
      *(undefined8 *)((long)register0x00000008 + -0x1e0) =
           *(undefined8 *)((long)register0x00000008 + -0x1e0);
      *(undefined8 *)((long)register0x00000008 + -0x1d8) =
           *(undefined8 *)((long)register0x00000008 + -0x1d8);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) =
           *(undefined8 *)((long)register0x00000008 + -0x1d0);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) =
           *(undefined8 *)((long)register0x00000008 + -0x1c8);
      pdVar37 = pdVar23;
      if (0 < (int)pdVar23[6]) {
        pdVar37 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar23 + 4),0,pdVar23[6],0);
        pdVar23[6] = 0;
      }
      pdVar23[7] = pdVar23[7] + 1;
      return pdVar37;
    }
    lVar34 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x220) = uVar39;
    *(long *)((long)register0x00000008 + -0x218) = lVar20;
    *(long *)((long)register0x00000008 + -0x210) = lVar19;
    *(long *)((long)register0x00000008 + -0x208) = lVar25;
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x1f8) = lVar24;
    *(undefined1 **)((long)register0x00000008 + -0x1f0) =
         (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(undefined **)((long)register0x00000008 + -0x1e8) =
         &Atlas_League_LeagueModeUIManager__ShowPromotion;
    lVar25 = 0x3d59f00;
    if ((bRam0000000003eb48d3 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d27e88);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d27e90);
      bRam0000000003eb48d3 = 1;
    }
    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
    /*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData$$.ctor*/ func_0x0155cc58(pdVar23,0);
    pdVar40 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
    /*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected$$.ctor*/ func_0x0155c9e0(pdVar40,lVar34,uRam0000000003d59f00,0);
    if (pdVar23 != (dword *)0x0) {
      *(dword **)(pdVar23 + 4) = pdVar40;
      if (*(long *)(lVar34 + 0x38) != 0) {
        pdVar40 = (dword *)0x3d1feb8;
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar34 + 0x38),0,0,0);
        pdVar37 = *(dword **)(lVar34 + 0x30);
        if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar34 = 0;
        if (pdVar37 != (dword *)0x0) {
          pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
          puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
          puVar44 = *(undefined **)((long)register0x00000008 + -0x1e8);
          pdVar32 = *(dword **)((long)register0x00000008 + -0x200);
          pdVar31 = *(dword **)((long)register0x00000008 + -0x1f8);
          lVar19 = *(long *)((long)register0x00000008 + -0x210);
          pdVar40 = *(dword **)((long)register0x00000008 + -0x208);
          puVar13 = (undefined1 *)((long)register0x00000008 + -0x1e0);
          uVar39 = *(undefined8 *)((long)register0x00000008 + -0x220);
          lVar20 = *(long *)((long)register0x00000008 + -0x218);
          goto code_r0x0147079c;
        }
      }
    }
    lVar24 = func_0x00f78af4();
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x260);
    *(undefined8 *)((long)register0x00000008 + -0x260) = uVar39;
    *(undefined8 *)((long)register0x00000008 + -600) = 0x3d27e90;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0x3d59f00;
    *(dword **)((long)register0x00000008 + -0x248) = pdVar40;
    *(dword **)((long)register0x00000008 + -0x240) = pdVar23;
    *(long *)((long)register0x00000008 + -0x238) = lVar34;
    *(undefined1 **)((long)register0x00000008 + -0x230) =
         (undefined1 *)((long)register0x00000008 + -0x1f0);
    *(undefined **)((long)register0x00000008 + -0x228) =
         &Atlas_League_LeagueModeUIManager__ShowReward;
    puVar43 = (undefined1 *)((long)register0x00000008 + -0x230);
    uVar41 = 0x3eb4000;
    if ((bRam0000000003eb48d4 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d59f08);
      func_0x00f78a20(0x3d289a0);
      func_0x00f78a20(0x3d289a8);
      bRam0000000003eb48d4 = 1;
    }
    lVar19 = lVar24;
    lVar20 = 0x3d27e90;
    if (*(long *)(lVar24 + 0x50) == 0) {
code_r0x0147e318:
      puVar44 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
      lVar24 = func_0x00f78af4();
    }
    else {
      uVar41 = /*Atlas.League.LeagueManager$$GetUnlockedRewardOrNull*/ func_0x015f4360(*(long *)(lVar24 + 0x50),0);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
      iVar17 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar41,uVar22,0);
      if (iVar17 != 0) {
        pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
        /*Atlas.UI.Screens.RewardScreen.TransitionData$$.ctor*/ func_0x01565edc(pdVar23,0);
        lVar25 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
        /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar25,lVar24,uRam0000000003d59f08,0);
        pdVar40 = pdVar23;
        lVar20 = 0x3d21270;
        if (pdVar23 != (dword *)0x0) {
          *(long *)(pdVar23 + 4) = lVar25;
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar41,0);
          *(long *)(pdVar23 + 0xc) = lVar19;
          pdVar37 = *(dword **)(lVar24 + 0x30);
          *(long *)(pdVar23 + 0xe) = *(long *)(lVar24 + 0x28);
          *(undefined1 *)(pdVar23 + 0x10) = 1;
          uVar41 = 0x3d1feb8;
          if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar19 = 0;
          lVar20 = 0x3d21270;
          if (pdVar37 != (dword *)0x0) {
            pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
            puVar43 = *(undefined1 **)((long)register0x00000008 + -0x230);
            puVar44 = *(undefined **)((long)register0x00000008 + -0x228);
            pdVar32 = *(dword **)((long)register0x00000008 + -0x240);
            pdVar31 = *(dword **)((long)register0x00000008 + -0x238);
            lVar19 = *(long *)((long)register0x00000008 + -0x250);
            pdVar40 = *(dword **)((long)register0x00000008 + -0x248);
            puVar13 = (undefined1 *)((long)register0x00000008 + -0x220);
            uVar39 = *(undefined8 *)((long)register0x00000008 + -0x260);
            lVar20 = *(long *)((long)register0x00000008 + -600);
            goto code_r0x0147079c;
          }
        }
        goto code_r0x0147e318;
      }
      puVar43 = *(undefined1 **)((long)register0x00000008 + -0x230);
      puVar44 = *(undefined **)((long)register0x00000008 + -0x228);
      uVar41 = *(undefined8 *)((long)register0x00000008 + -0x240);
      lVar19 = *(long *)((long)register0x00000008 + -0x238);
      lVar25 = *(long *)((long)register0x00000008 + -0x250);
      pdVar40 = *(dword **)((long)register0x00000008 + -0x248);
      puVar13 = (undefined1 *)((long)register0x00000008 + -0x220);
      uVar39 = *(undefined8 *)((long)register0x00000008 + -0x260);
      lVar20 = *(long *)((long)register0x00000008 + -600);
    }
    *(long *)(puVar13 + -0x30) = lVar25;
    *(dword **)(puVar13 + -0x28) = pdVar40;
    *(undefined8 *)(puVar13 + -0x20) = uVar41;
    *(long *)(puVar13 + -0x18) = lVar19;
    *(undefined1 **)(puVar13 + -0x10) = puVar43;
    *(undefined **)(puVar13 + -8) = puVar44;
    puVar43 = puVar13 + -0x10;
    pdVar23 = (dword *)0x3eb4000;
    if ((bRam0000000003eb48d5 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d21688);
      func_0x00f78a20(0x3d59f00);
      func_0x00f78a20(0x3d28bb8);
      func_0x00f78a20(0x3d28bc0);
      func_0x00f78a20(0x3d71920);
      bRam0000000003eb48d5 = 1;
    }
    lVar19 = lVar24;
    if (*(long *)(lVar24 + 0x50) == 0) {
code_r0x0147e554:
      puVar44 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
      lVar24 = func_0x00f78af4();
      puVar13 = puVar13 + -0x30;
    }
    else {
      iVar17 = /*Atlas.League.LeagueManager$$StarsAwardedLatch*/ func_0x015f4340(*(long *)(lVar24 + 0x50),0);
      if (iVar17 == 0) {
        pdVar23 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
        /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(pdVar23,0);
        if (pdVar23 != (dword *)0x0) {
          pdVar23[4] = 9;
          *(long *)(pdVar23 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
          pdVar40 = *(dword **)(lVar24 + 0x60);
          if (pdVar40 != (dword *)0x0) {
            uVar41 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(pdVar40,0);
            uVar16 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(pdVar40,uVar41,0);
            pdVar40[0x10] = uVar16;
            if (*(long *)(lVar24 + 0x50) != 0) {
              pdVar40 = *(dword **)(lVar24 + 0x58);
              lVar25 = /*Atlas.League.LeagueManager$$GetPlayerStars*/ func_0x015f41e0(*(long *)(lVar24 + 0x50),0);
              if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar41 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
              if (pdVar40 != (dword *)0x0) {
                /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(pdVar40,lVar25,uVar41,*(undefined8 *)(lVar24 + 0x40),pdVar23,0);
                if (*(long *)(lVar24 + 0x50) != 0) {
                  /*Atlas.League.LeagueManager$$SetStarsAwardedLatch*/ func_0x015f431c(*(long *)(lVar24 + 0x50),0);
                  if (*(long *)(lVar24 + 0x38) != 0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar24 + 0x38),0,0,0);
                    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                    /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar23,0);
                    pdVar40 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                    /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(pdVar40,lVar24,uRam0000000003d59f00,0);
                    if (pdVar23 != (dword *)0x0) {
                      *(dword **)(pdVar23 + 4) = pdVar40;
                      *(undefined1 *)((long)pdVar23 + 0x19) = 1;
                      pdVar37 = *(dword **)(lVar24 + 0x30);
                      pdVar40 = (dword *)0x3d1feb8;
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      lVar19 = 0;
                      if (pdVar37 != (dword *)0x0) {
                        pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                        puVar43 = *(undefined1 **)(puVar13 + -0x10);
                        puVar44 = *(undefined **)(puVar13 + -8);
                        pdVar32 = *(dword **)(puVar13 + -0x20);
                        pdVar31 = *(dword **)(puVar13 + -0x18);
                        lVar19 = *(long *)(puVar13 + -0x30);
                        pdVar40 = *(dword **)(puVar13 + -0x28);
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x0147e554;
      }
      puVar43 = *(undefined1 **)(puVar13 + -0x10);
      puVar44 = *(undefined **)(puVar13 + -8);
      pdVar23 = *(dword **)(puVar13 + -0x20);
      lVar19 = *(long *)(puVar13 + -0x18);
      lVar25 = *(long *)(puVar13 + -0x30);
      pdVar40 = *(dword **)(puVar13 + -0x28);
    }
    *(undefined8 *)(puVar13 + -0x40) = uVar39;
    *(long *)(puVar13 + -0x38) = lVar20;
    *(long *)(puVar13 + -0x30) = lVar25;
    *(dword **)(puVar13 + -0x28) = pdVar40;
    *(dword **)(puVar13 + -0x20) = pdVar23;
    *(long *)(puVar13 + -0x18) = lVar19;
    *(undefined1 **)(puVar13 + -0x10) = puVar43;
    *(undefined **)(puVar13 + -8) = puVar44;
    if ((bRam0000000003eb48d6 & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d59ed8);
      func_0x00f78a20(0x3d27e28);
      func_0x00f78a20(0x3d27e30);
      bRam0000000003eb48d6 = 1;
    }
    pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
    lVar25 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
    /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar25,lVar24,uRam0000000003d59ed8,0);
    if (pdVar23 == (dword *)0x0) {
code_r0x0147e694:
      pdVar23 = (dword *)func_0x00f78af4();
      return pdVar23;
    }
    *(long *)(pdVar23 + 6) = lVar25;
    if (*(long *)(lVar24 + 0x20) == 0) goto code_r0x0147e694;
    *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar24 + 0x20) + 0x10);
    *(long *)(pdVar23 + 8) = *(long *)(lVar24 + 0x28);
    *(undefined1 *)(pdVar23 + 10) = 1;
    if (*(long *)(lVar24 + 0x38) == 0) goto code_r0x0147e694;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar24 + 0x38),0,0,0);
    pdVar37 = *(dword **)(lVar24 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar37 == (dword *)0x0) goto code_r0x0147e694;
    pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
    puVar43 = *(undefined1 **)(puVar13 + -0x10);
    puVar44 = *(undefined **)(puVar13 + -8);
    pdVar32 = *(dword **)(puVar13 + -0x20);
    pdVar31 = *(dword **)(puVar13 + -0x18);
    lVar19 = *(long *)(puVar13 + -0x30);
    pdVar40 = *(dword **)(puVar13 + -0x28);
    uVar39 = *(undefined8 *)(puVar13 + -0x40);
    lVar20 = *(long *)(puVar13 + -0x38);
  }
  else {
    uVar39 = 0x3d27000;
    unaff_x25 = 0x3d56000;
    unaff_x26 = 0x3d27000;
    unaff_x27 = 0x3d59000;
    *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar25 + 0x20) + 0x10);
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected_TypeInfo*/ uRam0000000003d27ed0);
    /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected$$.ctor*/ func_0x0155d928(lVar19,lVar25,uRam0000000003d59ee8,0);
    *(long *)(pdVar23 + 6) = lVar19;
    uVar41 = *(undefined8 *)(lVar25 + 0x18);
    lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected_TypeInfo*/ uRam0000000003d27ec8);
    /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected$$.ctor*/ func_0x0155d6b0(lVar20,uVar41,uRam0000000003d56d48,0);
    *(long *)(pdVar23 + 10) = lVar20;
    lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected_TypeInfo*/ uRam0000000003d27ec0);
    uVar33 = uRam0000000003d59ef0;
    /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected$$.ctor*/ func_0x0155d438(lVar19,lVar25,uRam0000000003d59ef0,0);
    *(long *)(pdVar23 + 8) = lVar24;
    lVar34 = *(long *)(lVar25 + 0x28);
    *(long *)(pdVar23 + 0xc) = lVar19;
    *(long *)(pdVar23 + 0xe) = lVar34;
    if (*(long *)(lVar25 + 0x10) == 0) goto code_r0x0147da30;
    *(long *)(*(long *)(lVar25 + 0x10) + 0x30) = lVar24;
    if (*(long *)(lVar25 + 0x38) == 0) goto code_r0x0147da30;
    lVar24 = 0x3d1feb8;
    uVar33 = *(ulong *)(lVar25 + 0x70);
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar25 + 0x38),0,uVar33,0);
    pdVar37 = *(dword **)(lVar25 + 0x30);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar25 = 0;
    if (pdVar37 == (dword *)0x0) goto code_r0x0147da30;
    pdVar27 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138);
    puVar44 = &UNK_0147da10;
    pdVar31 = pdVar37;
    pdVar32 = (dword *)0x3d1feb8;
    pdVar40 = pdVar23;
  }
code_r0x0147079c:
  uVar41 = 0;
  pdVar30 = (dword *)0x0;
  *(undefined8 *)(puVar13 + -0x40) = uVar39;
  *(long *)(puVar13 + -0x38) = lVar20;
  *(long *)(puVar13 + -0x30) = lVar19;
  *(dword **)(puVar13 + -0x28) = pdVar40;
  *(dword **)(puVar13 + -0x20) = pdVar32;
  *(dword **)(puVar13 + -0x18) = pdVar31;
  *(undefined1 **)(puVar13 + -0x10) = puVar43;
  *(undefined **)(puVar13 + -8) = puVar44;
  puVar43 = puVar13 + -0x10;
  pdVar40 = (dword *)0x0;
  pdVar32 = pdVar23;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)(puVar13 + -0x48) = 0;
  lVar25 = *(long *)(pdVar37 + 4);
  if (lVar25 != 0) {
    pdVar30 = (dword *)0x0;
    uVar41 = 0;
    puVar44 = &UNK_01470820;
    pdVar31 = pdVar27;
    pdVar32 = pdVar23;
code_r0x02f87f38:
    *(undefined8 *)(puVar13 + -0x90) = uVar39;
    *(undefined8 *)(puVar13 + -0x88) = 0x3eb4000;
    *(undefined8 *)(puVar13 + -0x80) = 0;
    *(dword **)(puVar13 + -0x78) = pdVar23;
    *(dword **)(puVar13 + -0x70) = pdVar37;
    *(dword **)(puVar13 + -0x68) = pdVar27;
    *(undefined1 **)(puVar13 + -0x60) = puVar43;
    *(undefined **)(puVar13 + -0x58) = puVar44;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)(puVar13 + -0x130) = unaff_x26;
    *(undefined8 *)(puVar13 + -0x128) = unaff_x25;
    *(undefined8 *)(puVar13 + -0x120) = 0x3ebc000;
    *(dword **)(puVar13 + -0x118) = pdVar31;
    *(dword **)(puVar13 + -0x110) = pdVar32;
    *(undefined8 *)(puVar13 + -0x108) = uVar41;
    *(long *)(puVar13 + -0x100) = lVar25;
    *(dword **)(puVar13 + -0xf8) = pdVar30;
    *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x60;
    *(undefined **)(puVar13 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar24 = *(long *)(lVar25 + 0x78);
    if (lVar24 != 0) {
      iVar17 = *(int *)(lVar24 + 0x18);
      if (iVar17 < 1) {
        return (dword *)0x0;
      }
      iVar18 = 1;
      pdVar23 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar24 + 0x18) <= iVar18 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)(iVar18 - 1U) * 0x20 + 0x20);
        if (lVar24 == 0) break;
        uVar33 = /*System.String$$Equals*/ func_0x029caa48(lVar24,pdVar31,5,0);
        if ((uVar33 & 1) != 0) {
          return pdVar23;
        }
        pdVar23 = (dword *)(ulong)(iVar18 < iVar17);
        if (iVar17 == iVar18) {
          return pdVar23;
        }
        lVar24 = *(long *)(lVar25 + 0x78);
        iVar18 = iVar18 + 1;
      } while (lVar24 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar45 = func_0x00f78af4();
  pdVar31 = auVar45._8_8_;
  *(undefined1 **)(puVar13 + -0x60) = puVar43;
  *(undefined **)(puVar13 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar25 = *(long *)(auVar45._0_8_ + 0x10);
  if (lVar25 != 0) {
    puVar43 = *(undefined1 **)(puVar13 + -0x60);
    puVar44 = *(undefined **)(puVar13 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar45 = func_0x00f78af4();
  uVar41 = auVar45._8_8_;
  *(undefined1 **)(puVar13 + -0x70) = puVar13 + -0x60;
  *(undefined **)(puVar13 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar25 = *(long *)(auVar45._0_8_ + 0x10);
  if (lVar25 != 0) {
    pdVar31 = (dword *)0x0;
    *(undefined8 *)(puVar13 + -0x90) = 0;
    *(dword **)(puVar13 + -0x88) = pdVar23;
    *(dword **)(puVar13 + -0x80) = pdVar37;
    *(dword **)(puVar13 + -0x78) = pdVar27;
    *(undefined8 *)(puVar13 + -0x70) = *(undefined8 *)(puVar13 + -0x70);
    *(undefined8 *)(puVar13 + -0x68) = *(undefined8 *)(puVar13 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar24 = *(long *)(lVar25 + 0x70);
    if (lVar24 != 0) {
      lVar19 = lVar24;
      if (*(uint *)(lVar24 + 0x18) <= auVar45._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar25 + 0x70);
      }
      if (lVar19 != 0) {
        lVar24 = *(long *)(lVar24 + 0x10) + (long)(int)auVar45._8_4_ * 0x28;
        uVar22 = *(undefined8 *)(lVar24 + 0x28);
        uVar39 = *(undefined8 *)(lVar24 + 0x20);
        uVar16 = *(undefined4 *)(lVar24 + 0x42);
        *(undefined4 *)(puVar13 + -0xd8) = uVar16;
        uVar4 = *(undefined2 *)(lVar24 + 0x46);
        *(undefined2 *)(puVar13 + -0xd4) = uVar4;
        *(undefined8 *)(puVar13 + -200) = uVar22;
        *(undefined8 *)(puVar13 + -0xd0) = uVar39;
        *(undefined8 *)(puVar13 + -0xb8) = uVar22;
        *(undefined8 *)(puVar13 + -0xc0) = uVar39;
        *(undefined8 *)(puVar13 + -0xb0) = 0;
        *(undefined8 *)(puVar13 + -0xa8) = 0;
        *(undefined2 *)(puVar13 + -0xa0) = 1;
        *(undefined4 *)(puVar13 + -0x9e) = uVar16;
        *(undefined2 *)(puVar13 + -0x9a) = uVar4;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar41,puVar13 + -0xc0,uRam0000000003d3ddd0);
        pdVar23 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar25,uVar41);
        return pdVar23;
      }
    }
    auVar45 = func_0x00f78af4();
    pdVar28 = auVar45._8_8_;
    puVar14 = puVar13 + -0x110;
    *(undefined8 *)(puVar13 + -0x110) = 0;
    *(long *)(puVar13 + -0x108) = lVar24;
    *(long *)(puVar13 + -0x100) = lVar25;
    *(undefined8 *)(puVar13 + -0xf8) = uVar41;
    *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x70;
    *(undefined **)(puVar13 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar43 = puVar13 + -0xf0;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar25 = *(long *)(auVar45._0_8_ + 0x70);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= auVar45._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 + 0x28);
      if (lVar25 == 0) {
        pdVar23 = (dword *)0x0;
      }
      else {
        pdVar23 = *(dword **)(lVar25 + 0x40);
      }
      return pdVar23;
    }
    puVar44 = &Core_UI2_UIScreen__ForceExit;
    pdVar27 = (dword *)func_0x00f78af4();
    pdVar37 = (dword *)0x0;
    pdVar23 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar45 = func_0x00f78af4();
  pdVar28 = auVar45._8_8_;
  *(undefined1 **)(puVar13 + -0x80) = puVar13 + -0x70;
  *(undefined **)(puVar13 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar25 = *(long *)(auVar45._0_8_ + 0x10);
  auVar47._8_8_ = pdVar23;
  auVar47._0_8_ = lVar25;
  if (lVar25 != 0) {
    pdVar31 = (dword *)0x0;
    puVar8 = puVar13 + -0x70;
    puVar43 = *(undefined1 **)(puVar13 + -0x80);
    puVar44 = *(undefined **)(puVar13 + -0x78);
    pdVar23 = pdVar37;
    goto code_r0x02f877a8;
  }
  auVar45 = func_0x00f78af4();
  *(undefined1 **)(puVar13 + -0x90) = puVar13 + -0x80;
  *(undefined **)(puVar13 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar25 = *(long *)(auVar45._0_8_ + 0x10);
  auVar47._8_8_ = auVar45._8_8_;
  auVar47._0_8_ = lVar25;
  if (lVar25 != 0) {
    puVar9 = puVar13 + -0x80;
    puVar43 = *(undefined1 **)(puVar13 + -0x90);
    puVar44 = *(undefined **)(puVar13 + -0x88);
    pdVar28 = pdVar30;
    while( true ) {
      puVar8 = puVar9 + -0x30;
      *(dword **)(puVar9 + -0x30) = pdVar40;
      *(dword **)(puVar9 + -0x28) = pdVar23;
      *(dword **)(puVar9 + -0x20) = pdVar37;
      *(dword **)(puVar9 + -0x18) = pdVar27;
      *(undefined1 **)(puVar9 + -0x10) = puVar43;
      *(undefined **)(puVar9 + -8) = puVar44;
      puVar43 = puVar9 + -0x10;
      puVar44 = &UNK_02f883d8;
      pdVar31 = pdVar28;
      pdVar27 = pdVar32;
      pdVar23 = pdVar28;
      pdVar40 = auVar47._0_8_;
code_r0x02f877a8:
      pdVar37 = auVar47._0_8_;
      puVar14 = puVar8 + -0x60;
      *(dword **)(puVar8 + -0x30) = pdVar40;
      *(long *)(puVar8 + -0x28) = auVar47._8_8_;
      *(dword **)(puVar8 + -0x20) = pdVar23;
      *(dword **)(puVar8 + -0x18) = pdVar27;
      *(undefined1 **)(puVar8 + -0x10) = puVar43;
      *(undefined **)(puVar8 + -8) = puVar44;
      puVar43 = puVar8 + -0x10;
      pdVar23 = pdVar37;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar23 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar36 = (uint)pdVar28;
      if (((int)uVar36 < 0) || ((int)*(long *)(pdVar37 + 0x14) <= (int)uVar36)) {
        return pdVar23;
      }
      lVar25 = *(long *)(pdVar37 + 0x1c);
      if (lVar25 == 0) break;
      if (*(uint *)(lVar25 + 0x18) <= uVar36) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar25 = *(long *)(lVar25 + 0x10) + ((ulong)pdVar28 & 0xffffffff) * 0x28;
      pdVar40 = *(dword **)(lVar25 + 0x20);
      pdVar27 = *(dword **)(lVar25 + 0x28);
      *(undefined4 *)(puVar8 + -0x60) = *(undefined4 *)(lVar25 + 0x42);
      *(undefined2 *)(puVar8 + -0x5c) = *(undefined2 *)(lVar25 + 0x46);
      if (pdVar27 == (dword *)0x0) {
        lVar25 = *(long *)(pdVar37 + 0x1c);
        if (lVar25 != 0) {
          *(dword **)(puVar8 + -0x58) = pdVar40;
          *(undefined8 *)(puVar8 + -0x50) = 0;
          *(undefined8 *)(puVar8 + -0x48) = 0;
          *(undefined8 *)(puVar8 + -0x40) = 0;
          *(undefined2 *)(puVar8 + -0x38) = 0;
          *(undefined4 *)(puVar8 + -0x36) = *(undefined4 *)(puVar8 + -0x60);
          *(undefined2 *)(puVar8 + -0x32) = *(undefined2 *)(puVar8 + -0x5c);
          pdVar23 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar25,pdVar28,puVar8 + -0x58,uRam0000000003d3ddd0);
          return pdVar23;
        }
        break;
      }
      puVar44 = &UNK_02f87848;
      pdVar23 = pdVar27;
code_r0x02f882d8:
      *(dword **)(puVar14 + -0x20) = pdVar37;
      *(dword **)(puVar14 + -0x18) = pdVar28;
      *(undefined1 **)(puVar14 + -0x10) = puVar43;
      *(undefined **)(puVar14 + -8) = puVar44;
      (**(code **)(*(long *)pdVar27 + 0x218))(pdVar27,*(undefined8 *)(*(long *)pdVar27 + 0x220));
      if (*(long *)(pdVar27 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar27 + 10),0);
        pdVar27[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar27,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar23 = (dword *)(**(code **)(*(long *)pdVar27 + 0x228))
                                     (pdVar27,*(undefined8 *)(*(long *)pdVar27 + 0x230));
        return pdVar23;
      }
      func_0x00f78af4();
      puVar9 = puVar14 + -0x40;
      *(dword **)(puVar14 + -0x40) = pdVar37;
      *(dword **)(puVar14 + -0x38) = pdVar27;
      *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
      *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar43 = puVar14 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar25 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar39 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar39,lVar25);
        pdVar23 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar23;
      }
      puVar44 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar47 = func_0x00f78af4();
      pdVar28 = pdVar31;
    }
    lVar25 = func_0x00f78af4();
    *(undefined8 *)(puVar8 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar8 + -0x98) = unaff_d8;
    *(dword **)(puVar8 + -0x90) = pdVar40;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(dword **)(puVar8 + -0x80) = pdVar37;
    *(dword **)(puVar8 + -0x78) = pdVar28;
    *(undefined1 **)(puVar8 + -0x70) = puVar43;
    *(undefined **)(puVar8 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar39 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar39,0);
    if (0 < *(int *)(lVar25 + 0x50)) {
      iVar17 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar25,iVar17);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar25,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(lVar25 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar25);
    *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x80);
    *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x78);
    *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
    *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar23 = (dword *)(*pcRam0000000003ec05a0)(uVar39);
    return pdVar23;
  }
  auVar45 = func_0x00f78af4();
  *(undefined1 **)(puVar13 + -0xa0) = puVar13 + -0x90;
  *(undefined **)(puVar13 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar25 = *(long *)(auVar45._0_8_ + 0x10);
  if (lVar25 == 0) {
    auVar45 = func_0x00f78af4();
    *(undefined1 **)(puVar13 + -0xb0) = puVar13 + -0xa0;
    *(undefined **)(puVar13 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar25 = *(long *)(auVar45._0_8_ + 0x10);
    auVar48._8_8_ = auVar45._8_8_;
    auVar48._0_8_ = lVar25;
    if (lVar25 != 0) {
      pdVar32 = (dword *)0x0;
      puVar10 = puVar13 + -0xa0;
      puVar43 = *(undefined1 **)(puVar13 + -0xb0);
      puVar44 = *(undefined **)(puVar13 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar45 = func_0x00f78af4();
    *(undefined1 **)(puVar13 + -0xc0) = puVar13 + -0xb0;
    *(undefined **)(puVar13 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar25 = *(long *)(auVar45._0_8_ + 0x10);
    auVar49._8_8_ = auVar45._8_8_;
    auVar49._0_8_ = lVar25;
    if (lVar25 == 0) {
      auVar45 = func_0x00f78af4();
      *(undefined1 **)(puVar13 + -0xd0) = puVar13 + -0xc0;
      *(undefined **)(puVar13 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar25 = *(long *)(auVar45._0_8_ + 0x10);
      auVar50._8_8_ = auVar45._8_8_;
      auVar50._0_8_ = lVar25;
      if (lVar25 == 0) {
        pdVar40 = (dword *)func_0x00f78af4();
        *(undefined8 *)(puVar13 + -0x100) = 0;
        *(dword **)(puVar13 + -0xf8) = pdVar23;
        *(dword **)(puVar13 + -0xf0) = pdVar37;
        *(dword **)(puVar13 + -0xe8) = pdVar27;
        *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0xd0;
        *(undefined **)(puVar13 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar39 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar39,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar40 + 0xc) = uVar39;
        return pdVar40;
      }
      puVar12 = puVar13 + -0xc0;
      puVar43 = *(undefined1 **)(puVar13 + -0xd0);
      puVar44 = *(undefined **)(puVar13 + -200);
      goto code_r0x02f88674;
    }
    puVar11 = puVar13 + -0xb0;
    puVar43 = *(undefined1 **)(puVar13 + -0xc0);
    puVar44 = *(undefined **)(puVar13 + -0xb8);
    pdVar32 = pdVar30;
    pdVar40 = pdVar23;
  }
  else {
    pdVar32 = (dword *)0x0;
    puVar10 = puVar13 + -0xc0;
    *(undefined8 *)(puVar13 + -0xc0) = 0;
    *(dword **)(puVar13 + -0xb8) = pdVar23;
    *(dword **)(puVar13 + -0xb0) = pdVar37;
    *(dword **)(puVar13 + -0xa8) = pdVar27;
    *(undefined8 *)(puVar13 + -0xa0) = *(undefined8 *)(puVar13 + -0xa0);
    *(undefined8 *)(puVar13 + -0x98) = *(undefined8 *)(puVar13 + -0x98);
    puVar43 = puVar13 + -0xa0;
    pdVar23 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar36 = auVar45._8_4_;
    if (((int)uVar36 < 0) || (*(int *)(lVar25 + 0x50) <= (int)uVar36)) {
      return (dword *)0x0;
    }
    lVar25 = *(long *)(lVar25 + 0x70);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= uVar36) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar24 = *(long *)(lVar25 + 0x10) + ((ulong)auVar45._8_8_ & 0xffffffff) * 0x28;
      lVar25 = *(long *)(lVar24 + 0x28);
      cVar2 = *(char *)(lVar24 + 0x40);
      iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar24 + 0x30),0);
      if (iVar17 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar25 != 0) && (*(int *)(lVar25 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar44 = &Core_UI2_UIManager__GetLayerState;
    auVar48 = func_0x00f78af4();
    pdVar37 = (dword *)0x0;
    pdVar27 = auVar45._8_8_;
code_r0x02f884dc:
    puVar11 = puVar10 + -0x30;
    *(undefined8 *)(puVar10 + -0x30) = 0;
    *(dword **)(puVar10 + -0x28) = pdVar23;
    *(dword **)(puVar10 + -0x20) = pdVar37;
    *(dword **)(puVar10 + -0x18) = pdVar27;
    *(undefined1 **)(puVar10 + -0x10) = puVar43;
    *(undefined **)(puVar10 + -8) = puVar44;
    puVar43 = puVar10 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar25 = *(long *)(auVar48._0_8_ + 0x70);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= auVar48._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)auVar48._8_4_ * 0x28 + 0x28);
      if (lVar25 == 0) {
        pdVar23 = &MACH_HEADER.cputype;
      }
      else {
        pdVar23 = (dword *)(ulong)*(uint *)(lVar25 + 0x4c);
      }
      return pdVar23;
    }
    puVar44 = &Core_UI2_UIManager__EnableInput;
    auVar49 = func_0x00f78af4();
    pdVar37 = (dword *)0x0;
    pdVar27 = auVar48._8_8_;
    pdVar40 = (dword *)0x3ebc000;
  }
  pdVar31 = auVar49._8_8_;
  pdVar23 = auVar49._0_8_;
  puVar12 = puVar11 + -0x40;
  *(undefined8 *)(puVar11 + -0x40) = uVar39;
  *(undefined8 *)(puVar11 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar11 + -0x30) = 0;
  *(dword **)(puVar11 + -0x28) = pdVar40;
  *(dword **)(puVar11 + -0x20) = pdVar37;
  *(dword **)(puVar11 + -0x18) = pdVar27;
  *(undefined1 **)(puVar11 + -0x10) = puVar43;
  *(undefined **)(puVar11 + -8) = puVar44;
  puVar43 = puVar11 + -0x10;
  pdVar40 = (dword *)0x3ebc000;
  pdVar30 = pdVar32;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar23 + 0x1a) != 0) {
    pdVar30 = (dword *)(ulong)((uint)pdVar32 ^ 1);
    pdVar37 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar23 + 0x1a),pdVar31,pdVar30,0);
    lVar25 = *(long *)(pdVar23 + 0x1c);
    pdVar40 = (dword *)0x0;
    if (lVar25 != 0) {
      uVar36 = auVar49._8_4_;
      if (*(uint *)(lVar25 + 0x18) <= uVar36) {
        pdVar37 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar25 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0) ||
         (pdVar40 = *(dword **)(pdVar23 + 0xc), pdVar40 == (dword *)0x0)) {
        return pdVar37;
      }
      lVar25 = *(long *)(pdVar23 + 0x1c);
      pdVar23 = (dword *)0x0;
      if (lVar25 != 0) {
        if (*(uint *)(lVar25 + 0x18) <= uVar36) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar29 = *(long **)(*(long *)(lVar25 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28);
        *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
        *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
        *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
        *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
        *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
        *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        *(dword **)(puVar11 + -0x68) = pdVar40;
        lVar25 = *(long *)(pdVar40 + 0x1a);
        if (lVar25 == 0) {
          puVar43 = puVar11 + -0x68;
          lVar24 = 1;
        }
        else {
          lVar24 = *(long *)(lVar25 + 0x18);
          if (lVar24 == 0) {
            return pdVar40;
          }
          puVar43 = (undefined1 *)(lVar25 + 0x20);
        }
        lVar25 = 0;
        do {
          lVar19 = *(long *)(puVar43 + lVar25 * 8);
          pcVar42 = *(code **)(lVar19 + 0x10);
          plVar1 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar17 = func_0x00f78a4c(lVar19);
          bVar15 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar17 == 0) {
            if (bVar15) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar23 = (dword *)(*pcVar42)(plVar29,pdVar31,pdVar32,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar40 + 6) == 0)) goto code_r0x01e71aac;
                iVar17 = func_0x00f78a44(lVar19);
                iVar18 = func_0x00f78ec0(lVar19);
                if (iVar17 == 0) {
                  uVar3 = *(ushort *)(lVar19 + 0x48);
                  if (iVar18 == 0) {
                    lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar23 = (dword *)(**(code **)(lVar19 + 0x138))
                                                 (plVar1,plVar29,pdVar31,pdVar32,
                                                  *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar1;
                  uVar33 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar33 != 0) {
                    piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == lVar19) {
                        puVar26 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar35 = piVar35 + 4;
                      uVar33 = uVar33 - 1;
                    } while (uVar33 != 0);
                  }
                  puVar26 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar42 = (code *)*puVar26;
                  puVar26 = (undefined8 *)puVar26[1];
                }
                else {
                  if (iVar18 == 0) {
                    uVar39 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar1;
                    uVar33 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar33 != 0) {
                      piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar35 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar35 = piVar35 + 4;
                        uVar33 = uVar33 - 1;
                      } while (uVar33 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar39 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar26 = (undefined8 *)func_0x00f78acc(uVar39,lVar19);
                  pcVar42 = (code *)*puVar26;
                }
                pdVar23 = (dword *)(*pcVar42)(plVar1,plVar29,pdVar31,pdVar32,puVar26);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar40 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar17 = func_0x00f78a44(lVar19);
              iVar18 = func_0x00f78ec0(lVar19);
              if (iVar17 == 0) {
                uVar3 = *(ushort *)(lVar19 + 0x48);
                if (iVar18 == 0) {
                  lVar19 = *plVar29 + (ulong)uVar3 * 0x10;
                  pdVar23 = (dword *)(**(code **)(lVar19 + 0x138))
                                               (plVar29,pdVar31,pdVar32,
                                                *(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar29;
                uVar33 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar33 != 0) {
                  piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar35 + -2) == lVar19) {
                      puVar26 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar35 = piVar35 + 4;
                    uVar33 = uVar33 - 1;
                  } while (uVar33 != 0);
                }
                puVar26 = (undefined8 *)func_0x00fac1f0(plVar29,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                pcVar42 = (code *)*puVar26;
                puVar26 = (undefined8 *)puVar26[1];
              }
              else {
                if (iVar18 == 0) {
                  uVar39 = *(undefined8 *)
                            (*plVar29 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar29;
                  uVar33 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar33 != 0) {
                    piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar35 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar35 = piVar35 + 4;
                      uVar33 = uVar33 - 1;
                    } while (uVar33 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar29);
code_r0x01e71cd8:
                  uVar39 = *(undefined8 *)(lVar20 + 8);
                }
                puVar26 = (undefined8 *)func_0x00f78acc(uVar39,lVar19);
                pcVar42 = (code *)*puVar26;
              }
              pdVar23 = (dword *)(*pcVar42)(plVar29,pdVar31,pdVar32,puVar26);
            }
          }
          else {
            if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar23 = (dword *)(*pcVar42)(plVar1,plVar29,pdVar31,pdVar32,lVar19);
          }
code_r0x01e71bd0:
          lVar25 = lVar25 + 1;
          if (lVar25 == lVar24) {
            return pdVar23;
          }
        } while( true );
      }
    }
  }
  puVar44 = &Core_UI2_UIManager__SetScreenVisible;
  auVar50 = func_0x00f78af4();
  pdVar27 = pdVar32;
  pdVar37 = pdVar31;
code_r0x02f88674:
  pdVar32 = auVar50._0_8_;
  *(dword **)(puVar12 + -0x30) = pdVar40;
  *(dword **)(puVar12 + -0x28) = pdVar23;
  *(dword **)(puVar12 + -0x20) = pdVar37;
  *(dword **)(puVar12 + -0x18) = pdVar27;
  *(undefined1 **)(puVar12 + -0x10) = puVar43;
  *(undefined **)(puVar12 + -8) = puVar44;
  pdVar23 = pdVar32;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar23 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar25 = *(long *)(pdVar32 + 0x1c);
  if (lVar25 != 0) {
    uVar36 = auVar50._8_4_;
    if (*(uint *)(lVar25 + 0x18) <= uVar36) {
      pdVar23 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar25 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0) {
      return pdVar23;
    }
    lVar25 = *(long *)(pdVar32 + 0x1c);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= uVar36) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar25 = *(long *)(*(long *)(lVar25 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28);
      if ((lVar25 != 0) && (plVar29 = *(long **)(lVar25 + 0x28), plVar29 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar23 = (dword *)(**(code **)(*plVar29 + 0x178))
                                     (plVar29,pdVar30,*(undefined8 *)(*plVar29 + 0x180));
        return pdVar23;
      }
    }
  }
  auVar45 = func_0x00f78af4();
  uVar39 = auVar45._0_8_;
  *(long *)(puVar12 + -0x50) = auVar50._8_8_;
  *(dword **)(puVar12 + -0x48) = pdVar30;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar12 + -0x68) = 0;
  *(undefined8 *)(puVar12 + -0x70) = 0;
  *(undefined8 *)(puVar12 + -0x58) = 0;
  *(undefined8 *)(puVar12 + -0x60) = 0;
  pdVar23 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar39,auVar45._8_8_,puVar12 + -0x70);
  if ((int)pdVar23 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar39,*(undefined8 *)(puVar12 + -0x60),*(undefined8 *)(puVar12 + -0x58));
    *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
    *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
    *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
    *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
    pdVar23 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar39,puVar12 + -0x90,1);
  }
  return pdVar23;
}



// ============================================================
// RVA: 0x1593010 | Atlas.Contexts.FrontEndContextSingleplayerState.BackOutOfEventSelect
// ============================================================

/* WARNING: Possible PIC construction at 0x0147da0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0147dfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0147df04) */
/* WARNING: Removing unreachable block (ram,0x0147df38) */
/* WARNING: Removing unreachable block (ram,0x0147df44) */
/* WARNING: Removing unreachable block (ram,0x0147df58) */
/* WARNING: Removing unreachable block (ram,0x0147df84) */
/* WARNING: Removing unreachable block (ram,0x0147dfac) */
/* WARNING: Removing unreachable block (ram,0x0147dfb4) */
/* WARNING: Removing unreachable block (ram,0x0147dfb8) */
/* WARNING: Removing unreachable block (ram,0x0147dfbc) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
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
/* WARNING: Removing unreachable block (ram,0x0147dd28) */
/* WARNING: Removing unreachable block (ram,0x0147da10) */
/* WARNING: Removing unreachable block (ram,0x0147dfdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontEndContextSingleplayerState__BackOutOfEventSelect(long param_1)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  dword *pdVar23;
  int iVar17;
  int iVar18;
  long lVar24;
  undefined8 *puVar25;
  dword *pdVar26;
  dword *pdVar27;
  long *extraout_x1;
  long *plVar28;
  dword *pdVar29;
  dword *pdVar30;
  dword *pdVar31;
  ulong uVar32;
  undefined8 uVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  dword *pdVar37;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 unaff_x21;
  dword *pdVar41;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar42;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar43;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar44;
  code *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  auVar45._8_8_ = unaff_x19;
  auVar45._0_8_ = unaff_x20;
  do {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar45;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb515d & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d40628);
      bRam0000000003eb515d = 1;
    }
    lVar38 = *(long *)(param_1 + 0x90);
    lVar24 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if ((lVar24 == 0) || (lVar38 == 0)) {
LAB_01593128:
      auVar45 = func_0x00f78af4();
      lVar24 = auVar45._0_8_;
      *(long *)((long)register0x00000008 + -0x50) = lVar38;
      *(long *)((long)register0x00000008 + -0x48) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) =
           &Atlas_FrontEnd_FrontEndScene__SetOverrideIP;
      *(long *)(lVar24 + 0xc0) = auVar45._8_8_;
      uVar39 = /*Atlas.FrontEnd.FrontEndScene$$get_CurrentIP*/ func_0x01593574();
      *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d40628;
      *(undefined8 *)((long)register0x00000008 + -0x50) =
           *(undefined8 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x48) =
           *(undefined8 *)((long)register0x00000008 + -0x48);
      *(undefined8 *)((long)register0x00000008 + -0x40) =
           *(undefined8 *)((long)register0x00000008 + -0x40);
      *(undefined8 *)((long)register0x00000008 + -0x38) =
           *(undefined8 *)((long)register0x00000008 + -0x38);
      if ((bRam0000000003eb516e & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb516e = 1;
      }
      uVar39 = /*Atlas.FrontEnd.FrontEndScene$$GetIPDefinitionFromIDOrGeneric*/ func_0x01594190(lVar24,uVar39);
      uVar33 = *(undefined8 *)(lVar24 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pdVar23 = (dword *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar33,0);
      if ((int)pdVar23 == 0) {
        return pdVar23;
      }
      plVar28 = *(long **)(lVar24 + 200);
      if (plVar28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar23 = (dword *)(**(code **)(*plVar28 + 0x198))
                                     (plVar28,uVar39,*(undefined8 *)(*plVar28 + 0x1a0));
        return pdVar23;
      }
      auVar45 = func_0x00f78af4();
      plVar28 = auVar45._8_8_;
      pdVar37 = auVar45._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3d23990;
      *(undefined8 *)((long)register0x00000008 + -0x88) = uVar33;
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar39;
      *(long *)((long)register0x00000008 + -0x78) = lVar24;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x68) =
           &Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
      pdVar23 = pdVar37;
      if ((bRam0000000003eb5170 & 1) == 0) {
        func_0x00f78a20(0x3d578b8);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d5b098);
        pdVar23 = (dword *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb5170 = 1;
      }
      if ((plVar28 != (long *)0x0) && (*plVar28 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) goto code_r0x015947d8;
      lVar24 = *(long *)(pdVar37 + 0x24);
      if (lVar24 == 0) goto code_r0x015947b0;
      uVar36 = 0;
      break;
    }
    iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(lVar38,*(undefined8 *)(lVar24 + 0x10),0);
    if (iVar17 == 1) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview
                (param_1,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8));
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    lVar24 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if (lVar24 == 0) goto LAB_01593128;
    uVar39 = *(undefined8 *)(lVar24 + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar33 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
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
    unaff_x22 = 0x3eb5000;
    if ((bRam0000000003eb515c & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d28ec8);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d56d80);
      func_0x00f78a20(0x3d40628);
      func_0x00f78a20(0x3d28ed0);
      func_0x00f78a20(0x3d69c08);
      func_0x00f78a20(0x3d69c18);
      func_0x00f78a20(0x3d69bf8);
      func_0x00f78a20(0x3d65d08);
      bRam0000000003eb515c = 1;
    }
    lVar24 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40628);
    if (lVar24 != 0) {
      *(undefined8 *)(lVar24 + 0x10) = uVar39;
      if (*(long *)(param_1 + 0x90) != 0) {
        iVar17 = /*Atlas.Definitions.AtlasDefinitions$$GetChapterCountForChampaign*/ func_0x014684cc(*(long *)(param_1 + 0x90),uVar39,0);
        if (iVar17 == 1) {
          if ((*(long *)(param_1 + 0x90) != 0) &&
             (lVar24 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstChapterForChampaign*/ func_0x01468434(*(long *)(param_1 + 0x90),uVar39,0), lVar24 != 0)) {
            Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                      (param_1,*(undefined8 *)(lVar24 + 0x18));
            goto LAB_01592e50;
          }
        }
        else {
          if (iVar17 == 0) {
            uVar33 = 0x3d21270;
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Freeplay')*/ uRam0000000003d69c08,0);
            iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar39,uVar22,0);
            if (iVar17 != 0) {
              Atlas_Contexts_FrontEndContextSingleplayerState__ShowFreeplay(param_1);
LAB_01592e50:
              return (dword *)((long)&MACH_HEADER.magic + 1);
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Arcade')*/ uRam0000000003d69bf8,0);
            iVar17 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar39,uVar22,0);
            if (iVar17 != 0) {
              Atlas_Contexts_FrontEndContextSingleplayerState__ShowArcadeMapSelect(param_1);
              goto LAB_01592e50;
            }
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_League')*/ uRam0000000003d69c18,0);
            pdVar23 = (dword *)/*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar39,uVar22,0);
            if ((int)pdVar23 == 0) {
              return pdVar23;
            }
            lVar24 = *(long *)(param_1 + 0xb8);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar38 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('')*/ uRam0000000003d65d08,0);
            param_1 = 0;
            if (lVar24 == 0) goto LAB_01592efc;
            uVar32 = 0;
            uVar39 = *(undefined8 *)((long)register0x00000008 + -0x40);
            lVar20 = *(long *)((long)register0x00000008 + -0x38);
            puVar13 = (undefined1 *)((long)register0x00000008 + -0x60);
            *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
            *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
            *(undefined8 *)((long)register0x00000008 + -0x40) = uVar39;
            *(long *)((long)register0x00000008 + -0x38) = lVar20;
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
            puVar43 = (undefined1 *)((long)register0x00000008 + -0x10);
            lVar19 = 0x3d27ed8;
            if ((bRam0000000003eb48ce & 1) == 0) {
              func_0x00f78a20(0x3d1feb8);
              func_0x00f78a20(0x3d56d48);
              func_0x00f78a20(0x3d27ec0);
              func_0x00f78a20(0x3d59ee8);
              func_0x00f78a20(0x3d59ef0);
              func_0x00f78a20(0x3d27ec8);
              func_0x00f78a20(0x3d27ed0);
              func_0x00f78a20(0x3d27ed8);
              bRam0000000003eb48ce = 1;
            }
            pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData_TypeInfo*/ uRam0000000003d27ed8);
            /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.TransitionData$$.ctor*/ func_0x0155dd18(pdVar23,0);
            if ((*(long *)(lVar24 + 0x20) == 0) || (pdVar23 == (dword *)0x0)) {
code_r0x0147da30:
              auVar45 = func_0x00f78af4();
              lVar40 = auVar45._8_8_;
              lVar34 = auVar45._0_8_;
              *(long *)((long)register0x00000008 + -0x90) = lVar19;
              *(dword **)((long)register0x00000008 + -0x88) = pdVar23;
              *(long *)((long)register0x00000008 + -0x80) = lVar38;
              *(long *)((long)register0x00000008 + -0x78) = lVar24;
              *(undefined1 **)((long)register0x00000008 + -0x70) = puVar43;
              *(undefined **)((long)register0x00000008 + -0x68) =
                   &Atlas_League_LeagueModeUIManager__LeagueDaySelected;
              if ((bRam0000000003eb48cf & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d572d0);
                func_0x00f78a20(0x3d71920);
                func_0x00f78a20(0x3d6f370);
                bRam0000000003eb48cf = 1;
              }
              lVar24 = *(long *)(lVar34 + 0x10);
              if ((lVar24 != 0) && (lVar38 = *(long *)(lVar24 + 0x18), lVar38 != 0)) {
                *(long *)(lVar38 + 0x18) = lVar40;
                *(ulong *)(lVar38 + 0x20) = uVar32;
                *(undefined4 *)(lVar38 + 0x10) = 9;
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar33 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar32,0);
                *(undefined8 *)(lVar24 + 0x30) = uVar33;
                if ((*(long *)(lVar34 + 0x10) != 0) &&
                   (lVar38 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar38 != 0)) {
                  uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar38 + 0x18),/*STR('RaceGameContext')*/ lRam0000000003d71920,0);
                  if (*(long *)(lVar34 + 0x20) != 0) {
                    lVar40 = *(long *)(*(long *)(lVar34 + 0x20) + 0x10);
                    uVar33 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('LeagueMode')*/ uRam0000000003d6f370,0);
                    uVar32 = uVar21;
                    if (lVar40 != 0) {
                      lVar38 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar40,uVar33,uRam0000000003d572d0);
                      if ((uVar21 & 1) == 0) {
                        if ((lVar38 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                          uVar32 = *(ulong *)(lVar38 + 0x28);
                          pdVar23 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
                          if ((pdVar23 != (dword *)0x0) && (uVar32 != 0)) {
                            puVar25 = (undefined8 *)(pdVar23 + 0x14);
                            goto code_r0x0147dba0;
                          }
                        }
                      }
                      else if ((lVar38 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                        uVar32 = *(ulong *)(lVar38 + 0x20);
                        pdVar23 = (dword *)/*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar34 + 0x50),0);
                        if ((pdVar23 != (dword *)0x0) && (uVar32 != 0)) {
                          puVar25 = (undefined8 *)(pdVar23 + 0x12);
code_r0x0147dba0:
                          *(undefined8 *)(uVar32 + 0x68) = *puVar25;
                          if ((*(long *)(lVar34 + 0x10) != 0) &&
                             (lVar38 = *(long *)(*(long *)(lVar34 + 0x10) + 0x18), lVar38 != 0)) {
                            *(ulong *)(lVar38 + 0x70) = uVar32;
                            return pdVar23;
                          }
                        }
                      }
                    }
                  }
                }
              }
              auVar46 = func_0x00f78af4();
              lVar38 = auVar46._0_8_;
              puVar13 = (undefined1 *)((long)register0x00000008 + -0xd0);
              *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar39;
              *(long *)((long)register0x00000008 + -200) = lVar20;
              *(long *)((long)register0x00000008 + -0xc0) = lVar24;
              *(long *)((long)register0x00000008 + -0xb8) = lVar40;
              *(ulong *)((long)register0x00000008 + -0xb0) = uVar32;
              *(long *)((long)register0x00000008 + -0xa8) = lVar34;
              *(undefined1 **)((long)register0x00000008 + -0xa0) =
                   (undefined1 *)((long)register0x00000008 + -0x70);
              *(undefined **)((long)register0x00000008 + -0x98) =
                   &Atlas_League_LeagueModeUIManager__ShowLeaderboardPostEvent;
              puVar43 = (undefined1 *)((long)register0x00000008 + -0xa0);
              lVar19 = 0x3d27e58;
              if ((bRam0000000003eb48d0 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d27e28);
                func_0x00f78a20(0x3d27e30);
                func_0x00f78a20(0x3d63588);
                func_0x00f78a20(0x3d27e58);
                bRam0000000003eb48d0 = 1;
              }
              lVar24 = func_0x00f78aec(/*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0_TypeInfo*/ uRam0000000003d27e58);
              /*Atlas.League.LeagueModeUIManager.<>c__DisplayClass16_0$$.ctor*/ func_0x0155bc64(lVar24,0);
              if (lVar24 != 0) {
                lVar20 = 0x3d63000;
                *(undefined1 (*) [16])(lVar24 + 0x10) = auVar46;
                pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
                auVar6._8_8_ = pdVar23;
                auVar6._0_8_ = lVar38;
                auVar5._8_8_ = pdVar23;
                auVar5._0_8_ = lVar38;
                auVar46._8_8_ = pdVar23;
                auVar46._0_8_ = lVar38;
                /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
                lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
                /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar19,lVar24,uRam0000000003d63588,0);
                if (pdVar23 != (dword *)0x0) {
                  *(long *)(pdVar23 + 6) = lVar19;
                  auVar46 = auVar5;
                  if (*(long *)(lVar38 + 0x20) != 0) {
                    *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar38 + 0x20) + 0x10);
                    *(long *)(pdVar23 + 8) = *(long *)(lVar38 + 0x28);
                    auVar46 = auVar6;
                    if (*(long *)(lVar38 + 0x38) != 0) {
                      pdVar41 = (dword *)0x3d1feb8;
                      lVar24 = 0x3d1feb8;
                      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar38 + 0x38),0,0,0);
                      pdVar37 = *(dword **)(lVar38 + 0x30);
                      if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      auVar7._8_8_ = 0;
                      auVar7._0_8_ = pdVar23;
                      auVar46 = auVar7 << 0x40;
                      if (pdVar37 != (dword *)0x0) {
                        pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
                        puVar44 = &UNK_0147dd28;
                        pdVar30 = pdVar37;
                        pdVar31 = pdVar23;
                        goto code_r0x0147079c;
                      }
                    }
                  }
                }
              }
              lVar38 = func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -0x110) = uVar39;
              *(long *)((long)register0x00000008 + -0x108) = lVar20;
              *(long *)((long)register0x00000008 + -0x100) = lVar19;
              *(long *)((long)register0x00000008 + -0xf8) = lVar24;
              *(long *)((long)register0x00000008 + -0xf0) = auVar46._8_8_;
              *(long *)((long)register0x00000008 + -0xe8) = auVar46._0_8_;
              *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar43;
              *(undefined **)((long)register0x00000008 + -0xd8) =
                   &Atlas_League_LeagueModeUIManager__ShowLeaderboardWithBackButton;
              lVar24 = 0x3d27e30;
              if ((bRam0000000003eb48d1 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d29bc0);
                func_0x00f78a20(0x3d59ee0);
                func_0x00f78a20(0x3d27e30);
                bRam0000000003eb48d1 = 1;
              }
              pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
              /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
              if (pdVar23 != (dword *)0x0) {
                lVar34 = *(long *)(lVar38 + 0x20);
                lVar40 = *(long *)(lVar38 + 0x28);
                *(long *)(pdVar23 + 6) = 0;
                *(long *)(pdVar23 + 8) = lVar40;
                if (lVar34 != 0) {
                  lVar20 = 0x3d59000;
                  *(long *)(pdVar23 + 4) = *(long *)(lVar34 + 0x10);
                  lVar24 = *(long *)(lVar38 + 0x38);
                  lVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
                  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(lVar19,lVar38,uRam0000000003d59ee0,0);
                  if (lVar24 != 0) {
                    lVar20 = 0x3d1feb8;
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar24,0,lVar19,0);
                    pdVar37 = *(dword **)(lVar38 + 0x30);
                    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar38 = 0;
                    if (pdVar37 != (dword *)0x0) {
                      pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
                      puVar43 = *(undefined1 **)((long)register0x00000008 + -0xe0);
                      puVar44 = *(undefined **)((long)register0x00000008 + -0xd8);
                      pdVar31 = *(dword **)((long)register0x00000008 + -0xf0);
                      pdVar30 = *(dword **)((long)register0x00000008 + -0xe8);
                      lVar19 = *(long *)((long)register0x00000008 + -0x100);
                      pdVar41 = *(dword **)((long)register0x00000008 + -0xf8);
                      puVar13 = (undefined1 *)((long)register0x00000008 + -0xd0);
                      uVar39 = *(undefined8 *)((long)register0x00000008 + -0x110);
                      lVar20 = *(long *)((long)register0x00000008 + -0x108);
                      goto code_r0x0147079c;
                    }
                  }
                }
              }
              lVar34 = func_0x00f78af4();
              *(long *)((long)register0x00000008 + -0x140) = lVar19;
              *(long *)((long)register0x00000008 + -0x138) = lVar24;
              *(dword **)((long)register0x00000008 + -0x130) = pdVar23;
              *(long *)((long)register0x00000008 + -0x128) = lVar38;
              *(undefined1 **)((long)register0x00000008 + -0x120) =
                   (undefined1 *)((long)register0x00000008 + -0xe0);
              *(undefined **)((long)register0x00000008 + -0x118) =
                   &Atlas_League_LeagueModeUIManager__DoPodiumSequence;
              uVar33 = 0x3eb4000;
              if ((bRam0000000003eb48d2 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d27e68);
                func_0x00f78a20(0x3d59ef8);
                func_0x00f78a20(0x3d27e78);
                bRam0000000003eb48d2 = 1;
              }
              if ((*(long *)(lVar34 + 0x28) == 0) ||
                 (lVar38 = *(long *)(*(long *)(lVar34 + 0x28) + 0x80), lVar38 == 0)) {
                puVar44 = &Atlas_Lighting_LightWorld__UnRegisterAllMembers;
                lVar38 = func_0x00f78af4();
              }
              else {
                uVar33 = 0x3d27000;
                lVar24 = 0x3d27000;
                lVar19 = 0x3d59000;
                puVar44 = &UNK_0147df04;
              }
              *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar33;
              *(long *)((long)register0x00000008 + -0x198) = lVar34;
              *(undefined1 **)((long)register0x00000008 + -400) =
                   (undefined1 *)((long)register0x00000008 + -0x120);
              *(undefined **)((long)register0x00000008 + -0x188) = puVar44;
              if ((bRam0000000003eb493a & 1) == 0) {
                func_0x00f78a20(0x3d3d470);
                bRam0000000003eb493a = 1;
              }
              pdVar23 = *(dword **)(lVar38 + 0x18);
              if (pdVar23 != (dword *)0x0) {
                *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                     *(undefined8 *)((long)register0x00000008 + -0x1a0);
                *(undefined8 *)((long)register0x00000008 + -0x198) =
                     *(undefined8 *)((long)register0x00000008 + -0x198);
                *(undefined8 *)((long)register0x00000008 + -400) =
                     *(undefined8 *)((long)register0x00000008 + -400);
                *(undefined8 *)((long)register0x00000008 + -0x188) =
                     *(undefined8 *)((long)register0x00000008 + -0x188);
                pdVar37 = pdVar23;
                if (0 < (int)pdVar23[6]) {
                  pdVar37 = (dword *)/*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(pdVar23 + 4),0,pdVar23[6],0);
                  pdVar23[6] = 0;
                }
                pdVar23[7] = pdVar23[7] + 1;
                return pdVar37;
              }
              lVar34 = func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar39;
              *(long *)((long)register0x00000008 + -0x1d8) = lVar20;
              *(long *)((long)register0x00000008 + -0x1d0) = lVar19;
              *(long *)((long)register0x00000008 + -0x1c8) = lVar24;
              *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3eb4000;
              *(long *)((long)register0x00000008 + -0x1b8) = lVar38;
              *(undefined1 **)((long)register0x00000008 + -0x1b0) =
                   (undefined1 *)((long)register0x00000008 + -400);
              *(undefined **)((long)register0x00000008 + -0x1a8) =
                   &Atlas_League_LeagueModeUIManager__ShowPromotion;
              lVar24 = 0x3d59f00;
              if ((bRam0000000003eb48d3 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d27e88);
                func_0x00f78a20(0x3d59f00);
                func_0x00f78a20(0x3d27e90);
                bRam0000000003eb48d3 = 1;
              }
              pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData_TypeInfo*/ uRam0000000003d27e90);
              /*Atlas.UI.Screens.LeaguePromotionScreen.TransitionData$$.ctor*/ func_0x0155cc58(pdVar23,0);
              pdVar41 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected_TypeInfo*/ uRam0000000003d27e88);
              /*Atlas.UI.Screens.LeaguePromotionScreen.ContinueSelected$$.ctor*/ func_0x0155c9e0(pdVar41,lVar34,uRam0000000003d59f00,0);
              if (pdVar23 != (dword *)0x0) {
                *(dword **)(pdVar23 + 4) = pdVar41;
                if (*(long *)(lVar34 + 0x38) != 0) {
                  pdVar41 = (dword *)0x3d1feb8;
                  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar34 + 0x38),0,0,0);
                  pdVar37 = *(dword **)(lVar34 + 0x30);
                  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar34 = 0;
                  if (pdVar37 != (dword *)0x0) {
                    pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x150);
                    puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1b0);
                    puVar44 = *(undefined **)((long)register0x00000008 + -0x1a8);
                    pdVar31 = *(dword **)((long)register0x00000008 + -0x1c0);
                    pdVar30 = *(dword **)((long)register0x00000008 + -0x1b8);
                    lVar19 = *(long *)((long)register0x00000008 + -0x1d0);
                    pdVar41 = *(dword **)((long)register0x00000008 + -0x1c8);
                    puVar13 = (undefined1 *)((long)register0x00000008 + -0x1a0);
                    uVar39 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
                    lVar20 = *(long *)((long)register0x00000008 + -0x1d8);
                    goto code_r0x0147079c;
                  }
                }
              }
              lVar38 = func_0x00f78af4();
              puVar13 = (undefined1 *)((long)register0x00000008 + -0x220);
              *(undefined8 *)((long)register0x00000008 + -0x220) = uVar39;
              *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3d27e90;
              *(undefined8 *)((long)register0x00000008 + -0x210) = 0x3d59f00;
              *(dword **)((long)register0x00000008 + -0x208) = pdVar41;
              *(dword **)((long)register0x00000008 + -0x200) = pdVar23;
              *(long *)((long)register0x00000008 + -0x1f8) = lVar34;
              *(undefined1 **)((long)register0x00000008 + -0x1f0) =
                   (undefined1 *)((long)register0x00000008 + -0x1b0);
              *(undefined **)((long)register0x00000008 + -0x1e8) =
                   &Atlas_League_LeagueModeUIManager__ShowReward;
              puVar43 = (undefined1 *)((long)register0x00000008 + -0x1f0);
              uVar33 = 0x3eb4000;
              if ((bRam0000000003eb48d4 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d59f08);
                func_0x00f78a20(0x3d289a0);
                func_0x00f78a20(0x3d289a8);
                bRam0000000003eb48d4 = 1;
              }
              lVar19 = lVar38;
              lVar20 = 0x3d27e90;
              if (*(long *)(lVar38 + 0x50) == 0) {
code_r0x0147e318:
                puVar44 = &Atlas_League_LeagueModeUIManager__ShowStarsConversion;
                lVar38 = func_0x00f78af4();
              }
              else {
                uVar33 = /*Atlas.League.LeagueManager$$GetUnlockedRewardOrNull*/ func_0x015f4360(*(long *)(lVar38 + 0x50),0);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar22 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
                iVar17 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar33,uVar22,0);
                if (iVar17 != 0) {
                  pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                  /*Atlas.UI.Screens.RewardScreen.TransitionData$$.ctor*/ func_0x01565edc(pdVar23,0);
                  lVar24 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.PostRewardSequence_TypeInfo*/ uRam0000000003d289a0);
                  /*Atlas.UI.Screens.RewardScreen.PostRewardSequence$$.ctor*/ func_0x01565c64(lVar24,lVar38,uRam0000000003d59f08,0);
                  pdVar41 = pdVar23;
                  lVar20 = 0x3d21270;
                  if (pdVar23 != (dword *)0x0) {
                    *(long *)(pdVar23 + 4) = lVar24;
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar33,0);
                    *(long *)(pdVar23 + 0xc) = lVar19;
                    pdVar37 = *(dword **)(lVar38 + 0x30);
                    *(long *)(pdVar23 + 0xe) = *(long *)(lVar38 + 0x28);
                    *(undefined1 *)(pdVar23 + 0x10) = 1;
                    uVar33 = 0x3d1feb8;
                    if (((*(byte *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar19 = 0;
                    lVar20 = 0x3d21270;
                    if (pdVar37 != (dword *)0x0) {
                      pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x90);
                      puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
                      puVar44 = *(undefined **)((long)register0x00000008 + -0x1e8);
                      pdVar31 = *(dword **)((long)register0x00000008 + -0x200);
                      pdVar30 = *(dword **)((long)register0x00000008 + -0x1f8);
                      lVar19 = *(long *)((long)register0x00000008 + -0x210);
                      pdVar41 = *(dword **)((long)register0x00000008 + -0x208);
                      puVar13 = (undefined1 *)((long)register0x00000008 + -0x1e0);
                      uVar39 = *(undefined8 *)((long)register0x00000008 + -0x220);
                      lVar20 = *(long *)((long)register0x00000008 + -0x218);
                      goto code_r0x0147079c;
                    }
                  }
                  goto code_r0x0147e318;
                }
                puVar43 = *(undefined1 **)((long)register0x00000008 + -0x1f0);
                puVar44 = *(undefined **)((long)register0x00000008 + -0x1e8);
                uVar33 = *(undefined8 *)((long)register0x00000008 + -0x200);
                lVar19 = *(long *)((long)register0x00000008 + -0x1f8);
                lVar24 = *(long *)((long)register0x00000008 + -0x210);
                pdVar41 = *(dword **)((long)register0x00000008 + -0x208);
                puVar13 = (undefined1 *)((long)register0x00000008 + -0x1e0);
                uVar39 = *(undefined8 *)((long)register0x00000008 + -0x220);
                lVar20 = *(long *)((long)register0x00000008 + -0x218);
              }
              *(long *)(puVar13 + -0x30) = lVar24;
              *(dword **)(puVar13 + -0x28) = pdVar41;
              *(undefined8 *)(puVar13 + -0x20) = uVar33;
              *(long *)(puVar13 + -0x18) = lVar19;
              *(undefined1 **)(puVar13 + -0x10) = puVar43;
              *(undefined **)(puVar13 + -8) = puVar44;
              puVar43 = puVar13 + -0x10;
              pdVar23 = (dword *)0x3eb4000;
              if ((bRam0000000003eb48d5 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d21070);
                func_0x00f78a20(0x3d21688);
                func_0x00f78a20(0x3d59f00);
                func_0x00f78a20(0x3d28bb8);
                func_0x00f78a20(0x3d28bc0);
                func_0x00f78a20(0x3d71920);
                bRam0000000003eb48d5 = 1;
              }
              lVar19 = lVar38;
              if (*(long *)(lVar38 + 0x50) == 0) {
code_r0x0147e554:
                puVar44 = &Atlas_League_LeagueModeUIManager__ShowLeaderboardAfterPodium;
                lVar38 = func_0x00f78af4();
                puVar13 = puVar13 + -0x30;
              }
              else {
                iVar17 = /*Atlas.League.LeagueManager$$StarsAwardedLatch*/ func_0x015f4340(*(long *)(lVar38 + 0x50),0);
                if (iVar17 == 0) {
                  pdVar23 = (dword *)func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
                  /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970(pdVar23,0);
                  if (pdVar23 != (dword *)0x0) {
                    pdVar23[4] = 9;
                    *(long *)(pdVar23 + 6) = /*STR('RaceGameContext')*/ lRam0000000003d71920;
                    pdVar41 = *(dword **)(lVar38 + 0x60);
                    if (pdVar41 != (dword *)0x0) {
                      uVar33 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(pdVar41,0);
                      uVar16 = /*Atlas.Stats.SeasonsManager$$GetStarsForSeason*/ func_0x014efc88(pdVar41,uVar33,0);
                      pdVar41[0x10] = uVar16;
                      if (*(long *)(lVar38 + 0x50) != 0) {
                        pdVar41 = *(dword **)(lVar38 + 0x58);
                        lVar24 = /*Atlas.League.LeagueManager$$GetPlayerStars*/ func_0x015f41e0(*(long *)(lVar38 + 0x50),0);
                        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar33 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
                        if (pdVar41 != (dword *)0x0) {
                          /*Atlas.Stats.UnlockManager$$EvaluateSeasonAwards*/ func_0x0151f2ec(pdVar41,lVar24,uVar33,*(undefined8 *)(lVar38 + 0x40),
                                          pdVar23,0);
                          if (*(long *)(lVar38 + 0x50) != 0) {
                            /*Atlas.League.LeagueManager$$SetStarsAwardedLatch*/ func_0x015f431c(*(long *)(lVar38 + 0x50),0);
                            if (*(long *)(lVar38 + 0x38) != 0) {
                              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar38 + 0x38),0,0,0);
                              pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.TransitionData_TypeInfo*/ uRam0000000003d28bc0);
                              /*Atlas.UI.Screens.SeasonsScreen.TransitionData$$.ctor*/ func_0x01569c24(pdVar23,0);
                              pdVar41 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.OptionSelected_TypeInfo*/ uRam0000000003d28bb8);
                              /*Atlas.UI.Screens.SeasonsScreen.OptionSelected$$.ctor*/ func_0x015699ac(pdVar41,lVar38,uRam0000000003d59f00,0);
                              if (pdVar23 != (dword *)0x0) {
                                *(dword **)(pdVar23 + 4) = pdVar41;
                                *(undefined1 *)((long)pdVar23 + 0x19) = 1;
                                pdVar37 = *(dword **)(lVar38 + 0x30);
                                pdVar41 = (dword *)0x3d1feb8;
                                if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar19 = 0;
                                if (pdVar37 != (dword *)0x0) {
                                  pdVar26 = *(dword **)
                                             (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 200);
                                  puVar43 = *(undefined1 **)(puVar13 + -0x10);
                                  puVar44 = *(undefined **)(puVar13 + -8);
                                  pdVar31 = *(dword **)(puVar13 + -0x20);
                                  pdVar30 = *(dword **)(puVar13 + -0x18);
                                  lVar19 = *(long *)(puVar13 + -0x30);
                                  pdVar41 = *(dword **)(puVar13 + -0x28);
                                  goto code_r0x0147079c;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto code_r0x0147e554;
                }
                puVar43 = *(undefined1 **)(puVar13 + -0x10);
                puVar44 = *(undefined **)(puVar13 + -8);
                pdVar23 = *(dword **)(puVar13 + -0x20);
                lVar19 = *(long *)(puVar13 + -0x18);
                lVar24 = *(long *)(puVar13 + -0x30);
                pdVar41 = *(dword **)(puVar13 + -0x28);
              }
              *(undefined8 *)(puVar13 + -0x40) = uVar39;
              *(long *)(puVar13 + -0x38) = lVar20;
              *(long *)(puVar13 + -0x30) = lVar24;
              *(dword **)(puVar13 + -0x28) = pdVar41;
              *(dword **)(puVar13 + -0x20) = pdVar23;
              *(long *)(puVar13 + -0x18) = lVar19;
              *(undefined1 **)(puVar13 + -0x10) = puVar43;
              *(undefined **)(puVar13 + -8) = puVar44;
              if ((bRam0000000003eb48d6 & 1) == 0) {
                func_0x00f78a20(0x3d1feb8);
                func_0x00f78a20(0x3d59ed8);
                func_0x00f78a20(0x3d27e28);
                func_0x00f78a20(0x3d27e30);
                bRam0000000003eb48d6 = 1;
              }
              pdVar23 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData_TypeInfo*/ uRam0000000003d27e30);
              /*Atlas.UI.Screens.LeagueLeaderboardScreen.TransitionData$$.ctor*/ func_0x0155bab8(pdVar23,0);
              lVar24 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected_TypeInfo*/ uRam0000000003d27e28);
              /*Atlas.UI.Screens.LeagueLeaderboardScreen.NextSelected$$.ctor*/ func_0x0155b4e8(lVar24,lVar38,uRam0000000003d59ed8,0);
              if (pdVar23 == (dword *)0x0) {
code_r0x0147e694:
                pdVar23 = (dword *)func_0x00f78af4();
                return pdVar23;
              }
              *(long *)(pdVar23 + 6) = lVar24;
              if (*(long *)(lVar38 + 0x20) == 0) goto code_r0x0147e694;
              *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar38 + 0x20) + 0x10);
              *(long *)(pdVar23 + 8) = *(long *)(lVar38 + 0x28);
              *(undefined1 *)(pdVar23 + 10) = 1;
              if (*(long *)(lVar38 + 0x38) == 0) goto code_r0x0147e694;
              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar38 + 0x38),0,0,0);
              pdVar37 = *(dword **)(lVar38 + 0x30);
              if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (pdVar37 == (dword *)0x0) goto code_r0x0147e694;
              pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x140);
              puVar43 = *(undefined1 **)(puVar13 + -0x10);
              puVar44 = *(undefined **)(puVar13 + -8);
              pdVar31 = *(dword **)(puVar13 + -0x20);
              pdVar30 = *(dword **)(puVar13 + -0x18);
              lVar19 = *(long *)(puVar13 + -0x30);
              pdVar41 = *(dword **)(puVar13 + -0x28);
              uVar39 = *(undefined8 *)(puVar13 + -0x40);
              lVar20 = *(long *)(puVar13 + -0x38);
            }
            else {
              uVar39 = 0x3d27000;
              unaff_x25 = 0x3d56000;
              unaff_x26 = 0x3d27000;
              unaff_x27 = 0x3d59000;
              *(long *)(pdVar23 + 4) = *(long *)(*(long *)(lVar24 + 0x20) + 0x10);
              lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected_TypeInfo*/ uRam0000000003d27ed0);
              /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OptionSelected$$.ctor*/ func_0x0155d928(lVar19,lVar24,uRam0000000003d59ee8,0);
              *(long *)(pdVar23 + 6) = lVar19;
              uVar33 = *(undefined8 *)(lVar24 + 0x18);
              lVar20 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected_TypeInfo*/ uRam0000000003d27ec8);
              /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected$$.ctor*/ func_0x0155d6b0(lVar20,uVar33,uRam0000000003d56d48,0);
              *(long *)(pdVar23 + 10) = lVar20;
              lVar19 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected_TypeInfo*/ uRam0000000003d27ec0);
              uVar32 = uRam0000000003d59ef0;
              /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardSelected$$.ctor*/ func_0x0155d438(lVar19,lVar24,uRam0000000003d59ef0,0);
              *(long *)(pdVar23 + 8) = lVar38;
              lVar34 = *(long *)(lVar24 + 0x28);
              *(long *)(pdVar23 + 0xc) = lVar19;
              *(long *)(pdVar23 + 0xe) = lVar34;
              if (*(long *)(lVar24 + 0x10) == 0) goto code_r0x0147da30;
              *(long *)(*(long *)(lVar24 + 0x10) + 0x30) = lVar38;
              if (*(long *)(lVar24 + 0x38) == 0) goto code_r0x0147da30;
              lVar38 = 0x3d1feb8;
              uVar32 = *(ulong *)(lVar24 + 0x70);
              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar24 + 0x38),0,uVar32,0);
              pdVar37 = *(dword **)(lVar24 + 0x30);
              if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar24 = 0;
              if (pdVar37 == (dword *)0x0) goto code_r0x0147da30;
              pdVar26 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x138);
              puVar44 = &UNK_0147da10;
              pdVar30 = pdVar37;
              pdVar31 = (dword *)0x3d1feb8;
              pdVar41 = pdVar23;
            }
code_r0x0147079c:
            uVar33 = 0;
            pdVar29 = (dword *)0x0;
            *(undefined8 *)(puVar13 + -0x40) = uVar39;
            *(long *)(puVar13 + -0x38) = lVar20;
            *(long *)(puVar13 + -0x30) = lVar19;
            *(dword **)(puVar13 + -0x28) = pdVar41;
            *(dword **)(puVar13 + -0x20) = pdVar31;
            *(dword **)(puVar13 + -0x18) = pdVar30;
            *(undefined1 **)(puVar13 + -0x10) = puVar43;
            *(undefined **)(puVar13 + -8) = puVar44;
            puVar43 = puVar13 + -0x10;
            pdVar41 = (dword *)0x0;
            pdVar31 = pdVar23;
            if ((bRam0000000003eb486f & 1) == 0) {
              func_0x00f78a20(0x3d53980);
              func_0x00f78a20(0x3d2fb90);
              func_0x00f78a20(0x3d6d050);
              bRam0000000003eb486f = 1;
            }
            *(undefined8 *)(puVar13 + -0x48) = 0;
            lVar24 = *(long *)(pdVar37 + 4);
            if (lVar24 == 0) {
              auVar45 = func_0x00f78af4();
              pdVar30 = auVar45._8_8_;
              *(undefined1 **)(puVar13 + -0x60) = puVar43;
              *(undefined **)(puVar13 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
              lVar24 = *(long *)(auVar45._0_8_ + 0x10);
              if (lVar24 == 0) {
                auVar45 = func_0x00f78af4();
                uVar33 = auVar45._8_8_;
                *(undefined1 **)(puVar13 + -0x70) = puVar13 + -0x60;
                *(undefined **)(puVar13 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
                lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                if (lVar24 != 0) {
                  pdVar30 = (dword *)0x0;
                  *(undefined8 *)(puVar13 + -0x90) = 0;
                  *(dword **)(puVar13 + -0x88) = pdVar23;
                  *(dword **)(puVar13 + -0x80) = pdVar37;
                  *(dword **)(puVar13 + -0x78) = pdVar26;
                  *(undefined8 *)(puVar13 + -0x70) = *(undefined8 *)(puVar13 + -0x70);
                  *(undefined8 *)(puVar13 + -0x68) = *(undefined8 *)(puVar13 + -0x68);
                  if ((bRam0000000003ebc64b & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    func_0x00f78a20(0x3d3ddd0);
                    bRam0000000003ebc64b = 1;
                  }
                  lVar38 = *(long *)(lVar24 + 0x70);
                  if (lVar38 != 0) {
                    lVar19 = lVar38;
                    if (*(uint *)(lVar38 + 0x18) <= auVar45._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      lVar19 = *(long *)(lVar24 + 0x70);
                    }
                    if (lVar19 != 0) {
                      lVar38 = *(long *)(lVar38 + 0x10) + (long)(int)auVar45._8_4_ * 0x28;
                      uVar22 = *(undefined8 *)(lVar38 + 0x28);
                      uVar39 = *(undefined8 *)(lVar38 + 0x20);
                      uVar16 = *(undefined4 *)(lVar38 + 0x42);
                      *(undefined4 *)(puVar13 + -0xd8) = uVar16;
                      uVar4 = *(undefined2 *)(lVar38 + 0x46);
                      *(undefined2 *)(puVar13 + -0xd4) = uVar4;
                      *(undefined8 *)(puVar13 + -200) = uVar22;
                      *(undefined8 *)(puVar13 + -0xd0) = uVar39;
                      *(undefined8 *)(puVar13 + -0xb8) = uVar22;
                      *(undefined8 *)(puVar13 + -0xc0) = uVar39;
                      *(undefined8 *)(puVar13 + -0xb0) = 0;
                      *(undefined8 *)(puVar13 + -0xa8) = 0;
                      *(undefined2 *)(puVar13 + -0xa0) = 1;
                      *(undefined4 *)(puVar13 + -0x9e) = uVar16;
                      *(undefined2 *)(puVar13 + -0x9a) = uVar4;
                      /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,uVar33,puVar13 + -0xc0,uRam0000000003d3ddd0);
                      pdVar23 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar24,uVar33);
                      return pdVar23;
                    }
                  }
                  auVar45 = func_0x00f78af4();
                  pdVar27 = auVar45._8_8_;
                  puVar14 = puVar13 + -0x110;
                  *(undefined8 *)(puVar13 + -0x110) = 0;
                  *(long *)(puVar13 + -0x108) = lVar38;
                  *(long *)(puVar13 + -0x100) = lVar24;
                  *(undefined8 *)(puVar13 + -0xf8) = uVar33;
                  *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x70;
                  *(undefined **)(puVar13 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
                  puVar43 = puVar13 + -0xf0;
                  if ((bRam0000000003ebc64c & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64c = 1;
                  }
                  lVar24 = *(long *)(auVar45._0_8_ + 0x70);
                  if (lVar24 != 0) {
                    if (*(uint *)(lVar24 + 0x18) <= auVar45._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)auVar45._8_4_ * 0x28 +
                                      0x28);
                    if (lVar24 == 0) {
                      pdVar23 = (dword *)0x0;
                    }
                    else {
                      pdVar23 = *(dword **)(lVar24 + 0x40);
                    }
                    return pdVar23;
                  }
                  puVar44 = &Core_UI2_UIScreen__ForceExit;
                  pdVar26 = (dword *)func_0x00f78af4();
                  pdVar37 = (dword *)0x0;
                  pdVar23 = (dword *)0x3ebc000;
                  goto code_r0x02f882d8;
                }
                auVar45 = func_0x00f78af4();
                pdVar27 = auVar45._8_8_;
                *(undefined1 **)(puVar13 + -0x80) = puVar13 + -0x70;
                *(undefined **)(puVar13 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
                lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                auVar47._8_8_ = pdVar23;
                auVar47._0_8_ = lVar24;
                if (lVar24 != 0) {
                  pdVar30 = (dword *)0x0;
                  puVar8 = puVar13 + -0x70;
                  puVar43 = *(undefined1 **)(puVar13 + -0x80);
                  puVar44 = *(undefined **)(puVar13 + -0x78);
                  pdVar23 = pdVar37;
                  goto code_r0x02f877a8;
                }
                auVar45 = func_0x00f78af4();
                *(undefined1 **)(puVar13 + -0x90) = puVar13 + -0x80;
                *(undefined **)(puVar13 + -0x88) = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen
                ;
                lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                auVar47._8_8_ = auVar45._8_8_;
                auVar47._0_8_ = lVar24;
                if (lVar24 != 0) {
                  puVar9 = puVar13 + -0x80;
                  puVar43 = *(undefined1 **)(puVar13 + -0x90);
                  puVar44 = *(undefined **)(puVar13 + -0x88);
                  pdVar27 = pdVar29;
                  goto code_r0x02f883b0;
                }
                auVar45 = func_0x00f78af4();
                *(undefined1 **)(puVar13 + -0xa0) = puVar13 + -0x90;
                *(undefined **)(puVar13 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
                lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                if (lVar24 == 0) {
                  auVar45 = func_0x00f78af4();
                  *(undefined1 **)(puVar13 + -0xb0) = puVar13 + -0xa0;
                  *(undefined **)(puVar13 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
                  lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                  auVar48._8_8_ = auVar45._8_8_;
                  auVar48._0_8_ = lVar24;
                  if (lVar24 != 0) {
                    pdVar31 = (dword *)0x0;
                    puVar10 = puVar13 + -0xa0;
                    puVar43 = *(undefined1 **)(puVar13 + -0xb0);
                    puVar44 = *(undefined **)(puVar13 + -0xa8);
                    goto code_r0x02f884dc;
                  }
                  auVar45 = func_0x00f78af4();
                  *(undefined1 **)(puVar13 + -0xc0) = puVar13 + -0xb0;
                  *(undefined **)(puVar13 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
                  lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                  auVar49._8_8_ = auVar45._8_8_;
                  auVar49._0_8_ = lVar24;
                  if (lVar24 == 0) {
                    auVar45 = func_0x00f78af4();
                    *(undefined1 **)(puVar13 + -0xd0) = puVar13 + -0xc0;
                    *(undefined **)(puVar13 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
                    lVar24 = *(long *)(auVar45._0_8_ + 0x10);
                    auVar50._8_8_ = auVar45._8_8_;
                    auVar50._0_8_ = lVar24;
                    if (lVar24 == 0) {
                      pdVar41 = (dword *)func_0x00f78af4();
                      *(undefined8 *)(puVar13 + -0x100) = 0;
                      *(dword **)(puVar13 + -0xf8) = pdVar23;
                      *(dword **)(puVar13 + -0xf0) = pdVar37;
                      *(dword **)(puVar13 + -0xe8) = pdVar26;
                      *(undefined1 **)(puVar13 + -0xe0) = puVar13 + -0xd0;
                      *(undefined **)(puVar13 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
                      if ((bRam0000000003eb4871 & 1) == 0) {
                        func_0x00f78a20(0x3d2fb80);
                        func_0x00f78a20(0x3d1c478);
                        bRam0000000003eb4871 = 1;
                      }
                      uVar39 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
                      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar39,uRam0000000003d2fb80);
                      *(undefined8 *)(pdVar41 + 0xc) = uVar39;
                      return pdVar41;
                    }
                    puVar12 = puVar13 + -0xc0;
                    puVar43 = *(undefined1 **)(puVar13 + -0xd0);
                    puVar44 = *(undefined **)(puVar13 + -200);
                    goto code_r0x02f88674;
                  }
                  puVar11 = puVar13 + -0xb0;
                  puVar43 = *(undefined1 **)(puVar13 + -0xc0);
                  puVar44 = *(undefined **)(puVar13 + -0xb8);
                  pdVar31 = pdVar29;
                  pdVar41 = pdVar23;
                }
                else {
                  pdVar31 = (dword *)0x0;
                  puVar10 = puVar13 + -0xc0;
                  *(undefined8 *)(puVar13 + -0xc0) = 0;
                  *(dword **)(puVar13 + -0xb8) = pdVar23;
                  *(dword **)(puVar13 + -0xb0) = pdVar37;
                  *(dword **)(puVar13 + -0xa8) = pdVar26;
                  *(undefined8 *)(puVar13 + -0xa0) = *(undefined8 *)(puVar13 + -0xa0);
                  *(undefined8 *)(puVar13 + -0x98) = *(undefined8 *)(puVar13 + -0x98);
                  puVar43 = puVar13 + -0xa0;
                  pdVar23 = (dword *)0x3ebc000;
                  if ((bRam0000000003ebc64f & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc64f = 1;
                  }
                  uVar36 = auVar45._8_4_;
                  if (((int)uVar36 < 0) || (*(int *)(lVar24 + 0x50) <= (int)uVar36)) {
                    return (dword *)0x0;
                  }
                  lVar24 = *(long *)(lVar24 + 0x70);
                  if (lVar24 != 0) {
                    if (*(uint *)(lVar24 + 0x18) <= uVar36) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar38 = *(long *)(lVar24 + 0x10) + ((ulong)auVar45._8_8_ & 0xffffffff) * 0x28;
                    lVar24 = *(long *)(lVar38 + 0x28);
                    cVar2 = *(char *)(lVar38 + 0x40);
                    iVar17 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar38 + 0x30),0);
                    if (iVar17 == 0 || cVar2 != '\0') {
                      return (dword *)0x0;
                    }
                    if ((lVar24 != 0) && (*(int *)(lVar24 + 0x4c) != 2)) {
                      return (dword *)0x0;
                    }
                    return (dword *)((long)&MACH_HEADER.magic + 1);
                  }
                  puVar44 = &Core_UI2_UIManager__GetLayerState;
                  auVar48 = func_0x00f78af4();
                  pdVar37 = (dword *)0x0;
                  pdVar26 = auVar45._8_8_;
code_r0x02f884dc:
                  puVar11 = puVar10 + -0x30;
                  *(undefined8 *)(puVar10 + -0x30) = 0;
                  *(dword **)(puVar10 + -0x28) = pdVar23;
                  *(dword **)(puVar10 + -0x20) = pdVar37;
                  *(dword **)(puVar10 + -0x18) = pdVar26;
                  *(undefined1 **)(puVar10 + -0x10) = puVar43;
                  *(undefined **)(puVar10 + -8) = puVar44;
                  puVar43 = puVar10 + -0x10;
                  if ((bRam0000000003ebc650 & 1) == 0) {
                    func_0x00f78a20(0x3d3ddc8);
                    bRam0000000003ebc650 = 1;
                  }
                  lVar24 = *(long *)(auVar48._0_8_ + 0x70);
                  if (lVar24 != 0) {
                    if (*(uint *)(lVar24 + 0x18) <= auVar48._8_4_) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)auVar48._8_4_ * 0x28 +
                                      0x28);
                    if (lVar24 == 0) {
                      pdVar23 = &MACH_HEADER.cputype;
                    }
                    else {
                      pdVar23 = (dword *)(ulong)*(uint *)(lVar24 + 0x4c);
                    }
                    return pdVar23;
                  }
                  puVar44 = &Core_UI2_UIManager__EnableInput;
                  auVar49 = func_0x00f78af4();
                  pdVar37 = (dword *)0x0;
                  pdVar26 = auVar48._8_8_;
                  pdVar41 = (dword *)0x3ebc000;
                }
                pdVar30 = auVar49._8_8_;
                pdVar23 = auVar49._0_8_;
                puVar12 = puVar11 + -0x40;
                *(undefined8 *)(puVar11 + -0x40) = uVar39;
                *(undefined8 *)(puVar11 + -0x38) = 0x3eb4000;
                *(undefined8 *)(puVar11 + -0x30) = 0;
                *(dword **)(puVar11 + -0x28) = pdVar41;
                *(dword **)(puVar11 + -0x20) = pdVar37;
                *(dword **)(puVar11 + -0x18) = pdVar26;
                *(undefined1 **)(puVar11 + -0x10) = puVar43;
                *(undefined **)(puVar11 + -8) = puVar44;
                puVar43 = puVar11 + -0x10;
                pdVar41 = (dword *)0x3ebc000;
                pdVar29 = pdVar31;
                if ((bRam0000000003ebc651 & 1) == 0) {
                  func_0x00f78a20(0x3d2a5c0);
                  func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc651 = 1;
                }
                if (*(long *)(pdVar23 + 0x1a) != 0) {
                  pdVar29 = (dword *)(ulong)((uint)pdVar31 ^ 1);
                  pdVar37 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar23 + 0x1a),pdVar30,pdVar29,0);
                  lVar24 = *(long *)(pdVar23 + 0x1c);
                  pdVar41 = (dword *)0x0;
                  if (lVar24 != 0) {
                    uVar36 = auVar49._8_4_;
                    if (*(uint *)(lVar24 + 0x18) <= uVar36) {
                      pdVar37 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    if ((*(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0)
                       || (pdVar41 = *(dword **)(pdVar23 + 0xc), pdVar41 == (dword *)0x0)) {
                      return pdVar37;
                    }
                    lVar24 = *(long *)(pdVar23 + 0x1c);
                    pdVar23 = (dword *)0x0;
                    if (lVar24 != 0) {
                      if (*(uint *)(lVar24 + 0x18) <= uVar36) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      plVar28 = *(long **)(*(long *)(lVar24 + 0x10) + (long)(int)uVar36 * 0x28 +
                                          0x28);
                      *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
                      *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
                      *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
                      *(undefined8 *)(puVar11 + -0x48) = unaff_x25;
                      *(undefined8 *)(puVar11 + -0x40) = *(undefined8 *)(puVar11 + -0x40);
                      *(undefined8 *)(puVar11 + -0x38) = *(undefined8 *)(puVar11 + -0x38);
                      *(undefined8 *)(puVar11 + -0x30) = *(undefined8 *)(puVar11 + -0x30);
                      *(undefined8 *)(puVar11 + -0x28) = *(undefined8 *)(puVar11 + -0x28);
                      *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
                      *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
                      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
                      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
                      *(dword **)(puVar11 + -0x68) = pdVar41;
                      lVar24 = *(long *)(pdVar41 + 0x1a);
                      if (lVar24 == 0) {
                        puVar43 = puVar11 + -0x68;
                        lVar38 = 1;
                      }
                      else {
                        lVar38 = *(long *)(lVar24 + 0x18);
                        if (lVar38 == 0) {
                          return pdVar41;
                        }
                        puVar43 = (undefined1 *)(lVar24 + 0x20);
                      }
                      lVar24 = 0;
                      goto code_r0x01e71a74;
                    }
                  }
                }
                puVar44 = &Core_UI2_UIManager__SetScreenVisible;
                auVar50 = func_0x00f78af4();
                pdVar26 = pdVar31;
                pdVar37 = pdVar30;
code_r0x02f88674:
                pdVar31 = auVar50._0_8_;
                *(dword **)(puVar12 + -0x30) = pdVar41;
                *(dword **)(puVar12 + -0x28) = pdVar23;
                *(dword **)(puVar12 + -0x20) = pdVar37;
                *(dword **)(puVar12 + -0x18) = pdVar26;
                *(undefined1 **)(puVar12 + -0x10) = puVar43;
                *(undefined **)(puVar12 + -8) = puVar44;
                pdVar23 = pdVar31;
                if ((bRam0000000003ebc652 & 1) == 0) {
                  pdVar23 = (dword *)func_0x00f78a20(0x3d3ddc8);
                  bRam0000000003ebc652 = 1;
                }
                lVar24 = *(long *)(pdVar31 + 0x1c);
                if (lVar24 != 0) {
                  uVar36 = auVar50._8_4_;
                  if (*(uint *)(lVar24 + 0x18) <= uVar36) {
                    pdVar23 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  if (*(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28) == 0) {
                    return pdVar23;
                  }
                  lVar24 = *(long *)(pdVar31 + 0x1c);
                  if (lVar24 != 0) {
                    if (*(uint *)(lVar24 + 0x18) <= uVar36) {
                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    }
                    lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar36 * 0x28 + 0x28);
                    if ((lVar24 != 0) &&
                       (plVar28 = *(long **)(lVar24 + 0x28), plVar28 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      pdVar23 = (dword *)(**(code **)(*plVar28 + 0x178))
                                                   (plVar28,pdVar29,
                                                    *(undefined8 *)(*plVar28 + 0x180));
                      return pdVar23;
                    }
                  }
                }
                auVar45 = func_0x00f78af4();
                uVar39 = auVar45._0_8_;
                *(long *)(puVar12 + -0x50) = auVar50._8_8_;
                *(dword **)(puVar12 + -0x48) = pdVar29;
                *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
                *(undefined **)(puVar12 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
                *(undefined8 *)(puVar12 + -0x68) = 0;
                *(undefined8 *)(puVar12 + -0x70) = 0;
                *(undefined8 *)(puVar12 + -0x58) = 0;
                *(undefined8 *)(puVar12 + -0x60) = 0;
                pdVar23 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar39,auVar45._8_8_,puVar12 + -0x70);
                if ((int)pdVar23 != 0) {
                  /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar39,*(undefined8 *)(puVar12 + -0x60),
                                  *(undefined8 *)(puVar12 + -0x58));
                  *(undefined8 *)(puVar12 + -0x88) = *(undefined8 *)(puVar12 + -0x68);
                  *(undefined8 *)(puVar12 + -0x90) = *(undefined8 *)(puVar12 + -0x70);
                  *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x58);
                  *(undefined8 *)(puVar12 + -0x80) = *(undefined8 *)(puVar12 + -0x60);
                  pdVar23 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar39,puVar12 + -0x90,1);
                }
                return pdVar23;
              }
              puVar43 = *(undefined1 **)(puVar13 + -0x60);
              puVar44 = *(undefined **)(puVar13 + -0x58);
            }
            else {
              pdVar29 = (dword *)0x0;
              uVar33 = 0;
              puVar44 = &UNK_01470820;
              pdVar30 = pdVar26;
              pdVar31 = pdVar23;
            }
            *(undefined8 *)(puVar13 + -0x90) = uVar39;
            *(undefined8 *)(puVar13 + -0x88) = 0x3eb4000;
            *(undefined8 *)(puVar13 + -0x80) = 0;
            *(dword **)(puVar13 + -0x78) = pdVar23;
            *(dword **)(puVar13 + -0x70) = pdVar37;
            *(dword **)(puVar13 + -0x68) = pdVar26;
            *(undefined1 **)(puVar13 + -0x60) = puVar43;
            *(undefined **)(puVar13 + -0x58) = puVar44;
            if ((bRam0000000003ebc64a & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64a = 1;
            }
            *(undefined8 *)(puVar13 + -0x130) = unaff_x26;
            *(undefined8 *)(puVar13 + -0x128) = unaff_x25;
            *(undefined8 *)(puVar13 + -0x120) = 0x3ebc000;
            *(dword **)(puVar13 + -0x118) = pdVar30;
            *(dword **)(puVar13 + -0x110) = pdVar31;
            *(undefined8 *)(puVar13 + -0x108) = uVar33;
            *(long *)(puVar13 + -0x100) = lVar24;
            *(dword **)(puVar13 + -0xf8) = pdVar29;
            *(undefined1 **)(puVar13 + -0xf0) = puVar13 + -0x60;
            *(undefined **)(puVar13 + -0xe8) = &UNK_02f87f9c;
            if ((bRam0000000003ebc64e & 1) == 0) {
              func_0x00f78a20(0x3d3ddf0);
              func_0x00f78a20(0x3d3ddf8);
              bRam0000000003ebc64e = 1;
            }
            lVar38 = *(long *)(lVar24 + 0x78);
            if (lVar38 == 0) goto code_r0x02f8812c;
            iVar17 = *(int *)(lVar38 + 0x18);
            if (iVar17 < 1) {
              return (dword *)0x0;
            }
            iVar18 = 1;
            pdVar23 = (dword *)((long)&MACH_HEADER.magic + 1);
            goto code_r0x02f880d0;
          }
          lVar24 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData_TypeInfo*/ uRam0000000003d28ed0);
          /*Atlas.UI.Screens.SingleplayerCampaignScreen.TransitionData$$.ctor*/ func_0x0156a4d8(lVar24,0);
          unaff_x22 = 0;
          if (lVar24 != 0) {
            *(undefined8 *)(lVar24 + 0x10) = uVar39;
            *(undefined8 *)(lVar24 + 0x20) = uVar33;
            uVar39 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected_TypeInfo*/ uRam0000000003d28ec8);
            /*Atlas.UI.Screens.SingleplayerCampaignScreen.ContinueSelected$$.ctor*/ func_0x0156a1a4(uVar39,param_1,uRam0000000003d56d80,0);
            *(undefined8 *)(lVar24 + 0x18) = uVar39;
            if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            Atlas_Contexts_FrontEndContextSingleplayerState__SetBackButtonAndTransitionToScreen
                      (param_1,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0xa0),lVar24
                       ,*(undefined8 *)(param_1 + 0xd8));
            goto LAB_01592e50;
          }
        }
      }
    }
LAB_01592efc:
    auVar45 = func_0x00f78af4();
    lVar24 = auVar45._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d40628;
    *(long *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar33;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar39;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x48) =
         Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb515e & 1) == 0) {
      func_0x00f78a20(0x3d57268);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb515e = 1;
    }
    unaff_x23 = 0x3d40628;
    if ((*(long *)(lVar24 + 0x90) != 0) &&
       (lVar38 = *(long *)(*(long *)(lVar24 + 0x90) + 0x10), lVar38 != 0)) {
      unaff_x21 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar38,auVar45._8_8_,uRam0000000003d57268);
      unaff_x23 = 0x3d40628;
      if (*(long *)(lVar24 + 0xa0) != 0) {
        unaff_x23 = 0x3d23000;
        unaff_x22 = /*Atlas.Stats.UnlockManager$$GetFirstEventWithUncompletedChallenges*/ func_0x01520c74(*(long *)(lVar24 + 0xa0),unaff_x21,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
        if (iVar17 == 0) {
          uVar39 = 0;
          goto LAB_01592fe4;
        }
        if ((unaff_x22 != 0) && (*(long *)(lVar24 + 0x90) != 0)) {
          uVar39 = /*Atlas.Definitions.AtlasDefinitions$$GetEventIndexInChapter*/ func_0x01467f84(*(long *)(lVar24 + 0x90),*(undefined8 *)(unaff_x22 + 0x18),
                                   unaff_x21,0);
LAB_01592fe4:
          Atlas_Contexts_FrontEndContextSingleplayerState__ShowChapter
                    (lVar24,auVar45._8_8_,uVar39,0xffffffff);
          return (dword *)((long)&MACH_HEADER.magic + 1);
        }
      }
    }
    unaff_x30 = Atlas_Contexts_FrontEndContextSingleplayerState__BackOutOfEventSelect;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
code_r0x015946b0:
  if (*(int *)(lVar24 + 0x18) <= (int)uVar36) {
    return pdVar23;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar24 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar28,uRam0000000003d5b098);
  lVar38 = *(long *)(pdVar37 + 0x24);
  if ((lVar38 == 0) || (lVar24 == 0)) {
code_r0x015947b0:
    pdVar23 = (dword *)func_0x00f78af4();
    return pdVar23;
  }
  uVar39 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar24,uRam0000000003d578b8);
  if (*(uint *)(lVar38 + 0x18) <= uVar36) {
code_r0x015947cc:
    uVar39 = func_0x00f78b24();
    func_0x00f78ac0(uVar39,0);
code_r0x015947d8:
    pdVar23 = (dword *)func_0x00f78e5c(plVar28);
    return pdVar23;
  }
  lVar19 = (long)(int)uVar36;
  *(undefined8 *)(lVar38 + lVar19 * 0x40 + 0x40) = uVar39;
  lVar24 = *(long *)(pdVar37 + 0x24);
  if (lVar24 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar24 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar24 = *(long *)(lVar24 + lVar19 * 0x40 + 0x40);
  if (lVar24 == 0) goto code_r0x015947b0;
  /*Atlas.FrontEnd.PedestalBehaviour$$Init*/ func_0x014b7bb0(lVar24,0);
  lVar24 = *(long *)(pdVar37 + 0x24);
  if (lVar24 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar24 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar24 = *(long *)(lVar24 + lVar19 * 0x40 + 0x40);
  if (lVar24 == 0) goto code_r0x015947b0;
  uVar39 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar24,0);
  lVar24 = *(long *)(pdVar37 + 0x24);
  if (lVar24 == 0) goto code_r0x015947b0;
  if (*(uint *)(lVar24 + 0x18) <= uVar36) goto code_r0x015947cc;
  lVar24 = *(long *)(lVar24 + lVar19 * 0x40 + 0x20);
  if (((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x18), lVar24 == 0)) ||
     (lVar24 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar24,0), lVar24 == 0)) goto code_r0x015947b0;
  uVar36 = uVar36 + 1;
  pdVar23 = (dword *)/*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar24,uVar39,0,0);
  lVar24 = *(long *)(pdVar37 + 0x24);
  if (lVar24 == 0) goto code_r0x015947b0;
  goto code_r0x015946b0;
code_r0x02f883b0:
  puVar8 = puVar9 + -0x30;
  *(dword **)(puVar9 + -0x30) = pdVar41;
  *(dword **)(puVar9 + -0x28) = pdVar23;
  *(dword **)(puVar9 + -0x20) = pdVar37;
  *(dword **)(puVar9 + -0x18) = pdVar26;
  *(undefined1 **)(puVar9 + -0x10) = puVar43;
  *(undefined **)(puVar9 + -8) = puVar44;
  puVar43 = puVar9 + -0x10;
  puVar44 = &UNK_02f883d8;
  pdVar30 = pdVar27;
  pdVar26 = pdVar31;
  pdVar23 = pdVar27;
  pdVar41 = auVar47._0_8_;
code_r0x02f877a8:
  pdVar37 = auVar47._0_8_;
  puVar14 = puVar8 + -0x60;
  *(dword **)(puVar8 + -0x30) = pdVar41;
  *(long *)(puVar8 + -0x28) = auVar47._8_8_;
  *(dword **)(puVar8 + -0x20) = pdVar23;
  *(dword **)(puVar8 + -0x18) = pdVar26;
  *(undefined1 **)(puVar8 + -0x10) = puVar43;
  *(undefined **)(puVar8 + -8) = puVar44;
  puVar43 = puVar8 + -0x10;
  pdVar23 = pdVar37;
  if ((bRam0000000003ebc64d & 1) == 0) {
    func_0x00f78a20(0x3d3ddc8);
    pdVar23 = (dword *)func_0x00f78a20(0x3d3ddd0);
    bRam0000000003ebc64d = 1;
  }
  uVar36 = (uint)pdVar27;
  if (((int)uVar36 < 0) || ((int)*(long *)(pdVar37 + 0x14) <= (int)uVar36)) {
    return pdVar23;
  }
  lVar24 = *(long *)(pdVar37 + 0x1c);
  if (lVar24 == 0) {
code_r0x02f878a4:
    lVar24 = func_0x00f78af4();
    *(undefined8 *)(puVar8 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar8 + -0x98) = unaff_d8;
    *(dword **)(puVar8 + -0x90) = pdVar41;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(dword **)(puVar8 + -0x80) = pdVar37;
    *(dword **)(puVar8 + -0x78) = pdVar27;
    *(undefined1 **)(puVar8 + -0x70) = puVar43;
    *(undefined **)(puVar8 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar39 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar39,0);
    if (0 < *(int *)(lVar24 + 0x50)) {
      iVar17 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar24,iVar17);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar24,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < *(int *)(lVar24 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar24);
    *(undefined8 *)(puVar8 + -0x80) = *(undefined8 *)(puVar8 + -0x80);
    *(undefined8 *)(puVar8 + -0x78) = *(undefined8 *)(puVar8 + -0x78);
    *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
    *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar23 = (dword *)(*pcRam0000000003ec05a0)(uVar39);
    return pdVar23;
  }
  if (*(uint *)(lVar24 + 0x18) <= uVar36) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar24 = *(long *)(lVar24 + 0x10) + ((ulong)pdVar27 & 0xffffffff) * 0x28;
  pdVar41 = *(dword **)(lVar24 + 0x20);
  pdVar26 = *(dword **)(lVar24 + 0x28);
  *(undefined4 *)(puVar8 + -0x60) = *(undefined4 *)(lVar24 + 0x42);
  *(undefined2 *)(puVar8 + -0x5c) = *(undefined2 *)(lVar24 + 0x46);
  if (pdVar26 == (dword *)0x0) {
    lVar24 = *(long *)(pdVar37 + 0x1c);
    if (lVar24 != 0) {
      *(dword **)(puVar8 + -0x58) = pdVar41;
      *(undefined8 *)(puVar8 + -0x50) = 0;
      *(undefined8 *)(puVar8 + -0x48) = 0;
      *(undefined8 *)(puVar8 + -0x40) = 0;
      *(undefined2 *)(puVar8 + -0x38) = 0;
      *(undefined4 *)(puVar8 + -0x36) = *(undefined4 *)(puVar8 + -0x60);
      *(undefined2 *)(puVar8 + -0x32) = *(undefined2 *)(puVar8 + -0x5c);
      pdVar23 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar24,pdVar27,puVar8 + -0x58,uRam0000000003d3ddd0);
      return pdVar23;
    }
    goto code_r0x02f878a4;
  }
  puVar44 = &UNK_02f87848;
  pdVar23 = pdVar26;
code_r0x02f882d8:
  *(dword **)(puVar14 + -0x20) = pdVar37;
  *(dword **)(puVar14 + -0x18) = pdVar27;
  *(undefined1 **)(puVar14 + -0x10) = puVar43;
  *(undefined **)(puVar14 + -8) = puVar44;
  (**(code **)(*(long *)pdVar26 + 0x218))(pdVar26,*(undefined8 *)(*(long *)pdVar26 + 0x220));
  if (*(long *)(pdVar26 + 10) != 0) {
    /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar26 + 10),0);
    pdVar26[0x13] = 4;
    /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar26,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar23 = (dword *)(**(code **)(*(long *)pdVar26 + 0x228))
                                 (pdVar26,*(undefined8 *)(*(long *)pdVar26 + 0x230));
    return pdVar23;
  }
  func_0x00f78af4();
  puVar9 = puVar14 + -0x40;
  *(dword **)(puVar14 + -0x40) = pdVar37;
  *(dword **)(puVar14 + -0x38) = pdVar26;
  *(undefined1 **)(puVar14 + -0x30) = puVar14 + -0x10;
  *(undefined **)(puVar14 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
  puVar43 = puVar14 + -0x30;
  if (extraout_x1 != (long *)0x0) {
    lVar24 = extraout_x1[5];
    /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
    uVar39 = (**(code **)(*extraout_x1 + 0x238))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
    extraout_x1[5] = 0;
    extraout_x1[6] = 0;
    extraout_x1[9] = _UNK_037235c0;
    extraout_x1[7] = 0;
    extraout_x1[8] = 0;
    /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar39,lVar24);
    pdVar23 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
    extraout_x1[0xb] = 0;
    return pdVar23;
  }
  puVar44 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
  auVar47 = func_0x00f78af4();
  pdVar27 = pdVar30;
  goto code_r0x02f883b0;
code_r0x01e71a74:
  lVar19 = *(long *)(puVar43 + lVar24 * 8);
  pcVar42 = *(code **)(lVar19 + 0x10);
  plVar1 = *(long **)(lVar19 + 0x20);
  lVar19 = *(long *)(lVar19 + 0x28);
  if (*(short *)(lVar19 + 0x48) == -1) {
    func_0x00f78ad8(lVar19);
  }
  iVar17 = func_0x00f78a4c(lVar19);
  bVar15 = *(char *)(lVar19 + 0x4a) == '\x03';
  if (iVar17 == 0) {
    if (bVar15) {
      if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
        pdVar23 = (dword *)(*pcVar42)(plVar28,pdVar30,pdVar31,lVar19);
      }
      else {
        if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
           (*(long *)(pdVar41 + 6) == 0)) goto code_r0x01e71aac;
        iVar17 = func_0x00f78a44(lVar19);
        iVar18 = func_0x00f78ec0(lVar19);
        if (iVar17 == 0) {
          uVar3 = *(ushort *)(lVar19 + 0x48);
          if (iVar18 == 0) {
            lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
            pdVar23 = (dword *)(**(code **)(lVar19 + 0x138))
                                         (plVar1,plVar28,pdVar30,pdVar31,
                                          *(undefined8 *)(lVar19 + 0x140));
            goto code_r0x01e71bd0;
          }
          lVar19 = func_0x00f78a48(lVar19);
          lVar20 = *plVar1;
          uVar32 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar32 != 0) {
            piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == lVar19) {
                puVar25 = (undefined8 *)
                          (lVar20 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01e71d74;
              }
              piVar35 = piVar35 + 4;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          puVar25 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
          pcVar42 = (code *)*puVar25;
          puVar25 = (undefined8 *)puVar25[1];
        }
        else {
          if (iVar18 == 0) {
            uVar39 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar20 = *plVar1;
            uVar32 = (ulong)*(ushort *)(lVar20 + 0x12a);
            if (uVar32 != 0) {
              piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar35 + -2) == *(long *)(lVar19 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e71d4c;
                }
                piVar35 = piVar35 + 4;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            lVar20 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
            uVar39 = *(undefined8 *)(lVar20 + 8);
          }
          puVar25 = (undefined8 *)func_0x00f78acc(uVar39,lVar19);
          pcVar42 = (code *)*puVar25;
        }
        pdVar23 = (dword *)(*pcVar42)(plVar1,plVar28,pdVar30,pdVar31,puVar25);
      }
    }
    else {
      if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar41 + 6) == 0)) goto code_r0x01e71bbc;
      iVar17 = func_0x00f78a44(lVar19);
      iVar18 = func_0x00f78ec0(lVar19);
      if (iVar17 == 0) {
        uVar3 = *(ushort *)(lVar19 + 0x48);
        if (iVar18 == 0) {
          lVar19 = *plVar28 + (ulong)uVar3 * 0x10;
          pdVar23 = (dword *)(**(code **)(lVar19 + 0x138))
                                       (plVar28,pdVar30,pdVar31,*(undefined8 *)(lVar19 + 0x140));
          goto code_r0x01e71bd0;
        }
        lVar19 = func_0x00f78a48(lVar19);
        lVar20 = *plVar28;
        uVar32 = (ulong)*(ushort *)(lVar20 + 0x12a);
        if (uVar32 != 0) {
          piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar35 + -2) == lVar19) {
              puVar25 = (undefined8 *)(lVar20 + (long)(int)(*piVar35 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01e71d00;
            }
            piVar35 = piVar35 + 4;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
        puVar25 = (undefined8 *)func_0x00fac1f0(plVar28,lVar19,(ulong)uVar3);
code_r0x01e71d00:
        pcVar42 = (code *)*puVar25;
        puVar25 = (undefined8 *)puVar25[1];
      }
      else {
        if (iVar18 == 0) {
          uVar39 = *(undefined8 *)(*plVar28 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar20 = *plVar28;
          uVar32 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar32 != 0) {
            piVar35 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar35 + -2) == *(long *)(lVar19 + 0x18)) {
                lVar20 = lVar20 + (long)(int)(*piVar35 + (uint)*(ushort *)(lVar19 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01e71cd8;
              }
              piVar35 = piVar35 + 4;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          lVar20 = func_0x00fac1f0(plVar28);
code_r0x01e71cd8:
          uVar39 = *(undefined8 *)(lVar20 + 8);
        }
        puVar25 = (undefined8 *)func_0x00f78acc(uVar39,lVar19);
        pcVar42 = (code *)*puVar25;
      }
      pdVar23 = (dword *)(*pcVar42)(plVar28,pdVar30,pdVar31,puVar25);
    }
  }
  else {
    if (bVar15) goto code_r0x01e71bbc;
code_r0x01e71aac:
    pdVar23 = (dword *)(*pcVar42)(plVar1,plVar28,pdVar30,pdVar31,lVar19);
  }
code_r0x01e71bd0:
  lVar24 = lVar24 + 1;
  if (lVar24 == lVar38) {
    return pdVar23;
  }
  goto code_r0x01e71a74;
  while( true ) {
    uVar32 = /*System.String$$Equals*/ func_0x029caa48(lVar38,pdVar30,5,0);
    if ((uVar32 & 1) != 0) {
      return pdVar23;
    }
    pdVar23 = (dword *)(ulong)(iVar18 < iVar17);
    if (iVar17 == iVar18) {
      return pdVar23;
    }
    lVar38 = *(long *)(lVar24 + 0x78);
    iVar18 = iVar18 + 1;
    if (lVar38 == 0) break;
code_r0x02f880d0:
    if (*(uint *)(lVar38 + 0x18) <= iVar18 - 1U) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar38 = *(long *)(*(long *)(lVar38 + 0x10) + (long)(int)(iVar18 - 1U) * 0x20 + 0x20);
    if (lVar38 == 0) break;
  }
code_r0x02f8812c:
  func_0x00f78af4();
  return (dword *)0x0;
}



// ============================================================
// RVA: 0x1593198 | Atlas.Contexts.FrontEndContextSingleplayerState.EventSelectd
// ============================================================

/* WARNING: Possible PIC construction at 0x01593308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159330c) */
/* WARNING: Removing unreachable block (ram,0x01593344) */
/* WARNING: Removing unreachable block (ram,0x0159334c) */
/* WARNING: Removing unreachable block (ram,0x01593350) */
/* WARNING: Removing unreachable block (ram,0x01593360) */
/* WARNING: Removing unreachable block (ram,0x01e7159c) */
/* WARNING: Removing unreachable block (ram,0x01e715e8) */
/* WARNING: Removing unreachable block (ram,0x01e715d8) */
/* WARNING: Removing unreachable block (ram,0x01e715e0) */
/* WARNING: Removing unreachable block (ram,0x01e715f0) */
/* WARNING: Removing unreachable block (ram,0x01e715f4) */
/* WARNING: Removing unreachable block (ram,0x01e7160c) */
/* WARNING: Removing unreachable block (ram,0x01e71614) */
/* WARNING: Removing unreachable block (ram,0x01e71648) */
/* WARNING: Removing unreachable block (ram,0x01e716cc) */
/* WARNING: Removing unreachable block (ram,0x01e716d8) */
/* WARNING: Removing unreachable block (ram,0x01e716e0) */
/* WARNING: Removing unreachable block (ram,0x01e71760) */
/* WARNING: Removing unreachable block (ram,0x01e717c4) */
/* WARNING: Removing unreachable block (ram,0x01e71768) */
/* WARNING: Removing unreachable block (ram,0x01e71780) */
/* WARNING: Removing unreachable block (ram,0x01e71788) */
/* WARNING: Removing unreachable block (ram,0x01e71870) */
/* WARNING: Removing unreachable block (ram,0x01e71794) */
/* WARNING: Removing unreachable block (ram,0x01e717a0) */
/* WARNING: Removing unreachable block (ram,0x01e71880) */
/* WARNING: Removing unreachable block (ram,0x01e716f8) */
/* WARNING: Removing unreachable block (ram,0x01e717b0) */
/* WARNING: Removing unreachable block (ram,0x01e716fc) */
/* WARNING: Removing unreachable block (ram,0x01e71710) */
/* WARNING: Removing unreachable block (ram,0x01e71718) */
/* WARNING: Removing unreachable block (ram,0x01e71848) */
/* WARNING: Removing unreachable block (ram,0x01e71724) */
/* WARNING: Removing unreachable block (ram,0x01e71730) */
/* WARNING: Removing unreachable block (ram,0x01e71858) */
/* WARNING: Removing unreachable block (ram,0x01e7185c) */
/* WARNING: Removing unreachable block (ram,0x01e71884) */
/* WARNING: Removing unreachable block (ram,0x01e7164c) */
/* WARNING: Removing unreachable block (ram,0x01e71650) */
/* WARNING: Removing unreachable block (ram,0x01e7165c) */
/* WARNING: Removing unreachable block (ram,0x01e71668) */
/* WARNING: Removing unreachable block (ram,0x01e71670) */
/* WARNING: Removing unreachable block (ram,0x01e717e4) */
/* WARNING: Removing unreachable block (ram,0x01e71898) */
/* WARNING: Removing unreachable block (ram,0x01e717ec) */
/* WARNING: Removing unreachable block (ram,0x01e71804) */
/* WARNING: Removing unreachable block (ram,0x01e7180c) */
/* WARNING: Removing unreachable block (ram,0x01e718e4) */
/* WARNING: Removing unreachable block (ram,0x01e71818) */
/* WARNING: Removing unreachable block (ram,0x01e71824) */
/* WARNING: Removing unreachable block (ram,0x01e718f4) */
/* WARNING: Removing unreachable block (ram,0x01e71688) */
/* WARNING: Removing unreachable block (ram,0x01e71834) */
/* WARNING: Removing unreachable block (ram,0x01e7168c) */
/* WARNING: Removing unreachable block (ram,0x01e716a0) */
/* WARNING: Removing unreachable block (ram,0x01e716a8) */
/* WARNING: Removing unreachable block (ram,0x01e718bc) */
/* WARNING: Removing unreachable block (ram,0x01e716b4) */
/* WARNING: Removing unreachable block (ram,0x01e716c0) */
/* WARNING: Removing unreachable block (ram,0x01e718cc) */
/* WARNING: Removing unreachable block (ram,0x01e718d0) */
/* WARNING: Removing unreachable block (ram,0x01e718f8) */
/* WARNING: Removing unreachable block (ram,0x01e71628) */
/* WARNING: Removing unreachable block (ram,0x01e7173c) */
/* WARNING: Removing unreachable block (ram,0x01e7162c) */
/* WARNING: Removing unreachable block (ram,0x01e71750) */
/* WARNING: Removing unreachable block (ram,0x01e7175c) */
/* WARNING: Removing unreachable block (ram,0x01e71910) */

ulong Atlas_Contexts_FrontEndContextSingleplayerState__EventSelectd
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x1;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5160 & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21688);
    func_0x00f78a20(0x3d194b8);
    func_0x00f78a20(0x3d21a10);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d27600);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5160 = 1;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
LAB_0159325c:
    if (((*(long *)(param_1 + 0x90) == 0) ||
        (lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10), lVar2 == 0)) ||
       (param_3 = puRam0000000003d57278, lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,param_2), lVar2 == 0))
    goto LAB_01593394;
    lVar5 = *(long *)(lVar2 + 0x30);
    lVar3 = func_0x00f78aec(/*Atlas.FrontEnd.EventInfo_TypeInfo*/ uRam0000000003d21688);
    /*Atlas.FrontEnd.EventInfo$$.ctor*/ func_0x01583970();
    if (lVar3 == 0) goto LAB_01593394;
    *(undefined4 *)(lVar3 + 0x10) = 3;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x38);
    uVar1 = *(undefined4 *)(lVar2 + 0x58);
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    if (((*(byte *)(/*Atlas.Contexts.FrontEndContextSingleplayerState_TypeInfo*/ lRam0000000003d21a10 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.FrontEndContextSingleplayerState_TypeInfo*/ lRam0000000003d21a10 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  else {
    if (*(long *)(param_1 + 0xb0) != 0) {
      /*Atlas.FrontEnd.FrontEndScene$$ClearOverrideIP*/ func_0x01592b88();
      *(undefined1 *)(param_1 + 0xd0) = 0;
      goto LAB_0159325c;
    }
LAB_01593394:
    uVar1 = func_0x00f78af4();
    lVar5 = extraout_x1;
  }
  switch(uVar1) {
  case 0:
    if (lVar5 == 0) goto code_r0x01593400;
    uVar4 = (ulong)*(uint *)(lVar5 + 0x4c);
    break;
  case 1:
    if (lVar5 == 0) goto code_r0x01593400;
    uVar4 = (ulong)*(uint *)(lVar5 + 0x50);
    break;
  case 2:
    if (lVar5 == 0) goto code_r0x01593400;
    uVar4 = (ulong)*(uint *)(lVar5 + 0x54);
    break;
  case 0xffffffff:
    if (lVar5 == 0) {
code_r0x01593400:
      uVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5161 & 1) == 0) {
        func_0x00f78a20(0x3d40620);
        bRam0000000003eb5161 = 1;
      }
      if (uVar4 == 0) {
        auVar6 = func_0x00f78af4(0,uRam0000000003d40620);
        uVar4 = auVar6._0_8_;
        *(undefined8 *)(uVar4 + 0x10) = *param_3;
        *(long *)(uVar4 + 0x20) = auVar6._8_8_;
        *(undefined8 **)(uVar4 + 0x28) = param_3;
        return uVar4;
      }
      return uVar4;
    }
    uVar4 = (ulong)*(uint *)(lVar5 + 0x48);
    break;
  default:
    uVar4 = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1593398 | Atlas.Contexts.FrontEndContextSingleplayerState.GetDuration
// ============================================================

undefined1  [16]
Atlas_Contexts_FrontEndContextSingleplayerState__GetDuration
          (undefined4 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar2;
  
  switch(param_1) {
  case 0:
    if (param_2 == 0) goto code_r0x01593400;
    uVar1 = (ulong)*(uint *)(param_2 + 0x4c);
    break;
  case 1:
    if (param_2 == 0) goto code_r0x01593400;
    uVar1 = (ulong)*(uint *)(param_2 + 0x50);
    break;
  case 2:
    if (param_2 == 0) goto code_r0x01593400;
    uVar1 = (ulong)*(uint *)(param_2 + 0x54);
    break;
  case 0xffffffff:
    if (param_2 == 0) {
code_r0x01593400:
      auVar4._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb5161 & 1) == 0) {
        func_0x00f78a20(0x3d40620);
        bRam0000000003eb5161 = 1;
      }
      if (auVar4._0_8_ == 0) {
        auVar4 = func_0x00f78af4(0,uRam0000000003d40620);
        lVar2 = auVar4._0_8_;
        *(undefined8 *)(lVar2 + 0x10) = *param_3;
        *(long *)(lVar2 + 0x20) = auVar4._8_8_;
        *(undefined8 **)(lVar2 + 0x28) = param_3;
        return auVar4;
      }
      auVar4._8_8_ = 0;
      return auVar4;
    }
    uVar1 = (ulong)*(uint *)(param_2 + 0x48);
    break;
  default:
    uVar1 = 0;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



// ============================================================
// RVA: 0x1593404 | Atlas.Contexts.FrontEndContextSingleplayerState..ctor
// ============================================================

void Atlas_Contexts_FrontEndContextSingleplayerState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5161 & 1) == 0) {
    func_0x00f78a20(0x3d40620);
    bRam0000000003eb5161 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d40620);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x1593458 | Atlas.Contexts.FrontEndContextSingleplayerState..cctor
// ============================================================

void Atlas_Contexts_FrontEndContextSingleplayerState___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5162 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d21a10);
    func_0x00f78a20(0x3d6a8d0);
    bRam0000000003eb5162 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Chapter_Freeplay_1')*/ uRam0000000003d6a8d0,0);
  **(undefined8 **)(/*Atlas.Contexts.FrontEndContextSingleplayerState_TypeInfo*/ lRam0000000003d21a10 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x15934f8 | Atlas.Contexts.FrontEndContextSingleplayerState.<Init>b__18_0
// ============================================================

undefined8 Atlas_Contexts_FrontEndContextSingleplayerState___Init_b__18_0(undefined8 param_1)

{
  if ((bRam0000000003eb5163 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb5163 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Atlas_Contexts_FrontEndContextSingleplayerState__ShowOverview
            (param_1,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8));
  return 1;
}



