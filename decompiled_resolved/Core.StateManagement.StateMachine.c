// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.StateManagement.StateMachine

// ============================================================
// RVA: 0x18e1390 | Core.StateManagement.StateMachine.HasState<object>
// ============================================================

/* WARNING: Possible PIC construction at 0x018e1514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018e1518) */
/* WARNING: Removing unreachable block (ram,0x018e1520) */
/* WARNING: Removing unreachable block (ram,0x018e1540) */
/* WARNING: Removing unreachable block (ram,0x018e1554) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__HasState_object_
                (long param_1,long param_2,undefined1 ****param_3,long param_4)

{
  undefined1 *****pppppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *****pppppuVar7;
  ulong uVar8;
  undefined1 ****ppppuVar9;
  undefined1 ****ppppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 ****ppppuVar17;
  undefined8 **ppuVar18;
  undefined1 **ppuVar19;
  undefined1 ***unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 *****pppppuStack_130;
  undefined *puStack_128;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb6688 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6688 = 1;
  }
  uVar15 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
code_r0x02b9583c:
    *(undefined1 ****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar3,(undefined1 *)((long)register0x00000008 + -0x20));
    return uVar8;
  }
  auVar20 = func_0x00f78af4();
  puStack_38 = &Core_StateManagement_StateMachine__IsActiveState_object_;
  uStack_50 = uVar15;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar20._0_8_ != 0) {
    uVar15 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(auVar20._0_8_,0);
    lVar16 = **(long **)(auVar20._8_8_ + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar16 = func_0x00f78adc(uVar15,lVar16);
    return (ulong)(lVar16 != 0);
  }
  auVar20 = func_0x00f78af4();
  param_1 = auVar20._0_8_;
  puStack_58 = &Core_StateManagement_StateMachine__TryAddState_VotingState_;
  unaff_x29 = &ppuStack_60;
  ppppuVar17 = param_3;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *auVar20._8_8_ = 0;
  ppuVar19 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(ppuVar19,0);
  if (param_1 != 0) {
    unaff_x30 = &UNK_018e1518;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
    goto code_r0x02b9583c;
  }
  auVar20 = func_0x00f78af4();
  ppppuVar10 = (undefined1 ****)&ppuStack_e0;
  puStack_98 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppppuVar9 = ppppuVar17;
  pppuStack_a0 = unaff_x29;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  ppuStack_e0 = (undefined8 **)0x0;
  uStack_d8 = 0;
  ppuVar19 = *ppppuVar17[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(ppuVar19,0);
  if (auVar20._0_8_ == 0) {
    func_0x00f78af4();
    ppuVar18 = (undefined8 **)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar20._0_8_,uVar15);
    ppuVar18 = ppuStack_e0;
    ppuVar19 = ppppuVar17[6][1];
    ppppuVar9 = ppppuVar10;
    if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar19);
      ppppuVar9 = ppppuVar10;
    }
    if (ppuVar18 == (undefined8 **)0x0) {
code_r0x018e1640:
      lVar16 = 0;
    }
    else {
      lVar16 = func_0x00f78adc(ppuVar18,ppuVar19);
      if (lVar16 == 0) {
        func_0x00f78e5c(ppuVar18,ppuVar19);
        goto code_r0x018e1640;
      }
    }
    *auVar20._8_8_ = lVar16;
    ppppuVar17 = (undefined1 ****)ppppuVar17[6][1];
    if ((*(ushort *)((long)ppppuVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(ppppuVar17);
    }
    if ((ppuVar18 == (undefined8 **)0x0) ||
       (lVar16 = func_0x00f78adc(ppuVar18,ppppuVar17), lVar16 != 0)) {
      return (ulong)(*auVar20._8_8_ != 0);
    }
  }
  auVar21 = func_0x00f78e5c(ppuVar18,ppppuVar17);
  lVar16 = auVar21._0_8_;
  puStack_e8 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppppuVar17 = ppppuVar9;
  ppppuStack_f0 = &pppuStack_a0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (lVar16 != 0) {
    pppppuStack_130 = (undefined1 *****)0x0;
    puStack_128 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar16,uVar15,&pppppuStack_130,ppppuVar9,0);
    pppppuVar1 = pppppuStack_130;
    if (pppppuStack_130 != (undefined1 *****)0x0) {
      if (*(long *)(lVar16 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ******)(lVar16 + 0x18) = pppppuVar1;
      *(undefined8 *)(lVar16 + 0x20) = uVar15;
      pppppuVar7 = pppppuVar1;
      if ((auVar21._8_4_ != 0) && (ppppuVar17 = pppppuVar1[0xd], ppppuVar17 != (undefined1 ****)0x0)
         ) {
        (*(code *)(*ppppuVar17)[0x2f])(ppppuVar17,(*ppppuVar17)[0x30]);
        pppppuVar7 = *(undefined1 ******)(lVar16 + 0x18);
        if (*(undefined1 ******)(lVar16 + 0x18) == (undefined1 *****)0x0) {
          func_0x00f78af4();
          pppppuVar7 = pppppuVar1;
        }
      }
      pppppuVar7[0xe] = ppppuVar9;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppppuVar1 != (undefined1 *****)0x0);
  }
  auVar20 = func_0x00f78af4();
  plVar5 = auVar20._8_8_;
  lVar16 = auVar20._0_8_;
  puStack_128 = &System_String__Join_object_;
  pppppuStack_130 = &ppppuStack_f0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar5 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar3,0);
    uVar3 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar3);
  }
  else {
    if (lVar16 == 0) {
      lVar16 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    ppuVar19 = *ppppuVar17[6];
    if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar19);
    }
    lVar11 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(undefined1 ***)(piVar14 + -2) == ppuVar19) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar14 = piVar14 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,ppuVar19,0);
code_r0x018e1828:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar14 = piVar14 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        uVar8 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar5 != (long *)0x0) {
          lVar16 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
        }
        return uVar8;
      }
      lVar11 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      ppuVar19 = ppppuVar17[6][1];
      if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(ppuVar19);
      }
      lVar12 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(undefined1 ***)(piVar14 + -2) == ppuVar19) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar14 = piVar14 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,ppuVar19,0);
code_r0x018e1934:
      lVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar12 != 0) {
        ppuVar19 = ppppuVar17[6][1];
        if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(ppuVar19);
        }
        lVar12 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(undefined1 ***)(piVar14 + -2) == ppuVar19) {
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,ppuVar19,0);
code_r0x018e19a8:
        plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar12 != 0) {
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar11,lVar12,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar12 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          uVar8 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar11,0);
          goto joined_r0x018e1920;
        }
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar11,lVar16,0);
        ppuVar19 = ppppuVar17[6][1];
        if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(ppuVar19);
        }
        lVar12 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(undefined1 ***)(piVar14 + -2) == ppuVar19) {
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,ppuVar19,0);
code_r0x018e1ab0:
        lVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      } while (lVar12 == 0);
      ppuVar19 = ppppuVar17[6][1];
      if ((*(ushort *)((long)ppuVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(ppuVar19);
      }
      lVar12 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(undefined1 ***)(piVar14 + -2) == ppuVar19) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar14 = piVar14 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,ppuVar19,0);
code_r0x018e1b24:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 != (long *)0x0) {
        lVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar12 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar11,lVar12,0);
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



// ============================================================
// RVA: 0x18e1420 | Core.StateManagement.StateMachine.IsActiveState<IntroSequenceFinishedState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__IsActiveState_IntroSequenceFinishedState_
                (long param_1,long param_2,undefined1 ***param_3,long param_4)

{
  undefined1 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ****ppppuVar10;
  undefined1 ***pppuVar11;
  undefined1 ***pppuVar12;
  undefined1 ***pppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined1 **ppuVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    uVar4 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(param_1,0);
    lVar18 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar18);
    }
    lVar18 = func_0x00f78adc(uVar4,lVar18);
    return (ulong)(lVar18 != 0);
  }
  auVar21 = func_0x00f78af4();
  lVar18 = auVar21._0_8_;
  puStack_28 = &Core_StateManagement_StateMachine__TryAddState_VotingState_;
  pppuVar11 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *auVar21._8_8_ = 0;
  puVar20 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar22 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(puVar20,0);
  uVar4 = auVar22._0_8_;
  if (lVar18 != 0) {
    pppuVar11 = (undefined1 ***)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(lVar18,uVar4);
    if ((uVar3 & 1) != 0) {
code_r0x018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar5 = (**(code **)param_3[6][1])();
    *auVar21._8_8_ = uVar5;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar5;
    auVar22 = auVar22 << 0x40;
    if (*(long *)(lVar18 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(lVar18 + 0x10),uVar5,uVar4,uRam0000000003d3da98);
      goto code_r0x018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar22._0_8_,auVar22._8_8_);
  pppuVar13 = &ppuStack_b0;
  puStack_68 = &Core_StateManagement_StateMachine__TryGetState_object_;
  pppuVar12 = pppuVar11;
  ppuStack_70 = &puStack_30;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  ppuStack_b0 = (undefined1 **)0x0;
  uStack_a8 = 0;
  puVar20 = *pppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(puVar20,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    ppuVar19 = (undefined1 **)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar4);
    ppuVar19 = ppuStack_b0;
    puVar20 = pppuVar11[6][1];
    pppuVar12 = pppuVar13;
    if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(puVar20);
      pppuVar12 = pppuVar13;
    }
    if (ppuVar19 == (undefined1 **)0x0) {
code_r0x018e1640:
      lVar18 = 0;
    }
    else {
      lVar18 = func_0x00f78adc(ppuVar19,puVar20);
      if (lVar18 == 0) {
        func_0x00f78e5c(ppuVar19,puVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar18;
    pppuVar11 = (undefined1 ***)pppuVar11[6][1];
    if ((*(ushort *)((long)pppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(pppuVar11);
    }
    if ((ppuVar19 == (undefined1 **)0x0) ||
       (lVar18 = func_0x00f78adc(ppuVar19,pppuVar11), lVar18 != 0)) {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar23 = func_0x00f78e5c(ppuVar19,pppuVar11);
  lVar18 = auVar23._0_8_;
  puStack_b8 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  pppuVar11 = pppuVar12;
  pppuStack_c0 = &ppuStack_70;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar4 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (lVar18 != 0) {
    ppppuStack_100 = (undefined1 ****)0x0;
    puStack_f8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar18,uVar4,&ppppuStack_100,pppuVar12,0);
    ppppuVar1 = ppppuStack_100;
    if (ppppuStack_100 != (undefined1 ****)0x0) {
      if (*(long *)(lVar18 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 *****)(lVar18 + 0x18) = ppppuVar1;
      *(undefined8 *)(lVar18 + 0x20) = uVar4;
      ppppuVar10 = ppppuVar1;
      if ((auVar23._8_4_ != 0) && (pppuVar11 = ppppuVar1[0xd], pppuVar11 != (undefined1 ***)0x0)) {
        (*(code *)(*pppuVar11)[0x2f])(pppuVar11,(*pppuVar11)[0x30]);
        ppppuVar10 = *(undefined1 *****)(lVar18 + 0x18);
        if (*(undefined1 *****)(lVar18 + 0x18) == (undefined1 ****)0x0) {
          func_0x00f78af4();
          ppppuVar10 = ppppuVar1;
        }
      }
      ppppuVar10[0xe] = pppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(ppppuVar1 != (undefined1 ****)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar18 = auVar21._0_8_;
  puStack_f8 = &System_String__Join_object_;
  ppppuStack_100 = &pppuStack_c0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar4 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar4,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar4,uVar9);
  }
  else {
    if (lVar18 == 0) {
      lVar18 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    puVar20 = *pppuVar11[6];
    if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(puVar20);
    }
    lVar14 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar5 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(undefined1 **)(piVar17 + -2) == puVar20) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) == 0) {
        uVar5 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar18 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar5;
      }
      lVar14 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      puVar20 = pppuVar11[6][1];
      if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(puVar20);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(undefined1 **)(piVar17 + -2) == puVar20) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1934:
      lVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar15 != 0) {
        puVar20 = pppuVar11[6][1];
        if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(puVar20);
        }
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(undefined1 **)(piVar17 + -2) == puVar20) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar15 != 0) {
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar15,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          uVar5 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar14,0);
          goto joined_r0x018e1920;
        }
        if (lVar14 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar18,0);
        puVar20 = pppuVar11[6][1];
        if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(puVar20);
        }
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(undefined1 **)(piVar17 + -2) == puVar20) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1ab0:
        lVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar15 == 0);
      puVar20 = pppuVar11[6][1];
      if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(puVar20);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(undefined1 **)(piVar17 + -2) == puVar20) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar15 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar15,0);
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



// ============================================================
// RVA: 0x18e1420 | Core.StateManagement.StateMachine.IsActiveState<object>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__IsActiveState_IntroSequenceFinishedState_
                (long param_1,long param_2,undefined1 ***param_3,long param_4)

{
  undefined1 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ****ppppuVar10;
  undefined1 ***pppuVar11;
  undefined1 ***pppuVar12;
  undefined1 ***pppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  undefined1 **ppuVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    uVar4 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(param_1,0);
    lVar18 = **(long **)(param_2 + 0x30);
    if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar18);
    }
    lVar18 = func_0x00f78adc(uVar4,lVar18);
    return (ulong)(lVar18 != 0);
  }
  auVar21 = func_0x00f78af4();
  lVar18 = auVar21._0_8_;
  puStack_28 = &Core_StateManagement_StateMachine__TryAddState_VotingState_;
  pppuVar11 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *auVar21._8_8_ = 0;
  puVar20 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar22 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(puVar20,0);
  uVar4 = auVar22._0_8_;
  if (lVar18 != 0) {
    pppuVar11 = (undefined1 ***)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(lVar18,uVar4);
    if ((uVar3 & 1) != 0) {
code_r0x018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar5 = (**(code **)param_3[6][1])();
    *auVar21._8_8_ = uVar5;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar5;
    auVar22 = auVar22 << 0x40;
    if (*(long *)(lVar18 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(lVar18 + 0x10),uVar5,uVar4,uRam0000000003d3da98);
      goto code_r0x018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar22._0_8_,auVar22._8_8_);
  pppuVar13 = &ppuStack_b0;
  puStack_68 = &Core_StateManagement_StateMachine__TryGetState_object_;
  pppuVar12 = pppuVar11;
  ppuStack_70 = &puStack_30;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  ppuStack_b0 = (undefined1 **)0x0;
  uStack_a8 = 0;
  puVar20 = *pppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(puVar20,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    ppuVar19 = (undefined1 **)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar4);
    ppuVar19 = ppuStack_b0;
    puVar20 = pppuVar11[6][1];
    pppuVar12 = pppuVar13;
    if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(puVar20);
      pppuVar12 = pppuVar13;
    }
    if (ppuVar19 == (undefined1 **)0x0) {
code_r0x018e1640:
      lVar18 = 0;
    }
    else {
      lVar18 = func_0x00f78adc(ppuVar19,puVar20);
      if (lVar18 == 0) {
        func_0x00f78e5c(ppuVar19,puVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar18;
    pppuVar11 = (undefined1 ***)pppuVar11[6][1];
    if ((*(ushort *)((long)pppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(pppuVar11);
    }
    if ((ppuVar19 == (undefined1 **)0x0) ||
       (lVar18 = func_0x00f78adc(ppuVar19,pppuVar11), lVar18 != 0)) {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar23 = func_0x00f78e5c(ppuVar19,pppuVar11);
  lVar18 = auVar23._0_8_;
  puStack_b8 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  pppuVar11 = pppuVar12;
  pppuStack_c0 = &ppuStack_70;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar4 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (lVar18 != 0) {
    ppppuStack_100 = (undefined1 ****)0x0;
    puStack_f8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar18,uVar4,&ppppuStack_100,pppuVar12,0);
    ppppuVar1 = ppppuStack_100;
    if (ppppuStack_100 != (undefined1 ****)0x0) {
      if (*(long *)(lVar18 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 *****)(lVar18 + 0x18) = ppppuVar1;
      *(undefined8 *)(lVar18 + 0x20) = uVar4;
      ppppuVar10 = ppppuVar1;
      if ((auVar23._8_4_ != 0) && (pppuVar11 = ppppuVar1[0xd], pppuVar11 != (undefined1 ***)0x0)) {
        (*(code *)(*pppuVar11)[0x2f])(pppuVar11,(*pppuVar11)[0x30]);
        ppppuVar10 = *(undefined1 *****)(lVar18 + 0x18);
        if (*(undefined1 *****)(lVar18 + 0x18) == (undefined1 ****)0x0) {
          func_0x00f78af4();
          ppppuVar10 = ppppuVar1;
        }
      }
      ppppuVar10[0xe] = pppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(ppppuVar1 != (undefined1 ****)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar18 = auVar21._0_8_;
  puStack_f8 = &System_String__Join_object_;
  ppppuStack_100 = &pppuStack_c0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar4 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar4,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar4,uVar9);
  }
  else {
    if (lVar18 == 0) {
      lVar18 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    puVar20 = *pppuVar11[6];
    if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(puVar20);
    }
    lVar14 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar5 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(undefined1 **)(piVar17 + -2) == puVar20) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar5 & 1) == 0) {
        uVar5 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar18 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar5;
      }
      lVar14 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      puVar20 = pppuVar11[6][1];
      if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(puVar20);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(undefined1 **)(piVar17 + -2) == puVar20) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1934:
      lVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar15 != 0) {
        puVar20 = pppuVar11[6][1];
        if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(puVar20);
        }
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(undefined1 **)(piVar17 + -2) == puVar20) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar15 != 0) {
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar15,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar5 & 1) == 0) {
          uVar5 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar14,0);
          goto joined_r0x018e1920;
        }
        if (lVar14 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar18,0);
        puVar20 = pppuVar11[6][1];
        if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(puVar20);
        }
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar5 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(undefined1 **)(piVar17 + -2) == puVar20) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1ab0:
        lVar15 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar15 == 0);
      puVar20 = pppuVar11[6][1];
      if ((*(ushort *)(puVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(puVar20);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(undefined1 **)(piVar17 + -2) == puVar20) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,puVar20,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar15 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar15,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextLoadoutState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextMatchMakingState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextModeSelectState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextPlayWithFriendsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextPostQuickPlayState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextSeasonsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextSettingsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontEndContextSingleplayerState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontendContextCharacterRankState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<FrontendContextPostSingleplayerState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<GameContextBaseInProgressState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<GameContextBaseIntroState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<GameContextBaseOutroState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<IntroSequenceCountdownState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<IntroSequenceFinishedState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<IntroSequenceMapPanState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<IntroSequencePlayerPanState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<IntroSequenceWaitingState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<OutroSequenceBeginRoundCompleteState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<OutroSequenceEndGameState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<OutroSequenceShowPlacementsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<RoundResultsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<VotingState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e147c | Core.StateManagement.StateMachine.TryAddState<object>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryAddState_FrontEndContextLoadoutState_
                (long param_1,ulong *param_2,undefined1 **param_3,long param_4)

{
  undefined1 ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar11 = param_3;
  if ((bRam0000000003eb6689 & 1) == 0) {
    func_0x00f78a20(0x3d3da98);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6689 = 1;
  }
  *param_2 = 0;
  uVar19 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  uVar19 = auVar21._0_8_;
  if (param_1 != 0) {
    ppuVar11 = (undefined1 **)0x0;
    uVar3 = /*Core.StateManagement.StateMachine$$HasState*/ func_0x02b9583c(param_1,uVar19);
    if ((uVar3 & 1) != 0) {
LAB_018e1554:
      return (ulong)(uVar3 ^ 1);
    }
    uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
    *param_2 = uVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
    auVar21 = auVar21 << 0x40;
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<StateMachine.Entry>$$Add*/ func_0x025a517c(*(long *)(param_1 + 0x10),uVar4,uVar19,uRam0000000003d3da98);
      goto LAB_018e1554;
    }
  }
  auVar21 = func_0x00f78af4(auVar21._0_8_,auVar21._8_8_);
  ppuVar13 = &puStack_90;
  puStack_48 = &Core_StateManagement_StateMachine__TryGetState_object_;
  ppuVar12 = ppuVar11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  uVar19 = *(undefined8 *)ppuVar11[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (auVar21._0_8_ == 0) {
    func_0x00f78af4();
    puVar18 = (undefined1 *)0x0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(auVar21._0_8_,uVar19);
    puVar18 = puStack_90;
    lVar20 = *(long *)(ppuVar11[6] + 8);
    ppuVar12 = ppuVar13;
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      ppuVar12 = ppuVar13;
    }
    if (puVar18 == (undefined1 *)0x0) {
code_r0x018e1640:
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(puVar18,lVar20);
      if (lVar5 == 0) {
        func_0x00f78e5c(puVar18,lVar20);
        goto code_r0x018e1640;
      }
    }
    *auVar21._8_8_ = lVar5;
    ppuVar11 = *(undefined1 ***)(ppuVar11[6] + 8);
    if ((*(ushort *)((long)ppuVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(ppuVar11);
    }
    if ((puVar18 == (undefined1 *)0x0) || (lVar20 = func_0x00f78adc(puVar18,ppuVar11), lVar20 != 0))
    {
      return (ulong)(*auVar21._8_8_ != 0);
    }
  }
  auVar22 = func_0x00f78e5c(puVar18,ppuVar11);
  lVar20 = auVar22._0_8_;
  puStack_98 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  ppuVar11 = ppuVar12;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar19 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar20 != 0) {
    pppuStack_e0 = (undefined1 ***)0x0;
    puStack_d8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar20,uVar19,&pppuStack_e0,ppuVar12,0);
    pppuVar1 = pppuStack_e0;
    if (pppuStack_e0 != (undefined1 ***)0x0) {
      if (*(long *)(lVar20 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ****)(lVar20 + 0x18) = pppuVar1;
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      pppuVar10 = pppuVar1;
      if ((auVar22._8_4_ != 0) && (ppuVar11 = pppuVar1[0xd], ppuVar11 != (undefined1 **)0x0)) {
        (**(code **)(*ppuVar11 + 0x178))(ppuVar11,*(undefined8 *)(*ppuVar11 + 0x180));
        pppuVar10 = *(undefined1 ****)(lVar20 + 0x18);
        if (*(undefined1 ****)(lVar20 + 0x18) == (undefined1 ***)0x0) {
          func_0x00f78af4();
          pppuVar10 = pppuVar1;
        }
      }
      pppuVar10[0xe] = ppuVar12;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(pppuVar1 != (undefined1 ***)0x0);
  }
  auVar21 = func_0x00f78af4();
  plVar7 = auVar21._8_8_;
  lVar20 = auVar21._0_8_;
  puStack_d8 = &System_String__Join_object_;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar19,uVar9);
  }
  else {
    if (lVar20 == 0) {
      lVar20 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = *(long *)ppuVar11[6];
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar14 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar4 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar17 = piVar17 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar4 & 1) == 0) {
        uVar4 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar20 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar20 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar17 = piVar17 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return uVar4;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1934:
      lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar14 != 0) {
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar14 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar4 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          uVar4 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          goto joined_r0x018e1920;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar20,0);
        lVar14 = *(long *)(ppuVar11[6] + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar15 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar4 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar17 = piVar17 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1ab0:
        lVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar14 == 0);
      lVar14 = *(long *)(ppuVar11[6] + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      lVar15 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar17 = piVar17 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar14,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar14 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar14,0);
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



// ============================================================
// RVA: 0x18e1570 | Core.StateManagement.StateMachine.TryGetState<GameContextBaseOutroState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryGetState_GameContextBaseOutroState_
                (long param_1,long *param_2,undefined1 *param_3,long param_4)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar11 = &lStack_50;
  puVar8 = param_3;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uVar16 = **(undefined8 **)(param_3 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (param_1 == 0) {
    func_0x00f78af4();
    lVar15 = 0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar16);
    lVar15 = lStack_50;
    lVar17 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    puVar8 = (undefined1 *)plVar11;
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
      puVar8 = (undefined1 *)plVar11;
    }
    if (lVar15 == 0) {
LAB_018e1640:
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x00f78adc(lVar15,lVar17);
      if (lVar3 == 0) {
        func_0x00f78e5c(lVar15,lVar17);
        goto LAB_018e1640;
      }
    }
    *param_2 = lVar3;
    param_3 = *(undefined1 **)(*(long *)(param_3 + 0x30) + 8);
    if ((*(ushort *)(param_3 + 0x132) & 1) == 0) {
      func_0x00fac028(param_3);
    }
    if ((lVar15 == 0) || (lVar17 = func_0x00f78adc(lVar15,param_3), lVar17 != 0)) {
      return (ulong)(*param_2 != 0);
    }
  }
  auVar19 = func_0x00f78e5c(lVar15,param_3);
  lVar15 = auVar19._0_8_;
  puStack_58 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  puVar9 = puVar8;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar16 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (lVar15 != 0) {
    ppuStack_a0 = (undefined1 **)0x0;
    puStack_98 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar15,uVar16,&ppuStack_a0,puVar8,0);
    ppuVar1 = ppuStack_a0;
    if (ppuStack_a0 != (undefined1 **)0x0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ***)(lVar15 + 0x18) = ppuVar1;
      *(undefined8 *)(lVar15 + 0x20) = uVar16;
      ppuVar7 = ppuVar1;
      if ((auVar19._8_4_ != 0) && (plVar11 = (long *)ppuVar1[0xd], plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        ppuVar7 = *(undefined1 ***)(lVar15 + 0x18);
        if (*(undefined1 ***)(lVar15 + 0x18) == (undefined1 **)0x0) {
          func_0x00f78af4();
          ppuVar7 = ppuVar1;
        }
      }
      ppuVar7[0xe] = puVar8;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(ppuVar1 != (undefined1 **)0x0);
  }
  auVar18 = func_0x00f78af4();
  plVar11 = auVar18._8_8_;
  lVar15 = auVar18._0_8_;
  puStack_98 = &System_String__Join_object_;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar11 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar16,uVar6);
  }
  else {
    if (lVar15 == 0) {
      lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar17 = **(long **)(puVar9 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar3 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar17) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar14 = piVar14 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar17,0);
code_r0x018e1828:
    plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    if (plVar11 != (long *)0x0) {
      lVar17 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar12 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar12 & 1) == 0) {
        uVar12 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar11,puVar4[1]);
        }
        return uVar12;
      }
      lVar17 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1934:
      lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar3);
        }
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e19a8:
        plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar3 != 0) {
          if (lVar17 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar3,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar3 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar12 = (*(code *)*puVar4)(plVar11,puVar4[1]);
        if ((uVar12 & 1) == 0) {
          uVar12 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar17,0);
          goto joined_r0x018e1920;
        }
        if (lVar17 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar15,0);
        lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar3);
        }
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1ab0:
        lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      } while (lVar3 == 0);
      lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1b24:
      plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar3 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar3,0);
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



// ============================================================
// RVA: 0x18e1570 | Core.StateManagement.StateMachine.TryGetState<object>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryGetState_GameContextBaseOutroState_
                (long param_1,long *param_2,undefined1 *param_3,long param_4)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar11 = &lStack_50;
  puVar8 = param_3;
  if ((bRam0000000003eb668a & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668a = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uVar16 = **(undefined8 **)(param_3 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (param_1 == 0) {
    func_0x00f78af4();
    lVar15 = 0;
  }
  else {
    param_4 = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar16);
    lVar15 = lStack_50;
    lVar17 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    puVar8 = (undefined1 *)plVar11;
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
      puVar8 = (undefined1 *)plVar11;
    }
    if (lVar15 == 0) {
LAB_018e1640:
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x00f78adc(lVar15,lVar17);
      if (lVar3 == 0) {
        func_0x00f78e5c(lVar15,lVar17);
        goto LAB_018e1640;
      }
    }
    *param_2 = lVar3;
    param_3 = *(undefined1 **)(*(long *)(param_3 + 0x30) + 8);
    if ((*(ushort *)(param_3 + 0x132) & 1) == 0) {
      func_0x00fac028(param_3);
    }
    if ((lVar15 == 0) || (lVar17 = func_0x00f78adc(lVar15,param_3), lVar17 != 0)) {
      return (ulong)(*param_2 != 0);
    }
  }
  auVar19 = func_0x00f78e5c(lVar15,param_3);
  lVar15 = auVar19._0_8_;
  puStack_58 = &Core_StateManagement_StateMachine__TryRequestState_OutroSequenceShowPlacementsState_
  ;
  puVar9 = puVar8;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar16 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (lVar15 != 0) {
    ppuStack_a0 = (undefined1 **)0x0;
    puStack_98 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar15,uVar16,&ppuStack_a0,puVar8,0);
    ppuVar1 = ppuStack_a0;
    if (ppuStack_a0 != (undefined1 **)0x0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 ***)(lVar15 + 0x18) = ppuVar1;
      *(undefined8 *)(lVar15 + 0x20) = uVar16;
      ppuVar7 = ppuVar1;
      if ((auVar19._8_4_ != 0) && (plVar11 = (long *)ppuVar1[0xd], plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        ppuVar7 = *(undefined1 ***)(lVar15 + 0x18);
        if (*(undefined1 ***)(lVar15 + 0x18) == (undefined1 **)0x0) {
          func_0x00f78af4();
          ppuVar7 = ppuVar1;
        }
      }
      ppuVar7[0xe] = puVar8;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(ppuVar1 != (undefined1 **)0x0);
  }
  auVar18 = func_0x00f78af4();
  plVar11 = auVar18._8_8_;
  lVar15 = auVar18._0_8_;
  puStack_98 = &System_String__Join_object_;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar11 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar16,uVar6);
  }
  else {
    if (lVar15 == 0) {
      lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar17 = **(long **)(puVar9 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    lVar3 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar17) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar14 = piVar14 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar17,0);
code_r0x018e1828:
    plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    if (plVar11 != (long *)0x0) {
      lVar17 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar12 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if ((uVar12 & 1) == 0) {
        uVar12 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar11 != (long *)0x0) {
          lVar15 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar11,puVar4[1]);
        }
        return uVar12;
      }
      lVar17 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1934:
      lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar3);
        }
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e19a8:
        plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar3 != 0) {
          if (lVar17 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar3,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar3 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar12 = (*(code *)*puVar4)(plVar11,puVar4[1]);
        if ((uVar12 & 1) == 0) {
          uVar12 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar17,0);
          goto joined_r0x018e1920;
        }
        if (lVar17 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar15,0);
        lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar3);
        }
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar14 = piVar14 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1ab0:
        lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      } while (lVar3 == 0);
      lVar3 = *(long *)(*(long *)(puVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar3);
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar14 = piVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar11,lVar3,0);
code_r0x018e1b24:
      plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar3 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar17,lVar3,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<FrontEndContextMatchMakingState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<FrontEndContextModeSelectState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<IntroSequenceCountdownState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<IntroSequenceFinishedState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<IntroSequenceMapPanState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<IntroSequencePlayerPanState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<IntroSequenceWaitingState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<OutroSequenceBeginRoundCompleteState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<OutroSequenceEndGameState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<OutroSequenceShowPlacementsState>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x18e16a8 | Core.StateManagement.StateMachine.TryRequestState<object>
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Core_StateManagement_StateMachine__TryRequestState_FrontEndContextMatchMakingState_
                (long param_1,int param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar9 = param_3;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(param_4 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (param_1 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,uVar15,&puStack_50,param_3,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(undefined1 **)(param_1 + 0x18) = puVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      puVar6 = puVar1;
      if ((param_2 != 0) && (plVar10 = *(long **)(puVar1 + 0x68), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar6 = *(undefined1 **)(param_1 + 0x18);
        if (*(undefined1 **)(param_1 + 0x18) == (undefined1 *)0x0) {
          func_0x00f78af4();
          puVar6 = puVar1;
        }
      }
      *(long *)(puVar6 + 0x70) = param_3;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar17 = func_0x00f78af4();
  plVar10 = auVar17._8_8_;
  lVar14 = auVar17._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar5);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar16 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar7 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar16) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,0);
code_r0x018e1828:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 != (long *)0x0) {
      lVar16 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
        return uVar11;
      }
      lVar16 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1934:
      lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar7 != 0) {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e19a8:
        plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          if (lVar16 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar7 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar16,0);
          goto joined_r0x018e1920;
        }
        if (lVar16 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar14,0);
        lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        lVar8 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1ab0:
        lVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      } while (lVar7 == 0);
      lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar8 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar10,lVar7,0);
code_r0x018e1b24:
      plVar4 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (lVar7 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar16,lVar7,0);
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



// ============================================================
// RVA: 0x2b95214 | Core.StateManagement.StateMachine.get_ActiveState
// ============================================================

undefined8 Core_StateManagement_StateMachine__get_ActiveState(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2b9521c | Core.StateManagement.StateMachine.Update
// ============================================================

void Core_StateManagement_StateMachine__Update(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eba4f5 & 1) == 0) {
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eba4f5 = 1;
  }
  if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    Core_StateManagement_State__Update(*(long *)(param_1 + 0x18),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x2b952d8 | Core.StateManagement.StateMachine.LateUpdate
// ============================================================

void Core_StateManagement_StateMachine__LateUpdate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eba4f6 & 1) == 0) {
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eba4f6 = 1;
  }
  if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    Core_StateManagement_State__LateUpdate(*(long *)(param_1 + 0x18),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x2b95394 | Core.StateManagement.StateMachine.FixedUpdate
// ============================================================

void Core_StateManagement_StateMachine__FixedUpdate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eba4f7 & 1) == 0) {
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eba4f7 = 1;
  }
  if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    Core_StateManagement_State__FixedUpdate(*(long *)(param_1 + 0x18),param_2);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x2b95450 | Core.StateManagement.StateMachine.Init
// ============================================================

void Core_StateManagement_StateMachine__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eba4f8 & 1) == 0) {
    func_0x00f78a20(0x3d3da90);
    func_0x00f78a20(0x3d1e328);
    bRam0000000003eba4f8 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<StateMachine.Entry>_TypeInfo*/ uRam0000000003d1e328);
  /*System.Collections.Generic.List<StateMachine.Entry>$$.ctor*/ func_0x025a4580(uVar1,param_2,uRam0000000003d3da90);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x2b954d8 | Core.StateManagement.StateMachine.DeInit
// ============================================================

ulong Core_StateManagement_StateMachine__DeInit
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long alStack_80 [2];
  
  if ((bRam0000000003eba4f9 & 1) == 0) {
    func_0x00f78a20(0x3d3daa0);
    func_0x00f78a20(0x3d3dab0);
    func_0x00f78a20(0x3d3dab8);
    bRam0000000003eba4f9 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Core_StateManagement_State__Exit();
  }
  iVar6 = (int)param_3;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
LAB_02b955c4:
    auVar8 = func_0x00f78af4();
    lVar4 = auVar8._0_8_;
    alStack_80[0] = 0;
    alStack_80[1] = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar4,auVar8._8_8_,alStack_80);
    lVar7 = alStack_80[0];
    if (alStack_80[0] != 0) {
      if (*(long *)(lVar4 + 0x18) != 0) {
        Core_StateManagement_State__Exit();
      }
      *(long *)(lVar4 + 0x18) = lVar7;
      *(long *)(lVar4 + 0x20) = auVar8._8_8_;
      lVar5 = lVar7;
      if ((iVar6 != 0) && (plVar2 = *(long **)(lVar7 + 0x68), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
        lVar5 = *(long *)(lVar4 + 0x18);
        if (*(long *)(lVar4 + 0x18) == 0) {
          func_0x00f78af4();
          lVar5 = lVar7;
        }
      }
      *(undefined8 *)(lVar5 + 0x70) = param_4;
      Core_StateManagement_State__Enter();
    }
    return (ulong)(lVar7 != 0);
  }
  uVar1 = *(int *)(lVar7 + 0x18) - 1;
  if (-1 < (int)uVar1) {
    do {
      iVar6 = (int)param_3;
      if (lVar7 == 0) goto LAB_02b955c4;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      iVar6 = (int)param_3;
      plVar2 = *(long **)(*(long *)(lVar7 + 0x10) + (ulong)uVar1 * 0x10 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_02b955c4;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      iVar6 = (int)param_3;
      lVar7 = *(long *)(param_1 + 0x10);
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
    if (lVar7 == 0) goto LAB_02b955c4;
  }
  uVar3 = /*System.Collections.Generic.List<StateMachine.Entry>$$Clear*/ func_0x025a5470(lVar7,uRam0000000003d3daa0);
  *(long *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x2b955c8 | Core.StateManagement.StateMachine.RequestState
// ============================================================

bool Core_StateManagement_StateMachine__RequestState
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long alStack_50 [2];
  
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,param_2,alStack_50);
  lVar1 = alStack_50[0];
  if (alStack_50[0] != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      Core_StateManagement_State__Exit();
    }
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    lVar2 = lVar1;
    if ((param_3 != 0) && (plVar3 = *(long **)(lVar1 + 0x68), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      lVar2 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
        lVar2 = lVar1;
      }
    }
    *(undefined8 *)(lVar2 + 0x70) = param_4;
    Core_StateManagement_State__Enter();
  }
  return lVar1 != 0;
}



// ============================================================
// RVA: 0x2b955cc | Core.StateManagement.StateMachine.TryRequestState
// ============================================================

bool Core_StateManagement_StateMachine__TryRequestState
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long alStack_50 [2];
  
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,param_2,alStack_50);
  lVar1 = alStack_50[0];
  if (alStack_50[0] != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      Core_StateManagement_State__Exit();
    }
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    lVar2 = lVar1;
    if ((param_3 != 0) && (plVar3 = *(long **)(lVar1 + 0x68), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      lVar2 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
        lVar2 = lVar1;
      }
    }
    *(undefined8 *)(lVar2 + 0x70) = param_4;
    Core_StateManagement_State__Enter();
  }
  return lVar1 != 0;
}



// ============================================================
// RVA: 0x2b95670 | Core.StateManagement.StateMachine.TryGetState
// ============================================================

bool Core_StateManagement_StateMachine__TryGetState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(param_1,param_2,alStack_30);
  *param_3 = alStack_30[0];
  return alStack_30[0] != 0;
}



// ============================================================
// RVA: 0x2b956b0 | Core.StateManagement.StateMachine.TryFindEntry
// ============================================================

ulong Core_StateManagement_StateMachine__TryFindEntry
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  undefined8 *unaff_x23;
  undefined1 auVar7 [16];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined *puStack_88;
  int iStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eba4fa & 1) == 0) {
    func_0x00f78a20(0x3d33798);
    func_0x00f78a20(0x3d337a0);
    func_0x00f78a20(0x3d337a8);
    func_0x00f78a20(0x3d3daa8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eba4fa = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.List<StateMachine.Entry>$$GetEnumerator*/ func_0x025a5c80(&uStack_70,*(long *)(param_1 + 0x10),uRam0000000003d3daa8);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<StateMachine.Entry>$$MoveNext*/ func_0x01f852ec(&uStack_70,uRam0000000003d337a0);
      uVar2 = uStack_58;
      uVar1 = uStack_60;
      if ((uVar3 & 1) == 0) {
        iStack_80 = 0x48;
        goto LAB_02b957b8;
      }
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar2,param_2,0);
    } while ((uVar4 & 1) == 0);
    *param_3 = uVar1;
    param_3[1] = uVar2;
    iStack_80 = 0x51;
LAB_02b957b8:
    /*System.Collections.Generic.List.Enumerator<StateMachine.Entry>$$Dispose*/ func_0x01f852e8(&uStack_70,uRam0000000003d33798);
    if (iStack_80 == 0x51) {
      return uVar3;
    }
code_r0x02b957d4:
    *param_3 = 0;
    param_3[1] = 0;
    return 0;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<StateMachine.Entry>$$Dispose*/ func_0x01f852e8(&uStack_70,*unaff_x23);
    if (lVar6 == 0) goto code_r0x02b957d4;
    func_0x00f78ac0(lVar6,0);
  }
  auVar7 = __Unwind_Resume();
  puStack_88 = &Core_StateManagement_StateMachine__HasState;
  puStack_90 = &stack0xfffffffffffffff0;
  uVar3 = Core_StateManagement_StateMachine__TryFindEntry(auVar7._0_8_,auVar7._8_8_,auStack_a0);
  return uVar3;
}



// ============================================================
// RVA: 0x2b9583c | Core.StateManagement.StateMachine.HasState
// ============================================================

void Core_StateManagement_StateMachine__HasState(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  Core_StateManagement_StateMachine__TryFindEntry(param_1,param_2,auStack_20);
  return;
}



// ============================================================
// RVA: 0x2b9585c | Core.StateManagement.StateMachine..ctor
// ============================================================

void Core_StateManagement_StateMachine___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x2b95864 | Core.StateManagement.StateMachine..cctor
// ============================================================

void Core_StateManagement_StateMachine___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eba4fb & 1) == 0) {
    func_0x00f78a20(0x3d24d40);
    func_0x00f78a20(0x3d72d80);
    func_0x00f78a20(0x3d72d88);
    func_0x00f78a20(0x3d72d78);
    bRam0000000003eba4fb = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('StateMachine.Update()')*/ uRam0000000003d72d88,1,0,0,0);
  **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('StateMachine.LateUpdate()')*/ uRam0000000003d72d80,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('StateMachine.FixedUpdate()')*/ uRam0000000003d72d78,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8) + 0x10) = uVar1;
  return;
}



