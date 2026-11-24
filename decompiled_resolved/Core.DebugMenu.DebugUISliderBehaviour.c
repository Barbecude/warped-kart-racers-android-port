// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUISliderBehaviour

// ============================================================
// RVA: 0x1641ddc | Core.DebugMenu.DebugUISliderBehaviour.SetDecimalPlaces
// ============================================================

void Core_DebugMenu_DebugUISliderBehaviour__SetDecimalPlaces(long param_1,int param_2)

{
  undefined8 uVar1;
  int iStack_34;
  
  iStack_34 = param_2;
  if ((bRam0000000003eb5736 & 1) == 0) {
    func_0x00f78a20(0x3d7a808);
    bRam0000000003eb5736 = 1;
  }
  if (*(int *)(param_1 + 0x3c) != param_2) {
    uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_34,0);
    uVar1 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('n')*/ uRam0000000003d7a808,uVar1,0);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(int *)(param_1 + 0x3c) = iStack_34;
  }
  return;
}



// ============================================================
// RVA: 0x1641e6c | Core.DebugMenu.DebugUISliderBehaviour.set_MinValueText
// ============================================================

undefined8 Core_DebugMenu_DebugUISliderBehaviour__set_MinValueText(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  plVar3 = *(long **)(param_2 + 0x18);
  uStack_24 = param_1;
  uVar1 = /*System.Single$$ToString*/ func_0x029ba928(&uStack_24,*(undefined8 *)(param_2 + 0x40),0);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x30);
}



// ============================================================
// RVA: 0x1641e74 | Core.DebugMenu.DebugUISliderBehaviour.set_MaxValueText
// ============================================================

undefined8 Core_DebugMenu_DebugUISliderBehaviour__set_MaxValueText(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  plVar3 = *(long **)(param_2 + 0x28);
  uStack_24 = param_1;
  uVar1 = /*System.Single$$ToString*/ func_0x029ba928(&uStack_24,*(undefined8 *)(param_2 + 0x40),0);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x30);
}



// ============================================================
// RVA: 0x1641e7c | Core.DebugMenu.DebugUISliderBehaviour.set_ValueText
// ============================================================

undefined8 Core_DebugMenu_DebugUISliderBehaviour__set_ValueText(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  plVar3 = *(long **)(param_2 + 0x20);
  uStack_24 = param_1;
  uVar1 = /*System.Single$$ToString*/ func_0x029ba928(&uStack_24,*(undefined8 *)(param_2 + 0x40),0);
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x30);
}



// ============================================================
// RVA: 0x1641e84 | Core.DebugMenu.DebugUISliderBehaviour.AddListenerToUpdateValueText
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */
/* WARNING: Removing unreachable block (ram,0x03277f48) */

long * Core_DebugMenu_DebugUISliderBehaviour__AddListenerToUpdateValueText(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 ******ppppppuVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *plVar18;
  ulong uVar19;
  long unaff_x19;
  long unaff_x20;
  long lVar20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar21;
  undefined8 unaff_x23;
  undefined8 uVar22;
  uint uVar23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  uint uVar25;
  undefined8 unaff_x28;
  undefined1 *puVar26;
  undefined8 **ppuVar27;
  undefined8 *******pppppppuVar28;
  undefined *puVar29;
  code *pcVar30;
  undefined1 extraout_b0;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 ******ppppppuStack_e0;
  code *pcStack_d8;
  undefined8 *****pppppuStack_d0;
  code *pcStack_c8;
  undefined8 ****ppppuStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  
  if ((bRam0000000003eb5737 & 1) == 0) {
    func_0x00f78a20(0x3d54b20);
    func_0x00f78a20(0x3d415e0);
    func_0x00f78a20(0x3d1eb28);
    func_0x00f78a20(0x3d41730);
    bRam0000000003eb5737 = 1;
  }
  uVar21 = unaff_x22;
  uVar22 = unaff_x23;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar21 = 0x3d54000;
    uVar22 = 0x3d41000;
    lVar20 = *(long *)(*(long *)(param_1 + 0x30) + 0x120);
    uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<float>_TypeInfo*/ uRam0000000003d1eb28);
    lVar16 = lRam0000000003d415e0;
    /*UnityEngine.Events.UnityAction<float>$$.ctor*/ func_0x01b7f17c(uVar10,param_1,uRam0000000003d54b20);
    if (lVar20 != 0) {
      puVar6 = &stack0xfffffffffffffff0;
      plVar14 = plRam0000000003d41730;
      lVar12 = (**(code **)**(undefined8 **)(plRam0000000003d41730[3] + 0xc0))(uVar10);
      if (lVar20 != 0) {
        plVar18 = (long *)0x0;
        puVar26 = &stack0xfffffffffffffff0;
        lVar16 = *(long *)(lVar20 + 0x10);
        if (lVar16 == 0) {
          auVar32 = func_0x00f78af4();
          lVar12 = auVar32._8_8_;
          puVar3 = &stack0xffffffffffffffd0;
          puVar29 = &UnityEngine_Events_UnityEvent__RemoveListener;
          puVar6 = &stack0xffffffffffffffe0;
          lVar16 = unaff_x19;
          lVar20 = unaff_x20;
          if (lVar12 != 0) {
            lVar16 = *(long *)(lVar12 + 0x20);
            plVar18 = (long *)/*System.Delegate$$get_Method*/ func_0x02aaf9e8(lVar12,0);
            lVar12 = *(long *)(auVar32._0_8_ + 0x10);
            auVar31._8_8_ = lVar16;
            auVar31._0_8_ = lVar12;
            lVar20 = auVar32._0_8_;
            if (lVar12 != 0) {
              puVar3 = &stack0xfffffffffffffff0;
              goto code_r0x032315f0;
            }
          }
          puVar29 = &UnityEngine_Events_UnityEventBase__RemoveListener;
          auVar33 = func_0x00f78af4();
          unaff_x19 = lVar16;
          unaff_x20 = lVar20;
code_r0x0327807c:
          *(undefined1 **)(puVar3 + -0x10) = puVar6;
          *(undefined **)(puVar3 + -8) = puVar29;
          lVar16 = *(long *)(auVar33._0_8_ + 0x10);
          auVar31._8_8_ = auVar33._8_8_;
          auVar31._0_8_ = lVar16;
          if (lVar16 == 0) {
            func_0x00f78af4();
            *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
            *(undefined8 *)(puVar3 + -0x38) = unaff_x21;
            *(long *)(puVar3 + -0x30) = unaff_x20;
            *(long *)(puVar3 + -0x28) = unaff_x19;
            *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
            *(undefined **)(puVar3 + -0x18) = &UnityEngine_Events_UnityEvent__FindMethod_Impl;
            if ((bRam0000000003ec1a30 & 1) == 0) {
              func_0x00f78a20(0x3d1f578);
              bRam0000000003ec1a30 = 1;
            }
            plVar15 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,0);
            lVar20 = *(long *)(puVar3 + -0x30);
            uVar21 = *(undefined8 *)(puVar3 + -0x28);
            puVar4 = puVar3 + -0x10;
            unaff_x22 = *(undefined8 *)(puVar3 + -0x40);
            unaff_x21 = *(undefined8 *)(puVar3 + -0x38);
            uVar22 = extraout_x1_01;
            ppuVar27 = *(undefined8 ***)(puVar3 + -0x20);
            pcVar30 = (code *)*(undefined **)(puVar3 + -0x18);
UnityEngine_Events_UnityEventBase__GetValidMethodInfo:
            *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
            *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
            *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
            *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
            *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
            *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
            *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
            *(long *)(puVar4 + -0x20) = lVar20;
            *(undefined8 *)(puVar4 + -0x18) = uVar21;
            *(undefined8 ***)(puVar4 + -0x10) = ppuVar27;
            *(code **)(puVar4 + -8) = pcVar30;
            if ((bRam0000000003ec1a38 & 1) == 0) {
              func_0x00f78a20(0x3d19b78);
              func_0x00f78a20(0x3d25458);
              bRam0000000003ec1a38 = 1;
            }
            do {
              uVar21 = /*object_var*/ uRam0000000003d19b78;
              if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar14 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
              if (plVar18 == (long *)0x0) {
                return (long *)0x0;
              }
              if (plVar18 == plVar14) {
                return (long *)0x0;
              }
              uVar21 = 0x3c;
              plVar14 = (long *)/*System.Type$$GetMethod*/ func_0x02a0304c(plVar18,uVar22,0x3c,0,plVar15,0,0);
              if (plVar14 != (long *)0x0) {
                lVar16 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
                if (lVar16 == 0) {
code_r0x032782ac:
                  func_0x00f78af4();
code_r0x032782b0:
                  uVar10 = func_0x00f78b24();
                  func_0x00f78ac0(uVar10,0);
                  *(long **)(puVar4 + -0x90) = plVar14;
                  *(long **)(puVar4 + -0x88) = plVar18;
                  *(undefined8 *)(puVar4 + -0x80) = uVar22;
                  *(long **)(puVar4 + -0x78) = plVar15;
                  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
                  *(undefined **)(puVar4 + -0x68) = &UnityEngine_Events_UnityEvent__GetDelegate;
                  if ((bRam0000000003ec1a31 & 1) == 0) {
                    func_0x00f78a20(0x3d22a90);
                    bRam0000000003ec1a31 = 1;
                  }
                  plVar14 = (long *)func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
                  /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x03231308(plVar14,extraout_x1_02,uVar21,0);
                  return plVar14;
                }
                uVar23 = *(uint *)(lVar16 + 0x18);
                if ((int)uVar23 < 1) {
                  return plVar14;
                }
                uVar25 = 0;
                while( true ) {
                  if (uVar23 <= uVar25) goto code_r0x032782b0;
                  if (plVar15 == (long *)0x0) goto code_r0x032782ac;
                  if (*(uint *)(plVar15 + 3) <= uVar25) goto code_r0x032782b0;
                  plVar17 = *(long **)(lVar16 + (long)(int)uVar25 * 8 + 0x20);
                  if (plVar17 == (long *)0x0) goto code_r0x032782ac;
                  lVar12 = plVar15[(long)(int)uVar25 + 4];
                  lVar20 = (**(code **)(*plVar17 + 0x1b8))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
                  if ((lVar12 == 0) || (iVar7 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar12,0), lVar20 == 0))
                  goto code_r0x032782ac;
                  iVar8 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar20,0);
                  if (iVar7 != iVar8) break;
                  uVar25 = uVar25 + 1;
                  uVar23 = *(uint *)(lVar16 + 0x18);
                  if ((int)uVar23 <= (int)uVar25) {
                    return plVar14;
                  }
                }
              }
              plVar18 = (long *)(**(code **)(*plVar18 + 0x328))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x330));
            } while( true );
          }
          puVar26 = *(undefined1 **)(puVar3 + -0x10);
          puVar29 = *(undefined **)(puVar3 + -8);
        }
        else {
          plVar18 = (long *)0x0;
          puVar3 = &stack0xffffffffffffffd0;
          puVar26 = &stack0xfffffffffffffff0;
          unaff_x21 = 0x3ebf000;
          if ((bRam0000000003ebf6be & 1) == 0) {
            func_0x00f78a20(0x3d39e30);
            bRam0000000003ebf6be = 1;
          }
          if (*(long *)(lVar16 + 0x18) != 0) {
            plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar16 + 0x18),lVar12,uRam0000000003d39e30);
            *(undefined1 *)(lVar16 + 0x28) = 1;
            return plVar14;
          }
          puVar29 = &UnityEngine_Events_InvokableCallList__RemoveListener;
          auVar31 = func_0x00f78af4();
          unaff_x19 = lVar16;
          unaff_x20 = lVar12;
        }
code_r0x032315f0:
        lVar16 = auVar31._0_8_;
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(long *)(puVar3 + -0x20) = unaff_x20;
        *(long *)(puVar3 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar3 + -0x10) = puVar26;
        *(undefined **)(puVar3 + -8) = puVar29;
        if ((bRam0000000003ebf6bf & 1) == 0) {
          func_0x00f78a20(0x3d39e30);
          func_0x00f78a20(0x3d39e48);
          func_0x00f78a20(0x3d39e28);
          func_0x00f78a20(0x3d39e50);
          func_0x00f78a20(0x3d39e58);
          func_0x00f78a20(0x3d1d7f8);
          func_0x00f78a20(0x3d3f3d8);
          func_0x00f78a20(0x3d1e548);
          bRam0000000003ebf6bf = 1;
        }
        plVar14 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar14,uRam0000000003d39e28);
        lVar20 = *(long *)(lVar16 + 0x18);
        if (lVar20 != 0) {
          lVar12 = 4;
          do {
            uVar23 = (int)lVar12 - 4;
            if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar23) {
              uVar21 = func_0x00f78aec(/*System.Predicate<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1e548);
              if (plVar14 != (long *)0x0) {
                /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar21,plVar14,*(undefined8 *)(*plVar14 + 0x210),
                                uRam0000000003d3f3d8);
                plVar14 = (long *)/*System.Collections.Generic.List<AddressablesImpl.ResourceLocatorInfo>$$RemoveAll*/ func_0x0242879c(lVar20,uVar21,uRam0000000003d39e48);
                *(undefined1 *)(lVar16 + 0x28) = 1;
                return plVar14;
              }
              break;
            }
            if (*(uint *)(lVar20 + 0x18) <= uVar23) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar15 = *(long **)(*(long *)(lVar20 + 0x10) + lVar12 * 8);
            if (plVar15 == (long *)0x0) break;
            iVar7 = (**(code **)(*plVar15 + 0x188))
                              (plVar15,auVar31._8_8_,plVar18,*(undefined8 *)(*plVar15 + 400));
            if (iVar7 != 0) {
              lVar20 = *(long *)(lVar16 + 0x18);
              if (lVar20 == 0) break;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (plVar14 == (long *)0x0) break;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar14,*(undefined8 *)(*(long *)(lVar20 + 0x10) + lVar12 * 8),
                              uRam0000000003d39e30);
            }
            lVar20 = *(long *)(lVar16 + 0x18);
            lVar12 = lVar12 + 1;
          } while (lVar20 != 0);
        }
        lVar20 = func_0x00f78af4();
        *(long **)(puVar3 + -0x80) = plVar18;
        *(long *)(puVar3 + -0x78) = lVar16;
        *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x68) = &UnityEngine_Events_InvokableCallList__Clear;
        if ((bRam0000000003ebf6c0 & 1) == 0) {
          func_0x00f78a20(0x3d39e40);
          bRam0000000003ebf6c0 = 1;
        }
        if (*(long *)(lVar20 + 0x18) != 0) {
          plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar20 + 0x18),uRam0000000003d39e40);
          *(undefined1 *)(lVar20 + 0x28) = 1;
          return plVar14;
        }
        lVar16 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0xa0) = 0x3ebf000;
        *(long *)(puVar3 + -0x98) = lVar20;
        *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x70;
        *(undefined **)(puVar3 + -0x88) = &UnityEngine_Events_InvokableCallList__ClearPersistent;
        if ((bRam0000000003ebf6c1 & 1) == 0) {
          func_0x00f78a20(0x3d39e40);
          bRam0000000003ebf6c1 = 1;
        }
        if (*(long *)(lVar16 + 0x10) != 0) {
          plVar14 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar16 + 0x10),uRam0000000003d39e40);
          *(undefined1 *)(lVar16 + 0x28) = 1;
          return plVar14;
        }
        lVar20 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0xc0) = 0x3ebf000;
        *(long *)(puVar3 + -0xb8) = lVar16;
        *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x90;
        *(undefined **)(puVar3 + -0xa8) = &UnityEngine_Events_InvokableCallList__PrepareInvoke;
        uVar21 = 0x3ebf000;
        if ((bRam0000000003ebf6c2 & 1) == 0) {
          func_0x00f78a20(0x3d39e38);
          func_0x00f78a20(0x3d39e40);
          bRam0000000003ebf6c2 = 1;
        }
        if (*(char *)(lVar20 + 0x28) != '\0') {
          if (*(long *)(lVar20 + 0x20) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar20 + 0x20),uRam0000000003d39e40);
            if (*(long *)(lVar20 + 0x20) != 0) {
              uVar21 = 0x3d39e38;
              /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar20 + 0x20),*(undefined8 *)(lVar20 + 0x10),
                              uRam0000000003d39e38);
              if (*(long *)(lVar20 + 0x20) != 0) {
                /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar20 + 0x20),*(undefined8 *)(lVar20 + 0x18),
                                uRam0000000003d39e38);
                *(undefined1 *)(lVar20 + 0x28) = 0;
                goto code_r0x03231910;
              }
            }
          }
          plVar18 = (long *)func_0x00f78af4();
          *(long **)(puVar3 + -0xf0) = plVar14;
          *(long *)(puVar3 + -0xe8) = auVar31._8_8_;
          *(undefined8 *)(puVar3 + -0xe0) = uVar21;
          *(long *)(puVar3 + -0xd8) = lVar20;
          *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0xb0;
          *(undefined **)(puVar3 + -200) = &UnityEngine_Events_InvokableCallList___ctor;
          if ((bRam0000000003ebf6c3 & 1) == 0) {
            func_0x00f78a20(0x3d39e28);
            func_0x00f78a20(0x3d1d7f8);
            bRam0000000003ebf6c3 = 1;
          }
          lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar16,uRam0000000003d39e28);
          plVar18[2] = lVar16;
          lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar16,uRam0000000003d39e28);
          plVar18[3] = lVar16;
          lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar16,uRam0000000003d39e28);
          plVar18[4] = lVar16;
          *(undefined1 *)(plVar18 + 5) = 1;
          return plVar18;
        }
code_r0x03231910:
        return *(long **)(lVar20 + 0x20);
      }
      auVar32 = func_0x00f78af4();
      lVar12 = auVar32._8_8_;
      lVar20 = unaff_x20;
      if (lVar12 != 0) {
        lVar20 = *(long *)(lVar12 + 0x20);
        auVar33._8_8_ = lVar20;
        auVar33._0_8_ = auVar32._0_8_;
        plVar18 = (long *)/*System.Delegate$$get_Method*/ func_0x02aaf9e8(lVar12,0);
        if (auVar32._0_8_ != 0) {
          puVar29 = &UnityEngine_Events_UnityEvent_float___RemoveListener;
          puVar3 = &stack0xffffffffffffffe0;
          unaff_x19 = 0;
          goto code_r0x0327807c;
        }
      }
      plVar18 = plVar14;
      uVar21 = 0;
      func_0x00f78af4();
      pcStack_48 = (code *)&UnityEngine_Events_UnityEvent_float___FindMethod_Impl;
      plVar14 = plVar18;
      lVar12 = lVar16;
      ppuStack_50 = (undefined8 **)&stack0xffffffffffffffd0;
      if ((bRam0000000003eb6c4b & 1) == 0) {
        func_0x00f78a20(0x3d1f578);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb6c4b = 1;
      }
      plVar15 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
      lVar16 = *(long *)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x10);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar16,0);
      if (plVar15 == (long *)0x0) {
        func_0x00f78af4();
      }
      else {
        if ((lVar13 != 0) &&
           (lVar16 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar16 == 0)) {
          uVar21 = func_0x00f78b14();
          goto code_r0x01b84758;
        }
        lVar16 = lVar13;
        if ((int)plVar15[3] != 0) {
          plVar15[4] = lVar13;
          puVar4 = &stack0xffffffffffffffc0;
          uVar22 = extraout_x1;
          ppuVar27 = ppuStack_50;
          pcVar30 = pcStack_48;
          goto UnityEngine_Events_UnityEventBase__GetValidMethodInfo;
        }
      }
      uVar21 = func_0x00f78b24();
      lVar13 = lVar16;
code_r0x01b84758:
      func_0x00f78ac0(uVar21,0);
      puStack_88 = &UnityEngine_Events_UnityEvent_float___GetDelegate;
      lVar16 = *(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x18);
      lStack_b0 = lVar13;
      plStack_a8 = plVar15;
      plStack_a0 = plVar18;
      plStack_98 = (long *)extraout_x1;
      ppuStack_90 = &ppuStack_50;
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      plVar18 = (long *)func_0x00f78aec(lVar16);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar12 + 0x18) + 0xc0) + 0x20))
                (plVar18,extraout_x1_00,plVar14);
      return plVar18;
    }
  }
  auVar32 = func_0x00f78af4();
  uVar10 = auVar32._0_8_;
  pcStack_48 = Core_DebugMenu_DebugMenu__ConfigureSlider;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5718 & 1) == 0) {
    func_0x00f78a20(0x3d21158);
    bRam0000000003eb5718 = 1;
  }
  ppuStack_90 = (undefined8 **)0x0;
  plStack_a8 = (long *)0x0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plVar18 = (long *)((long)&MACH_HEADER.cputype + 1);
  plVar14 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,auVar32._8_8_,5,&lStack_b0);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (plStack_98 != (long *)0x0) {
    if ((*(byte *)(*plStack_98 + 300) < *(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300)) ||
       (*(long *)(*(long *)(*plStack_98 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUISliderBehaviour_TypeInfo*/ lRam0000000003d21158)) {
      func_0x00f78e5c();
    }
    else {
      plVar15 = (long *)plStack_98[6];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x428))(extraout_b0,plVar15,*(undefined8 *)(*plVar15 + 0x430));
        return plVar14;
      }
    }
  }
  auVar32 = func_0x00f78af4();
  pcStack_b8 = Core_DebugMenu_DebugUILabelBehaviour__set_Text;
  plVar15 = *(long **)(auVar32._0_8_ + 0x18);
  ppppuStack_c0 = (undefined8 ****)&ppuStack_50;
  if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01642058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(**(code **)(*plVar15 + 0x5e8))
                                (plVar15,auVar32._8_8_,*(undefined8 *)(*plVar15 + 0x5f0));
    return plVar14;
  }
  auVar32 = func_0x00f78af4();
  ppppppuVar5 = &pppppuStack_d0;
  pcStack_c8 = Core_DebugMenu_DebugUILabelBehaviour__set_RaycastTarget;
  plVar15 = *(long **)(auVar32._0_8_ + 0x18);
  if (plVar15 != (long *)0x0) {
    pppppuStack_d0 = &ppppuStack_c0;
                    /* WARNING: Could not recover jumptable at 0x01642080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(**(code **)(*plVar15 + 0x2c8))
                                (plVar15,auVar32._8_8_,*(undefined8 *)(*plVar15 + 0x2d0));
    return plVar14;
  }
  pppppuStack_d0 = &ppppuStack_c0;
  auVar32 = func_0x00f78af4();
  uStack_f8 = 0x3eb5000;
  pcStack_d8 = Core_DebugMenu_DebugMenu__SetDropdownIndex;
  uStack_100 = uVar21;
  uStack_f0 = uVar10;
  plStack_e8 = plVar14;
  ppppppuStack_e0 = &pppppuStack_d0;
  if ((bRam0000000003eb571a & 1) == 0) {
    ppppppuStack_e0 = &pppppuStack_d0;
    func_0x00f78a20(0x3d535b8);
    bRam0000000003eb571a = 1;
  }
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  plVar14 = (long *)Core_DebugMenu_DebugMenu__TryGetElementCopy
                              (auVar32._0_8_,auVar32._8_8_,6,&uStack_130);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (lStack_120 != 0) {
    lVar16 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_120,uRam0000000003d535b8);
    auVar1._8_8_ = uStack_f0;
    auVar1._0_8_ = uStack_f8;
    if ((lVar16 != 0) &&
       (lVar16 = *(long *)(lVar16 + 0x18), plVar14 = plVar18, plVar15 = plStack_e8,
       uVar21 = uStack_100, pppppppuVar28 = (undefined8 *******)ppppppuStack_e0,
       pcVar30 = pcStack_d8, lVar16 != 0)) goto UnityEngine_UI_Dropdown__set_value;
  }
  auVar33 = func_0x00f78af4();
  lVar16 = *(long *)(auVar33._0_8_ + 0x18);
  if (lVar16 == 0) {
    plVar14 = (long *)func_0x00f78af4();
    return plVar14;
  }
  ppppppuVar5 = (undefined8 ******)&uStack_130;
  plVar14 = auVar33._8_8_;
  plVar15 = plVar18;
  uVar21 = 0x3eb5000;
  pppppppuVar28 = &ppppppuStack_e0;
  pcVar30 = Core_DebugMenu_DebugUIDropdownBehaviour__SetIndex;
  auVar1 = auVar32;
UnityEngine_UI_Dropdown__set_value:
  auVar32._8_8_ = plVar14;
  auVar32._0_8_ = lVar16;
  uVar10 = 1;
  puVar6 = (undefined1 *)ppppppuVar5;
  do {
    plVar14 = auVar32._0_8_;
    auVar2._8_8_ = uVar10;
    auVar2._0_8_ = auVar32._8_8_;
    *(undefined8 *)(puVar6 + -0x30) = uVar21;
    *(undefined1 (*) [16])(puVar6 + -0x28) = auVar1;
    *(long **)(puVar6 + -0x18) = plVar15;
    *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar28;
    *(code **)(puVar6 + -8) = pcVar30;
    pppppppuVar28 = (undefined8 *******)(puVar6 + -0x10);
    uVar21 = 0x3ec2000;
    if ((bRam0000000003ec2c21 & 1) == 0) {
      func_0x00f78a20(0x3d3d148);
      func_0x00f78a20(0x3d416e8);
      func_0x00f78a20(0x3d6bea8);
      bRam0000000003ec2c21 = 1;
    }
    plVar18 = (long *)/*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if ((int)plVar18 == 0) {
      lVar16 = plVar14[0x25];
      if (lVar16 != 0) goto code_r0x032b4ce8;
    }
    else {
      if ((int)plVar14[0x24] == auVar32._8_4_) {
        return plVar18;
      }
      lVar16 = plVar14[0x25];
      if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
        if (*(int *)(*(long *)(lVar16 + 0x10) + 0x18) == 0) {
          return plVar18;
        }
code_r0x032b4ce8:
        if (*(long *)(lVar16 + 0x10) != 0) {
          uVar9 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(auVar32._8_8_,0,*(int *)(*(long *)(lVar16 + 0x10) + 0x18) + -1,0);
          *(undefined4 *)(plVar14 + 0x24) = uVar9;
          plVar18 = (long *)/*UnityEngine.UI.Dropdown$$RefreshShownValue*/ func_0x032b4154(plVar14);
          if ((int)uVar10 == 0) {
            return plVar18;
          }
          /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('Dropdown.value')*/ uRam0000000003d6bea8,plVar14,0);
          lVar16 = lRam0000000003d416e8;
          lVar20 = plVar14[0x26];
          if (lVar20 != 0) break;
        }
      }
    }
    pcVar30 = (code *)&UnityEngine_UI_Dropdown__SetValueWithoutNotify;
    auVar32 = func_0x00f78af4();
    uVar10 = 0;
    puVar6 = puVar6 + -0x30;
    plVar15 = plVar14;
    auVar1 = auVar2;
  } while( true );
  uVar23 = *(uint *)(plVar14 + 0x24);
  *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x38) = uVar22;
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
  *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
  *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  if ((bRam0000000003eb6c46 & 1) == 0) {
    func_0x00f78a20(0x3d22a90);
    func_0x00f78a20(0x3d39e50);
    func_0x00f78a20(0x3d39e58);
    func_0x00f78a20(0x3d1f218);
    bRam0000000003eb6c46 = 1;
  }
  plVar14 = (long *)0x3eb6000;
  if ((lVar20 == 0) || (plVar18 = (long *)/*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar20,0), plVar18 == (long *)0x0)) {
code_r0x01b83be4:
    func_0x00f78af4();
code_r0x01b83be8:
    uVar21 = func_0x00f78b24();
    plVar18 = plVar14;
code_r0x01b83bf4:
    plVar14 = (long *)func_0x00f78ac0(uVar21,0);
    plVar14[5] = 0;
    *(long **)(puVar6 + -0xa0) = plVar18;
    *(long *)(puVar6 + -0x98) = lVar20;
    *(ulong *)(puVar6 + -0x90) = (ulong)uVar23;
    *(long *)(puVar6 + -0x88) = lVar16;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x78) =
         &UnityEngine_Events_UnityEvent_TouchScreenKeyboard_Status____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(plVar14 + 4) = 1;
    return plVar14;
  }
  uVar19 = (ulong)*(uint *)(plVar18 + 3);
  plVar14 = plVar18;
  if (0 < (int)*(uint *)(plVar18 + 3)) {
    lVar12 = 4;
    do {
      uVar24 = lVar12 - 4;
      if ((uVar19 & 0xffffffff) <= uVar24) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar21 = *(undefined8 *)(plVar18[2] + lVar12 * 8);
      lVar13 = *(long *)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      plVar14 = (long *)func_0x00f78adc(uVar21,lVar13);
      if (plVar14 == (long *)0x0) {
        if (*(uint *)(plVar18 + 3) <= uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = func_0x00f78adc(*(undefined8 *)(plVar18[2] + lVar12 * 8),/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
        if (lVar13 == 0) {
          if (*(uint *)(plVar18 + 3) <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar17 = *(long **)(plVar18[2] + lVar12 * 8);
          plVar15 = *(long **)(lVar20 + 0x28);
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
            *(long **)(lVar20 + 0x28) = plVar15;
          }
          *(uint *)(puVar6 + -100) = uVar23;
          lVar13 = *(long *)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x38);
          if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar13);
          }
          lVar13 = func_0x00f78ae0(lVar13,puVar6 + -100);
          plVar14 = plVar18;
          if (plVar15 == (long *)0x0) goto code_r0x01b83be4;
          if ((lVar13 != 0) &&
             (lVar11 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)) {
            uVar21 = func_0x00f78b14();
            goto code_r0x01b83bf4;
          }
          if ((int)plVar15[3] == 0) goto code_r0x01b83be8;
          plVar15[4] = lVar13;
          if (plVar17 == (long *)0x0) goto code_r0x01b83be4;
          plVar14 = (long *)(**(code **)(*plVar17 + 0x178))
                                      (plVar17,*(undefined8 *)(lVar20 + 0x28),
                                       *(undefined8 *)(*plVar17 + 0x180));
        }
        else {
          plVar14 = (long *)/*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar13,0);
        }
      }
      else {
        plVar14 = (long *)(**(code **)(*plVar14 + 0x198))
                                    (plVar14,(ulong)uVar23,*(undefined8 *)(*plVar14 + 0x1a0));
      }
      uVar19 = (ulong)(int)plVar18[3];
      lVar13 = lVar12 + -3;
      lVar12 = lVar12 + 1;
    } while (lVar13 < (long)uVar19);
  }
  return plVar14;
}



// ============================================================
// RVA: 0x1642518 | Core.DebugMenu.DebugUISliderBehaviour.set_Value
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_DebugMenu_DebugUISliderBehaviour__set_Value
          (undefined1 param_1 [16],uint param_2,float param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 ****ppppuVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined1 ****ppppuVar22;
  code *pcVar23;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 *****pppppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar8 = *(long **)(param_4 + 0x30);
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01642538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar25 = (**(code **)(*plVar8 + 0x428))(plVar8,*(undefined8 *)(*plVar8 + 0x430));
    return auVar25;
  }
  auVar25 = func_0x00f78af4();
  lVar12 = auVar25._0_8_;
  pcStack_18 = Core_DebugMenu_DebugMenu__InstantiateComponentUIWithLabel;
  fVar3 = (float)CONCAT13(extraout_var_01,
                          CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  uVar15 = 0x3d6d868;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5721 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d53560);
    func_0x00f78a20(0x3d53748);
    func_0x00f78a20(0x3d53758);
    func_0x00f78a20(0x3d6f278);
    func_0x00f78a20(0x3d6d868);
    bRam0000000003eb5721 = 1;
  }
  lStack_90 = 0;
  uStack_88 = 0;
  fVar24 = (fVar3 + -15.0) * param_3 * _UNK_033f7d80;
  lVar9 = Core_DebugMenu_DebugMenu__InstantiateUI
                    (SUB41((fVar3 + -15.0) * (100.0 - param_3) * _UNK_033f7d80,0),param_2,lVar12,
                     auVar25._8_8_,param_6);
  uVar10 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('Label')*/ uRam0000000003d6f278,0);
  lVar11 = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(fVar24,0),param_2,lVar12,4,uVar10);
  uVar10 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('HorizontalLayout')*/ uRam0000000003d6d868,0);
  auVar25._0_8_ = Core_DebugMenu_DebugMenu__InstantiateUI(extraout_b0,param_2,lVar12,8);
  if (lVar9 != 0) {
    uVar10 = uRam0000000003d53758;
    iVar7 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar9,&uStack_88);
    lVar12 = auVar25._0_8_;
    if (iVar7 != 0) {
      if (auVar25._0_8_ == 0) goto LAB_01642754;
      uVar10 = uRam0000000003d53748;
      iVar7 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(auVar25._0_8_,&lStack_90);
      if (iVar7 != 0) {
        if (lStack_90 == 0) goto LAB_01642754;
        *(undefined8 *)(lStack_90 + 0xf8) = uStack_88;
      }
    }
    if ((lVar11 != 0) &&
       (plVar8 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar11,uRam0000000003d53560), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x5e8))(plVar8,param_7,*(undefined8 *)(*plVar8 + 0x5f0));
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar11,auVar25._0_8_,0,0);
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar9,auVar25._0_8_,0,0);
      auVar25._8_8_ = lVar9;
      return auVar25;
    }
  }
LAB_01642754:
  func_0x00f78af4();
  pcStack_98 = Core_DebugMenu_DebugMenu__InstantiatePrefab;
  lStack_c0 = lVar12;
  lStack_b8 = lVar11;
  lStack_b0 = lVar9;
  uStack_a8 = param_7;
  ppuStack_a0 = &puStack_20;
  if ((bRam0000000003eb5722 & 1) == 0) {
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5722 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar26._0_8_ = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
  if (auVar26._0_8_ != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(auVar26._0_8_,uVar10,0);
    auVar26._8_8_ = extraout_x1_00;
    return auVar26;
  }
  auVar26 = func_0x00f78af4();
  plVar8 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  uStack_f0 = 0x3d5b098;
  plStack_e8 = (long *)0x3d23990;
  pcStack_c8 = Core_DebugMenu_DebugMenu__ShowPanel;
  ppppuStack_100 = (undefined1 ****)(ulong)(uint)fVar3;
  puStack_f8 = (undefined *)(ulong)param_2;
  uStack_e0 = extraout_x1;
  uStack_d8 = uVar10;
  pppuStack_d0 = &ppuStack_a0;
  auVar25 = auVar26;
  if ((bRam0000000003eb5727 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    auVar25 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5727 = 1;
  }
  plStack_110 = (long *)0x0;
  puStack_128 = (undefined *)0x0;
  pppppuStack_130 = (undefined1 *****)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (auVar26._8_4_ == -1) {
    return auVar25;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (extraout_b0_00,auVar25._0_8_,*(undefined8 *)(lVar12 + 0x58),
             *(undefined8 *)(lVar12 + 0x50),plVar8);
  uVar16 = 1;
  auVar25 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar12,plVar8,1,&pppppuStack_130);
  if (auVar25._0_4_ == 0) {
    return auVar25;
  }
  if (uStack_120 == 0) {
LAB_0164293c:
    func_0x00f78af4();
  }
  else {
    plVar8 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(uStack_120,uRam0000000003d535c0);
    if (*(long *)(lVar12 + 0x78) == 0) {
      if (plVar8 != (long *)0x0) goto LAB_016428ec;
      goto LAB_0164293c;
    }
    if (plVar8 == (long *)0x0) goto LAB_0164293c;
    uVar16 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar8,1);
LAB_016428ec:
    lVar9 = plVar8[0x10];
    if (lVar9 != 0) {
      uVar19 = 0;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar19) goto code_r0x01642940;
        if (*(uint *)(lVar9 + 0x18) <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        Core_DebugMenu_DebugMenu__ShowPanel
                  (extraout_b0_00,lVar12,
                   *(undefined4 *)(*(long *)(lVar9 + 0x10) + uVar19 * 4 + 0x20));
        uVar19 = uVar19 + 1;
        lVar9 = plVar8[0x10];
      } while (lVar9 != 0);
      goto LAB_0164293c;
    }
  }
code_r0x01642940:
  plVar20 = plStack_e8;
  uVar19 = uStack_f0;
  puVar6 = puStack_f8;
  ppppuVar5 = ppppuStack_100;
  ppppuVar22 = &pppuStack_d0;
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (plVar8[8] != 0) {
    uVar10 = 0x3d23000;
    plVar8 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar8[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar25 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar8,0);
    if (auVar25._0_4_ == 0) {
      return auVar25;
    }
    if (plVar8 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar8,1,0);
      uVar16 = *(ulong *)(*plVar8 + 0x380);
      (**(code **)(*plVar8 + 0x378))(plVar8,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar12 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar13 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar8,0);
      uVar10 = 0;
      if (lVar12 != 0) {
        uVar15 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar12,plVar13,0);
        ppppuStack_100 = (undefined1 ****)0x3d6d868;
        puStack_f8 = (undefined *)param_6;
        uStack_f0 = uVar19;
        plStack_e8 = plVar20;
        if ((bRam0000000003ec2c3f & 1) == 0) {
          func_0x00f78a20(0x3d210d8);
          func_0x00f78a20(0x3d560a8);
          func_0x00f78a20(0x3d560f0);
          func_0x00f78a20(0x3d21718);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d69450);
          func_0x00f78a20(0x3d7c748);
          bRam0000000003ec2c3f = 1;
        }
        uVar10 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar12 + 0x41) == '\0') {
          *(undefined1 *)(lVar12 + 0x41) = 1;
          uVar10 = *(undefined8 *)(lVar12 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar13,uVar10,0);
          if (auVar25._0_4_ == 0) {
            uVar10 = *(undefined8 *)(lVar12 + 0x38);
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003e85071 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85071 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar10,uVar15,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar12 + 0x38) = plVar13;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar25 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar13,uVar15,
                                      *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60)
                                      ,uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar12 + 0x41) = 0;
          return auVar25;
        }
        if (plVar13 == (long *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar17 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar10,uVar15,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = uStack_f0;
        uVar10 = 0;
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar10 = extraout_x1_01;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_02;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar10);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar8 == (long *)0x0) {
          auVar25 = func_0x00f78af4();
          uStack_120 = uVar16;
          uStack_118 = 0x3ca3000;
          puStack_f8 = &UnityEngine_Debug__LogError;
          plStack_110 = plVar8;
          uStack_108 = uVar15;
          ppppuStack_100 = &pppuStack_d0;
          if ((bRam0000000003ebf393 & 1) == 0) {
            func_0x00f78a20(0x3d210d8);
            func_0x00f78a20(0x3d22300);
            bRam0000000003ebf393 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (cRam0000000003ca34ff == '\0') {
            func_0x00f78a20(0x3d210d8);
            cRam0000000003ca34ff = '\x01';
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar8 == (long *)0x0) {
            auVar25 = func_0x00f78af4();
            puStack_128 = &UnityEngine_Debug__LogErrorFormat;
            pppppuStack_130 = &ppppuStack_100;
            if ((bRam0000000003ebf394 & 1) == 0) {
              func_0x00f78a20(0x3d210d8);
              func_0x00f78a20(0x3d22300);
              bRam0000000003ebf394 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (cRam0000000003ca34ff == '\0') {
              func_0x00f78a20(0x3d210d8);
              cRam0000000003ca34ff = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar8 == (long *)0x0) {
              auVar25 = func_0x00f78af4();
              uVar15 = uVar17;
              if ((bRam0000000003ebf395 & 1) == 0) {
                func_0x00f78a20(0x3d210d8);
                func_0x00f78a20(0x3d222f8);
                bRam0000000003ebf395 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (cRam0000000003ca34ff == '\0') {
                func_0x00f78a20(0x3d210d8);
                cRam0000000003ca34ff = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar8 == (long *)0x0) {
                auVar25 = func_0x00f78af4();
                if ((bRam0000000003ebf397 & 1) == 0) {
                  func_0x00f78a20(0x3d210d8);
                  func_0x00f78a20(0x3d222f8);
                  bRam0000000003ebf397 = 1;
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if (cRam0000000003ca34ff == '\0') {
                  func_0x00f78a20(0x3d210d8);
                  cRam0000000003ca34ff = '\x01';
                }
                if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar8 == (long *)0x0) {
                  auVar25 = func_0x00f78af4();
                  if ((bRam0000000003ebf399 & 1) == 0) {
                    func_0x00f78a20(0x3d210d8);
                    func_0x00f78a20(0x3d22300);
                    bRam0000000003ebf399 = 1;
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  if (cRam0000000003ca34ff == '\0') {
                    func_0x00f78a20(0x3d210d8);
                    cRam0000000003ca34ff = '\x01';
                  }
                  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar8 == (long *)0x0) {
                    auVar25 = func_0x00f78af4();
                    if ((bRam0000000003ebf39a & 1) == 0) {
                      func_0x00f78a20(0x3d210d8);
                      func_0x00f78a20(0x3d22300);
                      bRam0000000003ebf39a = 1;
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    if (cRam0000000003ca34ff == '\0') {
                      func_0x00f78a20(0x3d210d8);
                      cRam0000000003ca34ff = '\x01';
                    }
                    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar8 == (long *)0x0) {
                      auVar25 = func_0x00f78af4();
                      if ((bRam0000000003ebf39b & 1) == 0) {
                        func_0x00f78a20(0x3d210d8);
                        func_0x00f78a20(0x3d222f8);
                        bRam0000000003ebf39b = 1;
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      if (cRam0000000003ca34ff == '\0') {
                        func_0x00f78a20(0x3d210d8);
                        cRam0000000003ca34ff = '\x01';
                      }
                      if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar8 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar8 == (long *)0x0) {
                        func_0x00f78af4();
                        if (pcRam0000000003ebf3a0 == (code *)0x0) {
                          pcRam0000000003ebf3a0 =
                               (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        auVar25 = (*pcRam0000000003ebf3a0)();
                        return auVar25;
                      }
                      lVar12 = *plVar8;
                      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar16 != 0) {
                        piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                            puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
                            goto code_r0x0322c0c4;
                          }
                          piVar18 = piVar18 + 4;
                          uVar16 = uVar16 - 1;
                        } while (uVar16 != 0);
                      }
                      puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      auVar25 = (*(code *)*puVar14)(plVar8,2,auVar25._0_8_,auVar25._8_8_,uVar15,
                                                    puVar14[1]);
                      return auVar25;
                    }
                    lVar12 = *plVar8;
                    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar16 != 0) {
                      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                          goto code_r0x0322bf94;
                        }
                        piVar18 = piVar18 + 4;
                        uVar16 = uVar16 - 1;
                      } while (uVar16 != 0);
                    }
                    puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    auVar25 = (*(code *)*puVar14)(plVar8,2,auVar25._0_8_,auVar25._8_8_,puVar14[1]);
                    return auVar25;
                  }
                  lVar12 = *plVar8;
                  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar16 != 0) {
                    piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                        puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                        goto code_r0x0322be68;
                      }
                      piVar18 = piVar18 + 4;
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  auVar25 = (*(code *)*puVar14)(plVar8,2,auVar25._0_8_,auVar25._8_8_,puVar14[1]);
                  return auVar25;
                }
                lVar12 = *plVar8;
                uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar16 != 0) {
                  piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                      goto code_r0x0322bd40;
                    }
                    piVar18 = piVar18 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar25 = (*(code *)*puVar14)(plVar8,auVar25._0_8_,auVar25._8_8_,puVar14[1]);
                return auVar25;
              }
              lVar12 = *plVar8;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
                    goto code_r0x0322bc0c;
                  }
                  piVar18 = piVar18 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar25 = (*(code *)*puVar14)(plVar8,0,auVar25._0_8_,auVar25._8_8_,uVar17,puVar14[1]);
              return auVar25;
            }
            lVar12 = *plVar8;
            uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                  goto code_r0x0322badc;
                }
                piVar18 = piVar18 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar25 = (*(code *)*puVar14)(plVar8,0,auVar25._0_8_,auVar25._8_8_,puVar14[1]);
            return auVar25;
          }
          lVar12 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                goto code_r0x0322b9b0;
              }
              piVar18 = piVar18 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar25 = (*(code *)*puVar14)(plVar8,0,auVar25._0_8_,auVar25._8_8_,puVar14[1]);
          return auVar25;
        }
        lVar12 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
              puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 4) * 0x10 + 0x138);
              goto code_r0x0322b888;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar14 = (undefined8 *)func_0x00fac1f0(plVar8,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar25 = (*(code *)*puVar14)(plVar8,0,uVar15,puVar14[1]);
        return auVar25;
      }
    }
  }
  auVar4._8_8_ = plVar8;
  auVar4._0_8_ = uVar10;
  pcVar23 = Core_DebugMenu_DebugMenu__PopPanels;
  auVar25 = func_0x00f78af4();
  puVar14 = &uStack_e0;
code_r0x01642bc4:
  auVar26 = auVar25;
  uVar10 = auVar26._8_8_;
  lVar12 = auVar26._0_8_;
  *(undefined8 *)((long)puVar14 + -0x40) = uVar15;
  *(undefined8 *)((long)puVar14 + -0x38) = param_6;
  *(ulong *)((long)puVar14 + -0x30) = uVar19;
  *(long **)((long)puVar14 + -0x28) = plVar20;
  *(undefined1 (*) [16])((long)puVar14 + -0x20) = auVar4;
  *(undefined1 *****)((long)puVar14 + -0x10) = ppppuVar22;
  *(code **)((long)puVar14 + -8) = pcVar23;
  ppppuVar22 = (undefined1 ****)((long)puVar14 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)((long)puVar14 + -0x50) = 0;
  *(undefined8 *)((long)puVar14 + -0x68) = 0;
  *(undefined8 *)((long)puVar14 + -0x70) = 0;
  *(undefined8 *)((long)puVar14 + -0x58) = 0;
  *(undefined8 *)((long)puVar14 + -0x60) = 0;
  *(undefined8 *)((long)puVar14 + -0x80) = 0;
  *(undefined8 *)((long)puVar14 + -0x98) = 0;
  *(undefined8 *)((long)puVar14 + -0xa0) = 0;
  *(undefined8 *)((long)puVar14 + -0x88) = 0;
  *(undefined8 *)((long)puVar14 + -0x90) = 0;
  auVar25 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                      (lVar12,uVar10,1,(undefined1 *)((long)puVar14 + -0x70));
  if (auVar25._0_4_ == 0) {
    return auVar25;
  }
  plVar20 = *(long **)((long)puVar14 + -0x58);
  plVar8 = plVar20;
  if (plVar20 != (long *)0x0) {
    uVar17 = 0x3d21150;
    uVar21 = 0x3d21150;
    uVar19 = uVar16;
    param_6 = uVar17;
    if ((*(byte *)(*plVar20 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (plVar20[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar20[0xf],uRam0000000003d403d8);
      lVar9 = plVar20[0xf];
      uVar15 = uVar1;
      if (lVar9 == 0) goto LAB_01642da0;
      uVar2 = *(int *)(lVar9 + 0x18) - (int)uVar16;
      uVar16 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        param_6 = uVar21;
        uVar15 = uVar1;
        if (lVar9 == 0) goto LAB_01642da0;
        uVar15 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar9,uRam0000000003d403d8);
        iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (lVar12,uVar15,1,(undefined1 *)((long)puVar14 + -0xa0));
        if (iVar7 != 0) {
          plVar8 = *(long **)((long)puVar14 + -0x88);
          uVar15 = 0x3d403d8;
          if (plVar8 == (long *)0x0) goto LAB_01642da0;
          uVar19 = uVar16;
          param_6 = uVar17;
          uVar15 = uVar1;
          if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar8[0xf] = 0;
        }
        lVar9 = plVar20[0xf];
        uVar2 = (int)uVar16 - 1;
        uVar16 = (ulong)uVar2;
      } while (uVar2 != 0);
      param_6 = uVar21;
      uVar15 = 0x3d403d8;
      if (lVar9 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar8 = plVar20;
  uVar19 = uVar16;
LAB_01642da8:
  pcVar23 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar25 = func_0x00f78e5c(plVar8);
  uVar16 = 1;
  puVar14 = (undefined8 *)((long)puVar14 + -0xa0);
  auVar4 = auVar26;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar9 + 0x18)) {
    uVar15 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar9,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar12,uVar15);
  }
  plVar20[0xf] = 0;
  *(undefined1 *****)((long)puVar14 + -0x40) = ppppuVar5;
  *(undefined **)((long)puVar14 + -0x38) = puVar6;
  *(undefined8 *)((long)puVar14 + -0x30) = *(undefined8 *)((long)puVar14 + -0x30);
  *(undefined8 *)((long)puVar14 + -0x28) = *(undefined8 *)((long)puVar14 + -0x28);
  *(undefined8 *)((long)puVar14 + -0x20) = *(undefined8 *)((long)puVar14 + -0x20);
  *(undefined8 *)((long)puVar14 + -0x18) = *(undefined8 *)((long)puVar14 + -0x18);
  *(undefined8 *)((long)puVar14 + -0x10) = *(undefined8 *)((long)puVar14 + -0x10);
  *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
  auVar25 = auVar26;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    auVar25 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)((long)puVar14 + -0x50) = 0;
  *(undefined8 *)((long)puVar14 + -0x68) = 0;
  *(undefined8 *)((long)puVar14 + -0x70) = 0;
  *(undefined8 *)((long)puVar14 + -0x58) = 0;
  *(undefined8 *)((long)puVar14 + -0x60) = 0;
  if (auVar26._8_4_ == -1) {
    return auVar25;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,auVar25._0_8_,*(undefined8 *)(lVar12 + 0x50),*(undefined8 *)(lVar12 + 0x58),uVar10);
  auVar25 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                      (lVar12,uVar10,1,(undefined1 *)((long)puVar14 + -0x70));
  if (auVar25._0_4_ == 0) {
    return auVar25;
  }
  if (*(long *)((long)puVar14 + -0x60) != 0) {
    auVar25 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)puVar14 + -0x60),uRam0000000003d535c0);
    lVar9 = auVar25._0_8_;
    if (*(long *)(lVar12 + 0x78) == 0) {
      if (lVar9 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar9 == 0) goto LAB_01642a84;
      auVar25 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar9,0,0);
    }
    lVar11 = *(long *)(lVar9 + 0x80);
    if (lVar11 == 0) {
      return auVar25;
    }
    uVar16 = 0;
    do {
      if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar16) {
        return auVar25;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar25 = Core_DebugMenu_DebugMenu__HidePanel
                          (0,lVar12,*(undefined4 *)(*(long *)(lVar11 + 0x10) + uVar16 * 4 + 0x20));
      uVar16 = uVar16 + 1;
      lVar11 = *(long *)(lVar9 + 0x80);
    } while (lVar11 != 0);
  }
LAB_01642a84:
  auVar25 = func_0x00f78af4();
  return auVar25;
}



// ============================================================
// RVA: 0x1643c84 | Core.DebugMenu.DebugUISliderBehaviour.SetTextForValues
// ============================================================

undefined8
Core_DebugMenu_DebugUISliderBehaviour__SetTextForValues
          (undefined4 param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  uVar1 = /*System.Single$$ToString*/ func_0x029ba928(&uStack_24,*(undefined8 *)(param_2 + 0x40),0);
  if (param_3 != (long *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x5e8))(param_3,uVar1,*(undefined8 *)(*param_3 + 0x5f0));
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x30);
}



// ============================================================
// RVA: 0x1643cdc | Core.DebugMenu.DebugUISliderBehaviour.get_Slider
// ============================================================

undefined8 Core_DebugMenu_DebugUISliderBehaviour__get_Slider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1643ce4 | Core.DebugMenu.DebugUISliderBehaviour.get_Value
// ============================================================

ulong Core_DebugMenu_DebugUISliderBehaviour__get_Value(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01643d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x418))(plVar1,*(undefined8 *)(*plVar1 + 0x420));
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar3 + 0x38);
}



// ============================================================
// RVA: 0x1643d0c | Core.DebugMenu.DebugUISliderBehaviour.get_ValueNeedsSyncing
// ============================================================

undefined1 Core_DebugMenu_DebugUISliderBehaviour__get_ValueNeedsSyncing(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1643d14 | Core.DebugMenu.DebugUISliderBehaviour.set_ValueNeedsSyncing
// ============================================================

void Core_DebugMenu_DebugUISliderBehaviour__set_ValueNeedsSyncing(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643d1c | Core.DebugMenu.DebugUISliderBehaviour.OnValueChanged
// ============================================================

void Core_DebugMenu_DebugUISliderBehaviour__OnValueChanged(long param_1)

{
  Core_DebugMenu_DebugUISliderBehaviour__SetTextForValues(param_1,*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// ============================================================
// RVA: 0x1643d48 | Core.DebugMenu.DebugUISliderBehaviour..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_DebugUISliderBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5738 & 1) == 0) {
    func_0x00f78a20(0x3d7a810);
    bRam0000000003eb5738 = 1;
  }
  *(undefined8 *)(param_1 + 0x40) = /*STR('n0')*/ uRam0000000003d7a810;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



