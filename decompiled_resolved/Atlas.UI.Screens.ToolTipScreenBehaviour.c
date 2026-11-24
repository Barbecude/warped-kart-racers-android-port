// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ToolTipScreenBehaviour

// ============================================================
// RVA: 0x150a064 | Atlas.UI.Screens.ToolTipScreenBehaviour.DisableDismissButton
// ============================================================

void Atlas_UI_Screens_ToolTipScreenBehaviour__DisableDismissButton(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe9d8)(lVar1,0);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4d43 & 1) == 0) {
    func_0x00f78a20(0x3d2c980);
    bRam0000000003eb4d43 = 1;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c980 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return;
}



// ============================================================
// RVA: 0x150a0dc | Atlas.UI.Screens.ToolTipScreenBehaviour.get_DismissButton
// ============================================================

undefined8 Atlas_UI_Screens_ToolTipScreenBehaviour__get_DismissButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x150a0e4 | Atlas.UI.Screens.ToolTipScreenBehaviour.ShowModal
// ============================================================

/* WARNING: Possible PIC construction at 0x0150a184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0150a188) */
/* WARNING: Removing unreachable block (ram,0x0150a18c) */
/* WARNING: Removing unreachable block (ram,0x0150a194) */
/* WARNING: Removing unreachable block (ram,0x0150a19c) */
/* WARNING: Removing unreachable block (ram,0x0150a1b8) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_ToolTipScreenBehaviour__ShowModal
                 (long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  float extraout_s0;
  float fVar17;
  ulong extraout_d0;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar25 [16];
  
  puVar14 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d44 & 1) == 0) {
    func_0x00f78a20(0x3d29328);
    bRam0000000003eb4d44 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300) <= *(byte *)(*param_2 + 300)) {
      plVar5 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300) * 8 +
                   -8) != /*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328) {
        plVar5 = (long *)0x0;
      }
      goto LAB_0150a160;
    }
  }
  plVar5 = (long *)0x0;
LAB_0150a160:
  plVar4 = (long *)param_1[0xd];
  if (plVar4 == (long *)0x0) {
    puVar15 = &Atlas_UI_Screens_ToolTipScreenBehaviour__EnableTapToDismiss;
    auVar25 = func_0x00f78af4();
    uVar8 = auVar25._8_8_;
    puVar1 = &stack0xffffffffffffffd0;
    plVar4 = auVar25._0_8_;
  }
  else {
    (**(code **)(*plVar4 + 0x198))(plVar4,param_2,param_3,*(undefined8 *)(*plVar4 + 0x1a0));
    uVar8 = 0;
    puVar15 = &UNK_0150a188;
    puVar1 = &stack0xffffffffffffffd0;
    plVar4 = param_1;
  }
  do {
    *(long **)(puVar1 + -0x30) = plVar5;
    *(long **)(puVar1 + -0x28) = param_2;
    *(undefined8 *)(puVar1 + -0x20) = param_3;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar14;
    *(undefined **)(puVar1 + -8) = puVar15;
    param_2 = (long *)0x3eb4000;
    if ((bRam0000000003eb4d45 & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      bRam0000000003eb4d45 = 1;
    }
    if (plVar4[0xf] != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar4[0xf],uVar8,0);
      if (plVar4[0xe] != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar4[0xe],uVar8,0);
        if (plVar4[0x11] != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar4[0x11],uVar8,0);
          if (plVar4[0x11] != 0) {
            plVar5 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(plVar4[0x11],0);
            if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
              plVar5 = (long *)0x0;
            }
            if ((int)uVar8 != 0) {
              uVar18 = 0;
              uVar23 = 0;
              puVar14 = *(undefined1 **)(puVar1 + -0x10);
              puVar15 = *(undefined **)(puVar1 + -8);
              lVar3 = *(long *)(puVar1 + -0x20);
              uVar8 = 0;
              uVar9 = 1;
              uVar12 = 0;
              plVar4 = *(long **)(puVar1 + -0x18);
              uVar11 = *(undefined8 *)(puVar1 + -0x28);
              uVar13 = *(undefined8 *)(puVar1 + -0x30);
              uVar20 = 0x3f800000;
              fVar24 = _UNK_033f813c;
              do {
                uVar10 = uVar9;
                uVar7 = uVar8;
                plVar6 = plVar5;
                fVar19 = (float)uVar20;
                uVar16 = (undefined4)uVar18;
                uVar21 = uVar18 & 0xffffffff;
                uVar22 = uVar18 & 0xffffffff;
                *(ulong *)(puVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
                *(ulong *)(puVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
                *(ulong *)(puVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
                *(ulong *)(puVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
                *(ulong *)(puVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
                *(ulong *)(puVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
                *(ulong *)(puVar1 + -0x50) = unaff_d9;
                *(ulong *)(puVar1 + -0x48) = unaff_d8;
                *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar1 + -0x30) = uVar13;
                *(undefined8 *)(puVar1 + -0x28) = uVar11;
                *(long *)(puVar1 + -0x20) = lVar3;
                *(long **)(puVar1 + -0x18) = plVar4;
                *(undefined1 **)(puVar1 + -0x10) = puVar14;
                *(undefined **)(puVar1 + -8) = puVar15;
                puVar14 = puVar1 + -0x10;
                unaff_d9 = (ulong)(uint)fVar24;
                unaff_d8 = uVar23 & 0xffffffff;
                unaff_00005164 = 0;
                unaff_00005184 = 0;
                unaff_000051a4 = 0;
                unaff_00005144 = 0;
                unaff_000051c4 = 0;
                unaff_000051e4 = 0;
                unaff_x24 = 0x3d26a48;
                uVar9 = uVar10;
                uVar11 = uVar12;
                uVar23 = uVar22;
                fVar17 = fVar19;
                if ((bRam0000000003eb4867 & 1) == 0) {
                  func_0x00f78a20(0x3d25428);
                  func_0x00f78a20(0x3d5e6e0);
                  func_0x00f78a20(0x3d5e770);
                  func_0x00f78a20(0x3d5e790);
                  func_0x00f78a20(0x3d5e7a8);
                  func_0x00f78a20(0x3d40f78);
                  func_0x00f78a20(0x3d62230);
                  func_0x00f78a20(0x3d62238);
                  func_0x00f78a20(0x3d62240);
                  func_0x00f78a20(0x3d26a48);
                  bRam0000000003eb4867 = 1;
                  uVar23 = uVar22;
                }
                lVar3 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
                /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(lVar3,0);
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x10) = uVar7;
                  *(undefined8 *)(lVar3 + 0x18) = uVar12;
                  if (plVar6 != (long *)0x0) {
                    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar18 & 0xffffffff,uVar18 & 0xffffffff,uVar18 & 0xffffffff,
                                    plVar6,0);
                    if ((int)uVar10 == 0) {
                      plVar5 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar20 & 0xffffffff,uVar20 & 0xffffffff,
                                                       uVar20 & 0xffffffff,fVar24 * _UNK_033f82b8,
                                                       plVar6,0);
                      puVar15 = &UNK_0146f6bc;
                    }
                    else {
                      plVar5 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar20 & 0xffffffff,uVar20 & 0xffffffff,
                                                       uVar20 & 0xffffffff,fVar24,plVar6,0);
                      puVar15 = &UNK_0146f60c;
                    }
                    uVar8 = uRam0000000003d5e7a8;
                    *(long *)(puVar1 + -0xa0) = lVar3;
                    *(long **)(puVar1 + -0x98) = plVar6;
                    *(undefined1 **)(puVar1 + -0x90) = puVar14;
                    *(undefined **)(puVar1 + -0x88) = puVar15;
                    if ((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) {
                      *(undefined4 *)((long)plVar5 + 0xb4) = 9;
                      iVar2 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar8);
                      if (iVar2 != 0) {
                        fVar17 = *(float *)(plVar5 + 0x18);
                        fVar24 = -fVar17;
                        if (fVar17 != INFINITY) {
                          fVar24 = fVar17;
                        }
                        *(float *)(plVar5 + 0x18) = (float)(int)fVar24;
                      }
                      plVar5[0x17] = 0;
                    }
                    return plVar5;
                  }
                }
                puVar15 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
                plVar5 = (long *)func_0x00f78af4();
                puVar1 = puVar1 + -0x80;
                uVar8 = extraout_x1;
                uVar12 = uVar11;
                plVar4 = plVar6;
                uVar11 = uVar10;
                uVar13 = uVar12;
                unaff_x23 = uVar7;
                uVar18 = extraout_d0;
                uVar20 = uVar21;
                fVar24 = fVar17;
                unaff_s10 = uVar16;
                unaff_s11 = fVar19;
                unaff_s12 = fVar19;
                unaff_s13 = fVar19;
                unaff_s14 = uVar16;
                unaff_s15 = uVar16;
              } while( true );
            }
            return plVar5;
          }
        }
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    *(ulong *)(puVar1 + -0x60) = unaff_d9;
    *(ulong *)(puVar1 + -0x58) = unaff_d8;
    *(long **)(puVar1 + -0x50) = plVar4;
    *(undefined8 *)(puVar1 + -0x48) = uVar8;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_ToolTipScreenBehaviour__Update;
    fVar24 = *(float *)(plVar6 + 0x12);
    plVar4 = plVar6;
    if (0.0 < fVar24) {
      plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      fVar24 = fVar24 - extraout_s0;
      *(float *)(plVar6 + 0x12) = fVar24;
    }
    if ((*(char *)((long)plVar6 + 0x94) == '\0') || (0.0 <= fVar24)) {
      return plVar4;
    }
    *(undefined1 *)((long)plVar6 + 0x94) = 0;
    uVar8 = 1;
    puVar14 = *(undefined1 **)(puVar1 + -0x40);
    puVar15 = *(undefined **)(puVar1 + -0x38);
    param_3 = *(undefined8 *)(puVar1 + -0x50);
    param_1 = *(long **)(puVar1 + -0x48);
    unaff_d9 = *(ulong *)(puVar1 + -0x60);
    unaff_d8 = *(ulong *)(puVar1 + -0x58);
    puVar1 = puVar1 + -0x30;
    plVar4 = plVar6;
  } while( true );
}



// ============================================================
// RVA: 0x150a1cc | Atlas.UI.Screens.ToolTipScreenBehaviour.EnableTapToDismiss
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_ToolTipScreenBehaviour__EnableTapToDismiss(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined8 unaff_x29;
  undefined *puVar15;
  undefined8 unaff_x30;
  undefined4 uVar16;
  float extraout_s0;
  float fVar17;
  ulong extraout_d0;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4d45 & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      bRam0000000003eb4d45 = 1;
    }
    if (param_1[0xf] != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_1[0xf],param_2,0);
      if (param_1[0xe] != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_1[0xe],param_2,0);
        if (param_1[0x11] != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(param_1[0x11],param_2,0);
          if (param_1[0x11] != 0) {
            plVar6 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(param_1[0x11],0);
            if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
              plVar6 = (long *)0x0;
            }
            if ((int)param_2 != 0) {
              uVar18 = 0;
              uVar23 = 0;
              puVar14 = *(undefined1 **)((long)register0x00000008 + -0x10);
              puVar15 = *(undefined **)((long)register0x00000008 + -8);
              lVar4 = *(long *)((long)register0x00000008 + -0x20);
              puVar2 = (undefined1 *)register0x00000008;
              uVar1 = 0;
              uVar9 = 1;
              uVar12 = 0;
              plVar7 = *(long **)((long)register0x00000008 + -0x18);
              uVar11 = *(undefined8 *)((long)register0x00000008 + -0x28);
              uVar13 = *(undefined8 *)((long)register0x00000008 + -0x30);
              uVar20 = 0x3f800000;
              fVar24 = _UNK_033f813c;
              do {
                uVar10 = uVar9;
                uVar8 = uVar1;
                plVar5 = plVar6;
                fVar19 = (float)uVar20;
                uVar16 = (undefined4)uVar18;
                uVar21 = uVar18 & 0xffffffff;
                uVar22 = uVar18 & 0xffffffff;
                *(ulong *)(puVar2 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
                *(ulong *)(puVar2 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
                *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
                *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
                *(ulong *)(puVar2 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
                *(ulong *)(puVar2 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
                *(ulong *)(puVar2 + -0x50) = unaff_d9;
                *(ulong *)(puVar2 + -0x48) = unaff_d8;
                *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar2 + -0x30) = uVar13;
                *(undefined8 *)(puVar2 + -0x28) = uVar11;
                *(long *)(puVar2 + -0x20) = lVar4;
                *(long **)(puVar2 + -0x18) = plVar7;
                *(undefined1 **)(puVar2 + -0x10) = puVar14;
                *(undefined **)(puVar2 + -8) = puVar15;
                puVar14 = puVar2 + -0x10;
                unaff_d9 = (ulong)(uint)fVar24;
                unaff_d8 = uVar23 & 0xffffffff;
                unaff_00005164 = 0;
                unaff_00005184 = 0;
                unaff_000051a4 = 0;
                unaff_00005144 = 0;
                unaff_000051c4 = 0;
                unaff_000051e4 = 0;
                unaff_x24 = 0x3d26a48;
                uVar9 = uVar10;
                uVar11 = uVar12;
                uVar23 = uVar22;
                fVar17 = fVar19;
                if ((bRam0000000003eb4867 & 1) == 0) {
                  func_0x00f78a20(0x3d25428);
                  func_0x00f78a20(0x3d5e6e0);
                  func_0x00f78a20(0x3d5e770);
                  func_0x00f78a20(0x3d5e790);
                  func_0x00f78a20(0x3d5e7a8);
                  func_0x00f78a20(0x3d40f78);
                  func_0x00f78a20(0x3d62230);
                  func_0x00f78a20(0x3d62238);
                  func_0x00f78a20(0x3d62240);
                  func_0x00f78a20(0x3d26a48);
                  bRam0000000003eb4867 = 1;
                  uVar23 = uVar22;
                }
                lVar4 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
                /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(lVar4,0);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar4 + 0x10) = uVar8;
                  *(undefined8 *)(lVar4 + 0x18) = uVar12;
                  if (plVar5 != (long *)0x0) {
                    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar18 & 0xffffffff,uVar18 & 0xffffffff,uVar18 & 0xffffffff,
                                    plVar5,0);
                    if ((int)uVar10 == 0) {
                      plVar6 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar20 & 0xffffffff,uVar20 & 0xffffffff,
                                                       uVar20 & 0xffffffff,fVar24 * _UNK_033f82b8,
                                                       plVar5,0);
                      puVar15 = &UNK_0146f6bc;
                    }
                    else {
                      plVar6 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar20 & 0xffffffff,uVar20 & 0xffffffff,
                                                       uVar20 & 0xffffffff,fVar24,plVar5,0);
                      puVar15 = &UNK_0146f60c;
                    }
                    uVar1 = uRam0000000003d5e7a8;
                    *(long *)(puVar2 + -0xa0) = lVar4;
                    *(long **)(puVar2 + -0x98) = plVar5;
                    *(undefined1 **)(puVar2 + -0x90) = puVar14;
                    *(undefined **)(puVar2 + -0x88) = puVar15;
                    if ((plVar6 != (long *)0x0) && ((char)plVar6[0x1d] != '\0')) {
                      *(undefined4 *)((long)plVar6 + 0xb4) = 9;
                      iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar1);
                      if (iVar3 != 0) {
                        fVar17 = *(float *)(plVar6 + 0x18);
                        fVar24 = -fVar17;
                        if (fVar17 != INFINITY) {
                          fVar24 = fVar17;
                        }
                        *(float *)(plVar6 + 0x18) = (float)(int)fVar24;
                      }
                      plVar6[0x17] = 0;
                    }
                    return plVar6;
                  }
                }
                puVar15 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
                plVar6 = (long *)func_0x00f78af4();
                puVar2 = puVar2 + -0x80;
                uVar1 = extraout_x1;
                uVar12 = uVar11;
                plVar7 = plVar5;
                uVar11 = uVar10;
                uVar13 = uVar12;
                unaff_x23 = uVar8;
                uVar18 = extraout_d0;
                uVar20 = uVar21;
                fVar24 = fVar17;
                unaff_s10 = uVar16;
                unaff_s11 = fVar19;
                unaff_s12 = fVar19;
                unaff_s13 = fVar19;
                unaff_s14 = uVar16;
                unaff_s15 = uVar16;
              } while( true );
            }
            return plVar6;
          }
        }
      }
    }
    plVar7 = (long *)func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(long **)((long)register0x00000008 + -0x50) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_ToolTipScreenBehaviour__Update;
    fVar24 = *(float *)(plVar7 + 0x12);
    plVar6 = plVar7;
    if (0.0 < fVar24) {
      plVar6 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      fVar24 = fVar24 - extraout_s0;
      *(float *)(plVar7 + 0x12) = fVar24;
    }
    if ((*(char *)((long)plVar7 + 0x94) == '\0') || (0.0 <= fVar24)) break;
    *(undefined1 *)((long)plVar7 + 0x94) = 0;
    param_2 = 1;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_d9 = *(ulong *)((long)register0x00000008 + -0x60);
    unaff_d8 = *(ulong *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = plVar7;
  }
  return plVar6;
}



// ============================================================
// RVA: 0x150a2b8 | Atlas.UI.Screens.ToolTipScreenBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0150a2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_ToolTipScreenBehaviour__Update(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  undefined *puVar16;
  code *unaff_x30;
  undefined4 uVar17;
  float extraout_s0;
  float fVar18;
  ulong extraout_d0;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  
  while( true ) {
    lVar4 = param_1;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    fVar25 = *(float *)(lVar4 + 0x90);
    lVar7 = lVar4;
    if (0.0 < fVar25) {
      lVar7 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      fVar25 = fVar25 - extraout_s0;
      *(float *)(lVar4 + 0x90) = fVar25;
    }
    if ((*(char *)(lVar4 + 0x94) == '\0') || (0.0 <= fVar25)) break;
    *(undefined1 *)(lVar4 + 0x94) = 0;
    unaff_d9 = *(ulong *)((long)register0x00000008 + -0x30);
    unaff_d8 = *(ulong *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = 1;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4d45 & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      bRam0000000003eb4d45 = 1;
    }
    if (*(long *)(lVar4 + 0x78) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x78),1,0);
      if (*(long *)(lVar4 + 0x70) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x70),1,0);
        if (*(long *)(lVar4 + 0x88) != 0) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x88),1,0);
          if (*(long *)(lVar4 + 0x88) != 0) {
            plVar6 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar4 + 0x88),0);
            if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
              plVar6 = (long *)0x0;
            }
            uVar19 = 0;
            uVar24 = 0;
            puVar15 = *(undefined1 **)((long)register0x00000008 + -0x10);
            puVar16 = *(undefined **)((long)register0x00000008 + -8);
            lVar7 = *(long *)((long)register0x00000008 + -0x20);
            puVar2 = (undefined1 *)register0x00000008;
            uVar1 = 0;
            uVar9 = 1;
            uVar12 = 0;
            plVar13 = *(long **)((long)register0x00000008 + -0x18);
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x28);
            uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
            uVar21 = 0x3f800000;
            fVar25 = _UNK_033f813c;
            do {
              uVar10 = uVar9;
              uVar8 = uVar1;
              plVar5 = plVar6;
              fVar20 = (float)uVar21;
              uVar17 = (undefined4)uVar19;
              uVar22 = uVar19 & 0xffffffff;
              uVar23 = uVar19 & 0xffffffff;
              *(ulong *)(puVar2 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
              *(ulong *)(puVar2 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
              *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
              *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
              *(ulong *)(puVar2 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
              *(ulong *)(puVar2 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
              *(ulong *)(puVar2 + -0x50) = unaff_d9;
              *(ulong *)(puVar2 + -0x48) = unaff_d8;
              *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
              *(undefined8 *)(puVar2 + -0x30) = uVar14;
              *(undefined8 *)(puVar2 + -0x28) = uVar11;
              *(long *)(puVar2 + -0x20) = lVar7;
              *(long **)(puVar2 + -0x18) = plVar13;
              *(undefined1 **)(puVar2 + -0x10) = puVar15;
              *(undefined **)(puVar2 + -8) = puVar16;
              puVar15 = puVar2 + -0x10;
              unaff_d9 = (ulong)(uint)fVar25;
              unaff_d8 = uVar24 & 0xffffffff;
              unaff_00005164 = 0;
              unaff_00005184 = 0;
              unaff_000051a4 = 0;
              unaff_00005144 = 0;
              unaff_000051c4 = 0;
              unaff_000051e4 = 0;
              unaff_x24 = 0x3d26a48;
              uVar9 = uVar10;
              uVar11 = uVar12;
              uVar24 = uVar23;
              fVar18 = fVar20;
              if ((bRam0000000003eb4867 & 1) == 0) {
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e770);
                func_0x00f78a20(0x3d5e790);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d40f78);
                func_0x00f78a20(0x3d62230);
                func_0x00f78a20(0x3d62238);
                func_0x00f78a20(0x3d62240);
                func_0x00f78a20(0x3d26a48);
                bRam0000000003eb4867 = 1;
                uVar24 = uVar23;
              }
              lVar7 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
              /*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0$$.ctor*/ func_0x01547008(lVar7,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x10) = uVar8;
                *(undefined8 *)(lVar7 + 0x18) = uVar12;
                if (plVar5 != (long *)0x0) {
                  /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar19 & 0xffffffff,uVar19 & 0xffffffff,uVar19 & 0xffffffff,plVar5
                                  ,0);
                  if ((int)uVar10 == 0) {
                    lVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar21 & 0xffffffff,uVar21 & 0xffffffff,
                                            uVar21 & 0xffffffff,fVar25 * _UNK_033f82b8,plVar5,0);
                    puVar16 = &UNK_0146f6bc;
                  }
                  else {
                    lVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar21 & 0xffffffff,uVar21 & 0xffffffff,
                                            uVar21 & 0xffffffff,fVar25,plVar5,0);
                    puVar16 = &UNK_0146f60c;
                  }
                  uVar1 = uRam0000000003d5e7a8;
                  *(long *)(puVar2 + -0xa0) = lVar7;
                  *(long **)(puVar2 + -0x98) = plVar5;
                  *(undefined1 **)(puVar2 + -0x90) = puVar15;
                  *(undefined **)(puVar2 + -0x88) = puVar16;
                  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
                    *(undefined4 *)(lVar4 + 0xb4) = 9;
                    iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar1);
                    if (iVar3 != 0) {
                      fVar18 = *(float *)(lVar4 + 0xc0);
                      fVar25 = -fVar18;
                      if (fVar18 != INFINITY) {
                        fVar25 = fVar18;
                      }
                      *(float *)(lVar4 + 0xc0) = (float)(int)fVar25;
                    }
                    *(undefined8 *)(lVar4 + 0xb8) = 0;
                  }
                  return lVar4;
                }
              }
              puVar16 = &Atlas_UI_AtlasTweenAnimations__SpinZoom;
              plVar6 = (long *)func_0x00f78af4();
              puVar2 = puVar2 + -0x80;
              uVar1 = extraout_x1;
              uVar12 = uVar11;
              plVar13 = plVar5;
              uVar11 = uVar10;
              uVar14 = uVar12;
              unaff_x23 = uVar8;
              uVar19 = extraout_d0;
              uVar21 = uVar22;
              fVar25 = fVar18;
              unaff_s10 = uVar17;
              unaff_s11 = fVar20;
              unaff_s12 = fVar20;
              unaff_s13 = fVar20;
              unaff_s14 = uVar17;
              unaff_s15 = uVar17;
            } while( true );
          }
        }
      }
    }
    unaff_x30 = Atlas_UI_Screens_ToolTipScreenBehaviour__Update;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x20 = lVar4;
  }
  return lVar7;
}



// ============================================================
// RVA: 0x150a324 | Atlas.UI.Screens.ToolTipScreenBehaviour.OnModalDeactivated
// ============================================================

undefined1  [16]
Atlas_UI_Screens_ToolTipScreenBehaviour__OnModalDeactivated(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4d46 & 1) == 0) {
    func_0x00f78a20(0x3d29328);
    bRam0000000003eb4d46 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (((*(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300) <= *(byte *)(*param_2 + 300)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328 + 300) * 8 + -8
                  ) == /*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ lRam0000000003d29328)) && (lVar3 = *(long *)(param_1 + 0x70), lVar3 != 0)) {
      uVar1 = *(undefined1 *)((long)param_2 + 0x3c);
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (*pcRam0000000003ebe9d8)(lVar3,uVar1);
      return auVar4;
    }
  }
  auVar4._0_8_ = func_0x00f78af4();
  *(undefined4 *)(auVar4._0_8_ + 0x90) = 0xbf800000;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar2,uRam0000000003d3dc88);
  *(undefined8 *)(auVar4._0_8_ + 0x40) = uVar2;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar2,uRam0000000003d3dc88);
  *(undefined8 *)(auVar4._0_8_ + 0x48) = uVar2;
  *(undefined4 *)(auVar4._0_8_ + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar4._8_8_ = 0;
  return auVar4;
}



// ============================================================
// RVA: 0x150a3b8 | Atlas.UI.Screens.ToolTipScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_ToolTipScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



