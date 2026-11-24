// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUIPanelBehaviour

// ============================================================
// RVA: 0x163fbb0 | Core.DebugMenu.DebugUIPanelBehaviour.UpdateRootHeightFromContent
// ============================================================

/* WARNING: Possible PIC construction at 0x0163fe50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163fe54) */
/* WARNING: Removing unreachable block (ram,0x0163fe58) */
/* WARNING: Removing unreachable block (ram,0x0163fe80) */
/* WARNING: Removing unreachable block (ram,0x0163febc) */
/* WARNING: Removing unreachable block (ram,0x0163fed4) */
/* WARNING: Removing unreachable block (ram,0x0163fee8) */
/* WARNING: Removing unreachable block (ram,0x0163ff04) */
/* WARNING: Removing unreachable block (ram,0x0163ff10) */
/* WARNING: Removing unreachable block (ram,0x0163ff24) */
/* WARNING: Removing unreachable block (ram,0x0163ff30) */
/* WARNING: Removing unreachable block (ram,0x0163ff48) */
/* WARNING: Removing unreachable block (ram,0x0163ff8c) */
/* WARNING: Removing unreachable block (ram,0x0163ffc8) */
/* WARNING: Removing unreachable block (ram,0x0163ffd0) */
/* WARNING: Removing unreachable block (ram,0x01640004) */
/* WARNING: Removing unreachable block (ram,0x0164001c) */
/* WARNING: Removing unreachable block (ram,0x01640048) */
/* WARNING: Removing unreachable block (ram,0x01640060) */
/* WARNING: Removing unreachable block (ram,0x0164008c) */
/* WARNING: Removing unreachable block (ram,0x0164009c) */
/* WARNING: Removing unreachable block (ram,0x016400a4) */
/* WARNING: Removing unreachable block (ram,0x016400bc) */
/* WARNING: Removing unreachable block (ram,0x016400c4) */
/* WARNING: Removing unreachable block (ram,0x016400d8) */
/* WARNING: Removing unreachable block (ram,0x016400e4) */
/* WARNING: Removing unreachable block (ram,0x01640154) */
/* WARNING: Removing unreachable block (ram,0x01640110) */
/* WARNING: Removing unreachable block (ram,0x01640128) */

void Core_DebugMenu_DebugUIPanelBehaviour__UpdateRootHeightFromContent
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5735 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb5735 = 1;
  }
  plVar3 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_3,0);
  if (*(long *)(param_3 + 0x40) != 0) {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)(param_3 + 0x40),0);
    if (*(long *)(param_3 + 0x68) != 0) {
      fVar8 = param_2;
      /*UnityEngine.RectTransform$$get_offsetMax*/ func_0x03255294(*(long *)(param_3 + 0x68),0);
      iVar1 = /*UnityEngine.Screen$$get_height*/ func_0x0325e9c8(0);
      iVar2 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_0163fd38;
        fVar5 = (param_2 - fVar8) + 6.0;
        fVar8 = 1000.0;
        fVar6 = ((float)iVar1 / (float)iVar2) * 1000.0;
        /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(plVar3,0);
        fVar7 = fVar5 + fVar8;
        fVar8 = fVar6 - fVar8;
        if (fVar7 <= fVar6) {
          fVar8 = fVar5;
        }
        /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(plVar3,0);
        /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(extraout_b0,fVar8,plVar3,0);
        lVar4 = *(long *)(param_3 + 0x50);
        if (lVar4 != 0) {
          if ((fVar6 < fVar7 == (*(char *)(lVar4 + 0x21) != '\0')) ||
             (*(bool *)(lVar4 + 0x21) = fVar6 < fVar7, fVar6 < fVar7)) {
            return;
          }
          if (*(long *)(param_3 + 0x40) != 0) {
            /*UnityEngine.RectTransform$$get_offsetMax*/ func_0x03255294(*(long *)(param_3 + 0x40),0);
            lVar4 = *(long *)(param_3 + 0x40);
            if (lVar4 != 0) {
              fVar7 = 0.0;
              /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar4,0);
              fVar8 = fVar7;
              /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar4);
              fVar5 = fVar8;
              /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
              fVar6 = fVar5;
              /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar4);
              fVar7 = fVar7 + fVar8 * (fVar5 - fVar6);
              fVar8 = (float)CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_07,CONCAT11(extraout_var,extraout_b0_00)
                                              )) -
                      ((float)CONCAT13(extraout_var_16,
                                       CONCAT12(extraout_var_08,
                                                CONCAT11(extraout_var_00,extraout_b0_01))) +
                      (float)CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_01,extraout_b0_02))) *
                      ((float)CONCAT13(extraout_var_18,
                                       CONCAT12(extraout_var_10,
                                                CONCAT11(extraout_var_02,extraout_b0_03))) -
                      (float)CONCAT13(extraout_var_19,
                                      CONCAT12(extraout_var_11,
                                               CONCAT11(extraout_var_03,extraout_b0_04)))));
              fVar5 = 0.0 - fVar7;
              /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar4);
              fVar7 = fVar7 + fVar5;
              uStack_68 = CONCAT44(fVar7,(float)CONCAT13(extraout_var_20,
                                                         CONCAT12(extraout_var_12,
                                                                  CONCAT11(extraout_var_04,
                                                                           extraout_b0_05))) + fVar8
                                  );
              if (pcRam0000000003ec07f0 == (code *)0x0) {
                pcRam0000000003ec07f0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                            );
              }
              (*pcRam0000000003ec07f0)(lVar4,&uStack_68);
              /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar4);
              fVar6 = fVar7;
              /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar4);
              uStack_68 = CONCAT44(fVar7 + fVar5 * fVar6,
                                   (float)CONCAT13(extraout_var_21,
                                                   CONCAT12(extraout_var_13,
                                                            CONCAT11(extraout_var_05,extraout_b0_06)
                                                           )) +
                                   fVar8 * (float)CONCAT13(extraout_var_22,
                                                           CONCAT12(extraout_var_14,
                                                                    CONCAT11(extraout_var_06,
                                                                             extraout_b0_07))));
              if (pcRam0000000003ec07e0 == (code *)0x0) {
                pcRam0000000003ec07e0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                            );
              }
              (*pcRam0000000003ec07e0)(lVar4,&uStack_68);
              return;
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0163fd38:
  func_0x00f78e5c(plVar3);
  uStack_68 = param_3;
  if ((bRam0000000003eb570a & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d53478);
    func_0x00f78a20(0x3d548f8);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ac78);
    func_0x00f78a20(0x3d1daa8);
    func_0x00f78a20(0x3d62a08);
    func_0x00f78a20(0x3d62a10);
    func_0x00f78a20(0x3d62a18);
    func_0x00f78a20(0x3d27080);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d71028);
    bRam0000000003eb570a = 1;
  }
  func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass65_0_TypeInfo*/ uRam0000000003d27080);
  return;
}



// ============================================================
// RVA: 0x16402e8 | Core.DebugMenu.DebugUIPanelBehaviour.set_HeaderVisible
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Core_DebugMenu_DebugUIPanelBehaviour__set_HeaderVisible
               (undefined1 param_1 [16],uint param_2,float param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar17;
  undefined8 unaff_x21;
  ulong uVar18;
  long *plVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  code *unaff_x30;
  code *pcVar22;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  auVar31._8_8_ = unaff_x21;
  auVar31._0_8_ = unaff_x20;
  auVar30._8_8_ = param_5;
  auVar30._0_8_ = param_4;
  while( true ) {
    uVar20 = auVar31._8_8_;
    lVar6 = auVar30._8_8_;
    lVar8 = auVar30._0_8_;
    *(long *)((long)register0x00000008 + -0x20) = auVar31._0_8_;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar14 = param_6;
    uVar17 = param_7;
    uVar24 = param_2;
    fVar23 = param_3;
    if ((*(long *)(lVar8 + 0x38) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x38),0), lVar14 = param_6, uVar17 = param_7,
       unaff_x19 = lVar6, uVar24 = param_2, fVar23 = param_3, lVar5 != 0)) {
      lVar14 = 0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,lVar6);
      uVar17 = param_7;
      uVar24 = param_2;
      fVar23 = param_3;
      if (*(long *)(lVar8 + 0x68) != 0) {
        /*UnityEngine.RectTransform$$get_offsetMax*/ func_0x03255294(*(long *)(lVar8 + 0x68),0);
        lVar6 = *(long *)(lVar8 + 0x68);
        uVar17 = param_7;
        uVar24 = param_2;
        fVar23 = param_3;
        if (lVar6 != 0) {
          fVar23 = -53.0;
          if (auVar30._8_4_ == 0) {
            fVar23 = 0.0;
          }
          *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d15;
          *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d14;
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d13;
          *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d12;
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
          *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x20) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined8 *)((long)register0x00000008 + -0x18) =
               *(undefined8 *)((long)register0x00000008 + -0x18);
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          fVar26 = fVar23;
          /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar6,0);
          fVar29 = fVar26;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar6);
          fVar28 = fVar29;
          /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          fVar25 = fVar28;
          /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar6);
          fVar26 = fVar26 + fVar29 * (fVar28 - fVar25);
          fVar29 = (float)CONCAT13(extraout_var_17,
                                   CONCAT12(extraout_var_08,CONCAT11(extraout_var,extraout_b0))) -
                   ((float)CONCAT13(extraout_var_19,
                                    CONCAT12(extraout_var_10,
                                             CONCAT11(extraout_var_01,extraout_b0_02))) +
                   (float)CONCAT13(extraout_var_20,
                                   CONCAT12(extraout_var_11,CONCAT11(extraout_var_02,extraout_b0_03)
                                           )) *
                   ((float)CONCAT13(extraout_var_21,
                                    CONCAT12(extraout_var_12,
                                             CONCAT11(extraout_var_03,extraout_b0_04))) -
                   (float)CONCAT13(extraout_var_22,
                                   CONCAT12(extraout_var_13,CONCAT11(extraout_var_04,extraout_b0_05)
                                           ))));
          fVar23 = fVar23 - fVar26;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar6);
          fVar26 = fVar26 + fVar23;
          *(float *)((long)register0x00000008 + -0x68) =
               (float)CONCAT13(extraout_var_23,
                               CONCAT12(extraout_var_14,CONCAT11(extraout_var_05,extraout_b0_06))) +
               fVar29;
          *(float *)((long)register0x00000008 + -100) = fVar26;
          if (pcRam0000000003ec07f0 == (code *)0x0) {
            pcRam0000000003ec07f0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                        );
          }
          (*pcRam0000000003ec07f0)(lVar6,(undefined1 *)((long)register0x00000008 + -0x68));
          /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar6);
          fVar28 = fVar26;
          /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar6);
          *(float *)((long)register0x00000008 + -0x68) =
               (float)CONCAT13(extraout_var_24,
                               CONCAT12(extraout_var_15,CONCAT11(extraout_var_06,extraout_b0_07))) +
               fVar29 * (float)CONCAT13(extraout_var_25,
                                        CONCAT12(extraout_var_16,
                                                 CONCAT11(extraout_var_07,extraout_b0_08)));
          *(float *)((long)register0x00000008 + -100) = fVar26 + fVar23 * fVar28;
          if (pcRam0000000003ec07e0 == (code *)0x0) {
            pcRam0000000003ec07e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                        );
          }
          lVar14 = (*pcRam0000000003ec07e0)(lVar6,(undefined1 *)((long)register0x00000008 + -0x68));
          return lVar14;
        }
      }
    }
    auVar30 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Core_DebugMenu_DebugUIPanelBehaviour__set_TitleText;
    plVar7 = *(long **)(auVar30._0_8_ + 0x18);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0164037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar14 = (**(code **)(*plVar7 + 0x5e8))(plVar7,auVar30._8_8_,*(undefined8 *)(*plVar7 + 0x5f0))
      ;
      return lVar14;
    }
    auVar31 = func_0x00f78af4();
    lVar6 = auVar31._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar20;
    *(long *)((long)register0x00000008 + -0x50) = lVar8;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(code **)((long)register0x00000008 + -0x38) =
         Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel;
    unaff_d8 = (ulong)uVar24;
    param_7 = uVar17;
    param_3 = fVar23;
    iVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar17,0);
    if (iVar4 == 0) break;
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_d9 = (ulong)CONCAT13(extraout_var_18,
                               CONCAT12(extraout_var_09,CONCAT11(extraout_var_00,extraout_b0_00)));
    param_6 = lVar14;
    param_2 = uVar24;
    if ((bRam0000000003eb5720 & 1) == 0) {
      func_0x00f78a20(0x3d534d8);
      func_0x00f78a20(0x3d54910);
      func_0x00f78a20(0x3d3a6d0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5720 = 1;
    }
    unaff_x22 = *(long *)(lVar6 + 0x18);
    unaff_x19 = lVar14;
    if (unaff_x22 != 0) {
      unaff_x23 = 0x3d54910;
      if (*(uint *)(unaff_x22 + 0x18) <= auVar31._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      param_6 = lVar14;
      param_7 = uRam0000000003d54910;
      lVar14 = Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_
                         (lVar6,*(undefined8 *)
                                 (*(long *)(unaff_x22 + 0x10) + (long)(int)auVar31._8_4_ * 8 + 0x20)
                         );
      if (lVar14 != 0) {
        plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar14,uRam0000000003d534d8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        param_6 = 0;
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar7,0);
        if (iVar4 == 0) {
          return lVar14;
        }
        auVar31 = ZEXT816(0x3d23000) << 0x40;
        unaff_x19 = lVar14;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x338))(extraout_b0_00,plVar7,*(undefined8 *)(*plVar7 + 0x340));
          (**(code **)(*plVar7 + 0x358))((char)uVar24,plVar7,*(undefined8 *)(*plVar7 + 0x360));
          (**(code **)(*plVar7 + 0x378))(extraout_b0_00,plVar7,*(undefined8 *)(*plVar7 + 0x380));
          (**(code **)(*plVar7 + 0x398))((char)uVar24,plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
          return lVar14;
        }
      }
    }
    unaff_x30 = Core_DebugMenu_DebugUIPanelBehaviour__set_HeaderVisible;
    auVar30 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0x98) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x68);
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  fVar26 = (float)CONCAT13(extraout_var_18,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_00,extraout_b0_00)));
  uVar20 = 0x3d6d868;
  if ((bRam0000000003eb5721 & 1) == 0) {
    func_0x00f78a20(0x3d53560);
    func_0x00f78a20(0x3d53748);
    func_0x00f78a20(0x3d53758);
    func_0x00f78a20(0x3d6f278);
    func_0x00f78a20(0x3d6d868);
    bRam0000000003eb5721 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  fVar29 = fVar26 + -15.0;
  fVar28 = fVar29 * fVar23 * _UNK_033f7d80;
  lVar8 = Core_DebugMenu_DebugMenu__InstantiateUI
                    (SUB41(fVar29 * (100.0 - fVar23) * _UNK_033f7d80,0),uVar24,lVar6,auVar31._8_8_,
                     lVar14);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(lVar14,/*STR('Label')*/ uRam0000000003d6f278,0);
  lVar5 = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(fVar28,0),uVar24,lVar6,4,uVar9);
  uVar9 = /*System.String$$Concat*/ func_0x029bdb88(lVar14,/*STR('HorizontalLayout')*/ uRam0000000003d6d868,0);
  lVar10 = Core_DebugMenu_DebugMenu__InstantiateUI(extraout_b0_00,uVar24,lVar6,8);
  if (lVar8 != 0) {
    uVar9 = uRam0000000003d53758;
    iVar4 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar8,(undefined1 *)((long)register0x00000008 + -0xa8));
    lVar6 = lVar10;
    if (iVar4 != 0) {
      if (lVar10 == 0) goto LAB_01642754;
      uVar9 = uRam0000000003d53748;
      iVar4 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar10,(undefined1 *)((long)register0x00000008 + -0xb0));
      if (iVar4 != 0) {
        if (*(long *)((long)register0x00000008 + -0xb0) == 0) goto LAB_01642754;
        *(undefined8 *)(*(long *)((long)register0x00000008 + -0xb0) + 0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
      }
    }
    if ((lVar5 != 0) &&
       (plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d53560), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x5e8))(plVar7,uVar17,*(undefined8 *)(*plVar7 + 0x5f0));
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,lVar10,0,0);
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,lVar10,0,0);
      return lVar10;
    }
  }
LAB_01642754:
  func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0xe0) = lVar6;
  *(long *)((long)register0x00000008 + -0xd8) = lVar5;
  *(long *)((long)register0x00000008 + -0xd0) = lVar8;
  *(undefined8 *)((long)register0x00000008 + -200) = uVar17;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(code **)((long)register0x00000008 + -0xb8) = Core_DebugMenu_DebugMenu__InstantiatePrefab;
  if ((bRam0000000003eb5722 & 1) == 0) {
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5722 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
  if (lVar8 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(lVar8,uVar9,0);
    return lVar8;
  }
  auVar30 = func_0x00f78af4();
  plVar7 = auVar30._8_8_;
  lVar6 = auVar30._0_8_;
  *(ulong *)((long)register0x00000008 + -0x120) = (ulong)(uint)fVar26;
  *(ulong *)((long)register0x00000008 + -0x118) = (ulong)uVar24;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d5b098;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d23990;
  *(undefined8 *)((long)register0x00000008 + -0x100) = extraout_x1;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar9;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(code **)((long)register0x00000008 + -0xe8) = Core_DebugMenu_DebugMenu__ShowPanel;
  lVar8 = lVar6;
  if ((bRam0000000003eb5727 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar8 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5727 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  if (auVar30._8_4_ == -1) {
    return lVar8;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (extraout_b0_01,lVar8,*(undefined8 *)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x50),plVar7
            );
  uVar15 = 1;
  lVar8 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (lVar6,plVar7,1,(undefined1 *)((long)register0x00000008 + -0x150));
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  if (*(long *)((long)register0x00000008 + -0x140) == 0) {
LAB_0164293c:
    func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x140),
                                     uRam0000000003d535c0);
    if (*(long *)(lVar6 + 0x78) == 0) {
      if (plVar7 != (long *)0x0) goto LAB_016428ec;
      goto LAB_0164293c;
    }
    if (plVar7 == (long *)0x0) goto LAB_0164293c;
    uVar15 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1);
LAB_016428ec:
    lVar8 = plVar7[0x10];
    if (lVar8 != 0) {
      uVar18 = 0;
      do {
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar18) goto code_r0x01642940;
        if (*(uint *)(lVar8 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        Core_DebugMenu_DebugMenu__ShowPanel
                  (extraout_b0_01,lVar6,*(undefined4 *)(*(long *)(lVar8 + 0x10) + uVar18 * 4 + 0x20)
                  );
        uVar18 = uVar18 + 1;
        lVar8 = plVar7[0x10];
      } while (lVar8 != 0);
      goto LAB_0164293c;
    }
  }
code_r0x01642940:
  uVar18 = *(ulong *)((long)register0x00000008 + -0x110);
  plVar19 = *(long **)((long)register0x00000008 + -0x108);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x120);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x118);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xe8);
  puVar21 = (undefined1 *)((long)register0x00000008 + -0xf0);
  uVar17 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (plVar7[8] != 0) {
    uVar17 = 0x3d23000;
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar7[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (plVar7 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1,0);
      uVar15 = *(ulong *)(*plVar7 + 0x380);
      (**(code **)(*plVar7 + 0x378))(plVar7,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar11 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar7,0);
      uVar17 = 0;
      if (lVar8 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        uVar17 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar8,plVar11,0);
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d6d868;
        *(long *)((long)register0x00000008 + -0x118) = lVar14;
        *(ulong *)((long)register0x00000008 + -0x110) = uVar18;
        *(long **)((long)register0x00000008 + -0x108) = plVar19;
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
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
        uVar20 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar8 + 0x41) == '\0') {
          *(undefined1 *)(lVar8 + 0x41) = 1;
          uVar20 = *(undefined8 *)(lVar8 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar11,uVar20,0);
          if ((int)lVar14 == 0) {
            uVar20 = *(undefined8 *)(lVar8 + 0x38);
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
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar20,uVar17,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar8 + 0x38) = plVar11;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar14 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar11,uVar17,
                                     *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                                     uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar8 + 0x41) = 0;
          return lVar14;
        }
        if (plVar11 == (long *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        uVar9 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar17,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = 0;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x110);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x120);
        uVar1 = *(undefined8 *)((long)register0x00000008 + -0x118);
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x108) =
             *(undefined8 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar13 = extraout_x1_00;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_01;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar13);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 == (long *)0x0) {
          auVar30 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar20;
          *(undefined8 *)((long)register0x00000008 + -0x138) = 0x3ca3000;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = uVar17;
          *(undefined1 **)((long)register0x00000008 + -0x120) =
               (undefined1 *)((long)register0x00000008 + -0xf0);
          *(undefined **)((long)register0x00000008 + -0x118) = &UnityEngine_Debug__LogError;
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
          plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar7 == (long *)0x0) {
            auVar31 = func_0x00f78af4();
            *(undefined8 *)((long)register0x00000008 + -0x170) = 0x3ca3000;
            *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
            *(undefined1 (*) [16])((long)register0x00000008 + -0x160) = auVar30;
            *(undefined1 **)((long)register0x00000008 + -0x150) =
                 (undefined1 *)((long)register0x00000008 + -0x120);
            *(undefined **)((long)register0x00000008 + -0x148) = &UnityEngine_Debug__LogErrorFormat;
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
            plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar7 == (long *)0x0) {
              auVar30 = func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar27;
              *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar1;
              *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x3ca3000;
              *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
              *(undefined1 (*) [16])((long)register0x00000008 + -400) = auVar31;
              *(undefined1 **)((long)register0x00000008 + -0x180) =
                   (undefined1 *)((long)register0x00000008 + -0x150);
              *(undefined **)((long)register0x00000008 + -0x178) =
                   &UnityEngine_Debug__LogErrorFormat;
              uVar17 = uVar9;
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
              plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar7 == (long *)0x0) {
                auVar31 = func_0x00f78af4();
                *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
                *(undefined1 (*) [16])((long)register0x00000008 + -0x1d8) = auVar30;
                *(undefined8 *)((long)register0x00000008 + -0x1c8) = uVar9;
                *(undefined1 **)((long)register0x00000008 + -0x1c0) =
                     (undefined1 *)((long)register0x00000008 + -0x180);
                *(undefined **)((long)register0x00000008 + -0x1b8) =
                     &UnityEngine_Debug__LogException;
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
                plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar7 == (long *)0x0) {
                  auVar30 = func_0x00f78af4();
                  *(undefined8 *)((long)register0x00000008 + -0x210) = 0x3ca3000;
                  *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
                  *(undefined1 (*) [16])((long)register0x00000008 + -0x200) = auVar31;
                  *(undefined1 **)((long)register0x00000008 + -0x1f0) =
                       (undefined1 *)((long)register0x00000008 + -0x1c0);
                  *(undefined **)((long)register0x00000008 + -0x1e8) =
                       &UnityEngine_Debug__LogWarning;
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
                  plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar7 == (long *)0x0) {
                    auVar31 = func_0x00f78af4();
                    *(undefined8 *)((long)register0x00000008 + -0x240) = 0x3ca3000;
                    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
                    *(undefined1 (*) [16])((long)register0x00000008 + -0x230) = auVar30;
                    *(undefined1 **)((long)register0x00000008 + -0x220) =
                         (undefined1 *)((long)register0x00000008 + -0x1f0);
                    *(undefined **)((long)register0x00000008 + -0x218) =
                         &UnityEngine_Debug__LogWarningFormat;
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
                    plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar7 == (long *)0x0) {
                      auVar30 = func_0x00f78af4();
                      *(undefined8 *)((long)register0x00000008 + -0x280) = uVar27;
                      *(undefined8 *)((long)register0x00000008 + -0x278) = 0x3ca3000;
                      *(undefined8 *)((long)register0x00000008 + -0x270) = 0x3ca3000;
                      *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
                      *(undefined1 (*) [16])((long)register0x00000008 + -0x260) = auVar31;
                      *(undefined1 **)((long)register0x00000008 + -0x250) =
                           (undefined1 *)((long)register0x00000008 + -0x220);
                      *(undefined **)((long)register0x00000008 + -0x248) =
                           &UnityEngine_Debug__LogWarningFormat;
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
                      plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar7 == (long *)0x0) {
                        func_0x00f78af4();
                        *(long *)((long)register0x00000008 + -0x2a0) = auVar30._8_8_;
                        *(undefined8 *)((long)register0x00000008 + -0x298) = uVar17;
                        *(undefined1 **)((long)register0x00000008 + -0x290) =
                             (undefined1 *)((long)register0x00000008 + -0x250);
                        *(undefined **)((long)register0x00000008 + -0x288) =
                             &UnityEngine_Debug__get_isDebugBuild;
                        if (pcRam0000000003ebf3a0 == (code *)0x0) {
                          pcRam0000000003ebf3a0 =
                               (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        lVar14 = (*pcRam0000000003ebf3a0)();
                        return lVar14;
                      }
                      lVar14 = *plVar7;
                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                            puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                            goto code_r0x0322c0c4;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      lVar14 = (*(code *)*puVar12)(plVar7,2,auVar30._0_8_,auVar30._8_8_,uVar17,
                                                   puVar12[1]);
                      return lVar14;
                    }
                    lVar14 = *plVar7;
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                          goto code_r0x0322bf94;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    lVar14 = (*(code *)*puVar12)(plVar7,2,auVar31._0_8_,auVar31._8_8_,puVar12[1]);
                    return lVar14;
                  }
                  lVar14 = *plVar7;
                  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                        puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                        goto code_r0x0322be68;
                      }
                      piVar16 = piVar16 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar14 = (*(code *)*puVar12)(plVar7,2,auVar30._0_8_,auVar30._8_8_,puVar12[1]);
                  return lVar14;
                }
                lVar14 = *plVar7;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto code_r0x0322bd40;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar14 = (*(code *)*puVar12)(plVar7,auVar31._0_8_,auVar31._8_8_,puVar12[1]);
                return lVar14;
              }
              lVar14 = *plVar7;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto code_r0x0322bc0c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar14 = (*(code *)*puVar12)(plVar7,0,auVar30._0_8_,auVar30._8_8_,uVar9,puVar12[1]);
              return lVar14;
            }
            lVar14 = *plVar7;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                  goto code_r0x0322badc;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar14 = (*(code *)*puVar12)(plVar7,0,auVar31._0_8_,auVar31._8_8_,puVar12[1]);
            return lVar14;
          }
          lVar14 = *plVar7;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                goto code_r0x0322b9b0;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar14 = (*(code *)*puVar12)(plVar7,0,auVar30._0_8_,auVar30._8_8_,puVar12[1]);
          return lVar14;
        }
        lVar14 = *plVar7;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto code_r0x0322b888;
            }
            piVar16 = piVar16 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar14 = (*(code *)*puVar12)(plVar7,0,uVar17,puVar12[1]);
        return lVar14;
      }
    }
  }
  auVar2._8_8_ = plVar7;
  auVar2._0_8_ = uVar17;
  pcVar22 = Core_DebugMenu_DebugMenu__PopPanels;
  auVar30 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x100);
code_r0x01642bc4:
  auVar31 = auVar30;
  uVar17 = auVar31._8_8_;
  lVar8 = auVar31._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = uVar20;
  *(long *)(puVar3 + -0x38) = lVar14;
  *(ulong *)(puVar3 + -0x30) = uVar18;
  *(long **)(puVar3 + -0x28) = plVar19;
  *(undefined1 (*) [16])(puVar3 + -0x20) = auVar2;
  *(undefined1 **)(puVar3 + -0x10) = puVar21;
  *(code **)(puVar3 + -8) = pcVar22;
  puVar21 = puVar3 + -0x10;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  *(undefined8 *)(puVar3 + -0x80) = 0;
  *(undefined8 *)(puVar3 + -0x98) = 0;
  *(undefined8 *)(puVar3 + -0xa0) = 0;
  *(undefined8 *)(puVar3 + -0x88) = 0;
  *(undefined8 *)(puVar3 + -0x90) = 0;
  lVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar17,1,puVar3 + -0x70);
  if ((int)lVar6 == 0) {
    return lVar6;
  }
  plVar19 = *(long **)(puVar3 + -0x58);
  plVar7 = plVar19;
  if (plVar19 != (long *)0x0) {
    lVar6 = 0x3d21150;
    lVar5 = 0x3d21150;
    uVar18 = uVar15;
    lVar14 = lVar6;
    if ((*(byte *)(*plVar19 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (plVar19[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar19[0xf],uRam0000000003d403d8);
      lVar10 = plVar19[0xf];
      uVar20 = uVar1;
      if (lVar10 == 0) goto LAB_01642da0;
      uVar24 = *(int *)(lVar10 + 0x18) - (int)uVar15;
      uVar15 = (ulong)uVar24;
      if ((int)uVar24 < 1) goto LAB_01642d30;
      do {
        lVar14 = lVar5;
        uVar20 = uVar1;
        if (lVar10 == 0) goto LAB_01642da0;
        uVar20 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar10,uRam0000000003d403d8);
        iVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar20,1,puVar3 + -0xa0);
        if (iVar4 != 0) {
          plVar7 = *(long **)(puVar3 + -0x88);
          uVar20 = 0x3d403d8;
          if (plVar7 == (long *)0x0) goto LAB_01642da0;
          uVar18 = uVar15;
          lVar14 = lVar6;
          uVar20 = uVar1;
          if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar7[0xf] = 0;
        }
        lVar10 = plVar19[0xf];
        uVar24 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar24;
      } while (uVar24 != 0);
      lVar14 = lVar5;
      uVar20 = 0x3d403d8;
      if (lVar10 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar7 = plVar19;
  uVar18 = uVar15;
LAB_01642da8:
  pcVar22 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar30 = func_0x00f78e5c(plVar7);
  uVar15 = 1;
  puVar3 = puVar3 + -0xa0;
  auVar2 = auVar31;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar10 + 0x18)) {
    uVar20 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar10,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar8,uVar20);
  }
  plVar19[0xf] = 0;
  *(undefined8 *)(puVar3 + -0x40) = uVar27;
  *(undefined8 *)(puVar3 + -0x38) = uVar9;
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  lVar14 = lVar8;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar14 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  if (auVar31._8_4_ == -1) {
    return lVar14;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,lVar14,*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x58),uVar17);
  lVar14 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar17,1,puVar3 + -0x70);
  if ((int)lVar14 == 0) {
    return lVar14;
  }
  if (*(long *)(puVar3 + -0x60) != 0) {
    lVar14 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar3 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar8 + 0x78) == 0) {
      lVar6 = lVar14;
      if (lVar14 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar14 == 0) goto LAB_01642a84;
      lVar6 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar14,0,0);
    }
    lVar5 = *(long *)(lVar14 + 0x80);
    if (lVar5 == 0) {
      return lVar6;
    }
    uVar15 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar15) {
        return lVar6;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = Core_DebugMenu_DebugMenu__HidePanel
                        (0,lVar8,*(undefined4 *)(*(long *)(lVar5 + 0x10) + uVar15 * 4 + 0x20));
      uVar15 = uVar15 + 1;
      lVar5 = *(long *)(lVar14 + 0x80);
    } while (lVar5 != 0);
  }
LAB_01642a84:
  lVar14 = func_0x00f78af4();
  return lVar14;
}



// ============================================================
// RVA: 0x164035c | Core.DebugMenu.DebugUIPanelBehaviour.set_TitleText
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Core_DebugMenu_DebugUIPanelBehaviour__set_TitleText
          (undefined1 param_1 [16],uint param_2,float param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong uVar17;
  long *plVar18;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  code *unaff_x30;
  code *pcVar20;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  undefined8 uVar26;
  ulong unaff_d9;
  undefined8 uVar27;
  float fVar28;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar31._8_8_ = param_5;
  auVar31._0_8_ = param_4;
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar7 = *(long **)(auVar31._0_8_ + 0x18);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0164037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar31 = (**(code **)(*plVar7 + 0x5e8))
                          (plVar7,auVar31._8_8_,*(undefined8 *)(*plVar7 + 0x5f0));
      return auVar31;
    }
    auVar31 = func_0x00f78af4();
    lVar6 = auVar31._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) =
         Core_DebugMenu_DebugMenu__InstantiateUIWithOptionalLabel;
    unaff_d8 = (ulong)param_2;
    uVar12 = param_7;
    fVar22 = param_3;
    iVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_7,0);
    if (iVar4 == 0) break;
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
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
    unaff_d9 = (ulong)CONCAT13(extraout_var_18,
                               CONCAT12(extraout_var_09,CONCAT11(extraout_var_00,extraout_b0_00)));
    lVar14 = param_6;
    param_7 = uVar12;
    uVar21 = param_2;
    param_3 = fVar22;
    if ((bRam0000000003eb5720 & 1) == 0) {
      func_0x00f78a20(0x3d534d8);
      func_0x00f78a20(0x3d54910);
      func_0x00f78a20(0x3d3a6d0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5720 = 1;
      param_7 = uVar12;
      param_3 = fVar22;
    }
    unaff_x22 = *(long *)(lVar6 + 0x18);
    if (unaff_x22 != 0) {
      unaff_x23 = 0x3d54910;
      if (*(uint *)(unaff_x22 + 0x18) <= auVar31._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = param_6;
      param_7 = uRam0000000003d54910;
      auVar29._0_8_ =
           Core_DebugMenu_DebugMenu__InstantiatePrefab_RectTransform_
                     (lVar6,*(undefined8 *)
                             (*(long *)(unaff_x22 + 0x10) + (long)(int)auVar31._8_4_ * 8 + 0x20));
      if (auVar29._0_8_ != 0) {
        plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(auVar29._0_8_,uRam0000000003d534d8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = 0;
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar7,0);
        if (iVar4 == 0) {
LAB_016402c4:
          auVar29._8_8_ = auVar29._0_8_;
          return auVar29;
        }
        auVar31 = ZEXT816(0x3d23000) << 0x40;
        param_6 = auVar29._0_8_;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x338))(extraout_b0_00,plVar7,*(undefined8 *)(*plVar7 + 0x340));
          (**(code **)(*plVar7 + 0x358))((char)param_2,plVar7,*(undefined8 *)(*plVar7 + 0x360));
          (**(code **)(*plVar7 + 0x378))(extraout_b0_00,plVar7,*(undefined8 *)(*plVar7 + 0x380));
          (**(code **)(*plVar7 + 0x398))((char)param_2,plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
          goto LAB_016402c4;
        }
      }
    }
    unaff_x21 = auVar31._8_8_;
    auVar30 = func_0x00f78af4();
    lVar6 = auVar30._8_8_;
    unaff_x20 = auVar30._0_8_;
    *(long *)((long)register0x00000008 + -0x80) = auVar31._0_8_;
    *(long *)((long)register0x00000008 + -0x78) = param_6;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(code **)((long)register0x00000008 + -0x68) =
         Core_DebugMenu_DebugUIPanelBehaviour__set_HeaderVisible;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x19 = param_6;
    if ((*(long *)(unaff_x20 + 0x38) != 0) &&
       (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x20 + 0x38),0), unaff_x19 = lVar6, lVar5 != 0)) {
      lVar14 = 0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,lVar6);
      if (*(long *)(unaff_x20 + 0x68) != 0) {
        /*UnityEngine.RectTransform$$get_offsetMax*/ func_0x03255294(*(long *)(unaff_x20 + 0x68),0);
        lVar6 = *(long *)(unaff_x20 + 0x68);
        if (lVar6 != 0) {
          fVar22 = -53.0;
          if (auVar30._8_4_ == 0) {
            fVar22 = 0.0;
          }
          *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
          *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
          *(ulong *)((long)register0x00000008 + -0x90) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -0x88) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x80) =
               *(undefined8 *)((long)register0x00000008 + -0x80);
          *(undefined8 *)((long)register0x00000008 + -0x78) =
               *(undefined8 *)((long)register0x00000008 + -0x78);
          *(undefined8 *)((long)register0x00000008 + -0x70) =
               *(undefined8 *)((long)register0x00000008 + -0x70);
          *(undefined8 *)((long)register0x00000008 + -0x68) =
               *(undefined8 *)((long)register0x00000008 + -0x68);
          fVar25 = fVar22;
          /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar6,0);
          fVar28 = fVar25;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar6);
          fVar23 = fVar28;
          /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
          fVar24 = fVar23;
          /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar6);
          fVar25 = fVar25 + fVar28 * (fVar23 - fVar24);
          fVar28 = (float)CONCAT13(extraout_var_17,
                                   CONCAT12(extraout_var_08,CONCAT11(extraout_var,extraout_b0))) -
                   ((float)CONCAT13(extraout_var_19,
                                    CONCAT12(extraout_var_10,
                                             CONCAT11(extraout_var_01,extraout_b0_02))) +
                   (float)CONCAT13(extraout_var_20,
                                   CONCAT12(extraout_var_11,CONCAT11(extraout_var_02,extraout_b0_03)
                                           )) *
                   ((float)CONCAT13(extraout_var_21,
                                    CONCAT12(extraout_var_12,
                                             CONCAT11(extraout_var_03,extraout_b0_04))) -
                   (float)CONCAT13(extraout_var_22,
                                   CONCAT12(extraout_var_13,CONCAT11(extraout_var_04,extraout_b0_05)
                                           ))));
          fVar22 = fVar22 - fVar25;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar6);
          fVar25 = fVar25 + fVar22;
          *(float *)((long)register0x00000008 + -200) =
               (float)CONCAT13(extraout_var_23,
                               CONCAT12(extraout_var_14,CONCAT11(extraout_var_05,extraout_b0_06))) +
               fVar28;
          *(float *)((long)register0x00000008 + -0xc4) = fVar25;
          if (pcRam0000000003ec07f0 == (code *)0x0) {
            pcRam0000000003ec07f0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                        );
          }
          (*pcRam0000000003ec07f0)(lVar6,(undefined1 *)((long)register0x00000008 + -200));
          /*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar6);
          fVar23 = fVar25;
          /*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar6);
          *(float *)((long)register0x00000008 + -200) =
               (float)CONCAT13(extraout_var_24,
                               CONCAT12(extraout_var_15,CONCAT11(extraout_var_06,extraout_b0_07))) +
               fVar28 * (float)CONCAT13(extraout_var_25,
                                        CONCAT12(extraout_var_16,
                                                 CONCAT11(extraout_var_07,extraout_b0_08)));
          *(float *)((long)register0x00000008 + -0xc4) = fVar25 + fVar22 * fVar23;
          if (pcRam0000000003ec07e0 == (code *)0x0) {
            pcRam0000000003ec07e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                        );
          }
          auVar31 = (*pcRam0000000003ec07e0)(lVar6,(undefined1 *)((long)register0x00000008 + -200));
          return auVar31;
        }
      }
    }
    unaff_x30 = Core_DebugMenu_DebugUIPanelBehaviour__set_TitleText;
    auVar31 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_6 = lVar14;
    param_2 = uVar21;
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x70) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
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
  fVar22 = (float)CONCAT13(extraout_var_18,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_00,extraout_b0_00)));
  uVar12 = 0x3d6d868;
  if ((bRam0000000003eb5721 & 1) == 0) {
    func_0x00f78a20(0x3d53560);
    func_0x00f78a20(0x3d53748);
    func_0x00f78a20(0x3d53758);
    func_0x00f78a20(0x3d6f278);
    func_0x00f78a20(0x3d6d868);
    bRam0000000003eb5721 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  fVar25 = fVar22 + -15.0;
  fVar28 = fVar25 * param_3 * _UNK_033f7d80;
  lVar14 = Core_DebugMenu_DebugMenu__InstantiateUI
                     (SUB41(fVar25 * (100.0 - param_3) * _UNK_033f7d80,0),param_2,lVar6,
                      auVar31._8_8_,param_6);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('Label')*/ uRam0000000003d6f278,0);
  lVar5 = Core_DebugMenu_DebugMenu__InstantiateUI(SUB41(fVar28,0),param_2,lVar6,4,uVar8);
  uVar8 = /*System.String$$Concat*/ func_0x029bdb88(param_6,/*STR('HorizontalLayout')*/ uRam0000000003d6d868,0);
  auVar30._0_8_ = Core_DebugMenu_DebugMenu__InstantiateUI(extraout_b0_00,param_2,lVar6,8);
  if (lVar14 != 0) {
    uVar8 = uRam0000000003d53758;
    iVar4 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(lVar14,(undefined1 *)((long)register0x00000008 + -0x88));
    lVar6 = auVar30._0_8_;
    if (iVar4 != 0) {
      if (auVar30._0_8_ == 0) goto LAB_01642754;
      uVar8 = uRam0000000003d53748;
      iVar4 = /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(auVar30._0_8_,(undefined1 *)((long)register0x00000008 + -0x90));
      if (iVar4 != 0) {
        if (*(long *)((long)register0x00000008 + -0x90) == 0) goto LAB_01642754;
        *(undefined8 *)(*(long *)((long)register0x00000008 + -0x90) + 0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
      }
    }
    if ((lVar5 != 0) &&
       (plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d53560), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x5e8))(plVar7,param_7,*(undefined8 *)(*plVar7 + 0x5f0));
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,auVar30._0_8_,0,0);
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar14,auVar30._0_8_,0,0);
      auVar30._8_8_ = lVar14;
      return auVar30;
    }
  }
LAB_01642754:
  func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0xc0) = lVar6;
  *(long *)((long)register0x00000008 + -0xb8) = lVar5;
  *(long *)((long)register0x00000008 + -0xb0) = lVar14;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = param_7;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(code **)((long)register0x00000008 + -0x98) = Core_DebugMenu_DebugMenu__InstantiatePrefab;
  if ((bRam0000000003eb5722 & 1) == 0) {
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5722 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar32._0_8_ = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(extraout_x1,uRam0000000003d5b098);
  if (auVar32._0_8_ != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(auVar32._0_8_,uVar8,0);
    auVar32._8_8_ = extraout_x1_00;
    return auVar32;
  }
  auVar30 = func_0x00f78af4();
  plVar7 = auVar30._8_8_;
  lVar6 = auVar30._0_8_;
  *(ulong *)((long)register0x00000008 + -0x100) = (ulong)(uint)fVar22;
  *(ulong *)((long)register0x00000008 + -0xf8) = (ulong)param_2;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d5b098;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3d23990;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_x1;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar8;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(code **)((long)register0x00000008 + -200) = Core_DebugMenu_DebugMenu__ShowPanel;
  auVar31 = auVar30;
  if ((bRam0000000003eb5727 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    auVar31 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5727 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  if (auVar30._8_4_ == -1) {
    return auVar31;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (extraout_b0_01,auVar31._0_8_,*(undefined8 *)(lVar6 + 0x58),
             *(undefined8 *)(lVar6 + 0x50),plVar7);
  uVar15 = 1;
  auVar31 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                      (lVar6,plVar7,1,(undefined1 *)((long)register0x00000008 + -0x130));
  if (auVar31._0_4_ == 0) {
    return auVar31;
  }
  if (*(long *)((long)register0x00000008 + -0x120) == 0) {
LAB_0164293c:
    func_0x00f78af4();
  }
  else {
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x120),
                                     uRam0000000003d535c0);
    if (*(long *)(lVar6 + 0x78) == 0) {
      if (plVar7 != (long *)0x0) goto LAB_016428ec;
      goto LAB_0164293c;
    }
    if (plVar7 == (long *)0x0) goto LAB_0164293c;
    uVar15 = 0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1);
LAB_016428ec:
    lVar14 = plVar7[0x10];
    if (lVar14 != 0) {
      uVar17 = 0;
      do {
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar17) goto code_r0x01642940;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        Core_DebugMenu_DebugMenu__ShowPanel
                  (extraout_b0_01,lVar6,
                   *(undefined4 *)(*(long *)(lVar14 + 0x10) + uVar17 * 4 + 0x20));
        uVar17 = uVar17 + 1;
        lVar14 = plVar7[0x10];
      } while (lVar14 != 0);
      goto LAB_0164293c;
    }
  }
code_r0x01642940:
  uVar17 = *(ulong *)((long)register0x00000008 + -0xf0);
  plVar18 = *(long **)((long)register0x00000008 + -0xe8);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x100);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) =
       *(undefined8 *)((long)register0x00000008 + -0xe0);
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  puVar19 = (undefined1 *)((long)register0x00000008 + -0xd0);
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (plVar7[8] != 0) {
    uVar8 = 0x3d23000;
    plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar7[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar31 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
    if (auVar31._0_4_ == 0) {
      return auVar31;
    }
    if (plVar7 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(plVar7,1,0);
      uVar15 = *(ulong *)(*plVar7 + 0x380);
      (**(code **)(*plVar7 + 0x378))(plVar7,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar9 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar7,0);
      uVar8 = 0;
      if (lVar6 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -200);
        uVar12 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar6,plVar9,0);
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d6d868;
        *(long *)((long)register0x00000008 + -0xf8) = param_6;
        *(ulong *)((long)register0x00000008 + -0xf0) = uVar17;
        *(long **)((long)register0x00000008 + -0xe8) = plVar18;
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -200);
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
        uVar8 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar6 + 0x41) == '\0') {
          *(undefined1 *)(lVar6 + 0x41) = 1;
          uVar8 = *(undefined8 *)(lVar6 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar31 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar9,uVar8,0);
          if (auVar31._0_4_ == 0) {
            uVar8 = *(undefined8 *)(lVar6 + 0x38);
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
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar8,uVar12,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar6 + 0x38) = plVar9;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar31 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar9,uVar12,
                                      *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60)
                                      ,uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar6 + 0x41) = 0;
          return auVar31;
        }
        if (plVar9 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        }
        uVar26 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar12 = /*System.String$$Concat*/ func_0x029be39c(uVar8,uVar12,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = 0;
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x100);
        uVar1 = *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar8;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xe0) =
             *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0xd8) =
             *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -200);
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar13 = extraout_x1_01;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_02;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar13);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar7 == (long *)0x0) {
          auVar31 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0x120) = uVar8;
          *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3ca3000;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x108) = uVar12;
          *(undefined1 **)((long)register0x00000008 + -0x100) =
               (undefined1 *)((long)register0x00000008 + -0xd0);
          *(undefined **)((long)register0x00000008 + -0xf8) = &UnityEngine_Debug__LogError;
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
          plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar7 == (long *)0x0) {
            auVar30 = func_0x00f78af4();
            *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3ca3000;
            *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
            *(undefined1 (*) [16])((long)register0x00000008 + -0x140) = auVar31;
            *(undefined1 **)((long)register0x00000008 + -0x130) =
                 (undefined1 *)((long)register0x00000008 + -0x100);
            *(undefined **)((long)register0x00000008 + -0x128) = &UnityEngine_Debug__LogErrorFormat;
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
            plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar7 == (long *)0x0) {
              auVar31 = func_0x00f78af4();
              *(undefined8 *)((long)register0x00000008 + -400) = uVar27;
              *(undefined8 *)((long)register0x00000008 + -0x188) = uVar1;
              *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3ca3000;
              *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
              *(undefined1 (*) [16])((long)register0x00000008 + -0x170) = auVar30;
              *(undefined1 **)((long)register0x00000008 + -0x160) =
                   (undefined1 *)((long)register0x00000008 + -0x130);
              *(undefined **)((long)register0x00000008 + -0x158) =
                   &UnityEngine_Debug__LogErrorFormat;
              uVar12 = uVar26;
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
              plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar7 == (long *)0x0) {
                auVar30 = func_0x00f78af4();
                *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
                *(undefined1 (*) [16])((long)register0x00000008 + -0x1b8) = auVar31;
                *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar26;
                *(undefined1 **)((long)register0x00000008 + -0x1a0) =
                     (undefined1 *)((long)register0x00000008 + -0x160);
                *(undefined **)((long)register0x00000008 + -0x198) =
                     &UnityEngine_Debug__LogException;
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
                plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar7 == (long *)0x0) {
                  auVar31 = func_0x00f78af4();
                  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x3ca3000;
                  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
                  *(undefined1 (*) [16])((long)register0x00000008 + -0x1e0) = auVar30;
                  *(undefined1 **)((long)register0x00000008 + -0x1d0) =
                       (undefined1 *)((long)register0x00000008 + -0x1a0);
                  *(undefined **)((long)register0x00000008 + -0x1c8) =
                       &UnityEngine_Debug__LogWarning;
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
                  plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar7 == (long *)0x0) {
                    auVar30 = func_0x00f78af4();
                    *(undefined8 *)((long)register0x00000008 + -0x220) = 0x3ca3000;
                    *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
                    *(undefined1 (*) [16])((long)register0x00000008 + -0x210) = auVar31;
                    *(undefined1 **)((long)register0x00000008 + -0x200) =
                         (undefined1 *)((long)register0x00000008 + -0x1d0);
                    *(undefined **)((long)register0x00000008 + -0x1f8) =
                         &UnityEngine_Debug__LogWarningFormat;
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
                    plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar7 == (long *)0x0) {
                      auVar31 = func_0x00f78af4();
                      *(undefined8 *)((long)register0x00000008 + -0x260) = uVar27;
                      *(undefined8 *)((long)register0x00000008 + -600) = 0x3ca3000;
                      *(undefined8 *)((long)register0x00000008 + -0x250) = 0x3ca3000;
                      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
                      *(undefined1 (*) [16])((long)register0x00000008 + -0x240) = auVar30;
                      *(undefined1 **)((long)register0x00000008 + -0x230) =
                           (undefined1 *)((long)register0x00000008 + -0x200);
                      *(undefined **)((long)register0x00000008 + -0x228) =
                           &UnityEngine_Debug__LogWarningFormat;
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
                      plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar7 == (long *)0x0) {
                        func_0x00f78af4();
                        *(long *)((long)register0x00000008 + -0x280) = auVar31._8_8_;
                        *(undefined8 *)((long)register0x00000008 + -0x278) = uVar12;
                        *(undefined1 **)((long)register0x00000008 + -0x270) =
                             (undefined1 *)((long)register0x00000008 + -0x230);
                        *(undefined **)((long)register0x00000008 + -0x268) =
                             &UnityEngine_Debug__get_isDebugBuild;
                        if (pcRam0000000003ebf3a0 == (code *)0x0) {
                          pcRam0000000003ebf3a0 =
                               (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        auVar31 = (*pcRam0000000003ebf3a0)();
                        return auVar31;
                      }
                      lVar6 = *plVar7;
                      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                            puVar11 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                            goto code_r0x0322c0c4;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      auVar31 = (*(code *)*puVar11)(plVar7,2,auVar31._0_8_,auVar31._8_8_,uVar12,
                                                    puVar11[1]);
                      return auVar31;
                    }
                    lVar6 = *plVar7;
                    uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                          goto code_r0x0322bf94;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    auVar31 = (*(code *)*puVar11)(plVar7,2,auVar30._0_8_,auVar30._8_8_,puVar11[1]);
                    return auVar31;
                  }
                  lVar6 = *plVar7;
                  uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                        puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                        goto code_r0x0322be68;
                      }
                      piVar16 = piVar16 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  auVar31 = (*(code *)*puVar11)(plVar7,2,auVar31._0_8_,auVar31._8_8_,puVar11[1]);
                  return auVar31;
                }
                lVar6 = *plVar7;
                uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto code_r0x0322bd40;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar31 = (*(code *)*puVar11)(plVar7,auVar30._0_8_,auVar30._8_8_,puVar11[1]);
                return auVar31;
              }
              lVar6 = *plVar7;
              uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar11 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
                    goto code_r0x0322bc0c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar31 = (*(code *)*puVar11)(plVar7,0,auVar31._0_8_,auVar31._8_8_,uVar26,puVar11[1]);
              return auVar31;
            }
            lVar6 = *plVar7;
            uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                  goto code_r0x0322badc;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar31 = (*(code *)*puVar11)(plVar7,0,auVar30._0_8_,auVar30._8_8_,puVar11[1]);
            return auVar31;
          }
          lVar6 = *plVar7;
          uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 5) * 0x10 + 0x138);
                goto code_r0x0322b9b0;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar31 = (*(code *)*puVar11)(plVar7,0,auVar31._0_8_,auVar31._8_8_,puVar11[1]);
          return auVar31;
        }
        lVar6 = *plVar7;
        uVar15 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
              puVar11 = (undefined8 *)(lVar6 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto code_r0x0322b888;
            }
            piVar16 = piVar16 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar31 = (*(code *)*puVar11)(plVar7,0,uVar12,puVar11[1]);
        return auVar31;
      }
    }
  }
  auVar2._8_8_ = plVar7;
  auVar2._0_8_ = uVar8;
  pcVar20 = Core_DebugMenu_DebugMenu__PopPanels;
  auVar31 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xe0);
code_r0x01642bc4:
  auVar30 = auVar31;
  uVar8 = auVar30._8_8_;
  lVar6 = auVar30._0_8_;
  *(undefined8 *)(puVar3 + -0x40) = uVar12;
  *(long *)(puVar3 + -0x38) = param_6;
  *(ulong *)(puVar3 + -0x30) = uVar17;
  *(long **)(puVar3 + -0x28) = plVar18;
  *(undefined1 (*) [16])(puVar3 + -0x20) = auVar2;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(code **)(puVar3 + -8) = pcVar20;
  puVar19 = puVar3 + -0x10;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  *(undefined8 *)(puVar3 + -0x80) = 0;
  *(undefined8 *)(puVar3 + -0x98) = 0;
  *(undefined8 *)(puVar3 + -0xa0) = 0;
  *(undefined8 *)(puVar3 + -0x88) = 0;
  *(undefined8 *)(puVar3 + -0x90) = 0;
  auVar31 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar8,1,puVar3 + -0x70);
  if (auVar31._0_4_ == 0) {
    return auVar31;
  }
  plVar18 = *(long **)(puVar3 + -0x58);
  plVar7 = plVar18;
  if (plVar18 != (long *)0x0) {
    lVar14 = 0x3d21150;
    lVar5 = 0x3d21150;
    uVar17 = uVar15;
    param_6 = lVar14;
    if ((*(byte *)(*plVar18 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (plVar18[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar18[0xf],uRam0000000003d403d8);
      lVar10 = plVar18[0xf];
      uVar12 = uVar1;
      if (lVar10 == 0) goto LAB_01642da0;
      uVar21 = *(int *)(lVar10 + 0x18) - (int)uVar15;
      uVar15 = (ulong)uVar21;
      if ((int)uVar21 < 1) goto LAB_01642d30;
      do {
        param_6 = lVar5;
        uVar12 = uVar1;
        if (lVar10 == 0) goto LAB_01642da0;
        uVar12 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar10,uRam0000000003d403d8);
        iVar4 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar12,1,puVar3 + -0xa0);
        if (iVar4 != 0) {
          plVar7 = *(long **)(puVar3 + -0x88);
          uVar12 = 0x3d403d8;
          if (plVar7 == (long *)0x0) goto LAB_01642da0;
          uVar17 = uVar15;
          param_6 = lVar14;
          uVar12 = uVar1;
          if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar7[0xf] = 0;
        }
        lVar10 = plVar18[0xf];
        uVar21 = (int)uVar15 - 1;
        uVar15 = (ulong)uVar21;
      } while (uVar21 != 0);
      param_6 = lVar5;
      uVar12 = 0x3d403d8;
      if (lVar10 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar7 = plVar18;
  uVar17 = uVar15;
LAB_01642da8:
  pcVar20 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar31 = func_0x00f78e5c(plVar7);
  uVar15 = 1;
  puVar3 = puVar3 + -0xa0;
  auVar2 = auVar30;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar10 + 0x18)) {
    uVar12 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar10,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar6,uVar12);
  }
  plVar18[0xf] = 0;
  *(undefined8 *)(puVar3 + -0x40) = uVar27;
  *(undefined8 *)(puVar3 + -0x38) = uVar26;
  *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
  *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  auVar31 = auVar30;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    auVar31 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x70) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  if (auVar30._8_4_ == -1) {
    return auVar31;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,auVar31._0_8_,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58),uVar8);
  auVar31 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar6,uVar8,1,puVar3 + -0x70);
  if (auVar31._0_4_ == 0) {
    return auVar31;
  }
  if (*(long *)(puVar3 + -0x60) != 0) {
    auVar31 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar3 + -0x60),uRam0000000003d535c0);
    lVar14 = auVar31._0_8_;
    if (*(long *)(lVar6 + 0x78) == 0) {
      if (lVar14 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar14 == 0) goto LAB_01642a84;
      auVar31 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar14,0,0);
    }
    lVar5 = *(long *)(lVar14 + 0x80);
    if (lVar5 == 0) {
      return auVar31;
    }
    uVar15 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar15) {
        return auVar31;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      auVar31 = Core_DebugMenu_DebugMenu__HidePanel
                          (0,lVar6,*(undefined4 *)(*(long *)(lVar5 + 0x10) + uVar15 * 4 + 0x20));
      uVar15 = uVar15 + 1;
      lVar5 = *(long *)(lVar14 + 0x80);
    } while (lVar5 != 0);
  }
LAB_01642a84:
  auVar31 = func_0x00f78af4();
  return auVar31;
}



// ============================================================
// RVA: 0x1640670 | Core.DebugMenu.DebugUIPanelBehaviour.AddContent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1640904 | Core.DebugMenu.DebugUIPanelBehaviour.set_ImageColour
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1642aa0 | Core.DebugMenu.DebugUIPanelBehaviour.TryFocusFirstChild
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild
               (long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  long *unaff_x21;
  long lVar17;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar18;
  undefined8 unaff_x24;
  code *pcVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *puVar6;
  
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5734 & 1) == 0) {
    func_0x00f78a20(0x3d535e8);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5734 = 1;
  }
  if (param_1[8] != 0) {
    uVar16 = 0x3d23000;
    param_1 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(param_1[8],uRam0000000003d535e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_1,0);
    if (iVar7 == 0) {
      return;
    }
    if (param_1 != (long *)0x0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_1,1,0);
      param_3 = *(ulong *)(*param_1 + 0x380);
      (**(code **)(*param_1 + 0x378))(param_1,0);
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      plVar9 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      uVar16 = 0;
      if (lVar8 != 0) {
        uVar16 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar8,plVar9,0);
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
        uVar13 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
        if (*(char *)(lVar8 + 0x41) == '\0') {
          *(undefined1 *)(lVar8 + 0x41) = 1;
          uVar13 = *(undefined8 *)(lVar8 + 0x38);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar9,uVar13,0);
          if (iVar7 == 0) {
            uVar13 = *(undefined8 *)(lVar8 + 0x38);
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
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar13,uVar16,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                            uRam0000000003d560a8);
            *(long **)(lVar8 + 0x38) = plVar9;
            if (cRam0000000003e85072 == '\0') {
              func_0x00f78a20(0x3d21718);
              cRam0000000003e85072 = '\x01';
            }
            if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar9,uVar16,
                            *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                            uRam0000000003d560f0);
          }
          *(undefined1 *)(lVar8 + 0x41) = 0;
          return;
        }
        if (plVar9 == (long *)0x0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        }
        uVar18 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
        uVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = 0;
        if ((bRam0000000003ebf392 & 1) == 0) {
          func_0x00f78a20(0x3d210d8,0);
          func_0x00f78a20(0x3d22300);
          bRam0000000003ebf392 = 1;
          uVar13 = extraout_x1;
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar13 = extraout_x1_00;
        }
        if (cRam0000000003ca34ff == '\0') {
          func_0x00f78a20(0x3d210d8,uVar13);
          cRam0000000003ca34ff = '\x01';
        }
        if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
          auVar21 = func_0x00f78af4();
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
          plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar9 == (long *)0x0) {
            auVar21 = func_0x00f78af4();
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
            plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar9 == (long *)0x0) {
              auVar21 = func_0x00f78af4();
              uVar16 = uVar18;
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
              plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar9 == (long *)0x0) {
                auVar21 = func_0x00f78af4();
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
                plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar9 == (long *)0x0) {
                  auVar21 = func_0x00f78af4();
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
                  plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar9 == (long *)0x0) {
                    auVar21 = func_0x00f78af4();
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
                    plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar9 == (long *)0x0) {
                      auVar21 = func_0x00f78af4();
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
                      plVar9 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar9 == (long *)0x0) {
                        func_0x00f78af4();
                        if (pcRam0000000003ebf3a0 == (code *)0x0) {
                          pcRam0000000003ebf3a0 =
                               (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                        }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000003ebf3a0)();
                        return;
                      }
                      lVar8 = *plVar9;
                      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar14 != 0) {
                        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                            puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                            goto code_r0x0322c0c4;
                          }
                          piVar15 = piVar15 + 4;
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar12)(plVar9,2,auVar21._0_8_,auVar21._8_8_,uVar16,puVar12[1]);
                      return;
                    }
                    lVar8 = *plVar9;
                    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    if (uVar14 != 0) {
                      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                          goto code_r0x0322bf94;
                        }
                        piVar15 = piVar15 + 4;
                        uVar14 = uVar14 - 1;
                      } while (uVar14 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar12)(plVar9,2,auVar21._0_8_,auVar21._8_8_,puVar12[1]);
                    return;
                  }
                  lVar8 = *plVar9;
                  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar14 != 0) {
                    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                        puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                        goto code_r0x0322be68;
                      }
                      piVar15 = piVar15 + 4;
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar12)(plVar9,2,auVar21._0_8_,auVar21._8_8_,puVar12[1]);
                  return;
                }
                lVar8 = *plVar9;
                uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto code_r0x0322bd40;
                    }
                    piVar15 = piVar15 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar12)(plVar9,auVar21._0_8_,auVar21._8_8_,puVar12[1]);
                return;
              }
              lVar8 = *plVar9;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
                    goto code_r0x0322bc0c;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar12)(plVar9,0,auVar21._0_8_,auVar21._8_8_,uVar18,puVar12[1]);
              return;
            }
            lVar8 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                  goto code_r0x0322badc;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar12)(plVar9,0,auVar21._0_8_,auVar21._8_8_,puVar12[1]);
            return;
          }
          lVar8 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 5) * 0x10 + 0x138);
                goto code_r0x0322b9b0;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar12)(plVar9,0,auVar21._0_8_,auVar21._8_8_,puVar12[1]);
          return;
        }
        lVar8 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
              puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 4) * 0x10 + 0x138);
              goto code_r0x0322b888;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar12)(plVar9,0,uVar16,puVar12[1]);
        return;
      }
    }
  }
  auVar21._8_8_ = param_1;
  auVar21._0_8_ = uVar16;
  pcVar19 = Core_DebugMenu_DebugMenu__PopPanels;
  auVar20 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = (undefined1 *)register0x00000008;
code_r0x01642bc4:
  auVar3 = auVar20;
  puVar6 = puVar4;
  uVar16 = auVar3._8_8_;
  lVar8 = auVar3._0_8_;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
  *(ulong *)(puVar6 + -0x30) = unaff_x22;
  *(long **)(puVar6 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar6 + -0x20) = auVar21;
  *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
  *(code **)(puVar6 + -8) = pcVar19;
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  *(undefined8 *)(puVar6 + -0x80) = 0;
  *(undefined8 *)(puVar6 + -0x98) = 0;
  *(undefined8 *)(puVar6 + -0xa0) = 0;
  *(undefined8 *)(puVar6 + -0x88) = 0;
  *(undefined8 *)(puVar6 + -0x90) = 0;
  iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar16,1,puVar6 + -0x70);
  if (iVar7 == 0) {
    return;
  }
  unaff_x21 = *(long **)(puVar6 + -0x58);
  plVar9 = unaff_x21;
  if (unaff_x21 != (long *)0x0) {
    uVar13 = 0x3d21150;
    uVar18 = 0x3d21150;
    unaff_x22 = param_3;
    unaff_x23 = uVar13;
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 +
                 -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (unaff_x21[0xf] != 0) {
      uVar1 = 0x3d403d8;
      /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(unaff_x21[0xf],uRam0000000003d403d8);
      lVar10 = unaff_x21[0xf];
      unaff_x24 = uVar1;
      if (lVar10 == 0) goto LAB_01642da0;
      uVar2 = *(int *)(lVar10 + 0x18) - (int)param_3;
      param_3 = (ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        unaff_x23 = uVar18;
        unaff_x24 = uVar1;
        if (lVar10 == 0) goto LAB_01642da0;
        uVar11 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar10,uRam0000000003d403d8);
        iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar11,1,puVar6 + -0xa0);
        if (iVar7 != 0) {
          plVar9 = *(long **)(puVar6 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar9 == (long *)0x0) goto LAB_01642da0;
          unaff_x22 = param_3;
          unaff_x23 = uVar13;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar9[0xf] = 0;
        }
        lVar10 = unaff_x21[0xf];
        uVar2 = (int)param_3 - 1;
        param_3 = (ulong)uVar2;
      } while (uVar2 != 0);
      unaff_x23 = uVar18;
      unaff_x24 = 0x3d403d8;
      if (lVar10 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar9 = unaff_x21;
  unaff_x22 = param_3;
LAB_01642da8:
  pcVar19 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar20 = func_0x00f78e5c(plVar9);
  param_3 = 1;
  puVar4 = puVar6 + -0xa0;
  puVar5 = puVar6;
  auVar21 = auVar3;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar10 + 0x18)) {
    uVar13 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar10,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,lVar8,uVar13);
  }
  unaff_x21[0xf] = 0;
  *(undefined8 *)(puVar6 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(puVar6 + -0x30);
  *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)(puVar6 + -0x28);
  *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
  *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
  *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
  *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
  lVar10 = lVar8;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    lVar10 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined8 *)(puVar6 + -0x68) = 0;
  *(undefined8 *)(puVar6 + -0x70) = 0;
  *(undefined8 *)(puVar6 + -0x58) = 0;
  *(undefined8 *)(puVar6 + -0x60) = 0;
  if (auVar3._8_4_ == -1) {
    return;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,lVar10,*(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x58),uVar16);
  iVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar8,uVar16,1,puVar6 + -0x70);
  if (iVar7 == 0) {
    return;
  }
  if (*(long *)(puVar6 + -0x60) != 0) {
    lVar10 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)(puVar6 + -0x60),uRam0000000003d535c0);
    if (*(long *)(lVar8 + 0x78) == 0) {
      if (lVar10 == 0) goto LAB_01642a84;
    }
    else {
      if (lVar10 == 0) goto LAB_01642a84;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar10,0,0);
    }
    lVar17 = *(long *)(lVar10 + 0x80);
    if (lVar17 == 0) {
      return;
    }
    uVar14 = 0;
    do {
      if ((long)(int)*(uint *)(lVar17 + 0x18) <= (long)uVar14) {
        return;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      Core_DebugMenu_DebugMenu__HidePanel
                (0,lVar8,*(undefined4 *)(*(long *)(lVar17 + 0x10) + uVar14 * 4 + 0x20));
      uVar14 = uVar14 + 1;
      lVar17 = *(long *)(lVar10 + 0x80);
    } while (lVar17 != 0);
  }
LAB_01642a84:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1643aec | Core.DebugMenu.DebugUIPanelBehaviour.set_BackButtonInteractable
// ============================================================

ulong Core_DebugMenu_DebugUIPanelBehaviour__set_BackButtonInteractable
                (long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    lVar5 = func_0x00f78af4();
    return *(ulong *)(lVar5 + 0x20);
  }
  if ((bRam0000000003ec2dc6 & 1) == 0) {
    func_0x00f78a20(0x3d216c0,param_2,0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5ce68);
    bRam0000000003ec2dc6 = 1;
  }
  uVar3 = /*UnityEngine.UI.SetPropertyUtility$$SetStruct<bool>*/ func_0x018dfa24(plVar2 + 0x1a,param_2,uRam0000000003d5ce68);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((char)plVar2[0x1a] == '\0') {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (iVar1 != 0) {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar5 == 0) {
code_r0x032e3d84:
        lVar5 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar5 + 0xe8);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x38);
      uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar4,0);
      if (iVar1 != 0) {
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        if (lVar5 == 0) goto code_r0x032e3d84;
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar5,0,0);
      }
    }
  }
  iVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0));
  if (iVar1 == 0) {
    uVar6 = 4;
  }
  else if (*(char *)((long)plVar2 + 0xe9) == '\0') {
    if (*(char *)((long)plVar2 + 0xea) == '\0') {
      uVar6 = (undefined1)plVar2[0x1d];
    }
    else {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x032e38f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2,uVar6,0,*(undefined8 *)(*plVar2 + 0x2e0));
  return uVar3;
}



// ============================================================
// RVA: 0x1643b0c | Core.DebugMenu.DebugUIPanelBehaviour.get_MinimiseButton
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_MinimiseButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1643b14 | Core.DebugMenu.DebugUIPanelBehaviour.get_BackButton
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_BackButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1643b1c | Core.DebugMenu.DebugUIPanelBehaviour.get_CloseButton
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_CloseButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1643b24 | Core.DebugMenu.DebugUIPanelBehaviour.get_CanvasGroup
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_CanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1643b2c | Core.DebugMenu.DebugUIPanelBehaviour.get_StartPosition
// ============================================================

undefined4 Core_DebugMenu_DebugUIPanelBehaviour__get_StartPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1643b34 | Core.DebugMenu.DebugUIPanelBehaviour.set_StartPosition
// ============================================================

void Core_DebugMenu_DebugUIPanelBehaviour__set_StartPosition
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x70) = param_1;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643b3c | Core.DebugMenu.DebugUIPanelBehaviour.get_StackPanelIds
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_StackPanelIds(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1643b44 | Core.DebugMenu.DebugUIPanelBehaviour.set_StackPanelIds
// ============================================================

void Core_DebugMenu_DebugUIPanelBehaviour__set_StackPanelIds(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643b4c | Core.DebugMenu.DebugUIPanelBehaviour.get_ChildPanelIds
// ============================================================

undefined8 Core_DebugMenu_DebugUIPanelBehaviour__get_ChildPanelIds(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1643b54 | Core.DebugMenu.DebugUIPanelBehaviour.set_ChildPanelIds
// ============================================================

void Core_DebugMenu_DebugUIPanelBehaviour__set_ChildPanelIds(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643b5c | Core.DebugMenu.DebugUIPanelBehaviour.get_ContentHeight
// ============================================================

/* WARNING: Possible PIC construction at 0x01643c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01643c14) */
/* WARNING: Removing unreachable block (ram,0x01643c1c) */
/* WARNING: Removing unreachable block (ram,0x01643c34) */

long Core_DebugMenu_DebugUIPanelBehaviour__get_ContentHeight
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_88;
  float fStack_84;
  
  if (*(long *)(param_3 + 0x40) != 0) {
    lVar1 = /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)(param_3 + 0x40),0);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5733 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb5733 = 1;
  }
  if (*(long *)(lVar1 + 0x50) != 0) {
    plVar2 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar1 + 0x50),0);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x01643c50;
    }
    *(long **)(lVar1 + 0x68) = plVar2;
    if (*(long *)(lVar1 + 0x38) != 0) {
      param_2 = 0xc0400000;
      /*UnityEngine.RectTransform$$set_offsetMax*/ func_0x03255314(0xc0400000,*(long *)(lVar1 + 0x38),0);
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 != 0) {
        fVar9 = 3.0;
        fVar4 = (float)/*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar1,0);
        fVar10 = fVar9;
        fVar5 = (float)/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar1);
        fVar11 = fVar10;
        fVar6 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar1);
        fVar9 = fVar9 - fVar10 * fVar11;
        fVar10 = 3.0 - (fVar4 - fVar5 * fVar6);
        fVar11 = 3.0 - fVar9;
        fStack_88 = (float)/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar1);
        fStack_88 = fStack_88 - fVar10;
        fVar9 = fVar9 - fVar11;
        fStack_84 = fVar9;
        if (pcRam0000000003ec07f0 == (code *)0x0) {
          pcRam0000000003ec07f0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                      );
        }
        (*pcRam0000000003ec07f0)(lVar1,&fStack_88);
        fVar6 = (float)/*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar1);
        fVar4 = fVar9;
        fVar7 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
        fVar5 = fVar4;
        fVar8 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar1);
        fStack_88 = fVar6 + fVar10 * (fVar7 - fVar8);
        fStack_84 = fVar9 + fVar11 * (fVar4 - fVar5);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                      );
        }
        lVar1 = (*pcRam0000000003ec07e0)(lVar1,&fStack_88);
        return lVar1;
      }
    }
  }
  func_0x00f78af4();
code_r0x01643c50:
  lVar1 = func_0x00f78e5c();
  uVar3 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar1 + 0x70) = uVar3;
  *(undefined4 *)(lVar1 + 0x74) = param_2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x1643b84 | Core.DebugMenu.DebugUIPanelBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x01643c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01643c14) */
/* WARNING: Removing unreachable block (ram,0x01643c1c) */
/* WARNING: Removing unreachable block (ram,0x01643c34) */

long Core_DebugMenu_DebugUIPanelBehaviour__Awake
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_78;
  float fStack_74;
  
  if ((bRam0000000003eb5733 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb5733 = 1;
  }
  if (*(long *)(param_3 + 0x50) != 0) {
    plVar1 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_3 + 0x50),0);
    if (plVar1 != (long *)0x0) {
      if (*plVar1 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_01643c50;
    }
    *(long **)(param_3 + 0x68) = plVar1;
    if (*(long *)(param_3 + 0x38) != 0) {
      param_2 = 0xc0400000;
      /*UnityEngine.RectTransform$$set_offsetMax*/ func_0x03255314(0xc0400000,*(long *)(param_3 + 0x38),0);
      lVar2 = *(long *)(param_3 + 0x38);
      if (lVar2 != 0) {
        fVar9 = 3.0;
        fVar4 = (float)/*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar2,0);
        fVar10 = fVar9;
        fVar5 = (float)/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar2);
        fVar11 = fVar10;
        fVar6 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar2);
        fVar9 = fVar9 - fVar10 * fVar11;
        fVar10 = 3.0 - (fVar4 - fVar5 * fVar6);
        fVar11 = 3.0 - fVar9;
        fStack_78 = (float)/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar2);
        fStack_78 = fStack_78 - fVar10;
        fVar9 = fVar9 - fVar11;
        fStack_74 = fVar9;
        if (pcRam0000000003ec07f0 == (code *)0x0) {
          pcRam0000000003ec07f0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                      );
        }
        (*pcRam0000000003ec07f0)(lVar2,&fStack_78);
        fVar6 = (float)/*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(lVar2);
        fVar4 = fVar9;
        fVar7 = (float)/*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
        fVar5 = fVar4;
        fVar8 = (float)/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(lVar2);
        fStack_78 = fVar6 + fVar10 * (fVar7 - fVar8);
        fStack_74 = fVar9 + fVar11 * (fVar4 - fVar5);
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                      );
        }
        lVar2 = (*pcRam0000000003ec07e0)(lVar2,&fStack_78);
        return lVar2;
      }
    }
  }
  func_0x00f78af4();
LAB_01643c50:
  lVar2 = func_0x00f78e5c();
  uVar3 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(lVar2 + 0x70) = uVar3;
  *(undefined4 *)(lVar2 + 0x74) = param_2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1643c54 | Core.DebugMenu.DebugUIPanelBehaviour..ctor
// ============================================================

undefined1  [16]
Core_DebugMenu_DebugUIPanelBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
  *(undefined4 *)(param_3 + 0x70) = uVar1;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}



